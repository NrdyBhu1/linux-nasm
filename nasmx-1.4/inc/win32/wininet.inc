%ifndef __NASMX_WININET_INC__
%define __NASMX_WININET_INC__

IMPORT CommitUrlCacheEntryA, 44
IMPORT CommitUrlCacheEntryW, 44
IMPORT CreateMD5SSOHash, 16
IMPORT CreateUrlCacheContainerA, 32
IMPORT CreateUrlCacheContainerW, 32
IMPORT CreateUrlCacheEntryA, 20
IMPORT CreateUrlCacheEntryW, 20
IMPORT CreateUrlCacheGroup, 8
IMPORT DeleteIE3Cache, 16
IMPORT DeleteUrlCacheContainerA, 8
IMPORT DeleteUrlCacheContainerW, 8
IMPORT DeleteUrlCacheEntryA, 4
IMPORT DeleteUrlCacheEntryW, 4
IMPORT DeleteUrlCacheGroup, 16
IMPORT DetectAutoProxyUrl, 12
IMPORT DoConnectoidsExist, 0
IMPORT ExportCookieFileA, 8
IMPORT ExportCookieFileW, 8
IMPORT FindCloseUrlCache, 4
IMPORT FindFirstUrlCacheContainerA, 16
IMPORT FindFirstUrlCacheContainerW, 16
IMPORT FindFirstUrlCacheEntryA, 12
IMPORT FindFirstUrlCacheEntryExA, 40
IMPORT FindFirstUrlCacheEntryExW, 40
IMPORT FindFirstUrlCacheEntryW, 12
IMPORT FindFirstUrlCacheGroup, 24
IMPORT FindNextUrlCacheContainerA, 12
IMPORT FindNextUrlCacheContainerW, 12
IMPORT FindNextUrlCacheEntryA, 12
IMPORT FindNextUrlCacheEntryExA, 24
IMPORT FindNextUrlCacheEntryExW, 24
IMPORT FindNextUrlCacheEntryW, 12
IMPORT FindNextUrlCacheGroup, 12
IMPORT FindP3PPolicySymbol, 4
IMPORT ForceNexusLookup, 0
IMPORT ForceNexusLookupExW, 20
IMPORT FreeP3PObject, 4
IMPORT FreeUrlCacheSpaceA, 12
IMPORT FreeUrlCacheSpaceW, 12
IMPORT FtpCommandA, 24
IMPORT FtpCommandW, 24
IMPORT FtpCreateDirectoryA, 8
IMPORT FtpCreateDirectoryW, 8
IMPORT FtpDeleteFileA, 8
IMPORT FtpDeleteFileW, 8
IMPORT FtpFindFirstFileA, 20
IMPORT FtpFindFirstFileW, 20
IMPORT FtpGetCurrentDirectoryA, 12
IMPORT FtpGetCurrentDirectoryW, 12
IMPORT FtpGetFileA, 28
IMPORT FtpGetFileEx, 28
IMPORT FtpGetFileSize, 8
IMPORT FtpGetFileW, 28
IMPORT FtpOpenFileA, 20
IMPORT FtpOpenFileW, 20
IMPORT FtpPutFileA, 20
IMPORT FtpPutFileEx, 20
IMPORT FtpPutFileW, 20
IMPORT FtpRemoveDirectoryA, 8
IMPORT FtpRemoveDirectoryW, 8
IMPORT FtpRenameFileA, 12
IMPORT FtpRenameFileW, 12
IMPORT FtpSetCurrentDirectoryA, 8
IMPORT FtpSetCurrentDirectoryW, 8
IMPORT GetDiskInfoA, 16
IMPORT GetP3PPolicy, 16
IMPORT GetP3PRequestStatus, 4
IMPORT GetUrlCacheConfigInfoA, 12
IMPORT GetUrlCacheConfigInfoW, 12
IMPORT GetUrlCacheEntryInfoA, 12
IMPORT GetUrlCacheEntryInfoExA, 28
IMPORT GetUrlCacheEntryInfoExW, 28
IMPORT GetUrlCacheEntryInfoW, 12
IMPORT GetUrlCacheGroupAttributeA, 28
IMPORT GetUrlCacheGroupAttributeW, 28
IMPORT GetUrlCacheHeaderData, 8
IMPORT GopherCreateLocatorA, 28
IMPORT GopherCreateLocatorW, 28
IMPORT GopherFindFirstFileA, 24
IMPORT GopherFindFirstFileW, 24
IMPORT GopherGetAttributeA, 32
IMPORT GopherGetAttributeW, 32
IMPORT GopherGetLocatorTypeA, 8
IMPORT GopherGetLocatorTypeW, 8
IMPORT GopherOpenFileA, 20
IMPORT GopherOpenFileW, 20
IMPORT HttpAddRequestHeadersA, 16
IMPORT HttpAddRequestHeadersW, 16
IMPORT HttpCheckDavComplianceA, 20
IMPORT HttpCheckDavComplianceW, 20
IMPORT HttpEndRequestA, 16
IMPORT HttpEndRequestW, 16
IMPORT HttpOpenRequestA, 32
IMPORT HttpOpenRequestW, 32
IMPORT HttpQueryInfoA, 20
IMPORT HttpQueryInfoW, 20
IMPORT HttpSendRequestA, 20
IMPORT HttpSendRequestExA, 20
IMPORT HttpSendRequestExW, 20
IMPORT HttpSendRequestW, 20
IMPORT ImportCookieFileA, 4
IMPORT ImportCookieFileW, 4
IMPORT IncrementUrlCacheHeaderData, 8
IMPORT InternetAlgIdToStringA, 16
IMPORT InternetAlgIdToStringW, 16
IMPORT InternetAttemptConnect, 4
IMPORT InternetAutodial, 8
IMPORT InternetAutodialCallback, 8
IMPORT InternetAutodialHangup, 4
IMPORT InternetCanonicalizeUrlA, 16
IMPORT InternetCanonicalizeUrlW, 16
IMPORT InternetCheckConnectionA, 12
IMPORT InternetCheckConnectionW, 12
IMPORT InternetClearAllPerSiteCookieDecisions, 0
IMPORT InternetCloseHandle, 4
IMPORT InternetCombineUrlA, 20
IMPORT InternetCombineUrlW, 20
IMPORT InternetConfirmZoneCrossingA, 16
IMPORT InternetConfirmZoneCrossingW, 16
IMPORT InternetConnectA, 32
IMPORT InternetConnectW, 32
IMPORT InternetCrackUrlA, 16
IMPORT InternetCrackUrlW, 16
IMPORT InternetCreateUrlA, 16
IMPORT InternetCreateUrlW, 16
IMPORT InternetDialA, 20
IMPORT InternetDialW, 20
IMPORT InternetEnumPerSiteCookieDecisionA, 16
IMPORT InternetEnumPerSiteCookieDecisionW, 16
IMPORT InternetErrorDlg, 20
IMPORT InternetFindNextFileA, 8
IMPORT InternetFindNextFileW, 8
IMPORT InternetFortezzaCommand, 12
IMPORT InternetGetCertByURLA, 12
IMPORT InternetGetConnectedState, 8
IMPORT InternetGetConnectedStateExA, 16
IMPORT InternetGetConnectedStateExW, 16
IMPORT InternetGetCookieA, 16
IMPORT InternetGetCookieExA, 24
IMPORT InternetGetCookieExW, 24
IMPORT InternetGetCookieW, 16
IMPORT InternetGetLastResponseInfoA, 12
IMPORT InternetGetLastResponseInfoW, 12
IMPORT InternetGetPerSiteCookieDecisionA, 8
IMPORT InternetGetPerSiteCookieDecisionW, 8
IMPORT InternetGoOnlineA, 12
IMPORT InternetGoOnlineW, 12
IMPORT InternetHangUp, 8
IMPORT InternetInitializeAutoProxyDll, 4
IMPORT InternetLockRequestFile, 8
IMPORT InternetOpenA, 20
IMPORT InternetOpenUrlA, 24
IMPORT InternetOpenUrlW, 24
IMPORT InternetOpenW, 20
IMPORT InternetQueryDataAvailable, 16
IMPORT InternetQueryFortezzaStatus, 8
IMPORT InternetQueryOptionA, 16
IMPORT InternetQueryOptionW, 16
IMPORT InternetReadFile, 16
IMPORT InternetReadFileExA, 16
IMPORT InternetReadFileExW, 16
IMPORT InternetSecurityProtocolToStringA, 16
IMPORT InternetSecurityProtocolToStringW, 16
IMPORT InternetSetCookieA, 12
IMPORT InternetSetCookieExA, 20
IMPORT InternetSetCookieExW, 20
IMPORT InternetSetCookieW, 12
IMPORT InternetSetDialStateA, 12
IMPORT InternetSetDialStateW, 12
IMPORT InternetSetFilePointer, 20
IMPORT InternetSetOptionA, 16
IMPORT InternetSetOptionExA, 20
IMPORT InternetSetOptionExW, 20
IMPORT InternetSetOptionW, 16
IMPORT InternetSetPerSiteCookieDecisionA, 8
IMPORT InternetSetPerSiteCookieDecisionW, 8
IMPORT InternetSetStatusCallbackA, 8
IMPORT InternetSetStatusCallbackW, 8
IMPORT InternetShowSecurityInfoByURLA, 8
IMPORT InternetShowSecurityInfoByURLW, 8
IMPORT InternetTimeFromSystemTimeA, 16
IMPORT InternetTimeFromSystemTimeW, 16
IMPORT InternetTimeToSystemTimeA, 12
IMPORT InternetTimeToSystemTimeW, 12
IMPORT InternetUnlockRequestFile, 4
IMPORT InternetWriteFile, 16
IMPORT InternetWriteFileExA, 16
IMPORT InternetWriteFileExW, 16
IMPORT IsDomainLegalCookieDomainA, 8
IMPORT IsDomainLegalCookieDomainW, 8
IMPORT IsHostInProxyBypassList, 12
IMPORT IsProfilesEnabled, 0
IMPORT IsUrlCacheEntryExpiredA, 12
IMPORT IsUrlCacheEntryExpiredW, 12
IMPORT LoadUrlCacheContent, 0
IMPORT MapResourceToPolicy, 16
IMPORT ParseX509EncodedCertificateForListBoxEntry, 16
IMPORT PerformOperationOverUrlCacheA, 40
IMPORT PrivacyGetZonePreferenceW, 20
IMPORT PrivacySetZonePreferenceW, 16
IMPORT ReadUrlCacheEntryStream, 20
IMPORT RegisterUrlCacheNotification, 24
IMPORT ResumeSuspendedDownload, 8
IMPORT RetrieveUrlCacheEntryFileA, 16
IMPORT RetrieveUrlCacheEntryFileW, 16
IMPORT RetrieveUrlCacheEntryStreamA, 20
IMPORT RetrieveUrlCacheEntryStreamW, 20
IMPORT RunOnceUrlCache, 16
IMPORT SetUrlCacheConfigInfoA, 8
IMPORT SetUrlCacheConfigInfoW, 8
IMPORT SetUrlCacheEntryGroupA, 28
IMPORT SetUrlCacheEntryGroupW, 28
IMPORT SetUrlCacheEntryInfoA, 12
IMPORT SetUrlCacheEntryInfoW, 12
IMPORT SetUrlCacheGroupAttributeA, 24
IMPORT SetUrlCacheGroupAttributeW, 24
IMPORT SetUrlCacheHeaderData, 8
IMPORT ShowCertificate, 8
IMPORT ShowClientAuthCerts, 4
IMPORT ShowSecurityInfo, 8
IMPORT ShowX509EncodedCertificate, 12
IMPORT UnlockUrlCacheEntryFileA, 8
IMPORT UnlockUrlCacheEntryFileW, 8
IMPORT UnlockUrlCacheEntryStream, 8
IMPORT UpdateUrlCacheContentPath, 4
IMPORT UrlZonesDetach, 0

