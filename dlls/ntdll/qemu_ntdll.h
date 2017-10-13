#ifndef NTDLL_H
#define NTDLL_H

enum ntdll_calls
{
    CALL___C_SPECIFIC_HANDLER = 0,
    CALL___ISASCII,
    CALL___ISCSYM,
    CALL___ISCSYMF,
    CALL___TOASCII,
    CALL__ATOI64,
    CALL__I64TOA,
    CALL__ITOA,
    CALL__LOCAL_UNWIND,
    CALL__LTOA,
    CALL__MEMCCPY,
    CALL__MEMICMP,
    CALL__SPLITPATH,
    CALL__STRICMP,
    CALL__STRLWR,
    CALL__STRNICMP,
    CALL__STRUPR,
    CALL__TOLOWER,
    CALL__TOUPPER,
    CALL__UI64TOA,
    CALL__ULTOA,
    CALL_ATOI,
    CALL_ATOL,
    CALL_ETWEVENTENABLED,
    CALL_ETWEVENTREGISTER,
    CALL_ETWEVENTSETINFORMATION,
    CALL_ETWEVENTUNREGISTER,
    CALL_ETWEVENTWRITE,
    CALL_ETWREGISTERTRACEGUIDSA,
    CALL_ETWREGISTERTRACEGUIDSW,
    CALL_ETWUNREGISTERTRACEGUIDS,
    CALL_ISALNUM,
    CALL_ISALPHA,
    CALL_ISCNTRL,
    CALL_ISDIGIT,
    CALL_ISGRAPH,
    CALL_ISLOWER,
    CALL_ISPRINT,
    CALL_ISPUNCT,
    CALL_ISSPACE,
    CALL_ISUPPER,
    CALL_ISXDIGIT,
    CALL_LDRFINDENTRYFORADDRESS,
    CALL_MEMCHR,
    CALL_MEMCMP,
    CALL_MEMCPY,
    CALL_MEMMOVE,
    CALL_MEMSET,
    CALL_NTACCEPTCONNECTPORT,
    CALL_NTACCESSCHECKANDAUDITALARM,
    CALL_NTADJUSTGROUPSTOKEN,
    CALL_NTADJUSTPRIVILEGESTOKEN,
    CALL_NTALERTRESUMETHREAD,
    CALL_NTALERTTHREAD,
    CALL_NTALLOCATELOCALLYUNIQUEID,
    CALL_NTALLOCATEUUIDS,
    CALL_NTASSIGNPROCESSTOJOBOBJECT,
    CALL_NTCANCELIOFILE,
    CALL_NTCANCELIOFILEEX,
    CALL_NTCANCELTIMER,
    CALL_NTCLEAREVENT,
    CALL_NTCLOSE,
    CALL_NTCOMPLETECONNECTPORT,
    CALL_NTCONNECTPORT,
    CALL_NTCREATEDIRECTORYOBJECT,
    CALL_NTCREATEEVENT,
    CALL_NTCREATEFILE,
    CALL_NTCREATEIOCOMPLETION,
    CALL_NTCREATEJOBOBJECT,
    CALL_NTCREATEKEY,
    CALL_NTCREATEKEYEDEVENT,
    CALL_NTCREATEKEYTRANSACTED,
    CALL_NTCREATEMAILSLOTFILE,
    CALL_NTCREATEMUTANT,
    CALL_NTCREATENAMEDPIPEFILE,
    CALL_NTCREATEPAGINGFILE,
    CALL_NTCREATEPORT,
    CALL_NTCREATESEMAPHORE,
    CALL_NTCREATESYMBOLICLINKOBJECT,
    CALL_NTCREATETIMER,
    CALL_NTDELAYEXECUTION,
    CALL_NTDELETEFILE,
    CALL_NTDELETEKEY,
    CALL_NTDELETEVALUEKEY,
    CALL_NTDEVICEIOCONTROLFILE,
    CALL_NTDISPLAYSTRING,
    CALL_NTDUPLICATEOBJECT,
    CALL_NTDUPLICATETOKEN,
    CALL_NTENUMERATEKEY,
    CALL_NTENUMERATEVALUEKEY,
    CALL_NTFLUSHBUFFERSFILE,
    CALL_NTFLUSHINSTRUCTIONCACHE,
    CALL_NTFLUSHKEY,
    CALL_NTFSCONTROLFILE,
    CALL_NTGETCURRENTPROCESSORNUMBER,
    CALL_NTINITIATEPOWERACTION,
    CALL_NTISPROCESSINJOB,
    CALL_NTLISTENPORT,
    CALL_NTLOADKEY,
    CALL_NTLOADKEY2,
    CALL_NTLOCKFILE,
    CALL_NTMAKETEMPORARYOBJECT,
    CALL_NTNOTIFYCHANGEDIRECTORYFILE,
    CALL_NTNOTIFYCHANGEKEY,
    CALL_NTNOTIFYCHANGEMULTIPLEKEYS,
    CALL_NTOPENDIRECTORYOBJECT,
    CALL_NTOPENEVENT,
    CALL_NTOPENFILE,
    CALL_NTOPENIOCOMPLETION,
    CALL_NTOPENJOBOBJECT,
    CALL_NTOPENKEY,
    CALL_NTOPENKEYEDEVENT,
    CALL_NTOPENKEYEX,
    CALL_NTOPENKEYTRANSACTED,
    CALL_NTOPENKEYTRANSACTEDEX,
    CALL_NTOPENMUTANT,
    CALL_NTOPENPROCESS,
    CALL_NTOPENPROCESSTOKEN,
    CALL_NTOPENPROCESSTOKENEX,
    CALL_NTOPENSEMAPHORE,
    CALL_NTOPENSYMBOLICLINKOBJECT,
    CALL_NTOPENTHREAD,
    CALL_NTOPENTHREADTOKEN,
    CALL_NTOPENTHREADTOKENEX,
    CALL_NTOPENTIMER,
    CALL_NTPOWERINFORMATION,
    CALL_NTPRIVILEGECHECK,
    CALL_NTPULSEEVENT,
    CALL_NTQUERYATTRIBUTESFILE,
    CALL_NTQUERYDIRECTORYOBJECT,
    CALL_NTQUERYEAFILE,
    CALL_NTQUERYEVENT,
    CALL_NTQUERYFULLATTRIBUTESFILE,
    CALL_NTQUERYINFORMATIONFILE,
    CALL_NTQUERYINFORMATIONJOBOBJECT,
    CALL_NTQUERYINFORMATIONPROCESS,
    CALL_NTQUERYINFORMATIONTHREAD,
    CALL_NTQUERYINFORMATIONTOKEN,
    CALL_NTQUERYIOCOMPLETION,
    CALL_NTQUERYKEY,
    CALL_NTQUERYLICENSEVALUE,
    CALL_NTQUERYMULTIPLEVALUEKEY,
    CALL_NTQUERYMUTANT,
    CALL_NTQUERYOBJECT,
    CALL_NTQUERYSECURITYOBJECT,
    CALL_NTQUERYSEMAPHORE,
    CALL_NTQUERYSYMBOLICLINKOBJECT,
    CALL_NTQUERYSYSTEMINFORMATION,
    CALL_NTQUERYSYSTEMINFORMATIONEX,
    CALL_NTQUERYTIMER,
    CALL_NTQUERYTIMERRESOLUTION,
    CALL_NTQUERYVALUEKEY,
    CALL_NTQUERYVOLUMEINFORMATIONFILE,
    CALL_NTQUEUEAPCTHREAD,
    CALL_NTRAISEEXCEPTION,
    CALL_NTRAISEHARDERROR,
    CALL_NTREADFILE,
    CALL_NTREADFILESCATTER,
    CALL_NTREGISTERTHREADTERMINATEPORT,
    CALL_NTRELEASEKEYEDEVENT,
    CALL_NTRELEASEMUTANT,
    CALL_NTRELEASESEMAPHORE,
    CALL_NTREMOVEIOCOMPLETION,
    CALL_NTRENAMEKEY,
    CALL_NTREPLACEKEY,
    CALL_NTREPLYWAITRECEIVEPORT,
    CALL_NTREQUESTWAITREPLYPORT,
    CALL_NTRESETEVENT,
    CALL_NTRESTOREKEY,
    CALL_NTRESUMEPROCESS,
    CALL_NTRESUMETHREAD,
    CALL_NTSAVEKEY,
    CALL_NTSECURECONNECTPORT,
    CALL_NTSETEAFILE,
    CALL_NTSETEVENT,
    CALL_NTSETINFORMATIONFILE,
    CALL_NTSETINFORMATIONJOBOBJECT,
    CALL_NTSETINFORMATIONKEY,
    CALL_NTSETINFORMATIONOBJECT,
    CALL_NTSETINFORMATIONPROCESS,
    CALL_NTSETINFORMATIONTHREAD,
    CALL_NTSETINFORMATIONTOKEN,
    CALL_NTSETINTERVALPROFILE,
    CALL_NTSETIOCOMPLETION,
    CALL_NTSETLDTENTRIES,
    CALL_NTSETSYSTEMINFORMATION,
    CALL_NTSETTIMER,
    CALL_NTSETTIMERRESOLUTION,
    CALL_NTSETVALUEKEY,
    CALL_NTSETVOLUMEINFORMATIONFILE,
    CALL_NTSHUTDOWNSYSTEM,
    CALL_NTSIGNALANDWAITFORSINGLEOBJECT,
    CALL_NTSUSPENDPROCESS,
    CALL_NTSUSPENDTHREAD,
    CALL_NTSYSTEMDEBUGCONTROL,
    CALL_NTTERMINATEJOBOBJECT,
    CALL_NTTERMINATEPROCESS,
    CALL_NTTERMINATETHREAD,
    CALL_NTUNLOADKEY,
    CALL_NTUNLOCKFILE,
    CALL_NTWAITFORKEYEDEVENT,
    CALL_NTWAITFORMULTIPLEOBJECTS,
    CALL_NTWAITFORSINGLEOBJECT,
    CALL_NTWRITEFILE,
    CALL_NTWRITEFILEGATHER,
    CALL_NTYIELDEXECUTION,
    CALL_RTLACQUIREPEBLOCK,
    CALL_RTLACQUIRERESOURCEEXCLUSIVE,
    CALL_RTLACQUIRERESOURCESHARED,
    CALL_RTLACQUIRESRWLOCKEXCLUSIVE,
    CALL_RTLACQUIRESRWLOCKSHARED,
    CALL_RTLACTIVATEACTIVATIONCONTEXT,
    CALL_RTLADDFUNCTIONTABLE,
    CALL_RTLADDREFACTIVATIONCONTEXT,
    CALL_RTLADDVECTOREDCONTINUEHANDLER,
    CALL_RTLADDVECTOREDEXCEPTIONHANDLER,
    CALL_RTLALLOCATEHEAP,
    CALL_RTLANSICHARTOUNICODECHAR,
    CALL_RTLANSISTRINGTOUNICODESIZE,
    CALL_RTLANSISTRINGTOUNICODESTRING,
    CALL_RTLAPPENDASCIIZTOSTRING,
    CALL_RTLAPPENDSTRINGTOSTRING,
    CALL_RTLAPPENDUNICODESTRINGTOSTRING,
    CALL_RTLAPPENDUNICODETOSTRING,
    CALL_RTLAREALLACCESSESGRANTED,
    CALL_RTLAREANYACCESSESGRANTED,
    CALL_RTLASSERT,
    CALL_RTLCAPTURESTACKBACKTRACE,
    CALL_RTLCHARTOINTEGER,
    CALL_RTLCHECKREGISTRYKEY,
    CALL_RTLCOMPACTHEAP,
    CALL_RTLCOMPAREMEMORY,
    CALL_RTLCOMPAREMEMORYULONG,
    CALL_RTLCOMPARESTRING,
    CALL_RTLCOMPAREUNICODESTRING,
    CALL_RTLCOMPAREUNICODESTRINGS,
    CALL_RTLCOMPRESSBUFFER,
    CALL_RTLCOMPUTECRC32,
    CALL_RTLCOPYLUID,
    CALL_RTLCOPYLUIDANDATTRIBUTESARRAY,
    CALL_RTLCOPYMEMORY,
    CALL_RTLCOPYSTRING,
    CALL_RTLCOPYUNICODESTRING,
    CALL_RTLCREATEACTIVATIONCONTEXT,
    CALL_RTLCREATEHEAP,
    CALL_RTLCREATEUNICODESTRING,
    CALL_RTLCREATEUNICODESTRINGFROMASCIIZ,
    CALL_RTLCREATEUSERPROCESS,
    CALL_RTLCREATEUSERTHREAD,
    CALL_RTLDEACTIVATEACTIVATIONCONTEXT,
    CALL_RTLDECODEPOINTER,
    CALL_RTLDECOMPRESSBUFFER,
    CALL_RTLDECOMPRESSFRAGMENT,
    CALL_RTLDELETECRITICALSECTION,
    CALL_RTLDELETEFUNCTIONTABLE,
    CALL_RTLDELETEREGISTRYVALUE,
    CALL_RTLDELETERESOURCE,
    CALL_RTLDELETESECURITYOBJECT,
    CALL_RTLDESTROYHEAP,
    CALL_RTLDETERMINEDOSPATHNAMETYPE_U,
    CALL_RTLDOSPATHNAMETONTPATHNAME_U,
    CALL_RTLDOSSEARCHPATH_U,
    CALL_RTLDOWNCASEUNICODECHAR,
    CALL_RTLDOWNCASEUNICODESTRING,
    CALL_RTLDUMPRESOURCE,
    CALL_RTLDUPLICATEUNICODESTRING,
    CALL_RTLENCODEPOINTER,
    CALL_RTLENTERCRITICALSECTION,
    CALL_RTLEQUALCOMPUTERNAME,
    CALL_RTLEQUALDOMAINNAME,
    CALL_RTLEQUALLUID,
    CALL_RTLEQUALSTRING,
    CALL_RTLEQUALUNICODESTRING,
    CALL_RTLERASEUNICODESTRING,
    CALL_RTLFILLMEMORY,
    CALL_RTLFILLMEMORYULONG,
    CALL_RTLFINDACTIVATIONCONTEXTSECTIONGUID,
    CALL_RTLFINDACTIVATIONCONTEXTSECTIONSTRING,
    CALL_RTLFINDCHARINUNICODESTRING,
    CALL_RTLFIRSTENTRYSLIST,
    CALL_RTLFORMATCURRENTUSERKEYPATH,
    CALL_RTLFREEANSISTRING,
    CALL_RTLFREEHEAP,
    CALL_RTLFREEOEMSTRING,
    CALL_RTLFREETHREADACTIVATIONCONTEXTSTACK,
    CALL_RTLFREEUNICODESTRING,
    CALL_RTLGETACTIVEACTIVATIONCONTEXT,
    CALL_RTLGETCOMPRESSIONWORKSPACESIZE,
    CALL_RTLGETCURRENTDIRECTORY_U,
    CALL_RTLGETCURRENTPEB,
    CALL_RTLGETCURRENTPROCESSORNUMBEREX,
    CALL_RTLGETCURRENTTRANSACTION,
    CALL_RTLGETFULLPATHNAME_U,
    CALL_RTLGETLASTNTSTATUS,
    CALL_RTLGETLASTWIN32ERROR,
    CALL_RTLGETLONGESTNTPATHLENGTH,
    CALL_RTLGETNTGLOBALFLAGS,
    CALL_RTLGETNTPRODUCTTYPE,
    CALL_RTLGETNTVERSIONNUMBERS,
    CALL_RTLGETPROCESSHEAPS,
    CALL_RTLGETPRODUCTINFO,
    CALL_RTLGETTHREADERRORMODE,
    CALL_RTLGETVERSION,
    CALL_RTLGUIDFROMSTRING,
    CALL_RTLHASHUNICODESTRING,
    CALL_RTLINITANSISTRING,
    CALL_RTLINITANSISTRINGEX,
    CALL_RTLINITIALIZECONDITIONVARIABLE,
    CALL_RTLINITIALIZECRITICALSECTION,
    CALL_RTLINITIALIZECRITICALSECTIONANDSPINCOUNT,
    CALL_RTLINITIALIZECRITICALSECTIONEX,
    CALL_RTLINITIALIZEGENERICTABLE,
    CALL_RTLINITIALIZEGENERICTABLEAVL,
    CALL_RTLINITIALIZERESOURCE,
    CALL_RTLINITIALIZESLISTHEAD,
    CALL_RTLINITIALIZESRWLOCK,
    CALL_RTLINITSTRING,
    CALL_RTLINITUNICODESTRING,
    CALL_RTLINITUNICODESTRINGEX,
    CALL_RTLINSERTELEMENTGENERICTABLEAVL,
    CALL_RTLINTEGERTOCHAR,
    CALL_RTLINTEGERTOUNICODESTRING,
    CALL_RTLINTERLOCKEDFLUSHSLIST,
    CALL_RTLINTERLOCKEDPOPENTRYSLIST,
    CALL_RTLINTERLOCKEDPUSHENTRYSLIST,
    CALL_RTLINTERLOCKEDPUSHLISTSLIST,
    CALL_RTLINTERLOCKEDPUSHLISTSLISTEX,
    CALL_RTLIPV4ADDRESSTOSTRINGA,
    CALL_RTLIPV4ADDRESSTOSTRINGEXA,
    CALL_RTLIPV4ADDRESSTOSTRINGEXW,
    CALL_RTLIPV4ADDRESSTOSTRINGW,
    CALL_RTLIPV4STRINGTOADDRESSEXW,
    CALL_RTLISACTIVATIONCONTEXTACTIVE,
    CALL_RTLISCRITICALSECTIONLOCKED,
    CALL_RTLISCRITICALSECTIONLOCKEDBYTHREAD,
    CALL_RTLISDOSDEVICENAME_U,
    CALL_RTLISNAMELEGALDOS8DOT3,
    CALL_RTLISTEXTUNICODE,
    CALL_RTLLEAVECRITICALSECTION,
    CALL_RTLLOCKHEAP,
    CALL_RTLLOOKUPFUNCTIONENTRY,
    CALL_RTLMAPGENERICMASK,
    CALL_RTLMOVEMEMORY,
    CALL_RTLMULTIBYTETOUNICODEN,
    CALL_RTLMULTIBYTETOUNICODESIZE,
    CALL_RTLNEWSECURITYOBJECT,
    CALL_RTLNTSTATUSTODOSERROR,
    CALL_RTLNTSTATUSTODOSERRORNOTEB,
    CALL_RTLOEMSTRINGTOUNICODESIZE,
    CALL_RTLOEMSTRINGTOUNICODESTRING,
    CALL_RTLOEMTOUNICODEN,
    CALL_RTLOPENCURRENTUSER,
    CALL_RTLPCTOFILEHEADER,
    CALL_RTLPNTCREATEKEY,
    CALL_RTLPNTENUMERATESUBKEY,
    CALL_RTLPNTMAKETEMPORARYKEY,
    CALL_RTLPNTOPENKEY,
    CALL_RTLPNTQUERYVALUEKEY,
    CALL_RTLPNTSETVALUEKEY,
    CALL_RTLPREFIXSTRING,
    CALL_RTLPREFIXUNICODESTRING,
    CALL_RTLPUNWAITCRITICALSECTION,
    CALL_RTLPWAITFORCRITICALSECTION,
    CALL_RTLQUERYDEPTHSLIST,
    CALL_RTLQUERYHEAPINFORMATION,
    CALL_RTLQUERYINFORMATIONACTIVATIONCONTEXT,
    CALL_RTLQUERYREGISTRYVALUES,
    CALL_RTLRAISESTATUS,
    CALL_RTLRANDOM,
    CALL_RTLREALLOCATEHEAP,
    CALL_RTLRELEASEACTIVATIONCONTEXT,
    CALL_RTLRELEASEPEBLOCK,
    CALL_RTLRELEASERESOURCE,
    CALL_RTLRELEASESRWLOCKEXCLUSIVE,
    CALL_RTLRELEASESRWLOCKSHARED,
    CALL_RTLREMOVEVECTOREDCONTINUEHANDLER,
    CALL_RTLREMOVEVECTOREDEXCEPTIONHANDLER,
    CALL_RTLRESTORECONTEXT,
    CALL_RTLRUNONCEBEGININITIALIZE,
    CALL_RTLRUNONCECOMPLETE,
    CALL_RTLRUNONCEEXECUTEONCE,
    CALL_RTLRUNONCEINITIALIZE,
    CALL_RTLSETCRITICALSECTIONSPINCOUNT,
    CALL_RTLSETCURRENTDIRECTORY_U,
    CALL_RTLSETCURRENTTRANSACTION,
    CALL_RTLSETHEAPINFORMATION,
    CALL_RTLSETLASTWIN32ERROR,
    CALL_RTLSETLASTWIN32ERRORANDNTSTATUSFROMNTSTATUS,
    CALL_RTLSETTHREADERRORMODE,
    CALL_RTLSIZEHEAP,
    CALL_RTLSLEEPCONDITIONVARIABLECS,
    CALL_RTLSLEEPCONDITIONVARIABLESRW,
    CALL_RTLSTRINGFROMGUID,
    CALL_RTLTRYACQUIRESRWLOCKEXCLUSIVE,
    CALL_RTLTRYACQUIRESRWLOCKSHARED,
    CALL_RTLTRYENTERCRITICALSECTION,
    CALL_RTLUNICODESTRINGTOANSISIZE,
    CALL_RTLUNICODESTRINGTOANSISTRING,
    CALL_RTLUNICODESTRINGTOINTEGER,
    CALL_RTLUNICODESTRINGTOOEMSIZE,
    CALL_RTLUNICODESTRINGTOOEMSTRING,
    CALL_RTLUNICODETOMULTIBYTEN,
    CALL_RTLUNICODETOMULTIBYTESIZE,
    CALL_RTLUNICODETOOEMN,
    CALL_RTLUNIFORM,
    CALL_RTLUNLOCKHEAP,
    CALL_RTLUNWINDEX,
    CALL_RTLUPCASEUNICODECHAR,
    CALL_RTLUPCASEUNICODESTRING,
    CALL_RTLUPCASEUNICODESTRINGTOANSISTRING,
    CALL_RTLUPCASEUNICODESTRINGTOCOUNTEDOEMSTRING,
    CALL_RTLUPCASEUNICODESTRINGTOOEMSTRING,
    CALL_RTLUPCASEUNICODETOMULTIBYTEN,
    CALL_RTLUPCASEUNICODETOOEMN,
    CALL_RTLUPPERCHAR,
    CALL_RTLUPPERSTRING,
    CALL_RTLVALIDATEHEAP,
    CALL_RTLVERIFYVERSIONINFO,
    CALL_RTLVIRTUALUNWIND,
    CALL_RTLWAKEALLCONDITIONVARIABLE,
    CALL_RTLWAKECONDITIONVARIABLE,
    CALL_RTLWALKHEAP,
    CALL_RTLWRITEREGISTRYVALUE,
    CALL_RTLZEROMEMORY,
    CALL_RTLZOMBIFYACTIVATIONCONTEXT,
    CALL_SET_CALLBACKS,
    CALL_STRCAT,
    CALL_STRCHR,
    CALL_STRCMP,
    CALL_STRCPY,
    CALL_STRCSPN,
    CALL_STRLEN,
    CALL_STRNCAT,
    CALL_STRNCMP,
    CALL_STRNCPY,
    CALL_STRPBRK,
    CALL_STRRCHR,
    CALL_STRSPN,
    CALL_STRSTR,
    CALL_STRTOL,
    CALL_STRTOUL,
    CALL_TOLOWER,
    CALL_TOUPPER,
    CALL_VERSETCONDITIONMASK,
    CALL_WCSRCHR,
    CALL_WINSQMENDSESSION,
    CALL_WINSQMISOPTEDIN,
    CALL_WINSQMSTARTSESSION,
};

