;name: pipedemo2.asm
;
;description: Same program as pipedemo1, but this time with Fork.
;             The child writes the messages to the pipe. The parent will read the messages
;             from the read-end of the pipe and displays them.
;
;source:      Internet

bits 64

%include "../pipedemo2/pipedemo2.inc"

global main

section .bss
;uninitialized read-write data 
    p:
    .read:      resd    1                     ; read end
    .write:     resd    1                     ; write end
    inbuf:      resb    1
    .length:    equ     $-inbuf

section .data
;initialized read-write data
    childmsg:   db      "hello #1",0x0A             ;keep this in .data section
    .length:    equ     $-childmsg                  ;because #1 will be overwritten

section .rodata
;read-only data

    parentmsg:  db      "Parent received: ",0x0A
    .length:    equ     $-parentmsg
    pipeerror:  db      "pipe call error"
    .length:    equ     $-pipeerror
    forkerror:  db      "fork error"
    .length:    equ     $-forkerror

section .text

main:
    ; open pipe
    syscall pipe, p
    jns     fork
    syscall write, stdout, pipeerror, pipeerror.length
    jmp     exit

fork:
    ; fork the process
    syscall fork
    and     rax, rax
    jz      parent
    jnz     child
    syscall write, stdout, forkerror, forkerror.length
    jmp     exit

    ; write down pipe
child:
    ; close the read end of the pipe
    syscall close, rdi
    mov     edi, dword[p.write]
    ; we will write the same text 3 times, modifying the # each time
    ; so we will write hello #1,0x0A,hello #2,0x0A,hello #3,0x0A to the write-end of the pipe.
    syscall write, rdi, childmsg, childmsg.length
    inc     byte[childmsg+childmsg.length-2]
    syscall write
    inc     byte[childmsg+childmsg.length-2]
    syscall write
    jmp     exit

    ; parent reads pipe
parent:
    ; close the write end of the pipe
    mov     edi, dword[p.write]
    syscall close,rdi
    ; read pipe into buffer
    mov     edi, dword[p.read]
    syscall read, rdi, inbuf, childmsg.length*3
    ; write 'parent' message to STDOUT
    syscall write, stdout, parentmsg, parentmsg.length
    ; write buffer to STDOUT
    syscall write, stdout, inbuf, childmsg.length*3
    ; wait for the child
    syscall wait4, 0, 0, 0, 0
    ; and exit
exit:
    xor     rax,rax             ;return error code
    ret                         ;exit is handled by compiler