%ifdef UNICODE

%define CommitUrlCacheEntry CommitUrlCacheEntryW
%define CreateUrlCacheContainer CreateUrlCacheContainerW
%define CreateUrlCacheEntry CreateUrlCacheEntryW
%define DeleteUrlCacheContainer DeleteUrlCacheContainerW
%define DeleteUrlCacheEntry DeleteUrlCacheEntryW
%define ExportCookieFile ExportCookieFileW
%define FindFirstUrlCacheContainer FindFirstUrlCacheContainerW
%define FindFirstUrlCacheEntry FindFirstUrlCacheEntryW
%define FindFirstUrlCacheEntryEx FindFirstUrlCacheEntryExW
%define FindNextUrlCacheContainer FindNextUrlCacheContainerW
%define FindNextUrlCacheEntry FindNextUrlCacheEntryW
%define FindNextUrlCacheEntryEx FindNextUrlCacheEntryExW
%define FreeUrlCacheSpace FreeUrlCacheSpaceW
%define FtpCommand FtpCommandW
%define FtpCreateDirectory FtpCreateDirectoryW
%define FtpDeleteFile FtpDeleteFileW
%define FtpFindFirstFile FtpFindFirstFileW
%define FtpGetCurrentDirectory FtpGetCurrentDirectoryW
%define FtpGetFile FtpGetFileW
%define FtpOpenFile FtpOpenFileW
%define FtpPutFile FtpPutFileW
%define FtpRemoveDirectory FtpRemoveDirectoryW
%define FtpRenameFile FtpRenameFileW
%define FtpSetCurrentDirectory FtpSetCurrentDirectoryW
%define GetUrlCacheConfigInfo GetUrlCacheConfigInfoW
%define GetUrlCacheEntryInfo GetUrlCacheEntryInfoW
%define GetUrlCacheEntryInfoEx GetUrlCacheEntryInfoExW
%define GetUrlCacheGroupAttribute GetUrlCacheGroupAttributeW
%define GopherCreateLocator GopherCreateLocatorW
%define GopherFindFirstFile GopherFindFirstFileW
%define GopherGetAttribute GopherGetAttributeW
%define GopherGetLocatorType GopherGetLocatorTypeW
%define GopherOpenFile GopherOpenFileW
%define HttpAddRequestHeaders HttpAddRequestHeadersW
%define HttpCheckDavCompliance HttpCheckDavComplianceW
%define HttpEndRequest HttpEndRequestW
%define HttpOpenRequest HttpOpenRequestW
%define HttpQueryInfo HttpQueryInfoW
%define HttpSendRequest HttpSendRequestW
%define HttpSendRequestEx HttpSendRequestExW
%define ImportCookieFile ImportCookieFileW
%define InternetAlgIdToString InternetAlgIdToStringW
%define InternetCanonicalizeUrl InternetCanonicalizeUrlW
%define InternetCheckConnection InternetCheckConnectionW
%define InternetCombineUrl InternetCombineUrlW
%define InternetConfirmZoneCrossing InternetConfirmZoneCrossingW
%define InternetConnect InternetConnectW
%define InternetCrackUrl InternetCrackUrlW
%define InternetCreateUrl InternetCreateUrlW
%define InternetDial InternetDialW
%define InternetEnumPerSiteCookieDecision InternetEnumPerSiteCookieDecisionW
%define InternetFindNextFile InternetFindNextFileW
%define InternetGetConnectedStateEx InternetGetConnectedStateExW
%define InternetGetCookie InternetGetCookieW
%define InternetGetCookieEx InternetGetCookieExW
%define InternetGetLastResponseInfo InternetGetLastResponseInfoW
%define InternetGetPerSiteCookieDecision InternetGetPerSiteCookieDecisionW
%define InternetGoOnline InternetGoOnlineW
%define InternetOpen InternetOpenW
%define InternetOpenUrl InternetOpenUrlW
%define InternetQueryOption InternetQueryOptionW
%define InternetReadFileEx InternetReadFileExW
%define InternetSecurityProtocolToString InternetSecurityProtocolToStringW
%define InternetSetCookie InternetSetCookieW
%define InternetSetCookieEx InternetSetCookieExW
%define InternetSetDialState InternetSetDialStateW
%define InternetSetOption InternetSetOptionW
%define InternetSetOptionEx InternetSetOptionExW
%define InternetSetPerSiteCookieDecision InternetSetPerSiteCookieDecisionW
%define InternetSetStatusCallback InternetSetStatusCallbackW
%define InternetShowSecurityInfoByURL InternetShowSecurityInfoByURLW
%define InternetTimeFromSystemTime InternetTimeFromSystemTimeW
%define InternetTimeToSystemTime InternetTimeToSystemTimeW
%define InternetWriteFileEx InternetWriteFileExW
%define IsDomainLegalCookieDomain IsDomainLegalCookieDomainW
%define IsUrlCacheEntryExpired IsUrlCacheEntryExpiredW
%define PrivacySetZonePreference PrivacySetZonePreferenceW
%define RetrieveUrlCacheEntryFile RetrieveUrlCacheEntryFileW
%define RetrieveUrlCacheEntryStream RetrieveUrlCacheEntryStreamW
%define SetUrlCacheConfigInfo SetUrlCacheConfigInfoW
%define SetUrlCacheEntryGroup SetUrlCacheEntryGroupW
%define SetUrlCacheEntryInfo SetUrlCacheEntryInfoW
%define SetUrlCacheGroupAttribute SetUrlCacheGroupAttributeW
%define UnlockUrlCacheEntryFile UnlockUrlCacheEntryFileW