#ifdef QEMU_DLL_GUEST

typedef void LDR_MODULE;
NTSTATUS WINAPI ntdll_LdrFindEntryForAddress(const void *addr, LDR_MODULE **mod);
PVOID WINAPI ntdll_RtlImageDirectoryEntryToData( HMODULE module, BOOL image, WORD dir, ULONG *size );
NTSTATUS WINAPI ntdll_NtTerminateProcess(HANDLE handle, LONG exit_code);

#ifdef _WIN64
PRUNTIME_FUNCTION NTAPI ntdll_RtlLookupFunctionEntry(DWORD64 pc, DWORD64 *base, UNWIND_HISTORY_TABLE *history);
PEXCEPTION_ROUTINE WINAPI ntdll_RtlVirtualUnwind(DWORD type, DWORD64 base, DWORD64 pc,
        PRUNTIME_FUNCTION function, PCONTEXT context, PVOID *data, PDWORD64 frame_ret,
        PKNONVOLATILE_CONTEXT_POINTERS ctx_ptr);
#endif

void WINAPI qemu_exception_handler(EXCEPTION_POINTERS *except);

#else

extern const struct qemu_ops *qemu_ops;

void qemu___C_specific_handler(struct qemu_syscall *call);
void qemu___isascii(struct qemu_syscall *call);
void qemu___iscsym(struct qemu_syscall *call);
void qemu___iscsymf(struct qemu_syscall *call);
void qemu___toascii(struct qemu_syscall *call);
void qemu__atoi64(struct qemu_syscall *call);
void qemu__i64toa(struct qemu_syscall *call);
void qemu__itoa(struct qemu_syscall *call);
void qemu__local_unwind(struct qemu_syscall *call);
void qemu__ltoa(struct qemu_syscall *call);
void qemu__memccpy(struct qemu_syscall *call);
void qemu__memicmp(struct qemu_syscall *call);
void qemu__splitpath(struct qemu_syscall *call);
void qemu__stricmp(struct qemu_syscall *call);
void qemu__strlwr(struct qemu_syscall *call);
void qemu__strnicmp(struct qemu_syscall *call);
void qemu__strupr(struct qemu_syscall *call);
void qemu__tolower(struct qemu_syscall *call);
void qemu__toupper(struct qemu_syscall *call);
void qemu__ui64toa(struct qemu_syscall *call);
void qemu__ultoa(struct qemu_syscall *call);
void qemu_atoi(struct qemu_syscall *call);
void qemu_atol(struct qemu_syscall *call);
void qemu_EtwEventEnabled(struct qemu_syscall *call);
void qemu_EtwEventRegister(struct qemu_syscall *call);
void qemu_EtwEventSetInformation(struct qemu_syscall *call);
void qemu_EtwEventUnregister(struct qemu_syscall *call);
void qemu_EtwEventWrite(struct qemu_syscall *call);
void qemu_EtwRegisterTraceGuidsA(struct qemu_syscall *call);
void qemu_EtwRegisterTraceGuidsW(struct qemu_syscall *call);
void qemu_EtwUnregisterTraceGuids(struct qemu_syscall *call);
void qemu_isalnum(struct qemu_syscall *call);
void qemu_isalpha(struct qemu_syscall *call);
void qemu_iscntrl(struct qemu_syscall *call);
void qemu_isdigit(struct qemu_syscall *call);
void qemu_isgraph(struct qemu_syscall *call);
void qemu_islower(struct qemu_syscall *call);
void qemu_isprint(struct qemu_syscall *call);
void qemu_ispunct(struct qemu_syscall *call);
void qemu_isspace(struct qemu_syscall *call);
void qemu_isupper(struct qemu_syscall *call);
void qemu_isxdigit(struct qemu_syscall *call);
void qemu_LdrFindEntryForAddress(struct qemu_syscall *call);
void qemu_memchr(struct qemu_syscall *call);
void qemu_memcmp(struct qemu_syscall *call);
void qemu_memcpy(struct qemu_syscall *call);
void qemu_memmove(struct qemu_syscall *call);
void qemu_memset(struct qemu_syscall *call);
void qemu_NtAcceptConnectPort(struct qemu_syscall *call);
void qemu_NtAccessCheckAndAuditAlarm(struct qemu_syscall *call);
void qemu_NtAdjustGroupsToken(struct qemu_syscall *call);
void qemu_NtAdjustPrivilegesToken(struct qemu_syscall *call);
void qemu_NtAlertResumeThread(struct qemu_syscall *call);
void qemu_NtAlertThread(struct qemu_syscall *call);
void qemu_NtAllocateLocallyUniqueId(struct qemu_syscall *call);
void qemu_NtAllocateUuids(struct qemu_syscall *call);
void qemu_NtAssignProcessToJobObject(struct qemu_syscall *call);
void qemu_NtCancelIoFile(struct qemu_syscall *call);
void qemu_NtCancelIoFileEx(struct qemu_syscall *call);
void qemu_NtCancelTimer(struct qemu_syscall *call);
void qemu_NtClearEvent(struct qemu_syscall *call);
void qemu_NtClose(struct qemu_syscall *call);
void qemu_NtCompleteConnectPort(struct qemu_syscall *call);
void qemu_NtConnectPort(struct qemu_syscall *call);
void qemu_NtCreateDirectoryObject(struct qemu_syscall *call);
void qemu_NtCreateEvent(struct qemu_syscall *call);
void qemu_NtCreateFile(struct qemu_syscall *call);
void qemu_NtCreateIoCompletion(struct qemu_syscall *call);
void qemu_NtCreateJobObject(struct qemu_syscall *call);
void qemu_NtCreateKey(struct qemu_syscall *call);
void qemu_NtCreateKeyedEvent(struct qemu_syscall *call);
void qemu_NtCreateKeyTransacted(struct qemu_syscall *call);
void qemu_NtCreateMailslotFile(struct qemu_syscall *call);
void qemu_NtCreateMutant(struct qemu_syscall *call);
void qemu_NtCreateNamedPipeFile(struct qemu_syscall *call);
void qemu_NtCreatePagingFile(struct qemu_syscall *call);
void qemu_NtCreatePort(struct qemu_syscall *call);
void qemu_NtCreateSemaphore(struct qemu_syscall *call);
void qemu_NtCreateSymbolicLinkObject(struct qemu_syscall *call);
void qemu_NtCreateTimer(struct qemu_syscall *call);
void qemu_NtDelayExecution(struct qemu_syscall *call);
void qemu_NtDeleteFile(struct qemu_syscall *call);
void qemu_NtDeleteKey(struct qemu_syscall *call);
void qemu_NtDeleteValueKey(struct qemu_syscall *call);
void qemu_NtDeviceIoControlFile(struct qemu_syscall *call);
void qemu_NtDisplayString(struct qemu_syscall *call);
void qemu_NtDuplicateObject(struct qemu_syscall *call);
void qemu_NtDuplicateToken(struct qemu_syscall *call);
void qemu_NtEnumerateKey(struct qemu_syscall *call);
void qemu_NtEnumerateValueKey(struct qemu_syscall *call);
void qemu_NtFlushBuffersFile(struct qemu_syscall *call);
void qemu_NtFlushInstructionCache(struct qemu_syscall *call);
void qemu_NtFlushKey(struct qemu_syscall *call);
void qemu_NtFsControlFile(struct qemu_syscall *call);
void qemu_NtGetCurrentProcessorNumber(struct qemu_syscall *call);
void qemu_NtInitiatePowerAction(struct qemu_syscall *call);
void qemu_NtIsProcessInJob(struct qemu_syscall *call);
void qemu_NtListenPort(struct qemu_syscall *call);
void qemu_NtLoadKey(struct qemu_syscall *call);
void qemu_NtLoadKey2(struct qemu_syscall *call);
void qemu_NtLockFile(struct qemu_syscall *call);
void qemu_NtMakeTemporaryObject(struct qemu_syscall *call);
void qemu_NtNotifyChangeDirectoryFile(struct qemu_syscall *call);
void qemu_NtNotifyChangeKey(struct qemu_syscall *call);
void qemu_NtNotifyChangeMultipleKeys(struct qemu_syscall *call);
void qemu_NtOpenDirectoryObject(struct qemu_syscall *call);
void qemu_NtOpenEvent(struct qemu_syscall *call);
void qemu_NtOpenFile(struct qemu_syscall *call);
void qemu_NtOpenIoCompletion(struct qemu_syscall *call);
void qemu_NtOpenJobObject(struct qemu_syscall *call);
void qemu_NtOpenKey(struct qemu_syscall *call);
void qemu_NtOpenKeyedEvent(struct qemu_syscall *call);
void qemu_NtOpenKeyEx(struct qemu_syscall *call);
void qemu_NtOpenKeyTransacted(struct qemu_syscall *call);
void qemu_NtOpenKeyTransactedEx(struct qemu_syscall *call);
void qemu_NtOpenMutant(struct qemu_syscall *call);
void qemu_NtOpenProcess(struct qemu_syscall *call);
void qemu_NtOpenProcessToken(struct qemu_syscall *call);
void qemu_NtOpenProcessTokenEx(struct qemu_syscall *call);
void qemu_NtOpenSemaphore(struct qemu_syscall *call);
void qemu_NtOpenSymbolicLinkObject(struct qemu_syscall *call);
void qemu_NtOpenThread(struct qemu_syscall *call);
void qemu_NtOpenThreadToken(struct qemu_syscall *call);
void qemu_NtOpenThreadTokenEx(struct qemu_syscall *call);
void qemu_NtOpenTimer(struct qemu_syscall *call);
void qemu_NtPowerInformation(struct qemu_syscall *call);
void qemu_NtPrivilegeCheck(struct qemu_syscall *call);
void qemu_NtPulseEvent(struct qemu_syscall *call);
void qemu_NtQueryAttributesFile(struct qemu_syscall *call);
void qemu_NtQueryDirectoryObject(struct qemu_syscall *call);
void qemu_NtQueryEaFile(struct qemu_syscall *call);
void qemu_NtQueryEvent(struct qemu_syscall *call);
void qemu_NtQueryFullAttributesFile(struct qemu_syscall *call);
void qemu_NtQueryInformationFile(struct qemu_syscall *call);
void qemu_NtQueryInformationJobObject(struct qemu_syscall *call);
void qemu_NtQueryInformationProcess(struct qemu_syscall *call);
void qemu_NtQueryInformationThread(struct qemu_syscall *call);
void qemu_NtQueryInformationToken(struct qemu_syscall *call);
void qemu_NtQueryIoCompletion(struct qemu_syscall *call);
void qemu_NtQueryKey(struct qemu_syscall *call);
void qemu_NtQueryLicenseValue(struct qemu_syscall *call);
void qemu_NtQueryMultipleValueKey(struct qemu_syscall *call);
void qemu_NtQueryMutant(struct qemu_syscall *call);
void qemu_NtQueryObject(struct qemu_syscall *call);
void qemu_NtQuerySecurityObject(struct qemu_syscall *call);
void qemu_NtQuerySemaphore(struct qemu_syscall *call);
void qemu_NtQuerySymbolicLinkObject(struct qemu_syscall *call);
void qemu_NtQuerySystemInformation(struct qemu_syscall *call);
void qemu_NtQuerySystemInformationEx(struct qemu_syscall *call);
void qemu_NtQueryTimer(struct qemu_syscall *call);
void qemu_NtQueryTimerResolution(struct qemu_syscall *call);
void qemu_NtQueryValueKey(struct qemu_syscall *call);
void qemu_NtQueryVolumeInformationFile(struct qemu_syscall *call);
void qemu_NtQueueApcThread(struct qemu_syscall *call);
void qemu_NtRaiseException(struct qemu_syscall *call);
void qemu_NtRaiseHardError(struct qemu_syscall *call);
void qemu_NtReadFile(struct qemu_syscall *call);
void qemu_NtReadFileScatter(struct qemu_syscall *call);
void qemu_NtRegisterThreadTerminatePort(struct qemu_syscall *call);
void qemu_NtReleaseKeyedEvent(struct qemu_syscall *call);
void qemu_NtReleaseMutant(struct qemu_syscall *call);
void qemu_NtReleaseSemaphore(struct qemu_syscall *call);
void qemu_NtRemoveIoCompletion(struct qemu_syscall *call);
void qemu_NtRenameKey(struct qemu_syscall *call);
void qemu_NtReplaceKey(struct qemu_syscall *call);
void qemu_NtReplyWaitReceivePort(struct qemu_syscall *call);
void qemu_NtRequestWaitReplyPort(struct qemu_syscall *call);
void qemu_NtResetEvent(struct qemu_syscall *call);
void qemu_NtRestoreKey(struct qemu_syscall *call);
void qemu_NtResumeProcess(struct qemu_syscall *call);
void qemu_NtResumeThread(struct qemu_syscall *call);
void qemu_NtSaveKey(struct qemu_syscall *call);
void qemu_NtSecureConnectPort(struct qemu_syscall *call);
void qemu_NtSetEaFile(struct qemu_syscall *call);
void qemu_NtSetEvent(struct qemu_syscall *call);
void qemu_NtSetInformationFile(struct qemu_syscall *call);
void qemu_NtSetInformationJobObject(struct qemu_syscall *call);
void qemu_NtSetInformationKey(struct qemu_syscall *call);
void qemu_NtSetInformationObject(struct qemu_syscall *call);
void qemu_NtSetInformationProcess(struct qemu_syscall *call);
void qemu_NtSetInformationThread(struct qemu_syscall *call);
void qemu_NtSetInformationToken(struct qemu_syscall *call);
void qemu_NtSetIntervalProfile(struct qemu_syscall *call);
void qemu_NtSetIoCompletion(struct qemu_syscall *call);
void qemu_NtSetLdtEntries(struct qemu_syscall *call);
void qemu_NtSetSystemInformation(struct qemu_syscall *call);
void qemu_NtSetTimer(struct qemu_syscall *call);
void qemu_NtSetTimerResolution(struct qemu_syscall *call);
void qemu_NtSetValueKey(struct qemu_syscall *call);
void qemu_NtSetVolumeInformationFile(struct qemu_syscall *call);
void qemu_NtShutdownSystem(struct qemu_syscall *call);
void qemu_NtSignalAndWaitForSingleObject(struct qemu_syscall *call);
void qemu_NtSuspendProcess(struct qemu_syscall *call);
void qemu_NtSuspendThread(struct qemu_syscall *call);
void qemu_NtSystemDebugControl(struct qemu_syscall *call);
void qemu_NtTerminateJobObject(struct qemu_syscall *call);
void qemu_NtTerminateProcess(struct qemu_syscall *call);
void qemu_NtTerminateThread(struct qemu_syscall *call);
void qemu_NtUnloadKey(struct qemu_syscall *call);
void qemu_NtUnlockFile(struct qemu_syscall *call);
void qemu_NtWaitForKeyedEvent(struct qemu_syscall *call);
void qemu_NtWaitForMultipleObjects(struct qemu_syscall *call);
void qemu_NtWaitForSingleObject(struct qemu_syscall *call);
void qemu_NtWriteFile(struct qemu_syscall *call);
void qemu_NtWriteFileGather(struct qemu_syscall *call);
void qemu_NtYieldExecution(struct qemu_syscall *call);
void qemu_RtlAcquirePebLock(struct qemu_syscall *call);
void qemu_RtlAcquireResourceExclusive(struct qemu_syscall *call);
void qemu_RtlAcquireResourceShared(struct qemu_syscall *call);
void qemu_RtlAcquireSRWLockExclusive(struct qemu_syscall *call);
void qemu_RtlAcquireSRWLockShared(struct qemu_syscall *call);
void qemu_RtlActivateActivationContext(struct qemu_syscall *call);
void qemu_RtlAddFunctionTable(struct qemu_syscall *call);
void qemu_RtlAddRefActivationContext(struct qemu_syscall *call);
void qemu_RtlAddVectoredContinueHandler(struct qemu_syscall *call);
void qemu_RtlAddVectoredExceptionHandler(struct qemu_syscall *call);
void qemu_RtlAllocateHeap(struct qemu_syscall *call);
void qemu_RtlAnsiCharToUnicodeChar(struct qemu_syscall *call);
void qemu_RtlAnsiStringToUnicodeSize(struct qemu_syscall *call);
void qemu_RtlAnsiStringToUnicodeString(struct qemu_syscall *call);
void qemu_RtlAppendAsciizToString(struct qemu_syscall *call);
void qemu_RtlAppendStringToString(struct qemu_syscall *call);
void qemu_RtlAppendUnicodeStringToString(struct qemu_syscall *call);
void qemu_RtlAppendUnicodeToString(struct qemu_syscall *call);
void qemu_RtlAreAllAccessesGranted(struct qemu_syscall *call);
void qemu_RtlAreAnyAccessesGranted(struct qemu_syscall *call);
void qemu_RtlAssert(struct qemu_syscall *call);
void qemu_RtlCaptureStackBackTrace(struct qemu_syscall *call);
void qemu_RtlCharToInteger(struct qemu_syscall *call);
void qemu_RtlCheckRegistryKey(struct qemu_syscall *call);
void qemu_RtlCompactHeap(struct qemu_syscall *call);
void qemu_RtlCompareMemory(struct qemu_syscall *call);
void qemu_RtlCompareMemoryUlong(struct qemu_syscall *call);
void qemu_RtlCompareString(struct qemu_syscall *call);
void qemu_RtlCompareUnicodeString(struct qemu_syscall *call);
void qemu_RtlCompareUnicodeStrings(struct qemu_syscall *call);
void qemu_RtlCompressBuffer(struct qemu_syscall *call);
void qemu_RtlComputeCrc32(struct qemu_syscall *call);
void qemu_RtlCopyLuid(struct qemu_syscall *call);
void qemu_RtlCopyLuidAndAttributesArray(struct qemu_syscall *call);
void qemu_RtlCopyMemory(struct qemu_syscall *call);
void qemu_RtlCopyString(struct qemu_syscall *call);
void qemu_RtlCopyUnicodeString(struct qemu_syscall *call);
void qemu_RtlCreateActivationContext(struct qemu_syscall *call);
void qemu_RtlCreateHeap(struct qemu_syscall *call);
void qemu_RtlCreateUnicodeString(struct qemu_syscall *call);
void qemu_RtlCreateUnicodeStringFromAsciiz(struct qemu_syscall *call);
void qemu_RtlCreateUserProcess(struct qemu_syscall *call);
void qemu_RtlCreateUserThread(struct qemu_syscall *call);
void qemu_RtlDeactivateActivationContext(struct qemu_syscall *call);
void qemu_RtlDecodePointer(struct qemu_syscall *call);
void qemu_RtlDecompressBuffer(struct qemu_syscall *call);
void qemu_RtlDecompressFragment(struct qemu_syscall *call);
void qemu_RtlDeleteCriticalSection(struct qemu_syscall *call);
void qemu_RtlDeleteFunctionTable(struct qemu_syscall *call);
void qemu_RtlDeleteRegistryValue(struct qemu_syscall *call);
void qemu_RtlDeleteResource(struct qemu_syscall *call);
void qemu_RtlDeleteSecurityObject(struct qemu_syscall *call);
void qemu_RtlDestroyHeap(struct qemu_syscall *call);
void qemu_RtlDetermineDosPathNameType_U(struct qemu_syscall *call);
void qemu_RtlDosPathNameToNtPathName_U(struct qemu_syscall *call);
void qemu_RtlDosSearchPath_U(struct qemu_syscall *call);
void qemu_RtlDowncaseUnicodeChar(struct qemu_syscall *call);
void qemu_RtlDowncaseUnicodeString(struct qemu_syscall *call);
void qemu_RtlDumpResource(struct qemu_syscall *call);
void qemu_RtlDuplicateUnicodeString(struct qemu_syscall *call);
void qemu_RtlEncodePointer(struct qemu_syscall *call);
void qemu_RtlEnterCriticalSection(struct qemu_syscall *call);
void qemu_RtlEqualComputerName(struct qemu_syscall *call);
void qemu_RtlEqualDomainName(struct qemu_syscall *call);
void qemu_RtlEqualLuid(struct qemu_syscall *call);
void qemu_RtlEqualString(struct qemu_syscall *call);
void qemu_RtlEqualUnicodeString(struct qemu_syscall *call);
void qemu_RtlEraseUnicodeString(struct qemu_syscall *call);
void qemu_RtlFillMemory(struct qemu_syscall *call);
void qemu_RtlFillMemoryUlong(struct qemu_syscall *call);
void qemu_RtlFindActivationContextSectionGuid(struct qemu_syscall *call);
void qemu_RtlFindActivationContextSectionString(struct qemu_syscall *call);
void qemu_RtlFindCharInUnicodeString(struct qemu_syscall *call);
void qemu_RtlFirstEntrySList(struct qemu_syscall *call);
void qemu_RtlFormatCurrentUserKeyPath(struct qemu_syscall *call);
void qemu_RtlFreeAnsiString(struct qemu_syscall *call);
void qemu_RtlFreeHeap(struct qemu_syscall *call);
void qemu_RtlFreeOemString(struct qemu_syscall *call);
void qemu_RtlFreeThreadActivationContextStack(struct qemu_syscall *call);
void qemu_RtlFreeUnicodeString(struct qemu_syscall *call);
void qemu_RtlGetActiveActivationContext(struct qemu_syscall *call);
void qemu_RtlGetCompressionWorkSpaceSize(struct qemu_syscall *call);
void qemu_RtlGetCurrentDirectory_U(struct qemu_syscall *call);
void qemu_RtlGetCurrentPeb(struct qemu_syscall *call);
void qemu_RtlGetCurrentProcessorNumberEx(struct qemu_syscall *call);
void qemu_RtlGetCurrentTransaction(struct qemu_syscall *call);
void qemu_RtlGetFullPathName_U(struct qemu_syscall *call);
void qemu_RtlGetLastNtStatus(struct qemu_syscall *call);
void qemu_RtlGetLastWin32Error(struct qemu_syscall *call);
void qemu_RtlGetLongestNtPathLength(struct qemu_syscall *call);
void qemu_RtlGetNtGlobalFlags(struct qemu_syscall *call);
void qemu_RtlGetNtProductType(struct qemu_syscall *call);
void qemu_RtlGetNtVersionNumbers(struct qemu_syscall *call);
void qemu_RtlGetProcessHeaps(struct qemu_syscall *call);
void qemu_RtlGetProductInfo(struct qemu_syscall *call);
void qemu_RtlGetThreadErrorMode(struct qemu_syscall *call);
void qemu_RtlGetVersion(struct qemu_syscall *call);
void qemu_RtlGUIDFromString(struct qemu_syscall *call);
void qemu_RtlHashUnicodeString(struct qemu_syscall *call);
void qemu_RtlInitAnsiString(struct qemu_syscall *call);
void qemu_RtlInitAnsiStringEx(struct qemu_syscall *call);
void qemu_RtlInitializeConditionVariable(struct qemu_syscall *call);
void qemu_RtlInitializeCriticalSection(struct qemu_syscall *call);
void qemu_RtlInitializeCriticalSectionAndSpinCount(struct qemu_syscall *call);
void qemu_RtlInitializeCriticalSectionEx(struct qemu_syscall *call);
void qemu_RtlInitializeGenericTable(struct qemu_syscall *call);
void qemu_RtlInitializeGenericTableAvl(struct qemu_syscall *call);
void qemu_RtlInitializeResource(struct qemu_syscall *call);
void qemu_RtlInitializeSListHead(struct qemu_syscall *call);
void qemu_RtlInitializeSRWLock(struct qemu_syscall *call);
void qemu_RtlInitString(struct qemu_syscall *call);
void qemu_RtlInitUnicodeString(struct qemu_syscall *call);
void qemu_RtlInitUnicodeStringEx(struct qemu_syscall *call);
void qemu_RtlInsertElementGenericTableAvl(struct qemu_syscall *call);
void qemu_RtlIntegerToChar(struct qemu_syscall *call);
void qemu_RtlIntegerToUnicodeString(struct qemu_syscall *call);
void qemu_RtlInterlockedFlushSList(struct qemu_syscall *call);
void qemu_RtlInterlockedPopEntrySList(struct qemu_syscall *call);
void qemu_RtlInterlockedPushEntrySList(struct qemu_syscall *call);
void qemu_RtlInterlockedPushListSList(struct qemu_syscall *call);
void qemu_RtlInterlockedPushListSListEx(struct qemu_syscall *call);
void qemu_RtlIpv4AddressToStringA(struct qemu_syscall *call);
void qemu_RtlIpv4AddressToStringExA(struct qemu_syscall *call);
void qemu_RtlIpv4AddressToStringExW(struct qemu_syscall *call);
void qemu_RtlIpv4AddressToStringW(struct qemu_syscall *call);
void qemu_RtlIpv4StringToAddressExW(struct qemu_syscall *call);
void qemu_RtlIsActivationContextActive(struct qemu_syscall *call);
void qemu_RtlIsCriticalSectionLocked(struct qemu_syscall *call);
void qemu_RtlIsCriticalSectionLockedByThread(struct qemu_syscall *call);
void qemu_RtlIsDosDeviceName_U(struct qemu_syscall *call);
void qemu_RtlIsNameLegalDOS8Dot3(struct qemu_syscall *call);
void qemu_RtlIsTextUnicode(struct qemu_syscall *call);
void qemu_RtlLeaveCriticalSection(struct qemu_syscall *call);
void qemu_RtlLockHeap(struct qemu_syscall *call);
void qemu_RtlLookupFunctionEntry(struct qemu_syscall *call);
void qemu_RtlMapGenericMask(struct qemu_syscall *call);
void qemu_RtlMoveMemory(struct qemu_syscall *call);
void qemu_RtlMultiByteToUnicodeN(struct qemu_syscall *call);
void qemu_RtlMultiByteToUnicodeSize(struct qemu_syscall *call);
void qemu_RtlNewSecurityObject(struct qemu_syscall *call);
void qemu_RtlNtStatusToDosError(struct qemu_syscall *call);
void qemu_RtlNtStatusToDosErrorNoTeb(struct qemu_syscall *call);
void qemu_RtlOemStringToUnicodeSize(struct qemu_syscall *call);
void qemu_RtlOemStringToUnicodeString(struct qemu_syscall *call);
void qemu_RtlOemToUnicodeN(struct qemu_syscall *call);
void qemu_RtlOpenCurrentUser(struct qemu_syscall *call);
void qemu_RtlPcToFileHeader(struct qemu_syscall *call);
void qemu_RtlpNtCreateKey(struct qemu_syscall *call);
void qemu_RtlpNtEnumerateSubKey(struct qemu_syscall *call);
void qemu_RtlpNtMakeTemporaryKey(struct qemu_syscall *call);
void qemu_RtlpNtOpenKey(struct qemu_syscall *call);
void qemu_RtlpNtQueryValueKey(struct qemu_syscall *call);
void qemu_RtlpNtSetValueKey(struct qemu_syscall *call);
void qemu_RtlPrefixString(struct qemu_syscall *call);
void qemu_RtlPrefixUnicodeString(struct qemu_syscall *call);
void qemu_RtlpUnWaitCriticalSection(struct qemu_syscall *call);
void qemu_RtlpWaitForCriticalSection(struct qemu_syscall *call);
void qemu_RtlQueryDepthSList(struct qemu_syscall *call);
void qemu_RtlQueryHeapInformation(struct qemu_syscall *call);
void qemu_RtlQueryInformationActivationContext(struct qemu_syscall *call);
void qemu_RtlQueryRegistryValues(struct qemu_syscall *call);
void qemu_RtlRaiseStatus(struct qemu_syscall *call);
void qemu_RtlRandom(struct qemu_syscall *call);
void qemu_RtlReAllocateHeap(struct qemu_syscall *call);
void qemu_RtlReleaseActivationContext(struct qemu_syscall *call);
void qemu_RtlReleasePebLock(struct qemu_syscall *call);
void qemu_RtlReleaseResource(struct qemu_syscall *call);
void qemu_RtlReleaseSRWLockExclusive(struct qemu_syscall *call);
void qemu_RtlReleaseSRWLockShared(struct qemu_syscall *call);
void qemu_RtlRemoveVectoredContinueHandler(struct qemu_syscall *call);
void qemu_RtlRemoveVectoredExceptionHandler(struct qemu_syscall *call);
void qemu_RtlRestoreContext(struct qemu_syscall *call);
void qemu_RtlRunOnceBeginInitialize(struct qemu_syscall *call);
void qemu_RtlRunOnceComplete(struct qemu_syscall *call);
void qemu_RtlRunOnceExecuteOnce(struct qemu_syscall *call);
void qemu_RtlRunOnceInitialize(struct qemu_syscall *call);
void qemu_RtlSetCriticalSectionSpinCount(struct qemu_syscall *call);
void qemu_RtlSetCurrentDirectory_U(struct qemu_syscall *call);
void qemu_RtlSetCurrentTransaction(struct qemu_syscall *call);
void qemu_RtlSetHeapInformation(struct qemu_syscall *call);
void qemu_RtlSetLastWin32Error(struct qemu_syscall *call);
void qemu_RtlSetLastWin32ErrorAndNtStatusFromNtStatus(struct qemu_syscall *call);
void qemu_RtlSetThreadErrorMode(struct qemu_syscall *call);
void qemu_RtlSizeHeap(struct qemu_syscall *call);
void qemu_RtlSleepConditionVariableCS(struct qemu_syscall *call);
void qemu_RtlSleepConditionVariableSRW(struct qemu_syscall *call);
void qemu_RtlStringFromGUID(struct qemu_syscall *call);
void qemu_RtlTryAcquireSRWLockExclusive(struct qemu_syscall *call);
void qemu_RtlTryAcquireSRWLockShared(struct qemu_syscall *call);
void qemu_RtlTryEnterCriticalSection(struct qemu_syscall *call);
void qemu_RtlUnicodeStringToAnsiSize(struct qemu_syscall *call);
void qemu_RtlUnicodeStringToAnsiString(struct qemu_syscall *call);
void qemu_RtlUnicodeStringToInteger(struct qemu_syscall *call);
void qemu_RtlUnicodeStringToOemSize(struct qemu_syscall *call);
void qemu_RtlUnicodeStringToOemString(struct qemu_syscall *call);
void qemu_RtlUnicodeToMultiByteN(struct qemu_syscall *call);
void qemu_RtlUnicodeToMultiByteSize(struct qemu_syscall *call);
void qemu_RtlUnicodeToOemN(struct qemu_syscall *call);
void qemu_RtlUniform(struct qemu_syscall *call);
void qemu_RtlUnlockHeap(struct qemu_syscall *call);
void qemu_RtlUnwindEx(struct qemu_syscall *call);
void qemu_RtlUpcaseUnicodeChar(struct qemu_syscall *call);
void qemu_RtlUpcaseUnicodeString(struct qemu_syscall *call);
void qemu_RtlUpcaseUnicodeStringToAnsiString(struct qemu_syscall *call);
void qemu_RtlUpcaseUnicodeStringToCountedOemString(struct qemu_syscall *call);
void qemu_RtlUpcaseUnicodeStringToOemString(struct qemu_syscall *call);
void qemu_RtlUpcaseUnicodeToMultiByteN(struct qemu_syscall *call);
void qemu_RtlUpcaseUnicodeToOemN(struct qemu_syscall *call);
void qemu_RtlUpperChar(struct qemu_syscall *call);
void qemu_RtlUpperString(struct qemu_syscall *call);
void qemu_RtlValidateHeap(struct qemu_syscall *call);
void qemu_RtlVerifyVersionInfo(struct qemu_syscall *call);
void qemu_RtlVirtualUnwind(struct qemu_syscall *call);
void qemu_RtlWakeAllConditionVariable(struct qemu_syscall *call);
void qemu_RtlWakeConditionVariable(struct qemu_syscall *call);
void qemu_RtlWalkHeap(struct qemu_syscall *call);
void qemu_RtlWriteRegistryValue(struct qemu_syscall *call);
void qemu_RtlZeroMemory(struct qemu_syscall *call);
void qemu_RtlZombifyActivationContext(struct qemu_syscall *call);
void qemu_strcat(struct qemu_syscall *call);
void qemu_strchr(struct qemu_syscall *call);
void qemu_strcmp(struct qemu_syscall *call);
void qemu_strcpy(struct qemu_syscall *call);
void qemu_strcspn(struct qemu_syscall *call);
void qemu_strlen(struct qemu_syscall *call);
void qemu_strncat(struct qemu_syscall *call);
void qemu_strncmp(struct qemu_syscall *call);
void qemu_strncpy(struct qemu_syscall *call);
void qemu_strpbrk(struct qemu_syscall *call);
void qemu_strrchr(struct qemu_syscall *call);
void qemu_strspn(struct qemu_syscall *call);
void qemu_strstr(struct qemu_syscall *call);
void qemu_strtol(struct qemu_syscall *call);
void qemu_strtoul(struct qemu_syscall *call);
void qemu_tolower(struct qemu_syscall *call);
void qemu_toupper(struct qemu_syscall *call);
void qemu_VerSetConditionMask(struct qemu_syscall *call);
void qemu_wcsrchr(struct qemu_syscall *call);
void qemu_WinSqmEndSession(struct qemu_syscall *call);
void qemu_WinSqmIsOptedIn(struct qemu_syscall *call);
void qemu_WinSqmStartSession(struct qemu_syscall *call);

