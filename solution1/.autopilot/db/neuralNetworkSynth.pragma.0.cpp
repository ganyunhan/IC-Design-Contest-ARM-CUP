# 1 "voicerec/neuralNetworkSynth.cpp"
# 1 "voicerec/neuralNetworkSynth.cpp" 1
# 1 "<built-in>" 1
# 1 "<built-in>" 3
# 152 "<built-in>" 3
# 1 "<command line>" 1







# 1 "D:/Vivado/Vivado/2018.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h" 1
# 157 "D:/Vivado/Vivado/2018.2/common/technology/autopilot\\etc/autopilot_ssdm_op.h"
extern "C" {






    void _ssdm_op_IfRead(...) __attribute__ ((nothrow));
    void _ssdm_op_IfWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_op_IfCanWrite(...) __attribute__ ((nothrow));


    void _ssdm_StreamRead(...) __attribute__ ((nothrow));
    void _ssdm_StreamWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamNbWrite(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanRead(...) __attribute__ ((nothrow));
    unsigned int __attribute__ ((bitwidth(1))) _ssdm_StreamCanWrite(...) __attribute__ ((nothrow));
    unsigned _ssdm_StreamSize(...) __attribute__ ((nothrow));




    void _ssdm_op_MemShiftRead(...) __attribute__ ((nothrow));

    void _ssdm_op_Wait(...) __attribute__ ((nothrow));
    void _ssdm_op_Poll(...) __attribute__ ((nothrow));

    void _ssdm_op_Return(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecSynModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecTopModule(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDecl(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProcessDef(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPort(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecConnection(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecChannel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecSensitive(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecModuleInst(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPortMap(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecReset(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPlatform(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecClockDomain(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecPowerDomain(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecRegionBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecRegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopName(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecLoopTripCount(...) __attribute__ ((nothrow));

    int _ssdm_op_SpecStateBegin(...) __attribute__ ((nothrow));
    int _ssdm_op_SpecStateEnd(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecInterface(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecPipeline(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecDataflowPipeline(...) __attribute__ ((nothrow));


    void _ssdm_op_SpecLatency(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecParallel(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecProtocol(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecOccurrence(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecResource(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecResourceLimit(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecCHCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecFUCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIFCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecIPCore(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecKeepValue(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecMemCore(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecExt(...) __attribute__ ((nothrow));




    void _ssdm_SpecArrayDimSize(...) __attribute__ ((nothrow));

    void _ssdm_RegionBegin(...) __attribute__ ((nothrow));
    void _ssdm_RegionEnd(...) __attribute__ ((nothrow));

    void _ssdm_Unroll(...) __attribute__ ((nothrow));
    void _ssdm_UnrollRegion(...) __attribute__ ((nothrow));

    void _ssdm_InlineAll(...) __attribute__ ((nothrow));
    void _ssdm_InlineLoop(...) __attribute__ ((nothrow));
    void _ssdm_Inline(...) __attribute__ ((nothrow));
    void _ssdm_InlineSelf(...) __attribute__ ((nothrow));
    void _ssdm_InlineRegion(...) __attribute__ ((nothrow));

    void _ssdm_SpecArrayMap(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayPartition(...) __attribute__ ((nothrow));
    void _ssdm_SpecArrayReshape(...) __attribute__ ((nothrow));

    void _ssdm_SpecStream(...) __attribute__ ((nothrow));

    void _ssdm_SpecExpr(...) __attribute__ ((nothrow));
    void _ssdm_SpecExprBalance(...) __attribute__ ((nothrow));

    void _ssdm_SpecDependence(...) __attribute__ ((nothrow));

    void _ssdm_SpecLoopMerge(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopFlatten(...) __attribute__ ((nothrow));
    void _ssdm_SpecLoopRewind(...) __attribute__ ((nothrow));

    void _ssdm_SpecFuncInstantiation(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncBuffer(...) __attribute__ ((nothrow));
    void _ssdm_SpecFuncExtract(...) __attribute__ ((nothrow));
    void _ssdm_SpecConstant(...) __attribute__ ((nothrow));

    void _ssdm_DataPack(...) __attribute__ ((nothrow));
    void _ssdm_SpecDataPack(...) __attribute__ ((nothrow));

    void _ssdm_op_SpecBitsMap(...) __attribute__ ((nothrow));
    void _ssdm_op_SpecLicense(...) __attribute__ ((nothrow));

    void __xilinx_ip_top(...) __attribute__ ((nothrow));


}
# 9 "<command line>" 2
# 1 "<built-in>" 2
# 1 "voicerec/neuralNetworkSynth.cpp" 2
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 1 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 1 3
# 275 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/os_defines.h" 1 3
# 276 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/cpu_defines.h" 1 3
# 279 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++config.h" 2 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 1 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 1 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 1 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3



namespace std {

  template<typename _Alloc>
    class allocator;







  template<class _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;

  template<> struct char_traits<char>;

  typedef basic_string<char> string;


  template<> struct char_traits<wchar_t>;

  typedef basic_string<wchar_t> wstring;
# 82 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stringfwd.h" 3
}
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 1 3
# 40 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
# 40 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 31 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 3 4
typedef __typeof__(((int*)0)-((int*)0)) ptrdiff_t;



typedef __typeof__(sizeof(int)) size_t;
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3




namespace std {

  using ::ptrdiff_t;
  using ::size_t;

}
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3








# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 10 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/_mingw_mac.h" 1 3
# 10 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 277 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 1 3
# 13 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 674 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_directx.h" 1 3
# 674 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include/sdks/_mingw_ddk.h" 1 3
# 675 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3
# 13 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {





  typedef __builtin_va_list __gnuc_va_list;






  typedef __gnuc_va_list va_list;
# 99 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\vadefs.h" 3
}


#pragma pack(pop)
# 277 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 2 3


#pragma pack(push,_CRT_PACKING)
# 370 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long size_t;
# 380 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ssize_t;
# 392 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long intptr_t;
# 405 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef unsigned long long uintptr_t;
# 418 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
__extension__ typedef long long ptrdiff_t;
# 436 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef unsigned short wint_t;
typedef unsigned short wctype_t;
# 456 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
typedef int errno_t;




typedef long __time32_t;




__extension__ typedef long long __time64_t;







typedef __time64_t time_t;
# 607 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 3
struct threadlocaleinfostruct;
struct threadmbcinfostruct;
typedef struct threadlocaleinfostruct *pthreadlocinfo;
typedef struct threadmbcinfostruct *pthreadmbcinfo;
struct __lc_time_data;

typedef struct localeinfo_struct {
  pthreadlocinfo locinfo;
  pthreadmbcinfo mbcinfo;
} _locale_tstruct,*_locale_t;



typedef struct tagLC_ID {
  unsigned short wLanguage;
  unsigned short wCountry;
  unsigned short wCodePage;
} LC_ID,*LPLC_ID;




typedef struct threadlocaleinfostruct {
  int refcount;
  unsigned int lc_codepage;
  unsigned int lc_collate_cp;
  unsigned long lc_handle[6];
  LC_ID lc_id[6];
  struct {
    char *locale;
    wchar_t *wlocale;
    int *refcount;
    int *wrefcount;
  } lc_category[6];
  int lc_clike;
  int mb_cur_max;
  int *lconv_intl_refcount;
  int *lconv_num_refcount;
  int *lconv_mon_refcount;
  struct lconv *lconv;
  int *ctype1_refcount;
  unsigned short *ctype1;
  const unsigned short *pctype;
  const unsigned char *pclmap;
  const unsigned char *pcumap;
  struct __lc_time_data *lc_time_curr;
} threadlocinfo;



extern "C" {



const char *__mingw_get_crt_info (void);


}


#pragma pack(pop)
# 9 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 27 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  struct _iobuf {
    char *_ptr;
    int _cnt;
    char *_base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    char *_tmpfname;
  };
  typedef struct _iobuf FILE;





  __attribute__ ((__dllimport__)) FILE * __iob_func(void);
# 66 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef unsigned long _fsize_t;




  struct _wfinddata32_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata32i64_t {
    unsigned attrib;
    __time32_t time_create;
    __time32_t time_access;
    __time32_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };

  struct _wfinddata64i32_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    _fsize_t size;
    wchar_t name[260];
  };

  struct _wfinddata64_t {
    unsigned attrib;
    __time64_t time_create;
    __time64_t time_access;
    __time64_t time_write;
    __extension__ long long size;
    wchar_t name[260];
  };
# 164 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__pctype;
# 178 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__wctype;
# 193 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  extern unsigned short ** __imp__pwctype;
# 217 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  int iswalpha(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalpha_l(wint_t _C,_locale_t _Locale);
  int iswupper(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswupper_l(wint_t _C,_locale_t _Locale);
  int iswlower(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswlower_l(wint_t _C,_locale_t _Locale);
  int iswdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswdigit_l(wint_t _C,_locale_t _Locale);
  int iswxdigit(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswxdigit_l(wint_t _C,_locale_t _Locale);
  int iswspace(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswspace_l(wint_t _C,_locale_t _Locale);
  int iswpunct(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswpunct_l(wint_t _C,_locale_t _Locale);
  int iswalnum(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswalnum_l(wint_t _C,_locale_t _Locale);
  int iswprint(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswprint_l(wint_t _C,_locale_t _Locale);
  int iswgraph(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswgraph_l(wint_t _C,_locale_t _Locale);
  int iswcntrl(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcntrl_l(wint_t _C,_locale_t _Locale);
  int iswascii(wint_t _C);
  int isleadbyte(int _C);
  __attribute__ ((__dllimport__)) int _isleadbyte_l(int _C,_locale_t _Locale);
  wint_t towupper(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towupper_l(wint_t _C,_locale_t _Locale);
  wint_t towlower(wint_t _C);
  __attribute__ ((__dllimport__)) wint_t _towlower_l(wint_t _C,_locale_t _Locale);
  int iswctype(wint_t _C,wctype_t _Type);
  __attribute__ ((__dllimport__)) int _iswctype_l(wint_t _C,wctype_t _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsymf(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsymf_l(wint_t _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __iswcsym(wint_t _C);
  __attribute__ ((__dllimport__)) int _iswcsym_l(wint_t _C,_locale_t _Locale);
  int is_wctype(wint_t _C,wctype_t _Type);


  int iswblank(wint_t _C);







  __attribute__ ((__dllimport__)) wchar_t * _wgetcwd(wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) wchar_t * _wgetdcwd(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  wchar_t * _wgetdcwd_nolock(int _Drive,wchar_t *_DstBuf,int _SizeInWords);
  __attribute__ ((__dllimport__)) int _wchdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wmkdir(const wchar_t *_Path);
  __attribute__ ((__dllimport__)) int _wrmdir(const wchar_t *_Path);





  __attribute__ ((__dllimport__)) int _waccess(const wchar_t *_Filename,int _AccessMode);
  __attribute__ ((__dllimport__)) int _wchmod(const wchar_t *_Filename,int _Mode);
  __attribute__ ((__dllimport__)) int _wcreat(const wchar_t *_Filename,int _PermissionMode) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32(const wchar_t *_Filename,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32(intptr_t _FindHandle,struct _wfinddata32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wunlink(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) int _wrename(const wchar_t *_NewFilename,const wchar_t *_OldFilename);
  __attribute__ ((__dllimport__)) wchar_t * _wmktemp(wchar_t *_TemplateName) ;
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst32i64(const wchar_t *_Filename,struct _wfinddata32i64_t *_FindData);
  intptr_t _wfindfirst64i32(const wchar_t *_Filename,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) intptr_t _wfindfirst64(const wchar_t *_Filename,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext32i64(intptr_t _FindHandle,struct _wfinddata32i64_t *_FindData);
  int _wfindnext64i32(intptr_t _FindHandle,struct _wfinddata64i32_t *_FindData);
  __attribute__ ((__dllimport__)) int _wfindnext64(intptr_t _FindHandle,struct _wfinddata64_t *_FindData);
  __attribute__ ((__dllimport__)) errno_t _wsopen_s(int *_FileHandle,const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,int _PermissionFlag);
  __attribute__ ((__dllimport__)) int _wopen(const wchar_t *_Filename,int _OpenFlag,...) ;
  __attribute__ ((__dllimport__)) int _wsopen(const wchar_t *_Filename,int _OpenFlag,int _ShareFlag,...) ;




  __attribute__ ((__dllimport__)) wchar_t * _wsetlocale(int _Category,const wchar_t *_Locale);





  __attribute__ ((__dllimport__)) intptr_t _wexecl(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecle(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclp(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexeclpe(const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wexecv(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecve(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wexecvp(const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wexecvpe(const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnl(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnle(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlp(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnlpe(int _Mode,const wchar_t *_Filename,const wchar_t *_ArgList,...);
  __attribute__ ((__dllimport__)) intptr_t _wspawnv(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnve(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvp(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList);
  __attribute__ ((__dllimport__)) intptr_t _wspawnvpe(int _Mode,const wchar_t *_Filename,const wchar_t *const *_ArgList,const wchar_t *const *_Env);


  __attribute__ ((__dllimport__)) int _wsystem(const wchar_t *_Command);
# 360 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef unsigned short _ino_t;

  typedef unsigned short ino_t;





  typedef unsigned int _dev_t;

  typedef unsigned int dev_t;







  typedef long _off_t;

  typedef long off_t;






  __extension__ typedef long long _off64_t;

  __extension__ typedef long long off64_t;
# 412 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  struct _stat32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };


  struct stat {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    time_t st_atime;
    time_t st_mtime;
    time_t st_ctime;
  };


  struct _stat32i64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time32_t st_atime;
    __time32_t st_mtime;
    __time32_t st_ctime;
  };

  struct _stat64i32 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    _off_t st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };

  struct _stat64 {
    _dev_t st_dev;
    _ino_t st_ino;
    unsigned short st_mode;
    short st_nlink;
    short st_uid;
    short st_gid;
    _dev_t st_rdev;
    __extension__ long long st_size;
    __time64_t st_atime;
    __time64_t st_mtime;
    __time64_t st_ctime;
  };
# 493 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) int _wstat32(const wchar_t *_Name,struct _stat32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat32i64(const wchar_t *_Name,struct _stat32i64 *_Stat);
  int _wstat64i32(const wchar_t *_Name,struct _stat64i32 *_Stat);
  __attribute__ ((__dllimport__)) int _wstat64(const wchar_t *_Name,struct _stat64 *_Stat);
# 507 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t *_cgetws(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wint_t _getwch(void);
  __attribute__ ((__dllimport__)) wint_t _getwche(void);
  __attribute__ ((__dllimport__)) wint_t _putwch(wchar_t _WCh);
  __attribute__ ((__dllimport__)) wint_t _ungetwch(wint_t _WCh);
  __attribute__ ((__dllimport__)) int _cputws(const wchar_t *_String);
  __attribute__ ((__dllimport__)) int _cwprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _cwscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);

  __attribute__ ((__dllimport__)) int _cwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _cwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vcwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  wint_t _putwch_nolock(wchar_t _WCh);
  wint_t _getwch_nolock(void);
  wint_t _getwche_nolock(void);
  wint_t _ungetwch_nolock(wint_t _WCh);
# 540 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) FILE * _wfsopen(const wchar_t *_Filename,const wchar_t *_Mode,int _ShFlag);


  wint_t fgetwc(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fgetwchar(void);
  wint_t fputwc(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwchar(wchar_t _Ch);
  wint_t getwc(FILE *_File);
  wint_t getwchar(void);
  wint_t putwc(wchar_t _Ch,FILE *_File);
  wint_t putwchar(wchar_t _Ch);
  wint_t ungetwc(wint_t _Ch,FILE *_File);
  wchar_t * fgetws(wchar_t * __restrict__ _Dst,int _SizeInWords,FILE * __restrict__ _File);
  int fputws(const wchar_t * __restrict__ _Str,FILE * __restrict__ _File);
  __attribute__ ((__dllimport__)) wchar_t * _getws(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) int _putws(const wchar_t *_Str);
  int fwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  int wprintf(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _scwprintf(const wchar_t * __restrict__ _Format,...);
  int vfwprintf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  int vwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int swprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ , ...) ;
  __attribute__ ((__dllimport__)) int _swprintf_l(wchar_t * __restrict__ ,size_t _SizeInWords,const wchar_t * __restrict__ _Format,_locale_t _Locale,... ) ;
  __attribute__ ((__dllimport__)) int vswprintf(wchar_t * __restrict__ , const wchar_t * __restrict__ ,va_list) ;
  __attribute__ ((__dllimport__)) int _swprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c(wchar_t * __restrict__ _DstBuf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _vsnwprintf(wchar_t * __restrict__ _Dest,size_t _Count,const wchar_t * __restrict__ _Format,va_list _Args) ;

  int snwprintf (wchar_t * __restrict__ s, size_t n, const wchar_t * __restrict__ format, ...);
  int vsnwprintf (wchar_t * __restrict__ , size_t, const wchar_t * __restrict__ , va_list);






  int vwscanf (const wchar_t * __restrict__ , va_list);
  int vfwscanf (FILE * __restrict__ ,const wchar_t * __restrict__ ,va_list);
  int vswscanf (const wchar_t * __restrict__ ,const wchar_t * __restrict__ ,va_list);

  __attribute__ ((__dllimport__)) int _fwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _wprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_p(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf_p(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_p(const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _wprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _wprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _fwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _fwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vfwprintf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vfwprintf_p_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _swprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _swprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vswprintf_c_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vswprintf_p_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _scwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _scwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vscwprintf_p_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _snwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  __attribute__ ((__dllimport__)) int _vsnwprintf_l(wchar_t * __restrict__ _DstBuf,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int _swprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _vswprintf(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,va_list _Args);
  __attribute__ ((__dllimport__)) int __swprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,...) ;
  __attribute__ ((__dllimport__)) int _vswprintf_l(wchar_t * __restrict__ _Dest,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList) ;
  __attribute__ ((__dllimport__)) int __vswprintf_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Format,_locale_t _Plocinfo,va_list _Args) ;
# 621 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _wtempnam(const wchar_t *_Directory,const wchar_t *_FilePrefix);
  __attribute__ ((__dllimport__)) int _vscwprintf(const wchar_t * __restrict__ _Format,va_list _ArgList);
  __attribute__ ((__dllimport__)) int _vscwprintf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,va_list _ArgList);
  int fwscanf(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _fwscanf_l(FILE * __restrict__ _File,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  int swscanf(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _swscanf_l(const wchar_t * __restrict__ _Src,const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) int _snwscanf(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,...);
  __attribute__ ((__dllimport__)) int _snwscanf_l(const wchar_t * __restrict__ _Src,size_t _MaxCount,const wchar_t * __restrict__ _Format,_locale_t _Locale,...);
  int wscanf(const wchar_t * __restrict__ _Format,...) ;
  __attribute__ ((__dllimport__)) int _wscanf_l(const wchar_t * __restrict__ _Format,_locale_t _Locale,...) ;
  __attribute__ ((__dllimport__)) FILE * _wfdopen(int _FileHandle ,const wchar_t *_Mode);
  __attribute__ ((__dllimport__)) FILE * _wfopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode) ;
  __attribute__ ((__dllimport__)) FILE * _wfreopen(const wchar_t * __restrict__ _Filename,const wchar_t * __restrict__ _Mode,FILE * __restrict__ _OldFile) ;



  __attribute__ ((__dllimport__)) void _wperror(const wchar_t *_ErrMsg);

  __attribute__ ((__dllimport__)) FILE * _wpopen(const wchar_t *_Command,const wchar_t *_Mode);



  __attribute__ ((__dllimport__)) int _wremove(const wchar_t *_Filename);
  __attribute__ ((__dllimport__)) wchar_t * _wtmpnam(wchar_t *_Buffer);
  __attribute__ ((__dllimport__)) wint_t _fgetwc_nolock(FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _fputwc_nolock(wchar_t _Ch,FILE *_File);
  __attribute__ ((__dllimport__)) wint_t _ungetwc_nolock(wint_t _Ch,FILE *_File);
# 669 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  __attribute__ ((__dllimport__)) wchar_t * _itow(int _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ltow(long _Value,wchar_t *_Dest,int _Radix) ;
  __attribute__ ((__dllimport__)) wchar_t * _ultow(unsigned long _Value,wchar_t *_Dest,int _Radix) ;
  double wcstod(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr);
  __attribute__ ((__dllimport__)) double _wcstod_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,_locale_t _Locale);
  float wcstof( const wchar_t * __restrict__ nptr, wchar_t ** __restrict__ endptr);

  float wcstof (const wchar_t * __restrict__, wchar_t ** __restrict__);
  long double wcstold (const wchar_t * __restrict__, wchar_t ** __restrict__);

  long wcstol(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) long _wcstol_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  unsigned long wcstoul(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix);
  __attribute__ ((__dllimport__)) unsigned long _wcstoul_l(const wchar_t * __restrict__ _Str,wchar_t ** __restrict__ _EndPtr,int _Radix,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wgetenv(const wchar_t *_VarName) ;




  __attribute__ ((__dllimport__)) double _wtof(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) double _wtof_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wtoi(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) int _wtoi_l(const wchar_t *_Str,_locale_t _Locale);
  __attribute__ ((__dllimport__)) long _wtol(const wchar_t *_Str);
  __attribute__ ((__dllimport__)) long _wtol_l(const wchar_t *_Str,_locale_t _Locale);

  __extension__ __attribute__ ((__dllimport__)) wchar_t * _i64tow(long long _Val,wchar_t *_DstBuf,int _Radix) ;
  __extension__ __attribute__ ((__dllimport__)) wchar_t * _ui64tow(unsigned long long _Val,wchar_t *_DstBuf,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64(const wchar_t *_Str);
  __extension__ __attribute__ ((__dllimport__)) long long _wtoi64_l(const wchar_t *_Str,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) long long _wcstoi64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix);
  __extension__ __attribute__ ((__dllimport__)) unsigned long long _wcstoui64_l(const wchar_t *_Str,wchar_t **_EndPtr,int _Radix,_locale_t _Locale);





  __attribute__ ((__dllimport__)) wchar_t * _wfullpath(wchar_t *_FullPath,const wchar_t *_Path,size_t _SizeInWords);
  __attribute__ ((__dllimport__)) void _wmakepath(wchar_t *_ResultPath,const wchar_t *_Drive,const wchar_t *_Dir,const wchar_t *_Filename,const wchar_t *_Ext);




  __attribute__ ((__dllimport__)) int _wputenv(const wchar_t *_EnvString);
  __attribute__ ((__dllimport__)) void _wsearchenv(const wchar_t *_Filename,const wchar_t *_EnvVar,wchar_t *_ResultPath) ;
  __attribute__ ((__dllimport__)) void _wsplitpath(const wchar_t *_FullPath,wchar_t *_Drive,wchar_t *_Dir,wchar_t *_Filename,wchar_t *_Ext) ;





  __attribute__ ((__dllimport__)) wchar_t * _wcsdup(const wchar_t *_Str);
  wchar_t * wcscat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
                wchar_t * wcschr(const wchar_t *_Str,wchar_t _Ch);
  int wcscmp(const wchar_t *_Str1,const wchar_t *_Str2);
  wchar_t * wcscpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source) ;
  size_t wcscspn(const wchar_t *_Str,const wchar_t *_Control);
  size_t wcslen(const wchar_t *_Str);
  size_t wcsnlen(const wchar_t *_Src,size_t _MaxCount);
  wchar_t * wcsncat(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  int wcsncmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  wchar_t * wcsncpy(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count) ;
  wchar_t * _wcsncpy_l(wchar_t * __restrict__ _Dest,const wchar_t * __restrict__ _Source,size_t _Count,_locale_t _Locale) ;
                wchar_t * wcspbrk(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsrchr(const wchar_t *_Str,wchar_t _Ch);
  size_t wcsspn(const wchar_t *_Str,const wchar_t *_Control);
                wchar_t * wcsstr(const wchar_t *_Str,const wchar_t *_SubStr);
  wchar_t * wcstok(wchar_t * __restrict__ _Str,const wchar_t * __restrict__ _Delim) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcserror(int _ErrNum) ;
  __attribute__ ((__dllimport__)) wchar_t * __wcserror(const wchar_t *_Str) ;
  __attribute__ ((__dllimport__)) int _wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicmp_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsrev(wchar_t *_Str);
  __attribute__ ((__dllimport__)) wchar_t * _wcsset(wchar_t *_Str,wchar_t _Val) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcslwr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcslwr_l(wchar_t *_String,_locale_t _Locale) ;
  __attribute__ ((__dllimport__)) wchar_t * _wcsupr(wchar_t *_String) ;
  __attribute__ ((__dllimport__)) wchar_t *_wcsupr_l(wchar_t *_String,_locale_t _Locale) ;
  size_t wcsxfrm(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount);
  __attribute__ ((__dllimport__)) size_t _wcsxfrm_l(wchar_t * __restrict__ _Dst,const wchar_t * __restrict__ _Src,size_t _MaxCount,_locale_t _Locale);
  int wcscoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcscoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2);
  __attribute__ ((__dllimport__)) int _wcsicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsncoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsncoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _wcsnicoll(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount);
  __attribute__ ((__dllimport__)) int _wcsnicoll_l(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount,_locale_t _Locale);


  wchar_t * wcsdup(const wchar_t *_Str) ;

  int wcsicmp(const wchar_t *_Str1,const wchar_t *_Str2) ;
  int wcsnicmp(const wchar_t *_Str1,const wchar_t *_Str2,size_t _MaxCount) ;
  wchar_t * wcsnset(wchar_t *_Str,wchar_t _Val,size_t _MaxCount) ;
  wchar_t * wcsrev(wchar_t *_Str) ;
  wchar_t * wcsset(wchar_t *_Str,wchar_t _Val) ;
  wchar_t * wcslwr(wchar_t *_Str) ;
  wchar_t * wcsupr(wchar_t *_Str) ;
  int wcsicoll(const wchar_t *_Str1,const wchar_t *_Str2) ;





  struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
  };





  __attribute__ ((__dllimport__)) wchar_t * _wasctime(const struct tm *_Tm);
  wchar_t * _wctime32(const __time32_t *_Time) ;
  size_t wcsftime(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm);
  __attribute__ ((__dllimport__)) size_t _wcsftime_l(wchar_t * __restrict__ _Buf,size_t _SizeInWords,const wchar_t * __restrict__ _Format,const struct tm * __restrict__ _Tm,_locale_t _Locale);
  __attribute__ ((__dllimport__)) wchar_t * _wstrdate(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wstrtime(wchar_t *_Buffer) ;
  __attribute__ ((__dllimport__)) wchar_t * _wctime64(const __time64_t *_Time) ;



  wchar_t * _wctime(const time_t *_Time) ;
# 816 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
  typedef int mbstate_t;
  typedef wchar_t _Wint_t;

  wint_t btowc(int);
  size_t mbrlen(const char * __restrict__ _Ch,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbrtowc(wchar_t * __restrict__ _DstCh,const char * __restrict__ _SrcCh,size_t _SizeInBytes,mbstate_t * __restrict__ _State);
  size_t mbsrtowcs(wchar_t * __restrict__ _Dest,const char ** __restrict__ _PSrc,size_t _Count,mbstate_t * __restrict__ _State) ;
  size_t wcrtomb(char * __restrict__ _Dest,wchar_t _Source,mbstate_t * __restrict__ _State) ;
  size_t wcsrtombs(char * __restrict__ _Dest,const wchar_t ** __restrict__ _PSource,size_t _Count,mbstate_t * __restrict__ _State) ;
  int wctob(wint_t _WCh);


  wchar_t * wmemset(wchar_t *s, wchar_t c, size_t n);
                wchar_t * wmemchr(const wchar_t *s, wchar_t c, size_t n);
  int wmemcmp(const wchar_t *s1, const wchar_t *s2,size_t n);
  wchar_t * wmemcpy(wchar_t * __restrict__ s1,const wchar_t * __restrict__ s2,size_t n) ;
  wchar_t * wmemmove(wchar_t *s1, const wchar_t *s2, size_t n) ;
  int fwide(FILE *stream,int mode);
  int mbsinit(const mbstate_t *ps);
  __extension__ long long wcstoll(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);
  __extension__ unsigned long long wcstoull(const wchar_t * __restrict__ nptr,wchar_t ** __restrict__ endptr, int base);


  void * memmove(void *_Dst,const void *_Src,size_t _MaxCount);
  void * memcpy(void * __restrict__ _Dst,const void * __restrict__ _Src,size_t _MaxCount) ;
# 876 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 3
}


#pragma pack(pop)


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 1 3








# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 1 3
# 9 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\sec_api/wchar_s.h" 2 3
# 881 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wchar.h" 2 3
# 47 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 64 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::mbstate_t;

}
# 138 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
namespace std {

  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;



  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;





  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;


  inline wchar_t*
  wcschr(wchar_t* __p, wchar_t __c)
  { return wcschr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcspbrk(wchar_t* __s1, const wchar_t* __s2)
  { return wcspbrk(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wcsrchr(wchar_t* __p, wchar_t __c)
  { return wcsrchr(const_cast<const wchar_t*>(__p), __c); }

  inline wchar_t*
  wcsstr(wchar_t* __s1, const wchar_t* __s2)
  { return wcsstr(const_cast<const wchar_t*>(__s1), __s2); }

  inline wchar_t*
  wmemchr(wchar_t* __p, wchar_t __c, size_t __n)
  { return wmemchr(const_cast<const wchar_t*>(__p), __c, __n); }


}







namespace __gnu_cxx {






  using ::wcstold;
# 257 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
  using ::wcstoll;
  using ::wcstoull;


}

namespace std {

  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;

}
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 2 3
# 69 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
namespace std {
# 89 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
  typedef long long streamoff;







  typedef ptrdiff_t streamsize;
# 110 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 132 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
# 238 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/postypes.h" 3
}
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 2 3

namespace std {
# 73 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iosfwd" 3
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;




  typedef basic_ios<char> ios;
  typedef basic_streambuf<char> streambuf;
  typedef basic_istream<char> istream;
  typedef basic_ostream<char> ostream;
  typedef basic_iostream<char> iostream;
  typedef basic_stringbuf<char> stringbuf;
  typedef basic_istringstream<char> istringstream;
  typedef basic_ostringstream<char> ostringstream;
  typedef basic_stringstream<char> stringstream;
  typedef basic_filebuf<char> filebuf;
  typedef basic_ifstream<char> ifstream;
  typedef basic_ofstream<char> ofstream;
  typedef basic_fstream<char> fstream;


  typedef basic_ios<wchar_t> wios;
  typedef basic_streambuf<wchar_t> wstreambuf;
  typedef basic_istream<wchar_t> wistream;
  typedef basic_ostream<wchar_t> wostream;
  typedef basic_iostream<wchar_t> wiostream;
  typedef basic_stringbuf<wchar_t> wstringbuf;
  typedef basic_istringstream<wchar_t> wistringstream;
  typedef basic_ostringstream<wchar_t> wostringstream;
  typedef basic_stringstream<wchar_t> wstringstream;
  typedef basic_filebuf<wchar_t> wfilebuf;
  typedef basic_ifstream<wchar_t> wifstream;
  typedef basic_ofstream<wchar_t> wofstream;
  typedef basic_fstream<wchar_t> wfstream;



}
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 1 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3

#pragma GCC visibility push(default)



extern "C++" {

namespace std
{
# 60 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();



  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();



  void unexpected() __attribute__ ((__noreturn__));
# 117 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  bool uncaught_exception() throw() __attribute__ ((__pure__));


}

namespace __gnu_cxx {
# 140 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception" 3
  void __verbose_terminate_handler();

}

}

#pragma GCC visibility pop
# 40 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 1 3
# 61 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 62 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 1 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\exception_defines.h" 1 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/functexcept.h" 2 3

namespace std {


  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));

}
# 63 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 1 3
# 36 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 36 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
# 68 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
namespace __gnu_cxx {

  template<typename _Iterator, typename _Container>
    class __normal_iterator;

}

namespace std {

  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };




  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 193 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_fundamental
    : public __traitor<__is_void<_Tp>, __is_arithmetic<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 416 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/cpp_type_traits.h" 3
  template<typename _Tp>
    class __is_iterator_helper
    {
      typedef char __one;
      typedef struct { char __arr[2]; } __two;

      template<typename _Up>
        struct _Wrap_type
 { };

      template<typename _Up>
        static __one __test(_Wrap_type<typename _Up::iterator_category>*);

      template<typename _Up>
        static __two __test(...);

    public:
      static const bool __value = (sizeof(__test<_Tp>(0)) == 1
       || __is_pointer<_Tp>::__value);
    };

  template<typename _Tp>
    struct __is_iterator
    {
      enum { __value = __is_iterator_helper<_Tp>::__value };
      typedef typename __truth_type<__value>::__type __type;
    };

}
# 64 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 1 3
# 32 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3
# 32 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/type_traits.h" 3




namespace __gnu_cxx {


  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };

  template<typename _Tp>
    struct __promote<_Tp, false>
    { typedef _Tp __type; };

  template<typename _Tp, typename _Up>
    struct __promote_2
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;

    public:
      typedef __typeof__(__type1() + __type2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp>
    struct __promote_3
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;

    public:
      typedef __typeof__(__type1() + __type2() + __type3()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp>
    struct __promote_4
    {
    private:
      typedef typename __promote<_Tp>::__type __type1;
      typedef typename __promote<_Up>::__type __type2;
      typedef typename __promote<_Vp>::__type __type3;
      typedef typename __promote<_Wp>::__type __type4;

    public:
      typedef __typeof__(__type1() + __type2() + __type3() + __type4()) __type;
    };

}
# 65 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 1 3
# 32 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
# 32 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3




namespace __gnu_cxx {
# 51 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 96 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 3010 / 10000);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };

}
# 66 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 1 3
# 60 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 1 3
# 34 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 1 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/concept_check.h" 3
# 36 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 2 3
# 95 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
namespace std {
# 104 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/move.h" 3
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)
    {



      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }



  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }

}
# 61 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 2 3






namespace std {


  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 113 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
      template<class _U1, class _U2>
        pair(const pair<_U1, _U2>& __p)
 : first(__p.first),
   second(__p.second) { }
# 149 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 211 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }
# 257 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_pair.h" 3
}
# 67 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 1 3
# 63 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
# 63 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 66 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 2 3

namespace std {
# 84 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 111 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 135 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_types.h" 3
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };


  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }



}
# 68 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 1 3
# 63 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
# 63 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3



namespace std {

  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {



      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {



      return __last - __first;
    }
# 108 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {


      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {



      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {



      __i += __n;
    }
# 166 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }

}
# 69 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 1 3
# 68 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
namespace std {
# 94 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }






      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }






      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }






      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 281 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 393 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 420 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 443 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 469 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 484 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 510 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 533 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 559 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 578 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 621 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 647 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 673 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }



}

namespace __gnu_cxx {
# 694 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      __normal_iterator() : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](const difference_type& __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(const difference_type& __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(const difference_type& __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(const difference_type& __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(const difference_type& __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 792 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }

}
# 70 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 1 3
# 47 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 72 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 2 3


namespace std {




  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 115 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {
      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;
# 134 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);
    }
# 156 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {





                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 184 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {



      if (__b < __a)
 return __b;
      return __a;
    }
# 207 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {



      if (__a < __b)
 return __b;
      return __a;
    }
# 230 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 251 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }




  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type
      _S_base(_Iterator __it)
      { return __it.base(); }
    };



  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }


  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 339 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 377 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 462 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {




                                                     ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 514 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 542 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 572 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {
   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_pod(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 631 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {






                                                     ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 689 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      __builtin_memset(__first, static_cast<unsigned char>(__tmp),
         __last - __first);
    }
# 733 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {



                                                     ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (; __n > 0; --__n, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __n > 0; --__n, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 791 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {



      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   return !__builtin_memcmp(__first1, __first2, sizeof(_Tp)
       * (__last1 - __first1));
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = (__is_integer<_ValueType1>::__value
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }


  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 typedef typename iterator_traits<_II1>::iterator_category _Category1;
 typedef typename iterator_traits<_II2>::iterator_category _Category2;
 typedef std::__lc_rai<_Category1, _Category2> __rai_type;

 __last1 = __rai_type::__newlast1(__first1, __last1,
      __first2, __last2);
 for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
      ++__first1, ++__first2)
   {
     if (*__first1 < *__first2)
       return true;
     if (*__first2 < *__first1)
       return false;
   }
 return __first1 == __last1 && __first2 != __last2;
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   const int __result = __builtin_memcmp(__first1, __first2,
      std::min(__len1, __len2));
   return __result != 0 ? __result < 0 : __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }
# 952 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;




                                                                  ;

      _DistanceType __len = std::distance(__first, __last);
      _DistanceType __half;
      _ForwardIterator __middle;

      while (__len > 0)
 {
   __half = __len >> 1;
   __middle = __first;
   std::advance(__middle, __half);
   if (*__middle < __val)
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }



  template<typename _Size>
    inline _Size
    __lg(_Size __n)
    {
      _Size __k;
      for (__k = 0; __n != 0; __n >>= 1)
 ++__k;
      return __k - 1;
    }

  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

}

namespace std {
# 1028 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {






                                                       ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1060 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1091 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {

      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;




                                                       ;
                                                       ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1125 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;




                                                       ;
                                                       ;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(*__first1, *__first2))
     return true;
   if (__comp(*__first2, *__first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }
# 1165 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {






                                                       ;

      while (__first1 != __last1 && *__first1 == *__first2)
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1202 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {



                                                       ;

      while (__first1 != __last1 && bool(__binary_pred(*__first1, *__first2)))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }

}
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwchar" 2 3
# 43 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 2 3








namespace __gnu_cxx {
# 63 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 88 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }

}

namespace std {
# 229 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return __builtin_memcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n)); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n)); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n)); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return static_cast<char_type*>(__builtin_memset(__s, __a, __n)); }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((-1)); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcmp(__s1, __s2, __n); }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      { return wmemchr(__s, __a, __n); }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemmove(__s1, __s2, __n); }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      { return wmemcpy(__s1, __s2, __n); }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      { return wmemset(__s, __a, __n); }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((wint_t)(0xFFFF)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };


}
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 1 3
# 40 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3
# 40 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 1 3








# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
  struct lconv {
    char *decimal_point;
    char *thousands_sep;
    char *grouping;
    char *int_curr_symbol;
    char *currency_symbol;
    char *mon_decimal_point;
    char *mon_thousands_sep;
    char *mon_grouping;
    char *positive_sign;
    char *negative_sign;
    char int_frac_digits;
    char frac_digits;
    char p_cs_precedes;
    char p_sep_by_space;
    char n_cs_precedes;
    char n_sep_by_space;
    char p_sign_posn;
    char n_sign_posn;
  };
# 75 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\locale.h" 3
  int _configthreadlocale(int _Flag);
  char * setlocale(int _Category,const char *_Locale);
  __attribute__ ((__dllimport__)) struct lconv * localeconv(void);
  _locale_t _get_current_locale(void);
  _locale_t _create_locale(int _Category,const char *_Locale);
  void _free_locale(_locale_t _Locale);
  _locale_t __get_current_locale(void);
  _locale_t __create_locale(int _Category,const char *_Locale);
  void __free_locale(_locale_t _Locale);







}


#pragma pack(pop)
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\clocale" 2 3








namespace std {

  using ::lconv;
  using ::setlocale;
  using ::localeconv;

}
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 43 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++locale.h" 2 3



namespace std {

  typedef int* __c_locale;





  inline int
  __convert_from_v(const __c_locale&, char* __out,
     const int __size __attribute__((__unused__)),
     const char* __fmt, ...)
  {
    char* __old = std::setlocale(4, __null);
    char* __sav = __null;
    if (__builtin_strcmp(__old, "C"))
      {
 const size_t __len = __builtin_strlen(__old) + 1;
 __sav = new char[__len];
 __builtin_memcpy(__sav, __old, __len);
 std::setlocale(4, "C");
      }

    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);

    if (__sav)
      {
 std::setlocale(4, __sav);
 delete [] __sav;
      }
    return __ret;
  }

}
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 1 3








# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 2 3



extern "C" {
# 72 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  extern const unsigned char __newclmap[];
  extern const unsigned char __newcumap[];
  extern pthreadlocinfo __ptlocinfo;
  extern pthreadmbcinfo __ptmbcinfo;
  extern int __globallocalestatus;
  extern int __locale_changed;
  extern struct threadlocaleinfostruct __initiallocinfo;
  extern _locale_tstruct __initiallocalestructinfo;
  pthreadlocinfo __updatetlocinfo(void);
  pthreadmbcinfo __updatetmbcinfo(void);
# 100 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  __attribute__ ((__dllimport__)) int _isctype(int _C,int _Type);
  __attribute__ ((__dllimport__)) int _isctype_l(int _C,int _Type,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalpha(int _C);
  __attribute__ ((__dllimport__)) int _isalpha_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isupper(int _C);
  __attribute__ ((__dllimport__)) int _isupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int islower(int _C);
  __attribute__ ((__dllimport__)) int _islower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isdigit(int _C);
  __attribute__ ((__dllimport__)) int _isdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isxdigit(int _C);
  __attribute__ ((__dllimport__)) int _isxdigit_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isspace(int _C);
  __attribute__ ((__dllimport__)) int _isspace_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int ispunct(int _C);
  __attribute__ ((__dllimport__)) int _ispunct_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isalnum(int _C);
  __attribute__ ((__dllimport__)) int _isalnum_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isprint(int _C);
  __attribute__ ((__dllimport__)) int _isprint_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int isgraph(int _C);
  __attribute__ ((__dllimport__)) int _isgraph_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int iscntrl(int _C);
  __attribute__ ((__dllimport__)) int _iscntrl_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int toupper(int _C);
  __attribute__ ((__dllimport__)) int tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower(int _C);
  __attribute__ ((__dllimport__)) int _tolower_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int _toupper(int _C);
  __attribute__ ((__dllimport__)) int _toupper_l(int _C,_locale_t _Locale);
  __attribute__ ((__dllimport__)) int __isascii(int _C);
  __attribute__ ((__dllimport__)) int __toascii(int _C);
  __attribute__ ((__dllimport__)) int __iscsymf(int _C);
  __attribute__ ((__dllimport__)) int __iscsym(int _C);


int isblank(int _C);
# 193 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
  extern int * __imp___mb_cur_max;
# 275 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\ctype.h" 3
}
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 2 3
# 63 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
namespace std {

  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;

}
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 2 3

namespace std {
# 54 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/localefwd.h" 3
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;


  template<typename _CharT>
    class collate;
  template<typename _CharT> class
    collate_byname;


  class time_base;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;

  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;

  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;


  class messages_base;
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;

}
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 1 3
# 34 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 1 3
# 30 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
#pragma GCC visibility push(default)
# 162 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 1 3
# 70 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 1 3








# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 9 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 2 3



extern "C" {




__attribute__ ((__dllimport__)) extern int * _errno(void);


errno_t _set_errno(int _Value);
errno_t _get_errno(int *_Value);
# 74 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\errno.h" 3
}
# 71 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 73 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 2 3
# 340 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern "C" {


typedef unsigned long __gthread_key_t;

typedef struct {
  int done;
  long started;
} __gthread_once_t;

typedef struct {
  long counter;
  void *sema;
} __gthread_mutex_t;

typedef struct {
  long counter;
  long depth;
  unsigned long owner;
  void *sema;
} __gthread_recursive_mutex_t;
# 374 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
extern int _CRT_MT;
extern int __mingwthr_key_dtor (unsigned long, void (*) (void *));
# 401 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{

  return _CRT_MT;



}







extern int __gthr_win32_once (__gthread_once_t *, void (*) (void));
extern int __gthr_win32_key_create (__gthread_key_t *, void (*) (void*));
extern int __gthr_win32_key_delete (__gthread_key_t);
extern void * __gthr_win32_getspecific (__gthread_key_t);
extern int __gthr_win32_setspecific (__gthread_key_t, const void *);
extern void __gthr_win32_mutex_init_function (__gthread_mutex_t *);
extern int __gthr_win32_mutex_lock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_trylock (__gthread_mutex_t *);
extern int __gthr_win32_mutex_unlock (__gthread_mutex_t *);
extern void
  __gthr_win32_recursive_mutex_init_function (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_lock (__gthread_recursive_mutex_t *);
extern int
  __gthr_win32_recursive_mutex_trylock (__gthread_recursive_mutex_t *);
extern int __gthr_win32_recursive_mutex_unlock (__gthread_recursive_mutex_t *);
extern void __gthr_win32_mutex_destroy (__gthread_mutex_t *);

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthr_win32_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthr_win32_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthr_win32_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthr_win32_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthr_win32_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_init_function (__mutex);
}

static inline void
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  __gthr_win32_mutex_destroy (__mutex);
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_mutex_unlock (__mutex);
  else
    return 0;
}

static inline void
__gthread_recursive_mutex_init_function (__gthread_recursive_mutex_t *__mutex)
{
   __gthr_win32_recursive_mutex_init_function (__mutex);
}

static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_trylock (__mutex);
  else
    return 0;
}

static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthr_win32_recursive_mutex_unlock (__mutex);
  else
    return 0;
}
# 767 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr-default.h" 3
}
# 163 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/gthr.h" 2 3







#pragma GCC visibility pop
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 1 3
# 32 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/atomic_word.h" 3
typedef int _Atomic_word;
# 36 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 2 3

namespace __gnu_cxx {






  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __sync_fetch_and_add(__mem, __val); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __sync_fetch_and_add(__mem, __val); }
# 61 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }

}
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 1 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 3




# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 1 3
# 48 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 1 3
# 34 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 1 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/include\\stddef.h" 1 3 4
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cstddef" 2 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 2 3


#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };

  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();
}
# 92 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\new" 3
void* operator new(std::size_t) throw (std::bad_alloc);
void* operator new[](std::size_t) throw (std::bad_alloc);
void operator delete(void*) throw();
void operator delete[](void*) throw();
void* operator new(std::size_t, const std::nothrow_t&) throw();
void* operator new[](std::size_t, const std::nothrow_t&) throw();
void operator delete(void*, const std::nothrow_t&) throw();
void operator delete[](void*, const std::nothrow_t&) throw();


inline void* operator new(std::size_t, void* __p) throw() { return __p; }
inline void* operator new[](std::size_t, void* __p) throw() { return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 2 3



namespace __gnu_cxx {

  using std::size_t;
  using std::ptrdiff_t;
# 50 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };

      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const { return &__x; }

      const_pointer
      address(const_reference __x) const { return &__x; }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }



      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }
# 114 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ext/new_allocator.h" 3
      void
      destroy(pointer __p) { __p->~_Tp(); }
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }

}
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/c++allocator.h" 2 3
# 49 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 2 3

namespace std {
# 59 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator;


  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };
    };
# 85 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };

      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    { return false; }





  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
# 204 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/allocator.h" 3
}
# 43 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 1 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 1 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cxxabi-forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();


    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 36 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream_insert.h" 2 3

namespace std {

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   if (true)
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   if (false)
     {
       __out._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }





  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);



}
# 46 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 1 3
# 60 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
namespace std {
# 99 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {
      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {
      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;
      typedef _Result result_type;
    };
# 134 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 198 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 262 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };
# 345 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 416 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st : public unary_function<_Pair,
           typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
    };

  template<typename _Pair>
    struct _Select2nd : public unary_function<_Pair,
           typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 523 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }



}



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 1 3
# 60 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
namespace std {
# 97 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }


}
# 713 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/stl_function.h" 2 3
# 50 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 1 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 33 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\initializer_list" 3
# 43 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 2 3

namespace std {
# 103 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename _Alloc::template rebind<_CharT>::other _CharT_alloc_type;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Alloc allocator_type;
      typedef typename _CharT_alloc_type::size_type size_type;
      typedef typename _CharT_alloc_type::difference_type difference_type;
      typedef typename _CharT_alloc_type::reference reference;
      typedef typename _CharT_alloc_type::const_reference const_reference;
      typedef typename _CharT_alloc_type::pointer pointer;
      typedef typename _CharT_alloc_type::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
                                                            const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;

    private:
# 140 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      struct _Rep_base
      {
 size_type _M_length;
 size_type _M_capacity;
 _Atomic_word _M_refcount;
      };

      struct _Rep : _Rep_base
      {

 typedef typename _Alloc::template rebind<char>::other _Raw_bytes_alloc;
# 165 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
 static const size_type _S_max_size;
 static const _CharT _S_terminal;



        static size_type _S_empty_rep_storage[];

        static _Rep&
        _S_empty_rep()
        {



   void* __p = reinterpret_cast<void*>(&_S_empty_rep_storage);
   return *reinterpret_cast<_Rep*>(__p);
 }

        bool
 _M_is_leaked() const
        { return this->_M_refcount < 0; }

        bool
 _M_is_shared() const
        { return this->_M_refcount > 0; }

        void
 _M_set_leaked()
        { this->_M_refcount = -1; }

        void
 _M_set_sharable()
        { this->_M_refcount = 0; }

 void
 _M_set_length_and_sharable(size_type __n)
 {



     {
       this->_M_set_sharable();
       this->_M_length = __n;
       traits_type::assign(this->_M_refdata()[__n], _S_terminal);


     }
 }

 _CharT*
 _M_refdata() throw()
 { return reinterpret_cast<_CharT*>(this + 1); }

 _CharT*
 _M_grab(const _Alloc& __alloc1, const _Alloc& __alloc2)
 {
   return (!_M_is_leaked() && __alloc1 == __alloc2)
           ? _M_refcopy() : _M_clone(__alloc1);
 }


 static _Rep*
 _S_create(size_type, size_type, const _Alloc&);

 void
 _M_dispose(const _Alloc& __a)
 {



     if (__gnu_cxx::__exchange_and_add_dispatch(&this->_M_refcount,
             -1) <= 0)
       _M_destroy(__a);
 }

 void
 _M_destroy(const _Alloc&) throw();

 _CharT*
 _M_refcopy() throw()
 {



            __gnu_cxx::__atomic_add_dispatch(&this->_M_refcount, 1);
   return _M_refdata();
 }

 _CharT*
 _M_clone(const _Alloc&, size_type __res = 0);
      };


      struct _Alloc_hider : _Alloc
      {
 _Alloc_hider(_CharT* __dat, const _Alloc& __a)
 : _Alloc(__a), _M_p(__dat) { }

 _CharT* _M_p;
      };

    public:




      static const size_type npos = static_cast<size_type>(-1);

    private:

      mutable _Alloc_hider _M_dataplus;

      _CharT*
      _M_data() const
      { return _M_dataplus._M_p; }

      _CharT*
      _M_data(_CharT* __p)
      { return (_M_dataplus._M_p = __p); }

      _Rep*
      _M_rep() const
      { return &((reinterpret_cast<_Rep*> (_M_data()))[-1]); }



      iterator
      _M_ibegin() const
      { return iterator(_M_data()); }

      iterator
      _M_iend() const
      { return iterator(_M_data() + this->size()); }

      void
      _M_leak()
      {
 if (!_M_rep()->_M_is_leaked())
   _M_leak_hard();
      }

      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range((__s));
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }


      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _M_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _M_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _M_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      { _M_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_mutate(size_type __pos, size_type __len1, size_type __len2);

      void
      _M_leak_hard();

      static _Rep&
      _S_empty_rep()
      { return _Rep::_S_empty_rep(); }

    public:







      basic_string()



      : _M_dataplus(_S_construct(size_type(), _CharT(), _Alloc()), _Alloc()){ }





      explicit
      basic_string(const _Alloc& __a);






      basic_string(const basic_string& __str);






      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos);







      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a);
# 468 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc());





      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc());






      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc());
# 516 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc());




      ~basic_string()
      { _M_rep()->_M_dispose(this->get_allocator()); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 549 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 589 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      begin()
      {
 _M_leak();
 return iterator(_M_data());
      }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      {
 _M_leak();
 return iterator(_M_data() + this->size());
      }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }
# 695 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
    public:



      size_type
      size() const
      { return _M_rep()->_M_length; }



      size_type
      length() const
      { return _M_rep()->_M_length; }


      size_type
      max_size() const
      { return _Rep::_S_max_size; }
# 724 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 737 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }
# 757 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      capacity() const
      { return _M_rep()->_M_capacity; }
# 778 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_mutate(0, this->size(), 0); }





      bool
      empty() const
      { return this->size() == 0; }
# 807 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
                                       ;
 return _M_data()[__pos];
      }
# 824 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {

                                       ;

                                         ;
 _M_leak();
 return _M_data()[__pos];
      }
# 845 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range(("basic_string::at"));
 return _M_data()[__n];
      }
# 864 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range(("basic_string::at"));
 _M_leak();
 return _M_data()[__n];
      }







      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
# 920 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str);
# 935 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n);







      basic_string&
      append(const _CharT* __s, size_type __n);






      basic_string&
      append(const _CharT* __s)
      {
                               ;
 return this->append(__s, traits_type::length(__s));
      }
# 967 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c);
# 989 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_iend(), _M_iend(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __len = 1 + this->size();
 if (__len > this->capacity() || _M_rep()->_M_is_shared())
   this->reserve(__len);
 traits_type::assign(_M_data()[this->size()], __c);
 _M_rep()->_M_set_length_and_sharable(__len);
      }






      basic_string&
      assign(const basic_string& __str);
# 1045 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return this->assign(__str._M_data()
       + __str._M_check(__pos, "basic_string::assign"),
       __str._M_limit(__pos, __n)); }
# 1061 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n);
# 1073 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
                               ;
 return this->assign(__s, traits_type::length(__s));
      }
# 1089 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1101 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(_M_ibegin(), _M_iend(), __first, __last); }
# 1129 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1144 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1175 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->insert(__pos1, __str, size_type(0), __str.size()); }
# 1197 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->insert(__pos1, __str._M_data()
       + __str._M_check(__pos2, "basic_string::insert"),
       __str._M_limit(__pos2, __n)); }
# 1220 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n);
# 1238 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
                               ;
 return this->insert(__pos, __s, traits_type::length(__s));
      }
# 1261 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1278 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      insert(iterator __p, _CharT __c)
      {
                                                                 ;
 const size_type __pos = __p - _M_ibegin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1302 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 _M_mutate(_M_check(__pos, "basic_string::erase"),
    _M_limit(__pos, __n), size_type(0));
 return *this;
      }
# 1318 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      erase(iterator __position)
      {

                               ;
 const size_type __pos = __position - _M_ibegin();
 _M_mutate(__pos, size_type(1), size_type(0));
 _M_rep()->_M_set_leaked();
 return iterator(_M_data() + __pos);
      }
# 1338 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      iterator
      erase(iterator __first, iterator __last);
# 1357 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1379 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1403 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2);
# 1422 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
                               ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1445 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1463 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1481 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s, size_type __n)
      {

                          ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1, __s, __n);
      }
# 1502 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, const _CharT* __s)
      {
                               ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1523 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string&
      replace(iterator __i1, iterator __i2, size_type __n, _CharT __c)
      {

                          ;
 return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __c);
      }
# 1545 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      template<class _InputIterator>
        basic_string&
        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {

                            ;
                                             ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }



      basic_string&
      replace(iterator __i1, iterator __i2, _CharT* __k1, _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2, iterator __k1, iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(iterator __i1, iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                          ;
                                           ;
 return this->replace(__i1 - _M_ibegin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1620 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _Integer __n,
       _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - _M_ibegin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
       _InputIterator __k2, __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
        size_type __n2);



      template<class _InIterator>
        static _CharT*
        _S_construct_aux(_InIterator __beg, _InIterator __end,
    const _Alloc& __a, __false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          return _S_construct(__beg, __end, __a, _Tag());
 }



      template<class _Integer>
        static _CharT*
        _S_construct_aux(_Integer __beg, _Integer __end,
    const _Alloc& __a, __true_type)
        { return _S_construct_aux_2(static_cast<size_type>(__beg),
        __end, __a); }

      static _CharT*
      _S_construct_aux_2(size_type __req, _CharT __c, const _Alloc& __a)
      { return _S_construct(__req, __c, __a); }

      template<class _InIterator>
        static _CharT*
        _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   return _S_construct_aux(__beg, __end, __a, _Integral());
        }


      template<class _InIterator>
        static _CharT*
         _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
        input_iterator_tag);



      template<class _FwdIterator>
        static _CharT*
        _S_construct(_FwdIterator __beg, _FwdIterator __end, const _Alloc& __a,
       forward_iterator_tag);

      static _CharT*
      _S_construct(size_type __req, _CharT __c, const _Alloc& __a);

    public:
# 1701 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1711 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      void
      swap(basic_string& __s);
# 1721 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_dataplus; }
# 1753 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1766 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
      { return this->find(__str.data(), __pos, __str.size()); }
# 1780 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1797 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const;
# 1810 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1825 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 1838 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 1855 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const;
# 1868 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 1883 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1896 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 1915 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 1929 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 1944 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 1957 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 1976 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 1990 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2005 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2019 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
                               ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2036 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const;
# 2049 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2065 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2078 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
                               ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2095 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const;
# 2110 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2128 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2158 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2182 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2200 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2223 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2248 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
# 2260 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
      const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 2331 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 2377 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 2414 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 2451 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 2488 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 2525 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 2562 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 2579 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 2597 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 2620 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 2638 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return getline(__is, __str, __is.widen('\n')); }

  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);


}
# 53 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 1 3
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_max_size = (((npos - sizeof(_Rep_base))/sizeof(_CharT)) - 1) / 4;

  template<typename _CharT, typename _Traits, typename _Alloc>
    const _CharT
    basic_string<_CharT, _Traits, _Alloc>::
    _Rep::_S_terminal = _CharT();

  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;



  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::_Rep::_S_empty_rep_storage[
    (sizeof(_Rep_base) + sizeof(_CharT) + sizeof(size_type) - 1) /
      sizeof(size_type)];





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     input_iterator_tag)
      {





 _CharT __buf[128];
 size_type __len = 0;
 while (__beg != __end && __len < sizeof(__buf) / sizeof(_CharT))
   {
     __buf[__len++] = *__beg;
     ++__beg;
   }
 _Rep* __r = _Rep::_S_create(__len, size_type(0), __a);
 _M_copy(__r->_M_refdata(), __buf, __len);
 if (true)
   {
     while (__beg != __end)
       {
  if (__len == __r->_M_capacity)
    {

      _Rep* __another = _Rep::_S_create(__len + 1, __len, __a);
      _M_copy(__another->_M_refdata(), __r->_M_refdata(), __len);
      __r->_M_destroy(__a);
      __r = __another;
    }
  __r->_M_refdata()[__len++] = *__beg;
  ++__beg;
       }
   }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__len);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template <typename _InIterator>
      _CharT*
      basic_string<_CharT, _Traits, _Alloc>::
      _S_construct(_InIterator __beg, _InIterator __end, const _Alloc& __a,
     forward_iterator_tag)
      {





 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   __throw_logic_error(("basic_string::_S_construct NULL not valid"));

 const size_type __dnew = static_cast<size_type>(std::distance(__beg,
              __end));

 _Rep* __r = _Rep::_S_create(__dnew, size_type(0), __a);
 if (true)
   { _S_copy_chars(__r->_M_refdata(), __beg, __end); }
 if (false)
   {
     __r->_M_destroy(__a);
                            ;
   }
 __r->_M_set_length_and_sharable(__dnew);
 return __r->_M_refdata();
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::
    _S_construct(size_type __n, _CharT __c, const _Alloc& __a)
    {





      _Rep* __r = _Rep::_S_create(__n, size_type(0), __a);
      if (__n)
 _M_assign(__r->_M_refdata(), __n, __c);

      __r->_M_set_length_and_sharable(__n);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str)
    : _M_dataplus(__str._M_rep()->_M_grab(_Alloc(__str.get_allocator()),
       __str.get_allocator()),
    __str.get_allocator())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _Alloc& __a)
    : _M_dataplus(_S_construct(size_type(), _CharT(), __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos, size_type __n)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, _Alloc()), _Alloc())
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const basic_string& __str, size_type __pos,
   size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__str._M_data()
          + __str._M_check(__pos,
      "basic_string::basic_string"),
          __str._M_data() + __str._M_limit(__pos, __n)
          + __pos, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, size_type __n, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s + __n, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(const _CharT* __s, const _Alloc& __a)
    : _M_dataplus(_S_construct(__s, __s ? __s + traits_type::length(__s) :
          __s + npos, __a), __a)
    { }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(size_type __n, _CharT __c, const _Alloc& __a)
    : _M_dataplus(_S_construct(__n, __c, __a), __a)
    { }


  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
    basic_string<_CharT, _Traits, _Alloc>::
    basic_string(_InputIterator __beg, _InputIterator __end, const _Alloc& __a)
    : _M_dataplus(_S_construct(__beg, __end, __a), __a)
    { }
# 239 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const basic_string& __str)
    {
      if (_M_rep() != __str._M_rep())
 {

   const allocator_type __a = this->get_allocator();
   _CharT* __tmp = __str._M_rep()->_M_grab(__a, __str.get_allocator());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    assign(const _CharT* __s, size_type __n)
    {
                                             ;
      _M_check_length(this->size(), __n, "basic_string::assign");
      if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
 return _M_replace_safe(size_type(0), this->size(), __s, __n);
      else
 {

   const size_type __pos = __s - _M_data();
   if (__pos >= __n)
     _M_copy(_M_data(), __s, __n);
   else if (__pos)
     _M_move(_M_data(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__n);
   return *this;
 }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(size_type __n, _CharT __c)
    {
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_assign(_M_data() + this->size(), __n, __c);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const _CharT* __s, size_type __n)
    {
                                             ;
      if (__n)
 {
   _M_check_length(size_type(0), __n, "basic_string::append");
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     {
       if (_M_disjunct(__s))
  this->reserve(__len);
       else
  {
    const size_type __off = __s - _M_data();
    this->reserve(__len);
    __s = _M_data() + __off;
  }
     }
   _M_copy(_M_data() + this->size(), __s, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str)
    {
      const size_type __size = __str.size();
      if (__size)
 {
   const size_type __len = __size + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data(), __size);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    append(const basic_string& __str, size_type __pos, size_type __n)
    {
      __str._M_check(__pos, "basic_string::append");
      __n = __str._M_limit(__pos, __n);
      if (__n)
 {
   const size_type __len = __n + this->size();
   if (__len > this->capacity() || _M_rep()->_M_is_shared())
     this->reserve(__len);
   _M_copy(_M_data() + this->size(), __str._M_data() + __pos, __n);
   _M_rep()->_M_set_length_and_sharable(__len);
 }
      return *this;
    }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     insert(size_type __pos, const _CharT* __s, size_type __n)
     {
                                              ;
       _M_check(__pos, "basic_string::insert");
       _M_check_length(size_type(0), __n, "basic_string::insert");
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, size_type(0), __s, __n);
       else
         {

           const size_type __off = __s - _M_data();
           _M_mutate(__pos, 0, __n);
           __s = _M_data() + __off;
           _CharT* __p = _M_data() + __pos;
           if (__s + __n <= __p)
             _M_copy(__p, __s, __n);
           else if (__s >= __p)
             _M_copy(__p, __s + __n, __n);
           else
             {
        const size_type __nleft = __p - __s;
               _M_copy(__p, __s, __nleft);
               _M_copy(__p + __nleft, __p + __n, __n - __nleft);
             }
           return *this;
         }
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     typename basic_string<_CharT, _Traits, _Alloc>::iterator
     basic_string<_CharT, _Traits, _Alloc>::
     erase(iterator __first, iterator __last)
     {

                           ;




       const size_type __size = __last - __first;
       if (__size)
  {
    const size_type __pos = __first - _M_ibegin();
    _M_mutate(__pos, __size, size_type(0));
    _M_rep()->_M_set_leaked();
    return iterator(_M_data() + __pos);
  }
       else
  return __first;
     }

   template<typename _CharT, typename _Traits, typename _Alloc>
     basic_string<_CharT, _Traits, _Alloc>&
     basic_string<_CharT, _Traits, _Alloc>::
     replace(size_type __pos, size_type __n1, const _CharT* __s,
      size_type __n2)
     {
                                               ;
       _M_check(__pos, "basic_string::replace");
       __n1 = _M_limit(__pos, __n1);
       _M_check_length(__n1, __n2, "basic_string::replace");
       bool __left;
       if (_M_disjunct(__s) || _M_rep()->_M_is_shared())
         return _M_replace_safe(__pos, __n1, __s, __n2);
       else if ((__left = __s + __n2 <= _M_data() + __pos)
  || _M_data() + __pos + __n1 <= __s)
  {

    size_type __off = __s - _M_data();
    __left ? __off : (__off += __n2 - __n1);
    _M_mutate(__pos, __n1, __n2);
    _M_copy(_M_data() + __pos, _M_data() + __off, __n2);
    return *this;
  }
       else
  {

    const basic_string __tmp(__s, __n2);
    return _M_replace_safe(__pos, __n1, __tmp._M_data(), __n2);
  }
     }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_destroy(const _Alloc& __a) throw ()
    {
      const size_type __size = sizeof(_Rep_base) +
                        (this->_M_capacity + 1) * sizeof(_CharT);
      _Raw_bytes_alloc(__a).deallocate(reinterpret_cast<char*>(this), __size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_leak_hard()
    {




      if (_M_rep()->_M_is_shared())
 _M_mutate(0, 0, 0);
      _M_rep()->_M_set_leaked();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, size_type __len2)
    {
      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;
      const size_type __how_much = __old_size - __pos - __len1;

      if (__new_size > this->capacity() || _M_rep()->_M_is_shared())
 {

   const allocator_type __a = get_allocator();
   _Rep* __r = _Rep::_S_create(__new_size, this->capacity(), __a);

   if (__pos)
     _M_copy(__r->_M_refdata(), _M_data(), __pos);
   if (__how_much)
     _M_copy(__r->_M_refdata() + __pos + __len2,
      _M_data() + __pos + __len1, __how_much);

   _M_rep()->_M_dispose(__a);
   _M_data(__r->_M_refdata());
 }
      else if (__how_much && __len1 != __len2)
 {

   _M_move(_M_data() + __pos + __len2,
    _M_data() + __pos + __len1, __how_much);
 }
      _M_rep()->_M_set_length_and_sharable(__new_size);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {
      if (__res != this->capacity() || _M_rep()->_M_is_shared())
        {

   if (__res < this->size())
     __res = this->size();
   const allocator_type __a = get_allocator();
   _CharT* __tmp = _M_rep()->_M_clone(__a, __res - this->size());
   _M_rep()->_M_dispose(__a);
   _M_data(__tmp);
        }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (_M_rep()->_M_is_leaked())
 _M_rep()->_M_set_sharable();
      if (__s._M_rep()->_M_is_leaked())
 __s._M_rep()->_M_set_sharable();
      if (this->get_allocator() == __s.get_allocator())
 {
   _CharT* __tmp = _M_data();
   _M_data(__s._M_data());
   __s._M_data(__tmp);
 }

      else
 {
   const basic_string __tmp1(_M_ibegin(), _M_iend(),
        __s.get_allocator());
   const basic_string __tmp2(__s._M_ibegin(), __s._M_iend(),
        this->get_allocator());
   *this = __tmp2;
   __s = __tmp1;
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::_Rep*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _S_create(size_type __capacity, size_type __old_capacity,
       const _Alloc& __alloc)
    {


      if (__capacity > _S_max_size)
 __throw_length_error(("basic_string::_S_create"));
# 576 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_string.tcc" 3
      const size_type __pagesize = 4096;
      const size_type __malloc_header_size = 4 * sizeof(void*);







      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 __capacity = 2 * __old_capacity;




      size_type __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);

      const size_type __adj_size = __size + __malloc_header_size;
      if (__adj_size > __pagesize && __capacity > __old_capacity)
 {
   const size_type __extra = __pagesize - __adj_size % __pagesize;
   __capacity += __extra / sizeof(_CharT);

   if (__capacity > _S_max_size)
     __capacity = _S_max_size;
   __size = (__capacity + 1) * sizeof(_CharT) + sizeof(_Rep);
 }



      void* __place = _Raw_bytes_alloc(__alloc).allocate(__size);
      _Rep *__p = new (__place) _Rep;
      __p->_M_capacity = __capacity;







      __p->_M_set_sharable();
      return __p;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    _CharT*
    basic_string<_CharT, _Traits, _Alloc>::_Rep::
    _M_clone(const _Alloc& __alloc, size_type __res)
    {

      const size_type __requested_cap = this->_M_length + __res;
      _Rep* __r = _Rep::_S_create(__requested_cap, this->_M_capacity,
      __alloc);
      if (this->_M_length)
 _M_copy(__r->_M_refdata(), _M_refdata(), this->_M_length);

      __r->_M_set_length_and_sharable(this->_M_length);
      return __r->_M_refdata();
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      _M_check_length(__size, __n, "basic_string::resize");
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->erase(__n);

    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(iterator __i1, iterator __i2, _InputIterator __k1,
     _InputIterator __k2, __false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 _M_check_length(__n1, __s.size(), "basic_string::_M_replace_dispatch");
 return _M_replace_safe(__i1 - _M_ibegin(), __n1, __s._M_data(),
          __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_assign(_M_data() + __pos1, __n2, __c);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_safe(size_type __pos1, size_type __n1, const _CharT* __s,
      size_type __n2)
    {
      _M_mutate(__pos1, __n1, __n2);
      if (__n2)
 _M_copy(_M_data() + __pos1, __s, __n2);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
                                      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
                                             ;
      if (__n)
 _M_copy(__s, _M_data() + __pos, __n);

      return __n;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
                                             ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
                                    ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
                                    ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
                                              ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   if (true)
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   if (false)
     {
       __in._M_setstate(__ios_base::badbit);
                              ;
     }
   if (false)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }





  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);



}
# 56 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\string" 2 3
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3


namespace std {
# 61 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 97 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 116 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale() throw();
# 125 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __other) throw();
# 135 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
# 150 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
# 163 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
# 175 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 189 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
# 204 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    string
    name() const;
# 223 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw();







    bool
    operator!=(const locale& __other) const throw()
    { return !(this->operator==(__other)); }
# 251 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 267 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    static locale
    global(const locale&);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 302 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 0 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once() throw();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);
  };
# 336 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 367 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc) throw();

    static void
    _S_destroy_c_locale(__c_locale& __cloc);

    static __c_locale
    _S_lc_ctype_c_locale(__c_locale __cloc, const char* __s);



    static __c_locale
    _S_get_c_locale();

    __attribute__ ((__const__)) static const char*
    _S_get_c_name() throw();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);
  };
# 431 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const throw();
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
   if (true)
     { delete this; }
   if (false)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    void
    _M_install_cache(const facet*, size_t);
  };
# 574 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw();
# 591 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc);
# 608 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
  template<typename _CharT>
    class collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 635 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 649 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 666 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 685 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 699 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const throw();

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const throw();

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 728 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 744 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 757 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const throw();

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const throw();


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const throw();

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const throw();



  template<typename _CharT>
    class collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }

    protected:
      virtual
      ~collate_byname() { }
    };

}



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 1 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.tcc" 3

namespace std {

  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      if (true)
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      if (false)
 {
   _M_impl->_M_remove_reference();
                          ;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      if (true)
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      if (false)
 {
   __tmp->_M_remove_reference();
                          ;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }


  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size

       && dynamic_cast<const _Facet*>(__facets[__i]));



    }

  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();

      return dynamic_cast<const _Facet&>(*__facets[__i]);



    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const throw ()
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const throw ()
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      if (true)
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      if (false)
 {
   delete [] __c;
                          ;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }





  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);



}
# 815 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_classes.h" 2 3
# 43 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 2 3
# 53 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
namespace std {





  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 206 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
  class ios_base
  {
  public:







    class failure : public exception
    {
    public:


      explicit
      failure(const string& __str) throw();



      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();

    private:
      string _M_msg;
    };
# 262 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 337 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 368 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;




    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 400 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 426 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 443 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    typedef void (*event_callback) (event, ios_base&, int);
# 455 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);

  protected:
    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;



    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      { return __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1); }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void) throw();


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init() throw();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 559 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 575 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 592 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 618 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 669 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
# 681 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    locale
    imbue(const locale& __loc) throw();
# 692 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
# 703 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 722 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    static int
    xalloc() throw();
# 738 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 759 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 776 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ios_base.h" 3
    virtual ~ios_base();

  protected:
    ios_base() throw ();



  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }

}
# 43 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 1 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3








namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 113 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(__streambuf_type*, __streambuf_type*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:
# 179 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 203 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      locale
      pubimbue(const locale &__loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 220 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
# 233 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      __streambuf_type*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }

      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }

      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }

      int
      pubsync() { return this->sync(); }
# 260 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 274 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 292 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 314 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 333 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 348 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 373 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 400 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 426 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 440 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 458 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 474 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
# 485 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 505 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 521 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
# 531 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 552 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual void
      imbue(const locale&)
      { }
# 567 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 578 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 590 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 603 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int
      sync() { return 0; }
# 625 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
# 641 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 663 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
# 676 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 700 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      pbackfail(int_type = traits_type::eof())
      { return traits_type::eof(); }
# 718 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 744 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      virtual int_type
      overflow(int_type = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 759 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }


    private:


      basic_streambuf(const __streambuf_type& __sb)
      : _M_in_beg(__sb._M_in_beg), _M_in_cur(__sb._M_in_cur),
      _M_in_end(__sb._M_in_end), _M_out_beg(__sb._M_out_beg),
      _M_out_cur(__sb._M_out_cur), _M_out_end(__sb._M_out_cur),
      _M_buf_locale(__sb._M_buf_locale)
      { }

      __streambuf_type&
      operator=(const __streambuf_type&) { return *this; };
    };


  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);


}



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 1 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }





  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);



}
# 799 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\streambuf" 2 3
# 44 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 1 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3

# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3




# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 1 3
# 13 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 13 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 2 3


#pragma pack(push,_CRT_PACKING)


extern "C" {
# 166 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\wctype.h" 3
  typedef wchar_t wctrans_t;
  wint_t towctrans(wint_t,wctrans_t);
  wctrans_t wctrans(const char *);
  wctype_t wctype(const char *);


}


#pragma pack(pop)
# 46 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 2 3
# 75 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cwctype" 3
namespace std {

  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;

}
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 1 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\cctype" 3
# 42 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 1 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_base.h" 3
namespace std {


  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = 1 << 0;
    static const mask lower = 1 << 1;
    static const mask alpha = 1 << 2;
    static const mask digit = 1 << 3;
    static const mask xdigit = 1 << 4;
    static const mask space = 1 << 5;
    static const mask print = 1 << 6;
    static const mask graph = (1 << 2) | (1 << 3) | (1 << 9);
    static const mask cntrl = 1 << 8;
    static const mask punct = 1 << 9;
    static const mask alnum = (1 << 2) | (1 << 3);
  };

}
# 43 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3






# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 1 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3




namespace std {
# 48 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/streambuf_iterator.h" 3
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
        _CharT*, _CharT&>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }


      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {


                        ;
 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {


                        ;

 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw ()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw ()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }



}
# 50 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {
# 63 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _Tp>
    void
    __convert_to_v(const char*, _Tp&, ios_base::iostate&,
     const __c_locale&) throw();


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&) throw();



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 141 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 159 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 176 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 192 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 208 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 222 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 237 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 251 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 266 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 283 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 302 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 321 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 343 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char *__to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 368 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 387 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 406 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 425 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 443 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const = 0;
# 460 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 476 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const = 0;
# 493 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 512 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const = 0;
# 533 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi,
        char_type* __dest) const = 0;
# 555 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const = 0;
# 579 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const = 0;
    };
# 602 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 671 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 708 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 721 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 734 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
# 749 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 763 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 777 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 792 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 809 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 825 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 842 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 862 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 889 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 920 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 953 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char *__to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1002 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1019 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1035 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1052 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1072 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1095 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }
# 1121 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char) const
      { return __c; }
# 1147 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char, char* __dest) const
      {
 __builtin_memcpy(__dest, __lo, __hi - __lo);
 return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
# 1172 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1205 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
# 1216 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const throw();


      virtual
      ~ctype();
# 1240 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
# 1259 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1277 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1295 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1312 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type) const;
# 1329 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1345 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type) const;
# 1362 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1382 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_widen(char) const;
# 1404 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;
# 1427 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type, char __dfault) const;
# 1453 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __dest) const;


      void
      _M_initialize_ctype() throw();
    };



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);

    protected:
      virtual
      ~ctype_byname();
    };


}



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 1 3
# 37 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2/x86_64-w64-mingw32\\bits/ctype_inline.h" 3
namespace std {

  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return (_M_table[static_cast<unsigned char>(__c) ] & __m); }


  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && !this->is(__m, *__low))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high && this->is(__m, *__low) != 0)
      ++__low;
    return __low;
  }

}
# 1509 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3

namespace std {


  class __num_base
  {
  public:


    enum
      {
        _S_ominus,
        _S_oplus,
        _S_ox,
        _S_oX,
        _S_odigits,
        _S_odigits_end = _S_odigits + 16,
        _S_oudigits = _S_odigits_end,
        _S_oudigits_end = _S_oudigits + 16,
        _S_oe = _S_odigits + 14,
        _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod) throw();
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0) : facet(__refs),
      _M_grouping(__null), _M_grouping_size(0), _M_use_grouping(false),
      _M_truename(__null), _M_truename_size(0), _M_falsename(__null),
      _M_falsename_size(0), _M_decimal_point(_CharT()),
      _M_thousands_sep(_CharT()), _M_allocated(false)
      { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }
# 1634 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0) : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(); }
# 1671 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1685 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(__null)
      { _M_initialize_numpunct(__cloc); }
# 1699 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1712 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1743 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
# 1756 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
# 1769 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1786 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1798 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1811 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1824 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1837 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = __null);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }

    protected:
      virtual
      ~numpunct_byname() { }
    };
# 1907 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1928 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 1954 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 1990 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2049 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2091 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;

      template<typename _ValueT>
        iter_type
        _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
        _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
        _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
        {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2162 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate& __err,
      void*&) const;
# 2227 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2245 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2266 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2284 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, bool __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2326 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __f, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2389 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill, double __v) const
      { return this->do_put(__s, __f, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __f, __fill, __v); }
# 2414 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __f, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __f, __fill, __v); }

    protected:
      template<typename _ValueT>
        iter_type
        _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
        iter_type
        _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2462 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, double __v) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, long double __v) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type __fill, const void* __v) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;
# 2520 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 3
  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }


  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }

}



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 1 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
# 35 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3

namespace std {



  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = __null;
     if (true)
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     if (false)
       {
  delete __tmp;
                         ;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      _M_allocated = true;

      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      char* __grouping = 0;
      _CharT* __truename = 0;
      _CharT* __falsename = 0;
      if (true)
 {
   _M_grouping_size = __np.grouping().size();
   __grouping = new char[_M_grouping_size];
   __np.grouping().copy(__grouping, _M_grouping_size);
   _M_grouping = __grouping;
   _M_use_grouping = (_M_grouping_size
        && static_cast<signed char>(_M_grouping[0]) > 0
        && (_M_grouping[0]
     != __gnu_cxx::__numeric_traits<char>::__max));

   _M_truename_size = __np.truename().size();
   __truename = new _CharT[_M_truename_size];
   __np.truename().copy(__truename, _M_truename_size);
   _M_truename = __truename;

   _M_falsename_size = __np.falsename().size();
   __falsename = new _CharT[_M_falsename_size];
   __np.falsename().copy(__falsename, _M_falsename_size);
   _M_falsename = __falsename;

   _M_decimal_point = __np.decimal_point();
   _M_thousands_sep = __np.thousands_sep();

   const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
   __ct.widen(__num_base::_S_atoms_out,
       __num_base::_S_atoms_out
       + __num_base::_S_oend, _M_atoms_out);
   __ct.widen(__num_base::_S_atoms_in,
       __num_base::_S_atoms_in
       + __num_base::_S_iend, _M_atoms_in);
 }
      if (false)
 {
   delete [] __grouping;
   delete [] __truename;
   delete [] __falsename;
                          ;
 }
    }
# 135 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  __attribute__ ((__pure__)) bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp) throw ();



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }



 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {


       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }

       const char_type __c = *__beg;

       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];

       if (!__testf && __donet)
  break;

       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];

       if (!__testt && __donef)
  break;

       if (!__testt && !__testf)
  break;

       ++__n;
       ++__beg;

       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {


       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
# 729 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 965 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);




 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
          __fbuf, __prec, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
       __fbuf, __prec, __v);
   }
# 1026 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));

       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);

       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1151 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }
# 1188 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }





  extern template class numpunct<char>;
  extern template class numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class numpunct<wchar_t>;
  extern template class numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);



}
# 2601 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/locale_facets.h" 2 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3


namespace std {

  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 60 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:







      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }

      bool
      operator!() const
      { return this->fail(); }
# 125 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
# 136 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
                          ;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 189 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 210 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
# 245 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 283 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 295 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 335 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 349 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 378 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 398 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
# 418 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 437 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);

      void
      _M_cache_locale(const locale& __loc);
    };

}



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 1 3
# 34 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
# 34 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3

namespace std {

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 144 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }





  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;



}
# 471 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/basic_ios.h" 2 3
# 45 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ios" 2 3
# 40 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3


namespace std {
# 53 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 80 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 106 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 163 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }


      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 248 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
# 281 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      put(char_type __c);


      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 309 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
# 322 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      flush();
# 333 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      pos_type
      tellp();
# 344 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      __ostream_type&
      seekp(pos_type);
# 356 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }

      template<typename _ValueT>
        __ostream_type&
        _M_insert(_ValueT __v);
    };
# 375 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 394 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 404 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 425 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
      operator bool() const
      { return _M_ok; }
    };
# 446 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 488 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 538 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }







  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }
# 582 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 3
}



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/ostream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   if (true)
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   if (true)
     { _M_write(__s, __n); }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   if (true)
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   if (false)
     {
       __out._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }





  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);



}
# 586 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\ostream" 2 3
# 40 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 1 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
# 38 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3




namespace std {
# 53 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:
# 89 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 118 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 165 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 237 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
# 247 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
# 279 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int_type
      get();
# 293 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type& __c);
# 320 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 331 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 354 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 364 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 393 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 404 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 428 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      ignore();

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore(streamsize __n, int_type __delim);
# 445 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int_type
      peek();
# 463 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
# 482 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
# 498 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      putback(char_type __c);
# 513 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      unget();
# 531 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      int
      sync();
# 545 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      pos_type
      tellg();
# 560 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      seekg(pos_type);
# 576 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }

      template<typename _ValueT>
        __istream_type&
        _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 631 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {

      bool _M_ok;

    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 667 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 680 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
      operator bool() const
      { return _M_ok; }
    };
# 697 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 739 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 767 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
    };
# 828 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);
# 850 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 3
}



# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 1 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
# 39 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3



namespace std {

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     if (true)
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     if (false)
       {
  this->_M_setstate(ios_base::badbit);
                         ;
       }
     if (false)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<short>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<short>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__max;
  }
       else
  __n = short(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<int>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<int>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__max;
  }
       else
  __n = int(__l);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   if (true)
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::failbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   if (true)
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
        {
          if (true)
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 512 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          if (true)
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
          if (false)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   if (false)
     {
       this->_M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      if (true)
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
           ios_base::in);
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {


      ios_base::iostate __err = ios_base::goodbit;
      if (true)
 {
   if (!this->fail())
     {

       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::in);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      if (false)
 {
   this->_M_setstate(ios_base::badbit);
                          ;
 }
      if (false)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   if (true)
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   if (true)
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   if (false)
     {
       __in._M_setstate(ios_base::badbit);
                              ;
     }
   if (false)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }





  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;



}
# 854 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\istream" 2 3
# 41 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 2 3

namespace std {
# 58 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin\\..\\lib\\clang\\3.1/../../../include/c++/4.5.2\\iostream" 3
  extern istream cin;
  extern ostream cout;
  extern ostream cerr;
  extern ostream clog;


  extern wistream wcin;
  extern wostream wcout;
  extern wostream wcerr;
  extern wostream wclog;




  static ios_base::Init __ioinit;

}
# 2 "voicerec/neuralNetworkSynth.cpp" 2
# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 1 3
# 10 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
# 10 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3


# 1 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\_mingw.h" 1 3
# 12 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 2 3


struct _exception;

#pragma pack(push,_CRT_PACKING)
# 75 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
extern "C" {



  extern double * __imp__HUGE;
# 91 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _exception {
    int type;
    const char *name;
    double arg1;
    double arg2;
    double retval;
  };

  void __mingw_raise_matherr (int typ, const char *name, double a1, double a2,
         double rslt);
  void __mingw_setusermatherr (int ( *)(struct _exception *));
  __attribute__ ((__dllimport__)) void __setusermatherr(int ( *)(struct _exception *));



  double sin(double _X);
  double cos(double _X);
  double tan(double _X);
  double sinh(double _X);
  double cosh(double _X);
  double tanh(double _X);
  double asin(double _X);
  double acos(double _X);
  double atan(double _X);
  double atan2(double _Y,double _X);
  double exp(double _X);
  double log(double _X);
  double log10(double _X);
  double pow(double _X,double _Y);
  double sqrt(double _X);
  double ceil(double _X);
  double floor(double _X);
  double fabs(double _X);
# 135 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  double ldexp(double _X,int _Y);
  double frexp(double _X,int *_Y);
  double modf(double _X,double *_Y);
  double fmod(double _X,double _Y);

  void sincos (double __x, double *p_sin, double *p_cos);
  void sincosl (long double __x, long double *p_sin, long double *p_cos);
  void sincosf (float __x, float *p_sin, float *p_cos);



  int abs(int _X);
  long labs(long _X);



  double atof(const char *_String);
  double _atof_l(const char *_String,_locale_t _Locale);
# 162 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  struct _complex {
    double x;
    double y;
  };


  __attribute__ ((__dllimport__)) double _cabs(struct _complex _ComplexA);
  double _hypot(double _X,double _Y);
  __attribute__ ((__dllimport__)) double _j0(double _X);
  __attribute__ ((__dllimport__)) double _j1(double _X);
  __attribute__ ((__dllimport__)) double _jn(int _X,double _Y);
  __attribute__ ((__dllimport__)) double _y0(double _X);
  __attribute__ ((__dllimport__)) double _y1(double _X);
  __attribute__ ((__dllimport__)) double _yn(int _X,double _Y);


  __attribute__ ((__dllimport__)) int _matherr (struct _exception *);
# 189 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) double _chgsign (double _X);
  __attribute__ ((__dllimport__)) double _copysign (double _Number,double _Sign);
  __attribute__ ((__dllimport__)) double _logb (double);
  __attribute__ ((__dllimport__)) double _nextafter (double, double);
  __attribute__ ((__dllimport__)) double _scalb (double, long);
  __attribute__ ((__dllimport__)) int _finite (double);
  __attribute__ ((__dllimport__)) int _fpclass (double);
  __attribute__ ((__dllimport__)) int _isnan (double);






__attribute__ ((__dllimport__)) double j0 (double) ;
__attribute__ ((__dllimport__)) double j1 (double) ;
__attribute__ ((__dllimport__)) double jn (int, double) ;
__attribute__ ((__dllimport__)) double y0 (double) ;
__attribute__ ((__dllimport__)) double y1 (double) ;
__attribute__ ((__dllimport__)) double yn (int, double) ;

__attribute__ ((__dllimport__)) double chgsign (double);
# 219 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  __attribute__ ((__dllimport__)) int finite (double);
  __attribute__ ((__dllimport__)) int fpclass (double);
# 264 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
typedef float float_t;
typedef double double_t;
# 299 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __fpclassifyl (long double);
  extern int __fpclassifyf (float);
  extern int __fpclassify (double);
# 335 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __isnan (double);
  extern int __isnanf (float);
  extern int __isnanl (long double);
# 376 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern int __signbit (double);
  extern int __signbitf (float);
  extern int __signbitl (long double);
# 404 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float sinf(float _X);
  extern long double sinl(long double);

  extern float cosf(float _X);
  extern long double cosl(long double);

  extern float tanf(float _X);
  extern long double tanl(long double);
  extern float asinf(float _X);
  extern long double asinl(long double);

  extern float acosf (float);
  extern long double acosl (long double);

  extern float atanf (float);
  extern long double atanl (long double);

  extern float atan2f (float, float);
  extern long double atan2l (long double, long double);


  extern float sinhf(float _X);



  extern long double sinhl(long double);

  extern float coshf(float _X);



  extern long double coshl(long double);

  extern float tanhf(float _X);



  extern long double tanhl(long double);



  extern double acosh (double);
  extern float acoshf (float);
  extern long double acoshl (long double);


  extern double asinh (double);
  extern float asinhf (float);
  extern long double asinhl (long double);


  extern double atanh (double);
  extern float atanhf (float);
  extern long double atanhl (long double);



  extern float expf(float _X);



  extern long double expl(long double);


  extern double exp2(double);
  extern float exp2f(float);
  extern long double exp2l(long double);



  extern double expm1(double);
  extern float expm1f(float);
  extern long double expm1l(long double);


  extern float frexpf(float _X,int *_Y);



  extern long double frexpl(long double,int *);




  extern int ilogb (double);
  extern int ilogbf (float);
  extern int ilogbl (long double);


  extern float ldexpf(float _X,int _Y);



  extern long double ldexpl (long double, int);


  extern float logf (float);
  extern long double logl(long double);


  extern float log10f (float);
  extern long double log10l(long double);


  extern double log1p(double);
  extern float log1pf(float);
  extern long double log1pl(long double);


  extern double log2 (double);
  extern float log2f (float);
  extern long double log2l (long double);


  extern double logb (double);
  extern float logbf (float);
  extern long double logbl (long double);
# 553 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern float modff (float, float*);
  extern long double modfl (long double, long double*);


  extern double scalbn (double, int);
  extern float scalbnf (float, int);
  extern long double scalbnl (long double, int);

  extern double scalbln (double, long);
  extern float scalblnf (float, long);
  extern long double scalblnl (long double, long);



  extern double cbrt (double);
  extern float cbrtf (float);
  extern long double cbrtl (long double);


  extern float fabsf (float x);
# 583 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern long double fabsl (long double);
# 595 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double hypot (double, double) ;
  extern float hypotf (float x, float y);



  extern long double hypotl (long double, long double);


  extern float powf(float _X,float _Y);



  extern long double powl (long double, long double);


  extern float sqrtf (float);
  extern long double sqrtl(long double);


  extern double erf (double);
  extern float erff (float);
  extern long double erfl (long double);


  extern double erfc (double);
  extern float erfcf (float);
  extern long double erfcl (long double);


  extern double lgamma (double);
  extern float lgammaf (float);
  extern long double lgammal (long double);


  extern double tgamma (double);
  extern float tgammaf (float);
  extern long double tgammal (long double);


  extern float ceilf (float);
  extern long double ceill (long double);


  extern float floorf (float);
  extern long double floorl (long double);


  extern double nearbyint ( double);
  extern float nearbyintf (float);
  extern long double nearbyintl (long double);



extern double rint (double);
extern float rintf (float);
extern long double rintl (long double);


extern long lrint (double);
extern long lrintf (float);
extern long lrintl (long double);

__extension__ long long llrint (double);
__extension__ long long llrintf (float);
__extension__ long long llrintl (long double);
# 739 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double round (double);
  extern float roundf (float);
  extern long double roundl (long double);


  extern long lround (double);
  extern long lroundf (float);
  extern long lroundl (long double);
  __extension__ long long llround (double);
  __extension__ long long llroundf (float);
  __extension__ long long llroundl (long double);



  extern double trunc (double);
  extern float truncf (float);
  extern long double truncl (long double);


  extern float fmodf (float, float);
  extern long double fmodl (long double, long double);


  extern double remainder (double, double);
  extern float remainderf (float, float);
  extern long double remainderl (long double, long double);


  extern double remquo(double, double, int *);
  extern float remquof(float, float, int *);
  extern long double remquol(long double, long double, int *);


  extern double copysign (double, double);
  extern float copysignf (float, float);
  extern long double copysignl (long double, long double);


  extern double nan(const char *tagp);
  extern float nanf(const char *tagp);
  extern long double nanl(const char *tagp);
# 788 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
  extern double nextafter (double, double);
  extern float nextafterf (float, float);
  extern long double nextafterl (long double, long double);


  extern double nexttoward (double, long double);
  extern float nexttowardf (float, long double);
  extern long double nexttowardl (long double, long double);



  extern double fdim (double x, double y);
  extern float fdimf (float x, float y);
  extern long double fdiml (long double x, long double y);







  extern double fmax (double, double);
  extern float fmaxf (float, float);
  extern long double fmaxl (long double, long double);


  extern double fmin (double, double);
  extern float fminf (float, float);
  extern long double fminl (long double, long double);



  extern double fma (double, double, double);
  extern float fmaf (float, float, float);
  extern long double fmal (long double, long double, long double);
# 871 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
   __attribute__ ((__dllimport__)) float _copysignf (float _Number,float _Sign);
   __attribute__ ((__dllimport__)) float _chgsignf (float _X);
   __attribute__ ((__dllimport__)) float _logbf(float _X);
   __attribute__ ((__dllimport__)) float _nextafterf(float _X,float _Y);
   __attribute__ ((__dllimport__)) int _finitef(float _X);
   __attribute__ ((__dllimport__)) int _isnanf(float _X);
   __attribute__ ((__dllimport__)) int _fpclassf(float _X);



   extern long double _chgsignl (long double);
# 893 "D:/Vivado/Vivado/2018.2/win64/tools/clang/bin/../lib/clang/3.1/../../../x86_64-w64-mingw32/include\\math.h" 3
}




#pragma pack(pop)
# 3 "voicerec/neuralNetworkSynth.cpp" 2

# 1 "voicerec/speech_weights.h" 1
float weightIH[883][25] = {
 {-0.00681436, 0.00940256, 0.0217455, -0.033035, 0.0155927, -0.0263237, 0.0154341, 0.00118163, 0.00216905, 0.00710869, -0.214131, -0.00371205, 0.0210619, -0.0148156, 0.0390072, 0.0282843, 0.0295652, -0.0240218, -0.0147904, -0.00939634, 0.0513424, -0.0300699, -0.118249, 0.0026938, 0.0882418},
 {0.0222875, -0.0187092, 0.0166149, -0.0208783, 0.0308576, -0.0141371, -0.0152665, 0.0150048, -0.0329855, 0.0135708, -0.0200486, 0.0120788, 0.0336821, -0.00942809, 0.0411596, -0.030978, -0.0255173, -0.04847, -0.0107751, 0.0161715, 0.030812, -0.00540051, -0.0224749, 0.00269374, 0.00182442},
 {-0.00137996, -0.00333518, 0.138812, 0.00537735, -0.00811874, -0.0523043, -0.0175204, -0.00564702, -0.0986484, 0.0193311, -0.0435736, -0.00973789, 0.0276305, -0.00471405, 0.074544, -0.0289577, -0.00606619, -0.108239, 0.0101015, -0.00077328, 0.0746706, -0.0296297, 0.0195855, -0.0134687, -0.000855059},
 {0.000682751, -0.0289101, 0.00395169, 0.0296311, -0.000680016, -0.0757558, -0.017516, 0.023513, -0.029146, 0.0046784, 0.0371272, 0.0113746, 0.0181867, -0.0121218, 0.0203497, -0.00336718, -0.00674544, -0.0556345, -0.0175093, -0.00810162, 0.0556728, -0.0208808, 0.0330262, -0.0134687, 0.0101475},
 {-0.0108158, -0.022945, 0.104637, 0.00605355, -0.0303011, -0.0781509, 0.0187966, -0.029222, -0.0661447, 0.0247278, 0.017036, -0.00298512, -0.0168348, 0.015489, 0.0623898, -0.0134687, 0.0188371, -0.0807638, 0.0323249, -0.024981, 0.098288, 0.0276162, 0.0238788, -0.00875466, -0.0142601},
 {0.0121061, 0.00395459, 0.0154898, -0.0121219, 0.00202596, 0.00255609, 0.000699274, -0.00537803, -0.0207886, 0.0114641, 0.0290735, -0.0283108, 0.0282811, -0.0282843, -0.0199455, 0.00538748, 0.0255982, 0.0026734, 0.0228968, -0.00267421, -0.0327716, -0.0269363, 0.0277553, -0.0188562, 0.00285602},
 {-0.018184, -0.00193666, -0.00349234, -0.0127953, -0.0242595, -0.0485384, -0.0330026, 0.02818, -0.0108356, 0.00397603, -0.0347354, 0.00665368, -0.016834, -0.00808122, 0.0416009, 0.0228968, 0.0309662, -0.0321221, -0.0316514, 0.00061256, 0.0901916, -0.00876113, 0.0049314, -0.0195296, 0.0491683},
 {-0.0188328, -0.000559721, -0.0444057, 0.0127955, 0.0235559, 0.0253169, -0.0100543, 0.00283055, 0.0936539, -0.020791, -0.0612457, -0.0328374, 0.0262662, -0.0148156, 0.00642405, -0.0141421, 0.0296365, 0.0675338, 0.0228968, -0.0282753, -0.0249771, -0.0262696, -0.0528202, -0.0242437, 0.0100803},
 {-0.0269557, -0.0222303, -0.0292228, 0.001348, -0.0329691, 0.00823763, -0.0202811, 0.00461978, 0.0539045, -0.0310601, -0.0691004, -0.0275943, -0.00336322, -0.0269374, 0.0234487, -0.0316514, 0.0309515, 0.0472692, 0.0296311, -0.00406743, -0.0243539, 0.0255872, -0.0481395, -0.030978, 0.0120076},
 {-0.032981, 0.00617439, -0.10567, 0.0208765, 0.031645, 0.0525966, 0.0215764, 0.02704, 0.105406, -0.0268638, -0.0920578, 0.0156891, -0.0181791, -0.00740779, 0.026905, -0.00740779, 0.0202044, 0.108619, 0.00538748, 0.00607081, 0.0151848, -0.0229039, -0.0265737, 0.00471405, 0.0254101},
 {-0.0316559, -0.0101169, -0.00543128, 0.00404082, -0.0141348, 0.0200089, 0.00873424, 0.0248936, 0.03638, -0.0107944, -0.0327693, -0.00467679, -0.0033628, -0.0222234, 0.0148359, 0.0329983, -0.0181876, 0.0226856, -0.0188562, 0.0336723, -0.0125038, 0.0181839, 0.00727666, 0.0269374, 0.0337664},
 {-0.0249105, -0.0330051, -0.0499067, -0.030978, 0.0134745, 0.0522993, 0.0262562, -0.0322778, 0.0447036, 0.00406815, -0.0464729, -0.0315875, 0.024244, 0.0222234, 0.000655916, 0.026264, -0.0154828, 0.000474672, 0.00538748, -0.0114226, -0.0510243, 0.0134694, -0.00739324, -0.0188562, 0.0342301},
 {0.0181817, -0.0135009, 0.0101729, 0.0289577, -0.016163, 0.00147596, -0.0100912, 9.88142e-006, -0.00403951, -0.024883, -0.00836218, 0.00742593, -0.0208765, 0.00269374, -0.00441129, -0.0175093, 0.0202048, 0.0337238, 0.0255905, -0.0134628, 0.00424538, -0.00807933, 0.00888784, 3.2647e-010, 0.0314532},
 {0.0309813, 0.0323282, -0.023453, 0.0249171, -0.0296307, 0.00531988, 0.0222324, 0.00404568, -0.00336776, -0.0235419, -0.0488668, -0.0221928, 0.0148192, 0.0249171, 0.0268084, -0.0242437, 0.0040403, 0.0309961, 0.00269374, -0.024916, -0.00254013, -0.0114496, -0.0146992, -0.0242437, 0.0181907},
 {-0.0202895, 0.00342123, 0.00187679, 0.0221893, 0.0236614, -0.00390269, 0.0275073, -0.0231944, -0.00765854, 0.00500319, -0.167636, -0.000389175, 0.015689, 0.0114484, 0.0217507, 0.00673404, 0.0275089, -0.0122212, 0.00272372, -0.0175561, 0.00421756, -0.0260332, -0.0783462, 8.1909e-008, 0.0707151},
 {-0.0241814, 0.0170071, 0.00978964, 0.0127929, -0.0209991, 0.00890571, -0.0294143, 0.00620731, 0.00931629, -0.0315698, -0.0133093, 0.0187971, -0.0235382, -0.0235702, -0.00470754, -0.0101015, 0.016902, -0.00730971, 0.00673409, -0.0107854, 0.0320828, 0.0255788, 0.0331189, -0.0208765, 0.0111141},
 {0.0161302, 0.0142396, 0.110531, 0.012789, 0.0289189, -0.0471155, -0.0316781, 0.0204774, -0.0930028, -0.0150718, -0.0518687, 0.0333349, -0.0147817, -0.0161624, 0.0514272, -0.0168359, -0.0175359, -0.0688341, 0.00808135, 0.0213987, 0.0507791, -0.0114527, -0.0397401, 0.0296311, -0.0251423},
 {-0.0121161, 0.0289832, 0.0251429, -0.0181827, 0.0249122, -0.0403822, -0.0330003, 0.0255067, -0.0190102, -0.0242827, 0.0488747, 0.0140451, 0.0141398, -0.00942809, 0.0298457, -0.0255905, 0.00740042, -0.00205821, 0.0121218, 0.0242347, 0.0524123, -0.00606228, 0.0366263, 0.030978, -0.00385288},
 {-0.020251, -0.0162021, 0.119193, 0.0303044, 0.00606539, -0.0997176, 0.0147467, 0.0110736, -0.0590236, 0.029398, 0.0432192, 0.0232367, -0.0208785, 0.0101015, 0.0296054, 0.0020203, -0.0330216, -0.067243, 0.00740787, -0.0155929, 0.0482251, 0.00540049, 0.0323012, -0.0228968, -0.00219852},
 {-0.014836, -0.00415929, 0.0129002, 0.0101015, -0.0269285, 0.0299399, 0.0249468, 0.0107978, 0.0123518, 0.0188701, 0.0697195, -0.0161902, -0.0148303, -0.0134687, -0.0276614, -0.0175093, -0.0195196, -0.0421183, 0.00875466, -0.0174918, 0.0217003, -0.008076, 0.0349269, 0.030978, -0.04052},
 {0.0101004, 0.00752719, -0.0204297, -0.0222234, -0.0128145, -0.0884179, -0.0255938, 0.0146583, -0.0314136, -0.00143324, -0.0139612, -0.0196154, 0.0276134, -0.0168359, 0.0774335, 0.00942809, -0.00608494, -0.00950982, 0.00875466, -0.0135388, 0.0448753, -0.0242441, -0.0117178, 0.0195296, 0.0376833},
 {-0.0282551, 0.0189857, -0.114535, 0.00606569, -0.006752, -0.0480211, 0.00746283, 0.00554662, 0.0512953, 0.018948, -0.10155, -0.0240433, 0.0255962, -0.0323249, 0.0101897, 0.00740778, -0.0141376, 0.10762, 0.0235702, -0.0296209, 0.0119924, -0.0255966, -0.073743, -0.00942809, 0.0556216},
 {0.0154628, 0.000682666, -0.0252177, 0.0242437, 0.00475268, -0.0432699, -0.0155692, 0.00524591, -0.00050749, 0.00528797, -0.0646299, 0.0148138, 0.0134784, 0.00808122, 0.0437955, -0.0181827, -0.0215825, -0.00898394, -0.0215499, 0.0316248, 0.0463917, -0.00538843, -0.0450613, -0.0134687, 0.00553949},
 {0.0108083, 0.00688106, -0.100123, 0.0316514, 0.00402711, 0.0114824, 0.00879023, 0.0236964, 0.0668835, 0.00347087, -0.0991933, 0.00564264, 0.0134997, -0.0114484, 0.0109722, -0.0282843, 0.0228963, 0.0626, -0.00942809, 0.012131, -0.00532168, 0.0174987, -0.0673478, -0.0175093, 0.0554309},
 {0.00336116, -0.0255959, -0.0242813, 0.0175093, 0.00674246, 0.0068825, -0.018873, 0.0141175, 0.000487293, -0.010111, -0.0696181, 0.0229486, 0.000681155, 0.0329983, 0.0105844, -0.0323249, 0.029624, 0.00931454, -0.00808122, -0.0101043, -0.0151502, 0.0296328, 0.00233207, -0.0296311, 0.019377},
 {-0.000660469, 0.0215524, -0.0522919, -0.0242437, -0.00538077, 0.0418766, 0.00404448, -0.00463464, 0.0225924, -0.025573, -0.00893914, -0.0167579, 0.0195301, 0.0020203, -0.0295538, 0.0316514, 0.016167, 0.0111155, -0.0242437, 0.0175298, -0.02269, -0.0208768, -0.0333701, -0.0215499, -0.00893606},
 {-0.0249169, 0.0309552, 0.0177984, -0.0121218, -0.00606089, 0.0263931, 0.0242574, 0.027628, 0.0282176, 0.0269635, 0.0293134, -0.00267126, 0.00268952, -0.0235702, -0.00157827, -0.00606092, -0.00336214, 0.00238001, -0.00942809, 0.00674847, 0.0282678, -0.0296308, 0.0147609, 0.0215499, -0.0309051},
 {-0.0134651, 0.0175218, -0.0292546, 0.0289577, 0.0323253, -0.00863526, 0.00472446, 0.00809413, -0.0114743, 0.0121438, -0.0260711, -0.0134297, -0.00605854, -0.0242437, 0.0225333, -0.0323249, 0.0188566, -0.0190712, 0.0228968, -0.0242399, 0.0370391, -0.0168359, -0.0430314, 0.0289577, 0.0211006},
 {0.0127078, -0.0166092, -0.0581202, 0.0235408, 0.0196165, 0.0175218, 0.0287921, 0.00898714, 0.0612007, -0.00446643, -0.171464, -0.0320064, -0.0193046, 0.00942809, -0.00186549, 0.00942807, -0.0277611, 0.0407143, 0.026968, -0.0068668, 0.0160929, -0.00448515, -0.0935596, -0.0242437, 0.0756545},
 {-0.0302468, -0.020654, 0.00521533, 0.000670464, -0.0297578, -0.0128982, -0.00651699, -0.0308786, -0.0315979, 0.0330757, -0.0174864, 0.0235122, -0.000627956, 0.0148156, 0.029676, -0.0242437, 0.0175627, -0.0189469, -0.0249171, -0.00205954, 0.0501948, 0.0134491, 0.00160408, -0.0202031, 0.023093},
 {0.0268939, -0.00314653, 0.0865191, -0.00607154, -0.00274929, -0.11334, -0.0209452, 0.0136276, -0.0923451, -0.0177945, -0.029287, 0.0151323, 0.00207002, 0.0255905, 0.0752335, 0.00942809, -0.0323783, -0.104726, -0.0175093, -0.0150498, 0.0568811, 0.0134609, -0.0327474, 0.010775, -0.0178486},
 {-0.00403952, -0.00135087, 0.0728816, -0.00404279, -0.00808906, -0.0730131, 0.00944198, -0.0001019, -0.0163688, 0.0262119, 0.0235659, -0.0277553, 0.00739479, -0.0188562, 0.0432399, 0.00336717, 0.0262639, -0.0459233, 0.0276108, -9.12614e-006, 0.0419995, -0.012796, -0.0124172, -0.000673436, 0.015784},
 {-0.00881751, 0.022902, 0.0871758, -0.015495, 0.0242446, -0.066826, 0.00259137, -0.0139057, -0.0969866, -0.000949592, 0.0377405, 0.00635944, 0.00538126, 0.0114484, 0.0401203, 0.00404061, -0.0209184, -0.109224, -0.0255905, -0.0162894, 0.067926, -0.0323249, 0.025694, 0.0316514, -0.00531371},
 {-0.0229115, 0.0100066, -0.000283285, 0.0175093, -0.0242336, 0.00228363, 0.0316748, -0.000629714, 0.00783115, -0.0154693, 0.0107148, 0.0161504, -0.0134831, -0.0303046, -0.0369843, -0.015489, -0.0249051, 0.0110439, 0.0296311, 0.0108057, -0.00926066, -0.00874906, 0.0138103, -0.0235702, 0.0123835},
 {0.00471492, 0.00217721, 0.00649377, -0.00740786, 0.0222043, -0.0815722, -0.0229156, -0.0122892, -0.0213281, -0.00548463, -0.023555, -0.0256726, -0.00805979, 0.0249171, 0.0892929, 0.000673436, 0.0087259, -0.0218836, 0.0296311, 0.00260068, 0.0749147, 0.00200969, -0.0456535, 0.00875466, 0.0220282},
 {0.00341703, -0.0308116, -0.0885282, -0.030978, 0.00469902, -0.0396156, -0.0167863, -0.0213849, 0.0458112, -0.0268458, -0.101017, -0.0327674, 0.020886, -0.0208765, 0.0337883, 0.000673436, 0.00404164, 0.0870238, 0.0101015, -0.0309636, 0.0643833, -0.00406726, -0.0816638, -0.0316514, 0.0792768},
 {0.0269156, -0.000632822, 0.0119999, 0.00269479, 0.0168715, -0.035839, -0.0317498, -0.0176568, 0.00238212, 0.0133557, -0.0287664, 0.00674045, -0.0276048, -0.0202031, 0.0244358, -0.030978, -0.00274152, 0.0349128, -0.0303046, 0.0289125, 0.0385802, -0.0242474, 0.00921093, 0.0269374, 0.00665775},
 {-0.00735643, -0.00787717, -0.127423, 0.0080831, -0.0101157, -0.0276469, 0.00811854, 0.00690044, 0.114345, -0.0227954, -0.12488, -0.00777678, 0.0135109, 0.00606091, -0.0255753, 0.0148156, 0.0100957, 0.0745998, -0.0228968, 0.00405033, -0.0215805, -0.0128208, -0.0801444, -0.0249171, 0.103972},
 {0.022222, 0.00338597, 0.00134356, -0.026264, 0.0235752, 0.0556118, 0.0208487, -0.0228935, 0.0177818, -0.0053905, -0.0553906, 0.0202685, -0.026264, 0.0329983, -0.00488207, 0.026264, 0.0188477, 0.00872357, 0.00471405, 0.0269354, -0.0635841, -0.0276087, -0.01843, 0.0276108, -0.0116757},
 {0.00943663, -0.0141373, 0.00745123, 0.0195296, -0.0329957, 0.0462585, 0.0242518, 0.0169033, 0.028485, -0.0107612, -0.0285593, 0.0027791, 0.0309778, 0.0127953, -0.0387798, 0.0181827, -0.0134635, 0.0175692, 0.0329983, -0.0269209, -0.00823694, 0.0249171, 0.00864262, -0.0222234, 0.00603533},
 {0.0121215, -0.014167, 0.0314502, 0.0101015, -0.0188572, -0.0312356, -0.0154779, -0.0221802, -0.0292573, -0.0154736, 0.022754, 0.0256166, 0.0215494, 0.0101015, -0.0081657, 0.0249171, -0.0188507, 0.00275384, -0.0188562, 0.0101214, -0.0219712, -0.0228969, -0.0250621, 0.0161624, -0.0184068},
 {-0.00538161, -0.00262988, 0.00621855, -0.0175093, -0.0121231, -0.0587399, 0.0128053, -0.020873, -0.0262419, -0.0282754, -0.0648901, 0.0215939, -0.0249169, -0.00875466, 0.00656552, -0.0235702, -0.0269381, 0.0292425, 0.00471405, 0.0276116, 0.0596685, 0.0316514, -0.0191839, 0.00336717, 0.0255959},
 {-0.0290507, -0.00305264, -0.0689886, -0.0249415, -0.0100107, 0.0222695, -0.0110582, 0.000899018, 0.0486784, -0.0334372, -0.0903562, 0.00107085, 0.0130292, 0.0202031, -0.0205807, -0.0175093, -0.0224199, 0.0740429, 0.00677122, 0.0321367, -0.0295637, 0.0318917, -0.0578581, -0.010775, 0.0516559},
 {-0.0181266, -0.00176682, 0.0397342, -0.00808294, -0.0162868, -0.0250045, 0.00624664, -0.0315641, -0.0389129, 0.0330635, -0.0213891, 0.028911, -0.0329831, 0.0195296, 0.0476305, 0.0020203, -0.000627598, 0.00867572, -0.00605976, -0.0229511, 0.0401754, 0.00873548, 0.00663341, -0.00875466, 0.0316123},
 {-0.020933, 0.0325979, 0.0533708, 0.00133353, -0.0222715, -0.0947472, -0.000165012, -0.0167651, -0.0522006, -0.0137971, 0.00185375, -0.006406, 0.00746682, -0.00134687, 0.0600437, 0.00404061, 0.0174136, -0.0409196, 0.00808431, 0.0030721, 0.115864, -0.00202779, -0.0183914, -0.00202031, 0.0135333},
 {0.0134653, -0.00742519, 0.0790531, 0.0175093, -0.0229033, -0.0921711, 0.0175364, -0.0230478, -0.0677226, -0.0101784, 0.0169988, -0.0298185, 0.010092, 0.00538748, 0.0674133, 0.00808122, -0.0168358, -0.0609927, 0.0134687, -0.012812, 0.058082, 0.000668959, -0.0107454, -0.0161624, -0.0205873},
 {-0.00815821, -0.00872565, 0.107383, 0.0195283, 0.0296283, -0.0899569, -0.0236934, 0.00955636, -0.0653939, -0.000307496, 0.0597276, -0.0300344, -0.00808409, -0.0303046, 0.0476789, -0.0175093, 0.0100371, -0.0933107, -0.0276108, 0.0126236, 0.107202, 0.0242519, 0.0352117, 0.0161624, -0.0350357},
 {0.0302924, 0.0181068, -0.000172363, 0.0316514, 0.0154996, 0.00661217, -0.00602074, 0.0168885, -0.0323632, -0.00401579, 0.0140545, -0.00540667, 0.0269327, -0.0202031, 0.00413788, -0.0296311, 0.0242588, -0.0342341, 0.000671611, -0.0228658, -0.0290813, 0.01011, 0.0319336, 0.0296311, -0.00476513},
 {-0.026941, -0.0328961, 0.0659843, 0.0161624, 0.026918, -0.0893854, 0.0154516, 0.0125833, -0.0171041, -0.0122317, 0.0132005, -0.0155822, -0.0262608, -0.0181827, 0.0896773, 0.0202031, -0.0262949, -0.0250606, 0.0222234, 0.0281997, 0.141029, 0.0100966, 0.0043975, 0.0101015, -0.00199958},
 {0.00409965, 0.00759603, -0.0668361, 0.0154917, -0.0188653, -0.0515749, -0.00129629, 0.0190755, 0.101772, -0.0295319, -0.0604078, 0.0305915, 0.000715946, -0.00404061, 0.0314027, 0.0215499, -0.0249143, 0.0992837, -0.00673434, -0.0141148, 0.0177868, 0.00873226, -0.0474251, -0.0276108, 0.0584586},
 {-0.0276304, -0.0174475, -0.00891301, -0.0101004, -0.03027, 0.00724623, -0.0203168, 0.00588646, 0.0146904, -0.029071, -0.0252347, -0.0329771, 0.0121321, 0.0289577, 0.0352758, -0.0114484, 0.00466092, 0.0352243, -0.00134428, -0.0189071, 0.0398359, -0.0181852, -0.0334519, 0.0181827, 0.0494873},
 {-0.000600237, -0.0172792, -0.108484, -0.0208765, 0.018174, -0.00477356, -0.0255668, 0.0224541, 0.11245, 0.0277314, -0.165564, -0.0164781, 0.0249363, 0.0188562, 0.00995903, -0.00404061, -0.0101082, 0.140356, 0.0127953, 0.0128146, 0.0126865, 0.031651, -0.0613625, -0.0141421, 0.0767619},
 {-0.0154852, 0.0148435, -0.0130809, -0.0249171, -0.0309724, 0.0325357, -0.0276416, -0.00264146, 0.00703888, 0.0242536, -0.048608, -0.00798113, -0.00402993, -0.0242437, -0.0606324, 0.000673436, -0.0141516, 0.0154069, 0.000673124, -1.34554e-007, -0.0215049, 0.00336853, -0.00657163, 0.0215499, 0.0224767},
 {0.0121341, -0.0242237, -0.0199578, -0.0101015, 0.0154969, 0.063866, -0.0127966, -0.0322419, 0.0348615, 0.0188753, -0.0351421, 0.0142601, -0.0316514, 0.0101015, -0.00913195, 0.0276108, -0.017505, 0.0375158, -0.0175093, 0.0202196, -0.0247437, 0.0134631, -0.0395778, -0.00471405, -0.00844235},
 {0.022222, 0.0060252, -0.0114878, 0.0255905, 0.0141404, -0.0130627, 0.00136558, 0.00611594, -0.0247833, 0.00744087, 0.0257196, 0.0249339, -0.00471673, -0.026264, 0.0113261, -0.0141421, -0.0100904, -0.00449907, -0.0208765, -0.0309634, 0.0142585, 0.010775, -0.00477918, 0.0215499, 0.000758119},
 {0.000684133, -0.0234917, 0.0172516, 0.00606118, 0.00807973, -0.0271679, 0.00472699, -0.0282827, 0.037191, 0.0269486, -0.0650938, 0.0108189, 0.0175095, 0.0249171, 0.0453104, -0.010775, 0.00740248, 0.00616468, -0.000672884, -0.0141458, 0.0621878, -0.0107809, -0.035619, 0.0114484, 0.0205756},
 {-0.027712, 0.0313448, -0.104802, 0.0289351, 0.0243258, 0.0377604, -0.00238549, 0.00817137, 0.0565795, 0.0271291, -0.0887758, 0.00111282, -0.0017845, -0.0114484, -0.0423386, -0.0276108, 0.00851179, 0.096882, -0.00400219, -0.00090356, -0.0863634, -0.00512974, -0.0170914, -0.0329983, 0.00706371},
 {-0.000616246, -0.0171971, 0.0167775, 0.016835, -0.0109062, -0.00869587, -0.0328383, 0.00341615, 0.0132579, 0.0323637, -0.0149132, 0.0208485, 0.0195764, -0.0121218, 0.016474, -0.00606092, 0.0256153, 0.0183952, -0.0161624, 0.0228281, 0.0264018, 0.0289447, 0.0267704, 0.0020203, -0.021449},
 {0.007341, -0.009701, 0.0613787, 0.0323248, 0.0241894, -0.119028, -0.00628714, -0.0303671, -0.0318497, 0.028578, 0.0027687, -0.000299149, 0.0195956, 0.0202031, 0.0815468, 0.0188562, 0.0160203, -0.035456, -0.0195296, 0.0320201, 0.0939083, 0.0181806, 0.0284895, 0.0222234, 0.0210274},
 {0.00671977, -0.0209104, 0.103866, 0.00672801, -6.04465e-006, -0.0717767, 0.0155243, 0.0207058, -0.0893179, 0.0120619, -0.0145368, 0.0186478, -0.0309811, 0.0141421, 0.0226244, 0.0316514, 0.0168388, -0.089533, -0.0255905, -0.0202137, 0.0618415, 0.00471131, 0.0385288, 0.00942809, 0.00831508},
 {-0.0223036, -0.0113974, 0.120297, -0.00540442, 0.00335838, -0.104245, 0.00859552, 0.0310322, -0.0923148, -0.0231937, 0.0429676, 0.0332907, -0.00875396, 0.0208765, 0.0884814, -0.0114484, 0.0255087, -0.0860341, -0.00605796, -0.0217308, 0.0550856, 0.0141581, 0.0312458, 0.0222234, -0.0425403},
 {-0.0175184, 0.00594834, -0.0100248, -0.0188562, 0.0309851, 0.0416475, -0.0221765, 0.0196238, 0.00306667, 0.0202428, 0.0398449, 0.0188319, 0.000644235, -0.0282843, -0.0259195, 0.0215499, 0.0309987, 0.00358098, 0.0181827, 0.00275253, 0.0260488, 0.0235731, 0.0311948, 0.0296311, -0.0483451},
 {0.0154854, -0.00388176, 0.0117414, -0.0235702, 0.0127744, -0.0894807, 0.0282494, 0.0159486, -0.0331748, -0.00077581, -0.0306342, 0.0248546, -0.00333638, -0.00202031, 0.0960118, -0.0215499, -0.0135137, -0.0390284, 0.0168359, 0.0282039, 0.124156, -0.0249178, -0.0289707, 0.0296311, 0.0718999},
 {-0.0228308, 0.00021938, -0.0952578, -0.00604549, 0.00201089, -0.0400294, 0.00141527, 0.0258618, 0.075222, 0.00888479, -0.123606, 0.0232248, 0.030318, 0.0208765, 0.0661663, 0.010775, 0.0107795, 0.0762142, 0.00808122, 0.0195653, 0.0665596, 0.0195174, -0.0862194, -0.0255905, 0.103955},
 {-0.0027025, 0.0142475, -0.0172557, 0.0269374, 0.000709732, -0.0200095, -0.0109025, 0.0106149, 0.00931729, 0.0221394, -0.0868191, -0.0113761, 0.0316539, 0.0121218, -0.00359672, 0.0222234, -0.0263178, 0.0324515, -0.0121218, 0.0255361, -0.00611596, 0.0202011, -0.0568284, -0.00740779, 0.0450114},
 {-0.00125805, -0.0273433, -0.145718, 0.018183, 0.00672318, 0.0367601, -0.0181561, 0.0117145, 0.1479, 0.00419076, -0.17896, -0.0231787, 0.00747064, 0.00269374, 0.0219132, -0.000673436, -0.0309845, 0.14164, -0.0121218, 0.0222409, -0.00291658, 0.0323248, -0.124941, 0.0020203, 0.0899885},
 {0.0316561, 0.021571, -0.0810701, 0.00404323, -0.00134052, 0.0324097, -0.0209069, -0.00935761, 0.0670147, 0.0168444, -0.0363182, 0.0331116, 0.0168377, 0.00269374, -0.0520278, -0.00942809, -0.00405159, 0.0808859, 0.00269363, -0.0114467, -0.0525105, 0.0208789, -0.0367285, 0.0195296, 0.0144085},
 {-0.0323099, 0.00812685, -0.0444498, 0.00404465, 0.00944037, 0.037485, 0.0161515, 0.00822438, 0.056403, 0.0161893, -0.0370662, 0.000834794, 0.0027086, 0.0215499, -0.0137333, 0.0336718, -0.0262625, 0.0614751, 0.010775, 0.0155116, -0.0860585, 0.0215482, -0.0520159, 0.0181827, 0.039887},
 {-0.00134476, 0.0275544, -0.000623266, -0.0296311, 0.0154881, -0.00436025, 0.0269639, -0.0194358, 0.0232063, -0.0120713, -0.0158148, 0.0296508, -0.0289575, 0.0195296, -0.00721458, -0.0289577, 0.0148305, 0.0241801, 0.0316514, 0.032333, -0.0280398, 0.0303046, -0.0189531, 0.026264, -0.0266172},
 {0.0235775, 0.0135547, -0.00535253, -0.0215499, -0.0228999, -0.0370858, 0.0235792, 0.0127953, -0.0077919, -0.0141292, -0.0316372, -0.0208451, 0.0276111, 0.0336718, 0.0431186, 0.0249171, 0.0336677, 0.000495089, -0.026264, 0.0148081, -0.00658574, -0.0228972, -0.0079587, -0.0208765, 0.0506542},
 {-0.013562, 0.00978172, -0.0591812, -0.00338774, 0.0270102, 0.0122306, 0.00294965, -0.0202263, 0.0581446, -0.0153243, -0.0441745, 0.0139595, 0.0123553, 0.0296311, -0.00191736, -0.00808126, -0.0272123, 0.0279753, 0.0188902, -0.0298683, -0.0335361, -0.0179087, -0.0605256, -0.0329983, 0.0262262},
 {-0.00801768, -0.00704663, 0.0445366, 0.00404117, 0.0268076, -0.0358939, 0.0216906, 0.0296462, 0.00357885, 0.0256319, 0.0267933, 0.0296304, -0.0215021, -0.0323249, 0.0404359, -0.00134687, 0.0107883, -0.014855, -0.0303046, 0.0234959, 0.0625534, -0.0161722, -0.0160069, 0.0101015, 0.0206811},
 {0.0154279, -0.0284956, 0.0838272, -0.00405048, 0.0295679, -0.096223, 0.0206174, 0.0119235, -0.100323, -0.024642, 0.0626019, 0.00108328, -0.0221569, 0.0202031, 0.0835231, -0.00606092, -0.0123061, -0.0842849, 0.0202031, 0.00907224, 0.124149, 0.00269552, 0.00324774, 0.030978, 0.00610469},
 {0.0168183, -0.019538, 0.0682755, 0.0208765, 0.0181752, -0.0578044, -0.0161194, 0.0146351, -0.087604, 0.006658, 0.0335835, -0.0318481, -0.0114567, -0.0296311, 0.0489044, 0.0175093, 0.00875583, -0.0488886, 0.00875466, 0.020856, 0.0504663, 0.0323243, -0.016796, -0.0276108, 0.00492088},
 {-0.00615973, 0.0182506, 0.128122, 0.0296263, -0.00607537, -0.0903756, 0.0166652, 0.0154617, -0.0713531, 0.0205626, 0.0734833, 0.0151089, -0.0329993, -0.0282843, 0.0636743, 0.0114484, -0.00549356, -0.0851777, 0.0215499, 0.0125897, 0.0671582, 0.0316518, 0.024314, -0.0269374, -0.0673179},
 {-0.00876527, 0.00390327, 0.0245371, -0.00404268, -0.00470458, -0.00999505, -0.0181301, -0.0248247, -0.0123432, -0.0208192, 0.0237932, -0.0215671, -0.0235744, 0.000673436, 0.0224897, -0.00942809, 0.00676848, 0.0032771, 0.030978, -0.0309294, -0.00841273, 0.0202047, 0.0414543, -0.0296311, 0.0175467},
 {0.00807277, 0.0216732, 0.0352574, 0.00269103, -0.0107981, -0.112891, 0.025555, -0.00498741, -0.0185454, 0.0228069, -0.061702, -0.0236332, -0.0208746, -0.00336718, 0.0901418, -0.0134687, 0.00196643, -0.0152634, 0.0134687, 0.0140523, 0.0850787, -0.00135917, 0.00175726, 0.0255905, 0.0262958},
 {0.0182605, -0.0173095, -0.101767, 0.0202032, 0.0276049, -0.00519061, -0.0261934, 0.0151135, 0.0842379, -0.0187033, -0.133102, 0.0232191, 0.0269472, 0.00404061, 0.0519208, 0.0202031, -0.0289493, 0.104199, -0.00942809, 0.0256387, 0.0784467, -0.0107993, -0.06116, -0.00942809, 0.124303},
 {0.0296243, 0.0277275, -0.0221016, 0.010778, -0.032299, -0.0553844, -0.028417, 0.0119668, 0.0435718, -0.0101576, -0.0517464, 0.00547568, 0.0329992, -0.00269374, 0.0474836, -0.0208765, -0.0074762, 0.0322145, 0.015489, 0.00936845, 0.0160086, 0.010098, -0.0732364, -0.0175093, 0.0722071},
 {-0.0302147, -0.0320547, -0.153927, 0.0323249, 0.0289502, 0.0148278, 0.00943976, -0.032068, 0.128105, -0.0187278, -0.154535, -0.0184663, -0.00263114, -0.026264, 0.0389722, -0.00538748, -0.0181923, 0.103461, 0.00134787, -0.0228772, 0.0105634, 0.0296181, -0.104389, 0.0202031, 0.131711},
 {-0.027604, 0.00339911, -0.0841206, -0.0282843, -0.0026859, 0.0389545, -0.00341254, 0.0276471, 0.0450195, 0.0033814, -0.0777586, -0.0173836, -0.0161606, 0.0195296, -0.0475972, 0.0215499, -0.0128066, 0.0464589, -0.0175093, 0.0303051, -0.0610579, -0.0020189, 0.00186807, -0.00269374, -0.00668476},
 {-0.0222012, 0.000754031, -0.0589143, -0.00740188, 0.00944163, 0.053241, 0.032303, -0.0268003, 0.0505187, -0.0168186, -0.0743482, -0.00791853, 0.0168366, -0.0195296, -0.0274341, 0.0296311, 0.00404056, 0.0611976, 0.00808122, 0.00473512, -0.101525, 0.0235698, -0.00654897, 0.0222234, -0.000937811},
 {-0.00538956, -0.0115147, 0.00501882, 0.0202031, 0.0202049, 0.0333399, 0.0121464, -0.00868894, -0.00170271, -0.0208519, -0.0292724, -0.0141333, -0.0202031, 0.0188562, -0.0146156, 0.0282843, 0.00473346, 0.0460712, 0.00740778, -0.0323177, 0.0201023, -0.0114493, -0.0135625, 0.0208765, 0.0194475},
 {-0.0282745, 0.0236669, -0.00456793, -0.0202031, 0.0276061, -0.00567296, -0.00538224, 0.00131549, 0.00396415, 0.0275914, -0.0293795, 0.0155055, 0.0282845, 0.0269374, 0.0452061, 0.0276108, -0.00674581, 0.0459068, 0.00269388, 0.00941682, 0.0453245, -0.0309782, -0.0553884, 0.0181827, 0.0457708},
 {0.029525, -0.00920101, -0.0723264, 0.0329763, 0.0249864, 0.020869, -0.0273876, -0.0243422, 0.0752021, -0.0186617, -0.0987732, -0.00823705, -0.0145985, 0.0215499, 0.0179515, 0.0195296, 0.026659, 0.0446094, -0.0040051, -0.0109877, -0.0285209, 0.000283821, -0.0789554, -0.0282843, 0.00955154},
 {-0.00531599, 0.0259353, -6.76846e-005, 0.0282843, -0.00821505, -0.06534, -0.0328705, -0.0222305, 0.0212648, 0.00881439, -0.00831085, -0.0154531, -0.0262144, 0.0188562, 0.0450179, 0.00740778, 0.0269454, -0.0307833, 0.0168359, 0.00935666, 0.0243083, 0.0309683, 0.00243764, 0.00740778, 0.00446558},
 {0.0262057, -0.0251622, 0.0762704, 0.0121164, -0.0162252, -0.119286, 0.0266626, -0.00565144, -0.0647253, -0.00173473, -0.00638754, -0.0217617, 0.0337049, -0.0175093, 0.0676197, -0.030978, -0.000878975, -0.069321, 0.0141488, -0.00910019, 0.141965, 0.0121292, 0.00558706, -0.0296311, -0.00267353},
 {0.00873628, -0.0201621, 0.0921523, 0.0047063, -0.0121324, -0.0481179, -0.00333253, 0.0281187, -0.0869367, 0.0262015, 0.00899633, 0.000498054, -0.0202008, 0.015489, 0.0892081, 0.0228968, -0.0107779, -0.0491689, -0.00471389, 0.0134423, 0.0475033, 0.00335217, 0.0314238, 0.0242437, -0.0033029},
 {-0.0108731, 0.0297074, 0.163545, -0.0309831, 0.000657625, -0.111651, -0.0183615, 0.0140995, -0.139076, 0.0273196, 0.0725972, -0.00573294, 0.00606297, -0.00134687, 0.0699976, 0.00606091, 0.0200985, -0.153072, 0.0228968, 0.0274243, 0.0714955, 0.0128076, 0.0226132, 0.030978, -0.0482307},
 {-0.0276173, 0.00792172, 0.00749433, 0.0303046, 0.0336822, 0.0561156, 0.0195868, -0.00457472, -0.00339827, -0.00529917, 0.0174412, 0.0134587, -0.00272541, 0.0208765, -0.042837, 0.0101015, -0.0262289, -0.000822808, 0.0242437, 0.0162268, -0.0569924, 0.00875918, -0.016684, -0.0316514, -0.00764872},
 {0.00335684, -0.0133361, 0.0646462, 0.0168359, -3.25936e-005, -0.123778, -0.00340268, -0.00363429, -0.0401758, -0.0209639, -0.0310649, 0.00935751, 0.00204597, 0.0161624, 0.105483, -0.0121218, -0.00140288, -0.0726405, 0.0134687, 0.0329391, 0.158775, -0.0309784, -0.0231026, 0.0202031, 0.0392365},
 {-0.00394726, -0.0180233, -0.0592601, 0.00943793, -0.0101076, -0.0295054, -0.0181077, -0.00574385, 0.058698, 0.0291046, -0.154684, 0.021179, 0.018864, -0.0222234, 0.0488944, 0.0195296, -0.019517, 0.0671535, -0.000674137, 0.0330347, 0.0642866, -0.00944939, -0.0817349, 0.0228968, 0.104474},
 {-0.0316627, 0.00883883, -0.0260298, 0.0141453, -0.0181497, -0.0150447, -0.0055206, 0.0247487, 0.0402288, -0.0215961, -0.0883921, 0.0290266, 0.0329988, 0.0121218, 0.0149819, 0.010775, 0.0268769, 0.00472528, -0.0202031, 0.021502, 0.00201346, -0.0127961, -0.0468267, -0.0121218, 0.0625755},
 {0.00213606, -0.0125052, -0.134673, 0.0101227, -0.0282885, 0.0272092, -0.0141263, 0.0218112, 0.15666, -0.026152, -0.165655, 0.015214, -0.00869951, 0.00673435, 0.00285279, -0.00606092, -0.010789, 0.132606, 0.0296311, -0.0127722, 0.0272469, 0.0296202, -0.085109, -0.030978, 0.125677},
 {0.02762, 0.00878075, -0.0921135, 0.0323249, 0.00135874, 0.0370127, 0.0275663, -0.0215073, 0.042884, -0.0309794, -0.0353139, 0.0230166, 0.00808536, 0.00673435, -0.0389412, 0.0249171, 0.00133296, 0.0643306, -0.0323249, -0.00605953, -0.0869444, 0.0323249, 0.000821189, 0.000673436, 0.0282532},
 {-0.0188327, 0.0175818, -0.061243, 0.0255905, 0.0148248, 0.0733966, 0.0336497, -0.0301988, 0.0814413, -0.00739378, -0.0795139, -0.0126399, 0.00808785, -0.0208765, -0.0670309, -0.00606092, -0.0141463, 0.0745952, -0.0181827, 0.0329993, -0.0485366, 0.0329983, -0.0355765, 0.0215499, 0.00118937},
 {0.0121157, 0.0295764, 0.0372377, 0.00808121, -0.0020195, 0.000392953, 0.0141679, -0.00734176, 0.0124539, 0.00405129, -0.0188612, 0.0147951, 0.00740398, 0.0020203, 0.00515343, -0.010775, 0.00405989, 0.00245772, -0.015489, -0.0323214, -0.0143468, 0.00673383, 0.0331673, -0.000673436, 0.0129653},
 {0.0289686, 0.0297333, -0.0285591, -0.00808122, -0.0309808, -0.00859071, -0.0255875, 0.0302631, 0.028144, -0.0148428, -0.011982, 0.0269575, -0.000654345, 0.0202031, 0.0256801, 5.70329e-008, -0.0121347, 0.0298912, 0.0175093, 0.0329956, 0.0421257, -0.00875874, 0.00209164, -0.0175093, 0.0309162},
 {-0.0135882, 0.000729235, -0.0700328, -0.0101251, 0.0263278, 0.0471834, -0.0266981, 0.0241893, 0.0199995, 0.00834743, -0.0848126, -0.0284059, -0.0179925, 0.0235702, 0.0207638, 0.0121218, -0.00227177, 0.0721669, -0.0127651, -0.0264243, -0.0511627, 0.0279051, -0.0530878, -0.00404061, 0.0108248},
 {0.0337324, 0.017152, 0.036529, -0.0289576, 0.00592134, -0.017568, 0.00619369, -0.026933, 0.0172337, -0.00126226, -0.0168451, -0.0208254, 0.010155, 0.0175093, 0.0128306, 0.0269374, -0.0309679, 0.00640602, -0.0249171, -0.00612143, 0.0613719, 0.0181753, 0.0175457, -0.00538748, 0.0453266},
 {0.0012813, -0.0265691, 0.120602, 0.0228963, 0.0241792, -0.107446, 0.000375144, 0.0240127, -0.0820173, 0.0212325, -0.010988, -0.031818, 0.0189058, 0.00875466, 0.0788545, 0.010775, 0.0152935, -0.0953612, 0.0242437, -0.0144611, 0.140873, 0.0269471, 0.0109515, 0.0228968, 0.0102721},
 {0.0107625, 0.00745328, 0.064918, 0.0195296, -0.0188621, -0.0849591, -0.0195027, -0.0149595, -0.0363318, -0.0101506, 0.0529685, 0.0173726, -0.00874852, -0.0101015, 0.0263673, -0.00808122, -0.0262674, -0.0405738, 0.0276108, 0.00469012, 0.106971, 0.0208678, 0.00785608, -0.00269374, 0.00977921},
 {-0.0162594, -0.0208101, 0.155806, -0.024922, -0.00809279, -0.0709003, -0.0298131, 0.00806541, -0.139493, 0.0287069, 0.0779766, -0.00165757, -0.00201884, -0.030978, 0.0586788, -0.0228968, -0.00684944, -0.11769, -0.0134687, -0.00288165, 0.137347, 0.0336718, 0.0385371, 0.015489, -0.0186991},
 {0.0087443, 0.0153449, 0.0245579, 0.0208765, -0.00739361, 0.0642716, -0.00464973, -0.0274887, -0.0376507, 0.0189418, 0.00712165, -0.0101316, -0.032325, 0.0195296, -0.00165102, 0.0134687, -0.0087132, 0.0106547, -0.00673442, -0.00732921, -0.0517129, -0.015483, 0.0282633, 0.0188562, -0.0116696},
 {-0.0168444, 0.0216878, 0.0260019, 0.00808126, 0.00872851, -0.155717, -0.000699075, 0.0307349, -0.0128115, -0.0222917, -0.0682099, -0.0283437, 0.029634, 0.0235702, 0.100936, 0.00673435, -0.0188964, -0.0368801, -0.00404058, 0.0127137, 0.159348, -0.0202039, -0.0307049, -0.00538748, 0.0741091},
 {0.0101915, -0.0173537, -0.113228, 0.0154994, -0.0134807, -0.0396921, -0.0228058, -0.0226152, 0.0813305, 0.0055399, -0.181128, -0.0327432, 0.00205662, 0.0296311, 0.0384139, -0.0134687, -0.000655073, 0.0769688, 0.0329983, -0.0167864, 0.0330553, 0.0168306, -0.109573, 0.0242437, 0.0973054},
 {0.0141291, 0.00883213, -0.0221923, 0.0235707, -0.0269105, -0.00236123, -0.0176311, 0.0240709, -0.0178115, -0.0168843, -0.0581872, -0.0295648, -0.0249131, 0.010775, 0.0316865, -0.0282843, 0.0187984, 0.0368623, -0.0303046, 0.0275699, 0.0140125, 0.0282844, -0.0595026, 0.0242437, 0.0323308},
 {0.0277147, -0.004451, -0.126867, 0.0249196, -0.0208842, -0.0126518, -0.0168199, 0.0325473, 0.157818, 0.00347698, -0.18511, -0.0272415, -0.0147665, 0.0296311, 0.0151722, 0.0114484, -0.0316571, 0.142333, -0.0329983, -0.0201835, -0.0219018, 0.0276019, -0.089404, -0.00673435, 0.123849},
 {-0.0276035, -0.0114375, -0.0568966, -0.0235702, 0.0255973, 0.0658593, 0.0167836, -0.0194928, 0.0424195, 0.003372, -0.00580351, -0.00526539, 0.0329977, -0.00471405, -0.0864095, -0.0188562, -0.0303135, 0.0620251, 0.00471403, -0.026938, -0.0919742, -0.0276079, -0.0080667, -0.010775, 0.0352964},
 {-0.0302804, 0.0242899, -0.0908617, -0.00470696, 0.0074146, 0.0789908, -0.0195611, -0.00393144, 0.0811611, 0.0256005, -0.048041, 0.0095752, 0.0282839, -0.0101015, -0.0784137, 0.00471405, 0.00807701, 0.0451823, -0.0255905, 0.00674588, -0.0761252, -0.00740857, 0.00109266, -0.0168359, -0.0175635},
 {-0.0282891, 0.0235564, 0.0106302, -0.0323249, 0.0269359, 0.00188524, -0.00536199, 0.0276661, -0.0268766, -0.0249312, 0.0185796, 0.00737886, 0.0296311, 0.015489, -0.0275486, 0.0181827, -0.00402732, 0.0112815, 0.0114484, 0.00135495, 0.0244338, -0.0141416, -0.00628123, 0.00808122, 0.00827466},
 {-0.0309678, -0.0133499, -0.0374159, 0.0289577, 0.00134111, -0.0445649, 0.0289514, 0.0140768, -0.00714543, 0.0154551, -0.0538864, 0.0303162, -0.0296307, -0.00606092, 0.0547598, 0.00875466, -0.0269516, -0.015695, -0.00740779, 0.00738217, 0.0656226, 0.0148127, -0.0226157, -0.00134687, 0.00690759},
 {-0.0190127, -0.0163436, -0.0440569, 0.0114194, 0.0276812, 0.0694172, -0.0158786, 0.00886197, 0.0379582, 0.00846156, -0.0788838, 0.0220742, 0.0068918, 0.00269374, -0.0541219, 0.0282843, 0.00518548, 0.0699846, 0.025613, -0.014231, -0.0643206, -0.0212453, -0.0183647, 0.00471405, 0.0438028},
 {0.00209215, 0.00362034, 0.00932317, -0.0107735, 0.00727148, -0.04962, -0.0119804, -0.00734841, 0.00791109, 0.0182917, 0.0149374, -0.023511, -0.0194929, 0.00269374, -0.00736025, 0.0134687, -0.022205, -0.0191951, -0.00471346, -0.0283211, 0.0418505, 0.00739529, -0.0151751, 0.0296311, 0.00513017},
 {-0.0216198, -0.00378444, 0.117428, -0.0235699, -0.0155543, -0.153101, -0.0103668, -0.0203176, -0.0696765, 0.0287378, 0.00135225, 0.00322412, 0.0114898, 0.0296311, 0.109952, 0.0175093, -0.0331526, -0.111362, -0.0329983, 0.00107352, 0.160567, 0.0202134, -0.0161859, 0.0188562, 0.0558925},
 {0.00807538, 0.0242899, 0.0500166, -0.0101022, -0.00337587, -0.0672266, 0.00945765, -0.0304483, -0.0327411, 0.0262053, 0.00716089, 0.00528632, -0.0127864, -0.0175093, 0.0612824, 0.0168359, -0.00203046, -0.0423465, 0.0215499, -0.0208912, 0.0530007, 0.0289461, 0.0379329, -0.0114484, -0.0195903},
 {0.00798414, 0.0283446, 0.124422, -0.0128065, 0.0329881, -0.0898811, 0.0281117, -0.033619, -0.0736902, -0.0217713, 0.0326305, -0.023803, 0.0309818, -0.00538748, 0.0680764, 0.0121218, -0.0142493, -0.0967173, -0.0269374, 0.0160075, 0.131347, -0.030975, 0.0379391, -0.0222234, 0.00512864},
 {0.0121131, 0.0241379, -0.0408123, -0.0127959, 0.00539632, 0.0671594, 0.0121923, -0.0261297, 0.0217045, 0.0256355, 0.0295318, 0.0188557, -0.00271592, 0.0101015, -0.0374448, 0.0148156, -0.00130027, -0.0115903, 0.0289577, -0.0255355, -0.0452622, -0.0296308, 0.0183151, 0.0148156, -0.0076281},
 {-0.00607432, -0.0126763, 0.0910054, -0.0195296, 0.0275917, -0.096306, 0.0329792, 0.024688, -0.0789236, 0.0268704, -0.0465142, -0.00343904, 0.0262662, -0.026264, 0.0734987, -0.0202031, 0.00668913, -0.0705015, -0.0269374, -0.0202691, 0.148478, -0.0222243, -0.0529601, 0.0316514, 0.0313882},
 {0.00614413, -0.012684, -0.0345993, -0.0289574, -1.07753e-005, -0.0120707, 0.0155808, 0.0076988, 0.0958566, 0.0034997, -0.1525, -0.00180097, -0.0134516, 0.0148156, 0.0128144, 0.00673435, -0.00535989, 0.047292, 0.026264, 0.0115065, 0.0134108, 0.0242405, -0.0580887, -0.0134687, 0.0818515},
 {0.00739551, -0.0275376, 0.0097923, 0.00875904, -0.0289342, -0.010376, 0.02008, 0.0321321, 0.0472018, -0.00746999, -0.0782558, 0.0229634, -0.00604725, 0.030978, 0.0436443, -0.010775, -0.0269911, 0.0259778, -0.0215499, -0.0101457, 0.038132, -0.0094275, -0.042088, 0.0296311, 0.0459846},
 {0.0297229, 0.0116308, -0.135025, -0.00603839, 0.0302981, -0.00155817, 0.0168559, -0.0246697, 0.148556, 0.00146216, -0.148928, -0.0212418, 0.028962, 0.0289577, -0.00144347, -0.0127953, -0.0242449, 0.153324, -0.026264, 0.0269563, -0.0189119, -0.0269415, -0.0748136, -0.00336718, 0.0995698},
 {0.0222297, 0.0134791, -0.0841923, 0.0296311, 0.0289626, 0.0594143, -0.023624, -0.0147695, 0.0209412, 0.0302909, -0.0589571, -0.0241339, -0.0255904, -0.0242437, -0.00889287, 0.0101015, -0.030989, 0.0850678, 0.00875466, 0.0215423, -0.060196, -0.0269359, -0.017177, 0.0127953, -0.00380784},
 {-0.0255642, 0.00338864, -0.10948, -0.0148148, -0.0107678, 0.0648234, 0.008715, -0.0146792, 0.0899449, -0.0215153, -0.0445805, -0.00454705, -0.0329983, -0.0329983, -0.0472651, 0.0181827, 0.00336497, 0.0705876, -0.0127953, -0.0121103, -0.0474151, -0.00808131, -0.0403852, -0.0181827, 0.00644656},
 {-0.0134697, -0.025578, -0.0178199, 0.00336605, 0.0208745, -0.0131042, 0.0296464, -0.0188138, 0.0227817, -0.0141628, 0.00333432, -0.0330138, 0.00404396, 0.0148156, 0.0255988, 0.0020203, 0.0175139, -0.013799, -0.00606092, -0.0101051, 0.0131198, 0.0249171, -0.010777, -0.000673436, -0.00484315},
 {0.0107913, 0.0317328, -0.0549763, 0.00875467, 0.00201589, -0.0586999, 0.0255781, 0.0100563, 0.0337425, -0.000702125, -0.0561078, 0.0141902, 0.000694644, 0.0222234, 0.0091985, 0.0296311, 0.0336606, 0.0172999, -0.00336688, -0.0121407, 0.0722106, -0.0303054, -0.0439937, -0.015489, 0.0600305},
 {-0.00895763, -0.035441, -0.0136962, -0.00407803, -0.00328264, 0.0773936, 0.0266043, -0.0260394, -0.000244232, 0.0065129, 0.00802262, -0.0143751, 0.025719, 0.00336717, -0.0646684, 0.0202031, 0.011981, 0.00174794, 0.0202213, 0.0181543, -0.077293, -0.031332, 0.0140681, 0.0289577, -0.0550338},
 {0.0155513, -0.000489949, -0.00214062, 0.00269667, -0.000811843, -0.00765819, 0.0324826, -0.0275126, -0.0413903, -0.0254713, 0.017189, 0.0108245, 0.02158, -0.0316514, -0.000878574, -0.0141421, 0.00474982, -0.0408835, 0.010775, -0.0175279, 0.0547029, -0.0229045, -0.0050553, -0.0296311, 0.036854},
 {0.0194427, -0.00256714, 0.12333, -0.010781, 0.0241881, -0.188863, 0.0125679, 0.0296189, -0.112782, 0.0240587, -0.00460289, 0.0213976, -0.0114202, 0.00471405, 0.0883264, 0.015489, 0.0220883, -0.138888, -0.0289577, -0.00965116, 0.181557, 0.014833, -0.0196818, -0.00808122, 0.0178735},
 {0.0127944, -0.0107115, 0.0351913, 0.0148154, -0.0309863, -0.0649525, -0.0255585, 0.0200761, -0.0195965, -0.0249495, 0.0338508, -0.0128606, 0.00809387, -0.0101015, 0.0493882, -0.015489, -0.0289642, 0.0166811, -0.00404057, 0.0262483, 0.0487534, -0.0202145, 0.0139769, -0.0168359, 0.0464518},
 {-0.00952871, -0.0167944, 0.138316, 0.0222209, 0.0121091, -0.124375, -0.0297921, -0.0026012, -0.063938, 0.0267622, 0.028603, -0.00829375, 0.000684083, 0.00673435, 0.102111, 0.00471405, 0.0187667, -0.125188, -0.00471219, -0.0331179, 0.0995878, -0.0161603, 0.00796897, 0.030978, -0.0272195},
 {-0.0229003, -0.0303759, -0.0314847, 0.0127945, -0.00537792, 0.0377688, 0.0330564, -0.0160391, -0.021953, -0.0174552, 0.00636275, -0.020875, 0.00536897, 0.0316514, -0.0380636, 0.0249171, 0.0303357, 0.00393285, -0.00404062, -0.0181367, -0.0724377, 0.0208769, 0.0250793, 0.00606091, -0.0330432},
 {0.0141318, 0.0277382, 0.0961637, -0.0148154, -0.0242641, -0.115719, 0.0316299, 0.0152509, -0.0544296, -0.00546882, -0.0318995, -0.00209725, -0.0161591, -0.0242437, 0.0772748, -0.0134687, 0.0309435, -0.0925712, 0.0303046, 0.0295652, 0.146816, 0.0255894, -0.0241393, 0.0202031, 0.0206673},
 {-0.0160885, -0.0100058, -0.0360154, -0.0329983, -0.0282877, -0.0309007, 0.0290398, 0.0298891, 0.0289955, -0.0214608, -0.130163, -0.00384925, 0.0296325, -0.00673435, -0.00638882, -0.0161624, -0.0141154, 0.0713885, -0.00067439, 0.000731552, 0.0475603, -0.00338284, -0.0459168, -0.0175093, 0.0525712},
 {-0.00877217, -0.00128887, -0.0134412, -0.0154847, 0.00811165, -0.0610516, -0.00753625, 0.014646, 0.0475823, -0.0296913, -0.0479137, 0.00478118, -0.0141312, 0.0121218, 0.0335784, -0.0202031, 0.0282366, 0.0315659, -0.0215499, -0.00206143, 0.070397, 0.0255921, -0.063304, -0.0249171, 0.0572016},
 {0.0337389, -0.00323411, -0.0876361, -0.0323249, -0.0141505, 0.00980105, -0.0302773, 0.0130379, 0.115693, -0.00528391, -0.115969, 0.00903474, -0.0195272, -0.00336718, -0.019579, -0.0161624, -0.0202001, 0.128711, 0.0168359, 0.023591, -0.0109924, -2.02878e-005, -0.100575, 0.030978, 0.0479016},
 {-0.0114468, 0.00134685, -0.0723701, -0.0235702, 0.00943245, 0.0548372, -0.0202639, 0.0276327, 0.0233254, 0.0228944, -0.0463587, 0.0236618, 0.00203002, 0.0249171, -0.0213504, -0.000673436, -0.00809399, 0.0797215, -0.0168359, 0.0127821, -0.0763435, -0.000668234, 0.018083, 0.0222234, 0.0223859},
 {0.0134942, 0.0295824, -0.0786036, -0.0235702, -0.0302925, 0.105458, -0.00409077, 0.0311087, 0.0439966, 0.0296586, -0.00159542, 0.0331392, 0.0276109, 0.0336718, -0.0307148, 0.0296311, 0.0168346, 0.0764276, 0.0168359, -0.0235607, -0.0754925, 0.0134682, -0.0355188, 0.010775, 0.00155919},
 {-0.00740686, -0.0255649, -0.000521192, 0.00942806, -0.0276111, -0.00243374, 0.0262631, -0.00268199, -0.01006, -0.0195496, -0.0283765, 0.0148044, 0.0127964, -0.0188562, 0.0101769, 0.00538748, -0.00134587, 0.0247867, -0.00740779, -0.0181876, -0.0135858, -0.0289577, -0.0316579, 0.0269374, 0.00719291},
 {-0.00267932, 0.00142745, -0.0507755, -0.0208765, 0.000673484, -0.00377538, -0.00876069, 0.0282439, 0.00020261, -0.0262774, -0.0847017, 0.00139652, 0.0208766, -0.00336718, 0.028948, -0.00538748, -0.00271231, 0.0483194, 1.75158e-006, -0.0296377, 0.0182236, 0.0242433, -0.0539687, -0.0168359, 0.0121701},
 {0.00309129, -0.024912, 0.0162789, 0.00399356, -0.0295396, 0.0840445, 0.00847677, 0.0279606, -0.0108174, -0.0285169, 0.112013, 0.00500902, 0.0270428, 0.0175093, -0.0835326, -0.0114484, 0.0255111, -0.00453298, 0.000690749, -0.0255671, -0.0968655, -0.0131343, 0.0829614, -0.00875466, -0.0524301},
 {0.00274339, 0.0183196, 0.0298265, 0.0242436, 0.00187895, -0.0467907, 0.0325068, 0.00150026, -0.0451159, -0.00931672, 0.0168841, 0.0155126, -0.0221933, -0.0222234, 0.0205498, -0.0255905, -0.0161158, -0.0211145, 0.0316514, -0.00674599, 0.0475553, 0.0047032, -0.0246258, -0.0316514, 0.0222691},
 {0.0261482, -0.018844, 0.144539, -0.0276123, 0.0187993, -0.179967, 0.0200405, -0.00193003, -0.0944505, 0.0206982, -0.0042748, -0.0143437, 0.00877469, -0.015489, 0.100057, 0.0188562, 0.0281887, -0.10592, 0.0242437, -0.0123053, 0.154116, 0.0235858, -0.000436285, 0.0134687, -0.00457569},
 {0.00472017, -0.0187443, -0.0194502, 0.0107755, -0.0222322, -0.0558609, 0.0323575, -0.00953151, 0.0362105, 0.0188477, -0.0364966, -0.0296418, 0.0249227, 0.026264, 0.0682226, -0.00404061, 0.0188452, -0.00536515, 0.0255905, 0.00401476, 0.0921316, 0.00265888, -0.0643803, 0.00336717, 0.0733929},
 {0.026166, -0.0228714, 0.0612353, -0.0262654, -0.00607502, -0.087061, 0.0321928, -0.028781, -0.0714147, -0.0304478, 0.00596737, 0.0240584, 0.0336722, 0.0289577, 0.0619212, -0.0249171, 0.0221486, -0.0569667, 0.00135092, -0.0135931, 0.128502, -0.0107686, -0.0333137, 0.0101015, 0.033464},
 {0.00538774, 0.0127412, -0.0159364, 0.0127948, -0.0276043, 0.0274348, -0.0113962, -0.00794508, 0.0146051, 0.0337239, 0.0102289, 0.0134793, 0.0228953, 0.00471405, -0.00564916, -0.00606092, 0.0256168, -0.02781, -0.026264, -0.0194938, -0.0424066, 0.00943259, 0.00152916, 0.0323249, -0.0180021},
 {0.0168276, -0.00994991, 0.0703297, -0.010775, 0.019507, -0.0810352, -0.0168664, -0.0103216, -0.0298267, -8.38167e-005, -0.0552118, 0.0234981, -0.0168338, 0.0289577, 0.0505507, -0.0181827, 0.00399977, -0.0787839, 0.00875466, 0.0161023, 0.147483, 0.00740037, -0.0388499, 0.00269374, 0.0606132},
 {-0.0181151, 0.000761072, -0.0271192, -0.0215499, -0.0289662, -0.0111803, 0.0323886, -0.0293819, 0.0210504, 0.00545533, -0.02029, 0.0277439, 0.0329984, 0.0242437, -0.000191722, 0.0235702, 0.0289815, 0.0123414, 0.0316514, 0.00408639, -0.00894741, -0.00741629, -0.0301597, -0.0141421, 0.0521787},
 {-0.00473376, -0.00805445, -0.0374541, 0.0121253, 0.00272712, 0.00226689, -0.0297557, -0.00215518, -0.0103739, -0.0169016, -0.0480309, 0.0108145, -0.00672862, -0.0289577, -0.00559046, 0.0289577, 0.0336363, 0.0321522, -0.00875466, 0.00804966, 0.035561, -0.0208704, -0.0531452, -0.0148156, 0.00171804},
 {0.0317028, -0.0268379, -0.105966, -0.0127911, 0.0276038, 0.0143885, -0.0228801, 0.025118, 0.0691067, 0.0115024, -0.100811, -0.00852445, -0.00807143, -0.0222234, 0.0174708, -6.27615e-008, 0.0148242, 0.0832036, 0.0188562, 0.0242631, -0.0615557, 0.0276095, -0.0238524, -0.0161624, 0.0306693},
 {0.0127937, -0.0289659, -0.0819665, -0.0276108, -0.00537812, 0.0495033, -0.00882325, 0.0208785, 0.0229391, 0.0141187, 0.0173665, -0.00125496, -0.0141423, -0.00875466, -0.07357, -0.0329983, -0.0175203, 0.0583241, -0.0255905, -0.00606897, -0.0725116, -0.0303035, 0.0224777, 0.0114484, -0.00642498},
 {0.014161, -0.00276078, -0.116306, 0.026264, 0.00472971, 0.0500317, 0.0114139, 0.00553448, 0.0822985, 0.0336721, -0.0117458, 0.00417817, 0.0282841, 0.0276108, -0.0585748, 0.00606091, 0.0316521, 0.0453099, 0.0276108, 0.0121395, -0.114399, -0.0101014, -0.0130755, 0.00875466, -0.0179329},
 {-0.00672589, -0.0154227, 0.030291, -0.0289577, -0.0235713, -0.00775011, 0.0249178, 0.0201935, 0.0192392, -0.018182, -0.0062744, -0.0323228, -0.0249171, 0.0181827, 0.0251532, 0.00538748, 0.0141351, -0.00425354, -0.0249171, -0.00338175, 0.02007, 0.0208765, -0.0460817, -0.00404061, 0.0204877},
 {0.00809055, -0.00126733, -0.0327169, -0.0276108, 0.0276087, -0.0311362, 0.020216, -0.0209047, 0.0034163, -0.028274, -0.042895, -0.00129448, 0.0188564, 0.0175093, 0.00745938, -0.0269374, 0.0148031, 0.0216332, -0.00673435, -0.00876531, 0.0170739, -0.0323249, -0.0464431, -0.0134687, 0.0496384},
 {-0.0104078, 0.0099719, 0.055038, -0.0303558, 0.0351148, 0.0373785, -0.0338875, -0.0123095, -0.032705, 0.00782342, 0.11048, 0.0204003, 0.019618, -0.0175093, -0.0782904, 0.0148155, -0.0256168, -0.00468477, -0.00604651, -0.0228123, -0.0664736, -0.0198579, 0.109922, -0.0242437, -0.0807986},
 {0.00139123, 0.0149041, 0.0446835, 0.0101001, -0.00753869, -0.0599486, 0.0237748, 0.0069065, -0.0481976, 0.0169661, 0.0119785, 0.00673892, -0.0235469, 2.37896e-009, 0.0568838, -0.0181827, -0.00531654, -0.0407363, 0.0188562, 0.00203185, 0.0498639, 0.02828, 0.00202987, -0.026264, 0.0102791},
 {0.0039002, 0.0254484, 0.0934323, -0.0181855, -0.00678915, -0.127997, -0.000804385, -0.0308036, -0.0968997, 0.0126415, 0.0473535, 0.0152173, 0.0127931, 0.0168359, 0.110721, -0.00808122, -0.0108326, -0.101379, -0.00269299, -0.0209937, 0.113605, 0.016858, 0.0261153, -0.00202031, -0.00631655},
 {-0.0168247, 0.0116049, 0.0110445, -0.00336396, -0.0060734, -0.0862384, 0.0316943, 0.0181055, -0.00884752, -0.0296117, -0.0765269, 0.0283086, -0.00536044, 0.010775, 0.0875785, 0.0148156, 0.00671022, -0.0278798, -0.0215499, -0.0222538, 0.0788443, -0.016852, -0.0287228, -0.0296311, 0.062354},
 {-0.0317423, 0.0114118, 0.0944432, -0.00202925, -0.0114558, -0.0751888, -0.00214437, -0.00311642, -0.0937893, 0.00189154, -0.027683, -0.0156766, 0.00269748, 0.0235702, 0.0745107, 0.000673436, -0.0296901, -0.0683678, -0.0161624, 0.0140389, 0.104725, 0.0309807, 0.0275017, -0.0175093, -0.00155729},
 {0.00472534, 0.0316343, -0.0170508, 0.0181827, 0.0289648, 0.0277855, 0.0276436, 0.0311263, -0.00107632, 0.00074027, -0.0017957, -0.00871286, 0.00807796, 0.00740778, -0.00779984, -0.0134687, -0.0100759, 0.00101853, 0.0222234, -0.0289256, -0.0376341, 0.0235708, 0.0423438, -0.0215499, -0.00341626},
 {0.0114383, -0.0220983, 0.0834935, -0.0161624, -0.0323399, -0.127479, 0.000636475, 0.0220467, -0.0575819, 0.0295937, -0.0470378, 0.00329319, 0.0296334, 0.030978, 0.0965749, -0.00740779, 0.0120878, -0.0649094, -0.00269277, 0.0228389, 0.127088, 0.0316514, -0.0353285, 0.0276108, 0.0193224},
 {0.0270024, -0.00665339, 0.00961998, -0.0215499, -0.0134764, 0.00556868, 0.0202637, -0.0240215, -0.0114007, 0.00209783, -0.0265092, 0.00820555, 0.00136063, -0.0208765, 0.00486516, -0.0242437, -0.0282614, 0.0231761, 0.0181827, -0.0215173, -0.0260635, -0.0134727, -0.000674177, 0.0114484, -0.00661851},
 {-0.00474356, 0.032939, -0.027488, 0.00404406, 0.0256178, -0.00415843, 0.00594249, 0.00998589, 0.0204049, -0.0263296, -0.0277188, 0.0107753, 0.0208762, 0.010775, 0.0051683, -0.00606092, 0.0322953, 0.00897043, 0.0101015, 0.0302807, 0.037297, 0.0141562, -0.036776, -0.0329983, -0.0217881},
 {-0.0289076, -0.0315985, -0.0695229, -0.010773, -0.0255968, 0.0444111, -0.0228655, -0.00250653, 0.0996274, 0.00341678, -0.0475705, -0.0200241, 0.0202051, 0.026264, -0.0385309, 0.0289577, 0.0323336, 0.11585, -0.0269374, 0.00204918, -0.0233278, 0.00604995, -0.042977, 0.00673435, 0.0598495},
 {0.0336652, 0.0336431, -0.101017, -0.0195296, -0.00874514, 0.0897115, -0.0249771, -0.0228837, 0.0572833, 0.0242061, -0.0147671, 0.0337284, 0.01212, -0.0276108, -0.0479501, 0.0134687, 0.0215399, 0.0795409, -0.0276108, -0.028288, -0.0695839, -0.0289569, -0.0014992, 0.0175093, -0.0140411},
 {-0.0168285, -0.0283667, -0.0622876, 0.0235702, -0.0141293, 0.0852863, -0.00270676, 0.021672, 0.0304216, 2.12205e-005, 0.016521, -0.0072926, -0.0282849, 0.0296311, -0.0852237, -0.0296311, 0.0323281, 0.0377491, 0.00404061, -0.00535697, -0.100295, -0.0107735, 0.039354, 0.0202031, -0.0142529},
 {0.00404914, -0.0107064, 0.00824653, -0.0127954, 0.00201868, -0.0422887, 0.0201983, 0.0262394, 0.0137574, 0.00335695, -0.0234527, 0.0181916, -0.0323249, -0.0228968, 0.0416692, -0.0121218, 0.0208678, 0.0183779, 0.00740778, -0.0235768, 0.0109539, 0.00538526, 0.00903517, -0.00740779, 0.0412245},
 {-0.00133513, -0.0046197, -0.031005, 0.0141421, -0.0121277, -0.0488304, -0.0201797, 0.0214936, 0.043889, -0.0107581, -0.0500444, 0.00947846, -0.0316514, -0.0316514, 0.0324397, -0.0188562, 0.0329917, 0.0161295, -0.0026936, -0.0289648, 0.0454031, 0.0249168, -0.00694504, 0.0188562, 0.0410525},
 {0.0212214, -0.00496218, -0.0227051, 0.024189, 0.0122485, 0.0595158, -0.0123244, -0.00208574, 0.018977, -0.0157516, 0.145921, 0.0102035, 0.00546142, -0.0249171, -0.0644633, -0.0208765, -0.0336604, -0.00122418, 0.0181921, -0.0295088, -0.135128, 0.0239177, 0.0662955, 0.0141421, -0.117958},
 {0.000711825, 0.0175615, -0.00983872, 0.000670547, 0.0308609, 0.00353421, -0.019318, -0.032137, 0.00811014, 0.0331313, 0.0594827, -0.000697195, 0.0235886, -0.00269374, 0.0444228, 0.00875466, -0.00395601, -0.00959273, 0.00673278, 0.0148399, 0.00288047, 0.0154827, 0.00368947, -0.00538748, 0.0131252},
 {0.0261182, -0.023141, 0.108519, -0.022227, 0.0329687, -0.104815, 0.0227976, -0.0300469, -0.0413282, -0.00217897, 0.0695658, 0.017165, -0.0215562, 0.0255905, 0.0570235, -0.0127953, -0.00473976, -0.0891719, 0.0269374, 0.016082, 0.127973, 0.0161859, 0.0435048, 0.0249171, 0.00256649},
 {0.0242715, -0.0179616, -0.0237236, 0.0202031, 0.0242323, -0.105158, -0.00937514, -0.00945491, 0.038805, 0.0249595, -0.0363464, -0.000564443, 0.0242558, 0.0020203, 0.044805, 0.00740778, 0.0222025, 0.00725368, 0.026264, -0.0202361, 0.0777476, 0.028941, -0.0363903, 0.0195296, 0.0949267},
 {0.0315667, 0.0248434, 0.0304174, 0.0181826, -0.00135226, -0.108187, -0.0317505, -0.00302238, -0.0762462, 0.00998374, -0.0181964, 0.0153148, 0.00538799, 0.0141421, 0.0463765, 0.00336717, 0.00668127, -0.0274308, 0.0329983, 0.0282083, 0.105965, -0.0262617, 0.0167897, 0.0121218, 0.000744397},
 {0.01752, -0.00880382, 0.0348579, 0.0175093, 0.027618, 0.0466836, 0.00474312, 0.0156492, -0.0290039, 0.0249754, 0.0275602, -0.0228251, -0.00471515, 0.030978, -0.0218716, 0.00471405, 0.0249373, -0.00493754, 0.0329983, -0.0154539, -0.0199096, 0.0242445, 0.0224554, -0.0276108, -0.0263885},
 {0.00740062, -0.0234488, 0.0601589, -0.0249171, 0.00199725, -0.128734, -0.0289887, -0.0163092, -0.0494205, -4.88858e-005, -0.0327329, 0.0201485, -0.0242386, -0.00740779, 0.0643065, -0.0188562, -0.00273416, -0.0165539, 0.0134687, -0.00680598, 0.108041, 0.0107686, -0.0263209, 0.0161624, 0.0694945},
 {0.0142051, -0.00127315, 0.0012252, -0.0276108, -0.0276178, -0.0280332, -0.0134179, 0.0116278, 0.0372084, 0.00950363, 0.00920788, -0.00527652, 0.00674986, -0.0121218, 0.0137753, -0.0235702, 0.0114706, 0.0350722, 0.0141421, 0.0128252, 0.0405831, 0.00403476, -0.00435534, -0.00336718, -0.00275564},
 {0.0194968, -0.0290532, -0.0248598, -0.0242436, -0.0174779, 0.0253465, -0.0149347, 0.0160447, 0.0219728, 0.016083, -0.031714, -0.0316667, 0.0255881, -0.0215499, 0.00433255, 0.00269374, -0.0155219, 0.0460544, 0.030978, -0.0242616, -0.0375745, 0.0141585, -0.00679353, -0.0296311, 0.0305015},
 {-0.0107298, -0.0174587, -0.0858395, 0.0202031, -0.0202086, 0.0071086, 0.0296663, 0.0243602, 0.080926, 0.0148569, -0.0240111, -0.0281475, 0.0148237, 0.0255905, 0.0223568, -0.0202031, 0.0316597, 0.0490015, 0.00202029, 0.0289757, -0.0237155, 0.00537921, 0.00928605, 0.00673435, 0.03331},
 {0.0249055, -0.0269748, -0.0716369, 0.0249171, -0.0201928, 0.0534828, -0.0242974, -0.00944653, 0.0422602, -0.0323668, -0.00513933, 0.0135185, 0.00471191, -0.0121218, -0.0101043, 0.0168359, 0.0309689, 0.0569426, 0.0168359, -0.0222243, -0.069012, -0.0255901, 0.0136488, -0.0181827, 0.0296084},
 {0.00539416, 0.0309091, -0.052892, -0.00740722, 0.0229098, 0.0816306, 0.0309696, -0.0181158, 0.070081, -0.0120996, -0.0197734, -0.0113598, -0.0329983, 0.0276108, -0.0286731, -0.0276108, -0.0296265, 0.0235546, 0.00606091, -0.0208558, -0.0783643, 0.00808353, -0.00908586, -0.0141421, -0.00719418},
 {-0.0242366, -0.0113857, 0.0335878, 0.0222234, 0.0121182, -0.0295212, 0.00606016, 0.0167835, 0.0248937, 0.0302946, -0.0077308, 0.0101144, 0.0101028, -0.0235702, 0.00642247, 0.0276108, -0.0161725, 0.00447136, 0.00942809, 0.0121091, 0.0452573, -0.0121202, -0.0334726, 0.0208765, -0.0127472},
 {-0.0141338, -0.000592034, -0.0281028, 0.0202031, 0.0282773, -0.0253266, 0.0256163, -0.0276676, -0.0012347, -0.0161324, -0.0298033, -0.0208274, -0.0195295, -0.00942809, 0.0056565, 0.00471405, -0.0013594, 0.0197568, -0.0101015, 0.00739761, 0.043705, -0.0276109, -0.00462216, 0.0303046, 0.0489623},
 {-0.0185251, 0.0145483, -0.00574083, 0.0275528, 0.0290982, 0.0767647, -0.0244403, -0.0370618, -0.00947205, -0.00636619, 0.121634, -0.00807683, -0.0275511, -0.0148156, -0.0781679, 0.0249171, -0.02355, 0.011556, 0.01348, -0.0180483, -0.0608187, -0.023229, 0.0609324, -0.00336714, -0.0995801},
 {0.0135013, 0.0195855, 0.0370644, 0.00605787, 0.00188919, -0.0336236, -0.00785709, -0.0226777, 0.0117147, -0.0220915, 0.0538236, 0.0221746, 0.0168525, -0.010775, 0.00103427, 0.00471405, 0.00480529, -0.00434444, -0.0222234, -0.0168106, 0.0197327, -0.00472152, 0.0359387, 0.015489, -0.00752542},
 {0.0314992, -0.015766, 0.11326, -0.0316514, 0.017478, -0.128038, 0.010687, 0.00169378, -0.0626661, 0.00386128, 0.0352341, -0.00379492, 0.00333663, -0.00404061, 0.0622685, 0.0336718, -0.0181854, -0.0918205, -0.010775, -0.0243186, 0.0921721, 0.029654, 0.0396793, 0.00740778, -0.00247656},
 {0.0168877, 0.0245175, -0.0637744, -0.0181827, -0.027625, -0.0613579, -0.0154457, -0.0195211, 0.0556188, 0.0263271, -0.117541, 0.0156845, 0.0188787, 0.0296311, 0.0524268, 0.00336717, -0.0182076, 0.0480122, -0.00808122, -0.0222487, 0.0754434, 0.027588, -0.0918604, 0.0269374, 0.0865571},
 {0.0201191, 0.0335915, 0.0208983, -0.0316514, -0.0316506, -0.0714825, 0.00327366, -0.0137267, -0.0403894, -0.00751689, -0.0130115, -0.0156312, 0.009429, -0.0101015, 0.078888, -0.000673436, 0.00264769, -0.0611262, -0.0282843, -0.0209413, 0.084469, -0.00807687, 0.0117708, 0.0202031, 0.0253302},
 {-0.00335112, 0.00670903, -0.00605882, -0.0282843, 0.0181919, 0.0474638, -0.00264823, 0.0290786, 0.0261724, -0.0140695, 0.0315094, -0.0254892, -0.00942818, -0.00942809, -0.0539828, -0.0222234, -0.0114261, 0.0198459, 0.00606091, 4.03573e-005, -0.0571674, 0.0316514, -0.00823694, -0.0195296, -0.0322521},
 {-0.0289599, 0.0230157, 0.0398429, 0.0168359, 0.0282641, -0.0846938, -0.00743842, 0.0099614, -0.052922, 0.0188129, -0.0518665, -0.00475527, -0.0302998, -0.0175093, 0.0791975, -0.0161624, -0.0256168, -0.0344225, -0.0168359, -7.81994e-005, 0.11464, 0.0276094, -0.0373255, -0.0141421, 0.0541553},
 {-0.0302569, -0.00532858, -0.0278778, 0.0215499, 0.0201938, -0.0349278, 0.0229466, 0.029103, -0.00133439, -0.0248727, 0.0418402, 0.00815556, -0.00133201, -0.0296311, 0.0199401, 0.0134687, 0.0067589, -0.00658395, -0.00673435, -0.0141197, 0.022245, 0.0148125, 0.0227993, -0.00606092, 0.00781302},
 {-0.000718968, -0.00351347, -0.00861674, -0.0161624, -0.026228, 0.0608898, -0.0223354, 0.020793, -0.0146555, 0.0100014, -0.0107303, 0.0154421, 0.0201956, 0.0296311, 0.00174667, -0.0296311, -0.0087812, -0.00142175, -0.0296311, 0.0255774, -0.0398852, -0.00738494, 0.0132397, 0.0101015, -0.0408157},
 {0.0336942, -0.011416, -0.0986288, 0.0316514, -0.00741595, 0.0381809, -0.00737781, -0.00257144, 0.065486, 0.0134947, -0.00935365, 0.00884696, 0.0134753, 8.50611e-010, -0.0290311, 0.0121218, 0.00607746, 0.0562221, 0.00808122, -0.0309597, 0.00568484, 0.024916, -0.0283909, -0.030978, -0.00459088},
 {-0.0330152, 0.012726, -0.0810838, -0.00134564, 0.0316623, 0.052386, -0.0128495, 0.0107533, 0.0461233, -0.0330395, -0.0303624, 0.0161702, 0.0249169, 0.0127953, 0.00752906, 0.0202031, -0.0168443, 0.0324189, 0.00740776, 0.00605977, -0.0623388, 0.0121262, -0.0316483, -0.0101015, 0.011318},
 {0.0134711, 0.00866085, -0.0429197, -0.0255905, -0.00941419, 0.0816974, -0.0255977, 0.0101886, 0.0447076, 0.00742555, -0.00247447, 0.0121776, 0.00335583, 0.0255905, -0.0517487, 0.010775, -0.00470196, 0.0761753, 0.0161624, -0.0228736, -0.0386912, -0.00807708, 0.027353, 0.0134687, 0.0201492},
 {-0.0127879, -0.0268885, 0.0134203, -0.0188562, -0.0202083, 0.00913029, -0.0154947, -0.0195924, -0.0369734, 0.00335655, 0.000902959, 0.0235732, 0.00539199, 0.0336718, -0.00074795, -0.0134687, 0.00065743, -0.00776112, -0.0296311, 0.0107591, 0.00642319, -1.35557e-006, 0.0189871, 0.0289577, 0.0187533},
 {-0.0201927, -0.0214595, -0.0309522, 0.00269634, -0.0215586, -0.0232339, 0.00743408, -0.0296469, 0.0152046, 0.0283308, -0.0346568, 0.018251, 0.00338438, 0.015489, 0.0230894, -0.0222234, 0.00066206, 0.0442068, -0.00269364, 0.00201373, 0.0475054, -0.0188563, -0.0192953, -0.00336718, 0.0343888},
 {0.00973436, 0.0205699, -0.0363439, -0.0209404, -0.0260994, 0.0584088, -0.000894285, -0.00407711, 0.0112233, 0.0305723, 0.127426, -0.0109309, 0.0323714, 0.0289577, -0.0752459, 0.0222234, -0.0148021, 0.00960174, 0.00674818, 0.00551891, -0.0467604, 0.0340047, 0.0678457, 0.00538748, -0.0720109},
 {0.0148479, -0.00465902, 0.0382481, 0.0188534, -0.0290746, -0.0077248, 0.0251436, -0.0307269, -0.00962533, -0.0207584, 0.0058142, 0.0241795, -0.0141242, 0.0195296, 0.036957, -0.0323249, 9.42623e-005, -0.000733101, 0.0242437, -0.0154597, 0.045281, -0.00809061, -2.60255e-005, -0.00740779, 0.0274061},
 {0.0314964, -0.0110897, 0.114307, 0.0127772, 0.0161396, -0.107995, -0.0270148, 0.0314228, -0.0423821, 0.00788017, 0.0589374, 0.023119, -0.0175265, 0.0336718, 0.0611949, -1.12517e-007, -0.00471212, -0.0984897, 0.000672017, 0.0255239, 0.100072, 0.0134942, 0.0123033, 0.026264, -0.0203776},
 {0.0229704, -0.0327289, -0.0468534, -0.0289576, -0.00742846, -0.0403829, -0.0194934, 0.0114927, 0.0482302, 0.0243529, -0.129591, -0.0131941, 0.032999, 0.00471405, 0.0621978, 0.0175093, 0.0316347, 0.0697641, 0.026264, -0.0202072, 0.055501, 0.0275896, -0.0474707, 0.0134687, 0.0570237},
 {-0.00546629, 0.0322436, 0.0172845, 0.00336212, 0.00606776, -0.0482416, 0.0302137, 0.0280903, -0.0228347, -0.00816461, -0.0533612, -0.0115552, 0.0175126, -0.00875466, 0.0328935, 0.00606091, 0.0208499, 0.0053904, -0.0242437, 0.0235247, 0.0648484, -0.0148102, 0.0124214, -0.015489, 0.0211489},
 {-0.00874055, 0.02155, -0.0134119, 2.58676e-006, -0.000662446, 0.0438773, 0.0337141, -0.00932395, 0.038049, -0.00801018, -0.0148948, -0.0120132, -0.0215495, -0.010775, -0.0171502, 0.0181827, -0.0134457, 0.0118356, -0.0033674, -0.00467605, -0.0136972, -0.0329983, -0.0191349, -0.0222234, -0.00914453},
 {0.0336669, 0.00552462, 0.0353047, 0.0215499, -0.0175308, -0.0955496, -0.0121526, -0.000162626, -0.0320783, 0.0336352, -0.0162026, 0.0336199, 0.0094495, -0.00269374, 0.0456123, -0.0323249, -0.0168608, -0.009683, 0.0269374, -0.00950032, 0.0819502, 0.030976, -0.0268676, 0.0141421, 0.0555697},
 {-0.0215165, 0.0290094, 0.0179155, -0.0168359, 0.0161464, -0.0280891, 0.00408564, 0.0128791, 0.0123401, -0.00402902, -0.00517358, 0.00471513, 0.010787, -0.0235702, 0.0260011, 0.00606091, 0.00608019, -0.0218096, -0.0276108, -0.0255915, 0.0328626, -0.0215505, -0.0149192, 0.0276108, 0.0383518},
 {0.0208307, 0.0139673, 0.0313595, -0.0249169, -0.032964, 0.039246, 0.0173867, 0.0234843, 0.0210821, -0.0256914, -0.00869584, 0.0127318, -0.00338919, -0.015489, -0.0327719, 0.0114484, 0.0289367, 0.0249553, -0.0074081, 0.010758, -0.0551893, -0.00132336, 0.00876455, 0.00673435, -0.0242083},
 {0.0148381, 0.00473212, -0.0792787, 0.00538851, 0.0114373, 0.00455277, 0.0141663, -0.00260637, 0.0305463, -0.000673453, 0.00584056, 0.0168669, -0.00403388, -0.0134687, -0.00292654, 0.00942809, -0.022217, 0.0558426, -0.0101015, -0.032322, 0.00450284, 0.00403672, -0.0393775, 0.0168359, 0.0493245},
 {-0.0067581, 0.0221574, -0.0776305, -0.0329983, 0.0175237, 0.0274882, 0.01813, -0.033019, 0.0248968, 0.0100655, -0.0209479, 0.0309875, -0.0161622, -0.0134687, -0.0168212, 0.026264, 0.0302947, 0.0417137, -0.0289577, 0.0175094, -0.0207717, 0.0276109, 0.0150512, -0.0202031, 0.0322844},
 {0.0309796, 0.00596677, -0.0809207, -0.00269157, 0.0168474, 0.0339998, 0.00470275, -0.0194291, 0.0289842, 0.0114565, -0.0292451, 0.00542844, 0.00268083, 0.0148156, -0.0185167, 0.0269374, -0.0161533, 0.0311413, -0.0141421, -0.00669255, -0.0589366, 0.0303047, 0.0227304, -0.000673436, 0.00695831},
 {-0.0215437, 0.0290255, -0.00192724, -0.0208765, -0.00067994, -0.0112689, 0.0276014, 0.0221637, -0.0111733, -0.00673125, -0.0564747, 0.0296463, -0.0148122, 0.0134687, 0.0368544, -0.010775, -0.0121337, 0.0184825, -0.00942809, -0.0155045, 0.0147692, 0.0208765, -0.0317523, 0.00808122, -0.0146767},
 {-0.0282686, -0.0194314, -0.0263105, 0.0114484, -0.0188625, -0.0160392, 0.0222432, -0.0289487, 0.0507598, 0.0141886, -0.0720529, 0.0310677, -0.00402628, 0.00942809, 0.0420984, 0.0289577, -0.00943317, 0.00349293, -0.0249171, 0.0215507, 0.0558163, -0.0188565, -0.0302011, -0.0181827, 0.0206544},
 {-0.0145233, -0.0171371, -0.0533579, 0.0336012, 0.00490848, 0.0483772, 0.0260296, -0.0102198, 0.0382115, 0.0197306, 0.125732, -0.00496268, 0.0256301, 0.0188562, -0.0646904, -0.0316514, 0.00471447, 0.00607576, 0.00270915, -0.000547831, -0.0516217, 0.01783, 0.0968812, -0.00740779, -0.0923993},
 {0.0310135, -0.0322428, -0.010224, 0.00605664, -0.0176238, -0.0221509, -0.0051485, -0.0152641, -0.0235025, -0.0268099, -0.0142742, -0.00949508, -0.00401977, -0.0121218, 0.0545739, -0.0316514, -0.0329239, 0.00441077, 0.0175093, -0.0269146, 0.0396366, 0.0302941, -0.0197156, -0.00875466, 0.0296861},
 {-0.0230622, 0.00170698, 0.0930018, 0.0222183, -0.010786, -0.0691312, 0.00395999, 0.00713391, -0.0712633, -0.0177139, 0.0681366, 0.00626862, 0.0255733, -0.00404061, 0.0690017, 0.0235702, 0.0269379, -0.0606832, 0.026264, 0.0329404, 0.123214, 0.0202216, 0.00622543, -0.0242437, -0.0330534},
 {-0.00123877, -0.00171639, -0.0364253, 0.0222241, -0.00338876, -0.0440017, -0.000631447, -0.00866586, 0.0450413, 0.000148264, -0.0881087, -0.0171894, -0.0161409, 0.00134687, 0.0702927, -0.00673435, -0.00204406, 0.0570813, 0.0175093, -0.0168155, 0.0686752, 0.0242218, -0.0950302, 0.0215499, 0.0940163},
 {0.000600447, -0.000741249, 0.0236137, 0.0303046, -0.0222097, -0.0468057, -0.0155803, -0.00757474, -0.033836, 0.0154152, -0.00907157, 0.00869379, -0.0188513, 0.0121218, 0.00942388, 0.010775, -0.0134954, -0.00511947, 0.0222234, 0.0269064, 0.063536, -0.020203, -0.0125128, -0.00606092, 0.00950984},
 {-0.0114308, 0.0242786, -0.0644502, -0.030978, 0.00808397, 0.050778, -0.00533701, 0.000778142, 0.0277546, 0.0155392, -0.0277086, 0.0142575, -0.0242432, 0.010775, -0.0266807, -0.0195296, -0.0262479, 0.0251597, 0.0141421, -0.0188356, 0.0102916, -0.0303049, -0.0402299, 0.0336718, -0.0123495},
 {0.013462, 0.00213067, 0.0196754, 0.0148156, -0.00338924, -0.0748632, 0.02219, 0.00792846, 0.012546, 0.00127801, -0.019373, 0.0228462, -0.0262525, 0.00606091, 0.0629946, 0.030978, -0.0289836, -0.0480223, 0.00202109, 0.0235109, 0.0359049, -0.0249199, -0.0388555, -0.00538748, 0.042842},
 {0.0276361, -0.0161211, -0.0143982, 0.0121219, 0.022204, -0.00528791, 0.0256363, 0.0296701, 0.00318742, 0.0201741, 0.00666424, 0.0167978, 0.0235768, -0.0134687, 0.00721169, 0.00740778, -0.0296211, -0.0265848, 0.0289577, -0.0168526, 0.028176, -0.0222236, -0.00299604, -0.0323249, 0.0175668},
 {-0.0269913, -0.0176913, 0.00822649, -0.0329983, -0.0161187, 0.0442838, -0.00618554, -0.000769328, 0.00639037, -0.0283769, 0.0320925, 0.0282211, 0.00738102, 0.0222234, -0.044181, -0.0202031, 0.0141213, 0.0228711, -0.0161624, -0.0202153, -0.0690396, -0.0323211, 0.00956462, -0.0168359, -0.0651015},
 {-0.0161507, -0.0323299, -0.00930685, 0.0134687, 0.0262538, -0.00619989, 0.00945962, -0.0167818, 0.0235319, 0.0141409, -0.0258012, 0.0323173, -0.0168353, -0.0255905, 0.03558, 0.010775, -0.0060538, 0.0563431, 0.00404061, -0.0141384, 0.0293944, -0.0114503, -0.0383891, 0.00740778, 0.0213012},
 {0.0114227, -0.00816075, -0.0505562, -0.000673707, -0.0302881, 0.0362921, 0.010723, -0.0188745, 0.0234847, 0.0174812, -0.0131697, -0.0235632, -0.00136177, 0.00875466, -0.0157267, 0.0181827, 0.00335407, 0.0433264, -0.0188562, 0.0235738, -0.0120392, 0.0114507, -0.0245425, 0.00471405, 0.0263527},
 {-0.0134708, -0.00819834, -0.0467991, 0.0269374, -0.00402745, 0.00460299, -0.0323324, 0.0236698, 0.00579689, 0.0255877, -0.000469916, 0.00203134, 0.022221, -0.0141421, -0.0101573, 0.015489, 0.0296423, 0.0351288, 0.0202031, 0.0229274, -0.0121002, -0.0175091, 0.0397755, 0.0316514, 0.0196952},
 {-0.0323211, 0.00274975, -0.0182416, -0.030978, 0.0154856, -0.0206307, -0.0114588, 0.00266126, -0.0153735, -0.0107653, -0.020518, 0.0108095, -0.0114468, 0.0208765, 0.0105869, 0.0114484, 0.0276029, 0.0109703, -0.015489, -0.0141556, 0.020298, -0.00336995, -0.0383403, 1.80376e-008, -0.00631714},
 {-0.0309567, -0.0261725, -0.0350304, -0.0148155, -0.0262678, -0.0433828, 0.0222496, 0.0296896, 0.0555766, 0.00949988, -0.0539462, 0.0109045, 0.0336718, 0.00134687, -0.000883485, 0.0215499, 0.00606048, 0.000756427, 0.00606091, -0.00739258, 0.0534721, 0.0100949, -0.0296886, 0.015489, 0.015368},
 {-0.0199311, 0.00106877, -0.0256322, 0.0073323, 0.0352251, 0.0114776, -0.0144058, -0.0103333, 0.00807438, -0.00126121, 0.128099, -0.027249, -0.0262309, 0.0296311, -0.0447201, 0.0215499, -2.76368e-005, 0.0402304, 0.0330109, 0.0142473, -0.0242363, 0.0306127, 0.0762639, -0.00942809, -0.0857791},
 {0.00407237, 0.00412568, 0.00224002, 0.000665793, 0.0261489, -0.0485501, -0.0260308, -0.0213106, -0.0247854, -0.000556908, -0.0145808, 0.0308962, -0.0201832, -0.000673436, 0.0572773, 0.0148156, 0.00143432, 0.0180504, -0.0175093, -0.0080599, 0.0469622, -0.0330031, -0.0264465, -0.0101015, 0.0181815},
 {0.0186923, -0.0251799, 0.0772409, -0.0303132, 0.0316565, -0.0493734, -0.00817174, 0.00108735, -0.0643711, -0.011656, 0.108038, -0.00784079, -0.00273168, -0.0141421, 0.0656803, -0.015489, 0.0195232, -0.0692851, -0.0141421, -0.0296846, 0.0593231, 0.00540697, 0.0229964, -0.0323249, -0.0250126},
 {-0.0147044, 0.0292044, -0.0560177, 0.0309801, -0.00474107, -0.0205704, 6.57218e-005, 0.0183927, 0.0552312, -0.00453487, -0.137108, -0.030625, -0.0228725, -0.00134687, 0.0585872, 0.010775, -7.40155e-006, 0.0477675, 0.0134687, -0.0120744, 0.0615892, 0.00265983, -0.0617778, 0.0020203, 0.099935},
 {0.00465647, 0.0214908, 0.0331655, 0.0249171, -0.0134468, -0.029573, 0.0194385, 0.00663037, 0.000239134, 0.0268964, 0.00203072, -0.00742747, 0.00336401, 0.015489, -0.0178662, 0.00471405, 0.0147915, -0.000732031, -0.030978, -0.0256024, 0.0383672, -0.0202026, -0.0302711, -0.0296311, 0.031315},
 {0.026281, 0.00813407, -0.0385251, -0.00942769, 0.0289535, -0.0236978, 0.0182293, 0.0122115, 0.00507852, 0.012166, -0.000650666, 0.00344927, 0.0121342, -0.0249171, -0.022246, -0.0134687, 0.0296423, 0.0546095, 0.00336718, -0.0249141, 0.00226887, 0.0269365, -0.0382383, -0.00134687, 0.0582644},
 {0.0269332, 0.0169393, 0.0219553, -0.0249171, 0.0255761, -0.0657056, -0.0310164, 0.0281406, 0.00710294, -0.0135466, -0.0572394, 0.00803729, 0.00205077, 0.0316514, 0.0527401, 0.0228968, 0.0323009, -0.0198643, -0.0114484, -0.0316974, 0.0702056, 0.0181799, -0.0443175, 0.0215499, 0.0669903},
 {-0.0174931, -0.0113775, 0.0173718, -0.0316514, 0.0134426, -0.030885, 0.026983, -0.00809683, 0.0300401, -0.00950016, 0.00527468, 0.00328424, 0.00204275, 0.0336718, 0.0372707, -0.0114484, -0.00269121, 0.0183141, 0.0148156, -5.64156e-005, 0.078881, -0.0303056, 0.00384226, -0.0296311, -0.00144192},
 {0.000605177, -0.014313, -0.0134896, -0.0181828, 0.0128534, 0.0692715, 0.0167157, 0.023457, -0.00113078, 0.0234738, 0.0421169, -0.0229569, 0.0269214, 0.0215499, -0.0256395, 0.00673435, 0.000651379, -0.000709219, 0.0074076, -0.0148193, -0.0628506, -0.0188446, 0.0404615, -0.0208765, -0.0450028},
 {0.000679018, 0.00941923, -0.0144894, -0.00202129, 0.00605399, 0.0075416, 0.0148538, -0.00264392, -0.0091967, -0.00203799, -0.0496886, 0.00334513, 0.00269218, 0.00740778, 0.05474, -0.0202031, -0.00941993, 0.00284689, -0.0242437, -0.00942234, 0.0552771, -0.0208769, -0.0125818, 0.0141421, 0.017375},
 {-0.0161886, -0.00211217, -0.0384014, -0.0249171, 0.0222471, 0.0217829, -0.029691, -0.0155277, -0.0117966, 0.0161386, -0.0163916, 0.020871, 0.0296288, 0.0276108, 0.00294318, -0.0235702, -0.0175179, 0.0309123, -0.0329983, 1.66802e-005, -0.0665575, 0.0242437, 0.0164024, -0.0316514, 0.00702855},
 {0.0168344, 0.00191212, -0.0286394, -0.00942809, -0.00739717, 0.0794352, -0.00808411, 0.0155891, 0.0432553, -0.0329931, 0.0394391, -0.0202039, 0.0215482, 0.0141421, -0.0199344, -0.00269374, 0.0235841, -0.00342716, 0.0242437, 0.0202365, -0.0444385, 0.0222235, 0.0526044, -0.0202031, -0.0367728},
 {0.0296409, 0.0242941, -0.0298139, -0.0276108, 0.0262598, 0.0497018, -0.0161826, 0.0315933, 0.0179509, -0.0121127, -0.0330763, -0.0316132, 0.0141449, -0.00808122, 0.0178973, 0.0188562, 0.0329924, 0.00370078, 0.026264, 0.00941381, -0.0197588, -0.0296312, -0.00692483, 0.0121218, 0.00883222},
 {0.00407627, 0.0216284, -0.0103734, -0.0208765, 0.0154825, -0.00065094, 0.01418, -0.00730466, 0.0201578, -0.00261201, -0.0883033, -0.00388595, 0.0107849, -0.0208765, 0.0124153, -0.00808122, 0.0336753, 0.0757047, 0.0289577, 0.00339085, 0.0194814, -0.0121303, -0.0311526, -0.0134687, 0.0248105},
 {0.00295975, -0.0244927, -0.0475282, 0.0288783, -0.0239751, 0.0193389, -0.0157843, -0.0191835, 0.0304871, -0.00331231, 0.105592, -0.0171212, -0.00132773, 0.0195296, 0.0150947, -0.00740817, 0.0161078, 0.0534362, -0.0161459, -0.0072971, -0.0272077, -0.0057626, 0.0352676, 0.0114484, -0.006595},
 {-0.000633863, -0.0012325, 0.0138459, -0.0282877, 0.00122213, -0.061582, 0.00562153, 0.0190735, -0.0353374, -0.0308608, 0.0267435, -0.00612308, -0.0174864, 0.0168359, 0.0298258, 0.0134687, -0.0288831, 0.0192707, 0.0336718, -0.000649172, 0.0273387, 0.0161491, 0.00649173, -0.0222234, 0.0219075},
 {0.0160129, -0.0123569, 0.0263849, 0.0228887, 0.0283101, -0.0424127, -0.0263746, 0.025299, -0.03734, 0.0125993, 0.126976, 0.0198484, -0.0175355, -0.0269374, 0.0155151, -0.00538748, 0.0242272, -0.0219538, -0.0175093, 0.0154583, 0.00693566, -0.00941542, 0.0475324, -0.0215499, -0.0817423},
 {-0.0039248, 0.012308, -0.0597485, 0.0276144, 0.0282524, -0.00341255, -0.00729849, -0.0300417, 0.0755109, -0.024723, -0.104088, 0.0299735, -0.0269119, -0.0195296, 0.0607734, 0.00875466, -0.0141238, 0.027043, 0.00673415, -0.00464675, 0.0226076, 0.0269189, -0.0400279, -0.00471405, 0.0518452},
 {0.0248714, -0.00209252, 0.00514548, 0.0249171, 0.0148439, -0.00437761, 0.0113665, 0.0167377, 0.000149571, 0.026238, 0.00282001, -0.0148208, 0.00336198, -0.0303046, 0.0167354, -0.00202031, 0.00536552, 0.0320186, -0.0235702, 0.00067698, -0.0118385, 0.0161627, -0.0042654, -0.0249171, -0.0145504},
 {0.0229112, -0.00663178, 0.0045603, 0.0269374, 0.022883, -0.0720035, 0.0256389, 0.0310312, 0.0142641, -0.0249036, -0.0440778, -0.00940571, -0.000647273, 0.0202031, -0.00211839, -0.0127953, 0.00337367, -0.0190102, -0.00606091, -0.00406989, 0.0280618, -0.0249177, -0.00786507, -0.0175093, 0.0513132},
 {0.0228873, 0.0243442, 0.0428485, -0.0195296, 0.0053715, -0.102511, -0.00679202, -0.0291492, 0.011129, -0.0169123, -0.0392455, -0.0081258, -0.00940394, 0.0336718, 0.0311273, 0.0276108, 0.0120843, -0.0418431, -0.0188562, 0.0174413, 0.0529525, 0.0289542, -0.0179722, -0.00134687, 0.0414015},
 {0.0235745, -0.0120286, 0.00632021, 0.0222234, -0.0296563, -0.0623606, 0.0269594, -0.0175907, 0.0102486, -0.00480826, 0.0066946, 0.0315536, 0.020883, 0.0134687, 0.0656319, -0.0228968, 0.00133758, -0.0190578, 0.00404065, 0.0167693, 0.0907719, 0.00335438, -0.0282117, 0.0222234, 0.0234514},
 {0.0134005, -0.00827226, -0.0307851, 0.0181827, -0.0302376, 0.0621038, 0.00794723, 0.0322154, 0.0281399, -0.0162485, 0.0908352, 0.00869646, -0.0135013, 0.00740778, -0.0653083, 0.0161624, 0.0201806, -0.023089, 0.00875466, -0.0168286, -0.037237, 0.0222338, 0.0561282, -0.0228968, -0.0481935},
 {-0.00202187, -0.011455, -0.000268194, 0.0235702, 0.00807869, -0.0276405, 0.0249439, 0.0114562, 0.0425622, 0.0013266, -0.0696848, -0.0107967, 0.0303072, 0.0181827, 0.0739903, -0.0303046, -0.0107691, 0.028874, 0.0235702, -0.0215445, 0.0575554, -0.0222243, -0.0478219, 0.0114484, 0.0610019},
 {0.0161375, -0.000766023, -0.05342, 0.0316514, -0.0053532, 0.0626534, 0.0113885, 0.0269017, -0.0019017, 0.00402351, -0.00248905, 0.00135099, 0.0215479, 0.0148156, -0.0364811, -0.0141421, 0.0161547, 0.0250966, -0.0269374, -0.0127723, -0.0453483, 0.0282848, -0.00574424, 0.00269374, 0.000280909},
 {0.012118, 0.00323131, -0.0127594, 0.0276108, 0.0323383, 0.0793612, 0.0161707, 0.0270684, 0.0249808, -0.0087191, 0.0317509, 0.0262878, -0.00675886, 0.0242437, -0.0588837, 0.0121218, -0.0195114, 0.0319766, -0.00134917, 0.0215959, -0.0587085, -0.0289577, 0.0543868, 0.0235702, -0.0671472},
 {0.00741792, 0.00880486, -0.0102449, 0.0289577, -0.00404577, 0.0152039, -0.0175357, -0.0256333, -0.00795773, 0.0289676, -0.00900579, 0.0141757, -0.0202029, -4.79509e-010, -0.0346764, 0.0181827, -0.00270492, 0.0200905, 0.00471405, -0.0309919, 0.000429835, 0.0329983, -0.0303094, 0.0195296, -0.00448189},
 {-0.0174808, -0.0295519, -0.0562162, 0.0296311, -0.0215567, -0.0438585, -0.0147712, -0.023469, 0.0548523, -0.0221416, -0.101747, -0.00659629, -0.00334322, -0.00875466, 0.00253132, 0.0168359, -0.0107679, 0.0226638, -0.0323249, 0.0229149, 0.0388077, -0.0141487, -0.0519994, -0.00808122, 0.0358677},
 {0.0170932, 0.0111975, -0.0681489, 0.00934428, 0.00907621, 0.0239761, 0.00841782, 0.0170441, 0.0337898, 0.00810652, 0.132985, -0.0164395, 0.00538285, 0.0148156, -0.0353548, -0.0296311, -0.0337548, 0.0390423, 0.0141628, 0.00349806, -0.0522675, 0.0339679, 0.0381084, 0.0175093, -0.0594041},
 {-0.00668937, 0.0304588, 0.0414552, 0.0100966, 0.016054, -0.0422238, 0.00629132, 0.0210498, 0.0173601, 0.0101997, -0.019871, -0.0242947, 0.00204687, 0.0141421, 0.0479179, 0.0114484, -0.0302368, -0.0262754, -1.74392e-007, 0.018879, 0.0370132, -0.00810159, 0.00328052, -0.0114484, 0.0100548},
 {-0.0297588, -0.0156537, 0.0306344, 0.0114307, -0.0235286, -0.0353854, 0.0274877, -0.00235847, -0.00638848, -0.00962201, 0.0963002, -0.00904882, -0.00205208, -0.00740779, 0.0232132, -0.030978, -0.0236009, 0.0157264, -0.00538726, -0.016181, 0.0541063, -0.0168338, 0.0228071, 0.00942809, -0.0274633},
 {0.0182899, 0.0324895, -0.075642, -0.00132358, -0.0155337, -0.0204563, -0.00321848, 0.0292826, 0.065051, 0.0136674, -0.091821, -0.00639186, 0.0316558, 0.0215499, 0.036449, 0.0127953, -0.0242122, 0.0666062, -0.0127953, -0.0288936, -0.00348786, 0.027594, -0.052538, 0.0235702, 0.059199},
 {0.00669895, -0.0310127, -0.0538432, 0.0282843, 0.0296577, 0.0251972, 0.0228228, 0.000633248, 0.0279204, -0.00945052, -0.0402457, 0.0121515, 0.0134723, 0.010775, -0.0315702, 0.0161624, 0.0282654, 0.00649304, 3.25648e-007, -0.0228865, -0.0133672, -0.00404157, 0.0117367, 0.0323249, -0.0115401},
 {0.0282975, 0.016976, 0.00189895, -0.0161624, -0.0283072, -0.0397701, -0.0188193, -0.0147704, 0.0225059, -0.0087584, -0.0293389, -0.0188452, 0.0181862, 0.0336718, 0.0153225, -0.00538748, -0.025592, -0.00969307, -0.0269374, -0.00947015, 0.0723449, -0.0127976, -0.0565598, -0.00875466, 0.0665599},
 {-0.0114549, 0.0263937, 0.00603298, -0.0296311, 0.0141258, -0.0867787, 0.012735, 0.028094, -0.0156396, 0.024149, -0.05088, -0.0195657, -0.0168254, 0.0323249, 0.063737, -0.030978, 0.0302673, 0.00210623, 0.010775, 0.00327326, 0.0507443, -0.0316515, -0.0553019, -0.0134687, 0.0671205},
 {-0.0154907, 0.0095424, 0.0146318, -0.000678076, 0.0201781, -0.0749144, 0.0336714, -0.0311117, -0.0173822, 0.0207737, -0.0372365, 0.0275061, 0.0329983, 0.00606091, 0.0457129, 0.00269374, 0.00132476, -0.00902325, -0.00336577, -9.64101e-005, 0.10379, 0.00402993, 0.00202804, 0.0269374, 0.0277613},
 {0.00195515, -0.013646, -0.0330828, 0.00740334, -0.00193439, 0.0331615, -0.00351494, -0.0182419, 0.0102318, 0.0160933, 0.0408201, -0.0107907, 0.00468555, 0.00134687, -0.0121609, -0.0101015, -0.0121493, 0.00961932, 0.0202031, -0.0316421, -0.0361695, 0.0208819, 0.0342559, 0.026264, -0.0390907},
 {0.0242435, -0.0316251, -0.0338038, -0.0148156, 0.0168364, -0.0417427, 0.0336908, -0.00474293, 0.0165883, 0.0296224, -0.0320265, -0.0141433, 0.0154929, 0.0235702, 0.0250576, 0.0329983, -0.0175071, -0.0181637, 0.0255905, 0.0262711, 0.0856347, 0.00200443, -0.00559125, 0.000673436, 0.0464824},
 {0.00401338, 0.0295613, -0.041981, -0.0289577, -0.0120878, 0.0539952, 0.010712, -0.0188846, 0.00656025, 0.0100826, -0.0226643, -0.0242278, 0.0269352, -0.026264, 0.00869126, 0.00942809, -0.0195375, 0.0526212, -0.0188562, 0.0101307, -0.0590822, 0.00337305, -0.0247926, -0.0222234, 0.0089335},
 {0.0249105, -0.0163298, -0.0479873, -0.0208765, -0.0316331, 0.0791815, 0.00673648, 0.0264035, 0.0352007, -0.00535708, 0.0681815, -0.0329842, 0.0114214, -0.0181827, -0.0651468, 0.0020203, 0.000707999, -0.000606455, -0.015489, 0.0249806, -0.138125, -0.0080758, 0.00348108, -0.0323249, -0.0449011},
 {0.0121296, -0.0316294, 0.00451037, 0.0215499, -0.00404717, -0.0135953, -0.0276392, 0.0269215, 0.00628436, 0.0235835, -0.0254775, -0.0289342, 0.0249166, 0.0255905, 0.000685078, 0.0276108, 0.0154815, -0.0210802, 0.0161624, 0.00267688, 0.00662935, 0.00875653, 0.0293667, -0.0242437, 0.000770243},
 {-0.022866, -0.03022, -0.0130243, -0.0107744, 0.0100906, -0.0674894, -0.00803901, 0.00283052, 0.054684, -0.0106782, -0.0587617, -0.0187354, -0.00334283, 0.0141421, 0.0288123, 0.026264, -0.0134593, 0.065956, -0.00606092, -0.0174908, 0.0107545, -0.00405538, -0.0236293, -0.0121218, 0.0157977},
 {-0.0024457, -0.0279012, 0.00180574, -0.0256787, 0.0320005, 0.0184393, -0.00308414, -0.0289405, 0.0310173, -0.0255462, 0.0846443, -0.0117073, -0.000696295, 0.0020203, -0.0321582, -0.00538783, -0.0283987, 0.0172268, 0.0208964, 0.0129397, -0.0370604, 0.00905331, 0.067577, -0.0255905, -0.0589823},
 {-0.0255427, 0.00958138, 5.6426e-005, -0.0289601, -0.00280457, -0.0407117, 0.000888549, 0.0297806, -0.00131563, -0.00460273, -0.00219831, -0.0108148, -0.00872823, -0.0316514, 0.0042979, 0.00673435, 0.00276526, -0.0356133, -0.0289577, -0.00400993, 0.0254473, 0.00132646, 0.0111177, 0.030978, -0.00999099},
 {-0.00550855, 0.00657436, -0.00961582, -0.0229001, -0.00329761, -0.0149899, 0.00591236, 0.0232589, -0.0157504, 0.0227415, 0.0182514, -0.00830553, -0.00945808, -0.0127953, 0.0367806, -0.0228968, 0.0208381, -0.0157121, -0.0161624, 0.00201697, 0.004585, -0.00202141, -0.0189673, -0.0303046, -0.00866402},
 {-0.0160572, -0.00323591, -0.0715517, 0.0303092, -0.0135129, 0.0129537, -0.0267789, -0.0218299, 0.0444004, 0.00828703, -0.0849458, -0.0124743, -0.00197759, -0.0114484, 0.0108198, 0.0161624, -0.00667881, 0.0751761, -0.00942809, 0.0256614, -0.0111873, 0.0269234, -0.0505868, 0.00740778, 0.0184429},
 {0.032305, 0.0268986, -0.050135, -0.00336387, -0.0188205, -0.0248668, -0.0229749, -0.0242431, 0.0363196, 0.033644, -0.0486536, -0.0228358, 0.0101052, 0.00606091, -0.0274703, 0.0228968, -0.00204278, 0.048382, -0.00808122, -0.0121037, 0.00160863, 0.00134224, -0.0266858, 0.0276108, 0.0326838},
 {0.0309905, -0.0193682, 0.00641954, 0.00741013, 0.0120904, -0.0462815, -0.0100828, -0.0108027, 0.0390236, -0.0323552, -0.0340896, 0.0255871, 0.0202072, -0.0329983, 0.0303596, -0.0269374, 0.0154775, 0.0196815, 0.00202101, 0.0140882, 0.0577263, 0.010101, -0.0470525, 0.000673436, 0.0250124},
 {0.0282801, 0.0196701, 0.0211234, 0.00808123, -0.018875, -0.113, 0.0329337, 0.0226795, -0.0241449, 0.0308752, -0.0618795, 0.0154354, 0.012824, -0.030978, 0.0799527, -0.00269374, -5.54469e-005, -0.0182419, -0.00201773, -0.00481922, 0.0932147, 0.00403153, -0.021193, 0.0127953, 0.0598615},
 {-0.0323303, 0.0129304, 0.061122, -0.0289577, 0.0255582, -0.10662, -0.0269528, 0.00985988, -0.0505004, 0.00121442, -0.00789624, -0.0162984, -0.0168332, -0.00202031, 0.0403624, -0.00740779, -0.0121526, -0.0628564, -0.0215499, -0.0169327, 0.125592, -0.0228969, -0.00999871, 0.0020203, -0.00305412},
 {0.0140811, 0.0119682, -0.0584828, 0.0168359, 0.0256666, 0.0184107, -0.00284386, -0.0222839, 0.0249117, 0.033599, 0.0121259, 0.0242466, -0.0229126, -0.0188562, -0.0502771, -0.00538748, -0.0303366, 0.0516626, -0.010775, 0.00203292, -0.0563823, -0.0134616, -0.0166078, 0.00673435, 0.0235514},
 {0.0107679, -0.00267504, 0.00546807, -0.0154891, 0.0282881, -0.00325042, -0.0242164, 0.0147639, 0.026103, 0.00876195, 0.00725772, 0.0235627, -0.0289576, -0.0208765, 0.00928777, -0.0202031, 0.0114511, -0.0169155, 0.0282843, 0.00675195, 0.052263, -0.0309786, 0.00930683, 0.0329983, 0.0267782},
 {-0.00271908, -0.0310545, -0.0504287, -0.0195296, -0.0161241, 0.0227317, -0.0189094, -0.0107805, 0.0175123, 0.0255701, 0.0200906, -0.0147857, -0.00069547, -0.0168359, 0.00645857, -0.0208765, -0.0330033, 0.0281905, -0.0121218, 0.0249551, -2.11127e-005, -0.0276106, -0.00252316, 0.0323249, 0.0334857},
 {-0.0188626, -0.0203872, -0.061833, 0.0148156, -0.0181567, 0.109435, 0.0282894, 0.00217333, 0.0168524, -0.0174826, 0.0638461, 0.00473796, 0.0208711, 0.00808122, -0.0622104, -0.0175093, -0.032979, 0.00815076, -0.00942809, 0.00278487, -0.134801, 0.0222237, 0.0556709, 0.00538748, -0.0188843},
 {0.0289644, 0.0336765, 0.0164972, 0.00808123, -0.0047209, -0.00643107, 0.00738519, -0.0329907, -0.0106361, 0.0208943, -0.0175521, -0.00268252, -0.013468, 0.0127953, -0.0102329, 0.00875466, -0.010106, -0.0165433, 0.0141421, 0.0222132, -0.0400094, 0.00741381, 0.0110788, -0.00538748, 0.0318765},
 {-0.00872119, 0.0108578, -0.0490473, -0.0134681, -0.0148247, -0.024913, -0.0140963, -0.0200608, 0.0562616, -0.0261691, -0.0550377, -0.0214397, 0.0323249, -0.0161624, -0.00620954, -0.026264, 0.00944094, 0.032107, 0.0276108, 0.0134932, 0.0314364, 0.0336718, -0.0433866, 0.00404061, 0.0580028},
 {-0.00984762, 0.00238889, -0.00628206, -0.0256765, -0.0211415, 0.0332956, 0.02519, -0.0188665, 0.0030419, 0.017577, 0.13258, 0.0085502, -0.0108217, 0.0181827, -0.0318033, -0.0208765, 0.0220878, -0.00370988, -0.000650458, -0.00183339, -0.0257097, -0.0111482, 0.0791793, -0.00808122, -0.0538695},
 {0.031705, 0.00691207, -0.00303111, 0.0336718, 0.00258948, -0.0672265, -0.00516829, -0.030133, -0.0210467, -0.0227779, 0.00558579, 0.00066254, -0.0114227, 0.0228968, -8.06102e-005, 0.0316514, -0.00666878, 0.0155648, -0.00740788, -0.0053541, 0.00909251, -0.0289743, -0.0272541, 0.0141421, 0.0114216},
 {-0.0297229, -0.016971, 0.0146089, 0.0255892, 0.0236573, -0.0466838, -0.00687255, 0.0327375, 0.0179748, -0.0075476, -0.0181392, -0.0317967, -0.00542481, 0.0242437, 0.0208746, -0.0255905, 0.0114009, -0.00269354, 0.0228968, -0.0127793, 0.0474214, 0.0222229, 0.0170299, -0.0121218, 0.00246193},
 {0.0277165, -0.0247811, -0.0712614, -0.0316514, -0.000724205, 0.0195847, -0.0153234, 0.0327449, 0.0712846, -0.0226985, -0.0282027, -0.0279813, -0.00804111, -0.0208765, -0.0374778, -0.0168359, 0.0142057, 0.0811378, -0.00269589, -0.0140666, -0.0412961, 0.022886, -0.0495738, -0.00808122, 0.0362979},
 {-1.62669e-005, -0.0175529, -0.0399414, -0.0296311, -0.00128905, -0.0167499, 0.0248422, 0.0235959, 0.0223002, -0.0101198, -0.0858309, 0.0142317, -0.00673824, 0.00538748, 0.00798784, 0.00471405, 0.0242272, 0.0821551, -0.0181827, -0.0107483, -0.013424, 0.0228943, -0.0482942, 0.0336718, 0.0458837},
 {0.0276233, -0.00926605, -0.0235845, 0.0202031, 0.0161305, -0.10706, 0.0242415, -0.0027818, -0.0236484, -0.00879851, -0.0502344, -0.00675474, 0.0336721, -0.0323249, 0.042235, 0.030978, -0.02022, 0.0262609, -0.0148156, 0.00397465, 0.103794, -0.0107754, -0.0456613, -0.0329983, 0.0276121},
 {0.0262591, 0.0331059, 0.0250017, 0.0134687, -0.0303206, -0.0541405, -0.00411106, 0.00519633, 0.00155922, -0.0203123, -0.0233457, -2.85867e-005, 0.0276188, -0.00202031, 0.0937091, 0.0121218, -0.0020745, -0.0328207, 0.0208765, 0.0201213, 0.106689, -0.0282852, -0.0496618, -0.00740779, 0.0237667},
 {0.0336657, 0.0142977, 0.0387048, -0.026264, 0.00399532, -0.114168, 0.0107456, -0.0211455, -0.0598254, -0.00821119, 0.0044895, -0.0270682, -0.0309742, -0.00336718, 0.0767953, -0.00538748, -0.0323535, -0.0444329, -0.0148156, -0.00550342, 0.0838168, 0.0316514, -0.0242361, 0.0228968, 0.051781},
 {-0.006121, -0.0122821, -0.0145689, 0.0033663, -0.00933946, -0.00490062, -0.00284046, -0.0270043, -1.0061e-005, -0.011517, -0.0248428, -0.0127867, -0.0208954, -0.0114484, -0.0431068, 0.0276108, 0.00804431, 0.0171945, -0.00942809, -0.021534, -0.0277516, -0.0188539, -0.021732, -0.0296311, -0.00861989},
 {-0.0188582, -0.00199932, 0.0230742, 0.026264, 0.0303099, -0.0388079, -0.0147913, -0.00946254, 0.01469, 0.0175207, -0.032834, 0.000668876, -0.0047172, 0.00336717, -0.0115242, 0.0276108, -0.0168328, 0.0187985, 0.010775, 0.00339426, 0.0290827, -0.0181828, -0.00618354, 0.0121218, -0.0203653},
 {-0.0262836, 0.0153948, -0.0378135, 0.0168359, 0.0189003, 0.0778649, 0.0140891, -0.00536735, 0.0392641, -0.00540825, -0.0324692, 0.0128357, 0.0107579, -0.0188562, -0.0230167, -0.0148156, -0.0235734, 0.0544246, -0.00808122, -0.0113995, -0.0455876, 0.00875717, 0.0162059, -0.00942809, 0.0348961},
 {-0.00943521, -0.012962, -0.0429991, -0.0195296, -0.0141102, 0.116132, -0.0168211, -0.00996515, 0.00974586, -0.0309494, 0.0272639, -0.0181602, 0.0222191, 0.00740778, -0.0518128, -0.0127953, 0.0101322, 0.00931539, -0.0181827, 0.0249832, -0.123954, -0.00739981, 0.0168481, 0.010775, -0.0525386},
 {0.00875897, 0.00942381, 0.0178165, -0.0202031, 0.00133891, -0.00771537, -0.0229146, 0.0181838, 0.0133756, -0.018856, 0.03238, 0.0255933, -0.0121194, -0.00673435, -0.00109162, 0.0020203, -0.012798, 0.0142176, 0.0215499, -0.00473604, -0.0186692, -0.0329983, -0.0349005, -0.0101015, -0.0281761},
 {0.020909, 0.0276699, -0.0367562, 0.0336718, 0.0127891, 0.00472244, -0.0100553, 0.00417463, 0.0169912, -0.0032778, -0.0752386, -0.0329192, -0.020202, -0.0208765, 0.0188963, -0.00134687, 0.0208896, 0.0510071, -0.000673807, 0.0235883, 0.00596354, -0.011451, -0.0351439, 0.026264, 0.0468485},
 {0.0305831, -0.0144289, 0.00148815, -0.0182614, -0.000223052, 0.0278066, -0.0192525, -0.00463963, 0.00989757, -0.00459743, 0.0831882, -0.000746431, -0.0135277, 0.0316514, -0.0336866, -0.0121219, -0.0311249, 0.00757519, 0.0222423, -0.00716872, -0.0124634, 0.0144345, 0.0529538, -0.00404061, -0.0119289},
 {0.0162246, -0.0220465, 0.0151767, 0.0249162, 0.0113533, -0.0425112, -0.0038296, 0.0156605, -0.0302398, 0.03312, -0.00375303, -0.00807064, 0.00810589, -0.0269374, 0.000646826, 0.0249171, -0.0147552, -0.00828723, 0.00269412, -0.0174801, 0.0225391, 0.028267, 0.0212787, 0.0336718, 0.0368182},
 {-0.0175901, -0.0263934, 0.00429715, 0.019529, 0.0297366, -0.00992398, 0.00255383, -0.0103416, 0.0161373, -0.00146087, -0.0457335, -0.0182677, -0.00273307, 0.0168359, 0.0411569, -0.0181827, 0.0188091, -0.0066039, 0.0228968, 0.0114716, 0.0107145, 0.0303037, -0.0158374, -0.0168359, 0.0194433},
 {0.0270418, 0.0331431, -0.0368775, 0.0114606, 0.00735669, 0.0664276, 0.0163058, 0.0111823, 0.0300905, -0.0287827, -0.0630579, 0.0319038, -0.0208471, 0.00875466, -0.0285066, -0.015489, -0.0228413, 0.0866977, -0.0175093, 0.0135246, -0.0591596, -0.0208856, -0.0181747, 0.015489, 0.0399036},
 {0.00806537, -0.0229467, -0.0753531, -0.0134679, 0.0303606, -0.00395877, 0.0308985, -0.012781, 0.0481483, -0.0330243, -0.0910483, 0.0303967, 0.00807855, -0.030978, 0.0264002, 0.00673435, -0.000698723, 0.0217057, -0.0242437, 0.013492, -0.00630376, 0.00403318, -0.0262837, 0.00134687, 0.0119007},
 {0.018862, 0.0183027, 0.0160837, -0.0181827, -0.0316819, -0.0969432, 0.0316481, -0.00012909, -0.0260047, -0.0249684, -0.0867102, -0.0236093, 0.0148318, -0.0276108, 0.0540035, 0.0215499, 0.00468886, 0.0222888, 3.17937e-006, -0.00275825, 0.13457, 0.0114487, -0.0461226, -0.000673436, 0.0825182},
 {-0.0121267, -0.0301523, 0.0422134, 0.0303046, 0.000644791, -0.095955, 0.00128641, 0.0213357, 0.0267665, -0.00278369, -0.0331907, -0.00270999, 0.0235806, -0.010775, 0.0391765, 0.0336718, 0.0120689, 0.0231844, -0.0269374, -0.00548924, 0.0894789, 0.0336718, -0.00259705, 0.0168359, 0.0750311},
 {0.00672752, 0.00893701, 0.0529893, -0.0134693, 0.0066822, -0.133679, 0.012108, 0.011161, -0.0244261, -0.0149248, 0.00529145, -0.000115016, 0.0316515, -0.00471405, 0.0724564, 0.0316514, -0.0215902, -0.0641671, 0.0127953, -0.000787591, 0.149906, -0.0107791, -0.00205595, 0.026264, 0.0581045},
 {0.0127414, 0.0126437, -0.0548975, -0.0303046, -0.00326655, -0.00187293, 0.00727249, -0.0256439, 0.0129259, 0.0012812, -0.0435917, -0.00468431, -0.0128238, -0.0161624, -0.0286072, 0.00134687, -0.0195631, 0.0672335, -0.0148156, 0.0208946, -0.0439994, 0.0222247, -0.0196472, -0.0235702, -0.0193156},
 {-0.0303004, 0.0289827, -0.0229152, -0.00740809, -0.029621, -0.00696511, 0.011478, 0.0148208, 0.0210266, 0.0101209, -0.0137058, -0.0154742, 0.0249152, -0.00942809, -0.00339169, 0.00134687, -0.0168324, 0.0194421, 0.0289577, 0.00676214, 0.020691, 0.0316514, -0.0210569, -0.0282843, 0.0381129},
 {-0.0148384, -0.019647, -0.0657505, -0.0148155, -0.00802577, 0.0183082, 0.0228458, -0.0309528, 0.0168055, 0.0228844, -0.00794822, -0.00938732, -0.0188649, 0.0188562, -0.0134389, 0.0208765, -0.0101027, 0.00218767, -0.0134687, 0.00274924, -0.0599985, -0.0276109, -0.0132519, -0.000673436, -0.0100709},
 {-0.00539135, 0.0139842, -0.0631047, 0.00942809, -0.0208368, 0.0597985, 0.0235842, -0.026788, 0.0444418, -0.00534634, 0.0639373, -0.0275761, 0.00737689, -0.000673436, -0.0343417, 0.0195296, -0.0323054, 0.0483897, -0.0296311, -0.0322773, -0.0574886, 0.0154906, -0.0007947, -0.0121218, -0.00518051},
 {0.014142, -0.0161622, 0.0163114, -0.0316514, -0.0148233, -0.00145, 0.0262476, 0.0020184, 0.0366605, 0.0269382, 0.0340382, 0.0329882, 0.00135216, -0.0208765, 0.0168314, 0.00538748, -0.020205, 0.018051, -0.0228968, 0.0127759, 0.0206173, -0.0262639, 0.00676149, -0.0161624, 0.0322883},
 {-0.00669977, 0.0229576, -0.0360625, 0.00673764, -0.0208816, 0.000710928, 0.0121633, -0.0308436, 0.0287803, -0.00733565, -0.046498, 0.0296949, 0.0222241, 0.0181827, 0.011967, -0.00740779, 0.00540302, 0.034823, 0.00336718, 0.0195439, 0.0190432, 0.0127933, -0.037536, 0.0161624, 0.0539007},
 {0.00366611, 0.00242007, -0.0109952, -0.00276337, -0.0298259, 0.0405444, -0.0266185, -0.000497841, -0.0171809, -0.0193323, 0.0119657, -0.0127548, 0.0187938, -0.0188562, -0.0265432, 0.00875464, 0.0241008, -0.0257831, -0.00738685, -0.0131888, -0.0348458, 0.0279002, 0.0614486, 0.0134687, -0.0383632},
 {0.00276442, -0.0240299, 0.0220195, 0.0242431, 0.0228042, -0.0375104, 0.0298413, 0.0338389, -0.00194485, -0.0288336, -0.0168418, -0.00940691, -0.02018, 0.0148156, 0.034275, 0.0336718, -0.0275561, -0.0125112, -0.0235702, -0.0235439, 0.0172691, -0.0283009, -0.0325778, -0.0148156, 0.0478916},
 {-0.0195943, 0.0335825, 0.0193603, 0.0148141, 0.0250276, -0.00768411, 0.00188871, -0.021764, -0.00782476, 0.026176, -0.0152844, 0.026908, 0.0262313, -0.0235702, 0.0479076, 0.0127953, -0.00208023, 0.0188213, -0.00808122, -0.0026675, 0.0507097, 0.0323249, -0.0399241, -0.00134687, 0.0158605},
 {-0.00796596, -0.00384811, -0.0931034, 0.0141537, -6.76155e-005, 0.0351108, -0.00659821, 0.0023925, 0.0326923, -0.0193828, -0.0542757, 0.0184292, 0.0283158, -0.0161624, -0.0330434, 0.0336718, -0.0221754, 0.0717176, 0.00471382, 0.0188887, -0.0311238, -0.00877213, -0.0515609, 0.0316514, -0.00588339},
 {-0.0114576, 0.00603967, -0.0391704, -0.00336011, -0.0302457, -0.00587697, -0.0149024, 1.71852e-005, 0.0332348, 0.012775, -0.0484805, -0.0322195, 0.0080799, 0.00404061, 0.00701981, -0.0148156, -0.0242649, 0.0648673, 0.0208765, -0.0208544, -0.019414, 0.026935, -0.0615745, -0.00538748, 0.0240801},
 {0.0316493, -0.01203, 0.0126154, -0.0121217, -0.00946082, -0.0795164, 0.0222213, 0.0221015, -0.00763319, -0.00342304, -0.0618329, 0.00533113, -0.0323247, 0.0127953, 0.0558036, 0.0161624, 0.0302898, -0.028161, -0.015489, 0.02286, 0.0796612, 0.0222235, -0.0632092, -0.00875466, 0.0291801},
 {0.00202112, -0.0247831, -0.00357275, -0.00269244, 0.0316362, -0.117706, 0.0161041, 0.0058507, -0.0338891, 0.0188004, -0.044124, -0.0255975, 0.0215553, 0.000673436, 0.081109, 0.0208765, 0.00263584, -0.0202997, 0.00673439, -0.0222911, 0.126107, -0.0208769, -0.0558592, 0.0188562, 0.0693391},
 {0.0107682, 0.00217584, 0.0345816, 0.0148153, 0.0181423, -0.0856422, 0.0168331, -0.00497044, -0.045846, -0.0270177, 0.00139091, 0.00864798, -0.000650573, -0.00471405, 0.084709, 0.0289577, -0.00879757, -0.0622474, -0.0215499, -0.0135552, 0.107576, 0.0215497, -0.0293022, -0.0289577, 0.0408022},
 {0.000621094, -0.00151605, -0.0393322, -0.00673322, -0.0295312, 0.0457779, 0.0126598, -0.0236006, 0.00189479, -0.0222814, 0.0082652, 0.0121645, -0.00272424, 0.0121218, -0.0241132, 0.00942809, -0.0330266, 0.0537327, -0.0033677, 0.0336949, -0.0417716, 0.0208792, -0.0313491, -0.0168359, 0.00890874},
 {0.024925, 0.0168471, 0.0137632, 0.0242437, -0.0228848, -0.0179235, 0.0175419, -0.0127809, 0.0194362, -0.0255666, -0.0182743, 0.0141577, 0.00875307, 0.0282843, -0.00299489, 0.00808122, -0.0249147, 0.0284733, 0.0181827, -0.0329882, 0.0301618, 0.0148124, 0.0180753, -0.000673436, -0.00354138},
 {0.0329826, 0.000534479, -0.0273917, -0.0141421, -0.0026254, 0.0258675, -0.00746178, 0.00744063, 0.0419546, 0.0188554, 0.026912, 0.0310192, -0.0303105, -0.0242437, -0.0337676, -0.0161624, -0.0303065, 0.0590967, -0.0188562, -0.000620003, -0.0200864, 0.0235702, -0.0252067, 0.0282843, -0.000716109},
 {-0.0114474, -0.0203303, -0.043223, 0.0114484, -0.0114062, 0.074893, -0.0100851, -0.0119595, 0.0145822, 0.0303496, -0.00251219, -0.0255474, -0.0235743, -0.00471405, -0.0377292, -0.0101015, -0.00131521, 0.0146121, -0.030978, -0.00531222, -0.0995795, -0.0255906, 0.0499826, -0.00808122, -0.0551241},
 {-0.0229009, 0.00939486, -0.0263222, -0.0215499, 0.0336659, 0.00756041, -0.00405642, -0.00742133, 0.0206324, 0.00337742, 0.0447033, -0.0249368, -0.0249168, -0.0181827, -0.0105313, 0.0168359, 0.0282828, -0.028033, -0.0208765, 0.00132897, 0.0127817, -0.0175093, 0.010913, -0.0255905, -0.0225484},
 {0.0269645, -0.0322716, -0.0414081, 0.0255905, -0.0141504, -0.0131607, -0.0188144, 0.0256931, 0.0269957, -0.014762, 0.00357507, 0.0189111, -0.0235699, -0.00202031, 0.0184167, 0.0222234, -0.012109, 0.00848815, -0.0202031, 0.0134815, 0.000460012, 0.00875354, -0.0423117, 0.00740778, 0.0165475},
 {-0.0313352, 0.00437378, -0.00121243, 0.0208131, -0.00286962, 0.0111557, -0.0110906, -0.0124851, -0.0363262, -0.00172953, 3.57874e-005, -0.00730277, 0.0262006, -0.0161624, 0.0156387, -0.0303046, 0.00122528, 0.00977786, -0.0127776, -0.0259515, -0.0270211, 0.00634966, 0.0546622, 0.00134677, -0.0261578},
 {-0.0127213, -0.0179973, 0.0176539, -0.0282846, 0.0315748, -0.0491817, -0.0294148, 0.000190975, -0.0422473, -0.0261255, -0.0406075, -0.00938986, 0.0262815, 0.0242437, 0.0044469, -0.0242437, -0.0174496, 0.00412194, 0.00942806, 0.0188899, 0.0164895, -0.0181967, -0.0373056, -0.0134687, 0.0229267},
 {-0.0148591, -0.0162548, -0.055476, -0.000670194, 0.0176311, -0.0425819, 0.00527295, -0.0244129, 0.0510728, -0.0222829, -0.0238804, -0.0295976, 0.00130879, -0.0282843, 0.00111831, -0.030978, -0.00140131, 0.0237313, 0.00404062, 0.0236084, 0.0234064, 0.0303043, -0.0311187, 0.0276108, 0.03072},
 {-0.00122358, -0.0294444, -0.08544, 0.0195318, 0.00599027, 0.0627204, -0.00190468, 0.033975, 0.0329547, 0.029088, -0.0451155, -0.0273965, 0.00207215, -0.00538748, -0.000907339, 0.0181827, -0.0167969, 0.0548228, -0.0276108, -0.00200411, -0.0431664, -0.0114617, -0.00499054, -0.0148156, 0.00180277},
 {-0.00538541, 0.0201637, -0.0726451, -0.0329983, -0.00801473, -0.0145052, 0.000576203, 0.00337821, 0.0483244, 0.0322933, -0.0708676, 0.0203223, -0.00202616, -0.00673435, -0.012776, 0.0215499, 0.0329793, 0.085545, -0.0188562, 0.0323383, 0.01667, -0.0242442, -0.0616843, -0.0134687, 0.0667835},
 {0.00133102, -0.0221678, 0.058995, -0.00741033, 0.0262359, -0.0411776, 0.0148046, -0.0189723, 0.00306198, 0.0228427, -0.0386286, 0.0335957, 0.00472006, -0.0269374, 0.0688042, 0.0127953, 0.00671839, 0.0122576, 0.0235702, -0.0141744, 0.108029, -0.0114452, -0.0171922, 0.00606091, 0.0419972},
 {0.00943045, -0.024116, -0.0127004, 0.0249171, 0.00738408, -0.0681728, -5.97913e-005, -0.0183795, 0.0136046, 0.0228388, -0.0473954, 0.0114505, -0.0289521, -0.00202031, 0.0838786, -0.0276108, -0.00207643, 0.0186253, -0.0195296, 0.0113761, 0.0992005, 0.0195289, -0.054969, -0.00740779, 0.0777893},
 {0.00672186, 0.0122651, 0.0762311, -0.0127954, -0.0188978, -0.0840126, 0.0276185, 0.0293916, -0.0410099, -0.0270028, -0.0808478, -0.00616347, -0.0175058, -0.0181827, 0.0862703, 0.000673436, -0.0161937, -0.0318145, 0.0222234, 0.0133921, 0.120884, -0.0323249, -0.0265566, -0.0296311, 0.0265799},
 {0.025547, 0.0092741, -0.026297, 0.0114498, 0.0196301, 0.0154506, -0.0270744, 0.0248561, 0.00983794, -0.0195946, -0.0364897, -0.0289047, -0.00474262, 0.00808122, 0.0132353, -0.00740779, -0.021586, 0.073241, -0.0269374, 0.0336943, 0.0138752, 0.0309797, -0.0209954, 0.0020203, 0.0279522},
 {-0.00604421, -0.0309269, 0.0120876, 0.00404152, 0.00203383, -0.0194046, -0.0026637, 0.00875387, 0.0327917, 0.000697973, -0.00917105, 0.0108055, -0.0296315, -0.0148156, 0.015904, -0.0148156, -0.0309767, 0.0156216, 0.010775, 0.0175223, 0.027084, 0.0215495, -0.0515706, -0.0228968, 0.0333715},
 {0.0073913, -0.0223293, -0.0201922, 0.0188562, -0.0107145, 0.0165564, 0.0235082, -0.0309417, 0.0290052, 0.0181754, -0.00352223, -0.0275666, -0.00944405, -0.0316514, -0.0284773, -0.00538748, 0.0249144, 0.0629837, -0.0195296, -0.0235289, -0.0341174, 0.00538829, -0.0379878, -0.0303046, 0.0449507},
 {0.0282892, -0.029065, -0.0509482, -0.0222234, 0.0229305, 0.0484782, -0.0255805, 0.0183526, -0.00456667, 0.0108288, -0.00992331, 0.0330446, -0.0208819, -0.0202031, -0.0156683, -0.0168359, 0.012144, 0.0286518, -0.0101015, 0.0310342, -0.0442826, 0.0175091, 0.0417762, 0.0255905, -0.00282963},
 {0.00874609, -0.00676419, -0.0372868, 0.00740755, 0.0222143, 0.0245102, 0.030966, -0.0181807, -0.00531989, -0.000670355, 0.00966979, -0.0202268, -0.00740404, 0.0114484, 0.0228888, 0.000673436, 0.00740504, 0.000216735, 0.0296311, -0.000689531, -0.0288872, -0.0208765, 0.014075, -0.0249171, 0.00725439},
 {-0.0201759, -0.0147474, -0.000896691, -0.0235702, -0.00472823, -0.00330782, 4.19587e-005, -0.0140488, 0.0255113, 0.0188864, -0.033294, -0.0161131, -0.028957, 0.010775, 0.0282587, 0.00269374, -0.0296226, 0.000955409, 0.00269373, 0.0107801, 0.00347906, -0.0148163, 0.00800085, -0.0121218, 0.031758},
 {0.0212031, -0.00505637, 0.00102921, 0.0214928, 0.011942, 0.00285761, -0.00428446, -0.0204205, -0.0253475, 0.00575679, 0.0470863, -0.0146585, 0.0322631, 0.0329983, 0.0159294, -0.0148156, -0.0176023, -0.00953719, 0.0134844, 0.020547, -0.00934833, -0.00106091, -0.0065394, 0.010775, 0.00903159},
 {-0.0174314, 0.00422383, 0.0435147, -0.0282844, -0.0270213, -0.0368532, 0.0285064, -0.0253778, -0.016231, -0.00322529, 0.00806948, 0.0269891, -0.029612, 0.00471405, -0.000974333, -0.0215499, 0.00478243, -0.0145757, 0.00740709, 0.0209116, 0.032617, 0.0262511, 0.00385847, 0.0121218, 0.0281534},
 {0.0161378, -0.00414396, -0.0317436, -0.0114458, 0.0183078, -0.0179467, 0.0329051, -0.00951996, 0.00299897, 0.00532986, -0.0275526, 0.0115263, 0.00804308, 0.0282843, 0.00590499, -0.0134687, 0.0242066, 0.0282293, 0.0282843, 0.029681, 0.059004, 0.0262636, -0.00595099, 0.00538748, 0.047031},
 {-0.0147063, -0.0260739, -0.0783158, 0.0276123, -0.00546405, 0.0537507, 0.0115628, 0.0171027, 0.0800709, -0.000566531, -0.0408, 0.0291371, -0.0221935, 0.00606091, -0.0374632, 0.00673435, -0.00467539, 0.0418973, 0.00942809, -0.00066926, -0.0155317, 0.000658392, 0.0175643, 0.0316514, 0.0322209},
 {-0.0276107, 0.0248672, -0.0802159, -0.030978, -0.0174495, -0.0160928, -0.00547116, -0.00267354, 0.0440593, 0.0302649, -0.0859481, 0.0297482, 0.00335913, 0.0303046, -0.0349469, -0.00471405, -0.0168581, 0.0731266, 0.0215499, -0.00401267, -0.0301203, -0.0323249, -0.0628118, -0.0175093, 0.0276983},
 {0.00805648, -0.0100793, 0.00360281, -0.0296311, -0.0330194, -0.0568987, 0.00470396, -0.0088675, -0.0507919, -0.021587, -0.00619981, 0.01877, 0.0289584, -0.026264, 0.0709119, -0.0276108, 0.0175045, 0.000358474, 0.0134687, 0.0282677, 0.0545473, -0.00942491, -0.0455436, -0.00673435, 0.0317221},
 {0.0134684, 0.0162624, -0.0144644, -0.014815, 0.030964, -0.0839336, 0.0309348, -0.0318139, -0.0101314, -0.0283321, -0.0823804, 0.0101169, -0.000644943, -0.0276108, 0.0807536, -0.0276108, 0.027573, 0.0146974, -0.0013446, -0.0121795, 0.105949, 0.0316514, -0.0703532, 0.0121218, 0.0318001},
 {0.0275988, 0.012243, 0.032339, -0.0255905, 0.0228615, -0.102171, -0.00673091, -0.0156874, -0.0441491, -0.0135131, -0.0547258, -0.0149068, -0.00604161, 0.0249171, 0.0783339, -0.00134687, 0.00265801, -0.0291852, -0.026264, -0.0296865, 0.0919199, 0.0148125, -0.0138153, -0.00471405, 0.0268586},
 {-0.0047587, -0.0196757, -0.0530417, 0.0215499, -0.0207783, 0.0299496, 0.00120288, 0.00195772, 0.0409907, 0.0107071, -0.0191462, -0.0127478, 0.0013189, -0.0316514, -0.0011406, 0.026264, -0.00139304, 0.0554807, 0.0276108, -0.0201823, -0.0254146, 0.0296312, -0.0112739, 0.00471405, 0.0483456},
 {0.0296471, 0.0337112, 0.00437268, 3.57232e-006, 0.0161793, -0.0240246, -0.0107542, -0.00337838, 0.00152931, 0.0249352, -0.0430741, 0.0101286, -0.0329984, -0.0114484, -0.00543377, -0.00269374, 0.00269472, -0.0334511, 0.030978, -0.00133141, -0.00437941, -0.0202034, -0.024326, -0.00875466, -0.000490749},
 {-0.00338422, 0.0221014, -0.00112948, 0.0175093, -0.00194618, 0.0334457, -0.000741426, 0.0107845, 0.028669, 0.0127848, -0.0186605, 0.0135047, 0.022214, -0.0242437, -0.00585033, -0.00606092, 0.0114466, 0.0111039, 0.0276108, -0.0188157, -0.053128, 0.0188564, 0.0340148, -0.0289577, 0.00580857},
 {5.50266e-007, -0.0196339, -0.00931503, -0.0107749, 0.0114824, 0.0651848, 0.00539391, -0.0187212, 0.0147201, -0.032304, 0.0537082, -0.0221927, 0.00940984, -0.00740779, -0.0310312, 0.0323249, -0.0100818, 0.0364568, 0.0336718, 0.0141969, -0.033101, -0.0228967, 0.0382178, 0.010775, -0.0418009},
 {0.0168256, 0.0195049, -0.0037986, -0.0329983, -0.000687795, 0.0245826, 0.0060489, 0.00536101, 0.00565448, 0.00605535, 0.0344086, -0.0215845, 0.010776, -0.0289577, -0.0136392, -0.0249171, -0.030307, -0.0392137, 0.0323249, -0.00876409, 2.66505e-005, -0.0222233, 0.0287344, -0.0289577, -0.0257326},
 {-0.0228733, 0.0162281, 0.0123391, 0.0195296, -0.00877344, -0.0281603, -0.0275766, 0.026322, 0.0237162, -0.0188325, -0.0392461, -0.0174851, -0.0249166, 0.0249171, 0.025799, 0.0114484, -0.00470748, 0.011248, 0.00606091, 0.0181804, 0.0223255, -0.00202256, 0.0156079, 0.00269374, -0.0269955},
 {-0.00907866, 0.0285987, -0.00686347, 0.0309264, -0.023082, -0.0122736, 0.021355, -0.0236847, -0.0200333, -0.0332122, 0.0576547, -0.00720224, 0.00937187, 0.0114484, 0.0110006, -0.0121218, 0.00936702, -0.00989101, 0.0235824, 0.0104531, -0.036357, 0.0110598, 0.00339029, 0.0235702, -0.00441773},
 {-0.0315752, -0.0254154, 0.0230687, -0.0282842, -0.0283723, -0.030928, 0.0251476, -0.00380666, -0.0210431, -0.0247691, -0.0167844, 0.0189156, 2.5921e-005, -0.0289577, -0.0206573, -0.00942809, -0.00194639, -0.00711658, 0.0181827, -0.0255615, -0.00758763, 0.0275989, 0.00604535, 0.0323249, -0.015175},
 {-0.0282949, 0.0227889, -0.0661067, 0.0188563, 0.0304242, 5.9667e-005, 0.00396488, 0.012762, 0.0265084, 0.0228646, -0.0867071, -0.0221136, -0.031007, -0.000673436, -0.0146421, -0.00538748, 0.00737394, 0.0533075, -0.0175093, 0.0269898, 0.0135198, -0.0175085, -0.00946005, 0.0195296, 0.0320023},
 {-0.0308762, -0.00787283, -0.0330828, 0.00943394, 0.0187875, 0.00691265, -0.0308827, -0.0240199, 0.0376916, -0.023503, 0.00925324, 0.0331514, -0.0309513, 0.0329983, -0.038098, 0.0276108, 0.0128199, 0.0654496, 0.0289577, -0.000679733, -0.0692261, 0.0235681, -0.018596, -0.015489, 0.031547},
 {-0.00942419, -0.0283382, -0.0604066, 0.014817, -0.0295705, 0.000869193, -0.0196061, -0.00268126, 0.0670841, 0.00670833, -0.0252205, -0.0045833, -0.0276155, 0.0188562, 0.012146, -0.010775, -0.0296529, 0.0840476, 0.0276108, -0.0255662, -0.0186536, -0.02155, -0.0646949, 0.0134687, 0.0332305},
 {-0.000712703, -0.0155058, 0.0415189, 0.00538372, 0.00940647, -0.0462274, 0.0276138, 0.0126687, -0.0438494, 0.0249057, -0.0458318, -0.000111849, -0.00673652, -0.0242437, 0.0483543, 0.00606091, -0.0195306, -0.0360926, -0.0228968, 0.0174959, 0.0703791, 0.0181829, 0.0193977, -0.0134687, 0.0116612},
 {-0.0262681, 0.0189251, 0.00619252, 0.0175093, -0.00943849, -0.044392, -0.00609706, -0.000812723, 0.00133104, 0.0275717, -0.072873, 0.0121398, -0.00806831, -0.0175093, 0.0542042, -0.030978, 0.0302744, 0.0383745, -0.0101015, 0.00197614, 0.0860774, -0.00539829, -0.0547213, -0.0323249, 0.0541405},
 {-0.0303198, 0.0196055, 0.0915442, -0.010775, 0.00737157, -0.104332, -0.0154812, -0.0163391, -0.0160024, 0.0269173, -0.064146, -0.00952787, -0.00133516, -0.0202031, 0.0880784, -0.0235702, -0.0141583, -0.0726191, -0.0006715, -0.0155355, 0.0923767, -0.0148166, -0.0473365, 0.0114484, 0.0362616},
 {0.0107334, 0.0254565, -0.0215007, 0.0181828, 0.000783999, 0.00308693, 0.00255382, -0.0135351, 0.00586859, -0.00409345, -0.0784164, 0.0148651, -0.025612, 0.0195296, 0.00998604, 0.026264, 0.0127574, 0.00495054, 0.00740774, 0.0128219, 0.0161652, 0.0114511, -0.0152308, -0.0208765, 0.0472512},
 {-0.0323086, 0.024296, -0.00988408, -0.00201771, -0.0242345, 0.0106747, 0.0269555, 0.0303132, -0.0292695, -0.0201864, -0.0533842, -0.0147811, 0.0262636, 0.00808122, 0.0473701, 0.0020203, -0.00403672, 0.0237886, -0.00134666, 0.0107837, 0.0093965, 0.0235698, -0.0345775, 0.00269374, 0.0469423},
 {-0.0262746, 0.032221, -0.00920586, -0.0296311, -0.0248618, 0.032373, 0.00465219, -0.0127786, 0.0194925, -0.0101156, -0.042843, 0.0148604, -0.00742926, 0.00471405, -0.00798332, -0.00875466, 0.0134641, 0.0173471, 0.0249171, 0.0155276, -0.0611535, 0.00202229, 0.00928202, 0.0208765, -0.0104389},
 {0.0208816, -0.0276963, 0.0125734, -0.00808122, 0.0121562, 0.0521624, -0.0249176, -0.0120051, 0.0369263, 0.0296486, 0.0422682, -0.0060244, 0.0255878, 0.026264, -0.0335407, 0.00673435, 0.00675331, 0.00427489, -0.0127953, 0.0182193, -0.0784311, -0.00740216, 0.0514379, 0.00740778, -0.0102993},
 {0.00739151, 0.0302669, -0.017744, -0.00808122, 0.00268432, 0.0221412, -0.00675104, -0.0148422, -0.0167774, 0.0316458, -0.0109004, 0.0127659, 0.0316514, 0.0175093, -0.0225878, 0.0228968, 0.0282801, -0.00020561, -0.00202031, -0.0107806, 0.0100039, -0.0148151, 0.0260974, -0.0323249, -0.0364855},
 {0.0309967, 0.00206373, -0.00661006, 0.00740795, 0.0020037, 0.00962875, 0.0310072, -0.0195009, 0.0173192, 0.0262773, 0.0105703, 0.0175326, 0.00943279, -0.0249171, 0.0236371, 3.07644e-008, -0.0127905, -0.0150676, 0.030978, 0.0228938, 2.34276e-005, -0.0148156, -0.00413188, -0.0329983, 0.022726},
 {0.0259633, 0.011736, 0.0208826, 0.0147674, 0.032121, 0.050995, 0.0119703, 0.00338643, -0.0532279, -0.025066, 0.0340673, -0.00786837, -0.0155407, 0.0323249, -0.0160757, 0.0195296, 0.0255622, -0.0160458, 0.0296421, 0.00574937, 0.0142998, 0.0198182, 0.0650168, -0.026264, -0.0591269},
 {0.031059, 0.0122944, 0.0405019, 0.00336994, 0.00326017, 0.00562247, -0.031415, -0.015251, 0.0171259, -0.00253269, 0.00919998, -0.000625677, 0.0229217, -0.00336718, 0.0393681, 0.0175093, 0.0142163, -0.0182369, -0.0208765, 0.0330207, 0.038796, 0.0302924, 0.0108987, 0.0121218, -0.00626313},
 {0.0282767, 0.0268231, -0.023848, 0.00741326, -0.0248106, -0.0585077, -0.0249657, -0.0100903, 0.0523575, 0.0175039, -0.0756139, 0.0277126, -0.00137553, 0.0276108, 0.0166341, -0.0296311, 0.0235549, 0.0261719, -0.0235702, 0.0101576, -0.00272952, 0.0329986, -0.00798617, 0.0175093, 0.046796},
 {-0.017415, 0.0331976, -0.0485264, 0.0101059, 0.0187895, -0.000393512, 0.00748151, 0.0102842, 0.0206623, 0.0121879, -0.0176663, -0.020062, 0.0040892, 0.0323249, -0.0181576, 0.010775, -0.0329885, 0.065591, 0.0134687, -0.024259, 0.0167208, -0.00338176, -0.0150637, 0.000673436, 0.0313059},
 {-0.0296304, -0.0263284, -0.084388, -0.0242437, -0.0194682, 0.0285006, -0.0115183, 0.0114675, 0.0813738, -0.0121289, -0.0428081, -0.0322186, 0.020872, 0.0242437, -0.0291439, 0.0161624, 0.00266831, 0.0877056, -0.0148156, 0.0262906, -0.000255031, -0.0316514, -0.0181795, 0.0127953, 0.0312545},
 {0.0147729, -0.0081325, 0.0315089, -0.0249171, 0.00873899, -0.0509971, -0.0323099, 0.00391228, -0.0104907, 0.0249222, -0.0209797, -0.00550524, 0.00942439, -0.000673436, 0.00891189, 0.0121218, 0.00269857, -0.0356475, -0.0242437, 0.0302949, 0.00903863, 0.0175093, 0.016485, -0.0134687, 0.0112958},
 {-0.0276128, -0.0316113, 0.0128766, 0.0148157, -0.0289636, -0.0234677, 0.00400867, -0.00344672, 0.0123463, -0.0168631, -0.0437199, -0.0323061, -0.012112, -0.00606092, 0.0182764, -0.0161624, -0.0141704, 0.0194222, 0.0269374, 0.0141215, 0.0627875, -0.0249179, -0.0118605, 0.00942809, 0.0137393},
 {-0.005409, -0.0235124, 0.0289686, -0.00337064, -0.02562, -0.0551866, 0.0235907, -0.0290772, -0.0367425, 0.0323165, 0.000872242, 0.00663806, -0.0175098, -0.0228968, 0.0854211, -0.0181827, 0.00605104, -0.0323776, 0.0181827, 0.0316385, 0.0520375, -0.0296312, 0.0160488, 0.0255905, 0.0133701},
 {-0.00542696, -0.00689016, -0.0132359, -0.00673133, 0.0189565, 0.0256465, 0.00189301, 0.0315935, 0.0541002, 0.0147727, -0.0114836, -0.0134115, 0.0235458, -0.00134687, 0.00821309, -0.00673435, 0.0336449, 0.0119365, -0.0181827, -0.00467947, -0.0344171, -0.0282821, -0.0283581, -0.000673436, 0.0209311},
 {0.0148331, 0.0276461, -0.0153123, 0.00606156, -0.0161602, -0.0347988, 0.0128211, 0.0101043, 2.75716e-005, -0.0296087, 0.0104485, -0.0282689, 0.00404079, 0.0316514, -0.00346367, -0.00538748, 6.15076e-006, -0.0177341, 0.0235702, -0.0154865, 0.0475003, -0.025591, -0.0272616, 0.0134687, 0.0141787},
 {-0.0256015, -0.033107, -0.0746217, 0.0242437, -0.0309242, 0.0433848, -0.0276625, -0.0181995, 0.0278718, -0.0323273, -0.0103558, -0.0248728, -0.00136871, -0.0202031, 0.00361692, -0.000673436, 0.00740364, 0.00990638, -0.0161624, 0.027641, -0.0500703, 0.02155, 0.0241464, 0.030978, -0.00764241},
 {-0.0255818, 0.0234974, -0.0262418, 0.00404096, 0.0148483, 0.0377887, -0.0329929, 0.00818551, -0.00337333, 0.010801, 0.0187424, -0.0322839, -0.0175109, -0.0228968, -0.074993, 0.00269374, -0.0316433, 0.009891, 0.0242437, 0.0269698, -0.100219, -0.00336087, 0.00708243, 0.0101015, -0.0467441},
 {-0.0148287, 0.0235322, 0.00474371, 0.030978, 0.0242394, 0.0127716, -0.00742419, 0.00401879, -0.0274703, -0.00541093, 0.0280644, -0.0269602, -0.0202031, -0.0148156, -0.000109193, -0.000673436, 0.0202008, -0.00486776, -0.0121218, 0.0013489, -0.0103783, 0.0316514, 0.045521, 0.0202031, -0.021885},
 {-0.0289455, 0.0283249, -0.0181163, -0.0242437, 0.0215343, -0.00368093, 0.0134995, 0.024938, 0.00977147, -0.00471198, 0.0062175, 0.00404367, -0.00942421, 0.00606091, 0.0376309, 0.00808122, 0.0208815, 0.00523503, 0.0235702, -0.0074167, -0.0144061, 0.00471443, 0.0351766, 0.0161624, 0.00653289},
 {-0.0137355, -0.00169837, 0.0487856, 0.0336247, -0.0150239, -0.00226436, -0.01288, -0.0375796, -0.0273788, 0.0261446, 0.103705, 0.00899859, -0.0316933, 0.0215499, -0.0415042, -0.0269374, -0.0121248, -0.0635514, 0.0222336, 0.0266286, -0.0362514, -0.0300135, 0.0858562, -0.00606092, -0.0883895},
 {0.0108569, -0.0294526, 0.00155132, 0.0154914, -0.0156042, -0.0265547, -0.0159164, -0.0260295, -0.0120444, 0.0264136, -0.0010445, 0.0128332, -0.0235407, -0.0242437, 0.0521874, -0.015489, 0.0108526, 0.00221333, 0.0215499, -0.0134477, 0.0407141, 0.026252, -0.0227548, -0.00740779, 0.0328876},
 {-0.0229027, 0.0335537, -0.0443774, -0.010772, 0.0128867, -0.0447697, -0.00407082, -0.0222039, 0.0117211, 0.00808066, -0.00606567, -0.0167501, -0.00541286, -0.00134687, 0.0239207, -0.0202031, 0.0215444, 0.0433685, 0.0269374, -0.0295815, 0.00781089, -5.32532e-006, 0.00710282, 0.0282843, 0.0370506},
 {-0.00260723, -0.0213439, -0.0257677, 0.0121241, 0.0140638, -0.00117933, 0.0249846, -0.0160606, -0.0121155, 0.022267, 0.0137005, -0.0140522, 0.00408688, 0.0316514, -0.0168647, -0.00538748, -0.0242381, 0.0124178, 0.0195296, -0.0148495, -0.0400381, -0.0168364, 0.0114397, 0.0249171, 0.0311565},
 {0.0323217, 0.0127204, -0.0766234, -0.0208765, -0.00330126, -0.0256972, 0.00936332, 0.0202104, 0.02037, 0.0154795, -0.0397086, -0.0281936, -0.0215542, -0.015489, -0.0216615, 0.0208765, 0.00536861, 0.0573073, -0.00875466, 0.0060925, -0.0360756, -0.0181824, -0.00317332, -0.00942809, 0.00950292},
 {-0.023607, 0.00598035, 0.0660902, -0.0148156, 0.0289528, -0.0300252, -0.00605033, 0.0268647, -0.0358986, -0.0040461, 0.0489013, -0.00212661, -0.0188572, -0.0141421, 0.0288348, -0.0208765, -0.0316451, -0.0288999, 0.0316514, -0.014817, -0.00800477, 0.0242438, -0.0161042, 0.015489, -0.00598632},
 {0.0242409, -0.0255622, 0.00434209, 0.00336864, 0.00336491, -0.0456479, -0.0040671, -0.0330612, 0.00973353, 0.0114255, -0.0731914, -0.0100921, 0.0329984, -0.0329983, 0.0601238, -0.0222234, 0.0242269, 0.0345845, 0.0026938, -0.0168439, 0.0246806, -0.000683994, -0.0550113, 0.0175093, 0.0288859},
 {-0.0309915, -0.0174793, 0.0314264, -0.0175093, 0.0242191, -0.0865671, -0.024889, -0.0216229, -0.012661, 0.0134563, -0.0449953, 0.0113649, -0.0303041, 0.0235702, 0.0652593, 0.010775, 0.0154879, -0.054388, 0.00740778, 0.0255728, 0.0413245, -0.0026982, 0.0202667, -0.0188562, 0.00207401},
 {0.0107416, -0.000158281, -0.0393026, -0.000668244, 0.0115517, 0.0168029, 0.0315348, 0.0295964, 0.00813472, 0.0120888, -0.0127303, 0.00749387, -0.0235891, -0.00336718, -0.022182, -0.0235702, -0.0168654, 0.0519362, -0.0161624, -0.032972, 0.0143365, 0.0154924, -0.0186352, -0.0215499, -0.00193856},
 {-0.0242288, 0.00609194, 0.0306918, 0.0134687, 0.0249133, -0.00314827, -0.0168044, -0.00203564, 0.0227515, -0.0215278, 0.0251393, 0.0148419, -0.00605679, -0.0323249, 0.00590894, -0.0161624, 0.0161681, -0.00772444, -0.0289577, 0.0262612, 0.00119428, -0.00404509, -0.00898156, 0.0235702, 0.00717824},
 {-0.00674698, 0.0301861, -0.0343875, -0.0121218, 0.00275693, 0.0440532, -0.00812886, 0.0276057, 0.0449652, -0.0148167, 0.0414664, 0.00746298, 0.0235621, 0.0282843, 0.00780176, 0.0282843, -0.00606364, 0.062542, -0.0289577, -0.0242112, -0.00485553, -0.0175091, 0.0317619, 0.00875466, -0.0191572},
 {-0.0188477, 0.0309141, -0.0226362, 0.0195296, 0.00339378, 0.0233145, -0.0174943, -0.0241531, 0.047541, -0.00200199, 0.0501146, 0.0195678, -0.024918, -0.0208765, -0.0160923, 0.0235702, -0.0235614, 0.0226246, -0.0202031, 0.00610048, -0.0713462, -0.0127945, -0.0164226, -0.015489, 0.0121189},
 {0.0114358, -0.0168744, -0.0157064, 0.00404045, -0.0316477, -3.41551e-006, 0.026246, 0.0235426, -0.0139506, 0.00469431, -0.00468162, 0.0127789, 0.0336717, -0.026264, -0.0392388, -0.0276108, -0.00943026, -0.0129011, 0.00875466, 0.00338085, -0.052992, -0.0101007, -0.0191731, -0.026264, 0.00250785},
 {0.0168454, 0.0290209, 0.0354849, 0.0215499, -0.000701291, -0.0229782, -0.0168095, -0.0323459, 0.0145078, -0.0316559, 0.024499, 0.0316509, -0.0195293, -0.0323249, 0.0158496, 0.0202031, 0.0195316, -0.030551, -0.0282843, 0.0161524, 0.056657, 0.0114485, 0.0107804, 0.0242437, -0.0163451},
 {0.00851785, 0.0219609, 0.0336071, -0.0209212, -0.0231497, -0.0104684, -0.0222726, -0.00922805, -0.0154656, -0.00751162, 0.143929, 0.0251863, 0.0147977, -0.00740779, -0.0622707, -0.010775, -0.00200852, -0.0600038, 0.000686441, 0.0313245, -0.0125855, -0.0266486, 0.0595153, -0.0215499, -0.101681},
 {-0.0288802, -0.0186792, 0.056574, -0.0161632, -0.00753628, -0.0516329, 0.0137204, 0.0217732, -0.0258819, -0.0281396, 0.000373028, -0.0242189, 0.00340219, 0.0242437, 0.0200277, 0.0296311, 8.47143e-005, 0.00674041, -0.0316514, -0.0275965, 0.0217518, -0.0148305, 0.0208861, -0.0282843, 0.0260141},
 {-0.00471959, 0.0153677, -0.0169974, -0.0276108, -0.0201353, -0.0353901, 0.0228829, -0.0147862, 0.0359385, -0.0296276, -0.0180043, 0.00613155, 0.017495, -0.00336718, 0.0486336, -0.0101015, 0.00202099, 0.0378239, -0.0168359, 0.0249612, 0.0371764, -0.0121222, -0.0421498, 0.00269374, 0.0147426},
 {-0.0154151, 0.0318524, -0.0261111, 0.00135241, 0.00800003, -0.0259642, 0.0209296, 0.00272351, -0.00235684, 0.0283028, 0.000154656, 0.00209612, -0.026912, -0.015489, 0.0243386, -0.0101015, 0.00942676, -0.00685584, -0.0188562, 0.0120809, -0.0017555, -0.0215509, -0.00553861, -0.0255905, 0.0135904},
 {-0.0276143, 0.0086632, -0.0438727, -0.0168359, -0.0228422, 0.0487966, 0.014073, 0.00405452, 0.00981922, -0.0188758, -0.00923764, -0.00799576, 0.013457, -0.0282843, -0.0133118, 0.0114484, 0.0289446, 0.0573212, -9.7059e-007, -0.0289311, 0.0180475, -0.0168356, -0.0185888, 0.0141421, 0.02601},
 {-0.0108139, 0.00461186, 0.0565711, 0.0282843, -0.0181792, -0.0290253, 0.0255891, 0.00536124, 0.00703719, -0.0141466, 0.0217215, -0.0196118, 0.0323249, -0.0134687, 0.00706845, 0.0269374, 0.00674759, -0.0123593, 0.0202031, 0.0154934, 0.0134607, -0.0276107, -0.00432718, 0.00942809, -0.0441728},
 {-0.0208837, 0.022887, 0.0152849, -0.0195296, 0.0195349, -0.0128374, 0.0100756, -0.00138762, -0.0265552, -0.0168478, -0.0367918, 0.00942283, 0.0282873, 0.0289577, 0.0513064, 0.00336717, -0.0128081, 0.000345657, 0.0175093, -0.0161642, 0.0504209, 0.028284, -0.00464082, 0.0148156, 0.00596564},
 {-0.00608263, 0.0262823, 0.0537143, 0.00942809, 0.012099, -0.052097, 0.00811873, -0.0202635, -0.0596411, -0.0289583, 0.0324544, 0.000576788, -0.0303042, -0.00606092, 0.0469939, 0.00269374, 0.0107806, -0.0412667, -0.0289577, -0.015508, 0.0565566, 0.0316514, 0.00149843, 0.0208765, 0.0242029},
 {0.0235389, 0.0294839, -0.00555572, -0.0296311, 0.00684058, -0.0158368, 0.00460508, 0.0201693, 0.0636133, 0.0221822, -0.0418891, 0.0047887, -0.00474202, -0.00606092, -0.00585129, 0.0202031, 0.0302794, 0.0325113, -0.0289577, -0.0114142, 0.0319278, 0.0276125, -0.0246986, 0.0215499, -0.00457114},
 {0.0188706, 0.0162236, -0.0028677, 0.0195296, -0.0309912, -0.0104008, -0.017462, -0.0114611, 0.00798282, -0.0114385, -0.000389627, -0.0121106, 0.0249185, 0.00808122, 0.0576845, 0.00269374, -0.0269318, -0.0224982, -0.0188562, -0.00809392, 0.0343645, -0.0107782, -0.0300024, 0.0316514, 0.0310518},
 {-0.0094363, 0.0160666, -0.0453392, -0.0282843, -0.0302569, 0.00153065, 0.00197542, -0.0154658, 0.0111103, 0.0134561, -0.0204246, -0.0120739, -0.01214, -0.0282843, -0.0241348, 0.0195296, -0.00471911, 0.0231653, -0.0127953, 0.00811483, -0.0330256, 0.0141434, -0.0111186, 0.0255905, -0.0254213},
 {0.0249285, -0.0296426, -0.0181367, 0.010775, -0.0188485, 0.0289462, -0.0316366, 0.00543164, -0.0104904, -0.0222295, 0.00806178, -0.0120951, 0.0262624, -0.00336718, -0.0316652, -0.00942809, -0.0323206, 0.0348985, 0.0282843, -0.00604009, -0.0437946, -0.0101014, 0.00546659, 0.010775, -0.00543165},
 {-0.0107857, 0.0248849, -0.0368678, -0.0269374, 0.00943773, -0.00351828, -0.0296533, -0.0127953, 0.00254124, -0.0262676, -0.0321061, 0.0323238, -0.0208773, -0.0222234, 0.00945998, 0.0269374, -0.0107781, -0.00218452, -0.030978, -0.025581, -0.0246964, -0.00942774, 0.0281944, -0.0195296, -0.00747631},
 {0.00741898, -0.00262624, 0.0336227, -0.00269343, 0.0141147, -0.0349143, -0.00872823, -0.0262916, 0.0103065, -0.0289517, -0.0363283, 0.00471586, -0.0323249, 0.0202031, 0.0399611, 0.00336717, -0.0154882, -0.0264834, -0.00202029, -0.00406043, -0.00761785, -0.0228968, 0.0226062, 0.0276108, 0.0375889},
 {0.01192, -0.0142675, 0.0299248, -0.0128371, -0.02791, 0.00506752, -0.0128274, 0.00291607, -0.038666, -0.0283731, 0.0478572, 0.0117663, -0.0134546, -0.00740779, -0.0321847, -0.0323249, -0.0329786, -0.00585955, -0.0289459, -0.030662, 0.0261876, 0.0164433, 0.02247, 0.010775, -0.0693841},
 {-0.0201248, -0.0206784, 0.023775, -0.0249181, -0.00215863, -0.0493954, -0.00715324, 0.027169, 0.0112124, -0.0106297, 0.0235681, 0.0269605, 0.00273341, -0.00336718, 0.0336697, -0.030978, 0.0142221, -0.0061775, -0.00673497, 0.0128044, 0.0261899, -0.016849, 0.00583546, 0.026264, 0.0123083},
 {0.0316464, 0.00596276, 0.0187629, -0.0195296, -0.0113924, -0.0389412, 0.0181818, -0.0268878, 0.035686, -0.00469987, -0.00887516, 0.0256235, -0.0269469, 0.0269374, 0.0428344, -0.0188562, 0.0255969, 0.0228949, -0.0168359, -0.00736456, 0.00938748, 0.00875536, 0.00534157, 0.0188562, -0.0270087},
 {-0.0201474, -0.00381553, -0.0293634, -0.0249171, -0.01893, 0.00394909, -0.0282437, -0.0208842, -4.53359e-005, -0.000665993, -0.0539022, 0.0202528, -0.0188333, -0.000673436, 0.0270878, 0.0255905, 0.0175055, 0.0175771, 0.00606117, 0.0228524, 0.0241812, 0.025589, -0.0469709, 0.026264, 0.0177604},
 {0.0309705, 0.00733332, -0.0393308, 0.0276108, 0.0121742, 0.00926689, 0.00330156, 0.0155008, 0.0150614, 0.00469673, 0.00789377, -0.0329566, 0.0296284, -0.030978, -0.0265122, -0.0276108, 0.0242326, 0.0439607, 0.0148156, 0.0208966, -0.0148251, 0.000676797, -0.0117551, -0.0316514, 0.0401676},
 {0.0302742, 0.00532318, 0.0127956, 0.00471241, -0.0309779, 0.0122691, -0.014145, 0.0262577, -0.0522225, 0.0100904, 0.00588481, 0.0154175, -0.0107784, -0.0195296, -0.0382589, -0.0316514, -0.000661112, -0.0529977, -0.0242437, 0.00808044, -0.0240844, 0.0235706, 0.0213057, 0.0242437, -0.00504287},
 {0.0289515, -0.0249396, -0.0164859, 0.0269374, -0.0323159, -0.0060591, -0.0269643, 0.0262447, 0.0245087, 0.0168341, 0.00713658, -0.00739843, 0.00471495, 0.0329983, 0.00414774, 0.00269374, -0.0269427, 0.0149502, -0.0195296, -0.0269338, 0.00810734, -0.0296313, -0.0339336, -0.0208765, -0.025594},
 {-0.0141548, 0.0195386, 0.0141653, -0.030978, 0.00401985, -0.0429764, -0.00602412, -0.0202325, -0.000825819, 0.0296352, 0.0194844, 0.0288956, -0.0154855, -0.00808122, 0.0299408, -0.00673435, 0.0215567, -0.0226783, 0.0228968, -0.00473035, 0.0592172, -0.0282845, 0.0326859, 0.0208765, 0.00111906},
 {0.022866, 0.0301465, -0.013391, -0.0242436, -0.0160685, 0.0134366, 0.0322283, 0.00806033, 0.0445934, 0.0309302, -0.0419433, 0.00475399, -0.00340089, -0.0296311, -0.0237333, 0.00471405, 0.028934, 0.0221904, 0.0242437, -0.019496, -0.01805, -0.0222199, 0.0198728, -0.0101015, 0.0314419},
 {-0.00132989, -0.0214954, 0.0124003, 0.0269374, 0.028937, 0.0138668, -0.0100547, -0.0175166, 0.00837363, -0.000677973, -0.00452724, 0.0282904, 0.0114561, 0.00808122, 0.0365261, -0.00538748, 0.00808866, -0.0148654, -0.00269362, 0.0316454, 0.00831311, 0.0161618, -0.0278028, 0.000673436, -0.0355094},
 {-0.0141505, -0.012226, -0.0264307, -0.0175093, -0.00466461, 0.00878787, 0.0262181, -0.0242206, 0.0408936, 0.0201905, 0.0292129, -0.0194991, -0.00809831, 0.00404061, -0.0482973, -0.0121218, -0.0330015, 0.049563, -0.0255905, -0.0275875, -0.0569421, -0.0316514, -0.00487797, -0.00269374, -0.0189984},
 {-0.0134566, 0.0336556, -0.0200453, 0.0316514, 0.0235783, 0.0399808, -0.0134628, -0.0241922, -0.0236811, 0.0282887, -0.0205186, 0.0101208, 0.0309753, 0.0329983, -0.0237204, -0.00606092, -0.00268769, 0.0169606, -0.0181827, -0.0228913, -0.0205289, 0.0269373, 0.0207017, -1.18854e-009, 0.0264508},
 {0.0282749, -0.0168991, -0.0122931, -0.0188562, -0.006044, 0.00108207, -0.00944878, -0.022202, 0.0353803, 0.0316511, -0.00223471, 0.0101037, 0.00605079, -0.00404061, 0.00184479, 0.0208765, -0.0282842, 0.00206922, 0.0141421, 0.00877247, -0.0175032, 0.011449, 0.011811, 0.00404061, 0.0248735},
 {0.0154939, -0.0120642, 0.0266476, -0.0329983, 0.0296059, -0.0313376, 2.09429e-005, -0.00340088, -0.0189431, 0.0222193, -0.0435604, 0.0121121, 0.00943627, -0.0222234, -0.00632264, -0.00471405, -0.0202022, -0.0367892, 0.0208765, -0.0276275, 0.00206667, -0.0013498, -0.0402602, 0.0020203, 0.0434301},
 {0.01331, -0.0363949, 0.0338804, 0.00467444, -0.00707311, -0.00697492, 0.0215475, -0.0361285, 0.0106652, -0.020281, 0.112809, -0.0252273, -0.0120907, 0.0202031, -0.0156837, -0.0329983, -0.0235522, -0.0129893, -0.00402593, -0.0286536, -0.0498671, -0.0226191, 0.0590793, -0.0127953, -0.0545824},
 {-0.0214675, 0.00627494, 0.0398942, 0.0154895, 0.0052428, -0.0169499, -0.00580177, -0.0280192, -0.0385422, 0.00554367, 0.0439979, 0.014849, 0.0256311, -0.00404061, 0.0296161, -0.0316514, 0.0263387, 0.0189341, 0.0222234, 0.00203207, 0.0452126, 0.00536982, 0.0260458, 0.0296311, -0.0237176},
 {-0.0141379, 0.0302294, 0.0189737, 0.0148156, -0.0282516, -0.0388741, -0.0114313, -0.0268303, 0.0361614, 0.0188811, 0.00490669, -0.0295985, 0.0282823, 0.0282843, 0.0357708, 0.0215499, 0.0141549, -0.00501552, -0.0303046, -0.0208409, -0.00210654, -0.0242442, 0.0203512, -5.82875e-009, -0.00205076},
 {-0.0147629, -0.022692, -0.0109979, 0.026264, 0.00395939, 0.00193302, 0.00137519, 0.0127882, 0.0276663, 0.0188598, -0.0328083, -0.0194904, -0.0289369, 0.00875466, 0.022103, -0.00269374, -0.00539525, -0.0101191, 0.00606111, 0.0302619, 0.0208994, 0.0303027, -0.0417219, -0.00740779, 0.0635113},
 {-0.0296368, -0.00680069, -0.0173381, 0.0161624, -0.00129948, -0.0101884, 0.0201501, -0.0215265, 0.0115008, -0.00203434, -0.0410836, 0.03303, 0.0323249, -0.00538748, -0.0173801, -0.00606092, 0.0336653, -0.0121974, 0.00471405, -0.00401613, 0.0224019, 0.027611, 0.0139982, 0.00606091, 0.0237057},
 {0.026237, 0.016116, 0.0027013, 0.0101015, 0.0033679, 0.00885227, -0.0127878, -0.0155082, -0.0258091, 0.0175038, 0.0358903, -0.0101632, -0.0195297, 0.0296311, -0.0220608, -0.00606092, 0.00674384, -0.047748, -0.0141421, 0.0181804, 0.00327747, 0.00270414, 0.00439134, 0.010775, -0.0384018},
 {0.0141384, -0.0249584, 0.0145639, -0.015489, 0.00674999, -0.0078094, 0.0188402, -0.0329964, 0.0205044, 0.0228962, 0.0281392, -0.028948, 0.0255945, -0.0323249, 0.0279083, 0.0289577, -0.0235714, -0.00314286, -0.0296311, 0.0303133, 0.0034846, -0.0127969, -0.0230462, 0.0329983, -0.00420757},
 {-0.00203052, 0.00875729, 0.0350435, 0.00336506, -0.000694652, -0.0495707, -0.0127571, -0.0168448, 0.0114937, -0.0235674, 0.0412431, 0.0073645, -0.0235671, -0.00269374, 0.0306873, -0.00404061, -0.0201957, -0.0344719, -0.000673358, -0.0033814, 0.0471516, 0.014141, 0.00671851, 0.00740778, -0.0329622},
 {0.0329742, 0.00928539, -0.00839451, -0.0161624, 0.00615192, -0.0158014, -0.012891, 0.0201849, -0.00314746, 0.0336235, 0.00382331, -0.0329636, 0.0013175, 0.00336717, 0.012721, 0.026264, -0.0276335, 0.0312958, 0.00740761, -0.0134405, -0.0100949, 0.0222254, -0.000376272, 0.0215499, 0.0235085},
 {0.0208861, 0.01421, 0.00275722, 0.00201996, -0.00542064, -0.0304479, 0.0175501, 0.0154709, -0.0137801, 0.0303177, -0.00540266, -0.0269399, 0.0309802, -0.015489, 0.0181392, -0.0303046, 0.0188616, 0.0208128, 0.00067412, 0.0195149, 0.0385939, 0.0148135, 0.00194689, -0.0303046, -0.0136772},
 {0.0323141, 0.0261696, -0.0396057, 0.00471435, -0.0141012, 0.0106733, -0.0128357, -0.00201158, 0.0393605, 0.0303073, -0.0220829, 0.0195451, 0.0127838, -0.010775, -0.0373347, 0.0282843, -0.0175111, 0.0128683, 0.0195296, 0.0269566, 0.00708932, -0.0222233, -0.0290404, 0.00538748, -0.0164971},
 {-0.03097, 0.00872539, 0.00363995, 0.0316514, 0.00674381, 0.0241443, 0.00808428, -0.0161157, 0.0357806, -0.022885, 0.0155218, -0.0168187, -0.0208791, 0.0296311, -0.00832628, 0.0134687, 0.033673, 0.045367, 0.0329983, -0.0100924, -0.0502612, -0.0161625, 0.0215824, 0.026264, -0.00687276},
 {0.00537273, 0.0207948, 0.0137699, 0.00808122, 0.0262846, 0.0145563, 0.0073893, 0.0336641, 0.0217573, -0.0255851, -0.00651202, -0.0154905, 0.00200344, -0.00202031, -0.0362739, 0.0208765, -0.00875252, 0.000233203, -0.00269381, -0.0161466, -0.0418492, 0.0181829, 0.000430292, 0.0336718, -0.0271011},
 {-0.0134634, 0.00142447, -0.00263104, 0.0121218, 0.0329735, -0.0228717, -0.00537256, 0.000637181, -0.00423687, 1.32437e-006, -0.0584097, 0.0282752, -0.0255891, -0.0235702, 0.0260247, -0.026264, -0.00471443, -0.0045621, -0.0141421, 0.0100826, 0.00979791, -0.0242437, -0.0142738, -0.0168359, 0.0108106},
 {0.00188902, -0.0249001, 0.00935182, -0.0249563, 0.0258959, 0.0513491, -0.0181669, 0.00495052, -0.00533689, 0.0295538, 0.12561, -0.0339744, 0.0242794, -0.00404061, -0.0633882, -0.0208765, -0.0208545, -0.0468916, 0.0323351, -0.0300075, -0.0679039, 0.0272173, 0.0724847, -0.00808122, -0.0906271},
 {0.0276924, 0.0325575, 0.0514278, -0.0215509, -0.0311212, -0.0462557, 0.0110296, 0.00225317, -0.0353157, 0.0324776, 0.00631445, -0.0141174, 0.0168805, 0.0228968, 0.0326323, -0.0242437, 0.00344842, -0.0329737, 0.0329983, 0.000678497, 0.066585, -0.000691406, 0.000794879, -0.0168359, -0.0262197},
 {-0.0208717, -0.0296651, 0.00749601, -0.00606047, 0.0256067, -0.0211839, -0.0141133, 0.00410579, -0.0040842, 0.0242751, -0.0250403, -0.0134399, 0.00336415, -0.0323249, 0.0373057, -0.0228968, -0.00806856, -0.0080599, 0.00808122, -0.0262393, 0.0300925, 0.021549, 0.000388538, 0.0168359, -0.00519681},
 {0.0263077, -0.0253883, -0.0230949, -0.0222234, -0.0229619, -0.0363104, 0.0323481, -0.0121443, 0.000136326, -0.0276065, -0.0145867, 0.0135003, 0.00206007, -0.0222234, 0.0298331, 0.00673435, 0.0249099, 0.00229446, 0.0255905, 0.0154454, 0.00601412, 0.00941974, 0.0025895, -0.0323249, 0.00303343},
 {0.0269312, -0.0115103, 0.00777826, -0.0249171, -0.006691, 0.0363081, 0.0053424, -0.0208776, -0.00806692, -0.0215691, -0.00249055, 0.0155215, -0.00270757, -5.24353e-010, 0.0127637, 0.0127953, 0.0215429, 0.0285645, -0.0289577, 0.00204375, 0.0154332, -0.00336455, -0.00929648, -0.0121218, 0.0215662},
 {0.0201758, 0.0160973, 0.0365983, 0.0289577, 0.0330006, 0.028602, -0.018845, -0.0316776, -0.042294, -0.0222352, 0.0216627, -0.0182391, -0.0161626, -0.0316514, -0.0295093, 0.0336718, -0.0100928, -0.0534613, 0.0134687, 0.0228982, 0.00922585, -0.00739812, 0.0334383, 0.00471405, -0.0464163},
 {-0.0330012, 0.0201518, -0.0171442, -0.000673648, -0.00132912, 0.0009819, -0.026945, -0.00198923, 0.00392339, 0.0141419, 0.0164941, -0.00673459, 0.0296344, 0.0316514, -0.022185, -0.0121218, -0.018856, 0.0137319, 0.0316514, -0.0141271, 0.0202035, -0.00673491, -0.0112498, 0.0336718, -0.00642528},
 {0.0235641, 0.00606708, 0.0509816, -0.0161624, 0.0174916, -0.00462798, 0.0148514, 0.0303042, 0.00404287, -0.00336845, 0.00662824, 0.0174613, 0.00808663, -0.0168359, 0.032516, 0.0114484, -0.00941941, -0.0144521, -0.00606092, -0.00405574, 0.0398994, 0.00336592, 0.0421957, -0.00673435, -0.037737},
 {0.00535555, -0.0317665, -0.0406434, -0.00808034, -0.00732316, -0.0334026, 0.0322291, 0.0282338, -0.00583632, 0.0268909, -0.00156192, 0.032349, -0.0195403, 0.0121218, 0.0068193, -0.015489, -0.0175302, 0.0538258, -0.000674016, -0.00941001, 0.044339, -0.003364, -0.00920431, -0.0249171, 0.0433925},
 {0.0154996, 0.0041259, 0.0286583, -0.0269374, 0.00265077, -0.0408798, -0.00264834, -0.0303191, -0.0315522, -0.0221937, -0.00304292, 0.0329846, 0.00876868, 0.00538748, 0.0636314, -0.0208765, 0.0101076, -0.0410723, -0.0208765, -0.00272043, 0.0223138, 0.0309771, -0.00513375, -0.010775, 0.0154551},
 {-0.0208856, -0.0330715, -0.0304905, 0.00808122, -0.0114104, 0.0258236, -0.00204923, 0.00742139, 0.00913753, -0.0175041, -0.0241625, -0.0249032, -0.0289598, -0.0121218, -0.0178488, -0.0269374, -0.0127967, 0.0390816, -0.00808122, -0.0188374, -0.00290017, 0.0168359, -0.0213011, 0.0215499, 0.00167819},
 {0.0107851, -0.00404102, 0.000730135, 0.000673918, -0.0188536, 0.0486068, 0.00470959, -0.0100705, 0.0232629, -0.00134001, 0.0402388, -0.0329889, 0.00807674, 0.00942809, -0.0154178, -0.0235702, 0.000674824, 0.0191275, -0.015489, -0.021548, -0.00802557, -0.0114485, 0.0178849, 0.0303046, -0.0328875},
 {0.0289482, 0.0234683, -0.0146736, 0.00808122, -0.0316302, 0.06936, -0.0215684, -0.026925, 0.0025193, 0.0276157, 0.0143158, -0.00337198, 0.0114381, 0.0141421, -0.0560497, 0.00404061, -0.00807834, -0.0167854, 0.0255905, 0.0188764, -0.0677693, 0.0094298, 0.03118, -0.0121218, -0.00604898},
 {0.0249187, 0.0283252, 0.0251011, 0.0289577, 0.00940064, -0.0174195, 0.022908, -0.0229358, -0.0125771, -0.00941432, 0.0216317, -0.0161778, -0.0282834, 0.0235702, 0.0182888, -0.0181827, 0.0161623, 0.0153762, 0.0161624, -0.0303153, 0.037642, -0.0134689, 0.0219209, -0.00134687, 0.0160467},
 {-0.0155999, 0.00345597, -0.0213024, -0.0222606, -0.0205919, 0.077744, 0.00474979, 0.0245108, 0.00741071, 0.030232, 0.0564586, 0.0192562, 0.0256375, 0.0161624, -0.059083, 0.0269374, 0.0195515, 0.0152527, -0.0329878, 0.020487, -0.0519377, -0.00511379, 0.0525104, -0.00538748, -0.0296155},
 {0.0270209, 0.016394, -0.0139572, -0.0269381, 0.000517506, -0.0517338, -0.00513421, 0.0123588, -0.0238816, 0.000829119, -0.0339625, -0.00872014, 0.0121672, 0.00336717, 0.0401292, 0.0242437, -0.0187843, -0.0222883, -0.00942821, -0.0228913, -0.00256565, -0.00338493, -0.00382003, 0.00404061, -0.0146949},
 {0.0215596, -0.0202331, -0.010516, 0.00471439, -0.0121095, -0.00795275, 0.0195584, 0.0162286, 0.0357278, 0.0323481, 0.0104942, 0.0182073, 0.0168361, -0.0161624, 0.0123113, -0.0134687, 0.000692106, -0.00118516, 0.0269374, 0.0330098, 0.0284822, -1.49054e-006, -0.0130078, -0.00673435, -0.0183074},
 {-0.0100626, 0.023747, -0.014358, -0.0181827, 0.0255331, 0.0115342, -0.0046932, -0.0182104, -0.0280572, -0.0181829, -0.042527, 0.020219, 0.0282989, 0.0148156, 0.0383119, -0.0303046, 0.0296222, -0.0436669, 0.00875466, 0.0228589, 0.0457357, 0.0269364, -0.0341311, 0.0282843, 0.00373733},
 {-0.0195344, -0.0310504, 0.0016587, 0.0121219, 0.0289961, 0.00574511, -0.0276603, -0.00537314, 0.0447818, 0.00603846, -0.0194118, 0.0296554, -0.0323233, 0.0255905, -0.0296985, -0.0208765, -0.0208823, 0.0227848, -0.00875466, -0.00132222, -0.034502, 0.0323249, 0.0201466, 0.0020203, -0.0275346},
 {0.00468831, -0.014213, -0.0172047, -0.0202031, -0.0040328, 0.0124473, -0.0262681, -0.00335181, -0.0314304, -0.0303178, 0.00556508, -0.00811262, -0.024917, -0.0101015, -0.0150474, -0.0215499, 0.0128033, -0.0119926, -0.0303046, -0.0114421, -0.0331228, 0.0282845, 0.0395008, -0.00202031, -0.0109734},
 {-0.0175102, 0.019477, -0.0138356, 0.00875466, 0.0276228, -0.000243003, -0.0168378, 0.02158, 0.0256116, -0.0161525, 0.0473632, 0.0249165, -0.00942719, 0.0316514, 0.00504347, 0.00942809, -0.00942504, 0.00873931, -0.00808122, 0.00406035, 0.00436787, 0.00336875, 0.0290832, 0.00942809, -0.00809749},
 {0.00942665, -0.0221943, 0.0538565, -0.00134911, -0.0208971, -0.0557331, 0.0101453, -0.0249117, -0.0335611, -0.010088, -0.0146396, 0.0215196, 0.0276123, -0.0101015, -0.0058251, 0.00875466, 0.0208841, -0.0364323, -0.015489, 0.0141325, 0.0332825, -0.00336884, -0.0144125, -0.0222234, 0.000807436},
 {-0.0182111, -0.0290666, -0.029154, -0.030978, -0.0066547, -0.0333429, -0.0236603, 0.00129708, 0.00268669, 0.0242053, 0.021842, -0.032315, -0.00944853, -0.0316514, 0.0104418, 0.0101015, -0.0249345, 0.0095028, -0.0255905, -0.00806294, 0.0273923, 0.0215508, -0.0121205, 0.00134687, -0.00551895},
 {-0.0262562, -0.00731219, -0.00496734, -1.31665e-006, 0.00129111, -0.0401562, -0.0289047, 0.0309494, -0.000366507, -0.0188269, 0.0217326, 0.0174886, -0.0161576, -0.0282843, 0.0162085, 0.010775, 0.0249208, -0.00167494, 0.0269374, 0.0242221, 0.0693558, 0.00403558, 0.018561, 0.0303046, -0.019293},
 {-0.0222316, 0.028211, -0.00834978, 0.0255905, -0.00468292, 0.0389306, 0.0147946, 0.00203412, 0.0375304, -0.0188513, -0.0258072, 0.0256023, -0.0148234, -0.0161624, -0.0139629, 0.0282843, -0.0127974, 0.0107672, 0.00134642, -0.0302912, 0.000804262, -0.0188562, -0.0193955, 0.00404061, -0.0212419},
 {0.00136251, 0.019558, 0.0339968, 0.0249171, 0.0262638, -0.0124168, -0.0255881, -0.0329665, -0.0128269, -0.0269357, -0.0205393, 0.0195475, 0.006733, 0.00269374, 0.00295717, 0.0127953, -0.00539102, -0.0192803, 0.00740778, 0.0026938, -0.0069936, 0.0249171, -0.0302816, -0.015489, 0.00135334},
 {0.016153, 0.0100103, -0.0144587, 0.0141421, 0.0310003, 0.0129822, -0.00203701, -0.00199547, -0.0170156, 0.0141425, -0.00897572, 0.0127903, -0.0276117, 0.00673435, -0.00514824, 0.00269374, -0.0303031, -0.000223136, 0.00336709, -0.0309628, -0.066489, -0.00403607, -0.00735994, -0.0101015, -0.0206179},
 {-0.0141409, 0.029695, 0.0516859, -0.00606094, 0.00535586, -0.0496393, 0.0107874, 0.0154304, -0.0282673, -0.0289567, 0.0176259, 0.00401831, -0.00267813, 0.00336717, 0.00409677, -0.0208765, 0.0255893, 0.0118443, -0.0282843, 0.0013176, 0.0141422, -0.0303046, 0.0216771, 0.0215499, -0.0176849},
 {0.0315622, -0.0247191, -0.0139714, -0.0249529, -0.0212981, 0.0530278, -0.000617615, 0.0251428, 0.0201123, 0.00263752, 0.0713516, 0.0192798, -0.0235028, 0.00471405, -0.0418294, 0.0222234, -0.00806687, -0.00716326, 0.011464, 0.021806, -0.0587881, 0.0278753, 0.0019402, -0.0121218, -0.0667243},
 {0.0236568, 0.0063054, -0.0242038, -0.000671422, 0.0059067, 0.00275721, 0.002271, 0.0332498, -0.0317457, 0.00285973, 0.00545575, -0.0181364, 0.0242872, 0.0235702, 0.00960753, 0.00404061, -0.006657, 0.00119174, 0.0181827, -0.0309723, -0.0065793, -0.0101196, 0.0131253, -0.0121218, 0.00537955},
 {0.0141553, 0.00402335, 0.00258792, -0.026264, 0.0208805, 0.0139534, 0.019566, -0.0147255, 0.0276578, -0.0262307, 0.0486764, -0.0127783, -0.00471917, -0.030978, -0.0022817, -0.0215499, -0.0249024, 0.0200677, -0.0228968, 0.0148411, -0.0177737, -0.0289571, -0.0224847, 0.0303046, 0.0053709},
 {-0.0228641, 0.0122869, -0.0257773, -0.00808122, 0.0134172, 0.000600471, 0.0222358, -0.0155169, 0.0059491, -0.0255809, -0.0644464, -0.0026724, 0.002054, 0.0215499, 0.0196948, 0.000673436, -0.00742237, 0.0112476, -0.00808122, 0.0066929, 0.0350997, 0.00470256, -0.050489, 5.44298e-008, 0.044288},
 {-0.0107802, 0.00328883, -0.0133268, -0.0289577, -0.030268, 0.00495092, 0.0309344, 0.0114583, -0.00813249, 0.0127787, 0.000592974, -0.0302941, -0.00338282, -0.0289577, 0.025964, -0.00471405, 0.0329941, 0.00699619, -0.0101015, 0.00877462, -0.029028, -0.00471087, -0.0190066, 0.0269374, 0.0234958},
 {-0.00877446, 0.0268878, -0.00267541, 0.00134439, 0.0101038, 0.0239781, 0.0201992, 0.00404584, -0.016581, 0.0323215, 0.00178759, -0.0161794, 0.000666317, 0.0249171, 0.0237824, -0.0289577, 0.00808678, -0.00649369, -0.0141421, -0.0228945, -0.0180857, 0.0148171, 0.0139787, 0.00336717, 0.0206777},
 {-0.0127959, 0.0114052, -0.0338272, 0.010775, -0.0309688, -0.000159594, 0.0235716, -0.00738037, 0.0275016, 0.0222374, 0.0042721, 0.0316547, 0.012124, -0.0316514, -0.0138985, 0.0141421, -0.0195262, 0.02396, -0.0249171, -0.00537233, -0.0225195, -0.00808193, -0.0214101, -0.00942809, 0.00581551},
 {-0.0141397, 0.00409504, 0.0379336, 0.0323249, 0.016137, -0.0085384, 0.0168795, -0.0262675, -0.0247853, 0.0249337, 0.0134201, -0.0303105, -0.0134605, 0.0329983, 0.0172942, -0.00808122, 0.00539555, -0.00125175, -0.00269373, 0.0309695, 0.04675, 0.0175093, -0.0270203, 0.0303046, 0.0268578},
 {-0.0108062, 0.00730561, -0.00622886, 0.0242437, -0.0032924, 0.0127913, -0.0290371, -0.0256472, -0.0218737, -0.0290061, 0.0293381, 0.0289607, -0.0276197, 0.0303046, 0.0235011, 0.00673435, 0.00267066, 0.0277184, -0.0208765, -0.0242303, 0.0221877, 0.0303051, -0.00230287, 0.0101015, 0.0198471},
 {0.0303128, 0.0330732, 0.0533713, -0.0033677, -0.0256351, -0.0565438, -0.0100589, -0.00676311, -0.0450792, 0.0175246, -0.0128545, -0.0101158, -0.0114328, -0.0249171, 0.0176647, 0.0329983, 0.0215524, -0.00178476, 0.0127953, 0.0222027, 0.0255316, 0.0202028, 0.00667064, 0.0134687, 0.041978},
 {0.0121104, 0.0214591, -0.00698235, 0.0282843, -0.0235449, 0.0451232, -0.0107965, -0.0329849, 0.0297851, 0.0336679, 0.0544186, -0.0148202, -0.0060766, -0.00606092, 0.00113491, -0.0255905, -0.0222235, 0.00692345, -0.00471405, 0.028299, -0.00326655, 0.0282843, 0.0110834, -0.0141421, 0.00947794},
 {0.00270789, -0.00469462, 0.0231929, 0.0101015, -0.0107733, 0.00544127, -0.0168264, 0.0215772, 0.00961039, 0.0168331, -0.00454834, -0.0013319, 0.0161624, 0.00673435, 0.00451157, -0.0208765, 0.00336362, 0.00599441, -0.00404061, -0.0303058, 0.00670869, 0.0276108, 0.00598173, 0.0296311, -2.58151e-006},
 {-0.0269465, -0.00952116, 0.03631, 0.0175093, 0.00204703, -0.0101531, -0.0323318, 0.00944516, -0.0170297, -0.00135937, 0.0275233, 0.0262498, -0.0303056, -0.0303046, -0.0226425, 0.0188562, 0.001352, -0.0391076, -0.00808122, -0.0249053, -0.0041328, 0.0242438, -0.0124243, 0.00606091, -0.0405537},
 {0.00875795, 0.0155464, -0.0100699, 0.0168359, -0.0289809, -0.0521095, -0.0174959, -0.00410992, 0.0115928, 0.0080602, 0.0178761, 0.0147899, 0.0262628, -0.0121218, -0.00821346, 0.0141421, -4.70472e-006, -0.00803962, 0.015489, -0.0235824, 0.0593212, -0.0127953, 0.0261237, -0.0222234, 0.0234711},
 {-0.0317352, 0.00363611, -0.0199043, 0.0215125, -0.0172889, 0.0313288, 0.0189178, -0.0307889, -0.00611341, -0.0182492, 0.0354017, -0.00699423, -0.0120423, -0.0228968, -0.0244365, -0.00606118, 0.018867, -0.0241262, -0.00267592, -0.0165985, -0.0303421, -0.0253277, 0.0205224, 0.0323249, -0.0341881},
 {0.014228, -0.015253, 0.0271319, -0.0215507, 0.013992, -0.0419988, -0.00378713, -0.0327598, -0.0274382, 0.00218475, -0.0291094, 0.000713622, -0.0140977, 0.00740778, 0.0254304, -0.00269374, -0.00598325, -0.025381, 0.0114483, 0.00876239, 0.0235585, -0.0282979, 0.00468194, -0.0222234, -0.0056091},
 {-0.030293, -0.0208804, -0.0143796, -0.0276108, 0.0303026, -0.0215953, -0.0012965, -0.00194293, -0.0176099, 0.00205252, 0.0286161, 0.00808081, 0.0127916, -0.0242437, 0.0107862, 0.0269374, 2.13079e-005, 0.0113587, -0.0255905, 0.00406279, -0.019211, -0.0289576, 0.00356226, -0.0215499, 0.0018258},
 {-0.0181526, 0.0290913, -0.0188018, 0.0161624, -0.0168757, -0.000439761, 0.0255926, 0.0302663, -0.00366873, 0.024918, -0.0608866, 0.0303213, -0.0134457, -0.00538748, 0.0539089, -0.0175093, 0.00874055, -0.0102183, 0.00673444, -0.013506, 0.0350276, 0.00267902, -0.00978329, 0.00606091, 0.0320411},
 {-0.0188612, 0.0201347, -0.0318712, -0.0148156, -0.01478, -0.0163357, 0.00197934, 0.0296265, -0.00884135, -0.00945036, 0.0353267, -0.0242432, -0.00338154, 0.00673435, -0.030281, -0.0316514, -0.024249, -0.0344898, 0.0329983, 0.0161737, -0.0259061, -0.029631, -0.00533694, 0.00134687, 0.00132874},
 {0.00199512, 0.0269, 0.0152628, -0.0208765, 0.020203, 0.00629677, 0.0181835, 0.0228871, 0.00429969, 0.00200777, 0.0353464, 0.00401475, 0.0316514, 0.000673436, -0.023397, -0.0181827, 0.0330003, -0.000722882, -0.00202038, -0.00875175, 0.0194874, -0.0154848, 0.00829231, 0.0329983, -0.031385},
 {0.0141389, 0.00130189, 0.0115955, 0.0101015, 0.030983, 0.0236878, 0.0208813, -0.0141095, -0.0342341, 0.0181897, 0.0284714, -0.0148302, -0.0222218, -0.0202031, -0.0331929, 0.0276108, 0.00539337, -0.00854016, 0.0168359, 0.00337902, -0.0142812, -0.00471498, 0.0338288, 0.00808122, -0.0389242},
 {0.0309792, 0.0242951, 0.0102115, 0.00942806, -0.00272705, -0.0184309, -0.0221809, -0.0249045, 0.00017567, 0.014836, -0.0100578, -0.00337143, -0.00335202, 0.026264, 0.0334826, -0.0222234, -0.00268535, 0.0152653, 0.00875466, -0.00270892, 0.0132964, 0.0208761, 0.0208417, 0.0329983, -0.00267566},
 {0.0134427, 0.00662521, 0.00587976, -0.0195296, 0.0243089, 0.0109653, 0.019455, -0.0202461, 0.0426127, -0.0141867, 0.0231997, 0.0188731, 0.00469358, 0.0228968, -0.0133815, 0.00471405, 0.0121023, 0.0299944, 0.0329983, 0.00540136, 0.0189596, -0.00268857, -0.00360079, 0.010775, 0.0160965},
 {-0.0188454, 0.0216363, 0.00567441, -0.0303046, 0.0295936, -0.0467526, 0.0242757, 0.0255823, 0.0253611, 0.0262884, 0.0059814, -0.0323226, 0.0282864, 0.0121218, -0.00217666, 0.0127953, 0.0289592, -0.00520241, 0.00875466, 0.0316444, 0.0722315, -0.0181833, -0.0251452, -0.0134687, 0.0348346},
 {-0.0282913, 0.0100198, 0.0127495, 0.0276108, -0.00670268, -0.00378227, 0.010747, -0.0188535, 0.012554, 0.0269357, 0.0302854, 0.0202054, 0.0222221, -0.0134687, -0.0452329, 0.0276108, -0.0276114, 0.015957, 0.0323249, 0.00944542, 0.00703238, -0.0323249, 0.00131822, -0.0134687, -0.0168433},
 {0.0255995, -0.0121113, -0.0261121, -0.0289577, 0.000677892, 0.0288026, 0.0141355, 0.0134772, -0.0207487, -0.00671968, 0.0366561, 0.0101253, 0.0168358, -0.00606092, 0.00742493, 0.010775, 0.0249147, 0.0115307, -0.0296311, -0.0235709, -0.00445374, 0.026264, 0.0124715, 0.0195296, 0.0355858},
 {-0.020885, -0.0290384, 0.0257142, -0.0303046, -0.00873146, 0.0371004, -0.0330128, -0.0188235, -0.0210249, -0.010779, 0.0391331, 0.004702, -0.0114546, 0.0336718, -0.0534113, 0.0303046, -0.0161598, 0.0128614, -0.010775, 0.0323299, -0.00624175, 0.00472033, 0.046477, 0.00134687, -0.0403377},
 {-0.0168335, 0.00340926, 0.0340456, 0.015489, -0.020896, 0.0226875, -0.00134951, -0.0175309, -0.0202494, 0.0154803, -0.0119223, -0.0303196, 0.00875535, 0.0215499, 0.0201421, 0.0202031, -0.0168376, -0.00351296, -0.0148156, -0.0080944, -0.00470798, 0.0282843, -0.00358939, -0.00942809, 0.0192096},
 {0.00328731, -0.009112, 0.0356957, -0.0087914, 0.00962812, 0.0302334, -0.018793, 0.000892687, -0.0276264, -0.0115166, 0.0333942, 0.0071354, -0.028191, 0.00875466, -0.0140384, -0.0323249, 0.0276176, 0.0204175, -0.0242274, -0.0213333, -0.00944272, -0.028026, 0.0173039, -0.0249171, 0.00586494},
 {-0.0113626, -0.0105501, -0.00889667, -0.0202038, 0.0328692, -0.00437994, 0.000920417, -0.020631, -0.0321341, 0.00487507, -0.0243735, -0.0033304, 0.00947006, 0.00134687, 0.0362103, -0.00538748, -0.0181117, -0.0399029, 0.0276108, 0.00472627, 0.0261258, 0.0188431, 0.0164562, 0.0303046, 0.0104225},
 {0.0155054, 0.0148028, -0.0151559, 0.0303046, -0.0303076, 0.0386852, -0.00197727, 0.00949754, -0.0156181, 0.0141683, 0.0182586, -0.0154861, 0.00201649, 0.0175093, -0.0361896, 0.026264, 2.40381e-005, -0.00482532, -0.00404067, 0.000697452, -0.0142674, 0.0323249, 0.00152275, -0.00404061, 0.00445941},
 {0.0242693, 0.00820205, -0.0151173, -0.00942809, 0.0046737, -0.0481643, -0.0262634, 0.020843, -0.0291015, 0.0033694, -0.0485799, 0.0195515, -0.00132046, -0.030978, 0.0547249, -0.0148156, -0.00943977, 0.0151634, 0.0296311, 0.0174871, 0.0296218, -0.0101086, 0.00651833, -0.0235702, 0.0636415},
 {-0.0235741, -0.0189186, 0.00407951, -0.0296311, 0.00474789, 0.0228143, -0.0296731, -0.00742835, -0.0288916, 0.0302708, -0.00289071, -0.0316421, -0.0276106, -0.0101015, -0.0217306, 0.00269374, -0.00471942, 0.00949944, 0.030978, -0.0154755, -0.0460448, 0.0208765, 0.0312667, 0.0222234, -0.0092263},
 {-0.012815, 0.0329772, -0.0140051, -0.00808127, 0.0282835, 0.0203576, -0.00404092, -0.00809131, 0.0306942, -0.0141723, 0.0192685, 0.00738665, -0.0222234, 0.0134687, -0.00358238, 0.0134687, 0.0101054, -0.0297391, 0.0121218, -0.0101008, -0.0368946, 0.0289577, -0.022238, 0.0242437, -0.0384814},
 {0.000674249, 0.0120787, -0.0252857, -0.0303046, -0.0107701, 0.0509518, -0.0195247, 0.018887, 0.0319167, 0.0148255, -0.00699161, 0.018185, -0.0296298, 0.00673435, -0.035449, 0.0168359, 0.0323286, -0.027726, 0.00808122, 0.00809217, -0.0061804, -0.026264, 0.0376139, 0.0208765, -0.0156338},
 {-0.0168324, 0.0209191, -0.0124013, -0.0282843, -0.0202274, -0.0365895, 0.0168765, 0.00407291, -0.0115367, 0.0289808, 0.00883407, -0.0235717, -0.00470315, 0.00471405, 0.0335636, -0.0316514, 0.0175162, -0.026709, 0.015489, -0.00943689, -0.0158685, 0.0033616, 0.00082714, 0.0020203, 0.00973415},
 {-0.0256095, 0.00662789, -0.0141576, 0.00808127, 0.0216113, 0.0128214, -8.09252e-005, -0.0229372, 0.0128418, 0.0322685, 0.0156187, 0.0235942, -0.0329976, -0.0161624, 0.00279185, 0.0222234, -0.00406044, 0.0402971, 0.000672794, 0.0155017, -0.00937736, 0.0127979, 0.0105552, -0.0228968, -0.0326052},
 {-0.0329881, 0.000766932, 0.00746532, -0.0303046, -0.0222542, -0.0437724, -0.018149, -0.0316308, -0.012474, -0.0120964, -0.0468584, -0.0228806, 0.00675073, 0.0215499, 0.0406519, -0.0114484, -0.0168339, 0.0295921, 0.0323249, 0.0201904, 0.0167481, 0.0154855, 0.00784876, 0.00471405, 0.0427513},
 {0.0296262, -0.00139494, -0.00887453, -0.0141421, -0.0040129, 0.0176386, -0.0283086, -0.030302, 0.0256684, 0.0148043, 0.0285343, 0.0202188, -0.0269391, -0.0202031, 0.0203892, 0.0296311, -0.0222257, 0.0250581, 0.0101015, -0.0013304, -0.0347054, 0.00942828, 0.00115327, 0.000673436, -0.00414663},
 {-0.00739476, -0.0100531, -0.010194, -0.0141421, 0.0033659, -0.0433147, 0.0235642, 0.00671084, 0.0207089, -0.010101, 0.0193726, -0.0148002, 0.00471736, 0.0255905, 0.0407587, 0.00404061, 0.0228912, -0.00331123, 0.010775, -0.0329998, 0.0236244, 0.0168359, -0.0126428, 0.0296311, 0.0279082},
 {-0.0208822, 0.00803494, 0.0105973, -0.0121218, 0.00944531, -0.0138907, -0.000680416, -0.00941098, -0.0287442, -0.00673305, -0.0119539, -0.0141455, -0.0282842, 0.0121218, 0.0220583, -0.0303046, -0.0181812, 0.00424714, -0.0242437, -0.0323225, -0.0326637, -0.0269374, -0.018939, 0.0202031, -0.0173432},
 {-0.0269358, 0.0236059, 0.00696848, 0.0228968, 0.00536878, -0.0448354, 0.0175095, -0.0128102, -0.0129794, -1.2217e-005, -0.0247832, 0.00941157, -0.02155, -0.015489, -0.0228908, 0.0208765, 0.0154868, -0.019692, 0.0303046, -0.00270967, -0.0138031, 0.00875448, -0.0190988, 0.0175093, 0.0246703},
 {-0.00883243, 0.0104692, 0.0600642, 0.0262259, -0.0240724, -0.0099992, -0.0154278, -0.00452219, -0.00319544, -0.0357589, 0.0594088, 0.0138451, -0.0275076, -0.0161624, -0.0259338, 0.0107749, 0.0175109, -0.00893799, 0.00810027, -0.0159677, -0.00647393, 0.030558, -0.0170984, -0.0161624, -0.0321803},
 {-0.00462679, 0.0163816, -0.0284474, -0.0316514, 0.0160249, 0.00821344, -0.0307414, -0.0165848, -0.0179563, 0.000162142, -0.0177172, 0.00678222, 0.0263018, 4.30346e-009, 0.0196732, 0.0181827, 0.00815776, 0.0272274, -0.030978, -0.000657014, -0.00983983, -0.00136407, -0.0362053, 0.0303046, -0.00959807},
 {0.0168539, -0.0100836, 0.0265925, 0.00673399, -0.0296405, -0.00566162, 0.025632, 0.00948359, -0.0251295, -0.0295997, 0.0347932, -0.0174949, 0.0242434, 0.00134687, 0.0320249, -0.00134687, -0.00267263, 0.0315189, 0.0249171, 0.0242558, -0.00487929, -0.02357, 0.0387875, -0.0175093, 0.00943505},
 {-0.0222046, -0.0254995, 0.00985236, -0.000671243, -0.0121532, 0.0146883, -0.027612, 0.00670845, -0.0067814, 0.0161664, -0.00916057, -0.0309632, 0.032325, 0.0329983, 0.0328335, -0.015489, 0.0087445, 0.00833905, 0.0121218, 0.0262448, 0.0213585, 0.0127908, 0.0199506, -0.00875466, 0.021283},
 {-0.0208812, -0.0296732, -0.00550822, 0.00471411, 0.0134938, 0.0197106, -0.0222613, -0.0310145, -0.0228944, 0.0168095, 0.00571753, -0.0154861, 0.00268302, -0.0195296, 0.00800475, -0.0181827, 0.00268704, 0.00270765, -0.0329983, -0.0276056, -0.0340229, -0.030978, -0.0164176, 0.0188562, -0.0260935},
 {0.018167, -0.0188805, 0.0329868, 0.0282843, 0.0107748, 0.00602611, -0.00875574, -0.0283095, -0.00699423, -0.00877245, -0.00855214, -2.40847e-005, -0.0148206, -0.0181827, -0.0117754, -0.0296311, -0.0195278, -0.028067, -0.00606092, 0.0336727, 0.00499714, -0.0255905, -0.00947131, 0.0329983, -0.015068},
 {0.0249206, 0.0228784, -0.0232721, 0.0336718, -0.0148127, 0.0358672, -0.0303034, 0.0181936, -0.00127634, -0.0228669, 0.0494317, 0.0316489, -0.0242422, 0.0020203, -0.0197242, 0.00336717, -0.011441, -0.0308395, -0.0121218, 0.0188618, -0.0471723, -0.00201974, -0.00212265, 0.0121218, 0.00667431},
 {0.0289636, -0.0242091, -0.00321953, -0.0303046, 0.0208536, -0.0392038, 0.00878654, -0.0302763, -0.00300348, -0.00940026, 0.0240309, 0.0222144, 0.0148196, -0.00808122, 0.0213705, 0.0101015, 0.0107843, -0.00320733, -0.0228968, 0.0074016, 0.0427748, -0.026264, 0.0293034, -0.0296311, 0.0131624},
 {0.00468914, 0.0147169, -0.0184054, -0.0323249, -0.0161092, 0.0274424, -0.033073, 0.00127173, 0.00407428, 0.0086881, 0.013847, -0.0262726, -0.0141591, -0.00942809, 0.0213131, 0.00740778, -0.0330128, -0.0151076, -0.0228968, -0.0262585, 0.0122801, 0.0195299, 0.00577277, -0.00471405, -0.0210297},
 {-0.0195209, 0.00881112, -0.0120594, -0.00673432, 0.0208479, -0.0267208, 0.0155268, -0.0255727, -0.0101519, -0.028261, -0.0207967, -0.0195289, -0.00807488, -0.00471405, 0.0193333, 0.0222234, 0.0195337, -0.02376, 0.0316514, 0.0269309, 0.0573165, 0.0141403, -0.0136342, 0.0202031, -0.0206352},
 {-0.033006, -0.017559, -0.0324574, 0.015489, -0.0282653, 0.0330364, 0.016145, -0.00538907, 0.02737, 0.00807024, 0.0302805, 0.0134682, 0.0296306, -0.0168359, 0.0020086, 0.00673435, 0.0309764, 0.026142, -0.0020204, -0.011438, 0.00507702, 0.0181827, -0.025427, 0.0188562, 0.0249751},
 {0.0168415, -0.0120827, 0.0282377, -0.030978, 0.00134527, -0.00317776, -0.00472167, 0.000652546, 0.0384588, -0.0141518, -0.015466, 6.7292e-006, 0.00471949, 0.0161624, 0.0314106, -0.00202031, -0.0175137, 0.0250241, -0.00808122, -0.0027028, 0.0566175, -0.00337106, 0.00582029, -0.00808122, 0.0492846},
 {0.0255849, -0.027644, 0.0182876, -0.00471402, -0.0215352, -0.0145456, 0.0222139, 0.0147973, -0.00760436, 0.0188635, 0.00975545, -8.42735e-006, 0.0154877, 0.00942809, -0.00350698, 0.000673436, -0.00201813, -0.00433045, -0.0134687, 0.0101106, -0.00500547, 0.0336718, 0.0215546, -0.0134687, -0.00933468},
 {0.01953, 3.57164e-005, -0.00229924, -0.0208765, 0.0020044, -0.018944, -0.00606224, 0.0100717, -0.0189698, 0.010765, -0.031624, 0.0161505, 0.0323249, 0.0269374, -0.0179951, 0.0282843, 0.0202007, -0.0133697, -0.00875466, -0.0154997, 0.012298, 0.0154888, 0.0171533, -0.00404061, 0.0325676},
 {-0.0189265, -0.0285346, 0.0129557, -0.0162001, 0.00218165, -0.0194269, -0.0255136, -0.013965, -0.0376753, 0.0107145, -0.0176507, -0.0204864, 0.0270451, 0.00134687, 0.0177111, 0.0222234, -0.0195294, 0.00036939, -0.0161449, 0.0129841, -0.00609892, 0.0285334, -0.0219684, -0.0296311, 0.0322628},
 {-0.0228109, -0.00382089, 0.0209564, 0.0242429, 0.0227629, -0.00613385, 0.0298725, 0.007006, -0.0088875, 0.0156554, -0.0413151, -0.0161056, -0.0228597, -0.0161624, -0.00270103, 0.0175093, 0.0041197, -0.00551169, 0.00269315, -0.0262456, 0.0487675, 0.0282716, -0.0100662, 0.0114484, -0.0249703},
 {-0.0296119, 0.0290028, -0.0180456, -0.0175093, 0.0188421, -0.0418182, 0.0323713, 0.0148736, 0.00781075, 0.00542883, 0.0254034, -0.024908, -0.0329983, 0.0323249, 0.010975, 0.0242437, -0.0215369, -0.0255732, 0.0127953, 0.0316564, -0.0178295, 0.0329983, -0.0121041, 0.0255905, -0.00051488},
 {-0.0255756, 0.0142122, 0.000272829, -0.0208765, -0.0215716, 0.0113422, -0.00269852, 0.0302876, 0.02414, 0.030306, -0.000551686, 0.000685553, 0.0134807, -0.0215499, -0.00325464, -0.0316514, -0.0101101, 0.00713055, -0.00471401, 0.0309621, 0.0203813, -0.00674035, 0.0103919, -0.00673435, 0.0308629},
 {-0.0107819, 0.0019772, -0.0166356, 0.0336718, 0.0269591, 0.0176056, 0.0242052, 0.00332428, -0.0244391, 0.0336594, -0.0109939, -0.00944105, 0.0329984, 0.015489, -0.00404261, 0.0020203, 0.00470569, -0.0278883, -0.0276108, -0.0228948, -0.0079842, -0.0323249, -0.0186909, 0.0242437, -0.0181196},
 {-0.00742954, -0.0289944, -0.0107377, -0.00606156, -0.0100974, -0.0104846, -0.0255887, 0.000656987, 0.00938959, 0.0101059, -0.00189709, -0.0249424, 0.0255887, -0.00202031, 0.0046756, 0.0329983, 0.0269397, -0.00380674, -0.0195296, 0.0309792, -0.0341601, -0.0114464, 0.00902246, 0.0020203, 0.0236865},
 {0.0309813, -0.0289608, 0.00205028, 0.0168359, 0.00134711, -0.0144248, 0.00875852, 0.0289701, -0.016169, -0.0201804, 0.0703509, 0.00873434, -0.0276092, 0.026264, -0.032344, -0.0208765, 0.0134739, -0.0153622, -0.0148156, 0.0316526, 0.0201068, 0.00942852, 0.00898939, -0.00336718, -0.00729347},
 {-0.00739977, 0.0330349, -0.0141152, -0.0127953, -2.79422e-005, -0.00888711, 0.0054262, 0.0236124, 0.00898463, 0.0155156, 0.0109645, -0.00404383, 0.0134696, -0.00942809, 0.0263571, -0.0215499, -0.00335646, -0.0385275, -0.0114484, 0.0202025, 0.0427039, 0.00673391, -0.0148433, 0.0020203, -0.0347525},
 {-0.0188794, -0.0162526, -0.00963058, -0.0053872, 0.0189056, -0.0255807, 0.022146, -0.0256592, 0.0195844, 0.00801771, 0.0334317, 0.00402695, 0.00334879, -0.0148156, -0.0278355, -0.0101015, -0.00137223, -0.0195315, 0.010775, 0.0228982, 0.0129535, 0.0228968, 0.000585742, 0.0168359, 0.00144062},
 {0.00876413, 0.0195756, -0.0197155, 0.00471401, -0.00137977, -0.0306727, -0.0194954, -0.00940545, -0.00682858, 0.00742528, 0.0231827, -0.0181815, 0.0202032, -0.0323249, 0.0205699, 0.0296311, 0.00943372, -0.0364236, 0.0134687, 0.0336708, 0.0323054, 0.0269372, -0.0250406, -0.026264, -0.0100826},
 {0.0114375, 0.00869962, 0.00737521, -0.0181827, 0.0195474, 0.0146309, 0.00671049, -0.00810934, 0.0064055, -0.0208832, 0.0169338, -0.00809512, 0.00739902, -0.026264, 0.0204078, -0.0289577, -0.0013479, -0.0141034, 0.00942809, 0.022901, -0.047148, 0.0336718, 0.0363515, -0.00673435, 0.0133952},
 {-0.028953, -0.0148035, -0.0335263, 0.00606111, -0.0148128, -0.0335112, 0.0302993, -0.02692, 0.0299347, -0.032329, -0.0174758, -0.00266371, 0.011449, -0.0188562, 0.0163397, -0.0323249, -0.0067379, 0.025486, 0.0255905, 0.0336722, -0.00506785, -0.0202031, -0.0311904, -0.0168359, 0.0360295},
 {-0.0134763, -0.0108285, -0.00108779, 0.0296311, 0.0256032, -0.00334541, 0.0309726, -0.0208768, 0.0251598, -0.0134744, -0.00808197, -0.0128125, -0.00606663, -0.00673435, -0.0198534, 0.0121218, -0.0134647, 0.0241202, 0.0175093, -0.0175048, -0.000569532, 0.026264, 0.0244427, 0.026264, -0.0193433},
 {-0.0222225, -0.00739483, 0.0259372, -0.0329983, 0.0242345, 0.0119492, -0.032995, -0.0161678, 0.0209085, 0.0174983, 0.000817725, -0.0229012, 0.000678514, 0.0195296, -0.0171599, 0.0208765, 0.0316516, -0.0280852, 0.0161624, 0.0141351, -0.0198269, 0.0087546, 0.0256354, 0.0296311, 0.00318137},
 {0.00667236, 0.0166093, 0.0140174, -0.0249528, 0.00216782, -0.00850596, -0.0133943, 0.00826857, -0.0261355, -0.00947033, 0.0129458, 0.0313981, 0.0209932, -0.000673436, 0.0203232, -0.0215499, -0.0188584, 0.000557873, 0.0155089, 0.0163471, 0.0323474, 0.023142, -0.0413478, 0.00740778, -0.00523938},
 {-0.017424, 0.0264805, 0.019721, 0.0255899, -0.00889487, 0.0151413, -0.0125526, 0.00363329, -0.00810372, -0.00993983, 0.00994372, 0.0249822, -0.0208376, 0.0215499, -0.0167388, 0.000673436, 0.00479263, -0.00391496, 0.0114482, 0.00271454, -0.0160432, 0.0242302, 0.00529103, -0.0228968, 0.0405112},
 {0.0235886, -0.0221698, -0.0021312, 0.0101015, -0.0283047, -0.00963707, -0.0262158, -0.00736619, 0.0233431, 0.00137253, -0.00874685, 0.0235835, 0.0107806, 0.0289577, 0.0401109, -0.00202031, -0.0013303, 0.0101433, -0.00673435, 0.00674002, 0.0249244, -0.00606569, -0.0127976, 0.0195296, -0.0181809},
 {-0.0282682, -0.0309088, 0.0147979, 0.0121218, 0.0309593, 0.00124652, 0.00538348, 0.00535734, 0.00541051, -0.0181739, -0.0316438, 0.0215724, -0.018855, 0.0269374, -0.0158537, 0.0161624, 0.0168299, -0.0138937, -0.0296311, -0.0168473, 0.0102751, -0.030978, -0.00466329, -0.0235702, -0.0172009},
 {-0.0330034, -0.0033994, 0.0076505, 0.0336718, -0.00469127, 0.0398127, 0.016122, -0.00543104, -0.00245473, -0.0269551, -0.00730253, 0.00200456, 0.0296317, 0.0175093, -0.00490362, 0.015489, -0.015497, -0.0125904, 0.0249171, 0.0228969, 0.00687018, -0.0249171, 0.0395359, 0.00269374, -0.0256525},
 {0.0336579, 0.0316172, -0.00266463, 0.0141421, -0.0181753, 0.0326126, 0.00403271, -0.00471243, -0.0189826, -0.0201984, 0.00637981, -0.00878455, 0.00335734, 0.0168359, -0.00637276, 0.00134687, 0.0242461, -0.0271857, -0.00134714, -0.0202025, -0.0391359, -0.0134661, -0.00875183, -0.00942809, 0.00306864},
 {0.0249219, -0.0296227, 0.0153776, -0.0175093, -0.0195337, 0.0196962, 0.0222356, 0.0302971, -0.0210565, 0.0336902, 0.0444352, -0.0309928, 0.0276113, -0.0202031, 0.0124336, 0.00134687, -0.0242408, -0.0118346, -0.0249171, -0.0276095, -0.0102322, -0.00134635, -0.0147173, 0.0303046, 0.00789682},
 {-0.0040328, 0.010133, 0.000582397, -0.0013475, -0.00675825, -0.0273251, -0.0255476, -0.00333535, -0.00915421, 0.0303269, 0.038093, -0.0161664, 0.0269375, 0.00404061, 0.00662851, 0.0249171, 0.0262712, -0.0317144, 0.0168359, -0.0316508, 0.0161065, -0.00471468, 0.0286491, 0.0329983, 0.0271688},
 {0.00737991, 0.0329128, 0.0049315, 0.0329983, -0.0113972, -0.00402843, 0.0187866, -0.0108492, 0.00532252, -0.0263215, -0.0129986, -0.00204174, 0.0323246, -0.0228968, -0.0102936, 0.00336717, -0.0256082, -0.00456578, 0.0195296, -0.0101028, -0.0179897, -0.00605549, 0.000837254, -0.0215499, 0.0322163},
 {-0.0114374, -0.0241866, 0.0121462, 0.0127953, -0.00810915, 0.0112757, -0.0174695, -0.0282797, 0.00243883, -0.0235422, 0.00715324, -0.0208619, 0.0276113, -0.0282843, -0.0104834, -0.0114484, 0.0154948, 0.0105354, 0.0255905, 0.0309729, 0.0320155, 0.00605667, -0.0346788, 0.0242437, 0.029655},
 {-0.0148246, -0.00341095, -0.0102313, 0.0202031, 0.00406069, -0.0060781, 0.0121013, 0.00402551, 0.0211469, 0.0013481, 0.00645002, 0.0134654, 0.00740202, -0.0161624, -0.0253219, 0.0303046, -0.00202234, -0.0131218, -0.0289577, 0.0329986, -0.0417727, -0.0316514, 0.0065098, 0.0175093, -0.00831161},
 {0.0121283, 0.0269359, 0.00118172, 0.00808122, 0.0330011, -0.00662692, -0.0303142, -0.00334326, 0.0214642, 0.0242362, -0.00763822, -0.00401772, 0.0329983, -0.030978, 0.0052498, 0.0255905, 0.0249153, 0.0438679, 0.026264, -0.0188558, 0.0344562, 0.0282843, 0.0181148, 0.0276108, 0.0416489},
 {0.0289509, -0.0229434, 0.0145296, 0.0215499, 0.0215596, 0.0343609, -0.00876509, -0.0316426, -0.0178849, 0.025591, 0.0367564, -0.0209006, 0.0289576, -0.0282843, -0.00162089, 0.0242437, 0.0235731, -0.0256308, 0.0336718, -0.0303015, 0.00667051, -0.0114477, 0.00734958, -0.0202031, -0.0248239},
 {0.0336722, -0.0269203, -0.00850551, -9.34951e-008, -0.00405505, 0.00276488, 0.0148164, 4.87079e-006, -0.0231614, 0.00807658, -0.016746, 0.0309726, -0.0329983, -0.0303046, -0.0199559, -0.00471405, -0.0168356, -0.0190277, -0.0242437, -0.00472478, 0.00839385, 0.010775, 0.0242436, -0.0242437, -0.00568975},
 {-0.0256518, -0.0143704, -0.0110161, 0.0275755, 0.0344672, -0.00503017, -0.0362963, -0.0348655, -0.0234177, 0.0134051, -0.0331037, 0.00985182, 0.0102228, 0.00269374, 0.0485448, -0.010775, 0.0154847, -0.00251477, 0.00204186, -0.0267624, 0.00456347, 0.00428735, -0.0472572, 0.0175093, 0.0402499},
 {0.0229816, 0.0190539, 0.000799282, -0.0262645, 0.00996801, 0.0323397, 0.00697403, 0.0150864, -0.0298425, -0.0234017, 0.000701651, -0.00868545, 0.00744485, -0.0289577, 0.0162361, -0.00740779, 0.0317179, -0.00207773, 0.00740705, -0.0168116, -0.0195861, 0.0249054, 0.0181528, -0.0255905, 0.0267379},
 {-0.0248983, -0.0100669, -0.0298408, 0.0141421, -0.0303228, 0.0217089, -0.00331994, -0.0161105, -0.00223871, 0.0108159, 0.005131, -0.0114271, -0.0316514, -0.0148156, -0.0332421, 0.00808122, 0.0336831, 0.0270804, -0.0242437, -0.00807119, -0.0251593, -0.0309781, 0.00927858, 0.00942809, 0.0238649},
 {-0.00469155, -0.0228276, 0.000235492, -0.0323249, -0.0155094, 0.00695338, 0.0202084, 0.0316105, -0.0131733, -0.0289556, 0.0330435, -0.00873222, 0.0101081, -2.68381e-010, 0.00442114, 0.0228968, -0.013474, -0.0337087, 0.0215499, -0.0269436, -0.0284032, 0.014141, -0.026782, -0.0202031, 0.0355435},
 {0.0127917, 0.00469649, -0.00887873, -0.0127953, -0.0208631, -0.0159612, -0.0316885, 0.0188149, -0.0152678, 0.0127779, 0.00518508, -0.00539197, 0.0215498, 0.0195296, 0.0142689, -0.0282843, 0.03232, 0.018509, 0.0181827, -0.0107753, -0.030414, 0.0208764, 0.0168751, -0.0329983, -0.0189977},
 {-0.0101175, -0.0276369, -0.00882271, -0.00673472, 0.0181864, 0.0288976, -0.00809681, 0.00540167, 0.0108935, -0.0195287, 0.0108635, -0.0168534, 0.0336712, -0.00942809, 0.0107893, -0.0114484, 0.00808392, 0.000751367, 0.00740778, 0.0188564, 0.0213649, -0.0215498, -0.0278614, -0.00202031, 0.0063486},
 {0.0181865, -0.0215431, 0.0147684, -0.0323249, -0.0101114, 0.0275491, -0.0215374, 0.0262554, 0.0043349, 0.00809649, -0.0020829, -0.00338065, 0.016163, -0.0269374, -0.000853531, -0.0289577, -0.021547, -0.0237513, -0.0296311, -0.0107736, -0.0159171, 0.0195296, -0.013307, -0.0127953, 0.0111677},
 {0.0242475, 0.033007, 0.0179113, -0.0101015, -0.0323392, 0.0140107, -0.0107419, -0.00871607, -0.028673, 0.00271613, -0.0307428, -0.0330073, -0.0303052, -0.00606092, -0.00154777, -0.00942809, -0.00268027, 0.0281059, -0.0181827, -0.000671154, -0.0271032, 0.0316514, -0.0318194, -0.030978, 0.0103618},
 {0.0323055, -0.00748875, -0.0150411, 0.00269275, 0.0296785, -0.0362758, 0.0308991, 0.000608551, -0.0137388, 0.0174548, 0.0199766, -0.00945706, -1.73609e-005, -0.0195296, 0.00940597, -0.0235702, -0.0215679, 0.0132535, -0.00404061, 0.00673104, -0.0121703, 0.00337279, -0.00541483, 0.00606091, 0.0290795},
 {0.0161693, -0.00533313, -0.0106503, -0.0148156, 0.0309564, -0.035119, 0.024956, 0.0148263, -0.020702, 0.0134983, -0.00283743, 0.0040416, -0.0100978, 0.030978, 0.00899633, 0.0168359, -0.019525, -0.029448, 0.0202031, -0.0309811, -0.0177198, -0.0208765, -0.003845, -0.0168359, 0.0252036},
 {-0.00674443, 0.0147866, -0.0221461, 0.00875466, 0.0155013, 0.00943065, -0.0128135, -0.0188846, -0.0261043, 0.0242438, 0.012503, 0.0147968, -0.0255906, 0.0228968, -0.0382141, 0.0255905, -0.0181853, 0.00177112, 0.00538748, 0.0161639, -0.000219928, 0.00808135, 0.00916233, -0.0316514, 0.0179079},
 {-0.0127906, -0.00136352, -0.0210716, -0.0141421, 0.00135386, -0.010389, 0.0174955, -0.0330009, -0.0280306, 0.02693, 0.00683041, -0.0161659, -0.0282843, -0.00404061, 0.0133091, -0.0289577, -0.0161633, 0.0300683, 0.00336717, 0.0107777, -0.0350591, -0.0269374, -0.021454, -0.0101015, -0.000372179},
 {0.00133905, -0.0135083, 0.00975265, -0.0323249, -0.00740115, 0.00123524, 0.0188507, 0.00606323, 0.0194557, 4.78836e-006, -0.00219093, -0.0283012, -0.0309779, -0.0181827, 0.00463879, -0.0228968, 0.00673591, 0.00312437, 0.0269374, -0.0303037, -0.00236433, 0.0228968, 0.00365147, 0.0289577, 0.0203164},
 {0.0148181, -0.0302784, -0.0121849, 0.0101015, -0.0101134, 0.0174769, -0.0161624, -0.0330034, -0.0219085, 0.0195314, -0.0482659, -0.0121202, -0.00942683, 0.00673435, 0.0128225, 0.0269374, 0.030977, -0.0332508, -0.0269374, -0.0289628, 0.0358024, 0.0228968, -0.0184456, -0.0181827, 0.004186},
 {-0.0344011, -0.000207206, -0.00989575, -0.0141767, 0.0149405, -0.00804329, -0.00598847, 0.00483065, 0.000518186, 0.01475, -0.0644232, 0.0125502, 0.00416877, -0.00875466, 0.0531771, 0.0188562, 0.00807502, -0.00818336, -0.00806071, -0.0267734, 0.00506223, 0.010346, -0.000594466, -0.0121218, 0.0364524},
 {0.0229794, -0.0274247, 0.0227219, 0.0323249, 0.0335553, -0.0132964, 0.00361172, -0.0273264, -0.0330202, 0.0250901, 0.0130281, 0.0195911, 0.000709066, -0.00740779, -0.00764994, 0.030978, -0.0268624, -0.0296853, 0.0255905, -0.0201778, -0.000918762, 0.0222122, 0.0337657, 0.0141421, -0.0194769},
 {0.0121424, 0.0337123, 0.00576691, -0.00673431, -0.00473916, -0.0133347, 0.0209212, 0.00140853, -0.0312758, 0.00678188, -0.0129599, 0.00136248, -0.010096, -0.0141421, -0.00139811, 0.00404061, -0.0127805, -0.00901886, 0.0181827, -0.0201998, -0.00253678, 0.00605689, -0.0293844, -0.026264, 0.00769305},
 {-0.0296127, 0.0175812, 0.0176495, -0.0228968, 0.0073889, 0.0084037, -0.0202045, 0.0120878, 0.00327953, 0.0134693, 0.0202418, 0.004062, -0.0228957, 0.030978, -0.00780192, 0.0188562, -0.014148, -0.0139649, -0.0329983, -0.0303113, 0.0302721, -0.0323249, -0.0159608, -0.0282843, -0.0226511},
 {0.00201697, -0.00809655, -0.0114799, 0.0161624, 0.0175205, -0.0126166, -0.0303419, -0.0310305, -0.0200129, 0.024226, 0.0045067, -0.0256014, -0.0181828, -0.0188562, 0.0217061, 0.0323249, -0.0323298, -0.00295192, 0.0249171, -0.0235723, -0.00930659, 0.0269374, 0.0136026, 0.0316514, -0.00416493},
 {-0.00608101, 0.0188111, 0.02094, -0.00606149, -0.0161595, -0.0126854, -0.00269959, -0.0141559, 0.0276945, -0.0202102, -0.0140345, 0.0147876, -0.0323249, 0.000673436, 0.00849913, 0.0208765, -0.0188526, -0.0299894, -0.00471405, 0.0127974, -0.0026074, -0.0303044, -0.0164503, 0.0148156, -0.0119282},
 {0.0222297, -0.0242116, -0.0200282, 0.0121218, 0.0302949, 0.0160465, -0.00335533, 0.0208714, -0.00324753, -0.0201904, 0.0284672, 0.0047112, -0.028283, 0.0222234, 0.0135069, -0.0249171, -0.00538628, -0.0111066, -0.0168359, 0.00942546, 0.00362787, 0.00268917, -0.0282609, 0.0181827, 0.0208088},
 {0.0215563, -0.00872468, -0.00785663, -0.0208765, -2.20023e-005, 0.0244476, -0.00265607, 0.00275125, 0.0230594, -0.0181629, 0.0260847, -0.010096, -0.0309779, -0.0276108, 0.00310967, 0.00740778, -0.0141332, -0.0220514, 0.0289577, -0.0074065, -0.00661389, -0.026264, -0.0310364, -0.00471405, -0.0197223},
 {-2.39692e-005, -0.00545394, 0.0116466, -0.0242437, -0.00466385, -0.0371013, 0.0214734, -0.0323822, 0.0136687, 0.0302482, 0.0280328, -0.00742924, 0.0175073, -0.015489, 0.0024605, 0.00269374, -0.0128168, -0.00955945, -0.0161624, 0.0175068, -0.0219266, 0.00269884, -8.47916e-006, 0.0269374, 0.0161734},
 {-0.0302989, -0.0154512, -0.0179079, 0.0101015, -0.0195486, 0.0123579, -0.0107413, -0.0309511, 0.0156237, 0.0141665, 0.00136868, -0.0107755, -0.00942437, -0.010775, -0.0119454, 0.030978, -0.000665206, -0.00119993, 0.00673435, 0.0255901, 0.0265949, -0.0148156, -0.0331799, 0.0228968, -0.00711289},
 {0.0175023, 0.0134424, -0.00780771, -0.0208765, -0.0100927, -0.01539, 0.00603952, 0.0329683, -0.0286346, -0.0175229, 0.0305143, 0.0188308, -0.0329983, -0.0161624, 0.00841082, -0.00875466, -0.00741273, -0.0218878, -0.0208765, -0.0202034, 0.00688196, -0.030978, -1.04066e-005, 0.0020203, -0.0295699},
 {-0.0255831, 0.00673212, -0.00155795, -0.00673404, -0.000665874, -0.0108795, 0.0181703, 0.00741757, -0.0177603, -0.0168444, -0.0261554, 0.0282986, 0.0141409, -0.00269374, -0.0373626, 0.00538748, -0.0101042, -0.02608, 0.00134684, -0.0208775, -0.0119863, 0.00336837, 0.00134967, 0.0188562, 0.011118},
 {-0.0175124, -0.0208998, 0.0062227, 0.0323249, 0.0127989, -0.0151327, -0.00741508, -0.0222384, 0.0275094, 0.031651, 0.0156692, 0.0228881, 0.0161624, -0.0323249, -0.0138519, 0.00808122, 0.0161622, -0.00945527, 0.0175093, -0.00538558, -0.0187559, 0.0161624, -0.00678589, -0.00134687, -0.0117765},
 {0.0101033, 0.0141529, 0.00777347, 0.0296311, -0.0222318, -0.00791045, 0.027606, 0.0195186, 0.0161218, 0.00470866, 0.0346877, -0.0202046, 0.0222234, -0.0222234, 0.0246331, -0.0188562, 0.0107745, -0.0160812, 0.0289577, 0.00942391, -0.0226108, 0.0329983, 0.0246532, -0.0222234, -0.0342588},
 {0.0113844, -0.0116705, 0.0140528, 0.0275748, 0.0196446, -0.0142795, 0.0148889, -0.0247554, -0.0328484, -0.00546253, -0.0468426, -0.0332587, -0.00660803, 0.0316514, -0.00699372, -0.0316514, -0.0296362, -0.0174395, -0.0080608, 0.017674, 0.0169714, 0.02853, 0.00884535, -0.0249171, -0.00665291},
 {0.01086, -0.0328089, 0.0276699, 0.00404325, -0.0122515, 0.0310364, -0.0132325, 0.01309, -4.49648e-005, 0.0297962, -0.0110536, 0.0337372, 0.010809, 0.0336718, -0.012725, -0.0228968, 0.0155695, -0.0224681, 0.026264, -0.0302768, 0.0161132, 0.0208646, -0.0160295, -0.00740779, 0.0144796},
 {-0.0100789, 0.029019, -0.0260522, -0.0161624, -0.0303278, -0.0449215, 0.0162088, 0.00949234, 0.0101539, 0.000715542, 0.0265577, -0.00603189, -0.0215497, -0.0134687, -0.00786687, 0.0215499, 0.0027107, 0.0254545, -0.0303046, 0.00673889, -0.0109006, -0.0222239, -0.018463, -0.0134687, -0.0245902},
 {0.00406032, 0.00343252, 0.00997455, 0.0255905, 0.0188458, 0.0309017, 0.00538567, -0.00876329, -0.0113196, -0.0154934, 0.0170564, -0.032986, -0.0303028, -0.015489, -0.0158421, 0.00269374, 0.0100959, 0.0238715, -0.0222234, 0.00941936, 0.0276177, -0.0202032, -0.00419222, -0.0168359, 0.00722393},
 {-0.0181857, -0.0128069, 0.00833544, 0.0188562, 0.0202141, -0.00554749, -0.0188851, -0.00273821, 0.0235804, -0.017533, 0.0324826, -0.0107825, 0.0208765, -0.0208765, -0.0214614, 0.0141421, -0.00876357, 0.0117926, -0.00875466, 0.000668836, -0.0119673, -0.0161625, -0.0244245, 0.0181827, -0.0284541},
 {-0.014833, -0.0256428, 0.0277874, -0.00942809, -0.000665299, 0.0317712, -0.0269369, 0.00269393, -0.0142289, -0.0202149, 0.00336573, 0.0309601, -0.0309795, -0.0269374, 0.00190142, 0.0127953, -0.0168336, 0.0172312, 0.0242437, 0.0168401, -0.0211216, -0.000666425, -0.00948026, -0.015489, 0.0220916},
 {-0.00672206, 0.018901, 0.0214901, -0.0228968, -0.028295, 0.016277, -0.0195182, 0.0114459, 0.0212687, 0.0128098, -0.0255774, -0.01817, -0.0249155, -0.030978, 0.00273352, 0.0161624, 0.0114481, 0.0271953, 0.0276108, 0.0255884, 0.00447641, 0.029631, 0.00315372, -0.0276108, 0.00516713},
 {-0.0296212, -0.000622137, 0.0234678, -0.0316514, 0.0296126, -0.0039353, 0.00743371, 0.0323711, 0.000296446, -0.0060375, -0.0341064, 0.00338882, 0.0303048, -0.00942809, -0.0110449, -0.00942809, 0.0269429, -0.0255808, -0.0134687, 0.0222228, 0.0242622, 0.0208765, -0.0272403, -0.0215499, 0.0133511},
 {-0.0155083, -0.0283248, -0.0142628, 0.0127957, -0.00332397, 0.00180405, -0.027684, -0.0209551, -0.00961891, -0.0310372, -0.0461953, -0.00473097, 0.0235695, -8.60812e-010, 0.0255471, 0.0249171, -0.0296523, -0.00130801, 0.000674114, -0.0229051, 0.0358938, 0.00135002, -0.00846666, -0.030978, 0.0266299},
 {-0.00537996, -0.0100824, 0.031776, 0.00808122, 0.0195145, 0.0270542, 0.0276473, 0.0296574, -0.0161419, -0.0201829, 0.0105443, 0.00269551, -0.0127941, 0.0161624, 0.00787197, -0.0141421, -0.00268278, 0.0025909, 0.0235702, -0.00538488, -0.0109524, -0.0222234, 0.00686875, 0.0121218, 0.0203961},
 {0.0114371, -0.0141968, 0.0204738, -0.00808122, -0.0302936, -0.0208554, 0.0282743, 0.0134379, 0.0231153, -0.0242472, -0.00184233, -0.0215688, 0.0242436, 0.0329983, -0.0223753, 0.010775, 0.0316499, -0.00752624, -0.0329983, 0.0323251, -0.0276635, 0.0222234, 0.00375367, 0.00538748, 0.00210144},
 {-0.0148086, -0.0181727, -0.0347912, -0.0134687, -0.0309729, 0.00171786, 0.00132298, -0.0181576, 0.018455, 0.0249082, -0.006617, 0.0168526, 0.013469, 0.0303046, 0.0137691, -0.0188562, 0.0202001, 0.0344862, -0.0235702, 0.0222233, 0.0174771, -0.0235702, 0.0023752, 0.010775, -0.0073459},
 {0.0329929, 0.0147847, 0.0147783, 0.0276108, 0.026268, -0.00708287, -0.0202104, -0.00137333, -0.0348347, 0.00133662, -0.0239061, -0.0330155, 0.0134691, -0.026264, 0.00232484, -0.0235702, 0.0188559, 0.00515081, -0.0181827, 0.0309798, 0.00686538, 0.00673606, -0.0293334, 0.0228968, -0.0274031},
 {-0.0330008, 0.0201939, -0.0134561, 0.0168359, -0.0208801, 0.0222081, -0.0309819, -0.0121505, 0.000151954, 0.01076, -0.0173043, -0.0323461, -0.00269544, 0.00740778, 0.0211275, -0.0255905, 0.0228977, 0.0059448, 0.0020203, 0.0101011, 0.00413759, -0.0222234, 0.0160362, -0.0101015, -0.00461568},
 {0.0295639, 0.0233615, 0.00928005, -0.000710395, 0.0263793, -0.0359766, -0.000602345, 0.0264429, -0.0185059, -0.000753866, 0.00929912, -0.0164412, -0.0274848, -0.00269374, 0.0492759, 0.00875464, -0.0181859, -0.0358671, -0.00469218, 0.0271004, 0.0607915, -0.00379283, -0.0194805, -0.010775, 0.0429773},
 {-0.0261828, -0.00790112, -0.0254543, -0.00269137, -0.0277327, -0.00182972, 0.00764404, -0.029346, -0.0051833, -0.0240781, 0.0203, -0.00262956, 0.00878815, 0.030978, 0.0194301, -0.0296311, -0.00867522, 0.0211903, -0.0168359, -0.0195021, 0.0261252, 0.00267833, 0.0124783, -0.0114484, 0.00406574},
 {-0.0201859, 0.0155388, -0.00870927, 0.0303046, -0.0310019, -0.00595902, 0.0202475, -0.0295857, -0.000535211, -0.0120821, -0.00885659, 0.00742774, 0.0134733, -0.0141421, 0.0359569, 0.00942809, -0.00941388, -0.01934, 0.0282843, -0.0242414, 0.0278522, -0.0175098, -0.028998, 0.0114484, 0.0214667},
 {0.00876937, 0.0114867, -0.00276016, 0.0067347, -0.0202099, -0.0190639, 0.0181761, -0.0141498, -0.00566343, -0.0161729, 0.00278995, -0.00336368, 0.0127995, 0.0020203, 0.0230228, -0.0235702, 0.00807552, 0.0121905, -0.0228968, 0.0336691, -0.00173443, 0.00605779, -0.000626359, -0.0195296, -0.00594956},
 {-0.00135415, 0.00199562, 0.0294057, 0.0228968, 0.0269497, -0.0123931, -0.0148458, -0.016206, -0.00686758, -0.0128143, -0.000671123, -0.0175223, -0.0303045, 0.0323249, 0.00183707, 0.0296311, 0.00470372, -0.0260574, 0.0141421, -0.00471911, 0.0020853, -0.0202031, 0.0390897, 0.00538748, 0.00608338},
 {0.0134529, 0.0336309, 0.0156588, -0.0141421, -0.0020111, 0.00726678, 0.0161624, 0.0215474, -0.0125306, 0.033676, 0.0336236, -0.0181953, -0.00337876, 0.030978, -0.0161789, 0.0188562, 0.0323263, -0.00650636, -0.00673435, 0.0289615, -0.0308627, -0.0134676, 0.0170931, 0.0127953, 0.0014},
 {-0.00807216, 0.0168589, 0.00988069, -0.0242437, 0.00267983, -0.00639754, 0.0134817, -0.0181899, 0.00559188, -0.000663537, 0.0414251, -0.00876167, -0.00672758, 0.0195296, -0.0194186, -0.0276108, 0.0282844, -0.0306716, -0.0289577, -0.0222272, 0.0303498, 0.0188562, 0.0157483, 0.0249171, -0.02844},
 {0.0249273, -0.00262854, 0.00622394, -0.0242437, -0.000698649, -0.00345865, 0.0249431, -0.0322925, 0.0299738, -0.0235395, -0.0130438, -0.0174902, -0.0215496, 0.0101015, -0.0138069, 0.0242437, 0.00606766, 0.00631926, 0.0195296, 0.0235682, 0.0199983, 0.0269374, 0.0120072, -0.00875466, -0.0125027},
 {0.0168198, 0.0249038, 0.012402, -0.0276108, 0.00475173, -0.0486495, -0.0142133, -0.00883885, -0.00457303, 0.0309411, -0.0626744, 0.00471594, 0.0269387, -0.00942809, 0.05124, 0.0195296, 0.0127715, -0.00804878, -0.0329983, 0.0107625, 0.0395823, 0.0134664, 0.00218255, -0.0255905, 0.0276687},
 {-0.0168303, 0.0215706, 0.0178292, 0.0282843, 0.0336557, -0.0254907, -0.000635442, 0.0209107, -0.0355419, 0.0182045, 0.0263696, 0.0235683, -0.0175093, -0.0141421, -0.0137748, -0.00942809, -0.0114391, -0.0234333, -0.0161624, -0.00875281, -0.00132158, -0.0121213, 0.00980349, -0.0316514, 0.00922493},
 {0.0302931, -0.00141162, 0.0242031, -0.0195296, -0.0289489, 0.007197, 0.0114357, -0.026286, -0.0292044, 0.0067242, 0.0077698, -0.00340277, 0.0323249, -0.0296311, -0.0137178, -0.00336718, -0.00875503, 0.0216581, -0.0269374, 0.0269403, -0.0151998, -0.0033604, 0.0205976, -0.0296311, 0.0133539},
 {-0.0121197, 0.0195433, -0.0246057, 0.00808122, 0.00741071, -0.0242365, 0.0248947, 0.0168266, 0.0364354, -0.0154968, -0.0124476, -0.0323193, 0.0242442, 0.00134687, 0.0344231, 0.0195296, -0.0208783, -0.00761403, -0.00471405, -3.75408e-006, 0.0322754, 0.00201688, -0.0383185, -0.0101015, 0.0181204},
 {0.00874495, 0.00400213, 0.0303674, 0.0141421, -0.0282809, 0.0298752, 0.0101048, -0.0134857, 0.0153963, 0.0282805, -0.0170793, 0.026241, -0.00942727, -0.0127953, 0.0272354, 0.0121218, -0.0127936, -0.0371962, 0.0249171, -0.0107728, 0.0119773, -0.00201792, -0.0180619, 0.0215499, 0.0205454},
 {-0.0289606, 0.0242381, 0.0155372, 0.0161624, 0.00403509, 0.0131447, 0.0316684, 0.0255889, 0.0119002, 0.00403655, 0.00532912, 0.0336573, -0.00403962, -0.0228968, 0.0157648, -0.0242437, -0.0249154, 0.00298025, -0.0215499, -0.0208765, 0.0153568, -0.0202031, 0.028752, -0.0208765, -0.0295994},
 {0.018119, 0.0179885, 0.0252783, 0.0181462, -0.00190757, -0.05603, -0.012711, -0.030872, -0.0195379, 0.00327671, -0.0410034, -0.0292508, 0.0196596, 0.0316514, 0.00614575, 0.00201902, -0.0336745, -0.010827, 0.0155104, -0.0308233, 0.0529805, 0.0231416, -0.023165, -0.0235702, 0.0571456},
 {-0.0255126, 0.000176396, 0.0229837, 0.0208756, 0.0220985, 0.0114702, 0.0204412, 0.0137406, 0.0199973, 0.027774, -0.023873, 0.0121695, 3.13234e-005, 0.00538748, 0.0129384, -0.000673435, -0.0106951, -0.0113332, 0.014142, 0.0195586, 0.0114275, -0.0148293, 0.0324464, 0.0255905, 0.00807462},
 {0.00877186, 0.0296838, 0.0161795, -0.0235702, 0.0242141, -0.00164489, -0.0315999, 0.0283191, -0.0266426, -0.00669214, -0.011214, 0.0296257, 0.012798, 0.0188562, 0.0274507, 0.0276108, -0.0195169, -0.0108611, -0.00673435, -0.0289562, 0.0147972, 0.00336466, 0.0365303, -0.0269374, -0.0341277},
 {0.00338234, -0.0228673, 0.0424731, -0.0188562, 0.0323198, 0.00534722, -0.0283015, -0.0127992, -0.0145009, -0.000682501, 0.0384932, 0.0329989, 0.0107768, 0.0208765, -0.0142907, -0.0114484, 0.020873, 0.000336412, -0.00404061, -0.0188612, -0.00971314, 0.0235702, 0.0240025, 0.00673435, -0.0201788},
 {-0.0101077, -0.00877952, 0.0382818, -0.026264, -0.0201929, -0.0236702, 0.0134297, 0.026894, -0.017824, 0.0242274, 0.00782593, 0.0195155, 0.0276109, 0.00336717, 0.00900239, 0.0020203, -0.0255959, 0.00300321, -0.0316514, 0.0329972, 0.0148887, -0.0222234, 0.0369977, -0.00740779, 0.0208793},
 {0.0147997, -0.0283384, 0.0242396, -0.00942808, -0.0148083, 0.000536525, -0.0134772, -0.00202122, 0.000784107, 0.0242396, -0.0163173, -0.0255974, -0.02155, -0.0235702, -0.0285521, 0.00942809, 0.0202062, 0.0233194, 0.0276108, -0.0303, -0.0142724, 0.0303046, 0.0245643, 0.00808122, -0.0370275},
 {0.0316569, -0.00333977, -0.00678047, 0.0269374, -0.0188673, 0.00123448, 0.020212, -0.0181764, -0.0130978, 0.0047124, 0.0237937, -0.0303191, 0.0168357, -0.030978, 0.0316431, 0.0269374, -0.00336618, -0.00908871, 5.47378e-007, -0.031652, -0.0160632, -0.0114486, -0.0195569, 0.0289577, -0.0249451},
 {0.00337685, 0.0027398, -0.000603021, -0.0188562, -0.00675656, -0.0188154, -0.02017, -0.0161275, 0.00322065, 0.0289702, -0.0262104, 0.00471616, -0.0181833, 0.00606091, 0.0246688, 0.0228968, -0.0134626, -0.0319701, 2.14182e-007, -0.0026974, 0.0228243, -0.0141439, 0.0252629, 0.0235702, -0.00723097},
 {-0.0040624, 0.00738014, 0.00196097, -0.00538758, 0.0276448, -0.0370744, -0.0115252, 0.00193824, -0.0268247, -0.024291, -0.0208083, -0.00876627, -0.0296316, -0.026264, 0.0239606, -0.0114484, 0.0087309, -0.00601083, -0.030978, -0.0128099, 0.00623268, -0.0309788, 0.024037, 0.0329983, 0.0385916},
 {0.00876255, -0.00199148, 0.0429415, -0.0202031, 0.0181659, 0.0192955, 0.0310054, -0.00734829, 0.00788455, -0.0181667, 0.0213137, 0.0181771, -0.0101028, 0.00471405, 0.00934606, -0.0228968, -0.0181769, -0.0364187, 0.0249171, -0.028284, -0.0169204, 0.00740737, 0.0273525, 0.00471405, -0.00647787},
 {-0.0161692, 0.00266348, 0.0148667, 0.00875466, -0.0134582, 0.00327835, -0.0074282, -0.0101074, -0.00241728, -0.0256056, 0.023815, 0.0296084, -0.003375, -0.0195296, -0.0235553, 0.0296311, -0.000676117, 0.0106546, -0.0222234, -0.0121215, -0.0146644, -0.0020153, 0.0325326, -0.0121218, 0.00688442},
 {0.023571, -0.0275995, 0.00470339, -0.0222234, 0.00741301, -0.0270042, -0.0114636, 0.0222043, -0.010322, 0.0235626, 0.00508214, 0.0127895, 0.0269374, -0.00942809, 0.0228799, 0.0121218, -0.0134713, -0.0161038, -0.0208765, 0.00471273, -0.0222259, -0.0316514, 0.0175126, -0.015489, 0.00604418},
 {-0.0107797, 0.0201785, -0.00607978, -0.0296311, -0.011444, 0.00410598, -0.0242437, -0.0269578, -0.0188753, 0.0053833, -0.0241001, -0.0202133, -0.0121228, 0.0323249, -0.0187167, 0.0215499, 0.0134703, 0.0135326, 0.0282843, 0.014818, -0.0351354, -0.00269198, 0.000159623, 0.026264, -0.00327081},
 {0.0148147, 0.0141306, 0.0416799, 0.0202031, -0.0141451, -0.0313799, -0.0168322, -0.00268736, -0.0213885, 8.54804e-006, -0.00773794, 0.0202003, -0.00606114, -0.0282843, 0.0288727, -0.0255905, 0.0329991, 0.0175371, -0.0249171, -0.0168356, -0.0237513, -0.026264, -0.0103133, -0.010775, -0.0324017},
 {-0.018917, -0.00896122, -0.00615136, 0.0019842, -0.0221152, -0.0803215, -0.00933986, -0.0288157, 0.0239322, 0.0187791, -0.0178982, -0.000287505, 0.0311109, 0.0148156, 0.0249234, -0.0296311, -0.0114556, 0.0075689, -0.0242239, 0.0116025, 0.0794621, -0.00514503, -0.0294465, -0.0202031, 0.0245515},
 {8.26199e-005, 0.0325016, 0.00486237, -0.00538535, 0.0133411, 0.0211285, 0.019765, -0.0307069, -0.0101943, -0.010604, -0.0125442, 0.0242926, -0.0181529, 0.0175093, 0.0222046, -0.0222234, -0.0127167, -0.0260695, 0.00336617, -0.0033362, 0.0293178, -0.0134823, 0.019327, -0.00134687, 0.000744485},
 {0.00540841, -0.00196123, 0.0292207, -0.0202031, -0.00542187, 0.00852478, -0.0329498, 0.0236057, -0.0190377, -0.0275774, 0.0368478, 0.000663854, 1.17401e-005, 0.0269374, 0.026257, -0.0222234, -0.0316424, -0.0413382, -0.00269377, -0.0215517, 0.0182796, -0.00134965, 0.0128066, 0.015489, -0.034571},
 {-0.00941351, 0.0229273, -0.0121375, -0.0127953, 0.0222215, 0.00218596, 0.00335317, 0.0181669, -0.00456327, 0.0222209, -0.00343012, 0.0114572, 0.0127987, -0.0202031, -0.0193268, 0.00134687, 0.0175053, -0.000508949, 0.0323249, 0.000669447, -0.0438135, -0.0249171, -0.0226077, 0.0215499, -0.0178348},
 {-0.0229008, -0.0168468, 0.012736, 0.0336718, -0.0195182, -0.00256342, 0.0161247, 0.0221739, 0.0125858, -0.0188732, 0.00682754, -0.0316629, -0.0148153, -0.0188562, -0.0132671, -0.00606092, 0.00268453, -0.0358557, -0.0289577, 0.0309754, -0.0188247, 0.00808153, 0.0178337, 0.0208765, -0.00951879},
 {0.00132427, 0.024188, 0.000347054, -0.00538822, 0.00943638, -0.0209877, -0.0148221, -0.0289514, 0.0290804, -0.00404037, 0.025296, 0.0107611, 0.00739863, -0.015489, 0.00350961, -0.0202031, -0.022219, -0.00367303, 0.00538748, 0.0134794, -0.0192051, 0.0336718, 0.0265779, 0.0195296, -0.0124908},
 {-0.0127873, -0.0100676, 0.0211983, 0.030978, 0.0154735, -0.00852302, -0.0309675, 0.0329946, 0.00795285, -0.00136695, 0.00298216, 0.0235553, -0.029631, -0.00336718, -0.00590409, 0.00606091, -0.0222228, 0.00875437, 0.0134687, 0.00807548, -0.00188461, 0.0127948, -0.0123667, -0.00202031, 0.0278119},
 {-0.02626, 0.0316763, -0.00985961, 0.0175093, -0.0148372, -0.030337, -0.00130921, 0.0114802, -0.0158241, 0.0249168, 0.0182784, 0.00538183, 0.0242437, -0.00134687, -0.000395457, -0.00942809, -0.00874783, 0.00356101, -0.0255905, -0.0161617, -0.0121541, 0.00471248, 0.00870356, 0.0296311, -0.0192584},
 {0.0174883, -0.0303605, -0.0151691, -0.030978, -0.019495, 0.0347061, 0.0288857, -0.0128687, 0.0230394, -0.00678418, -0.0263427, -0.0303185, -0.00607534, 0.0161624, -0.0296175, -0.0121218, 0.0222056, -0.0310553, -0.0195296, 0.0148084, -0.00370592, -0.0202033, 0.00821944, -0.0168359, -0.0126725},
 {-0.0208702, 0.0155079, 0.011582, 0.0235702, -0.0330105, 0.00498983, -0.000642729, -0.0309201, -0.0302331, 0.00675971, 0.00857077, 0.0154928, 0.0168359, -0.0101015, 0.0271043, -0.0215499, -0.0228901, -0.00205924, 0.0101015, -0.0269344, -0.00866956, -0.0127961, -0.019496, -0.0242437, -0.0336619},
 {0.0282792, -0.0135018, 0.00960258, -0.0222234, 0.0242525, -0.00969456, -0.0107958, -0.00674067, 0.0194089, -0.00675066, -0.0138919, 0.0255732, 0.0121209, -0.0228968, -0.0207142, 0.0235702, 0.0316503, -0.0218293, 0.0255905, -0.0235683, -0.00753618, 4.21752e-006, 0.0332067, -0.0188562, 0.0181014},
 {-0.0161607, 0.028282, -0.0182175, -0.00471402, -0.017505, -0.0220129, -0.0080937, 0.0175, -0.0332931, -0.0289728, -0.00783105, 0.0296267, 0.0316514, -0.0148156, -0.00350854, 0.0141421, -0.00202453, -0.013131, 0.0228968, 0.00942668, 0.0230109, -0.00403937, 0.0179495, -0.0188562, 0.0129832},
 {0.0323234, 0.0127771, -0.000667477, 0.00538746, -0.0323235, -0.019423, -0.0208765, -0.0168478, -0.0240809, -0.0329962, -0.00671171, -0.00539472, -0.00336813, -0.000673436, 0.0198268, -0.0121218, 0.0168367, 0.013803, 0.0121218, 0.00740911, 0.0295532, -0.0249171, 0.00940928, -0.0215499, 0.0118615},
 {0.030305, 0.012798, 0.00910917, -0.0181827, -0.0141417, 0.00283591, -0.022224, 0.0121189, -0.00960383, -0.00132311, -0.0147857, -0.00538797, 0.0114482, -0.0175093, 0.0120007, 0.0121218, -0.0127943, 0.00908203, 0.00471405, -0.0154889, 0.0196388, -0.0316514, -0.016453, -0.00404061, 0.026294},
 {-0.00342604, -0.0204014, 0.0346703, 0.0329608, -0.0093151, -0.0335245, 0.00142084, 0.0176609, 0.0299873, 0.00598522, -0.0301629, 0.0199175, -0.0315204, -0.0195296, 0.035677, -0.0323249, 0.0222178, -0.0239908, -0.00536486, -0.0274577, 0.019713, 0.0332419, -0.0462157, -0.00269369, 0.0236693},
 {0.031726, -0.00992431, -0.0113613, 0.0316514, -0.0115732, 0.0326762, 0.0150485, -0.0145502, 0.026382, 0.000170111, -0.0220627, 0.0323758, 0.0155226, -0.0202031, 0.021256, 0.0020203, -0.0120436, -0.0114005, -0.0242437, -0.00131482, -0.00375866, 0.00739403, -0.0217678, 0.00404061, 0.012213},
 {-0.0181646, 0.0263229, 0.0272903, 0.0161624, 0.00737193, -0.0383149, 0.00072022, -0.0141122, -0.0295723, -0.011429, 0.00332064, -0.0208808, -0.0242424, 0.0282843, -0.0115348, 0.00134687, -0.0215403, 0.00450545, 0.0188562, 0.0242387, -0.00193754, 0.00807993, 0.0311492, -0.000673436, 0.0113231},
 {0.020214, -0.0141054, 0.0147519, 0.0202031, -0.0309818, 0.0113708, -0.00270044, 0.0228768, -0.0200544, 0.0141198, 0.0466199, -0.026936, -0.00470866, 0.00740778, 0.0270626, 0.0208765, 0.0336679, 0.0151107, 0.000673893, -0.00674191, -0.0167605, 0.0121207, 0.0362481, 0.010775, -0.0244385},
 {-0.00943338, -0.0262641, 0.0104576, 0.0215499, 0.0282908, -0.00588437, -0.00474886, 0.0113934, 0.00967642, -0.00138062, 0.0358881, -0.0283009, 0.022897, 0.0323249, 0.0300802, -0.026264, 0.0067239, 0.0100325, -0.0282843, -0.0107833, 0.00346297, 0.0249171, 0.011397, -0.0141421, 0.0259193},
 {0.00469637, -0.0027231, -0.0120029, -0.00202174, 0.0168406, 0.0360915, 0.00740243, -0.00539874, 0.0143437, -0.000658909, -0.00771058, -0.00202901, -0.0215504, 0.0269374, -0.0263272, -0.030978, -0.00605526, 0.0155367, 0.0215499, -0.00066116, -0.0343433, 0.0249171, -0.0208784, 0.0168359, -0.0181811},
 {-0.0154788, 0.0101406, 0.0289961, 0.00201984, -0.0330143, 0.0106624, -0.0235509, -0.0175262, -0.0274759, 0.0309614, 0.0204668, -0.00540695, 0.0195301, -0.00471405, -0.00251338, -0.0235702, 0.0303041, 0.00523319, 0.0161624, 0.0235639, -0.0161909, 0.0336718, -0.0163779, -0.00404061, -0.0160656},
 {0.00809141, -0.0154525, -0.00571069, -0.0222234, -0.00608518, 0.0126323, 0.0141835, 0.0330216, 0.0257365, 0.0336827, -0.0191713, 0.0175136, -0.0303045, -0.00538748, 0.038658, -0.0208765, 0.0229024, 0.000802844, 0.0148156, -0.0282834, 0.00754619, 0.0181828, -0.0283756, -0.00404061, -0.014097},
 {-0.0276322, -0.0148602, -0.0144648, 0.0188562, -0.01748, -0.0265034, 0.0147441, -0.0121941, 0.027478, -0.0101512, 0.00665329, -0.0208866, 0.019529, -0.026264, 0.0205969, 0.0134687, -0.00271741, 0.0235317, 0.0289577, -0.0222319, -0.0278731, 0.0168356, -0.035641, -0.0188562, 0.013617},
 {0.0229045, -0.0242179, 0.00703173, -0.0181827, 0.00267848, -0.0125249, 0.0235992, 0.014859, -0.0291488, -0.0275969, 0.0154675, 0.0175219, 0.00606535, 0.0336718, 0.00956026, 0.00740778, -0.00807274, 0.018097, -0.0289577, 0.00404702, -0.00788312, -0.00673536, -0.0256793, 0.00404061, 0.035492},
 {0.0154819, -0.0215701, -0.0241972, 0.0222234, -0.014132, 0.00232709, -0.0262835, -0.00742587, -0.0102979, 0.0174939, 0.0249134, 0.0309697, 0.0121217, -0.000673436, -0.0291531, 0.00471405, -0.0329994, 0.00591621, 0.0296311, 0.0242446, 0.0076835, -0.0134687, -0.0190314, 0.0141421, 0.0139595},
 {-0.012791, 0.0330011, -0.0136085, 0.0208765, 0.0336753, 0.00268517, -0.0161668, 0.020196, -0.00496199, -0.00202539, 0.000999356, -0.00470189, -0.0303046, 0.00875466, -0.00756695, -0.00538748, -0.0242463, 0.0211108, -0.0242437, -0.00404381, -0.0165595, -0.00606121, 0.0163822, -0.00471405, 0.0197013},
 {0.0309751, -0.0175053, 0.0144511, -0.00740786, -1.58874e-006, 0.012876, 0.0202055, -3.32612e-006, -0.0154224, -0.0329964, 0.029187, 0.024909, 0.00808097, 0.0296311, 0.0035661, 0.0161624, 0.0121239, -0.00268915, 0.0020203, -0.00336584, 0.000972559, 0.00202208, -0.0138047, 0.030978, -0.00572281},
 {-0.00673481, 0.0269487, -0.0297997, 0.00336695, 0.0316517, 0.0123452, -0.01886, 0.0175185, -0.0228446, 0.0121191, 0.0242576, -0.00269437, -0.0222234, 0.00606091, -0.0252844, 0.0316514, -0.00942529, 0.00272352, -0.0235702, 0.00337114, 0.000258581, 0.0276108, 0.0317482, 0.0195296, 0.00839609},
 {0.00330676, -0.0156739, 0.0311131, -0.0101381, 0.00549896, -0.0465201, -0.0174356, 0.0270519, -0.0189867, -0.035773, -0.0574936, 0.0266436, -0.0187225, 0.015489, 0.0109332, -0.0181827, -0.0289657, -0.0103452, -0.0316348, 0.00755459, 0.0448705, -0.0138979, -0.013127, -0.0188562, 0.0078939},
 {-0.0322485, -0.0307977, 0.00208603, -0.0228974, 0.0328878, -0.0068587, -0.00986655, 0.00228625, -0.00510492, -0.032836, -0.0270459, 0.0108344, -0.00131498, -0.00538748, -0.0385526, -0.0148156, 0.0074902, 0.0278646, 0.00538658, 0.0283143, 0.0228938, -0.00674884, 0.0286761, -0.0161624, 0.0252764},
 {-0.0242231, 0.0317075, -0.0240277, -0.0329983, -0.018215, 0.0052605, 0.0283315, 0.0236203, 0.00490341, 0.0067692, -0.0293143, 0.0154958, -0.0181814, -0.00269374, 0.0189965, -0.0269374, 0.0148289, 0.0117985, 0.00471405, 0.0296284, 0.0287216, 0.0269371, -0.0279607, -0.0269374, -0.0151787},
 {-0.0323156, -0.00400976, 0.0153938, 0.00538771, 0.00403373, -0.00629413, 0.0282731, 0.0222241, 0.0245184, 0.0120939, 0.0348044, -0.00942544, -0.0228943, 0.0329983, -0.0199815, -0.0242437, 0.0168311, 0.0245398, 0.0101015, -0.017516, -0.0366727, 0.0168359, 0.0302901, 0.0336718, -0.0229927},
 {-0.00606506, -0.0309785, 0.000939226, 0.0053875, -0.0222188, -0.00294221, -0.00811097, 0.0107456, 0.0119678, 0.032298, -0.0011399, -0.0168463, 0.00741043, -0.015489, 0.00109981, -0.0202031, -0.0141515, -0.0121083, 0.0148156, -0.00068728, 0.00745393, -0.00673561, -0.0150023, -0.0269374, -0.00431344},
 {0.0100852, -2.487e-005, 0.00338359, -0.0329983, -0.0134624, 0.0160934, -0.0316482, -0.0276221, 0.00488846, -0.028947, 0.0300318, 0.0154774, -0.0134748, -0.0101015, 0.000515187, 0.00269374, 0.00269912, -0.00112189, -0.00673435, 0.0175152, 0.0180652, -0.0323249, 0.0333579, -0.0242437, 0.0171888},
 {-0.0100903, -0.000630274, 0.000551426, -0.015489, -0.0269552, -0.0540893, 0.00406198, 0.00808001, -0.0268636, 0.0195251, -0.022964, -0.0161721, -0.00739634, -0.00471405, 0.0234488, 0.0228968, 0.0107759, -0.0437451, -0.00538748, -0.0101109, -0.00444021, 0.0309781, -0.00775822, -0.00471405, 0.016463},
 {-0.0148028, -0.0215153, 0.00880763, 0.00942809, -0.00608118, -0.0339977, 0.0310146, -0.0147952, -0.0198711, 0.0148423, 0.0226429, 6.04254e-006, 0.00875597, 0.0101015, -0.00136242, -0.0255905, -0.0249103, 0.0222376, -0.0141421, -0.0222206, 0.0440649, -0.0249171, 0.0272605, -0.0121218, -0.0163502},
 {-0.024934, -0.0128327, 0.0200718, 0.00269318, -0.000635418, 0.0224313, -0.0330669, -0.00546658, -0.00102813, 0.0140969, 0.0017512, 0.00200428, 0.0127908, -0.015489, 0.0346483, -0.00875466, 0.00132006, -0.0224628, 0.0296311, -0.00405325, 0.00524612, -0.0121208, -0.0108704, -0.00404061, 0.0258038},
 {0.0134796, -0.0167904, -0.0107568, 0.0269374, -0.0141561, 0.0136372, 0.024273, -0.00873137, -0.0187009, 0.0107936, 0.0146791, -0.0329868, -0.0127945, 0.0195296, -0.0113575, 0.00134687, -0.0188506, 0.0110803, -0.00942809, 0.00336873, 0.0385332, 0.0255905, 0.0108953, -0.010775, -0.000482966},
 {0.0181763, 0.0155034, 0.00605779, 0.0175093, -0.0249121, 0.015761, 0.0296162, 0.0316227, 0.0155279, -0.000689619, 0.00309314, -0.00270056, 0.0121221, -0.015489, -0.00256701, -0.0329983, 0.0107707, 0.0135918, -0.00538748, 0.0141367, 0.00135979, 0.0188562, -0.0202145, 0.00606091, 0.00595995},
 {0.0101054, 0.0128056, -0.00673939, 0.0215499, 0.0161657, -0.0301988, -0.0188738, -0.0222559, -0.0210153, 0.00739352, -0.0190637, 0.0114552, 0.0228968, -0.0276108, -0.0271875, 0.000673436, 0.0134634, -0.000817534, 0.0269374, 0.0134664, 0.0327043, -0.0202031, -0.014877, 0.0222234, 0.0279201},
 {0.0134643, -0.0202068, -0.00660476, 0.0289577, -0.0316515, -0.0280006, -0.0154896, 0.00739925, -0.0297622, 0.0255775, 0.0384306, -0.0255982, -0.0114489, 0.00471405, -0.0154391, -0.00202031, -0.026263, 0.0110393, -0.0269374, -0.0067339, 0.0228536, 0.015489, 0.0121284, 0.0215499, -0.014919},
 {-0.00605849, -0.00403479, -0.00738905, 0.0255905, -0.0269366, -0.0198928, -0.00202771, -0.0148077, 0.0221119, 0.00470304, -0.00224518, 0.0262691, 0.0249171, -0.00202031, -0.00028883, 0.0114484, -0.0289564, -0.0153623, -0.0269374, 0.00337054, -0.0205176, 0.0195296, -0.00424231, 0.0168359, 0.0129724},
 {0.0228369, 0.0267548, 0.00376199, 0.0080436, -0.018751, -0.0662606, 0.0222953, 0.0122358, -0.0210183, -0.0108443, 0.0114116, 0.00778243, -0.0241088, -0.00673435, 0.0471312, -0.0269374, 0.00672719, -0.0418703, 0.00877629, 0.0102506, 0.0550278, -0.0165892, 0.0137485, -0.00269369, 0.0108829},
 {-0.0207961, 0.0244175, -0.000738772, -0.0296319, -0.008205, 0.0106149, -0.0273796, -0.0293627, 0.00915253, 0.0338271, -0.0170889, 0.0283385, 0.0330066, 0.0141421, 0.00652763, 0.0114484, 8.60416e-005, 0.00904168, -0.00404159, 0.0242762, -0.0412517, 0.00335368, 0.0256029, 0.0195296, -0.0361608},
 {0.0283024, -0.0288988, 0.0111236, -0.0121218, 0.0107402, 0.0180006, -0.0188011, -0.0255565, -0.0163038, -0.000644054, 0.012666, -1.08696e-006, 0.0134737, 0.0269374, 0.00625543, -0.0215499, 0.00944356, -0.000366817, 0.00606091, 0.00067357, -0.00680766, 0.0154871, -0.00593689, 0.0215499, 0.0171301},
 {0.0262755, 0.0269539, 0.0102316, 0.00942809, 0.00335834, -0.0215383, -0.0188626, -0.0282801, -0.011935, 0.00604015, 0.0159929, 0.0316505, -0.0222223, -3.08464e-011, 0.0198049, 0.0249171, -0.0303095, -0.0138264, -0.0202031, -0.0215556, -0.00584259, 0.00201794, 0.0156037, -0.0181827, -0.000616962},
 {0.00403514, 0.0235605, 0.0149161, 0.00134627, 0.0101056, 0.00702915, 0.0235491, -0.0269735, 0.00364878, -0.0168682, 0.0100825, -0.0161818, -0.0161623, 0.0202031, 0.0128296, 0.00404061, 0.00537733, -0.0207705, -0.0215499, -0.0329999, -0.00908931, -0.0175093, 0.00626318, 0.0289577, -0.0316353},
 {0.00469467, 0.0248856, -0.01513, -0.0175093, 0.0262713, -0.00278985, -0.00201807, 0.0168262, 0.00142783, -0.0175143, -0.00868664, 0.0174959, -0.0101055, 0.0121218, -0.0401472, 0.00404061, -0.0121178, 0.0145434, 0.00471405, -0.0107668, 0.0134567, -0.0154885, 0.0254649, 0.0269374, -0.0117523},
 {0.0107829, -0.0309495, -0.0213525, -0.0255905, 0.0242253, -0.0200748, -0.0174921, -0.00201228, -0.0327429, -0.0215565, 0.0360614, -0.00742156, -0.00200904, 0.0296311, 0.0321893, 0.0188562, 0.0255921, -0.0154977, 0.0215499, -0.00270632, -0.012155, 0.0282843, -0.0045956, 0.0255905, 0.0257946},
 {0.0154979, 0.0195496, 0.00971792, -0.010775, -0.000689101, -0.0261064, 0.00406457, 0.00610037, 0.0318834, -0.00737714, -0.0187093, 0.0121352, -0.00605797, -0.0141421, 0.0161908, 0.0235702, 0.0121326, 0.00158076, -0.0215499, -0.02828, 0.0233862, 0.00471324, -0.0248599, -0.0148156, 0.00845699},
 {-0.0181994, 0.0275643, -0.0208965, -0.0134686, 0.018892, -0.0398935, 0.00396869, -0.0101878, -0.0236918, 0.0228632, -0.0026835, 0.0148161, 0.0235701, -0.0303046, 0.0337881, 0.00336717, 0.0323082, 0.0327669, -0.00269354, 0.00538031, 0.0390733, -0.0161625, -0.0255536, 0.0168359, 0.0285689},
 {0.00270392, 0.0283032, 0.00687553, 0.0101015, 0.0100886, 0.00478725, -0.0147819, 0.019562, 0.0295696, 0.0222444, -0.000143781, -0.00604561, 0.00942793, 0.00404061, -0.00726751, -0.00740779, -0.00874771, -0.0199546, 0.0269374, -0.0269355, 0.0204641, -0.0053891, 0.0143982, 0.00471405, 0.0159143},
 {0.0302962, 0.00537737, 0.0320118, 0.00201997, -0.0067303, -0.0112063, 0.00336141, -0.0114585, 0.0296399, 0.0154671, 0.00997814, -0.00944687, 0.0208765, 0.0303046, 0.0427059, 0.00808122, -0.0316544, -0.0038748, 0.0114484, 0.032324, 0.00497542, 0.0289577, 3.15734e-005, -0.00202031, 0.0214282},
 {0.00740888, -0.0134745, -0.0196736, -0.0181827, -0.029624, -0.026428, -0.0330235, -0.00135891, 0.0112812, -0.00809385, 0.0112132, 8.42363e-006, 0.0289577, 0.0134687, 0.0095204, 0.00875466, 0.00201486, -0.0106562, 0.0215499, 0.0107761, 0.00770779, 0.0323249, -0.0160195, 0.0282843, -0.00204918},
 {-0.0188599, -0.0316606, 0.017071, -0.0323249, -0.0181835, -0.0394465, -0.0255925, -0.0128061, -0.0301837, -0.0134825, -0.0392577, -0.0309831, -0.000672317, -0.0323249, 0.00155956, -0.015489, 0.0222239, 0.0220096, -0.00336718, 0.0222241, -0.00821469, 0.0215499, -0.0306739, -0.0215499, 0.0333766},
 {-0.0080787, 0.0114539, 0.0240075, -0.0316514, -0.00808302, 0.0287028, 0.0249228, 0.00403359, 0.00505912, 0.0202057, -0.0265014, 0.00673957, -0.00134738, 0.00875466, 0.0275099, 0.00875466, 0.0202043, 0.0205001, -0.00538748, 0.00673792, 0.0312573, -0.0181827, 0.0185869, -0.00673435, -0.0237313},
 {-0.0330489, -0.00017857, -0.00516676, -0.0276469, 0.0216566, -0.0302003, 0.0128668, 0.0162891, 0.00732876, 0.0154239, -0.0688886, 0.00443357, 0.0290917, 0.0101015, 0.0518761, -0.0276108, 0.0175017, -0.0373664, 0.0323413, 0.0243951, 0.0443247, 0.0157332, 0.00693966, 0.0323249, 0.0626767},
 {0.0216315, 0.00488763, -0.0301505, 0.0255899, -0.0230115, 0.000819546, 0.0197638, -0.0286792, -0.021971, 0.0203554, 0.0261986, 0.0337337, 0.0256162, 0.00673435, 0.0236503, 0.0222234, -0.00395581, -0.0125063, -0.0329983, -0.0262296, -0.0223936, 0.00335292, -0.00525384, 0.0269374, 0.0163623},
 {-0.00873412, 0.019591, -0.00954208, -0.00606123, -0.0101355, 0.00518148, 0.00275342, 0.0289815, -0.0119878, -0.0309645, 0.0210318, 0.0208759, 0.026937, 0.015489, -0.0151801, 0.00404061, -0.00537089, -0.031555, -0.00404061, -0.00942899, -0.0129349, -0.010103, 0.028113, 1.98773e-009, -0.0105309},
 {0.0336799, -0.0248992, 0.0236641, -0.0195296, 0.0309711, 0.0337981, -0.0175123, -0.0256125, -0.0078074, -0.0175299, 0.02431, -0.0202068, 0.0202024, -0.0249171, 0.00667623, 0.0121218, 0.0276053, -0.00263421, -0.0303046, -0.0323272, 0.00139213, 0.0242436, 0.033588, -0.0276108, -0.00885418},
 {-0.023576, 0.0080737, -0.012227, -0.0114484, -0.00471007, -0.0257713, 0.0302789, -0.0270021, -0.00691143, 0.0295907, 0.0187305, -0.0114813, -0.0276107, -0.0188562, 0.0165684, -0.00134687, -0.00943804, -0.022491, 0.0215499, -0.00607424, -0.00823367, -0.0249171, 0.00381181, 0.00808122, -0.0174562},
 {-0.0323379, -0.0135063, 0.00188625, -0.0195296, 0.0215599, -0.014261, -0.011455, 0.0188493, -0.0211729, -0.00338313, 0.0102783, -0.026954, -0.0316514, -7.19723e-010, -0.00159492, 0.0289577, -0.0020147, 0.00486499, -0.010775, 0.00472336, -0.0113099, -0.0107743, 0.0104811, 0.00606091, -0.00103802},
 {-0.0296253, -0.0174856, -0.014873, 0.0215499, -0.018201, 0.0232579, -0.0242242, 0.00873958, 0.0166246, 0.0181802, 0.0431885, 0.00874303, -0.014139, -0.00740779, -0.0137168, 0.0148156, 0.0161634, 0.00463195, 0.0208765, -0.00808992, 0.015003, 0.0154884, 0.0219455, -0.0303046, 0.0195878},
 {0.0222306, 0.029651, -0.0190982, 0.0121218, -0.00136184, -0.0226607, 0.00744033, 0.00746042, -0.0172453, 0.0182097, -0.0159049, 0.00811221, -0.00740285, 0.0134687, 0.0133904, 0.00269374, 0.0188651, -0.0241712, 0.030978, -0.0073989, -0.00564252, 0.0242437, 0.0223866, -0.0255905, -0.00503458},
 {0.0262446, 0.0316061, 0.0422476, -0.0161624, 0.00879077, -0.0308661, -0.0303768, 0.0160862, -0.0104466, 0.00803642, 0.00893249, 0.0175074, 0.00942342, -0.0316514, 0.0490496, 0.0329983, 0.0208577, 0.0121705, -0.00404061, -0.0330048, 0.0439514, 0.015489, 0.0199147, 0.00606091, 0.0113275},
 {-0.0235651, -0.0329863, 0.0177344, 0.010775, -0.0134789, 0.0327586, 0.00272834, 0.0175561, -0.00721959, -0.0221982, -0.00703702, 0.0148346, 0.0181828, -0.00606092, 0.0147672, 0.0202031, 0.0148244, 0.00624141, 0.0242437, -0.00268732, 0.0274175, 0.0134688, -0.0331688, -0.0323249, 0.00460906},
 {0.00200673, 0.0269144, 0.0246525, 0.00269344, -0.00874861, 0.00928438, -0.0229072, -0.0235716, 0.0159276, 0.00470785, -0.0162658, -0.0269625, -0.0329983, 0.0101015, 0.0176772, 0.0188562, -0.0289607, 0.00115455, -0.0134687, 0.0168336, 0.0402013, 0.0228968, 0.0299987, -0.030978, -0.0245958},
 {0.0154933, 0.0134762, -0.00625119, 0.0323249, 0.00135585, 0.0088425, 0.000656996, -0.0303102, -0.024546, 8.22201e-006, -0.0056919, -0.0309662, 0.00404189, 0.00538748, -0.00887099, -0.030978, 0.0134646, 0.0213832, -0.0303046, -0.00336937, 0.0309672, -0.0141423, -0.0315996, 0.0249171, 0.0205305},
 {-0.0134732, 0.0154945, 0.0362694, 0.0282843, -0.0181852, -0.0327312, 0.0228891, -0.0188748, -0.0110352, 0.01078, 0.0245748, -0.00943614, 0.0208767, -0.00471405, 0.0179656, 0.0276108, 0.0249164, 0.0158713, 0.0148156, 0.0329983, 0.0535864, 0.0134688, 0.00307825, 0.0235702, 0.00166298},
 {0.0127971, -0.0242291, -0.00399225, -0.0303046, -0.00404161, 0.0154623, -0.010775, -0.0188682, 0.00692375, 7.93404e-007, -0.00458733, 0.0336754, -0.00808117, 0.0269374, -0.0253856, 0.00808122, 0.00404147, -0.011592, -0.0235702, 0.0303048, 0.023913, 0.0074074, 0.0219752, -0.0222234, 0.0287251},
 {0.0093705, -0.00490649, 0.0473353, -0.0034029, -0.00864148, -0.0421628, 0.0236474, -0.0328867, 0.0176942, 0.00333327, -0.0580627, -0.00365154, 0.0223562, 0.0289577, 0.0715146, -0.00808123, -0.0121293, -0.0380856, 0.0303241, 0.0277613, 0.0355909, 0.00967054, -0.0306234, -0.0222234, 0.0237875},
 {-0.000588429, -0.00858414, -0.00341016, -0.0215506, 0.00863056, -0.0268241, 0.0110111, -0.0327299, -0.0224158, -0.0173517, -0.0249083, 0.0175611, 0.0249456, -0.0148156, -0.00996121, 0.010775, 0.00210575, -0.0260461, -0.00538843, 0.00138007, 0.0168581, -0.0229068, -0.0247841, 0.0208765, -0.0129275},
 {-0.016818, -0.00667568, -0.0157549, -0.0242437, -0.0323545, -0.0422898, 0.00812894, -0.0302739, 0.000434889, 0.00742415, -0.00425982, 0.0323164, -0.00537442, 0.0255905, -0.0165324, 0.00673435, 0.0229085, 0.0134669, -0.0316514, 0.0269318, 0.0150471, -0.0316514, 0.0145084, -0.0222234, -0.00518386},
 {-0.0188455, -0.0174842, -0.0199215, 0.030978, 0.0107697, 0.00264633, 0.0181657, -0.0222598, -0.0184435, -0.0222471, -4.11514e-005, 0.0309815, -0.00672732, 0.0168359, -0.0221553, -0.0215499, -0.022229, -0.0318108, -0.0249171, -0.0255989, 0.0190644, -0.0215502, 0.0262504, 0.0134687, -0.0164296},
 {-0.00741484, 0.0249128, 0.0461429, 0.0195296, 0.0262694, 0.022888, 0.0329603, 0.0127342, -0.0263102, -0.0289859, -0.010503, -0.0141721, 0.0309782, 0.030978, -0.0229776, -0.0296311, -0.00539961, -0.0439773, -0.00404061, -0.00742191, -0.0272202, -0.0202031, 0.00022975, -0.0141421, -0.0380505},
 {0.00334759, 0.0309491, 0.0292791, 0.0282843, 0.0202146, 0.0162516, -0.0309829, -0.0282738, -0.0144706, 0.0202078, -2.28e-005, 0.0094124, -0.0276111, -0.0141421, 0.00230618, -0.026264, 0.0175136, 0.0316301, 0.0141421, 0.0195385, -0.00818121, 0.00673833, 0.0176814, 0.00404061, -0.0276505},
 {0.0229034, 0.0195588, 0.0271395, 0.0228968, -0.0222401, 0.00231498, -0.0154777, 0.0316322, 0.00560048, -0.0309798, 0.0112256, -0.0316592, -0.0222224, -0.0202031, -0.0207668, 0.026264, 0.0134694, -0.0239336, -0.0121218, -0.000686215, 0.0173116, -0.010103, -0.020504, -0.0121218, -0.0221883},
 {0.00270479, 0.0242696, -0.0174593, -0.0188562, 0.0208632, -0.000168617, -0.020836, 0.000727078, -0.0143267, -0.0174834, -0.0320274, -0.0174892, -0.0202027, -0.0222234, -0.00203788, -0.0101015, -0.0161535, 0.00499997, -0.010775, -0.032323, 0.00944875, -0.0154901, 0.0267628, -0.0121218, 0.0278297},
 {-0.0161823, -0.0229384, -0.00646305, 0.0249171, -0.0134348, 0.0216242, 0.00128078, -0.00141738, -0.022097, 0.000628213, 0.00169439, -0.0269512, -0.0316513, 0.0282843, 0.0233766, 0.0303046, 0.020185, -0.0351389, 0.0175093, 0.0100913, 0.0391138, 0.0249168, 0.0278029, 0.00606091, 0.0168315},
 {-0.0329926, 0.010114, 0.0105548, -0.00471435, -0.0242541, 0.0379446, 0.0141722, 0.0296648, 0.00128469, -0.0188244, -0.0241582, 0.00674632, -0.0148147, -0.0228968, -0.0146725, 0.0249171, -0.017501, -0.0248703, 0.0282843, 0.0141471, -0.045291, -0.0282843, 0.0361027, -0.0303046, 0.00975216},
 {0.0100929, -0.0148456, 0.0103311, 0.0121218, -0.0121132, 0.0314467, -0.0235938, -0.00809771, -0.00222733, -0.026254, -0.00153264, 0.0188317, 0.0323249, 0.0134687, -0.035347, 0.0101015, 0.0262614, -0.0421234, -0.0228968, 0.0249162, -0.00610745, -0.0269374, 0.0338918, 0.0134687, -0.0408171},
 {-0.015486, -0.0114508, 0.0191993, -0.0303046, -0.0127884, 0.0128148, -0.0283013, 0.0289556, 0.0294277, -0.0141301, 0.00278062, -0.0269249, 0.0329983, -0.0121218, 0.0286801, -0.0127953, -0.00943203, -0.0251177, 0.0101015, -0.0296329, -0.0107062, -0.0181827, 0.0144768, 0.0235702, 0.0405195},
 {0.0222184, 0.0188504, -0.0173452, -0.0329983, 0.0255915, 0.0129982, -0.0168438, 0.0222175, 0.00947236, -0.0161611, 0.00188074, -0.0027031, 0.0161625, -0.0141421, -0.0201709, 0.0101015, 0.0195295, 0.00344999, -0.00538748, 0.0175096, -0.0187729, 0.00134836, 0.0274315, 0.010775, -0.0109016},
 {-0.0121235, -0.016843, 0.00172767, 0.0228968, 0.0336726, 0.0309872, -0.0188548, -0.0195277, -0.0272517, -0.00606139, 0.0291023, 0.0188506, 0.00605957, -0.0282843, -0.0251317, -0.00808122, -0.0168344, 0.00616472, 0.0195296, -0.00875272, -0.043782, -0.004039, -0.00980625, 0.00404061, -0.0189398},
 {0.0127352, -0.00556489, 0.0425926, -0.0323624, 0.00213349, -0.0716149, -0.0356052, 0.0277107, 0.024459, 0.00330658, -0.0837841, -0.0218368, 0.00754242, 0.0316514, 0.0472797, 0.000670271, -0.0309857, 0.00832481, -0.0154673, -0.0247629, 0.0565145, -0.0240006, -0.0590563, 0.0141421, 0.0695521},
 {0.0216308, -0.00520747, -0.0285809, 0.0316514, 0.0234511, 0.00358504, -0.00514798, -0.00848383, 0.0212115, -0.00454164, 0.010843, -0.0140926, -0.0174801, -0.0269374, -0.0108221, 0.015489, -0.0214757, -0.00346145, -0.0222234, 0.0249444, 0.0312281, -0.0242542, 9.32754e-005, 0.0282843, -0.00357582},
 {-0.0141231, 0.00814158, 0.0189392, 0.0242437, 0.029599, 0.0120152, -0.00465806, 0.00137118, -0.0184015, 0.0215874, 0.0480008, 0.0013278, 0.0181841, 0.0255905, 0.0194759, -0.00269374, -0.023558, -0.0296452, -0.00808122, 0.0208705, 0.00932309, -0.000676391, 0.041652, 0.00875466, -0.000761407},
 {-0.00335326, 0.0310022, 0.0250362, 0.0336718, -0.0114517, 0.0196079, 0.0201885, 0.0296012, -0.0142597, -0.0114601, -0.0131573, 0.030985, 0.0128, -0.0249171, -0.0101085, -0.00808122, 0.00201221, 0.0187773, -0.0323249, 0.00268089, 0.0199032, 0.0154861, 0.0146334, -0.0235702, 0.00741805},
 {0.0127868, 0.0302915, -0.00649874, 0.0276108, 0.00337425, -0.0216386, 0.00872146, -0.0142067, -0.00330246, 0.0316231, -0.00747164, 0.00534914, 0.0168359, -0.0101015, 0.0226605, -0.00740779, 0.0201949, -0.0164675, 0.00538748, -0.0316537, -0.0282795, -0.0282843, 0.0248912, 0.0215499, -0.0396066},
 {-0.00742797, -0.0168764, -0.00294591, 0.0303046, 0.0249254, 0.0268173, -0.0154955, 0.0303161, -0.00900363, 0.00200721, 0.0232656, 0.00805421, 0.00402607, -0.0195296, 0.0167674, -0.00740779, -0.0255874, -0.0148834, 0.0296311, -0.0195217, 0.0154921, 0.0282843, -0.0212731, 0.0323249, 0.00131653},
 {0.0262702, -0.028941, -0.00710404, -0.030978, -0.0309933, -0.0116916, 0.0249274, 0.0141284, -0.0209826, 0.00673455, -0.000957093, 0.0289451, -0.00201233, -0.0148156, -0.0124667, 0.010775, 0.0141447, 0.00444025, -0.0114484, 0.0309733, 0.0104708, 0.0296311, 0.00571737, -0.00202031, -0.00609182},
 {0.0161718, -0.0255557, -0.00513902, -0.00067282, -0.0101167, 0.0111503, -0.00804779, -0.0302622, -0.00630801, 0.00541514, 0.00368897, 0.016174, 0.00943016, 0.00269374, -0.0301198, -0.000673436, 0.0208846, -0.00174094, -0.026264, 0.0249194, 0.0414029, -0.0296311, -0.00680803, 0.0329983, 0.021774},
 {-0.00675564, -0.00608264, 0.0022015, 0.0316514, -0.0100675, -0.0256081, -0.0081551, -0.0216264, -0.0322052, -0.0168759, -0.000729658, 0.0208608, -0.0222231, 0.0269374, -0.00977665, -5.49835e-008, -0.0222448, -0.00741354, -0.00808122, -0.0276229, 0.0154877, -0.00942682, 0.0280512, -0.0195296, -0.000795851},
 {-0.0276028, 0.0141658, 0.00799774, 0.0276108, -0.0249271, -0.0354574, -0.026241, 0.0235943, -0.0242465, 0.027649, 0.0301406, -0.0269281, -0.0222232, 0.00606091, 0.0150815, -0.010775, 0.0121303, 0.0299634, 0.015489, -0.0134661, 0.00285538, 0.00605938, -0.0152004, 0.0114484, -0.0189406},
 {-0.0282911, -0.0114764, 0.034035, -0.0276108, 0.02021, 0.00985532, -0.0276309, 0.0174765, -0.0414433, 0.0242492, 0.0186346, -0.0229132, 0.0282843, 0.0208765, 0.00817083, -0.0269374, 0.00740361, -0.014615, -0.00673435, 0.0289572, -0.0404161, 0.0168359, -0.00304352, 0.0282843, -0.00211051},
 {-0.0282805, 0.0134759, 0.000709148, -0.0276108, -0.0228882, -0.0116402, 0.0188424, 0.0222264, 0.0217445, 0.026274, -0.00076266, 0.00810365, -0.0282842, 0.0127953, 0.0222972, -0.0303046, 0.0208733, 0.00501279, -0.0175093, -0.00875445, 0.00785369, 0.0168359, -0.0139336, 0.030978, 0.0206518},
 {0.0202, -0.0121267, 0.0103008, -0.0222234, 0.00808188, 0.000278433, 0.00336288, 0.0316578, -0.0114921, -0.0323117, 0.00455354, 0.0087508, 0.0208765, 0.00673435, -0.0203166, -0.0228968, -0.00336515, -0.00875365, 0.0329983, -0.00470985, 0.0248083, 0.00471423, 0.0260025, 0.0181827, -0.00968071},
 {0.0188556, 0.00134643, 0.0328097, 0.00808122, 0.0336708, 0.0275483, 0.010771, -0.0154679, 0.0249148, 0.0208894, 0.0244089, -0.00203027, 0.0329983, -0.0208765, 0.0217313, 0.000673436, -0.0289563, -0.0284326, -0.030978, 0.0242441, 0.0163567, 0.0114484, 0.00937102, 0.0134687, -0.0340023},
 {-0.00409583, 0.00991126, -0.00105958, -0.0209113, 0.0243518, -0.0306053, -0.023484, 0.0129234, -0.000214228, 0.00396299, -0.0608603, -0.0292375, 0.00350176, -0.0168359, 0.043575, 0.00538721, 0.0114449, -0.00937594, 0.0081027, 0.0190151, 0.0735462, 0.0332416, -0.0223947, 0.0127953, 0.0640728},
 {0.0324007, -0.016653, -0.00421387, -0.0309789, -0.0223405, 0.0179579, 0.0177456, 0.0123977, 0.0298636, 0.0062383, 0.0202252, -0.0295709, -0.019501, -0.0249171, 0.0191449, 0.000673437, -0.00126105, -0.00878799, -0.0323249, 0.00744347, 0.0146137, 0.000659292, 0.0213267, -0.0202031, -0.00718845},
 {-0.010082, -0.0107056, 0.0229689, -0.0114485, 0.0161316, -0.000550274, 0.0141988, 0.0323501, -0.013822, 0.0020672, 0.00454284, -0.0222263, 0.00472438, -0.000673436, 0.00499725, -0.00875466, 0.002039, -0.0026211, -0.0175093, -0.0127955, 0.0187147, -0.0175089, -0.0191676, -0.00336718, -0.0271266},
 {-0.0134567, -0.0147913, 0.0380885, -0.0228968, 0.00201684, 9.9718e-005, -0.0141512, -0.0202173, -0.0254523, 0.0020109, 0.043225, -0.0329951, -0.00942484, 0.015489, 0.0062202, 0.0161624, -0.028963, -0.00371161, 0.030978, -7.58059e-006, -0.0386119, -0.0303045, 0.0360324, 0.0208765, -0.0102227},
 {0.0296232, 0.0289536, -0.00746989, 0.0161624, -0.0269336, 0.0147409, -0.0161905, 0.0255302, 0.0138307, -0.00475124, 0.0411521, -0.0236028, -0.00337079, -0.0249171, -0.0310493, 0.010775, -0.0202111, -0.0163757, -0.010775, -0.0276161, 0.00498178, 0.0323249, 0.0304923, -0.00202031, -0.0103546},
 {0.029613, -0.0094727, 0.00664462, -0.015489, 0.0053946, -0.0259638, 0.0107689, 0.00672263, -0.0322349, 0.0309572, -0.010477, 0.00199097, -0.029632, 0.0296311, 0.0187983, -2.29273e-008, -0.0249153, 0.0292042, 0.00471405, 0.00943686, 0.0130097, 0.0141434, 0.0136254, -0.0101015, 0.0278949},
 {-0.00335898, -0.00672448, 0.025579, 0.0249171, 0.0228825, -0.00657961, 0.0242586, -0.0161691, 0.0235471, -0.0249155, 0.0361163, -0.00472591, -0.0181827, -0.0168359, 0.0161281, 0.0188562, 0.0296339, -0.00323944, 0.0336718, 0.0202004, 0.0102597, -0.002695, 0.00866517, -0.0168359, 0.015678},
 {-0.0302948, -0.0107598, -0.0337333, -0.0168359, -0.0222351, 0.0139651, 0.02764, -0.00196519, 0.026927, -0.0302734, -0.0155106, -0.027589, -0.0053844, -0.0202031, 0.0154471, 0.0181827, 0.0242529, -0.0058805, 0.010775, 0.00270239, -0.0338448, -0.00404387, 0.0238578, 0.00538748, 0.0235627},
 {-0.0229141, -0.0202379, -0.00269021, 0.0215499, -0.022868, 0.00415655, -0.00883174, -0.0202713, 0.0121996, 0.00803249, 0.030151, -0.00876482, 0.0228963, 0.0303046, 0.0388908, 0.00875466, 0.00805663, 0.0168571, -0.0121218, 0.020192, 0.0439489, 0.0323249, -0.0248804, -0.0329983, -0.0107041},
 {0.0161709, 0.000701762, -0.0153988, -0.00336705, -0.0215609, -0.0123345, 0.00339771, 0.0155127, -0.00895249, 0.0296534, -0.021182, -0.0282734, 0.0269374, -0.00471405, 0.0360807, -0.00269374, 0.0067418, 0.00487511, 0.00538748, -0.0181807, -0.00543721, -0.0303046, -0.00291914, -0.0303046, -0.0272378},
 {0.00874322, -0.00675459, -0.00951267, 0.015489, 0.0330022, 0.00505665, 0.00268981, 0.0154366, -0.0283198, -0.00271361, -0.00241209, 0.0323107, 0.00134382, 0.00808122, 0.00370953, 0.0228968, 0.00874935, 0.0126196, 0.0316514, 0.0242427, 0.0132142, 0.00134858, -0.0147155, -0.0222234, -0.0059471},
 {-0.0161582, -0.000669551, -0.0406129, 2.55773e-006, -0.0262534, -0.00781131, 0.0289526, 0.0155026, 0.0220406, -0.0275965, -0.0226808, 0.0141723, 0.0269374, -0.026264, 0.0170436, 0.0202031, -0.0249193, 0.0310319, -0.0127953, 0.0222249, -0.0238322, -0.0323249, -0.00498995, 0.00404061, 0.00805782},
 {-0.0276147, -0.00674902, 0.0114078, 0.0202031, -0.016162, -0.0133907, 0.00134761, -0.0296235, 0.0267872, 0.0047263, -0.00852467, -0.0161697, -0.0255905, -0.0195296, -0.016178, 0.00606091, 0.00808296, 0.0225536, 0.0134687, 0.0168388, -0.025086, -0.00336533, 0.00668172, -0.030978, -0.0147385},
 {0.00471454, -0.00672263, 0.0239943, -0.0141421, -0.0262649, -0.0096834, -0.0202066, 0.00270781, -0.0350107, 0.0330048, -0.0266123, -0.00539563, 0.0336718, -0.0255905, 0.0172127, -0.0168359, -0.0202024, 0.00155406, -0.0316514, -0.0114458, 0.00643448, 0.0222234, 0.0329722, 0.00471405, -0.027145},
 {-0.00611609, -0.0183817, 0.0415233, -0.0236054, -0.0059485, -0.063004, -0.0046292, 0.00215061, -0.0307453, -0.0303556, -0.0504665, 0.0293542, -0.016031, -0.0323249, 0.0705655, 0.0101015, -0.00673986, -0.0129187, 0.0336881, -0.0288039, 0.0649676, -0.0320834, -0.0196057, -0.00942809, 0.0146804},
 {0.0229778, 0.0277873, 0.0212952, 0.00875628, -0.0108983, 0.00198429, 0.00562345, -0.02599, -0.0108393, -0.0267617, 0.00992724, 0.00746674, 0.0276388, -0.00808122, 0.0239365, -0.0134687, -0.0147366, 0.0255375, 0.030978, -0.0026605, 0.00364125, 0.0262532, -0.00764506, -0.0134687, -0.0255778},
 {-0.0323105, -0.02283, -0.0128918, -0.0181827, 0.00669993, -0.00635933, -0.00129632, 0.016861, 0.0165681, 0.00139016, -0.0182296, 0.026264, 0.00943516, -0.015489, 0.00161001, -0.000673436, 0.0323341, -0.00587615, -0.00606092, -0.0296325, -0.010343, 0.00538311, 0.00192683, -0.0255905, -0.0196149},
 {-0.0262525, -0.0282667, 0.034142, 0.0148156, -0.0121235, 0.0394968, 0.018166, -0.00271346, -0.0386145, 0.0309695, 0.0564443, -0.00605963, -0.0276091, -0.00134687, -0.00712101, -0.0175093, 0.0107698, -0.0301343, -0.0222234, -0.0222271, -0.00513616, 0.00471338, 0.0150313, 0.00673435, -0.00550575},
 {0.0276024, -0.0188662, 0.0176081, -0.0188562, -0.00403205, 0.0130168, -0.0263016, -0.0209573, -0.0315086, 0.0269113, 0.0225905, -0.0256181, 0.00269192, 0.0181827, 0.0193724, 0.0296311, 0.0134591, 0.000150842, 0.0215499, -0.0296363, 0.0323911, -0.00134524, 0.0301563, 0.0276108, -0.00419133},
 {-0.0148369, -0.0128428, 0.0125987, -0.00808122, 0.0134771, -0.0380311, -0.0141498, -0.0215924, 0.0125309, -0.0242482, 0.0247858, -0.0087793, 0.0282841, -0.00538748, 0.0126106, 0.00269374, 0.00471767, -0.0227427, -0.0134687, -0.0073992, 0.00211744, 0.0276108, 0.0153538, 0.00404061, 0.0355662},
 {-0.0100943, -0.0282562, 0.00402934, 0.0134687, -0.0249325, -0.0354213, 0.0175279, 0.0182011, -0.0283666, 0.0175077, 0.024204, 0.0188433, -0.00538111, 0.0228968, 0.0143424, 0.0316514, -0.0188535, -0.000291134, 0.030978, 0.00875186, 0.0293852, 0.0181827, -0.0204247, -0.0269374, -0.0315939},
 {-0.0188478, -0.0100839, 0.0259219, 0.0175093, 0.0195144, -0.00371931, -0.0194954, -0.00666104, 0.0222283, -0.00469009, 0.0298163, 0.00606849, 0.00942918, -0.0228968, 0.01115, 0.0181827, -0.00739508, -0.00986257, 0.00673435, -0.000665595, -0.0260959, 0.00134433, -0.00689597, -0.00538748, -0.0331299},
 {0.0100784, -0.00206023, 0.0374063, 0.0188562, 0.0128276, -0.0246458, 0.0282065, 0.0288655, 0.0144468, -0.0108386, -0.0242039, 0.0235452, 0.0134649, -0.0168359, 0.00688287, -0.0195296, 0.00131936, -0.0152101, -0.00538748, -0.0168468, 0.0452726, -0.0114464, -0.00550147, -0.0282843, 0.0085834},
 {-0.0141332, 0.0168484, 0.0434567, -0.0235702, 0.0336599, 0.0351136, 0.00407389, 0.0155134, -0.0229156, 0.032334, 0.0145073, 0.0303083, -0.0276108, -0.0282843, -0.0204314, 0.0269374, -0.0269304, -0.0118555, 0.0323249, -0.0228948, 0.0145171, 0.0316514, 0.0168571, 0.00134687, -0.0286519},
 {-0.000688993, -0.0235931, -0.0107265, 0.00942809, 0.016165, -0.04104, 0.0302954, -0.0108212, -0.0400401, 0.0121069, 0.00660051, -0.0229183, -0.00134969, 0.0161624, 0.0306378, 0.00606091, -0.000677831, 0.0125085, -0.00875466, 0.0309765, 0.0129378, -0.00471178, 0.0103519, 0.0101015, 0.00354292},
 {0.022226, -0.00134139, -0.00701918, 0.0289577, 0.0208821, -0.0148114, 0.0309681, -0.00602971, -0.0201756, -0.0134515, 0.0210138, 0.0107881, 1.87851e-006, 0.0323249, -0.00387196, 0.0121218, -0.0222257, -0.0246298, 0.00942809, 0.0114477, -0.0390949, 0.0249171, 0.00337302, -0.0121218, 0.030727},
 {0.0134637, 0.0242274, -0.00339827, -0.0296311, 0.0215487, -0.00761109, 0.0330052, -0.0154842, -0.0164896, 0.00134937, 0.013404, 0.0134586, 0.0141419, 0.0141421, -0.0211955, -0.0114484, 0.00942987, 0.0283941, -0.0289577, -0.00134406, 0.0103771, 0.030978, 0.0237584, 0.0303046, 0.0230164},
 {0.0121216, 0.0080703, -0.00159781, -0.010775, 0.0309788, -0.00641987, 1.06211e-006, 0.0329888, -0.00244853, -0.013475, 0.0233026, 0.00134143, 0.00471257, -0.0323249, 0.0137282, 0.0228968, -0.0222225, 0.0176037, -0.00740779, -0.0303038, -0.0368815, 0.00942808, 0.00966683, 0.0208765, -0.0238626},
 {-0.0337242, -0.012955, 0.0151033, 0.0161269, 0.019635, -0.0747899, 0.010865, -0.0355807, 0.0109521, -0.0350803, -0.07612, 0.00713702, 0.0237025, -0.0127953, 0.0640568, -0.0188562, 0.0134597, -0.0278364, -0.0154673, -0.00388836, 0.0486008, 0.0305457, -0.0458712, 0.0161624, 0.0639908},
 {-0.00597823, -0.0099316, 0.00957354, -0.0154876, -0.0149402, 0.0310079, 0.0204404, 0.0191308, 0.0291099, 0.0102599, 0.0354961, 0.0229523, 0.00137701, 0.0181827, 0.0231926, 0.00606091, 0.0330647, 0.0064867, 0.0121217, -0.0174805, -0.0415447, -0.0296408, 0.0169655, -0.00875466, 0.00323485},
 {0.0188739, 0.00141987, -0.000929501, -0.00269334, 0.00198225, -0.0407808, 0.000726933, 0.00878023, 0.0169829, 0.0222378, 0.0106284, 0.0141526, -0.0195288, -0.0323249, 0.0313326, 0.0188562, 0.020886, 0.00702129, -0.00808122, -0.0229001, 0.006374, -0.0202034, -0.0248744, -0.00606092, -0.00173639},
 {0.0282964, -0.0100651, -0.0164784, -0.00942809, -0.0235745, 0.0299251, -0.00203571, 0.0269073, -0.0234275, -0.0208825, 0.00891271, 0.0276211, -0.0255884, -0.00471405, -0.0338836, 0.0121218, -0.00269998, -0.0302582, 0.00538748, -0.0202069, 0.000691715, -0.0276109, 0.00482476, -0.0249171, 0.0258117},
 {-0.0255964, -0.0262706, 0.0228568, 0.030978, -0.0121119, -0.0307489, 0.0275794, -0.00345218, 0.0103213, 0.0302805, -0.00829882, -0.010792, 0.0175097, 0.00875466, 0.0295977, -0.0228968, -0.00808999, -0.0218288, 0.0222234, 0.0127898, -0.00823859, -0.0296312, 0.0012026, 0.000673436, -0.0196673},
 {0.00132145, -0.0135347, 0.00345201, -0.001349, -0.0262518, -0.0183318, 0.028293, -0.00337872, 0.0122705, -0.00807216, -0.00821173, 0.018161, 0.0134616, 0.0235702, -0.0219499, 0.0168359, -0.0323205, 0.0100194, -0.026264, -0.0215398, -0.0299125, 0.0235703, 0.0293978, -0.0296311, -0.0179415},
 {0.00674323, -0.0268936, -0.00354887, -0.0053876, -0.0296475, -0.0311838, -0.0222093, 0.0114662, -0.0241832, 0.029638, 0.00773928, 0.0148153, -0.0100972, 0.026264, 0.0103322, 0.0316514, -0.00403884, 0.00458482, 0.0249171, 0.0208741, 0.0400832, -0.0296311, 0.0107249, -0.0101015, 0.00381967},
 {-0.0208697, 0.00541367, 0.0103803, 0.0296311, 0.0309603, 0.0102295, 3.49353e-005, 0.000734305, -0.00908703, -0.0208491, 0.00501632, -0.0262576, -0.0181824, -0.00404061, 0.0160981, -0.0276108, -0.0047039, -0.0161103, 0.0222234, -0.0141399, 0.0144341, -0.0107756, 0.00777391, 0.0336718, 0.0289667},
 {-0.00339192, 0.00197562, 0.00191349, 0.0323249, 0.00273319, -0.0390991, 0.00867398, 0.0180633, 0.0189164, 0.0154381, 0.0227469, 0.00064283, 0.00201035, 0.0222234, -0.0261256, 0.0101015, -0.0249379, -0.0180434, -0.0303046, 0.0134558, 0.0218658, 0.0181821, 0.00111275, -0.015489, -0.0276738},
 {-0.00941857, -0.00469235, 0.0157181, 0.00336704, -0.00136686, -0.0230383, 0.0235917, 0.00272162, 0.0264416, -0.00536886, 0.0123296, 0.0154959, -0.00336278, 0.00269374, -0.0252522, -0.0208765, -0.0181761, -0.00745472, -0.0195296, 0.0323256, 0.0087909, -0.00202159, 0.0271139, -0.0255905, -0.0220974},
 {-0.00203054, 0.0275953, -0.0166193, -0.0168359, -0.00605399, 0.0230445, -0.00742464, -0.0141782, 0.0104581, -0.0188647, -0.00422022, 0.0215372, 0.00673348, 0.015489, -0.000492192, 0.0141421, 0.0181804, -0.0363075, -0.0114484, -0.0134711, -0.0163054, 0.0269374, 0.0165116, -0.00471405, 0.0218819},
 {-0.0080791, 0.00808449, 0.00973537, 0.0215499, 0.0255925, 0.0131428, -0.00405617, 0.0134805, -0.0244077, 0.0235743, 0.0200096, 0.0148237, 0.0235702, -0.0323249, -0.0148615, -0.015489, 0.0255863, 0.00581143, 0.00336717, 0.025588, -0.0312243, -0.0282843, -0.0158591, -0.00471405, 0.0344962},
 {-0.00337224, 0.00739597, 0.000498459, -0.0134687, -0.00673402, -0.0414711, -0.0188491, 0.0128066, 0.013412, -0.00201376, -0.0324439, 0.0262635, 0.0121221, -0.0134687, -0.00783981, 0.0121218, 0.000672355, -0.0121738, 0.00538748, 0.0269377, 0.00586224, 0.00673337, 0.0252692, 0.00942809, -0.0232955},
 {0.0195304, -0.00537462, 0.00443013, -0.0168359, 0.0249176, -0.0205759, -0.0134655, 0.00537295, -0.0190736, -0.0242447, -0.0100503, -0.0249047, -0.0282842, -0.00942809, -0.0180028, 0.0222234, -0.0154898, 0.0038286, 0.0168359, 0.00201702, -0.0184753, 0.0255905, -0.0183769, -0.000673436, 0.0320102},
 {0.0187976, 0.0267922, 0.0401486, 0.033635, 0.0149215, -0.0777969, 0.0263527, 0.0229982, -0.0263213, -0.0128692, -0.0647679, -0.00700433, 0.0257274, -0.00740779, 0.0686892, 0.0148156, -0.0114569, 0.0164986, -0.0208565, 0.0277625, 0.0362403, 0.0164031, -0.0228618, -0.0249171, 0.0734947},
 {0.0236518, -0.0153139, -0.0244904, 0.016835, -0.000803772, 0.014931, 0.0224582, 0.0177852, 0.0139964, 0.0331475, 0.00294042, 0.0310367, -0.0296043, 4.57719e-009, -0.0315962, -0.0228968, 0.0122021, 0.0304657, 0.0208765, 0.016193, -0.00494069, 0.0276022, -0.0163801, -0.0269374, 0.00594779},
 {-0.022878, -0.0160994, -0.0180905, -0.0289577, 0.00332966, 0.0329643, -0.028238, -0.00804844, 0.0141495, 0.00540396, 0.0140876, -0.0316491, 0.0316515, 0.0276108, -0.0236464, 0.0336718, 0.012808, 0.0243935, -0.0148156, 0.0121204, -0.00863328, -0.00269599, 0.0289581, -0.0303046, -0.00148711},
 {-0.0148022, 0.0101303, 0.001721, 0.0276108, -0.024921, 0.00751837, 0.0208662, -0.0289681, 0.00411982, 0.000671281, 0.0255887, -0.000658739, -0.0195285, -0.0329983, -0.0148375, -0.00606092, -0.00943281, -0.00405532, -0.0269374, -0.0161672, -0.0264189, 0.030978, 0.00829849, 0.00471405, -0.0153578},
 {0.00942175, 0.0282611, 0.000932674, 0.0202031, -0.0282768, 0.0248738, 0.0107418, -0.0222851, 0.0202241, 0.0161423, 0.0372292, -0.012141, -0.0208765, -0.0208765, 0.0168786, 0.0195296, -0.0242494, -0.0101912, -0.0161624, -0.0154931, 0.00215733, 0.0161624, -0.0213153, -0.0303046, 0.00979752},
 {0.0242268, 0.0228191, -0.00764741, -0.00740842, 0.0296414, 0.035394, 0.0127988, -0.00134214, -0.00899411, -0.0013361, 0.0301524, -0.0256085, 0.0161602, 0.0323249, -0.0171911, -0.00808122, 0.0309843, -0.0216681, -0.0282843, 0.0128114, -0.0251607, -0.0329983, 0.0227515, -0.010775, -0.0394813},
 {0.0296382, -0.0282574, 0.0104152, 0.0175093, -0.0208897, 0.0228656, -0.00941562, 0.0195418, 0.0166227, -0.0134628, 0.00938758, -0.0282851, 0.0249172, -0.0161624, -0.0248563, -0.0235702, 0.0242448, -0.0234399, 0.00202032, -0.0262673, -0.0263137, 0.0168359, 0.000449933, 0.00538748, -0.00225072},
 {-0.0107635, 0.0128193, 0.015784, -0.0222234, -0.0155034, 0.0148445, -0.0107369, -0.0329529, -0.000787378, 0.00137742, 0.0179747, -0.0100853, 0.00808335, -0.0188562, 0.0187203, 0.0249171, 0.0202097, -0.016804, 0.00202031, -0.0141407, 0.0264334, 0.0269374, 0.00402966, 0.0114484, 0.0262533},
 {-0.00137021, 0.0255288, 0.023154, -0.00336824, 0.00407968, 0.0109957, -0.0323978, 0.0288615, 0.000125219, 0.00264833, 0.00225269, -0.00541845, -0.0107819, -0.0134687, 0.0126331, 0.0289577, -0.00271877, -0.0267144, 0.0202031, 0.00537375, 0.0381475, -0.00875194, -0.0298213, 0.0168359, -5.47523e-005},
 {0.0276195, 0.0235915, -0.0109459, 0.00606098, -0.000691216, -0.0345779, 0.00272168, 0.0168603, 0.0282218, -0.0282611, -0.0262165, 0.016846, 0.024917, -0.0215499, 0.0322398, 0.015489, 0.00943668, 0.0183805, -0.00134694, -0.0323238, 0.0141187, -0.0134692, -0.0339505, 0.0289577, -0.0125624},
 {0.0336658, 0.0269107, 0.0113502, 0.026264, 0.0309836, 0.0139145, -0.0181993, 0.0141184, 0.0128037, -0.0316504, 0.0124297, 0.0289485, 0.00808053, 0.0114484, -0.0277538, -0.0101015, 0.0336713, -0.0132059, 0.00336717, 0.0181832, 0.0120011, 0.026264, -2.7693e-005, 0.00471405, 0.00417108},
 {0.00741074, -0.0289589, -0.00632983, -0.0141421, 0.0168405, -0.0231743, 0.0228903, 0.00945151, 0.00491414, 0.0323239, -0.0373907, 0.0269383, 0.0323249, 0.0141421, 0.0239536, 0.00740778, 0.0296292, 0.0218956, -0.0202031, 0.0033666, -0.0249911, -0.00202049, 0.0281375, -0.0161624, 0.0353565},
 {0.0114423, 0.00132969, 0.0240673, -0.00336763, 0.00471569, -0.0172388, 0.029633, -0.0309648, -0.0126805, 0.0269364, -0.00410241, 0.0242322, 0.00404199, 0.0215499, 0.0389398, -0.0127953, 0.023571, 0.00472295, 0.0020203, -0.0107734, -0.0075387, 0.00538694, -0.00959709, -0.0121218, 0.0371866},
 {6.18419e-007, -0.00201458, -0.00669677, -0.0181827, 0.00471399, -0.0382854, 0.00606466, 0.00133421, -0.0360814, -0.023572, -0.00903946, 0.00606141, 0.030978, 0.0303046, 0.0211852, 0.00471405, 0.00875452, -0.0244658, 0.0181827, 0.00942708, 0.00661404, 0.0276108, -0.0290718, -0.00471405, -0.00975921},
 {-0.00207344, 0.006577, 0.0400285, 0.0154549, -0.00124154, -0.0863926, 0.00750479, 0.00955204, -0.0309321, -0.00277413, -0.0907496, 0.0286802, 0.00619768, -0.00673435, 0.0660244, -0.0168359, -0.0309875, 0.0185582, -0.0100794, -0.0139928, 0.0664552, -0.0293891, -0.0143348, -0.0188562, 0.0740113},
 {0.016919, -0.0281142, -0.0171471, 0.0276102, 0.0194146, -0.00442068, 0.0325572, -0.0219446, 0.0146223, -0.0146568, -0.00339712, -0.026881, 0.00811194, 0.015489, -0.0128044, 0.0255905, -0.0309032, -0.00663336, 0.0202031, -0.0188244, 0.00913789, -0.0242529, 0.0149657, -0.00875466, -0.00205018},
 {-0.0316338, 0.00611939, 0.00536855, 0.0208765, -0.0256185, 0.0242877, -0.0188073, -0.0120803, -0.0304821, -0.00604239, -0.0194688, -0.0296338, -0.0114433, 0.0249171, 0.00994834, -0.0175093, 0.0235819, 0.0151977, -0.0255905, 0.0168364, -0.00948256, 0.030305, 0.0225466, 0.0141421, -0.0125006},
 {-0.0141299, 0.00673759, -0.00924314, 0.0134687, -0.0127954, 0.00506524, 0.0242269, 0.0141466, -0.0293545, -0.0276264, 0.0211971, 0.0141471, -0.0235701, 0.0249171, 0.0163696, -0.0323249, -0.00943185, 0.017052, -0.0276108, 0.00268998, -0.0312396, -0.0141417, 0.0365324, 0.0316514, 0.0167351},
 {0.0047068, 0.0221948, 0.0280151, -0.0114484, 0.0101094, 0.0449991, 0.0248791, -0.0263111, -0.0423681, -0.02427, 0.00949282, 0.00603754, 0.0282842, -0.00538748, -0.0236597, 0.0249171, -0.0114558, -0.0417314, -0.0276108, -0.00135488, -0.0257731, 0.0296311, 0.0267727, -0.010775, 0.00346889},
 {-0.0195468, -0.0142101, -0.0237914, 0.00942809, 0.0188624, 0.0345694, -0.022894, -0.0155008, 0.0284612, -0.0067302, 0.0163426, 0.0141312, 0.0242414, -0.0114484, -0.0465872, -0.0148156, -0.0188519, -0.0139785, 0.0175093, -0.00537572, -0.0269221, 0.014143, 0.0148273, 0.0141421, 0.0153624},
 {-0.020195, -0.0316273, 0.00976954, 0.0269374, -0.00944304, -0.00953604, -0.00200624, -0.0249121, -0.0201001, 0.0114496, 0.003092, -0.0289601, -0.0235694, 0.0020203, 0.0383443, -0.00808122, 0.0309793, -0.0364307, -0.0282843, -0.0208803, 0.0201589, 0.0161623, -0.00470559, 0.015489, 0.017124},
 {-0.0100897, 0.0235983, 0.0237298, 0.00942809, -0.0107881, -0.0196783, 4.31422e-005, -0.00736025, 0.037492, 0.0249406, 0.0148289, 0.00406433, 0.020203, -0.0276108, -0.020958, 0.0181827, -0.00605104, 0.0176477, -0.00538748, 0.0154937, 0.0497005, -0.0121229, -0.000774589, 0.0175093, 0.0298694},
 {0.0255713, 0.00870822, -0.00647937, 0.0336718, -0.0235412, -0.0181217, -0.0155584, 0.0241645, -0.0232768, 0.00601584, 0.0160781, 0.026242, 0.0228969, 0.0296311, 0.0250953, -0.0255905, 0.0282648, 0.0195728, -0.0121218, 0.0242324, -0.00818591, -0.0309771, 0.0116325, -0.0175093, 0.021881},
 {-0.0296229, 0.0269483, -0.0150585, -0.00673443, -0.0235834, -0.00396323, 0.0236012, 0.0114962, 0.0193045, -0.0201774, 0.0254062, 0.0121201, 0.00269605, -0.026264, 0.0223796, -0.0323249, -0.0249093, -0.0156426, 0.0161624, -0.020202, 0.0387383, -0.00471341, 0.0289913, 0.00606091, -0.015794},
 {0.0107665, 0.020843, 0.0207901, -1.07763e-006, 0.0168388, 0.0271317, -0.0256083, -0.0229112, -0.0357556, 0.0121245, 0.0371118, 0.0201822, 0.0107743, -0.0289577, 0.029333, -0.0235702, 0.0195284, -0.00943007, 0.026264, 0.0148129, -0.00450268, 0.0101018, -0.00980265, -0.000673436, -0.0331649},
 {0.0235725, 0.0047188, -0.00998297, -0.0181827, 0.0188619, -0.0192561, -0.0323339, 0.0262769, 0.0342792, -0.00403966, -0.00100339, 0.00270176, 0.0235708, 0.00269374, -0.0151731, 0.0188562, -0.0222253, -0.0121961, 0.0276108, 0.000671242, 0.001805, -0.0303046, 0.020367, -0.00134687, 0.0325192},
 {-0.0188621, -0.0242477, 0.0170843, 0.0276108, -0.0242457, 0.0109079, 0.0269384, -0.0128009, 0.00314986, 0.00674173, 0.0097383, 0.0235516, -0.0269374, 0.0255905, -0.00447091, -0.015489, 0.00471517, -0.0284392, -0.0316514, 0.0282832, 0.0088019, 0.0020186, 0.00510837, -0.0228968, 0.0210618},
 {0.00471314, -0.00404853, 0.004561, 0.00134609, -0.0060629, 0.00540355, -0.0289529, 0.0329869, 0.0079582, -0.00605426, 0.0222637, -0.0249371, 0.0101011, 0.0228968, -0.0300407, -0.00336718, -0.0161615, -0.0263969, -0.0181827, -0.000674762, 0.0297653, -0.0148158, 0.0144658, -0.0127953, -0.0194155},
 {0.00668249, -0.0129685, 0.0353104, 0.0309433, -0.015382, -0.0362555, 0.0162505, 0.0216907, 0.0253088, -0.0297052, -0.0549191, 0.015883, 0.0102342, 0.00471405, 0.0264557, 0.0033659, -0.00404873, -0.0123253, -0.027591, 0.0237201, 0.0744017, -0.0287152, -0.0389507, 0.0215499, 0.0724403},
 {0.0101863, -0.0119555, -0.0175347, -0.0047112, -0.0196459, -0.0276221, 0.0123593, 0.0252089, 0.0199897, 0.0284436, 0.0201652, 0.00477657, -0.0282568, 0.00471405, -0.00449326, 0.0101015, 0.00950938, -0.0109504, 0.026264, -0.00467955, -0.0112103, -0.0235796, -0.0328631, 0.0188562, -0.00257505},
 {0.0296525, -0.00936306, -0.00297097, -0.0323249, 0.00400296, -0.011934, 5.82168e-005, 0.023629, -0.0188827, 0.0310025, 0.020685, 0.0121271, 0.0269383, 0.0101015, -0.0171321, -0.0276108, -0.031641, 0.0208348, 0.0215499, -3.40517e-006, -0.0186838, -0.000677607, 0.00585133, -0.0249171, 0.0312196},
 {0.00607741, 0.00204353, 0.028915, -0.0228968, -0.0101031, -0.0258787, 0.00739359, 0.0276159, 0.00825213, -0.0249266, 0.0154798, -0.0242201, 0.0141457, 0.0148156, 0.00127043, -0.00875466, 0.0282793, 0.0146386, 0.0222234, 0.0276067, 0.0156286, 0.0181827, 0.0338398, 0.0215499, 0.0283165},
 {-0.00202738, 0.0100863, 0.00877023, -0.00606092, 0.0080895, 0.0186009, -0.0249471, 0.00400746, 0.0223628, 0.0221932, -0.00450481, 0.017496, 0.0228968, 0.0181827, -0.000125799, -0.00673435, -0.0282906, -0.00975146, -0.0242437, 0.0168321, -0.0179532, -0.0208765, -0.0179965, -0.00134687, -0.0225473},
 {0.00873182, -0.0236321, -0.0118443, 0.015489, -0.0154768, 0.0518035, -0.018854, 0.0296397, -0.0108211, 0.0127842, 0.0232442, -0.00877597, -0.00136363, 0.00606091, -0.0124417, -0.0303046, 0.0188614, 0.0404828, -0.0168359, -0.0323208, -0.0456019, 0.0208765, 0.0186902, 0.0134687, 0.0136731},
 {-0.0282759, -0.00265744, 0.0288614, -0.0276108, -0.0215644, 0.00165297, 0.0155077, -0.0215411, -0.0172111, 0.000670856, 0.0143535, 0.008759, 0.0161639, 0.0208765, 0.034098, 0.00269374, 0.0235714, 0.00825735, 0.00471405, -0.0269408, -0.00278756, -0.0175093, -0.00819043, 0.00134687, -0.027965},
 {-0.0181746, -0.0100807, -0.0102771, -0.00606102, -0.0289716, -0.0144992, 0.00947149, -0.0147727, -0.0289592, 0.0033951, -0.024014, 0.0215661, 0.0269373, 0.0242437, -0.00436973, -0.0175093, 0.0114581, -0.00328459, 0.0289577, 0.0282882, 0.0157402, -0.0202031, -0.0178284, 0.0329983, -0.0269069},
 {-0.00675996, 0.000628199, 0.0361343, -0.0202031, -0.00737283, -0.0175041, 0.0295652, -9.74449e-005, 0.00630895, -0.010148, 0.0134787, 0.0289351, -0.0168364, -0.0296311, 0.00287962, -0.00471405, 0.0242237, -0.0256999, 0.0242437, 0.00402743, 0.0267009, -0.00336177, 0.0258742, -0.0323249, 0.0108671},
 {-0.0067259, 0.00270424, -0.00762922, 0.00471376, 0.00671614, 0.0169819, -0.00266237, 0.022906, 0.00725797, 0.0249488, 0.0415022, 0.0195352, 0.00471749, 0.0235702, -0.0223713, -0.0181827, 0.0282897, -0.0297947, 0.0235702, 0.0154859, -0.0121147, 0.0235702, -0.00530454, -0.0249171, 0.00670545},
 {0.0228893, 0.0215282, -0.0126612, 0.0228968, -0.00336407, -0.00380612, 0.0154796, 0.0282214, -0.00415219, -0.0195203, 0.0533181, 0.0316374, 0.00875472, -0.0127953, -0.0261854, -0.00740779, -0.00135348, 0.0226858, -0.000673275, -0.00741831, -0.00381306, -0.00404027, -0.0107063, -0.0249171, -0.0144931},
 {-0.00807735, 0.0316533, 0.00621601, 0.00538764, 5.65454e-006, -0.0414219, 0.00807357, -0.0330227, 0.0228524, -0.010092, -0.00178904, -0.0222078, -0.00471236, 0.0020203, -0.00518883, -0.0195296, -0.00539161, -0.0143825, 0.0235702, -0.0107754, 0.0237002, -0.0141423, -0.00578794, 0.0141421, 0.00295123},
 {0.0127889, 0.0107798, 0.00967039, 0.0181827, -0.0168382, 0.00894419, -0.0323225, 0.0336572, -0.00503743, -0.0208666, -0.0256222, -0.0269504, 0.0040429, -0.0215499, 0.0166096, 0.0127953, 0.0242438, -0.0230629, 0.00404061, -0.0195298, -0.0228649, 0.0296311, 9.31004e-005, -0.0228968, -0.0171138},
 {-0.00471417, -0.00200587, -0.0257486, 0.0215499, 0.0195265, 0.0197043, 0.0114465, -0.0222226, 0.00491238, 0.0323204, 0.0040966, -0.0222315, -0.0101016, 0.00269374, -0.0218717, -0.0188562, 0.0208758, -0.0127033, -0.00942809, -0.0329988, -0.0269159, -0.00740919, 0.0114441, -0.0296311, 0.0228234},
 {-0.0323715, 0.0274438, -0.00769971, 0.0208421, 0.0297345, -0.0739625, 0.0223074, 0.0149333, -0.0223711, -0.0148614, -0.0342737, -0.0029601, 0.0270739, 0.0336718, 0.0206018, -0.015489, -0.0107841, 0.0270394, -0.0120999, -0.032173, 0.0963825, -0.010536, -0.0229191, 0.00471405, 0.0740092},
 {0.00749061, -0.0112769, 0.0272307, 0.0289568, -0.0270551, 0.00627838, 0.0278436, -0.0179035, 0.0111446, -0.0126212, 0.0280336, 0.0128501, 0.029658, 0.00875466, -0.0316192, 0.00336717, -0.0208012, -0.0174591, 0.0249171, 0.00272796, 0.00135334, -0.00540102, 0.0172481, -0.010775, -0.00300133},
 {0.0262821, -0.0248486, 0.00349382, -0.0195296, 0.00400507, 0.00912675, 0.00477082, 0.00408674, 0.00508075, 0.00947254, -0.0155609, -0.0323276, -0.0262638, 0.0134687, -0.0112021, 0.026264, -0.0228842, 0.0206777, -0.0114484, 0.0127946, -0.0220221, -0.0249168, -0.0138647, 0.0235702, -0.0302905},
 {-0.0141268, -0.0222052, -0.0354238, 0.0249171, -0.0276118, 0.0198708, -0.0289682, -0.0202103, 0.0417637, 0.0168344, 0.0216149, -0.0094004, -0.00201239, 0.0222234, 0.00540455, 0.0168359, 0.00470713, 0.0365582, -0.0215499, 0.00605419, -0.0315818, 0.0289577, 0.014198, 0.0195296, -0.0302866},
 {0.00470891, 0.0181692, 0.014057, 0.0329983, -0.00874602, -0.0224406, -0.00810909, 0.0329673, -0.0138602, -2.11171e-005, -0.00852494, 0.00133461, -0.010774, 0.0296311, 0.0293202, -0.0235702, -0.0080893, 0.00854759, 0.0121218, -0.0114543, -0.0360964, -0.0269374, 0.015377, 0.0316514, -0.0239005},
 {-0.0222416, -0.0276647, -0.0306847, 0.0121218, -0.00403063, -0.0171569, -0.00404231, 0.0289784, 0.0160337, 0.0127821, 0.0206486, -0.0316719, 0.00605074, 0.00134687, 0.0173865, -0.0289577, -0.0107692, -0.0199879, 0.0276108, 0.0202096, -0.00279456, -0.00268756, -0.00304914, -0.00740779, -0.00465225},
 {0.0114569, -0.0296103, 0.023845, 0.0235702, 0.0323134, 0.0268776, 0.0242705, 0.000688793, 0.0316358, -0.0242454, 0.0352214, -0.0303074, 0.0235703, -0.0148156, 0.000329598, 0.0168359, -0.0222206, -0.00141917, 0.0114484, 0.0262626, 0.00474618, 0.0336718, 0.0359404, 0.026264, 0.00215904},
 {0.0134787, 0.0155173, 0.0119991, -0.0148156, -0.0188696, -0.0018475, 0.0188983, -0.00330757, 0.0253877, 0.00742762, -0.00128597, -0.00672005, -0.0208766, 0.00269374, 0.0302887, 0.0175093, 0.00270651, -0.0318018, 0.0303046, -0.0175061, 0.0115649, -0.00606076, -0.0150641, -0.030978, -0.0211686},
 {0.0282661, -0.0309933, -0.00540581, 0.0188562, 0.0336993, -0.0317377, 0.0133973, 0.0181092, 0.0103544, -0.0189018, -0.0333428, -0.0330104, 0.00740187, -0.0195296, 0.0235829, 0.030978, -2.717e-005, -0.0159891, 0.0114484, 0.0228865, -0.0152395, 0.024917, 0.0151948, -0.0296311, 0.0028719},
 {-0.0141349, -0.00940384, -0.011026, -0.0114484, 0.0195197, 0.0146316, -0.0255637, 0.030985, -0.0239373, 0.008111, -0.0166777, 0.0175158, 0.00336982, -0.0303046, 0.0143742, -0.0255905, -0.0262587, 0.0166901, -0.0114484, 0.0121226, -0.0334443, -0.0181827, -0.000251324, 0.0242437, -0.0226831},
 {-0.0195377, 0.006715, -0.0214403, 0.0202031, -0.00672791, -0.000698446, -0.00338044, -0.015547, 0.0227535, -0.00202077, 0.0211976, -0.0309937, -0.0154895, -0.000673436, 0.00578412, -0.0202031, 0.016159, -0.0239373, 0.0228968, 0.0181814, -0.00377489, 0.0195296, -0.00762517, -0.00875466, -0.0203807},
 {0.0188595, -0.00403466, 0.0259559, 0.0249171, 0.0114538, 0.020299, -0.0134812, -0.01484, -0.0328331, 0.0181956, -0.0199995, 0.00405372, 0.000675851, 0.0114484, -0.0219596, -0.0303046, -0.00404413, -0.0188124, -0.010775, -0.0175097, -0.00537718, 0.0282843, -0.0147759, 0.0188562, -0.0245503},
 {0.0215483, 0.0107655, 0.0070876, -0.010775, 0.00471177, -0.00400824, -0.00942001, 0.0309665, 0.0116607, 0.0168337, 0.0270859, 0.0269305, -0.0134689, -0.00538748, 0.00789685, -0.0101015, 0.00404067, -0.0245125, -0.0276108, 0.000674614, 0.0224415, 0.0161624, -0.000205773, 0.010775, 0.0218138},
 {-0.0168326, -0.00672266, -0.00199034, -0.0222234, 0.00201821, 0.00145546, -0.00605569, 0.0114446, 0.0313865, 0.0329985, -0.0255708, 0.0188683, -0.0107752, -0.010775, 0.00100217, 0.00740778, 0.0228962, 0.028201, -0.0242437, 0.0242433, 0.0152755, 0.0222234, 0.00818453, 0.0289577, 0.0420035},
 {-0.00812754, -0.0291169, -0.0243316, -0.0323599, 0.0209789, -0.0354506, 0.0176064, 0.025041, 0.0195787, 0.0295778, -0.0997448, -0.0143887, -0.0294878, -0.00202031, 0.0666707, -0.0121218, -0.00876473, -0.0189546, -0.00805929, 0.029105, 0.0500854, -0.00447713, -0.0660259, -0.0289577, 0.0774567},
 {0.00479671, 0.0048846, 0.00413708, 0.0114494, -0.00887901, 0.0231841, -0.0246852, -0.0253316, -0.0247139, -0.00185225, 0.030044, -0.0134168, -0.0228674, -0.0168359, 0.0188557, 0.00471405, 0.0303776, -0.00284849, 0.0154888, -0.0255637, 0.0257815, -0.0296418, 0.0231125, 0.00740778, 0.0215249},
 {-0.00267294, -0.0134111, -0.0177189, 0.00134639, -0.0276412, -0.00895183, -0.0147594, 0.0242725, 0.0224545, 0.0289854, -0.0234433, -0.0249217, 0.0235711, -0.0282843, 0.0365627, 0.00942809, 0.0202144, -0.0312671, 0.0289577, -0.0195304, 0.0399867, -0.00875746, -0.00494144, 0.00269374, 0.00354219},
 {-0.0296214, -0.00539667, -0.0400426, -0.0101015, -0.00673364, -0.00438884, -0.0148335, 0.0296149, 0.00792147, 0.0208583, 0.0494784, 0.00202502, -0.0215471, 0.026264, -0.0416132, 0.000673436, -0.00471805, -0.0110031, -0.0228968, 0.024915, -0.0358785, 0.0282843, -0.00526814, -0.0114484, -0.0232962},
 {0.0296263, 0.0168105, 0.0015572, 0.00606095, 0.0208847, 0.0412205, 0.00535485, -0.0155467, -0.0103296, 0.0255541, 0.00389404, -0.0283016, -0.00134839, -0.0255905, 0.0290188, 0.00134687, 0.00672518, -0.0013414, -0.00875466, -0.0276139, 0.0197493, -0.0249171, 0.00416264, -0.015489, -0.00587263},
 {0.00806534, 0.0147639, 0.0123444, -0.030978, -0.00605038, 0.00793845, 0.0336683, 0.0154863, -0.0019106, -0.00944303, 0.00911139, -0.0114615, 0.0127928, 0.0175093, 0.00903662, 0.0289577, -0.021547, 0.010778, 0.010775, -0.0242374, 0.00963691, 0.00269867, -0.0191432, -0.0188562, -0.0332527},
 {-0.0134605, 0.00540064, -0.00865336, 0.00404044, -0.00338319, 0.0104518, -0.013441, 0.0323431, -0.0163504, 0.0107762, 0.0339627, -0.0296342, 0.0188562, 0.0329983, -0.00875841, -0.00808122, 0.0242476, 0.0036063, 0.00471405, 0.00269309, 0.0146657, -0.00202213, -0.0062917, 0.0175093, 0.015004},
 {0.0316606, 0.0316906, 0.00286435, -0.0222234, 0.0228833, 0.0037066, 0.020243, -0.0309181, -0.00498917, -0.0215159, 0.0236415, -0.0302824, 0.0309782, -0.0127953, 0.012634, 0.0269374, -0.0148051, -0.0305978, 0.0249171, 0.0168402, -0.020626, -0.0188562, 0.0266734, 0.00808122, -0.00242797},
 {-0.0309931, 0.0262548, -0.00428739, -0.0047134, 0.026969, -0.0380034, -0.00815665, 0.0329274, 0.00656256, 0.0221849, 0.0149833, 0.0269385, -0.0101052, 0.00875466, 0.0396054, -0.00875466, 0.0120993, 0.00796944, 0.0242437, 0.0228894, 0.0312705, -0.0107756, -0.0251288, -0.0255905, 0.046851},
 {0.0148239, 0.0141738, -0.0230407, 0.0316514, -0.000686162, -0.0291989, 0.0316785, 0.00339839, 0.0113002, 0.0182027, -0.0125899, 0.0181958, 0.0282843, -0.0141421, -0.00604352, -0.0134687, 0.0161672, 0.0166381, 0.0242437, 0.0141459, -0.00450341, 0.0276108, 0.0245725, -0.0303046, 0.00178438},
 {-0.0107837, 0.0195124, 0.0107805, 0.00404061, 0.0276196, -0.0116514, 0.0262497, 0.0309446, -0.0204313, -0.00943982, 0.000533379, 0.0336639, -0.0154892, -0.015489, 0.00418657, 0.0161624, 0.0215459, 0.0140357, 0.0181827, -0.0296315, -0.010826, 0.0188562, -0.00992527, 0.0242437, -0.00701069},
 {0.0296344, 0.0269536, 0.013901, 0.0303046, -0.00807457, 0.0150577, 0.00402296, 0.016831, 0.0152952, -0.0134633, -0.0116576, -0.00537116, -0.0168356, -0.0121218, 0.0111496, -0.0242437, 0.0181799, -0.0273659, 0.0121218, 0.0181832, -0.0136525, 0.00269413, 0.000989475, -0.0114484, -0.0211233},
 {0.0067322, -0.0148329, -0.0082257, -0.026264, 0.0262632, -0.00511555, -0.0249111, 0.0161694, 0.0341265, 0.0235802, 0.00900407, 0.0168381, 0.0235702, -0.0188562, 0.0233564, 0.0121218, -0.0255892, 0.0106836, -0.00471405, -0.0121184, 0.0113998, 0.0215499, 0.0334731, 0.00606091, 0.00242028},
 {-0.0215474, -0.00741467, -0.000203912, -0.00808122, 0.0107735, -0.0197692, -0.0121205, -0.025597, 0.0111817, -0.00873995, -0.0165173, 0.0168409, -0.0161625, 0.0276108, 0.0320563, -0.0323249, -0.0121213, -0.0298296, 0.0134687, -0.0175082, 0.0159126, -0.0161625, -0.0139467, 0.0282843, -0.0134757},
 {-0.0162128, 0.0011665, -0.0235685, 0.0275764, 0.0122291, -0.0364419, 0.0027999, 0.0129417, -0.013064, 0.0154064, -0.0397886, 0.0293659, -0.0153506, -0.000673436, 0.0786786, 0.0289577, 0.0242341, -0.00307419, 0.0296511, -0.0220712, 0.0512078, -0.00312862, -0.021161, -0.0208765, 0.0806101},
 {-0.00261064, -0.00722769, -0.0165848, 0.0289568, -0.0257111, -0.0343625, 0.03054, 0.0332584, 0.0135393, 0.0169985, 0.0110041, 0.00745749, -0.0228656, -0.0269374, 0.0238796, -0.0181827, -0.0221501, 0.00417327, -0.0154892, 0.0229224, 0.0361655, -0.00607668, 0.0209449, 0.0161624, -0.0201073},
 {-0.0323113, -0.0154175, 0.0431692, 0.0087546, -0.00677387, -0.040349, -0.00869748, 0.0222534, -0.0378694, 0.013496, -0.00927326, 0.0276039, 0.00338191, -0.0121218, 0.00416488, -0.00673435, -0.0100884, -0.00141824, 0.00942809, 0.00672774, 0.0486288, -0.0121246, 0.0300112, -0.0134687, -0.00397187},
 {-0.00672324, -0.0262662, 0.012595, -0.00538744, -0.00269423, -0.0056385, 0.0154721, 0.0222037, -0.0253095, -0.00605604, 0.0321936, 0.005381, -0.0188545, -0.0276108, 0.00379983, -0.0161624, 0.0114457, -0.00523235, 0.0134687, -0.00740906, -0.0601424, -0.0161624, 0.0345403, 0.00673435, -0.0206662},
 {0.0188485, -0.0229177, -0.0172976, 0.0208765, 0.0242521, 0.0184955, -0.00878531, -0.0121949, 0.00881465, -0.0316734, 0.0275918, -0.0235955, -0.022223, -0.0282843, -0.0270069, -0.015489, 0.0329935, -0.0263467, 0.0242437, 0.00537927, -0.0417427, 0.0222233, 0.034987, -0.0289577, -0.00485082},
 {0.00806089, -0.0182369, -0.00813839, -0.00808122, -0.012109, 0.00317976, 0.0202028, -0.0141727, -0.0290616, -0.0195369, 0.0280426, 0.0174901, 0.0323249, 0.0215499, 0.00942684, 0.015489, 0.0242476, 0.0332127, 0.0303046, -0.0121132, 0.00540276, -0.0242438, 0.0227725, 0.0208765, 0.00900204},
 {0.0316564, -0.032305, 0.00945507, 0.0296311, 0.028944, 0.000990995, 0.00204548, -0.0188341, 0.0108405, 0.00068526, -0.00357627, -0.0141471, -0.00807796, -0.0114484, 0.00149128, 0.0235702, -0.0175051, -0.0267036, 0.0255905, -0.0175109, 0.00558456, -0.00606188, -0.0127418, 0.0141421, -0.0185052},
 {0.0269489, 0.0316948, -0.0352633, -0.00740761, 0.00132795, -0.0109866, -0.0295899, 0.0162264, -0.00920555, 0.0249602, -0.0248558, -0.0255691, -0.0255904, 0.00404061, 0.0265018, 0.00404061, -0.000662212, -0.00572879, 0.0101015, 0.0303064, 0.0331286, -0.010776, -0.000261885, 0.0181827, 0.00700888},
 {-0.00405804, -0.0128074, 0.00549837, 0.0296311, -0.0161279, -0.0105447, -0.0175854, 0.0127147, 0.0103371, -0.00879677, -0.00790729, 0.0282758, -0.00472084, 0.0168359, -0.0118698, 0.0208765, 0.000643107, 0.000683264, -0.0101015, 0.0296216, 0.0141035, 0.00673411, -0.00233986, -0.010775, 0.0437116},
 {-0.00874317, -0.0168061, -0.00405757, 0.0121218, -0.0107877, -0.00475374, 0.00810412, -0.00871466, 0.0108682, 0.0316734, -0.0215819, 0.0316635, 0.0188562, 1.12883e-009, 0.0119805, -0.015489, 0.029636, 0.00931436, -0.00336717, 0.0282858, -0.00073995, 0.00336315, 0.0225854, 0.0336718, -0.0180758},
 {0.0201956, 0.0262445, -0.02373, 0.000672757, -0.0154811, 0.0213722, -0.00607975, 0.0289146, -0.034241, 0.0134533, 0.013683, -0.0175165, -4.00915e-006, 0.0208765, -0.0149757, 0.0303046, 0.0060561, -0.0185673, 0.0323249, -0.0208777, 0.0100633, -0.0296311, -0.0251887, 0.0242437, 0.0106703},
 {-0.00605685, 0.0316737, -0.028729, 0.000675246, -0.0329958, 0.00528319, 0.01615, 0.0316312, 0.0231592, -0.0296187, -0.0311536, 0.0235849, 0.010102, -0.00269374, 0.0295929, 0.00538748, -0.00404715, 0.0285051, -0.0202031, -0.0289591, 0.0202549, 0.00538533, -0.0335755, 0.0228968, 0.0443261},
 {0.0235661, -0.0128005, -0.0275442, 0.0323249, 0.0148115, 0.0318358, -0.0107694, 0.0080883, 0.0247694, -0.0141411, -0.0211575, 0.0161645, -0.00202113, 0.0121218, 0.0236403, 0.0303046, -0.0175093, 0.0394371, 0.0276108, 0.0168353, 0.0032619, 0.000673629, 0.00486259, -0.00875466, 0.00716371},
 {0.00134804, -0.0195337, 0.00964096, 0.00202046, -0.0269397, -0.012535, 0.024245, -0.0323475, -0.0239284, 0.0276125, 0.0162361, -0.0208744, 0.0242436, -0.0161624, 0.00368329, -0.0161624, -0.0303053, -0.00725453, -0.0222234, -0.0215505, -0.0338779, -0.00606125, 0.00245724, 0.00471405, -0.0158214},
 {0.0174557, -0.0149862, 0.0393014, 0.0154541, -0.0180805, -0.0773477, -0.0120245, 0.0210004, -0.0135294, -0.00142644, -0.0389806, -0.0231813, -0.0254568, -0.00269374, 0.0136635, 0.00336589, -0.00607311, -0.0396723, -0.000650186, -0.00927909, 0.0497331, 0.0197724, -0.0286415, -0.0121218, 0.0658862},
 {0.00681792, 0.0244309, 0.0110156, 0.0148171, 0.0126686, 0.00706291, -0.0199649, 0.0265383, 0.0309048, 0.0237445, -0.022138, -0.0329433, 0.0262955, 0.000673436, 0.000315449, 0.0235702, 0.014221, 0.0165175, -0.00808138, -0.0221982, 0.0105096, -0.012137, -0.00641985, 0.0249171, -0.0122756},
 {-0.0323098, -0.00126714, 0.0253742, -0.00134656, 0.0107388, 0.0008969, -0.0073478, -0.00871072, 0.0102596, -0.0174611, -0.00697912, 0.0114518, -0.0282829, -0.030978, -0.012049, -0.0289577, 0.0242554, 0.00767112, -0.00202023, 0.0114427, 0.0375331, -0.0127985, -0.0135203, -0.0235702, -0.0110965},
 {-0.0141283, -0.0255818, -0.0406155, -0.0127953, 0.0255865, 0.0176358, 0.0188464, 0.00201408, -0.0165779, -0.0134574, -0.000230052, 0.026953, -0.0269374, 0.0188562, -0.0204141, 0.0228968, -0.0255938, 0.00526001, 0.0114484, 0.0323238, -0.0217728, -0.026264, -0.0157669, -0.0168359, 0.0134354},
 {-0.0128028, -0.0282898, 0.00949418, -0.0249171, -0.0188506, -0.0139697, -0.0175347, -0.0330442, -0.0223852, 0.00806716, 0.0363345, -0.000684298, 0.0336718, 0.0235702, -0.000893405, 0.0148156, -0.0128038, 0.0254347, 0.010775, -0.026268, 0.0243821, 0.0242437, 0.0207248, 0.0242437, 0.0138191},
 {-0.0242624, -0.0242765, -0.025706, 0.0329983, 0.0188652, 0.0140383, -0.0107715, 0.00334939, 0.0336227, -0.0141463, -0.000476528, -0.0202204, -0.0316514, -0.00202031, 0.0274851, 0.0222234, 0.0053912, -0.00167847, 0.00404061, 0.00472169, 0.0269828, 0.0336718, -0.0203748, 0.0101015, 0.0274992},
 {0.0289643, -0.0114254, 0.00921826, -0.000673999, -0.014157, 0.0110094, -0.0201785, -0.0134465, -0.028484, 0.00877252, 0.0206086, -0.0154946, 0.00270056, 0.0161624, 0.00371168, 0.0121218, 0.0296346, 0.0126035, -0.0141421, -0.00808439, 0.0211103, 0.00808144, 0.028932, 0.0316514, 0.00456955},
 {-0.0242349, -0.0242145, -0.00711569, -0.0148156, -0.00809441, 0.00987244, 0.00677076, 0.00678985, 0.0145543, 0.0303371, -0.0395106, -0.0276037, -0.00470909, 0.0121218, -0.0126182, 0.000673436, 0.0101105, -0.00607535, -2.53022e-007, 0.01886, 0.0257404, -0.000675203, 0.00624129, -0.0269374, 0.0097909},
 {0.0302871, 0.0221975, 0.0170409, 0.0080814, 0.0256236, -0.0112586, -0.030379, -0.0108612, 0.0285521, -0.0316986, -0.01557, -0.0215633, -0.029632, -0.0168359, 0.00771508, 0.00606091, 0.0255689, 0.010371, 0.0289577, 0.00739363, -0.00446802, 0.0181823, -0.000744848, -0.0323249, 0.00114495},
 {-0.030295, -0.0249001, -0.00116324, 0.0323249, 0.00470095, -0.0132557, 0.0256135, -0.0228727, 0.0123726, 0.024944, -0.0077204, 0.00875617, -0.030978, 0.0148156, 0.000949436, -0.0329983, -0.0188494, 0.00512657, -0.00269374, 0.00202832, -0.0414443, -0.0323249, 0.0241313, -0.0235702, -0.0173535},
 {0.00874579, -0.00810348, 0.0391607, -0.0101015, -0.0289515, 0.0165778, -0.0249365, 0.0188208, -0.00710185, 0.0147992, -0.00793448, 0.0222052, -7.54288e-006, -0.000673436, 0.0216082, -0.0289577, -0.00808374, -0.030225, -0.010775, -0.00134532, 0.0106201, -0.0269374, 0.0067704, 0.0228968, 0.0197293},
 {0.0323265, -0.00131649, 0.0199617, -0.0222234, 0.0276149, -0.0254717, 0.0222043, 0.0100909, 0.0291664, -0.0188548, -0.00426126, 0.00944369, -0.00740737, 0.0134687, 0.0141363, 0.00942809, 0.0323217, 0.0224838, -0.00606092, -0.0329985, -0.0170989, -0.0222234, -0.000131822, 0.026264, 0.0478572},
 {0.00403437, -0.0208735, -0.00638305, 0.00808122, -0.00269676, -0.000578111, -0.0309783, -0.0276114, 0.00414066, -0.00606373, -0.0255346, -0.0282886, -0.0175093, -0.0228968, -0.000578301, 0.0114484, 0.00538732, -0.0136254, 0.00606091, 0.0168361, -0.0259063, 0.010775, -0.010552, 0.0228968, -0.0249772},
 {0.017511, 0.00741361, -0.0290778, -0.00606081, -0.0262664, 0.0295742, -0.019531, 0.0181687, 0.0310183, -0.0329978, -0.0199343, 0.0181946, 0.0215499, 0.00538748, -0.0167972, -0.0282843, -0.0296317, 0.0199957, 0.0242437, -0.01347, -0.00406221, -0.0255905, -0.00509783, -0.00269374, 0.0148496},
 {-0.0175643, -0.00694986, -0.00122232, -0.0195811, 0.00248368, -0.0658937, -0.0381819, 0.0120932, -0.00578614, -0.0242859, -0.0539765, -0.0101433, -0.0270591, -0.0161624, 0.0255934, -0.0161624, -0.00402713, 0.0167344, 0.0229273, 0.0254973, 0.0997036, 0.0299885, -0.0697891, 0.0336718, 0.0781509},
 {-0.0147676, 0.022326, 0.018382, -0.0303046, -0.0270023, 0.00884415, 0.00754791, 0.00824265, -0.0317176, -0.028191, 0.0164689, 0.0114806, -0.0323252, -0.0114484, 0.00324186, -0.0289577, 0.0168758, -0.0306823, 0.0222234, 0.0316639, -0.00837436, 0.0296288, 0.0102399, 0.0282843, -0.00456678},
 {-0.0183177, -0.00230511, 0.00315823, 0.0255899, 0.0210752, 0.0221735, 0.0265559, -0.0246934, -0.0298235, -0.0218154, 0.0226356, -0.0162553, 0.0147626, 0.0188562, -0.0266458, 0.0168359, 0.00862495, -0.0098383, -0.0127941, 0.019481, 0.036654, -0.0316387, -0.0262926, -0.0235702, -0.0142901},
 {-0.0181296, 0.0230149, 0.000300502, 0.00740951, 0.0288825, 0.00485189, 0.0203567, 0.0116345, -0.00552058, -0.0248099, -0.0248362, -0.00736629, 0.00338942, 0.030978, -0.0144938, 0.0323249, -0.00937872, 0.0135448, 0.0303046, -0.00267293, 0.0216128, -0.0175131, -0.016405, -0.0276108, 0.00908437},
 {-0.019598, -0.0318003, -0.0257672, 0.0269376, 0.0128989, 0.01741, 0.0146158, 0.0280518, 0.0263313, -0.00889369, -0.00969552, 0.0268915, -0.00541493, -0.0329983, 0.0318689, -0.000673436, 0.0214894, 0.00578018, -0.00201945, 0.0073814, 0.00761911, -0.0114371, -0.028572, 1.16802e-009, 0.0171201},
 {-0.0289235, -0.00732496, 0.00795609, 0.0336718, 0.00869975, 0.00313352, -0.0099918, 0.000802898, 0.0272503, 0.00344427, -0.028061, 0.00877841, -0.0228927, -0.030978, -0.0178315, 0.00740778, 0.0310085, -0.0192866, -0.00606095, 0.0222353, -0.00030695, 0.0329983, 0.0279471, -0.00269374, 0.00886558},
 {0.0302584, 0.00258957, -0.0122114, -0.0161624, 0.00882633, -0.00441421, -0.0311177, -0.00757389, -0.0286089, 0.0153926, 0.0100957, -0.0108083, 0.0147968, 0.0316514, 0.0159789, -0.0242437, 0.0336362, -0.0219128, -0.0269374, -0.0269537, 0.0238334, 0.00472244, 0.025416, -0.0195296, 0.0301087},
 {2.81484e-005, -0.0181258, 0.0238415, 0.00134766, 0.0141051, 0.026892, -0.00733096, -0.0295433, 0.0312026, -0.0201533, -0.0232956, 0.0303224, 0.0161628, -0.00673435, 0.0286076, 0.0329983, 0.0081036, 0.00493856, 0.0316514, 0.0309847, -0.0139705, 0.0134668, 0.013165, 0.0215499, 0.0238325},
 {-0.02832, 0.00395699, 0.0209432, -0.0195296, -0.0309259, 0.026328, -0.0156012, 0.0126622, -0.0135434, -0.0155684, -0.0129263, -0.0276353, -0.0107883, -0.010775, 0.0297704, 0.0323249, -0.0222549, 0.021552, 0.0242437, 0.022884, 0.00658689, -0.0114438, -0.0165911, 0.026264, 0.0145744},
 {0.0188751, -0.0147648, 0.0189636, -0.0303046, -0.025619, 0.0318422, 0.0155546, -0.0268631, 0.0272756, 0.0256349, -0.0237692, -0.0127791, -0.0242438, -0.00740779, -0.0325385, -0.0208765, -0.00536639, -0.00830572, -0.0242437, -0.0289515, 0.0134772, -0.0323249, -0.0200822, -0.0323249, 0.0187804},
 {0.00805232, 0.00330347, -0.00869834, 0.0168359, -0.0167977, 0.010166, -0.0276946, -0.0250135, -0.0233826, 0.0235162, -0.0130543, -0.0215706, 0.0134599, 0.0336718, 0.0254465, -0.0188562, 0.0127704, -0.00948423, -0.0101015, -0.020884, -0.0156401, 0.0323249, 0.0114199, -0.030978, -0.0296899},
 {0.00742719, -0.0322864, -0.0217797, 0.0148156, 0.0134431, -0.00682969, 0.0148696, 0.0290193, 0.0128083, 0.00677184, 0.0310692, 0.0303158, -0.000665925, 0.0242437, -0.0242773, 0.00471405, -0.0154739, -0.0199822, -0.0181827, 0.00337402, 0.0322197, 0.010101, 0.011635, 0.00942809, 0.0217732},
 {0.022204, 0.0295811, 0.026617, -0.0181827, -0.0100699, 0.0265902, 0.0214845, 0.00665574, 0.0222536, -0.00745351, -0.00976153, -0.00675201, 0.0195297, 0.0329983, -0.0150775, 0.0168359, -0.00137026, 0.0017881, 0.0336718, -0.0235763, 0.0175317, 0.0329983, -0.018847, -0.0249171, 0.0333316},
 {-0.0201917, 0.033032, -0.0223429, -0.0188562, -0.00271611, -0.0130891, 0.00139186, -0.0221737, 0.0220573, -0.0215236, -0.0167613, -0.0121102, 0.00808163, -0.0121218, 0.00193554, -0.0195296, -0.0168263, 0.0269927, 0.0134687, 0.00875926, -0.0112032, 0.00538626, 0.0209759, 0.0255905, 0.0200494},
 {-0.0168899, -0.00425754, 0.0422624, 0.0268859, -0.0116598, -0.0641591, 0.00963276, -0.0235949, -0.00250288, 0.000632777, -0.0888219, -0.0168747, 0.0308563, -0.010775, 0.0682646, 0.00134245, 0.00944351, -0.018841, 0.0269678, -0.0263558, 0.0516346, -0.00166314, -0.0614817, 0.00269388, 0.0397739},
 {-0.00129715, 0.0203055, -0.0131999, -0.0175093, 0.033613, -0.0043969, 0.00148795, 0.0311377, 0.0302011, 0.0196223, 0.00541918, -0.0329682, 0.0181916, -0.0249171, -0.025712, -0.0168359, -0.0147724, 0.00219981, -0.0249171, -0.00469589, 0.0272792, -0.0107818, 0.0311131, -0.0202031, -0.00610113},
 {0.00794403, -0.00701893, -0.0211264, 0.019529, -0.00180821, -0.0205862, -0.024627, -0.00314649, -0.028951, -0.0258575, -0.0335185, -0.00682852, -0.0310317, -0.00606092, -0.0167253, -0.00740779, 0.0140112, 0.0111074, 0.000675684, 0.0113976, 0.0364991, 0.0208984, -0.0283606, -0.015489, 0.0251539},
 {0.000730633, -0.018064, 0.00163439, -0.0269374, 0.0309025, -0.0208568, 0.031133, 0.0257697, 0.0264111, -0.0120123, -0.0152244, 0.0256283, -0.0309641, 0.000673436, 0.0206658, -0.026264, -0.00331238, 0.0133728, 0.0181827, 0.0175271, -0.0319799, -0.0329984, -0.0210281, -0.00336718, -0.031172},
 {-0.0135392, -0.0169836, -0.0106932, -0.0228965, -0.0147122, 0.00841516, 0.0105755, -0.0170689, -0.00827054, -0.0304404, 0.022343, -0.0155374, 0.00805352, 0.0202031, 0.00592301, -0.0235702, -0.00141692, -0.0262413, -0.0202031, -0.00945407, -0.00616551, 0.0114598, 0.0154899, 0.0141421, 0.00301583},
 {-0.0208416, -0.017427, -0.0319709, 0.0195296, -0.00140796, -0.0291893, 0.0283935, 0.031108, 0.0237325, -0.0053096, -0.0125146, -0.0134431, -0.00806811, -0.0215499, 0.00855189, 0.0329983, -0.0296005, 0.0233936, -0.0208765, 0.00405481, 0.0230839, -0.0242443, 0.014473, 0.0202031, 0.00125553},
 {0.030258, 0.00932275, 0.0179311, -0.0276108, -0.0107026, -0.0107129, 0.0106335, -0.00824976, 0.00191877, 0.0160672, 0.0221906, -0.010809, -0.0316512, 0.00134687, -0.0152498, -0.0222234, 0.0154443, -0.0141232, -0.0114484, 0.0020017, -0.0103632, 0.0336716, 0.00774749, 0.0208765, 0.0062738},
 {0.00743491, 0.00813773, 0.0257069, 0.00471393, 0.0262302, 0.029432, -0.0241683, 0.0317348, 0.000976136, 0.0101538, 0.0205292, -0.0248993, 0.0262643, 0.0202031, -0.00535574, -0.00808122, -0.0222038, 0.0152449, 0.026264, 0.021557, 0.0258599, 0.0161625, -0.0170432, -0.00202031, -0.00756546},
 {0.0208411, 0.0127122, 0.0332068, -0.0282843, 0.0310293, -0.0256583, 0.0126844, 0.0308487, 0.0334622, 0.000593214, 0.0111458, -0.00541276, 0.00671947, 0.0289577, 0.0266832, 0.00269374, 0.0302732, 0.0300842, 0.00404065, -0.0121356, 0.0127162, 0.0121261, 0.0274263, -0.0188562, -0.00982672},
 {0.0222421, 0.0114993, -0.00267548, 0.0134687, 0.0134379, 0.0047523, -0.0275464, -0.0234954, 0.00715561, -0.00197234, -0.0299269, -0.0255749, -0.0323249, 0.0208765, -0.0149284, -0.0208765, 0.0168524, -0.0163261, -0.0276108, 0.0128032, 0.0266497, -0.0222233, 0.00157978, -0.0215499, 0.0231567},
 {0.00603063, 0.00936365, 0.0125514, -0.0215499, 0.00946965, -0.00629434, -0.00479996, 0.00865656, -0.0051934, -0.0290126, 0.000752042, -0.0182029, -0.0148244, -0.0235702, -0.03216, -0.00134687, -0.0323432, 0.0193456, -0.010775, 0.0255827, -0.0162452, -0.0208764, -0.0109496, 0.0020203, -0.00166095},
 {0.0195447, -0.0215103, -0.00622361, -0.0181827, -3.09143e-005, -0.0204379, 0.033052, -0.0295699, 0.0317041, 0.029665, 0.00858134, 0.0121346, -0.0276109, 0.0208765, -0.017116, 0.0141421, 0.007425, -0.0239886, 0.0195296, 0.0303094, 0.0244948, 0.0134682, -0.00653259, -0.00538748, 0.0281403},
 {-0.0134907, 0.00601099, -0.00700599, 0.0222234, -0.0215209, -0.0196955, -0.0276773, -0.00479029, -0.0232423, -0.0303472, -0.0104621, -0.00675, -0.0303044, 0.010775, 0.0313296, 0.0188562, -0.00406175, -0.0105307, 0.00740778, -0.0188619, -0.021068, -0.000669199, -0.0273944, -0.0296311, -0.0234961},
 {-0.0323151, 0.00407403, 0.0231701, -0.00404062, 0.0249, 0.0294025, 0.0222658, -0.0221745, -0.0103444, 0.0296583, -0.0139414, -0.00941699, 0.011449, -0.0269374, -0.00855002, -0.000673436, 0.020886, -0.0175307, 0.015489, 0.0202068, -0.0116546, -0.0188562, 0.0343197, -0.00606092, -0.0313281},
 {0.0330173, -0.0322689, 0.0246968, 0.0303046, 0.00804496, 0.021735, -0.0127202, 0.00413017, -0.0229202, 0.0229457, -0.0280033, 0.00877253, 0.0148219, 0.00808122, -0.022243, -0.0121218, 0.0101237, 0.00352847, -0.0195296, 0.0303115, -0.0130377, -0.00673838, 0.0227445, 0.00875466, -0.0163016}
};

float weightHO[26][3] = {
 {0.17188, -0.0200483, -0.107995},
 {0.166536, -0.092409, -0.00478825},
 {-0.713958, -0.964117, 1.24661},
 {-0.0760954, -0.0852364, -0.225543},
 {-0.267997, 0.0946693, -0.317441},
 {-0.698635, 1.08945, -0.72887},
 {0.128634, 0.129344, 0.125329},
 {0.064651, 0.17535, -0.0771083},
 {0.637963, 0.387474, -0.946154},
 {0.119661, 0.183798, -0.0840981},
 {-1.39368, 0.716713, 0.798258},
 {0.0354179, -0.000445476, -0.0640267},
 {-1.16679e-006, -0.0892627, -0.0895871},
 {-0.0361067, -0.029242, -0.24554},
 {0.587096, -0.914822, 0.366687},
 {0.128, 0.06, 0.188},
 {-0.0640728, 0.139835, 0.00409967},
 {0.537969, 0.329216, -1.29285},
 {-0.0681117, -0.217245, -0.0735345},
 {-0.0159909, 0.123918, -0.0320411},
 {0.664336, -1.39093, 0.516021},
 {-0.216071, 0.0507118, -0.0094997},
 {-0.747621, 0.349819, 0.315532},
 {0.096, -0.044, -0.052},
 {0.817515, -0.494994, -0.259517},
 {0.304106, 0.0252421, 0.0135408}
};
# 5 "voicerec/neuralNetworkSynth.cpp" 2
# 1 "voicerec/neuralNetworkSynth.h" 1



# 1 "voicerec/neuralNetworkConstants.h" 1
# 5 "voicerec/neuralNetworkSynth.h" 2

void feedForward(float pattern[882]);
int guessClassification();
int classifySound(float input[63][14]);
# 6 "voicerec/neuralNetworkSynth.cpp" 2

float input[882 +1];
float hidden[25 +1];
float output[3];

void feedForward(float pattern[882]) {_ssdm_SpecArrayDimSize(pattern, 882);

loop1:
  for (int j = 0; j < 882; j++){
#pragma HLS UNROLL


 input[j] = pattern[j];
  }
loop2:

  for (int j = 0; j < 25; j++) {
   hidden[j] = 0;


    for (int k = 0; k < 882 +1; k++)
      hidden[j] += input[k] * weightIH[k][j];
      hidden[j] = 1/(1+exp(-1*(hidden[j])));
  }
loop3:

  for (int j = 0; j < 3; j++) {
   output[j] = 0;


    for (int k = 0; k < 25 +1; k++)
      output[j] += hidden[k] * weightHO[k][j];
      output[j] = 1/(1+exp(-1*(output[j])));
  }
}

int guessClassification() {
  float second_max = 0;
  float max = 0;
  int guess;
  for (int j = 0; j < 3; j++) {

    if (output[j] > max) {
      guess = j;
      second_max = max;
      max = output[j];
    }

  }
  std::cout << "accuracy " << max<<"\n";
  if(max<0.5){
  return 8;}
  else{
   switch(guess){
    case 0: return 1;break;
    case 1: return 2;break;
    case 2: return 3;break;
    default:return 9;break;
  }
  }
}

int classifySound(float input[63][14]) {_ssdm_SpecArrayDimSize(input, 63);
   int guess;
   float flatInput[882];

  for (int i = 0; i < 63; i++) {
   for (int j = 0; j < 14; j++) {
      flatInput[i*14 + j] = (float)(input[i][j]);
    }
  }

  feedForward(flatInput);
  return guessClassification();
}