%else  ;// ANSI

%define CommitUrlCacheEntry CommitUrlCacheEntryA
%define CreateUrlCacheContainer CreateUrlCacheContainerA
%define CreateUrlCacheEntry CreateUrlCacheEntryA
%define DeleteUrlCacheContainer DeleteUrlCacheContainerA
%define DeleteUrlCacheEntry DeleteUrlCacheEntryA
%define ExportCookieFile ExportCookieFileA
%define FindFirstUrlCacheContainer FindFirstUrlCacheContainerA
%define FindFirstUrlCacheEntry FindFirstUrlCacheEntryA
%define FindFirstUrlCacheEntryEx FindFirstUrlCacheEntryExA
%define FindNextUrlCacheContainer FindNextUrlCacheContainerA
%define FindNextUrlCacheEntry FindNextUrlCacheEntryA
%define FindNextUrlCacheEntryEx FindNextUrlCacheEntryExA
%define FreeUrlCacheSpace FreeUrlCacheSpaceA
%define FtpCommand FtpCommandA
%define FtpCreateDirectory FtpCreateDirectoryA
%define FtpDeleteFile FtpDeleteFileA
%define FtpFindFirstFile FtpFindFirstFileA
%define FtpGetCurrentDirectory FtpGetCurrentDirectoryA
%define FtpGetFile FtpGetFileA
%define FtpOpenFile FtpOpenFileA
%define FtpPutFile FtpPutFileA
%define FtpRemoveDirectory FtpRemoveDirectoryA
%define FtpRenameFile FtpRenameFileA
%define FtpSetCurrentDirectory FtpSetCurrentDirectoryA
%define GetUrlCacheConfigInfo GetUrlCacheConfigInfoA
%define GetUrlCacheEntryInfo GetUrlCacheEntryInfoA
%define GetUrlCacheEntryInfoEx GetUrlCacheEntryInfoExA
%define GetUrlCacheGroupAttribute GetUrlCacheGroupAttributeA
%define GopherCreateLocator GopherCreateLocatorA
%define GopherFindFirstFile GopherFindFirstFileA
%define GopherGetAttribute GopherGetAttributeA
%define GopherGetLocatorType GopherGetLocatorTypeA
%define GopherOpenFile GopherOpenFileA
%define HttpAddRequestHeaders HttpAddRequestHeadersA
%define HttpCheckDavCompliance HttpCheckDavComplianceA
%define HttpEndRequest HttpEndRequestA
%define HttpOpenRequest HttpOpenRequestA
%define HttpQueryInfo HttpQueryInfoA
%define HttpSendRequest HttpSendRequestA
%define HttpSendRequestEx HttpSendRequestExA
%define ImportCookieFile ImportCookieFileA
%define InternetAlgIdToString InternetAlgIdToStringA
%define InternetCanonicalizeUrl InternetCanonicalizeUrlA
%define InternetCheckConnection InternetCheckConnectionA
%define InternetCombineUrl InternetCombineUrlA
%define InternetConfirmZoneCrossing InternetConfirmZoneCrossingA
%define InternetConnect InternetConnectA
%define InternetCrackUrl InternetCrackUrlA
%define InternetCreateUrl InternetCreateUrlA
%define InternetDial InternetDialA
%define InternetEnumPerSiteCookieDecision InternetEnumPerSiteCookieDecisionA
%define InternetFindNextFile InternetFindNextFileA
%define InternetGetConnectedStateEx InternetGetConnectedStateExA
%define InternetGetCookie InternetGetCookieA
%define InternetGetCookieEx InternetGetCookieExA
%define InternetGetLastResponseInfo InternetGetLastResponseInfoA
%define InternetGetPerSiteCookieDecision InternetGetPerSiteCookieDecisionA
%define InternetGoOnline InternetGoOnlineA
%define InternetOpen InternetOpenA
%define InternetOpenUrl InternetOpenUrlA
%define InternetQueryOption InternetQueryOptionA
%define InternetReadFileEx InternetReadFileExA
%define InternetSecurityProtocolToString InternetSecurityProtocolToStringA
%define InternetSetCookie InternetSetCookieA
%define InternetSetCookieEx InternetSetCookieExA
%define InternetSetDialState InternetSetDialStateA
%define InternetSetOption InternetSetOptionA
%define InternetSetOptionEx InternetSetOptionExA
%define InternetSetPerSiteCookieDecision InternetSetPerSiteCookieDecisionA
%define InternetSetStatusCallback InternetSetStatusCallbackA
%define InternetShowSecurityInfoByURL InternetShowSecurityInfoByURLA
%define InternetTimeFromSystemTime InternetTimeFromSystemTimeA
%define InternetTimeToSystemTime InternetTimeToSystemTimeA
%define InternetWriteFileEx InternetWriteFileExA
%define IsDomainLegalCookieDomain IsDomainLegalCookieDomainA
%define IsUrlCacheEntryExpired IsUrlCacheEntryExpiredA
%define PrivacySetZonePreference PrivacySetZonePreferenceA
%define RetrieveUrlCacheEntryFile RetrieveUrlCacheEntryFileA
%define RetrieveUrlCacheEntryStream RetrieveUrlCacheEntryStreamA
%define SetUrlCacheConfigInfo SetUrlCacheConfigInfoA
%define SetUrlCacheEntryGroup SetUrlCacheEntryGroupA
%define SetUrlCacheEntryInfo SetUrlCacheEntryInfoA
%define SetUrlCacheGroupAttribute SetUrlCacheGroupAttributeA
%define UnlockUrlCacheEntryFile UnlockUrlCacheEntryFileA

%endif  ;// UNICODE

%endif  ;// __NASMX_WININET_INC__