WCHAR *(* CDECL p_wcsrchr)(WCHAR *str, WCHAR ch);
void * (* CDECL p_memchr)(const void *ptr, int c, size_t n);
int (* CDECL p_memcmp)(const void *ptr1, const void *ptr2, size_t n);
void * (* CDECL p_memcpy)(void *dst, const void *src, size_t n);
void * (* CDECL p_memmove)(void *dst, const void *src, size_t n);
void * (* CDECL p_memset)(void *dst, int c, size_t n);
char * (* CDECL p_strcat)(char *dst, const char *src);
char * (* CDECL p_strchr)(const char *str, int c);
int (* CDECL p_strcmp)(const char *str1, const char *str2);
char * (* CDECL p_strcpy)(char *dst, const char *src);
size_t (* CDECL p_strcspn)(const char *str, const char *reject);
size_t (* CDECL p_strlen)(const char *str);
char * (* CDECL p_strncat)(char *dst, const char *src, size_t len);
int (* CDECL p_strncmp)(const char *str1, const char *str2, size_t len);
char * (* CDECL p_strncpy)(char *dst, const char *src, size_t len);
char * (* CDECL p_strpbrk)(const char *str, const char *accept);
char * (* CDECL p_strrchr)(const char *str, int c);
size_t (* CDECL p_strspn)(const char *str, const char *accept);
char * (* CDECL p_strstr)(const char *haystack, const char *needle);
void * (* CDECL p__memccpy)(void *dst, const void *src, int c, size_t n);
INT (* CDECL p__memicmp)(LPCSTR s1, LPCSTR s2, DWORD len);
int (* CDECL p__stricmp)(LPCSTR str1, LPCSTR str2);
int (* CDECL p__strnicmp)(LPCSTR str1, LPCSTR str2, size_t n);
LPSTR (* CDECL p__strupr)(LPSTR str);
LPSTR (* CDECL p__strlwr)(LPSTR str);
int (* CDECL p_tolower)(int c);
int (* CDECL p_toupper)(int c);
int (* CDECL p_isalnum)(int c);
int (* CDECL p_isalpha)(int c);
int (* CDECL p_iscntrl)(int c);
int (* CDECL p_isdigit)(int c);
int (* CDECL p_isgraph)(int c);
int (* CDECL p_islower)(int c);
int (* CDECL p_isprint)(int c);
int (* CDECL p_ispunct)(int c);
int (* CDECL p_isspace)(int c);
int (* CDECL p_isupper)(int c);
int (* CDECL p_isxdigit)(int c);
int (* CDECL p___isascii)(int c);
int (* CDECL p___toascii)(int c);
int (* CDECL p___iscsym)(int c);
int (* CDECL p___iscsymf)(int c);
int (* CDECL p__toupper)(int c);
int (* CDECL p__tolower)(int c);
LONG (* CDECL p_strtol)(const char *nptr, char **endptr, int base);
ULONG (* CDECL p_strtoul)(const char *nptr, char **endptr, int base);
char * (* CDECL p__ultoa)(ULONG value, char *str, int radix);
char * (* CDECL p__ltoa)(LONG value, char *str, int radix);
char * (* CDECL p__itoa)(int value, char *str, int radix);
char * (* CDECL p__ui64toa)(ULONGLONG value, char *str, int radix);
char * (* CDECL p__i64toa)(LONGLONG value, char *str, int radix);
LONGLONG (* CDECL p__atoi64)(const char *str);
int (* CDECL p_atoi)(const char *nptr);
LONG (* CDECL p_atol)(const char *nptr);
void (* CDECL p__splitpath)(const char* inpath, char * drv, char * dir, char* fname, char * ext);

#endif

#endif