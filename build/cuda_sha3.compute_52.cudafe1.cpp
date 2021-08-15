#pragma section("__nv_managed_data__")
static char __nv_inited_managed_rt = 0; static void **__nv_fatbinhandle_for_managed_rt; static void __nv_save_fatbinhandle_for_managed_rt(void **in){__nv_fatbinhandle_for_managed_rt = in;} static char __nv_init_managed_rt_with_module(void **); static inline void __nv_init_managed_rt(void) { __nv_inited_managed_rt = (__nv_inited_managed_rt ? __nv_inited_managed_rt                 : __nv_init_managed_rt_with_module(__nv_fatbinhandle_for_managed_rt));}
#line 1 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
#define __nv_is_extended_device_lambda_closure_type(X) false
#define __nv_is_extended_host_device_lambda_closure_type(X) false
#if defined(__nv_is_extended_device_lambda_closure_type) && defined(__nv_is_extended_host_device_lambda_closure_type)
#endif

#line 1
#line 67 "E:\\cuda\\bin/../include\\cuda_runtime.h"
#pragma warning(push)
#pragma warning(disable: 4820)
#line 708 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
#pragma region Input Buffer SAL 1 compatibility macros
#line 1472
#pragma endregion Input Buffer SAL 1 compatibility macros
#line 2361 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
extern "C" {
#line 2967 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\sal.h"
}
#line 22 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\concurrencysal.h"
extern "C" {
#line 354 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\concurrencysal.h"
}
#line 15 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#pragma pack ( push, 8 )
#line 18
extern "C" {
#line 28 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
typedef unsigned __int64 uintptr_t; 
#line 39 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
typedef char *va_list; 
#line 112 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
void __cdecl __va_start(va_list *, ...); 
#line 124 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
}
#line 128 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
extern "C++" {
#line 130
template< class _Ty> 
#line 131
struct __vcrt_va_list_is_reference { 
#line 133
enum: bool { __the_value}; 
#line 134
}; 
#line 136
template< class _Ty> 
#line 137
struct __vcrt_va_list_is_reference< _Ty &>  { 
#line 139
enum: bool { __the_value = '\001'}; 
#line 140
}; 
#line 142
template< class _Ty> 
#line 143
struct __vcrt_va_list_is_reference< _Ty &&>  { 
#line 145
enum: bool { __the_value = '\001'}; 
#line 146
}; 
#line 148
template< class _Ty> 
#line 149
struct __vcrt_assert_va_start_is_not_reference { 
#line 151
static_assert((!__vcrt_va_list_is_reference< _Ty> ::__the_value), "va_start argument must not have reference type and must not be parenthesized");
#line 153
}; 
#line 154
}
#line 164 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vadefs.h"
#pragma pack ( pop )
#line 83 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 180 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
typedef unsigned __int64 size_t; 
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#line 181
typedef __int64 ptrdiff_t; 
#line 182
typedef __int64 intptr_t; 
#line 190 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
typedef bool __vcrt_bool; 
#line 233 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
extern "C++" {
#line 235
template< class _CountofType, size_t _SizeOfArray> char (*__countof_helper(__unaligned _CountofType (& _Array)[_SizeOfArray]))[_SizeOfArray]; 
#line 239
}
#line 277 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
void __cdecl __security_init_cookie(); 
#line 283
void __cdecl __security_check_cookie(uintptr_t _StackCookie); 
#line 284
__declspec(noreturn) void __cdecl __report_gsfailure(uintptr_t _StackCookie); 
#line 288 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
extern uintptr_t __security_cookie; 
#line 296 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime.h"
}__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 136 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt.h"
extern "C++" {
#line 138
template< bool _Enable, class _Ty> struct _CrtEnableIf; 
#line 141
template< class _Ty> 
#line 142
struct _CrtEnableIf< true, _Ty>  { 
#line 144
typedef _Ty _Type; 
#line 145
}; 
#line 146
}
#line 150 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef bool __crt_bool; 
#line 278 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt.h"
void __cdecl _invalid_parameter_noinfo(); 
#line 279
__declspec(noreturn) void __cdecl _invalid_parameter_noinfo_noreturn(); 
#line 281
__declspec(noreturn) void __cdecl 
#line 282
_invoke_watson(const __wchar_t * _Expression, const __wchar_t * _FunctionName, const __wchar_t * _FileName, unsigned _LineNo, uintptr_t _Reserved); 
#line 510 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef int errno_t; 
#line 511
typedef unsigned short wint_t; 
#line 512
typedef unsigned short wctype_t; 
#line 513
typedef long __time32_t; 
#line 514
typedef __int64 __time64_t; 
#line 521
typedef 
#line 516
struct __crt_locale_data_public { 
#line 518
const unsigned short *_locale_pctype; 
#line 519
int _locale_mb_cur_max; 
#line 520
unsigned _locale_lc_codepage; 
#line 521
} __crt_locale_data_public; 
#line 527
typedef 
#line 523
struct __crt_locale_pointers { 
#line 525
struct __crt_locale_data *locinfo; 
#line 526
struct __crt_multibyte_data *mbcinfo; 
#line 527
} __crt_locale_pointers; 
#line 529
typedef __crt_locale_pointers *_locale_t; 
#line 535
typedef 
#line 531
struct _Mbstatet { 
#line 533
unsigned long _Wchar; 
#line 534
unsigned short _Byte, _State; 
#line 535
} _Mbstatet; 
#line 537
typedef _Mbstatet mbstate_t; 
#line 551 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef __time64_t time_t; 
#line 561 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt.h"
typedef size_t rsize_t; 
#line 2010 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt.h"
}__pragma( pack ( pop )) 
#line 68 "e:\\cuda\\include\\device_types.h"
#if 0
#line 68
enum cudaRoundMode { 
#line 70
cudaRoundNearest, 
#line 71
cudaRoundZero, 
#line 72
cudaRoundPosInf, 
#line 73
cudaRoundMinInf
#line 74
}; 
#endif
#line 100 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 100
struct char1 { 
#line 102
signed char x; 
#line 103
}; 
#endif
#line 105 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 105
struct uchar1 { 
#line 107
unsigned char x; 
#line 108
}; 
#endif
#line 111 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 111
struct __declspec(align(2)) char2 { 
#line 113
signed char x, y; 
#line 114
}; 
#endif
#line 116 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 116
struct __declspec(align(2)) uchar2 { 
#line 118
unsigned char x, y; 
#line 119
}; 
#endif
#line 121 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 121
struct char3 { 
#line 123
signed char x, y, z; 
#line 124
}; 
#endif
#line 126 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 126
struct uchar3 { 
#line 128
unsigned char x, y, z; 
#line 129
}; 
#endif
#line 131 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 131
struct __declspec(align(4)) char4 { 
#line 133
signed char x, y, z, w; 
#line 134
}; 
#endif
#line 136 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 136
struct __declspec(align(4)) uchar4 { 
#line 138
unsigned char x, y, z, w; 
#line 139
}; 
#endif
#line 141 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 141
struct short1 { 
#line 143
short x; 
#line 144
}; 
#endif
#line 146 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 146
struct ushort1 { 
#line 148
unsigned short x; 
#line 149
}; 
#endif
#line 151 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 151
struct __declspec(align(4)) short2 { 
#line 153
short x, y; 
#line 154
}; 
#endif
#line 156 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 156
struct __declspec(align(4)) ushort2 { 
#line 158
unsigned short x, y; 
#line 159
}; 
#endif
#line 161 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 161
struct short3 { 
#line 163
short x, y, z; 
#line 164
}; 
#endif
#line 166 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 166
struct ushort3 { 
#line 168
unsigned short x, y, z; 
#line 169
}; 
#endif
#line 171 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 171
struct __declspec(align(8)) short4 { short x; short y; short z; short w; }; 
#endif
#line 172 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 172
struct __declspec(align(8)) ushort4 { unsigned short x; unsigned short y; unsigned short z; unsigned short w; }; 
#endif
#line 174 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 174
struct int1 { 
#line 176
int x; 
#line 177
}; 
#endif
#line 179 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 179
struct uint1 { 
#line 181
unsigned x; 
#line 182
}; 
#endif
#line 184 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 184
struct __declspec(align(8)) int2 { int x; int y; }; 
#endif
#line 185 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 185
struct __declspec(align(8)) uint2 { unsigned x; unsigned y; }; 
#endif
#line 187 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 187
struct int3 { 
#line 189
int x, y, z; 
#line 190
}; 
#endif
#line 192 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 192
struct uint3 { 
#line 194
unsigned x, y, z; 
#line 195
}; 
#endif
#line 197 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 197
struct __declspec(align(16)) int4 { 
#line 199
int x, y, z, w; 
#line 200
}; 
#endif
#line 202 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 202
struct __declspec(align(16)) uint4 { 
#line 204
unsigned x, y, z, w; 
#line 205
}; 
#endif
#line 207 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 207
struct long1 { 
#line 209
long x; 
#line 210
}; 
#endif
#line 212 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 212
struct ulong1 { 
#line 214
unsigned long x; 
#line 215
}; 
#endif
#line 218 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 218
struct __declspec(align(8)) long2 { long x; long y; }; 
#endif
#line 219 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 219
struct __declspec(align(8)) ulong2 { unsigned long x; unsigned long y; }; 
#endif
#line 234 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 234
struct long3 { 
#line 236
long x, y, z; 
#line 237
}; 
#endif
#line 239 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 239
struct ulong3 { 
#line 241
unsigned long x, y, z; 
#line 242
}; 
#endif
#line 244 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 244
struct __declspec(align(16)) long4 { 
#line 246
long x, y, z, w; 
#line 247
}; 
#endif
#line 249 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 249
struct __declspec(align(16)) ulong4 { 
#line 251
unsigned long x, y, z, w; 
#line 252
}; 
#endif
#line 254 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 254
struct float1 { 
#line 256
float x; 
#line 257
}; 
#endif
#line 276 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 276
struct __declspec(align(8)) float2 { float x; float y; }; 
#endif
#line 281 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 281
struct float3 { 
#line 283
float x, y, z; 
#line 284
}; 
#endif
#line 286 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 286
struct __declspec(align(16)) float4 { 
#line 288
float x, y, z, w; 
#line 289
}; 
#endif
#line 291 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 291
struct longlong1 { 
#line 293
__int64 x; 
#line 294
}; 
#endif
#line 296 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 296
struct ulonglong1 { 
#line 298
unsigned __int64 x; 
#line 299
}; 
#endif
#line 301 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 301
struct __declspec(align(16)) longlong2 { 
#line 303
__int64 x, y; 
#line 304
}; 
#endif
#line 306 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 306
struct __declspec(align(16)) ulonglong2 { 
#line 308
unsigned __int64 x, y; 
#line 309
}; 
#endif
#line 311 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 311
struct longlong3 { 
#line 313
__int64 x, y, z; 
#line 314
}; 
#endif
#line 316 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 316
struct ulonglong3 { 
#line 318
unsigned __int64 x, y, z; 
#line 319
}; 
#endif
#line 321 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 321
struct __declspec(align(16)) longlong4 { 
#line 323
__int64 x, y, z, w; 
#line 324
}; 
#endif
#line 326 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 326
struct __declspec(align(16)) ulonglong4 { 
#line 328
unsigned __int64 x, y, z, w; 
#line 329
}; 
#endif
#line 331 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 331
struct double1 { 
#line 333
double x; 
#line 334
}; 
#endif
#line 336 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 336
struct __declspec(align(16)) double2 { 
#line 338
double x, y; 
#line 339
}; 
#endif
#line 341 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 341
struct double3 { 
#line 343
double x, y, z; 
#line 344
}; 
#endif
#line 346 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 346
struct __declspec(align(16)) double4 { 
#line 348
double x, y, z, w; 
#line 349
}; 
#endif
#line 363 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef char1 
#line 363
char1; 
#endif
#line 364 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef uchar1 
#line 364
uchar1; 
#endif
#line 365 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef char2 
#line 365
char2; 
#endif
#line 366 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef uchar2 
#line 366
uchar2; 
#endif
#line 367 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef char3 
#line 367
char3; 
#endif
#line 368 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef uchar3 
#line 368
uchar3; 
#endif
#line 369 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef char4 
#line 369
char4; 
#endif
#line 370 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef uchar4 
#line 370
uchar4; 
#endif
#line 371 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef short1 
#line 371
short1; 
#endif
#line 372 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ushort1 
#line 372
ushort1; 
#endif
#line 373 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef short2 
#line 373
short2; 
#endif
#line 374 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ushort2 
#line 374
ushort2; 
#endif
#line 375 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef short3 
#line 375
short3; 
#endif
#line 376 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ushort3 
#line 376
ushort3; 
#endif
#line 377 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef short4 
#line 377
short4; 
#endif
#line 378 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ushort4 
#line 378
ushort4; 
#endif
#line 379 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef int1 
#line 379
int1; 
#endif
#line 380 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef uint1 
#line 380
uint1; 
#endif
#line 381 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef int2 
#line 381
int2; 
#endif
#line 382 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef uint2 
#line 382
uint2; 
#endif
#line 383 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef int3 
#line 383
int3; 
#endif
#line 384 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef uint3 
#line 384
uint3; 
#endif
#line 385 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef int4 
#line 385
int4; 
#endif
#line 386 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef uint4 
#line 386
uint4; 
#endif
#line 387 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef long1 
#line 387
long1; 
#endif
#line 388 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ulong1 
#line 388
ulong1; 
#endif
#line 389 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef long2 
#line 389
long2; 
#endif
#line 390 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ulong2 
#line 390
ulong2; 
#endif
#line 391 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef long3 
#line 391
long3; 
#endif
#line 392 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ulong3 
#line 392
ulong3; 
#endif
#line 393 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef long4 
#line 393
long4; 
#endif
#line 394 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ulong4 
#line 394
ulong4; 
#endif
#line 395 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef float1 
#line 395
float1; 
#endif
#line 396 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef float2 
#line 396
float2; 
#endif
#line 397 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef float3 
#line 397
float3; 
#endif
#line 398 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef float4 
#line 398
float4; 
#endif
#line 399 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef longlong1 
#line 399
longlong1; 
#endif
#line 400 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ulonglong1 
#line 400
ulonglong1; 
#endif
#line 401 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef longlong2 
#line 401
longlong2; 
#endif
#line 402 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ulonglong2 
#line 402
ulonglong2; 
#endif
#line 403 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef longlong3 
#line 403
longlong3; 
#endif
#line 404 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ulonglong3 
#line 404
ulonglong3; 
#endif
#line 405 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef longlong4 
#line 405
longlong4; 
#endif
#line 406 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef ulonglong4 
#line 406
ulonglong4; 
#endif
#line 407 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef double1 
#line 407
double1; 
#endif
#line 408 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef double2 
#line 408
double2; 
#endif
#line 409 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef double3 
#line 409
double3; 
#endif
#line 410 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef double4 
#line 410
double4; 
#endif
#line 418 "e:\\cuda\\include\\vector_types.h"
#if 0
#line 418
struct dim3 { 
#line 420
unsigned x, y, z; 
#line 432 "e:\\cuda\\include\\vector_types.h"
}; 
#endif
#line 434 "e:\\cuda\\include\\vector_types.h"
#if 0
typedef dim3 
#line 434
dim3; 
#endif
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\limits.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 88 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\limits.h"
}__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stddef.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
namespace std { 
#line 21
typedef decltype(nullptr) nullptr_t; 
#line 22
}
#line 24
using std::nullptr_t;
#line 31 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stddef.h"
int *__cdecl _errno(); 
#line 34
errno_t __cdecl _set_errno(int _Value); 
#line 35
errno_t __cdecl _get_errno(int * _Value); 
#line 51 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stddef.h"
extern unsigned long __cdecl __threadid(); 
#line 53
extern uintptr_t __cdecl __threadhandle(); 
#line 57
}__pragma( pack ( pop )) 
#line 199 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 199
enum cudaError { 
#line 206
cudaSuccess, 
#line 212
cudaErrorInvalidValue, 
#line 218
cudaErrorMemoryAllocation, 
#line 224
cudaErrorInitializationError, 
#line 231
cudaErrorCudartUnloading, 
#line 238
cudaErrorProfilerDisabled, 
#line 246
cudaErrorProfilerNotInitialized, 
#line 253
cudaErrorProfilerAlreadyStarted, 
#line 260
cudaErrorProfilerAlreadyStopped, 
#line 269
cudaErrorInvalidConfiguration, 
#line 275
cudaErrorInvalidPitchValue = 12, 
#line 281
cudaErrorInvalidSymbol, 
#line 289
cudaErrorInvalidHostPointer = 16, 
#line 297
cudaErrorInvalidDevicePointer, 
#line 303
cudaErrorInvalidTexture, 
#line 309
cudaErrorInvalidTextureBinding, 
#line 316
cudaErrorInvalidChannelDescriptor, 
#line 322
cudaErrorInvalidMemcpyDirection, 
#line 332
cudaErrorAddressOfConstant, 
#line 341
cudaErrorTextureFetchFailed, 
#line 350
cudaErrorTextureNotBound, 
#line 359
cudaErrorSynchronizationError, 
#line 365
cudaErrorInvalidFilterSetting, 
#line 371
cudaErrorInvalidNormSetting, 
#line 379
cudaErrorMixedDeviceExecution, 
#line 387
cudaErrorNotYetImplemented = 31, 
#line 396
cudaErrorMemoryValueTooLarge, 
#line 403
cudaErrorStubLibrary = 34, 
#line 410
cudaErrorInsufficientDriver, 
#line 417
cudaErrorCallRequiresNewerDriver, 
#line 423
cudaErrorInvalidSurface, 
#line 429
cudaErrorDuplicateVariableName = 43, 
#line 435
cudaErrorDuplicateTextureName, 
#line 441
cudaErrorDuplicateSurfaceName, 
#line 451
cudaErrorDevicesUnavailable, 
#line 464
cudaErrorIncompatibleDriverContext = 49, 
#line 470
cudaErrorMissingConfiguration = 52, 
#line 479
cudaErrorPriorLaunchFailure, 
#line 486
cudaErrorLaunchMaxDepthExceeded = 65, 
#line 494
cudaErrorLaunchFileScopedTex, 
#line 502
cudaErrorLaunchFileScopedSurf, 
#line 517
cudaErrorSyncDepthExceeded, 
#line 529
cudaErrorLaunchPendingCountExceeded, 
#line 535
cudaErrorInvalidDeviceFunction = 98, 
#line 541
cudaErrorNoDevice = 100, 
#line 548
cudaErrorInvalidDevice, 
#line 553
cudaErrorDeviceNotLicensed, 
#line 562
cudaErrorSoftwareValidityNotEstablished, 
#line 567
cudaErrorStartupFailure = 127, 
#line 572
cudaErrorInvalidKernelImage = 200, 
#line 582
cudaErrorDeviceUninitialized, 
#line 587
cudaErrorMapBufferObjectFailed = 205, 
#line 592
cudaErrorUnmapBufferObjectFailed, 
#line 598
cudaErrorArrayIsMapped, 
#line 603
cudaErrorAlreadyMapped, 
#line 611
cudaErrorNoKernelImageForDevice, 
#line 616
cudaErrorAlreadyAcquired, 
#line 621
cudaErrorNotMapped, 
#line 627
cudaErrorNotMappedAsArray, 
#line 633
cudaErrorNotMappedAsPointer, 
#line 639
cudaErrorECCUncorrectable, 
#line 645
cudaErrorUnsupportedLimit, 
#line 651
cudaErrorDeviceAlreadyInUse, 
#line 657
cudaErrorPeerAccessUnsupported, 
#line 663
cudaErrorInvalidPtx, 
#line 668
cudaErrorInvalidGraphicsContext, 
#line 674
cudaErrorNvlinkUncorrectable, 
#line 681
cudaErrorJitCompilerNotFound, 
#line 688
cudaErrorUnsupportedPtxVersion, 
#line 695
cudaErrorJitCompilationDisabled, 
#line 700
cudaErrorUnsupportedExecAffinity, 
#line 705
cudaErrorInvalidSource = 300, 
#line 710
cudaErrorFileNotFound, 
#line 715
cudaErrorSharedObjectSymbolNotFound, 
#line 720
cudaErrorSharedObjectInitFailed, 
#line 725
cudaErrorOperatingSystem, 
#line 732
cudaErrorInvalidResourceHandle = 400, 
#line 738
cudaErrorIllegalState, 
#line 745
cudaErrorSymbolNotFound = 500, 
#line 753
cudaErrorNotReady = 600, 
#line 761
cudaErrorIllegalAddress = 700, 
#line 770
cudaErrorLaunchOutOfResources, 
#line 781
cudaErrorLaunchTimeout, 
#line 787
cudaErrorLaunchIncompatibleTexturing, 
#line 794
cudaErrorPeerAccessAlreadyEnabled, 
#line 801
cudaErrorPeerAccessNotEnabled, 
#line 814
cudaErrorSetOnActiveProcess = 708, 
#line 821
cudaErrorContextIsDestroyed, 
#line 828
cudaErrorAssert, 
#line 835
cudaErrorTooManyPeers, 
#line 841
cudaErrorHostMemoryAlreadyRegistered, 
#line 847
cudaErrorHostMemoryNotRegistered, 
#line 856
cudaErrorHardwareStackError, 
#line 864
cudaErrorIllegalInstruction, 
#line 873
cudaErrorMisalignedAddress, 
#line 884
cudaErrorInvalidAddressSpace, 
#line 892
cudaErrorInvalidPc, 
#line 903
cudaErrorLaunchFailure, 
#line 912
cudaErrorCooperativeLaunchTooLarge, 
#line 917
cudaErrorNotPermitted = 800, 
#line 923
cudaErrorNotSupported, 
#line 932
cudaErrorSystemNotReady, 
#line 939
cudaErrorSystemDriverMismatch, 
#line 948
cudaErrorCompatNotSupportedOnDevice, 
#line 953
cudaErrorMpsConnectionFailed, 
#line 958
cudaErrorMpsRpcFailure, 
#line 964
cudaErrorMpsServerNotReady, 
#line 969
cudaErrorMpsMaxClientsReached, 
#line 974
cudaErrorMpsMaxConnectionsReached, 
#line 979
cudaErrorStreamCaptureUnsupported = 900, 
#line 985
cudaErrorStreamCaptureInvalidated, 
#line 991
cudaErrorStreamCaptureMerge, 
#line 996
cudaErrorStreamCaptureUnmatched, 
#line 1002
cudaErrorStreamCaptureUnjoined, 
#line 1009
cudaErrorStreamCaptureIsolation, 
#line 1015
cudaErrorStreamCaptureImplicit, 
#line 1021
cudaErrorCapturedEvent, 
#line 1028
cudaErrorStreamCaptureWrongThread, 
#line 1033
cudaErrorTimeout, 
#line 1039
cudaErrorGraphExecUpdateFailure, 
#line 1049
cudaErrorExternalDevice, 
#line 1054
cudaErrorUnknown = 999, 
#line 1062
cudaErrorApiFailureBase = 10000
#line 1063
}; 
#endif
#line 1068 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1068
enum cudaChannelFormatKind { 
#line 1070
cudaChannelFormatKindSigned, 
#line 1071
cudaChannelFormatKindUnsigned, 
#line 1072
cudaChannelFormatKindFloat, 
#line 1073
cudaChannelFormatKindNone, 
#line 1074
cudaChannelFormatKindNV12
#line 1075
}; 
#endif
#line 1080 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1080
struct cudaChannelFormatDesc { 
#line 1082
int x; 
#line 1083
int y; 
#line 1084
int z; 
#line 1085
int w; 
#line 1086
cudaChannelFormatKind f; 
#line 1087
}; 
#endif
#line 1092 "e:\\cuda\\include\\driver_types.h"
typedef struct cudaArray *cudaArray_t; 
#line 1097
typedef const cudaArray *cudaArray_const_t; 
#line 1099
struct cudaArray; 
#line 1104
typedef struct cudaMipmappedArray *cudaMipmappedArray_t; 
#line 1109
typedef const cudaMipmappedArray *cudaMipmappedArray_const_t; 
#line 1111
struct cudaMipmappedArray; 
#line 1121
#if 0
#line 1121
struct cudaArraySparseProperties { 
#line 1122
struct { 
#line 1123
unsigned width; 
#line 1124
unsigned height; 
#line 1125
unsigned depth; 
#line 1126
} tileExtent; 
#line 1127
unsigned miptailFirstLevel; 
#line 1128
unsigned __int64 miptailSize; 
#line 1129
unsigned flags; 
#line 1130
unsigned reserved[4]; 
#line 1131
}; 
#endif
#line 1136 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1136
enum cudaMemoryType { 
#line 1138
cudaMemoryTypeUnregistered, 
#line 1139
cudaMemoryTypeHost, 
#line 1140
cudaMemoryTypeDevice, 
#line 1141
cudaMemoryTypeManaged
#line 1142
}; 
#endif
#line 1147 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1147
enum cudaMemcpyKind { 
#line 1149
cudaMemcpyHostToHost, 
#line 1150
cudaMemcpyHostToDevice, 
#line 1151
cudaMemcpyDeviceToHost, 
#line 1152
cudaMemcpyDeviceToDevice, 
#line 1153
cudaMemcpyDefault
#line 1154
}; 
#endif
#line 1161 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1161
struct cudaPitchedPtr { 
#line 1163
void *ptr; 
#line 1164
size_t pitch; 
#line 1165
size_t xsize; 
#line 1166
size_t ysize; 
#line 1167
}; 
#endif
#line 1174 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1174
struct cudaExtent { 
#line 1176
size_t width; 
#line 1177
size_t height; 
#line 1178
size_t depth; 
#line 1179
}; 
#endif
#line 1186 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1186
struct cudaPos { 
#line 1188
size_t x; 
#line 1189
size_t y; 
#line 1190
size_t z; 
#line 1191
}; 
#endif
#line 1196 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1196
struct cudaMemcpy3DParms { 
#line 1198
cudaArray_t srcArray; 
#line 1199
cudaPos srcPos; 
#line 1200
cudaPitchedPtr srcPtr; 
#line 1202
cudaArray_t dstArray; 
#line 1203
cudaPos dstPos; 
#line 1204
cudaPitchedPtr dstPtr; 
#line 1206
cudaExtent extent; 
#line 1207
cudaMemcpyKind kind; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1208
}; 
#endif
#line 1213 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1213
struct cudaMemcpy3DPeerParms { 
#line 1215
cudaArray_t srcArray; 
#line 1216
cudaPos srcPos; 
#line 1217
cudaPitchedPtr srcPtr; 
#line 1218
int srcDevice; 
#line 1220
cudaArray_t dstArray; 
#line 1221
cudaPos dstPos; 
#line 1222
cudaPitchedPtr dstPtr; 
#line 1223
int dstDevice; 
#line 1225
cudaExtent extent; 
#line 1226
}; 
#endif
#line 1231 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1231
struct cudaMemsetParams { 
#line 1232
void *dst; 
#line 1233
size_t pitch; 
#line 1234
unsigned value; 
#line 1235
unsigned elementSize; 
#line 1236
size_t width; 
#line 1237
size_t height; 
#line 1238
}; 
#endif
#line 1243 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1243
enum cudaAccessProperty { 
#line 1244
cudaAccessPropertyNormal, 
#line 1245
cudaAccessPropertyStreaming, 
#line 1246
cudaAccessPropertyPersisting
#line 1247
}; 
#endif
#line 1260 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1260
struct cudaAccessPolicyWindow { 
#line 1261
void *base_ptr; 
#line 1262
size_t num_bytes; 
#line 1263
float hitRatio; 
#line 1264
cudaAccessProperty hitProp; 
#line 1265
cudaAccessProperty missProp; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1266
}; 
#endif
#line 1278 "e:\\cuda\\include\\driver_types.h"
typedef void (__stdcall *cudaHostFn_t)(void * userData); 
#line 1283
#if 0
#line 1283
struct cudaHostNodeParams { 
#line 1284
cudaHostFn_t fn; 
#line 1285
void *userData; 
#line 1286
}; 
#endif
#line 1291 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1291
enum cudaStreamCaptureStatus { 
#line 1292
cudaStreamCaptureStatusNone, 
#line 1293
cudaStreamCaptureStatusActive, 
#line 1294
cudaStreamCaptureStatusInvalidated
#line 1296
}; 
#endif
#line 1302 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1302
enum cudaStreamCaptureMode { 
#line 1303
cudaStreamCaptureModeGlobal, 
#line 1304
cudaStreamCaptureModeThreadLocal, 
#line 1305
cudaStreamCaptureModeRelaxed
#line 1306
}; 
#endif
#line 1308 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1308
enum cudaSynchronizationPolicy { 
#line 1309
cudaSyncPolicyAuto = 1, 
#line 1310
cudaSyncPolicySpin, 
#line 1311
cudaSyncPolicyYield, 
#line 1312
cudaSyncPolicyBlockingSync
#line 1313
}; 
#endif
#line 1318 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1318
enum cudaStreamAttrID { 
#line 1319
cudaStreamAttributeAccessPolicyWindow = 1, 
#line 1320
cudaStreamAttributeSynchronizationPolicy = 3
#line 1321
}; 
#endif
#line 1326 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1326
union cudaStreamAttrValue { 
#line 1327
cudaAccessPolicyWindow accessPolicyWindow; 
#line 1328
cudaSynchronizationPolicy syncPolicy; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1329
}; 
#endif
#line 1334 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1334
enum cudaStreamUpdateCaptureDependenciesFlags { 
#line 1335
cudaStreamAddCaptureDependencies, 
#line 1336
cudaStreamSetCaptureDependencies
#line 1337
}; 
#endif
#line 1342 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1342
enum cudaUserObjectFlags { 
#line 1343
cudaUserObjectNoDestructorSync = 1
#line 1344
}; 
#endif
#line 1349 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1349
enum cudaUserObjectRetainFlags { 
#line 1350
cudaGraphUserObjectMove = 1
#line 1351
}; 
#endif
#line 1356 "e:\\cuda\\include\\driver_types.h"
struct cudaGraphicsResource; 
#line 1361
#if 0
#line 1361
enum cudaGraphicsRegisterFlags { 
#line 1363
cudaGraphicsRegisterFlagsNone, 
#line 1364
cudaGraphicsRegisterFlagsReadOnly, 
#line 1365
cudaGraphicsRegisterFlagsWriteDiscard, 
#line 1366
cudaGraphicsRegisterFlagsSurfaceLoadStore = 4, 
#line 1367
cudaGraphicsRegisterFlagsTextureGather = 8
#line 1368
}; 
#endif
#line 1373 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1373
enum cudaGraphicsMapFlags { 
#line 1375
cudaGraphicsMapFlagsNone, 
#line 1376
cudaGraphicsMapFlagsReadOnly, 
#line 1377
cudaGraphicsMapFlagsWriteDiscard
#line 1378
}; 
#endif
#line 1383 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1383
enum cudaGraphicsCubeFace { 
#line 1385
cudaGraphicsCubeFacePositiveX, 
#line 1386
cudaGraphicsCubeFaceNegativeX, 
#line 1387
cudaGraphicsCubeFacePositiveY, 
#line 1388
cudaGraphicsCubeFaceNegativeY, 
#line 1389
cudaGraphicsCubeFacePositiveZ, 
#line 1390
cudaGraphicsCubeFaceNegativeZ
#line 1391
}; 
#endif
#line 1396 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1396
enum cudaKernelNodeAttrID { 
#line 1397
cudaKernelNodeAttributeAccessPolicyWindow = 1, 
#line 1398
cudaKernelNodeAttributeCooperative
#line 1399
}; 
#endif
#line 1404 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1404
union cudaKernelNodeAttrValue { 
#line 1405
cudaAccessPolicyWindow accessPolicyWindow; 
#line 1406
int cooperative; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 1407
}; 
#endif
#line 1412 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1412
enum cudaResourceType { 
#line 1414
cudaResourceTypeArray, 
#line 1415
cudaResourceTypeMipmappedArray, 
#line 1416
cudaResourceTypeLinear, 
#line 1417
cudaResourceTypePitch2D
#line 1418
}; 
#endif
#line 1423 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1423
enum cudaResourceViewFormat { 
#line 1425
cudaResViewFormatNone, 
#line 1426
cudaResViewFormatUnsignedChar1, 
#line 1427
cudaResViewFormatUnsignedChar2, 
#line 1428
cudaResViewFormatUnsignedChar4, 
#line 1429
cudaResViewFormatSignedChar1, 
#line 1430
cudaResViewFormatSignedChar2, 
#line 1431
cudaResViewFormatSignedChar4, 
#line 1432
cudaResViewFormatUnsignedShort1, 
#line 1433
cudaResViewFormatUnsignedShort2, 
#line 1434
cudaResViewFormatUnsignedShort4, 
#line 1435
cudaResViewFormatSignedShort1, 
#line 1436
cudaResViewFormatSignedShort2, 
#line 1437
cudaResViewFormatSignedShort4, 
#line 1438
cudaResViewFormatUnsignedInt1, 
#line 1439
cudaResViewFormatUnsignedInt2, 
#line 1440
cudaResViewFormatUnsignedInt4, 
#line 1441
cudaResViewFormatSignedInt1, 
#line 1442
cudaResViewFormatSignedInt2, 
#line 1443
cudaResViewFormatSignedInt4, 
#line 1444
cudaResViewFormatHalf1, 
#line 1445
cudaResViewFormatHalf2, 
#line 1446
cudaResViewFormatHalf4, 
#line 1447
cudaResViewFormatFloat1, 
#line 1448
cudaResViewFormatFloat2, 
#line 1449
cudaResViewFormatFloat4, 
#line 1450
cudaResViewFormatUnsignedBlockCompressed1, 
#line 1451
cudaResViewFormatUnsignedBlockCompressed2, 
#line 1452
cudaResViewFormatUnsignedBlockCompressed3, 
#line 1453
cudaResViewFormatUnsignedBlockCompressed4, 
#line 1454
cudaResViewFormatSignedBlockCompressed4, 
#line 1455
cudaResViewFormatUnsignedBlockCompressed5, 
#line 1456
cudaResViewFormatSignedBlockCompressed5, 
#line 1457
cudaResViewFormatUnsignedBlockCompressed6H, 
#line 1458
cudaResViewFormatSignedBlockCompressed6H, 
#line 1459
cudaResViewFormatUnsignedBlockCompressed7
#line 1460
}; 
#endif
#line 1465 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1465
struct cudaResourceDesc { 
#line 1466
cudaResourceType resType; 
#line 1468
union { 
#line 1469
struct { 
#line 1470
cudaArray_t array; 
#line 1471
} array; 
#line 1472
struct { 
#line 1473
cudaMipmappedArray_t mipmap; 
#line 1474
} mipmap; 
#line 1475
struct { 
#line 1476
void *devPtr; 
#line 1477
cudaChannelFormatDesc desc; 
#line 1478
size_t sizeInBytes; 
#line 1479
} linear; 
#line 1480
struct { 
#line 1481
void *devPtr; 
#line 1482
cudaChannelFormatDesc desc; 
#line 1483
size_t width; 
#line 1484
size_t height; 
#line 1485
size_t pitchInBytes; 
#line 1486
} pitch2D; 
#line 1487
} res; 
#line 1488
}; 
#endif
#line 1493 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1493
struct cudaResourceViewDesc { 
#line 1495
cudaResourceViewFormat format; 
#line 1496
size_t width; 
#line 1497
size_t height; 
#line 1498
size_t depth; 
#line 1499
unsigned firstMipmapLevel; 
#line 1500
unsigned lastMipmapLevel; 
#line 1501
unsigned firstLayer; 
#line 1502
unsigned lastLayer; 
#line 1503
}; 
#endif
#line 1508 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1508
struct cudaPointerAttributes { 
#line 1514
cudaMemoryType type; 
#line 1525
int device; 
#line 1531
void *devicePointer; 
#line 1540
void *hostPointer; 
#line 1541
}; 
#endif
#line 1546 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1546
struct cudaFuncAttributes { 
#line 1553
size_t sharedSizeBytes; 
#line 1559
size_t constSizeBytes; 
#line 1564
size_t localSizeBytes; 
#line 1571
int maxThreadsPerBlock; 
#line 1576
int numRegs; 
#line 1583
int ptxVersion; 
#line 1590
int binaryVersion; 
#line 1596
int cacheModeCA; 
#line 1603
int maxDynamicSharedSizeBytes; 
#line 1612
int preferredShmemCarveout; 
#line 1613
}; 
#endif
#line 1618 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1618
enum cudaFuncAttribute { 
#line 1620
cudaFuncAttributeMaxDynamicSharedMemorySize = 8, 
#line 1621
cudaFuncAttributePreferredSharedMemoryCarveout, 
#line 1622
cudaFuncAttributeMax
#line 1623
}; 
#endif
#line 1628 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1628
enum cudaFuncCache { 
#line 1630
cudaFuncCachePreferNone, 
#line 1631
cudaFuncCachePreferShared, 
#line 1632
cudaFuncCachePreferL1, 
#line 1633
cudaFuncCachePreferEqual
#line 1634
}; 
#endif
#line 1640 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1640
enum cudaSharedMemConfig { 
#line 1642
cudaSharedMemBankSizeDefault, 
#line 1643
cudaSharedMemBankSizeFourByte, 
#line 1644
cudaSharedMemBankSizeEightByte
#line 1645
}; 
#endif
#line 1650 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1650
enum cudaSharedCarveout { 
#line 1651
cudaSharedmemCarveoutDefault = (-1), 
#line 1652
cudaSharedmemCarveoutMaxShared = 100, 
#line 1653
cudaSharedmemCarveoutMaxL1 = 0
#line 1654
}; 
#endif
#line 1659 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1659
enum cudaComputeMode { 
#line 1661
cudaComputeModeDefault, 
#line 1662
cudaComputeModeExclusive, 
#line 1663
cudaComputeModeProhibited, 
#line 1664
cudaComputeModeExclusiveProcess
#line 1665
}; 
#endif
#line 1670 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1670
enum cudaLimit { 
#line 1672
cudaLimitStackSize, 
#line 1673
cudaLimitPrintfFifoSize, 
#line 1674
cudaLimitMallocHeapSize, 
#line 1675
cudaLimitDevRuntimeSyncDepth, 
#line 1676
cudaLimitDevRuntimePendingLaunchCount, 
#line 1677
cudaLimitMaxL2FetchGranularity, 
#line 1678
cudaLimitPersistingL2CacheSize
#line 1679
}; 
#endif
#line 1684 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1684
enum cudaMemoryAdvise { 
#line 1686
cudaMemAdviseSetReadMostly = 1, 
#line 1687
cudaMemAdviseUnsetReadMostly, 
#line 1688
cudaMemAdviseSetPreferredLocation, 
#line 1689
cudaMemAdviseUnsetPreferredLocation, 
#line 1690
cudaMemAdviseSetAccessedBy, 
#line 1691
cudaMemAdviseUnsetAccessedBy
#line 1692
}; 
#endif
#line 1697 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1697
enum cudaMemRangeAttribute { 
#line 1699
cudaMemRangeAttributeReadMostly = 1, 
#line 1700
cudaMemRangeAttributePreferredLocation, 
#line 1701
cudaMemRangeAttributeAccessedBy, 
#line 1702
cudaMemRangeAttributeLastPrefetchLocation
#line 1703
}; 
#endif
#line 1708 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1708
enum cudaOutputMode { 
#line 1710
cudaKeyValuePair, 
#line 1711
cudaCSV
#line 1712
}; 
#endif
#line 1717 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1717
enum cudaFlushGPUDirectRDMAWritesOptions { 
#line 1718
cudaFlushGPUDirectRDMAWritesOptionHost = (1 << 0), 
#line 1719
cudaFlushGPUDirectRDMAWritesOptionMemOps
#line 1720
}; 
#endif
#line 1725 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1725
enum cudaGPUDirectRDMAWritesOrdering { 
#line 1726
cudaGPUDirectRDMAWritesOrderingNone, 
#line 1727
cudaGPUDirectRDMAWritesOrderingOwner = 100, 
#line 1728
cudaGPUDirectRDMAWritesOrderingAllDevices = 200
#line 1729
}; 
#endif
#line 1734 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1734
enum cudaFlushGPUDirectRDMAWritesScope { 
#line 1735
cudaFlushGPUDirectRDMAWritesToOwner = 100, 
#line 1736
cudaFlushGPUDirectRDMAWritesToAllDevices = 200
#line 1737
}; 
#endif
#line 1742 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1742
enum cudaFlushGPUDirectRDMAWritesTarget { 
#line 1743
cudaFlushGPUDirectRDMAWritesTargetCurrentDevice
#line 1744
}; 
#endif
#line 1750 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1750
enum cudaDeviceAttr { 
#line 1752
cudaDevAttrMaxThreadsPerBlock = 1, 
#line 1753
cudaDevAttrMaxBlockDimX, 
#line 1754
cudaDevAttrMaxBlockDimY, 
#line 1755
cudaDevAttrMaxBlockDimZ, 
#line 1756
cudaDevAttrMaxGridDimX, 
#line 1757
cudaDevAttrMaxGridDimY, 
#line 1758
cudaDevAttrMaxGridDimZ, 
#line 1759
cudaDevAttrMaxSharedMemoryPerBlock, 
#line 1760
cudaDevAttrTotalConstantMemory, 
#line 1761
cudaDevAttrWarpSize, 
#line 1762
cudaDevAttrMaxPitch, 
#line 1763
cudaDevAttrMaxRegistersPerBlock, 
#line 1764
cudaDevAttrClockRate, 
#line 1765
cudaDevAttrTextureAlignment, 
#line 1766
cudaDevAttrGpuOverlap, 
#line 1767
cudaDevAttrMultiProcessorCount, 
#line 1768
cudaDevAttrKernelExecTimeout, 
#line 1769
cudaDevAttrIntegrated, 
#line 1770
cudaDevAttrCanMapHostMemory, 
#line 1771
cudaDevAttrComputeMode, 
#line 1772
cudaDevAttrMaxTexture1DWidth, 
#line 1773
cudaDevAttrMaxTexture2DWidth, 
#line 1774
cudaDevAttrMaxTexture2DHeight, 
#line 1775
cudaDevAttrMaxTexture3DWidth, 
#line 1776
cudaDevAttrMaxTexture3DHeight, 
#line 1777
cudaDevAttrMaxTexture3DDepth, 
#line 1778
cudaDevAttrMaxTexture2DLayeredWidth, 
#line 1779
cudaDevAttrMaxTexture2DLayeredHeight, 
#line 1780
cudaDevAttrMaxTexture2DLayeredLayers, 
#line 1781
cudaDevAttrSurfaceAlignment, 
#line 1782
cudaDevAttrConcurrentKernels, 
#line 1783
cudaDevAttrEccEnabled, 
#line 1784
cudaDevAttrPciBusId, 
#line 1785
cudaDevAttrPciDeviceId, 
#line 1786
cudaDevAttrTccDriver, 
#line 1787
cudaDevAttrMemoryClockRate, 
#line 1788
cudaDevAttrGlobalMemoryBusWidth, 
#line 1789
cudaDevAttrL2CacheSize, 
#line 1790
cudaDevAttrMaxThreadsPerMultiProcessor, 
#line 1791
cudaDevAttrAsyncEngineCount, 
#line 1792
cudaDevAttrUnifiedAddressing, 
#line 1793
cudaDevAttrMaxTexture1DLayeredWidth, 
#line 1794
cudaDevAttrMaxTexture1DLayeredLayers, 
#line 1795
cudaDevAttrMaxTexture2DGatherWidth = 45, 
#line 1796
cudaDevAttrMaxTexture2DGatherHeight, 
#line 1797
cudaDevAttrMaxTexture3DWidthAlt, 
#line 1798
cudaDevAttrMaxTexture3DHeightAlt, 
#line 1799
cudaDevAttrMaxTexture3DDepthAlt, 
#line 1800
cudaDevAttrPciDomainId, 
#line 1801
cudaDevAttrTexturePitchAlignment, 
#line 1802
cudaDevAttrMaxTextureCubemapWidth, 
#line 1803
cudaDevAttrMaxTextureCubemapLayeredWidth, 
#line 1804
cudaDevAttrMaxTextureCubemapLayeredLayers, 
#line 1805
cudaDevAttrMaxSurface1DWidth, 
#line 1806
cudaDevAttrMaxSurface2DWidth, 
#line 1807
cudaDevAttrMaxSurface2DHeight, 
#line 1808
cudaDevAttrMaxSurface3DWidth, 
#line 1809
cudaDevAttrMaxSurface3DHeight, 
#line 1810
cudaDevAttrMaxSurface3DDepth, 
#line 1811
cudaDevAttrMaxSurface1DLayeredWidth, 
#line 1812
cudaDevAttrMaxSurface1DLayeredLayers, 
#line 1813
cudaDevAttrMaxSurface2DLayeredWidth, 
#line 1814
cudaDevAttrMaxSurface2DLayeredHeight, 
#line 1815
cudaDevAttrMaxSurface2DLayeredLayers, 
#line 1816
cudaDevAttrMaxSurfaceCubemapWidth, 
#line 1817
cudaDevAttrMaxSurfaceCubemapLayeredWidth, 
#line 1818
cudaDevAttrMaxSurfaceCubemapLayeredLayers, 
#line 1819
cudaDevAttrMaxTexture1DLinearWidth, 
#line 1820
cudaDevAttrMaxTexture2DLinearWidth, 
#line 1821
cudaDevAttrMaxTexture2DLinearHeight, 
#line 1822
cudaDevAttrMaxTexture2DLinearPitch, 
#line 1823
cudaDevAttrMaxTexture2DMipmappedWidth, 
#line 1824
cudaDevAttrMaxTexture2DMipmappedHeight, 
#line 1825
cudaDevAttrComputeCapabilityMajor, 
#line 1826
cudaDevAttrComputeCapabilityMinor, 
#line 1827
cudaDevAttrMaxTexture1DMipmappedWidth, 
#line 1828
cudaDevAttrStreamPrioritiesSupported, 
#line 1829
cudaDevAttrGlobalL1CacheSupported, 
#line 1830
cudaDevAttrLocalL1CacheSupported, 
#line 1831
cudaDevAttrMaxSharedMemoryPerMultiprocessor, 
#line 1832
cudaDevAttrMaxRegistersPerMultiprocessor, 
#line 1833
cudaDevAttrManagedMemory, 
#line 1834
cudaDevAttrIsMultiGpuBoard, 
#line 1835
cudaDevAttrMultiGpuBoardGroupID, 
#line 1836
cudaDevAttrHostNativeAtomicSupported, 
#line 1837
cudaDevAttrSingleToDoublePrecisionPerfRatio, 
#line 1838
cudaDevAttrPageableMemoryAccess, 
#line 1839
cudaDevAttrConcurrentManagedAccess, 
#line 1840
cudaDevAttrComputePreemptionSupported, 
#line 1841
cudaDevAttrCanUseHostPointerForRegisteredMem, 
#line 1842
cudaDevAttrReserved92, 
#line 1843
cudaDevAttrReserved93, 
#line 1844
cudaDevAttrReserved94, 
#line 1845
cudaDevAttrCooperativeLaunch, 
#line 1846
cudaDevAttrCooperativeMultiDeviceLaunch, 
#line 1847
cudaDevAttrMaxSharedMemoryPerBlockOptin, 
#line 1848
cudaDevAttrCanFlushRemoteWrites, 
#line 1849
cudaDevAttrHostRegisterSupported, 
#line 1850
cudaDevAttrPageableMemoryAccessUsesHostPageTables, 
#line 1851
cudaDevAttrDirectManagedMemAccessFromHost, 
#line 1852
cudaDevAttrMaxBlocksPerMultiprocessor = 106, 
#line 1853
cudaDevAttrMaxPersistingL2CacheSize = 108, 
#line 1854
cudaDevAttrMaxAccessPolicyWindowSize, 
#line 1855
cudaDevAttrReservedSharedMemoryPerBlock = 111, 
#line 1856
cudaDevAttrSparseCudaArraySupported, 
#line 1857
cudaDevAttrHostRegisterReadOnlySupported, 
#line 1858
cudaDevAttrMaxTimelineSemaphoreInteropSupported, 
#line 1859
cudaDevAttrMemoryPoolsSupported, 
#line 1860
cudaDevAttrGPUDirectRDMASupported, 
#line 1861
cudaDevAttrGPUDirectRDMAFlushWritesOptions, 
#line 1862
cudaDevAttrGPUDirectRDMAWritesOrdering, 
#line 1863
cudaDevAttrMemoryPoolSupportedHandleTypes, 
#line 1864
cudaDevAttrMax
#line 1865
}; 
#endif
#line 1870 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1870
enum cudaMemPoolAttr { 
#line 1880
cudaMemPoolReuseFollowEventDependencies = 1, 
#line 1887
cudaMemPoolReuseAllowOpportunistic, 
#line 1895
cudaMemPoolReuseAllowInternalDependencies, 
#line 1906
cudaMemPoolAttrReleaseThreshold, 
#line 1912
cudaMemPoolAttrReservedMemCurrent, 
#line 1919
cudaMemPoolAttrReservedMemHigh, 
#line 1925
cudaMemPoolAttrUsedMemCurrent, 
#line 1932
cudaMemPoolAttrUsedMemHigh
#line 1933
}; 
#endif
#line 1938 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1938
enum cudaMemLocationType { 
#line 1939
cudaMemLocationTypeInvalid, 
#line 1940
cudaMemLocationTypeDevice
#line 1941
}; 
#endif
#line 1948 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1948
struct cudaMemLocation { 
#line 1949
cudaMemLocationType type; 
#line 1950
int id; 
#line 1951
}; 
#endif
#line 1956 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1956
enum cudaMemAccessFlags { 
#line 1957
cudaMemAccessFlagsProtNone, 
#line 1958
cudaMemAccessFlagsProtRead, 
#line 1959
cudaMemAccessFlagsProtReadWrite = 3
#line 1960
}; 
#endif
#line 1965 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1965
struct cudaMemAccessDesc { 
#line 1966
cudaMemLocation location; 
#line 1967
cudaMemAccessFlags flags; 
#line 1968
}; 
#endif
#line 1973 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1973
enum cudaMemAllocationType { 
#line 1974
cudaMemAllocationTypeInvalid, 
#line 1978
cudaMemAllocationTypePinned, 
#line 1979
cudaMemAllocationTypeMax = 2147483647
#line 1980
}; 
#endif
#line 1985 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1985
enum cudaMemAllocationHandleType { 
#line 1986
cudaMemHandleTypeNone, 
#line 1987
cudaMemHandleTypePosixFileDescriptor, 
#line 1988
cudaMemHandleTypeWin32, 
#line 1989
cudaMemHandleTypeWin32Kmt = 4
#line 1990
}; 
#endif
#line 1995 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 1995
struct cudaMemPoolProps { 
#line 1996
cudaMemAllocationType allocType; 
#line 1997
cudaMemAllocationHandleType handleTypes; 
#line 1998
cudaMemLocation location; 
#line 2005
void *win32SecurityAttributes; 
#line 2006
unsigned char reserved[64]; 
#line 2007
}; 
#endif
#line 2012 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2012
struct cudaMemPoolPtrExportData { 
#line 2013
unsigned char reserved[64]; 
#line 2014
}; 
#endif
#line 2019 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2019
struct cudaMemAllocNodeParams { 
#line 2024
cudaMemPoolProps poolProps; 
#line 2025
const cudaMemAccessDesc *accessDescs; 
#line 2026
size_t accessDescCount; 
#line 2027
size_t bytesize; 
#line 2028
void *dptr; 
#line 2029
}; 
#endif
#line 2034 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2034
enum cudaGraphMemAttributeType { 
#line 2039
cudaGraphMemAttrUsedMemCurrent = 1, 
#line 2046
cudaGraphMemAttrUsedMemHigh, 
#line 2053
cudaGraphMemAttrReservedMemCurrent, 
#line 2060
cudaGraphMemAttrReservedMemHigh
#line 2061
}; 
#endif
#line 2067 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2067
enum cudaDeviceP2PAttr { 
#line 2068
cudaDevP2PAttrPerformanceRank = 1, 
#line 2069
cudaDevP2PAttrAccessSupported, 
#line 2070
cudaDevP2PAttrNativeAtomicSupported, 
#line 2071
cudaDevP2PAttrCudaArrayAccessSupported
#line 2072
}; 
#endif
#line 2079 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2079
struct CUuuid_st { 
#line 2080
char bytes[16]; 
#line 2081
}; 
#endif
#line 2082 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 2082
CUuuid; 
#endif
#line 2084 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef CUuuid_st 
#line 2084
cudaUUID_t; 
#endif
#line 2089 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2089
struct cudaDeviceProp { 
#line 2091
char name[256]; 
#line 2092
cudaUUID_t uuid; 
#line 2093
char luid[8]; 
#line 2094
unsigned luidDeviceNodeMask; 
#line 2095
size_t totalGlobalMem; 
#line 2096
size_t sharedMemPerBlock; 
#line 2097
int regsPerBlock; 
#line 2098
int warpSize; 
#line 2099
size_t memPitch; 
#line 2100
int maxThreadsPerBlock; 
#line 2101
int maxThreadsDim[3]; 
#line 2102
int maxGridSize[3]; 
#line 2103
int clockRate; 
#line 2104
size_t totalConstMem; 
#line 2105
int major; 
#line 2106
int minor; 
#line 2107
size_t textureAlignment; 
#line 2108
size_t texturePitchAlignment; 
#line 2109
int deviceOverlap; 
#line 2110
int multiProcessorCount; 
#line 2111
int kernelExecTimeoutEnabled; 
#line 2112
int integrated; 
#line 2113
int canMapHostMemory; 
#line 2114
int computeMode; 
#line 2115
int maxTexture1D; 
#line 2116
int maxTexture1DMipmap; 
#line 2117
int maxTexture1DLinear; 
#line 2118
int maxTexture2D[2]; 
#line 2119
int maxTexture2DMipmap[2]; 
#line 2120
int maxTexture2DLinear[3]; 
#line 2121
int maxTexture2DGather[2]; 
#line 2122
int maxTexture3D[3]; 
#line 2123
int maxTexture3DAlt[3]; 
#line 2124
int maxTextureCubemap; 
#line 2125
int maxTexture1DLayered[2]; 
#line 2126
int maxTexture2DLayered[3]; 
#line 2127
int maxTextureCubemapLayered[2]; 
#line 2128
int maxSurface1D; 
#line 2129
int maxSurface2D[2]; 
#line 2130
int maxSurface3D[3]; 
#line 2131
int maxSurface1DLayered[2]; 
#line 2132
int maxSurface2DLayered[3]; 
#line 2133
int maxSurfaceCubemap; 
#line 2134
int maxSurfaceCubemapLayered[2]; 
#line 2135
size_t surfaceAlignment; 
#line 2136
int concurrentKernels; 
#line 2137
int ECCEnabled; 
#line 2138
int pciBusID; 
#line 2139
int pciDeviceID; 
#line 2140
int pciDomainID; 
#line 2141
int tccDriver; 
#line 2142
int asyncEngineCount; 
#line 2143
int unifiedAddressing; 
#line 2144
int memoryClockRate; 
#line 2145
int memoryBusWidth; 
#line 2146
int l2CacheSize; 
#line 2147
int persistingL2CacheMaxSize; 
#line 2148
int maxThreadsPerMultiProcessor; 
#line 2149
int streamPrioritiesSupported; 
#line 2150
int globalL1CacheSupported; 
#line 2151
int localL1CacheSupported; 
#line 2152
size_t sharedMemPerMultiprocessor; 
#line 2153
int regsPerMultiprocessor; 
#line 2154
int managedMemory; 
#line 2155
int isMultiGpuBoard; 
#line 2156
int multiGpuBoardGroupID; 
#line 2157
int hostNativeAtomicSupported; 
#line 2158
int singleToDoublePrecisionPerfRatio; 
#line 2159
int pageableMemoryAccess; 
#line 2160
int concurrentManagedAccess; 
#line 2161
int computePreemptionSupported; 
#line 2162
int canUseHostPointerForRegisteredMem; 
#line 2163
int cooperativeLaunch; 
#line 2164
int cooperativeMultiDeviceLaunch; 
#line 2165
size_t sharedMemPerBlockOptin; 
#line 2166
int pageableMemoryAccessUsesHostPageTables; 
#line 2167
int directManagedMemAccessFromHost; 
#line 2168
int maxBlocksPerMultiProcessor; 
#line 2169
int accessPolicyMaxWindowSize; 
#line 2170
size_t reservedSharedMemPerBlock; 
#line 2171
}; 
#endif
#line 2267 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef 
#line 2264
struct cudaIpcEventHandle_st { 
#line 2266
char reserved[64]; 
#line 2267
} cudaIpcEventHandle_t; 
#endif
#line 2275 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef 
#line 2272
struct cudaIpcMemHandle_st { 
#line 2274
char reserved[64]; 
#line 2275
} cudaIpcMemHandle_t; 
#endif
#line 2280 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2280
enum cudaExternalMemoryHandleType { 
#line 2284
cudaExternalMemoryHandleTypeOpaqueFd = 1, 
#line 2288
cudaExternalMemoryHandleTypeOpaqueWin32, 
#line 2292
cudaExternalMemoryHandleTypeOpaqueWin32Kmt, 
#line 2296
cudaExternalMemoryHandleTypeD3D12Heap, 
#line 2300
cudaExternalMemoryHandleTypeD3D12Resource, 
#line 2304
cudaExternalMemoryHandleTypeD3D11Resource, 
#line 2308
cudaExternalMemoryHandleTypeD3D11ResourceKmt, 
#line 2312
cudaExternalMemoryHandleTypeNvSciBuf
#line 2313
}; 
#endif
#line 2355 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2355
struct cudaExternalMemoryHandleDesc { 
#line 2359
cudaExternalMemoryHandleType type; 
#line 2360
union { 
#line 2366
int fd; 
#line 2382
struct { 
#line 2386
void *handle; 
#line 2391
const void *name; 
#line 2392
} win32; 
#line 2397
const void *nvSciBufObject; 
#line 2398
} handle; 
#line 2402
unsigned __int64 size; 
#line 2406
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 2407
}; 
#endif
#line 2412 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2412
struct cudaExternalMemoryBufferDesc { 
#line 2416
unsigned __int64 offset; 
#line 2420
unsigned __int64 size; 
#line 2424
unsigned flags; 
#line 2425
}; 
#endif
#line 2430 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2430
struct cudaExternalMemoryMipmappedArrayDesc { 
#line 2435
unsigned __int64 offset; 
#line 2439
cudaChannelFormatDesc formatDesc; 
#line 2443
cudaExtent extent; 
#line 2448
unsigned flags; 
#line 2452
unsigned numLevels; 
#line 2453
}; 
#endif
#line 2458 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2458
enum cudaExternalSemaphoreHandleType { 
#line 2462
cudaExternalSemaphoreHandleTypeOpaqueFd = 1, 
#line 2466
cudaExternalSemaphoreHandleTypeOpaqueWin32, 
#line 2470
cudaExternalSemaphoreHandleTypeOpaqueWin32Kmt, 
#line 2474
cudaExternalSemaphoreHandleTypeD3D12Fence, 
#line 2478
cudaExternalSemaphoreHandleTypeD3D11Fence, 
#line 2482
cudaExternalSemaphoreHandleTypeNvSciSync, 
#line 2486
cudaExternalSemaphoreHandleTypeKeyedMutex, 
#line 2490
cudaExternalSemaphoreHandleTypeKeyedMutexKmt, 
#line 2494
cudaExternalSemaphoreHandleTypeTimelineSemaphoreFd, 
#line 2498
cudaExternalSemaphoreHandleTypeTimelineSemaphoreWin32
#line 2499
}; 
#endif
#line 2504 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2504
struct cudaExternalSemaphoreHandleDesc { 
#line 2508
cudaExternalSemaphoreHandleType type; 
#line 2509
union { 
#line 2516
int fd; 
#line 2532
struct { 
#line 2536
void *handle; 
#line 2541
const void *name; 
#line 2542
} win32; 
#line 2546
const void *nvSciSyncObj; 
#line 2547
} handle; 
#line 2551
unsigned flags; __pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)__pad__(volatile char:8;)
#line 2552
}; 
#endif
#line 2653 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2653
struct cudaExternalSemaphoreSignalParams { 
#line 2654
struct { 
#line 2658
struct { 
#line 2662
unsigned __int64 value; 
#line 2663
} fence; 
#line 2664
union { 
#line 2669
void *fence; 
#line 2670
unsigned __int64 reserved; 
#line 2671
} nvSciSync; 
#line 2675
struct { 
#line 2679
unsigned __int64 key; 
#line 2680
} keyedMutex; 
#line 2681
unsigned reserved[12]; 
#line 2682
} params; 
#line 2693
unsigned flags; 
#line 2694
unsigned reserved[16]; 
#line 2695
}; 
#endif
#line 2700 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2700
struct cudaExternalSemaphoreWaitParams { 
#line 2701
struct { 
#line 2705
struct { 
#line 2709
unsigned __int64 value; 
#line 2710
} fence; 
#line 2711
union { 
#line 2716
void *fence; 
#line 2717
unsigned __int64 reserved; 
#line 2718
} nvSciSync; 
#line 2722
struct { 
#line 2726
unsigned __int64 key; 
#line 2730
unsigned timeoutMs; 
#line 2731
} keyedMutex; 
#line 2732
unsigned reserved[10]; 
#line 2733
} params; 
#line 2744
unsigned flags; 
#line 2745
unsigned reserved[16]; 
#line 2746
}; 
#endif
#line 2758 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef cudaError 
#line 2758
cudaError_t; 
#endif
#line 2763 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUstream_st *
#line 2763
cudaStream_t; 
#endif
#line 2768 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUevent_st *
#line 2768
cudaEvent_t; 
#endif
#line 2773 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef cudaGraphicsResource *
#line 2773
cudaGraphicsResource_t; 
#endif
#line 2778 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef cudaOutputMode 
#line 2778
cudaOutputMode_t; 
#endif
#line 2783 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUexternalMemory_st *
#line 2783
cudaExternalMemory_t; 
#endif
#line 2788 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUexternalSemaphore_st *
#line 2788
cudaExternalSemaphore_t; 
#endif
#line 2793 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUgraph_st *
#line 2793
cudaGraph_t; 
#endif
#line 2798 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUgraphNode_st *
#line 2798
cudaGraphNode_t; 
#endif
#line 2803 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUuserObject_st *
#line 2803
cudaUserObject_t; 
#endif
#line 2808 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUfunc_st *
#line 2808
cudaFunction_t; 
#endif
#line 2813 "e:\\cuda\\include\\driver_types.h"
#if 0
typedef struct CUmemPoolHandle_st *
#line 2813
cudaMemPool_t; 
#endif
#line 2818 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2818
enum cudaCGScope { 
#line 2819
cudaCGScopeInvalid, 
#line 2820
cudaCGScopeGrid, 
#line 2821
cudaCGScopeMultiGrid
#line 2822
}; 
#endif
#line 2827 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2827
struct cudaLaunchParams { 
#line 2829
void *func; 
#line 2830
dim3 gridDim; 
#line 2831
dim3 blockDim; 
#line 2832
void **args; 
#line 2833
size_t sharedMem; 
#line 2834
cudaStream_t stream; 
#line 2835
}; 
#endif
#line 2840 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2840
struct cudaKernelNodeParams { 
#line 2841
void *func; 
#line 2842
dim3 gridDim; 
#line 2843
dim3 blockDim; 
#line 2844
unsigned sharedMemBytes; 
#line 2845
void **kernelParams; 
#line 2846
void **extra; 
#line 2847
}; 
#endif
#line 2852 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2852
struct cudaExternalSemaphoreSignalNodeParams { 
#line 2853
cudaExternalSemaphore_t *extSemArray; 
#line 2854
const cudaExternalSemaphoreSignalParams *paramsArray; 
#line 2855
unsigned numExtSems; 
#line 2856
}; 
#endif
#line 2861 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2861
struct cudaExternalSemaphoreWaitNodeParams { 
#line 2862
cudaExternalSemaphore_t *extSemArray; 
#line 2863
const cudaExternalSemaphoreWaitParams *paramsArray; 
#line 2864
unsigned numExtSems; 
#line 2865
}; 
#endif
#line 2870 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2870
enum cudaGraphNodeType { 
#line 2871
cudaGraphNodeTypeKernel, 
#line 2872
cudaGraphNodeTypeMemcpy, 
#line 2873
cudaGraphNodeTypeMemset, 
#line 2874
cudaGraphNodeTypeHost, 
#line 2875
cudaGraphNodeTypeGraph, 
#line 2876
cudaGraphNodeTypeEmpty, 
#line 2877
cudaGraphNodeTypeWaitEvent, 
#line 2878
cudaGraphNodeTypeEventRecord, 
#line 2879
cudaGraphNodeTypeExtSemaphoreSignal, 
#line 2880
cudaGraphNodeTypeExtSemaphoreWait, 
#line 2881
cudaGraphNodeTypeMemAlloc, 
#line 2882
cudaGraphNodeTypeMemFree, 
#line 2883
cudaGraphNodeTypeCount
#line 2884
}; 
#endif
#line 2889 "e:\\cuda\\include\\driver_types.h"
typedef struct CUgraphExec_st *cudaGraphExec_t; 
#line 2894
#if 0
#line 2894
enum cudaGraphExecUpdateResult { 
#line 2895
cudaGraphExecUpdateSuccess, 
#line 2896
cudaGraphExecUpdateError, 
#line 2897
cudaGraphExecUpdateErrorTopologyChanged, 
#line 2898
cudaGraphExecUpdateErrorNodeTypeChanged, 
#line 2899
cudaGraphExecUpdateErrorFunctionChanged, 
#line 2900
cudaGraphExecUpdateErrorParametersChanged, 
#line 2901
cudaGraphExecUpdateErrorNotSupported, 
#line 2902
cudaGraphExecUpdateErrorUnsupportedFunctionChange
#line 2903
}; 
#endif
#line 2909 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2909
enum cudaGetDriverEntryPointFlags { 
#line 2910
cudaEnableDefault, 
#line 2911
cudaEnableLegacyStream, 
#line 2912
cudaEnablePerThreadDefaultStream
#line 2913
}; 
#endif
#line 2918 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2918
enum cudaGraphDebugDotFlags { 
#line 2919
cudaGraphDebugDotFlagsVerbose = (1 << 0), 
#line 2920
cudaGraphDebugDotFlagsKernelNodeParams = (1 << 2), 
#line 2921
cudaGraphDebugDotFlagsMemcpyNodeParams = (1 << 3), 
#line 2922
cudaGraphDebugDotFlagsMemsetNodeParams = (1 << 4), 
#line 2923
cudaGraphDebugDotFlagsHostNodeParams = (1 << 5), 
#line 2924
cudaGraphDebugDotFlagsEventNodeParams = (1 << 6), 
#line 2925
cudaGraphDebugDotFlagsExtSemasSignalNodeParams = (1 << 7), 
#line 2926
cudaGraphDebugDotFlagsExtSemasWaitNodeParams = (1 << 8), 
#line 2927
cudaGraphDebugDotFlagsKernelNodeAttributes = (1 << 9), 
#line 2928
cudaGraphDebugDotFlagsHandles = (1 << 10)
#line 2929
}; 
#endif
#line 2934 "e:\\cuda\\include\\driver_types.h"
#if 0
#line 2934
enum cudaGraphInstantiateFlags { 
#line 2935
cudaGraphInstantiateFlagAutoFreeOnLaunch = 1
#line 2936
}; 
#endif
#line 84 "e:\\cuda\\include\\surface_types.h"
#if 0
#line 84
enum cudaSurfaceBoundaryMode { 
#line 86
cudaBoundaryModeZero, 
#line 87
cudaBoundaryModeClamp, 
#line 88
cudaBoundaryModeTrap
#line 89
}; 
#endif
#line 94 "e:\\cuda\\include\\surface_types.h"
#if 0
#line 94
enum cudaSurfaceFormatMode { 
#line 96
cudaFormatModeForced, 
#line 97
cudaFormatModeAuto
#line 98
}; 
#endif
#line 103 "e:\\cuda\\include\\surface_types.h"
#if 0
#line 103
struct surfaceReference { 
#line 108
cudaChannelFormatDesc channelDesc; 
#line 109
}; 
#endif
#line 114 "e:\\cuda\\include\\surface_types.h"
#if 0
typedef unsigned __int64 
#line 114
cudaSurfaceObject_t; 
#endif
#line 84 "e:\\cuda\\include\\texture_types.h"
#if 0
#line 84
enum cudaTextureAddressMode { 
#line 86
cudaAddressModeWrap, 
#line 87
cudaAddressModeClamp, 
#line 88
cudaAddressModeMirror, 
#line 89
cudaAddressModeBorder
#line 90
}; 
#endif
#line 95 "e:\\cuda\\include\\texture_types.h"
#if 0
#line 95
enum cudaTextureFilterMode { 
#line 97
cudaFilterModePoint, 
#line 98
cudaFilterModeLinear
#line 99
}; 
#endif
#line 104 "e:\\cuda\\include\\texture_types.h"
#if 0
#line 104
enum cudaTextureReadMode { 
#line 106
cudaReadModeElementType, 
#line 107
cudaReadModeNormalizedFloat
#line 108
}; 
#endif
#line 113 "e:\\cuda\\include\\texture_types.h"
#if 0
#line 113
struct textureReference { 
#line 118
int normalized; 
#line 122
cudaTextureFilterMode filterMode; 
#line 126
cudaTextureAddressMode addressMode[3]; 
#line 130
cudaChannelFormatDesc channelDesc; 
#line 134
int sRGB; 
#line 138
unsigned maxAnisotropy; 
#line 142
cudaTextureFilterMode mipmapFilterMode; 
#line 146
float mipmapLevelBias; 
#line 150
float minMipmapLevelClamp; 
#line 154
float maxMipmapLevelClamp; 
#line 158
int disableTrilinearOptimization; 
#line 159
int __cudaReserved[14]; 
#line 160
}; 
#endif
#line 165 "e:\\cuda\\include\\texture_types.h"
#if 0
#line 165
struct cudaTextureDesc { 
#line 170
cudaTextureAddressMode addressMode[3]; 
#line 174
cudaTextureFilterMode filterMode; 
#line 178
cudaTextureReadMode readMode; 
#line 182
int sRGB; 
#line 186
float borderColor[4]; 
#line 190
int normalizedCoords; 
#line 194
unsigned maxAnisotropy; 
#line 198
cudaTextureFilterMode mipmapFilterMode; 
#line 202
float mipmapLevelBias; 
#line 206
float minMipmapLevelClamp; 
#line 210
float maxMipmapLevelClamp; 
#line 214
int disableTrilinearOptimization; 
#line 215
}; 
#endif
#line 220 "e:\\cuda\\include\\texture_types.h"
#if 0
typedef unsigned __int64 
#line 220
cudaTextureObject_t; 
#endif
#line 84 "e:\\cuda\\include\\library_types.h"
typedef 
#line 54
enum cudaDataType_t { 
#line 56
CUDA_R_16F = 2, 
#line 57
CUDA_C_16F = 6, 
#line 58
CUDA_R_16BF = 14, 
#line 59
CUDA_C_16BF, 
#line 60
CUDA_R_32F = 0, 
#line 61
CUDA_C_32F = 4, 
#line 62
CUDA_R_64F = 1, 
#line 63
CUDA_C_64F = 5, 
#line 64
CUDA_R_4I = 16, 
#line 65
CUDA_C_4I, 
#line 66
CUDA_R_4U, 
#line 67
CUDA_C_4U, 
#line 68
CUDA_R_8I = 3, 
#line 69
CUDA_C_8I = 7, 
#line 70
CUDA_R_8U, 
#line 71
CUDA_C_8U, 
#line 72
CUDA_R_16I = 20, 
#line 73
CUDA_C_16I, 
#line 74
CUDA_R_16U, 
#line 75
CUDA_C_16U, 
#line 76
CUDA_R_32I = 10, 
#line 77
CUDA_C_32I, 
#line 78
CUDA_R_32U, 
#line 79
CUDA_C_32U, 
#line 80
CUDA_R_64I = 24, 
#line 81
CUDA_C_64I, 
#line 82
CUDA_R_64U, 
#line 83
CUDA_C_64U
#line 84
} cudaDataType; 
#line 92
typedef 
#line 87
enum libraryPropertyType_t { 
#line 89
MAJOR_VERSION, 
#line 90
MINOR_VERSION, 
#line 91
PATCH_LEVEL
#line 92
} libraryPropertyType; 
#line 115 "e:\\cuda\\include\\cuda_device_runtime_api.h"
extern "C" {
#line 117
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 118
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 119
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 120
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 121
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 122
extern cudaError_t __stdcall cudaGetLastError(); 
#line 123
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 124
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 125
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 126
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 127
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 128
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 129
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 130
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 131
extern cudaError_t __stdcall cudaStreamWaitEvent_ptsz(cudaStream_t stream, cudaEvent_t event, unsigned flags); 
#line 132
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 133
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream); 
#line 134
extern cudaError_t __stdcall cudaEventRecord_ptsz(cudaEvent_t event, cudaStream_t stream); 
#line 135
extern cudaError_t __stdcall cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
#line 136
extern cudaError_t __stdcall cudaEventRecordWithFlags_ptsz(cudaEvent_t event, cudaStream_t stream, unsigned flags); 
#line 137
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 138
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 139
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 140
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 141
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 142
extern cudaError_t __stdcall cudaMemcpyAsync_ptsz(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream); 
#line 143
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 144
extern cudaError_t __stdcall cudaMemcpy2DAsync_ptsz(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream); 
#line 145
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 146
extern cudaError_t __stdcall cudaMemcpy3DAsync_ptsz(const cudaMemcpy3DParms * p, cudaStream_t stream); 
#line 147
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 148
extern cudaError_t __stdcall cudaMemsetAsync_ptsz(void * devPtr, int value, size_t count, cudaStream_t stream); 
#line 149
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 150
extern cudaError_t __stdcall cudaMemset2DAsync_ptsz(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream); 
#line 151
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 152
extern cudaError_t __stdcall cudaMemset3DAsync_ptsz(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream); 
#line 153
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 174
extern void *__stdcall cudaGetParameterBuffer(size_t alignment, size_t size); 
#line 202
extern void *__stdcall cudaGetParameterBufferV2(void * func, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize); 
#line 203
extern cudaError_t __stdcall cudaLaunchDevice_ptsz(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 204
extern cudaError_t __stdcall cudaLaunchDeviceV2_ptsz(void * parameterBuffer, cudaStream_t stream); 
#line 222 "e:\\cuda\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaLaunchDevice(void * func, void * parameterBuffer, dim3 gridDimension, dim3 blockDimension, unsigned sharedMemSize, cudaStream_t stream); 
#line 223
extern cudaError_t __stdcall cudaLaunchDeviceV2(void * parameterBuffer, cudaStream_t stream); 
#line 226 "e:\\cuda\\include\\cuda_device_runtime_api.h"
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize); 
#line 227
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 229
extern unsigned __int64 __stdcall cudaCGGetIntrinsicHandle(cudaCGScope scope); 
#line 230
extern cudaError_t __stdcall cudaCGSynchronize(unsigned __int64 handle, unsigned flags); 
#line 231
extern cudaError_t __stdcall cudaCGSynchronizeGrid(unsigned __int64 handle, unsigned flags); 
#line 232
extern cudaError_t __stdcall cudaCGGetSize(unsigned * numThreads, unsigned * numGrids, unsigned __int64 handle); 
#line 233
extern cudaError_t __stdcall cudaCGGetRank(unsigned * threadRank, unsigned * gridRank, unsigned __int64 handle); 
#line 234
}
#line 236
template< class T> static __inline cudaError_t cudaMalloc(T ** devPtr, size_t size); 
#line 237
template< class T> static __inline cudaError_t cudaFuncGetAttributes(cudaFuncAttributes * attr, T * entry); 
#line 238
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize); 
#line 239
template< class T> static __inline cudaError_t cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, T func, int blockSize, size_t dynamicSmemSize, unsigned flags); 
#line 266 "e:\\cuda\\include\\cuda_runtime_api.h"
extern "C" {
#line 301 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceReset(); 
#line 322
extern cudaError_t __stdcall cudaDeviceSynchronize(); 
#line 409
extern cudaError_t __stdcall cudaDeviceSetLimit(cudaLimit limit, size_t value); 
#line 444
extern cudaError_t __stdcall cudaDeviceGetLimit(size_t * pValue, cudaLimit limit); 
#line 467
extern cudaError_t __stdcall cudaDeviceGetTexture1DLinearMaxWidth(size_t * maxWidthInElements, const cudaChannelFormatDesc * fmtDesc, int device); 
#line 501 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 538
extern cudaError_t __stdcall cudaDeviceGetStreamPriorityRange(int * leastPriority, int * greatestPriority); 
#line 582
extern cudaError_t __stdcall cudaDeviceSetCacheConfig(cudaFuncCache cacheConfig); 
#line 613
extern cudaError_t __stdcall cudaDeviceGetSharedMemConfig(cudaSharedMemConfig * pConfig); 
#line 657
extern cudaError_t __stdcall cudaDeviceSetSharedMemConfig(cudaSharedMemConfig config); 
#line 684
extern cudaError_t __stdcall cudaDeviceGetByPCIBusId(int * device, const char * pciBusId); 
#line 714
extern cudaError_t __stdcall cudaDeviceGetPCIBusId(char * pciBusId, int len, int device); 
#line 762
extern cudaError_t __stdcall cudaIpcGetEventHandle(cudaIpcEventHandle_t * handle, cudaEvent_t event); 
#line 803
extern cudaError_t __stdcall cudaIpcOpenEventHandle(cudaEvent_t * event, cudaIpcEventHandle_t handle); 
#line 846
extern cudaError_t __stdcall cudaIpcGetMemHandle(cudaIpcMemHandle_t * handle, void * devPtr); 
#line 910
extern cudaError_t __stdcall cudaIpcOpenMemHandle(void ** devPtr, cudaIpcMemHandle_t handle, unsigned flags); 
#line 946
extern cudaError_t __stdcall cudaIpcCloseMemHandle(void * devPtr); 
#line 978
extern cudaError_t __stdcall cudaDeviceFlushGPUDirectRDMAWrites(cudaFlushGPUDirectRDMAWritesTarget target, cudaFlushGPUDirectRDMAWritesScope scope); 
#line 1022 "e:\\cuda\\include\\cuda_runtime_api.h"
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadExit(); 
#line 1048
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSynchronize(); 
#line 1097
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetLimit(cudaLimit limit, size_t value); 
#line 1130
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetLimit(size_t * pValue, cudaLimit limit); 
#line 1166
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadGetCacheConfig(cudaFuncCache * pCacheConfig); 
#line 1213
__declspec(deprecated) extern cudaError_t __stdcall cudaThreadSetCacheConfig(cudaFuncCache cacheConfig); 
#line 1276
extern cudaError_t __stdcall cudaGetLastError(); 
#line 1324
extern cudaError_t __stdcall cudaPeekAtLastError(); 
#line 1340
extern const char *__stdcall cudaGetErrorName(cudaError_t error); 
#line 1356
extern const char *__stdcall cudaGetErrorString(cudaError_t error); 
#line 1384
extern cudaError_t __stdcall cudaGetDeviceCount(int * count); 
#line 1662
extern cudaError_t __stdcall cudaGetDeviceProperties(cudaDeviceProp * prop, int device); 
#line 1857
extern cudaError_t __stdcall cudaDeviceGetAttribute(int * value, cudaDeviceAttr attr, int device); 
#line 1875
extern cudaError_t __stdcall cudaDeviceGetDefaultMemPool(cudaMemPool_t * memPool, int device); 
#line 1899
extern cudaError_t __stdcall cudaDeviceSetMemPool(int device, cudaMemPool_t memPool); 
#line 1919
extern cudaError_t __stdcall cudaDeviceGetMemPool(cudaMemPool_t * memPool, int device); 
#line 1967
extern cudaError_t __stdcall cudaDeviceGetNvSciSyncAttributes(void * nvSciSyncAttrList, int device, int flags); 
#line 2007
extern cudaError_t __stdcall cudaDeviceGetP2PAttribute(int * value, cudaDeviceP2PAttr attr, int srcDevice, int dstDevice); 
#line 2028
extern cudaError_t __stdcall cudaChooseDevice(int * device, const cudaDeviceProp * prop); 
#line 2065
extern cudaError_t __stdcall cudaSetDevice(int device); 
#line 2086
extern cudaError_t __stdcall cudaGetDevice(int * device); 
#line 2117
extern cudaError_t __stdcall cudaSetValidDevices(int * device_arr, int len); 
#line 2182
extern cudaError_t __stdcall cudaSetDeviceFlags(unsigned flags); 
#line 2226
extern cudaError_t __stdcall cudaGetDeviceFlags(unsigned * flags); 
#line 2266
extern cudaError_t __stdcall cudaStreamCreate(cudaStream_t * pStream); 
#line 2298
extern cudaError_t __stdcall cudaStreamCreateWithFlags(cudaStream_t * pStream, unsigned flags); 
#line 2344
extern cudaError_t __stdcall cudaStreamCreateWithPriority(cudaStream_t * pStream, unsigned flags, int priority); 
#line 2371
extern cudaError_t __stdcall cudaStreamGetPriority(cudaStream_t hStream, int * priority); 
#line 2396
extern cudaError_t __stdcall cudaStreamGetFlags(cudaStream_t hStream, unsigned * flags); 
#line 2411
extern cudaError_t __stdcall cudaCtxResetPersistingL2Cache(); 
#line 2431
extern cudaError_t __stdcall cudaStreamCopyAttributes(cudaStream_t dst, cudaStream_t src); 
#line 2452
extern cudaError_t __stdcall cudaStreamGetAttribute(cudaStream_t hStream, cudaStreamAttrID attr, cudaStreamAttrValue * value_out); 
#line 2476
extern cudaError_t __stdcall cudaStreamSetAttribute(cudaStream_t hStream, cudaStreamAttrID attr, const cudaStreamAttrValue * value); 
#line 2510
extern cudaError_t __stdcall cudaStreamDestroy(cudaStream_t stream); 
#line 2541
extern cudaError_t __stdcall cudaStreamWaitEvent(cudaStream_t stream, cudaEvent_t event, unsigned flags = 0); 
#line 2549
typedef void (__stdcall *cudaStreamCallback_t)(cudaStream_t stream, cudaError_t status, void * userData); 
#line 2616
extern cudaError_t __stdcall cudaStreamAddCallback(cudaStream_t stream, cudaStreamCallback_t callback, void * userData, unsigned flags); 
#line 2640
extern cudaError_t __stdcall cudaStreamSynchronize(cudaStream_t stream); 
#line 2665
extern cudaError_t __stdcall cudaStreamQuery(cudaStream_t stream); 
#line 2749
extern cudaError_t __stdcall cudaStreamAttachMemAsync(cudaStream_t stream, void * devPtr, size_t length = 0, unsigned flags = 4); 
#line 2788 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaStreamBeginCapture(cudaStream_t stream, cudaStreamCaptureMode mode); 
#line 2839
extern cudaError_t __stdcall cudaThreadExchangeStreamCaptureMode(cudaStreamCaptureMode * mode); 
#line 2867
extern cudaError_t __stdcall cudaStreamEndCapture(cudaStream_t stream, cudaGraph_t * pGraph); 
#line 2905
extern cudaError_t __stdcall cudaStreamIsCapturing(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus); 
#line 2937
extern cudaError_t __stdcall cudaStreamGetCaptureInfo(cudaStream_t stream, cudaStreamCaptureStatus * pCaptureStatus, unsigned __int64 * pId); 
#line 2992
extern cudaError_t __stdcall cudaStreamGetCaptureInfo_v2(cudaStream_t stream, cudaStreamCaptureStatus * captureStatus_out, unsigned __int64 * id_out = 0, cudaGraph_t * graph_out = 0, const cudaGraphNode_t ** dependencies_out = 0, size_t * numDependencies_out = 0); 
#line 3025
extern cudaError_t __stdcall cudaStreamUpdateCaptureDependencies(cudaStream_t stream, cudaGraphNode_t * dependencies, size_t numDependencies, unsigned flags = 0); 
#line 3062
extern cudaError_t __stdcall cudaEventCreate(cudaEvent_t * event); 
#line 3099
extern cudaError_t __stdcall cudaEventCreateWithFlags(cudaEvent_t * event, unsigned flags); 
#line 3139
extern cudaError_t __stdcall cudaEventRecord(cudaEvent_t event, cudaStream_t stream = 0); 
#line 3186
extern cudaError_t __stdcall cudaEventRecordWithFlags(cudaEvent_t event, cudaStream_t stream = 0, unsigned flags = 0); 
#line 3218 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaEventQuery(cudaEvent_t event); 
#line 3248
extern cudaError_t __stdcall cudaEventSynchronize(cudaEvent_t event); 
#line 3277
extern cudaError_t __stdcall cudaEventDestroy(cudaEvent_t event); 
#line 3320
extern cudaError_t __stdcall cudaEventElapsedTime(float * ms, cudaEvent_t start, cudaEvent_t end); 
#line 3500
extern cudaError_t __stdcall cudaImportExternalMemory(cudaExternalMemory_t * extMem_out, const cudaExternalMemoryHandleDesc * memHandleDesc); 
#line 3555
extern cudaError_t __stdcall cudaExternalMemoryGetMappedBuffer(void ** devPtr, cudaExternalMemory_t extMem, const cudaExternalMemoryBufferDesc * bufferDesc); 
#line 3615
extern cudaError_t __stdcall cudaExternalMemoryGetMappedMipmappedArray(cudaMipmappedArray_t * mipmap, cudaExternalMemory_t extMem, const cudaExternalMemoryMipmappedArrayDesc * mipmapDesc); 
#line 3639
extern cudaError_t __stdcall cudaDestroyExternalMemory(cudaExternalMemory_t extMem); 
#line 3792
extern cudaError_t __stdcall cudaImportExternalSemaphore(cudaExternalSemaphore_t * extSem_out, const cudaExternalSemaphoreHandleDesc * semHandleDesc); 
#line 3859
extern cudaError_t __stdcall cudaSignalExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreSignalParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 3935
extern cudaError_t __stdcall cudaWaitExternalSemaphoresAsync_v2(const cudaExternalSemaphore_t * extSemArray, const cudaExternalSemaphoreWaitParams * paramsArray, unsigned numExtSems, cudaStream_t stream = 0); 
#line 3958
extern cudaError_t __stdcall cudaDestroyExternalSemaphore(cudaExternalSemaphore_t extSem); 
#line 4025
extern cudaError_t __stdcall cudaLaunchKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 4082
extern cudaError_t __stdcall cudaLaunchCooperativeKernel(const void * func, dim3 gridDim, dim3 blockDim, void ** args, size_t sharedMem, cudaStream_t stream); 
#line 4183
__declspec(deprecated) extern cudaError_t __stdcall cudaLaunchCooperativeKernelMultiDevice(cudaLaunchParams * launchParamsList, unsigned numDevices, unsigned flags = 0); 
#line 4230
extern cudaError_t __stdcall cudaFuncSetCacheConfig(const void * func, cudaFuncCache cacheConfig); 
#line 4285
extern cudaError_t __stdcall cudaFuncSetSharedMemConfig(const void * func, cudaSharedMemConfig config); 
#line 4318
extern cudaError_t __stdcall cudaFuncGetAttributes(cudaFuncAttributes * attr, const void * func); 
#line 4355
extern cudaError_t __stdcall cudaFuncSetAttribute(const void * func, cudaFuncAttribute attr, int value); 
#line 4381
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForDevice(double * d); 
#line 4405
__declspec(deprecated) extern cudaError_t __stdcall cudaSetDoubleForHost(double * d); 
#line 4473
extern cudaError_t __stdcall cudaLaunchHostFunc(cudaStream_t stream, cudaHostFn_t fn, void * userData); 
#line 4530
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessor(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize); 
#line 4559
extern cudaError_t __stdcall cudaOccupancyAvailableDynamicSMemPerBlock(size_t * dynamicSmemSize, const void * func, int numBlocks, int blockSize); 
#line 4604
extern cudaError_t __stdcall cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int * numBlocks, const void * func, int blockSize, size_t dynamicSMemSize, unsigned flags); 
#line 4725
extern cudaError_t __stdcall cudaMallocManaged(void ** devPtr, size_t size, unsigned flags = 1); 
#line 4758 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaMalloc(void ** devPtr, size_t size); 
#line 4791
extern cudaError_t __stdcall cudaMallocHost(void ** ptr, size_t size); 
#line 4834
extern cudaError_t __stdcall cudaMallocPitch(void ** devPtr, size_t * pitch, size_t width, size_t height); 
#line 4883
extern cudaError_t __stdcall cudaMallocArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, size_t width, size_t height = 0, unsigned flags = 0); 
#line 4912
extern cudaError_t __stdcall cudaFree(void * devPtr); 
#line 4935
extern cudaError_t __stdcall cudaFreeHost(void * ptr); 
#line 4958
extern cudaError_t __stdcall cudaFreeArray(cudaArray_t array); 
#line 4981
extern cudaError_t __stdcall cudaFreeMipmappedArray(cudaMipmappedArray_t mipmappedArray); 
#line 5047
extern cudaError_t __stdcall cudaHostAlloc(void ** pHost, size_t size, unsigned flags); 
#line 5140
extern cudaError_t __stdcall cudaHostRegister(void * ptr, size_t size, unsigned flags); 
#line 5163
extern cudaError_t __stdcall cudaHostUnregister(void * ptr); 
#line 5208
extern cudaError_t __stdcall cudaHostGetDevicePointer(void ** pDevice, void * pHost, unsigned flags); 
#line 5230
extern cudaError_t __stdcall cudaHostGetFlags(unsigned * pFlags, void * pHost); 
#line 5269
extern cudaError_t __stdcall cudaMalloc3D(cudaPitchedPtr * pitchedDevPtr, cudaExtent extent); 
#line 5411
extern cudaError_t __stdcall cudaMalloc3DArray(cudaArray_t * array, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned flags = 0); 
#line 5553
extern cudaError_t __stdcall cudaMallocMipmappedArray(cudaMipmappedArray_t * mipmappedArray, const cudaChannelFormatDesc * desc, cudaExtent extent, unsigned numLevels, unsigned flags = 0); 
#line 5586
extern cudaError_t __stdcall cudaGetMipmappedArrayLevel(cudaArray_t * levelArray, cudaMipmappedArray_const_t mipmappedArray, unsigned level); 
#line 5691
extern cudaError_t __stdcall cudaMemcpy3D(const cudaMemcpy3DParms * p); 
#line 5722
extern cudaError_t __stdcall cudaMemcpy3DPeer(const cudaMemcpy3DPeerParms * p); 
#line 5840
extern cudaError_t __stdcall cudaMemcpy3DAsync(const cudaMemcpy3DParms * p, cudaStream_t stream = 0); 
#line 5866
extern cudaError_t __stdcall cudaMemcpy3DPeerAsync(const cudaMemcpy3DPeerParms * p, cudaStream_t stream = 0); 
#line 5888
extern cudaError_t __stdcall cudaMemGetInfo(size_t * free, size_t * total); 
#line 5914
extern cudaError_t __stdcall cudaArrayGetInfo(cudaChannelFormatDesc * desc, cudaExtent * extent, unsigned * flags, cudaArray_t array); 
#line 5943
extern cudaError_t __stdcall cudaArrayGetPlane(cudaArray_t * pPlaneArray, cudaArray_t hArray, unsigned planeIdx); 
#line 5971
extern cudaError_t __stdcall cudaArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaArray_t array); 
#line 6001 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaMipmappedArrayGetSparseProperties(cudaArraySparseProperties * sparseProperties, cudaMipmappedArray_t mipmap); 
#line 6046 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaMemcpy(void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 6081
extern cudaError_t __stdcall cudaMemcpyPeer(void * dst, int dstDevice, const void * src, int srcDevice, size_t count); 
#line 6130
extern cudaError_t __stdcall cudaMemcpy2D(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 6180
extern cudaError_t __stdcall cudaMemcpy2DToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind); 
#line 6230
extern cudaError_t __stdcall cudaMemcpy2DFromArray(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind); 
#line 6277
extern cudaError_t __stdcall cudaMemcpy2DArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t width, size_t height, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 6320
extern cudaError_t __stdcall cudaMemcpyToSymbol(const void * symbol, const void * src, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyHostToDevice); 
#line 6363
extern cudaError_t __stdcall cudaMemcpyFromSymbol(void * dst, const void * symbol, size_t count, size_t offset = 0, cudaMemcpyKind kind = cudaMemcpyDeviceToHost); 
#line 6420
extern cudaError_t __stdcall cudaMemcpyAsync(void * dst, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6455
extern cudaError_t __stdcall cudaMemcpyPeerAsync(void * dst, int dstDevice, const void * src, int srcDevice, size_t count, cudaStream_t stream = 0); 
#line 6518
extern cudaError_t __stdcall cudaMemcpy2DAsync(void * dst, size_t dpitch, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6576
extern cudaError_t __stdcall cudaMemcpy2DToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t spitch, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6633
extern cudaError_t __stdcall cudaMemcpy2DFromArrayAsync(void * dst, size_t dpitch, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t width, size_t height, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6684
extern cudaError_t __stdcall cudaMemcpyToSymbolAsync(const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6735
extern cudaError_t __stdcall cudaMemcpyFromSymbolAsync(void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 6764
extern cudaError_t __stdcall cudaMemset(void * devPtr, int value, size_t count); 
#line 6798
extern cudaError_t __stdcall cudaMemset2D(void * devPtr, size_t pitch, int value, size_t width, size_t height); 
#line 6844
extern cudaError_t __stdcall cudaMemset3D(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent); 
#line 6880
extern cudaError_t __stdcall cudaMemsetAsync(void * devPtr, int value, size_t count, cudaStream_t stream = 0); 
#line 6921
extern cudaError_t __stdcall cudaMemset2DAsync(void * devPtr, size_t pitch, int value, size_t width, size_t height, cudaStream_t stream = 0); 
#line 6974
extern cudaError_t __stdcall cudaMemset3DAsync(cudaPitchedPtr pitchedDevPtr, int value, cudaExtent extent, cudaStream_t stream = 0); 
#line 7002
extern cudaError_t __stdcall cudaGetSymbolAddress(void ** devPtr, const void * symbol); 
#line 7029
extern cudaError_t __stdcall cudaGetSymbolSize(size_t * size, const void * symbol); 
#line 7099
extern cudaError_t __stdcall cudaMemPrefetchAsync(const void * devPtr, size_t count, int dstDevice, cudaStream_t stream = 0); 
#line 7215
extern cudaError_t __stdcall cudaMemAdvise(const void * devPtr, size_t count, cudaMemoryAdvise advice, int device); 
#line 7274
extern cudaError_t __stdcall cudaMemRangeGetAttribute(void * data, size_t dataSize, cudaMemRangeAttribute attribute, const void * devPtr, size_t count); 
#line 7313
extern cudaError_t __stdcall cudaMemRangeGetAttributes(void ** data, size_t * dataSizes, cudaMemRangeAttribute * attributes, size_t numAttributes, const void * devPtr, size_t count); 
#line 7373
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyToArray(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind); 
#line 7415
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyFromArray(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind); 
#line 7458
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyArrayToArray(cudaArray_t dst, size_t wOffsetDst, size_t hOffsetDst, cudaArray_const_t src, size_t wOffsetSrc, size_t hOffsetSrc, size_t count, cudaMemcpyKind kind = cudaMemcpyDeviceToDevice); 
#line 7509
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyToArrayAsync(cudaArray_t dst, size_t wOffset, size_t hOffset, const void * src, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 7559
__declspec(deprecated) extern cudaError_t __stdcall cudaMemcpyFromArrayAsync(void * dst, cudaArray_const_t src, size_t wOffset, size_t hOffset, size_t count, cudaMemcpyKind kind, cudaStream_t stream = 0); 
#line 7628
extern cudaError_t __stdcall cudaMallocAsync(void ** devPtr, size_t size, cudaStream_t hStream); 
#line 7654
extern cudaError_t __stdcall cudaFreeAsync(void * devPtr, cudaStream_t hStream); 
#line 7679
extern cudaError_t __stdcall cudaMemPoolTrimTo(cudaMemPool_t memPool, size_t minBytesToKeep); 
#line 7717
extern cudaError_t __stdcall cudaMemPoolSetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
#line 7755
extern cudaError_t __stdcall cudaMemPoolGetAttribute(cudaMemPool_t memPool, cudaMemPoolAttr attr, void * value); 
#line 7770
extern cudaError_t __stdcall cudaMemPoolSetAccess(cudaMemPool_t memPool, const cudaMemAccessDesc * descList, size_t count); 
#line 7783
extern cudaError_t __stdcall cudaMemPoolGetAccess(cudaMemAccessFlags * flags, cudaMemPool_t memPool, cudaMemLocation * location); 
#line 7803
extern cudaError_t __stdcall cudaMemPoolCreate(cudaMemPool_t * memPool, const cudaMemPoolProps * poolProps); 
#line 7825
extern cudaError_t __stdcall cudaMemPoolDestroy(cudaMemPool_t memPool); 
#line 7861
extern cudaError_t __stdcall cudaMallocFromPoolAsync(void ** ptr, size_t size, cudaMemPool_t memPool, cudaStream_t stream); 
#line 7886
extern cudaError_t __stdcall cudaMemPoolExportToShareableHandle(void * shareableHandle, cudaMemPool_t memPool, cudaMemAllocationHandleType handleType, unsigned flags); 
#line 7913
extern cudaError_t __stdcall cudaMemPoolImportFromShareableHandle(cudaMemPool_t * memPool, void * shareableHandle, cudaMemAllocationHandleType handleType, unsigned flags); 
#line 7936
extern cudaError_t __stdcall cudaMemPoolExportPointer(cudaMemPoolPtrExportData * exportData, void * ptr); 
#line 7965
extern cudaError_t __stdcall cudaMemPoolImportPointer(void ** ptr, cudaMemPool_t memPool, cudaMemPoolPtrExportData * exportData); 
#line 8117
extern cudaError_t __stdcall cudaPointerGetAttributes(cudaPointerAttributes * attributes, const void * ptr); 
#line 8158
extern cudaError_t __stdcall cudaDeviceCanAccessPeer(int * canAccessPeer, int device, int peerDevice); 
#line 8200
extern cudaError_t __stdcall cudaDeviceEnablePeerAccess(int peerDevice, unsigned flags); 
#line 8222
extern cudaError_t __stdcall cudaDeviceDisablePeerAccess(int peerDevice); 
#line 8286
extern cudaError_t __stdcall cudaGraphicsUnregisterResource(cudaGraphicsResource_t resource); 
#line 8321
extern cudaError_t __stdcall cudaGraphicsResourceSetMapFlags(cudaGraphicsResource_t resource, unsigned flags); 
#line 8360
extern cudaError_t __stdcall cudaGraphicsMapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 8395
extern cudaError_t __stdcall cudaGraphicsUnmapResources(int count, cudaGraphicsResource_t * resources, cudaStream_t stream = 0); 
#line 8427
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedPointer(void ** devPtr, size_t * size, cudaGraphicsResource_t resource); 
#line 8465
extern cudaError_t __stdcall cudaGraphicsSubResourceGetMappedArray(cudaArray_t * array, cudaGraphicsResource_t resource, unsigned arrayIndex, unsigned mipLevel); 
#line 8494
extern cudaError_t __stdcall cudaGraphicsResourceGetMappedMipmappedArray(cudaMipmappedArray_t * mipmappedArray, cudaGraphicsResource_t resource); 
#line 8565
__declspec(deprecated) extern cudaError_t __stdcall cudaBindTexture(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t size = 4294967295U); 
#line 8624
__declspec(deprecated) extern cudaError_t __stdcall cudaBindTexture2D(size_t * offset, const textureReference * texref, const void * devPtr, const cudaChannelFormatDesc * desc, size_t width, size_t height, size_t pitch); 
#line 8662
__declspec(deprecated) extern cudaError_t __stdcall cudaBindTextureToArray(const textureReference * texref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 8702
__declspec(deprecated) extern cudaError_t __stdcall cudaBindTextureToMipmappedArray(const textureReference * texref, cudaMipmappedArray_const_t mipmappedArray, const cudaChannelFormatDesc * desc); 
#line 8728
__declspec(deprecated) extern cudaError_t __stdcall cudaUnbindTexture(const textureReference * texref); 
#line 8757
__declspec(deprecated) extern cudaError_t __stdcall cudaGetTextureAlignmentOffset(size_t * offset, const textureReference * texref); 
#line 8787
__declspec(deprecated) extern cudaError_t __stdcall cudaGetTextureReference(const textureReference ** texref, const void * symbol); 
#line 8832
__declspec(deprecated) extern cudaError_t __stdcall cudaBindSurfaceToArray(const surfaceReference * surfref, cudaArray_const_t array, const cudaChannelFormatDesc * desc); 
#line 8857
__declspec(deprecated) extern cudaError_t __stdcall cudaGetSurfaceReference(const surfaceReference ** surfref, const void * symbol); 
#line 8892
extern cudaError_t __stdcall cudaGetChannelDesc(cudaChannelFormatDesc * desc, cudaArray_const_t array); 
#line 8922
extern cudaChannelFormatDesc __stdcall cudaCreateChannelDesc(int x, int y, int z, int w, cudaChannelFormatKind f); 
#line 9140
extern cudaError_t __stdcall cudaCreateTextureObject(cudaTextureObject_t * pTexObject, const cudaResourceDesc * pResDesc, const cudaTextureDesc * pTexDesc, const cudaResourceViewDesc * pResViewDesc); 
#line 9160
extern cudaError_t __stdcall cudaDestroyTextureObject(cudaTextureObject_t texObject); 
#line 9180
extern cudaError_t __stdcall cudaGetTextureObjectResourceDesc(cudaResourceDesc * pResDesc, cudaTextureObject_t texObject); 
#line 9200
extern cudaError_t __stdcall cudaGetTextureObjectTextureDesc(cudaTextureDesc * pTexDesc, cudaTextureObject_t texObject); 
#line 9221
extern cudaError_t __stdcall cudaGetTextureObjectResourceViewDesc(cudaResourceViewDesc * pResViewDesc, cudaTextureObject_t texObject); 
#line 9266
extern cudaError_t __stdcall cudaCreateSurfaceObject(cudaSurfaceObject_t * pSurfObject, const cudaResourceDesc * pResDesc); 
#line 9286
extern cudaError_t __stdcall cudaDestroySurfaceObject(cudaSurfaceObject_t surfObject); 
#line 9305
extern cudaError_t __stdcall cudaGetSurfaceObjectResourceDesc(cudaResourceDesc * pResDesc, cudaSurfaceObject_t surfObject); 
#line 9339
extern cudaError_t __stdcall cudaDriverGetVersion(int * driverVersion); 
#line 9364
extern cudaError_t __stdcall cudaRuntimeGetVersion(int * runtimeVersion); 
#line 9411
extern cudaError_t __stdcall cudaGraphCreate(cudaGraph_t * pGraph, unsigned flags); 
#line 9508
extern cudaError_t __stdcall cudaGraphAddKernelNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaKernelNodeParams * pNodeParams); 
#line 9541
extern cudaError_t __stdcall cudaGraphKernelNodeGetParams(cudaGraphNode_t node, cudaKernelNodeParams * pNodeParams); 
#line 9566
extern cudaError_t __stdcall cudaGraphKernelNodeSetParams(cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 9586
extern cudaError_t __stdcall cudaGraphKernelNodeCopyAttributes(cudaGraphNode_t hSrc, cudaGraphNode_t hDst); 
#line 9609
extern cudaError_t __stdcall cudaGraphKernelNodeGetAttribute(cudaGraphNode_t hNode, cudaKernelNodeAttrID attr, cudaKernelNodeAttrValue * value_out); 
#line 9633
extern cudaError_t __stdcall cudaGraphKernelNodeSetAttribute(cudaGraphNode_t hNode, cudaKernelNodeAttrID attr, const cudaKernelNodeAttrValue * value); 
#line 9683
extern cudaError_t __stdcall cudaGraphAddMemcpyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemcpy3DParms * pCopyParams); 
#line 9742
extern cudaError_t __stdcall cudaGraphAddMemcpyNodeToSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 9811 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemcpyNodeFromSymbol(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 9879 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemcpyNode1D(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 9911 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemcpyNodeGetParams(cudaGraphNode_t node, cudaMemcpy3DParms * pNodeParams); 
#line 9937
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParams(cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
#line 9976
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParamsToSymbol(cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 10022 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParamsFromSymbol(cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 10068 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemcpyNodeSetParams1D(cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 10115 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemsetNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaMemsetParams * pMemsetParams); 
#line 10138
extern cudaError_t __stdcall cudaGraphMemsetNodeGetParams(cudaGraphNode_t node, cudaMemsetParams * pNodeParams); 
#line 10161
extern cudaError_t __stdcall cudaGraphMemsetNodeSetParams(cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
#line 10202
extern cudaError_t __stdcall cudaGraphAddHostNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaHostNodeParams * pNodeParams); 
#line 10225
extern cudaError_t __stdcall cudaGraphHostNodeGetParams(cudaGraphNode_t node, cudaHostNodeParams * pNodeParams); 
#line 10248
extern cudaError_t __stdcall cudaGraphHostNodeSetParams(cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
#line 10288
extern cudaError_t __stdcall cudaGraphAddChildGraphNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaGraph_t childGraph); 
#line 10315
extern cudaError_t __stdcall cudaGraphChildGraphNodeGetGraph(cudaGraphNode_t node, cudaGraph_t * pGraph); 
#line 10352
extern cudaError_t __stdcall cudaGraphAddEmptyNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies); 
#line 10395
extern cudaError_t __stdcall cudaGraphAddEventRecordNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
#line 10422 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphEventRecordNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
#line 10449 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphEventRecordNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
#line 10495 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddEventWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaEvent_t event); 
#line 10522 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphEventWaitNodeGetEvent(cudaGraphNode_t node, cudaEvent_t * event_out); 
#line 10549 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphEventWaitNodeSetEvent(cudaGraphNode_t node, cudaEvent_t event); 
#line 10598 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddExternalSemaphoresSignalNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
#line 10631 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExternalSemaphoresSignalNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreSignalNodeParams * params_out); 
#line 10658 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExternalSemaphoresSignalNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
#line 10707 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddExternalSemaphoresWaitNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
#line 10740 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExternalSemaphoresWaitNodeGetParams(cudaGraphNode_t hNode, cudaExternalSemaphoreWaitNodeParams * params_out); 
#line 10767 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExternalSemaphoresWaitNodeSetParams(cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
#line 10844 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemAllocNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, cudaMemAllocNodeParams * nodeParams); 
#line 10871 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemAllocNodeGetParams(cudaGraphNode_t node, cudaMemAllocNodeParams * params_out); 
#line 10931 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphAddMemFreeNode(cudaGraphNode_t * pGraphNode, cudaGraph_t graph, const cudaGraphNode_t * pDependencies, size_t numDependencies, void * dptr); 
#line 10955 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphMemFreeNodeGetParams(cudaGraphNode_t node, void * dptr_out); 
#line 10983 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceGraphMemTrim(int device); 
#line 11020 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceGetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
#line 11054 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaDeviceSetGraphMemAttribute(int device, cudaGraphMemAttributeType attr, void * value); 
#line 11082 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphClone(cudaGraph_t * pGraphClone, cudaGraph_t originalGraph); 
#line 11110
extern cudaError_t __stdcall cudaGraphNodeFindInClone(cudaGraphNode_t * pNode, cudaGraphNode_t originalNode, cudaGraph_t clonedGraph); 
#line 11141
extern cudaError_t __stdcall cudaGraphNodeGetType(cudaGraphNode_t node, cudaGraphNodeType * pType); 
#line 11172
extern cudaError_t __stdcall cudaGraphGetNodes(cudaGraph_t graph, cudaGraphNode_t * nodes, size_t * numNodes); 
#line 11203
extern cudaError_t __stdcall cudaGraphGetRootNodes(cudaGraph_t graph, cudaGraphNode_t * pRootNodes, size_t * pNumRootNodes); 
#line 11237
extern cudaError_t __stdcall cudaGraphGetEdges(cudaGraph_t graph, cudaGraphNode_t * from, cudaGraphNode_t * to, size_t * numEdges); 
#line 11268
extern cudaError_t __stdcall cudaGraphNodeGetDependencies(cudaGraphNode_t node, cudaGraphNode_t * pDependencies, size_t * pNumDependencies); 
#line 11300
extern cudaError_t __stdcall cudaGraphNodeGetDependentNodes(cudaGraphNode_t node, cudaGraphNode_t * pDependentNodes, size_t * pNumDependentNodes); 
#line 11331
extern cudaError_t __stdcall cudaGraphAddDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
#line 11362
extern cudaError_t __stdcall cudaGraphRemoveDependencies(cudaGraph_t graph, const cudaGraphNode_t * from, const cudaGraphNode_t * to, size_t numDependencies); 
#line 11392
extern cudaError_t __stdcall cudaGraphDestroyNode(cudaGraphNode_t node); 
#line 11430
extern cudaError_t __stdcall cudaGraphInstantiate(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, cudaGraphNode_t * pErrorNode, char * pLogBuffer, size_t bufferSize); 
#line 11473
extern cudaError_t __stdcall cudaGraphInstantiateWithFlags(cudaGraphExec_t * pGraphExec, cudaGraph_t graph, unsigned __int64 flags); 
#line 11517 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecKernelNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaKernelNodeParams * pNodeParams); 
#line 11567
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemcpy3DParms * pNodeParams); 
#line 11622
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParamsToSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const void * symbol, const void * src, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 11685 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParamsFromSymbol(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * symbol, size_t count, size_t offset, cudaMemcpyKind kind); 
#line 11746 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecMemcpyNodeSetParams1D(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, void * dst, const void * src, size_t count, cudaMemcpyKind kind); 
#line 11800 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecMemsetNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaMemsetParams * pNodeParams); 
#line 11839
extern cudaError_t __stdcall cudaGraphExecHostNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, const cudaHostNodeParams * pNodeParams); 
#line 11885
extern cudaError_t __stdcall cudaGraphExecChildGraphNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t node, cudaGraph_t childGraph); 
#line 11929 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecEventRecordNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
#line 11973 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecEventWaitNodeSetEvent(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, cudaEvent_t event); 
#line 12020 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecExternalSemaphoresSignalNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreSignalNodeParams * nodeParams); 
#line 12067 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecExternalSemaphoresWaitNodeSetParams(cudaGraphExec_t hGraphExec, cudaGraphNode_t hNode, const cudaExternalSemaphoreWaitNodeParams * nodeParams); 
#line 12142 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphExecUpdate(cudaGraphExec_t hGraphExec, cudaGraph_t hGraph, cudaGraphNode_t * hErrorNode_out, cudaGraphExecUpdateResult * updateResult_out); 
#line 12167
extern cudaError_t __stdcall cudaGraphUpload(cudaGraphExec_t graphExec, cudaStream_t stream); 
#line 12198 "e:\\cuda\\include\\cuda_runtime_api.h"
extern cudaError_t __stdcall cudaGraphLaunch(cudaGraphExec_t graphExec, cudaStream_t stream); 
#line 12221
extern cudaError_t __stdcall cudaGraphExecDestroy(cudaGraphExec_t graphExec); 
#line 12242
extern cudaError_t __stdcall cudaGraphDestroy(cudaGraph_t graph); 
#line 12261
extern cudaError_t __stdcall cudaGraphDebugDotPrint(cudaGraph_t graph, const char * path, unsigned flags); 
#line 12297
extern cudaError_t __stdcall cudaUserObjectCreate(cudaUserObject_t * object_out, void * ptr, cudaHostFn_t destroy, unsigned initialRefcount, unsigned flags); 
#line 12321
extern cudaError_t __stdcall cudaUserObjectRetain(cudaUserObject_t object, unsigned count = 1); 
#line 12349
extern cudaError_t __stdcall cudaUserObjectRelease(cudaUserObject_t object, unsigned count = 1); 
#line 12377
extern cudaError_t __stdcall cudaGraphRetainUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1, unsigned flags = 0); 
#line 12402
extern cudaError_t __stdcall cudaGraphReleaseUserObject(cudaGraph_t graph, cudaUserObject_t object, unsigned count = 1); 
#line 12468
extern cudaError_t __stdcall cudaGetDriverEntryPoint(const char * symbol, void ** funcPtr, unsigned __int64 flags); 
#line 12473
extern cudaError_t __stdcall cudaGetExportTable(const void ** ppExportTable, const cudaUUID_t * pExportTableId); 
#line 12649
extern cudaError_t __cdecl cudaGetFuncBySymbol(cudaFunction_t * functionPtr, const void * symbolPtr); 
#line 12791 "e:\\cuda\\include\\cuda_runtime_api.h"
}
#line 104 "e:\\cuda\\include\\channel_descriptor.h"
template< class T> __inline ::cudaChannelFormatDesc cudaCreateChannelDesc() 
#line 105
{ 
#line 106
return cudaCreateChannelDesc(0, 0, 0, 0, cudaChannelFormatKindNone); 
#line 107
} 
#line 109
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf() 
#line 110
{ 
#line 111
int e = (((int)sizeof(unsigned short)) * 8); 
#line 113
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 114
} 
#line 116
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf1() 
#line 117
{ 
#line 118
int e = (((int)sizeof(unsigned short)) * 8); 
#line 120
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 121
} 
#line 123
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf2() 
#line 124
{ 
#line 125
int e = (((int)sizeof(unsigned short)) * 8); 
#line 127
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 128
} 
#line 130
static __inline cudaChannelFormatDesc cudaCreateChannelDescHalf4() 
#line 131
{ 
#line 132
int e = (((int)sizeof(unsigned short)) * 8); 
#line 134
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 135
} 
#line 137
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char> () 
#line 138
{ 
#line 139
int e = (((int)sizeof(char)) * 8); 
#line 144 "e:\\cuda\\include\\channel_descriptor.h"
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 146 "e:\\cuda\\include\\channel_descriptor.h"
} 
#line 148
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< signed char> () 
#line 149
{ 
#line 150
int e = (((int)sizeof(signed char)) * 8); 
#line 152
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 153
} 
#line 155
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned char> () 
#line 156
{ 
#line 157
int e = (((int)sizeof(unsigned char)) * 8); 
#line 159
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 160
} 
#line 162
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char1> () 
#line 163
{ 
#line 164
int e = (((int)sizeof(signed char)) * 8); 
#line 166
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 167
} 
#line 169
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar1> () 
#line 170
{ 
#line 171
int e = (((int)sizeof(unsigned char)) * 8); 
#line 173
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 174
} 
#line 176
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char2> () 
#line 177
{ 
#line 178
int e = (((int)sizeof(signed char)) * 8); 
#line 180
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 181
} 
#line 183
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar2> () 
#line 184
{ 
#line 185
int e = (((int)sizeof(unsigned char)) * 8); 
#line 187
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 188
} 
#line 190
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< char4> () 
#line 191
{ 
#line 192
int e = (((int)sizeof(signed char)) * 8); 
#line 194
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 195
} 
#line 197
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uchar4> () 
#line 198
{ 
#line 199
int e = (((int)sizeof(unsigned char)) * 8); 
#line 201
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 202
} 
#line 204
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short> () 
#line 205
{ 
#line 206
int e = (((int)sizeof(short)) * 8); 
#line 208
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 209
} 
#line 211
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned short> () 
#line 212
{ 
#line 213
int e = (((int)sizeof(unsigned short)) * 8); 
#line 215
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 216
} 
#line 218
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short1> () 
#line 219
{ 
#line 220
int e = (((int)sizeof(short)) * 8); 
#line 222
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 223
} 
#line 225
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort1> () 
#line 226
{ 
#line 227
int e = (((int)sizeof(unsigned short)) * 8); 
#line 229
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 230
} 
#line 232
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short2> () 
#line 233
{ 
#line 234
int e = (((int)sizeof(short)) * 8); 
#line 236
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 237
} 
#line 239
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort2> () 
#line 240
{ 
#line 241
int e = (((int)sizeof(unsigned short)) * 8); 
#line 243
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 244
} 
#line 246
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< short4> () 
#line 247
{ 
#line 248
int e = (((int)sizeof(short)) * 8); 
#line 250
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 251
} 
#line 253
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ushort4> () 
#line 254
{ 
#line 255
int e = (((int)sizeof(unsigned short)) * 8); 
#line 257
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 258
} 
#line 260
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int> () 
#line 261
{ 
#line 262
int e = (((int)sizeof(int)) * 8); 
#line 264
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 265
} 
#line 267
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned> () 
#line 268
{ 
#line 269
int e = (((int)sizeof(unsigned)) * 8); 
#line 271
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 272
} 
#line 274
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int1> () 
#line 275
{ 
#line 276
int e = (((int)sizeof(int)) * 8); 
#line 278
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 279
} 
#line 281
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint1> () 
#line 282
{ 
#line 283
int e = (((int)sizeof(unsigned)) * 8); 
#line 285
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 286
} 
#line 288
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int2> () 
#line 289
{ 
#line 290
int e = (((int)sizeof(int)) * 8); 
#line 292
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 293
} 
#line 295
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint2> () 
#line 296
{ 
#line 297
int e = (((int)sizeof(unsigned)) * 8); 
#line 299
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 300
} 
#line 302
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< int4> () 
#line 303
{ 
#line 304
int e = (((int)sizeof(int)) * 8); 
#line 306
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 307
} 
#line 309
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< uint4> () 
#line 310
{ 
#line 311
int e = (((int)sizeof(unsigned)) * 8); 
#line 313
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 314
} 
#line 318
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long> () 
#line 319
{ 
#line 320
int e = (((int)sizeof(long)) * 8); 
#line 322
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 323
} 
#line 325
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< unsigned long> () 
#line 326
{ 
#line 327
int e = (((int)sizeof(unsigned long)) * 8); 
#line 329
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 330
} 
#line 332
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long1> () 
#line 333
{ 
#line 334
int e = (((int)sizeof(long)) * 8); 
#line 336
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindSigned); 
#line 337
} 
#line 339
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong1> () 
#line 340
{ 
#line 341
int e = (((int)sizeof(unsigned long)) * 8); 
#line 343
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindUnsigned); 
#line 344
} 
#line 346
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long2> () 
#line 347
{ 
#line 348
int e = (((int)sizeof(long)) * 8); 
#line 350
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindSigned); 
#line 351
} 
#line 353
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong2> () 
#line 354
{ 
#line 355
int e = (((int)sizeof(unsigned long)) * 8); 
#line 357
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindUnsigned); 
#line 358
} 
#line 360
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< long4> () 
#line 361
{ 
#line 362
int e = (((int)sizeof(long)) * 8); 
#line 364
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindSigned); 
#line 365
} 
#line 367
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< ulong4> () 
#line 368
{ 
#line 369
int e = (((int)sizeof(unsigned long)) * 8); 
#line 371
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindUnsigned); 
#line 372
} 
#line 376 "e:\\cuda\\include\\channel_descriptor.h"
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float> () 
#line 377
{ 
#line 378
int e = (((int)sizeof(float)) * 8); 
#line 380
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 381
} 
#line 383
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float1> () 
#line 384
{ 
#line 385
int e = (((int)sizeof(float)) * 8); 
#line 387
return cudaCreateChannelDesc(e, 0, 0, 0, cudaChannelFormatKindFloat); 
#line 388
} 
#line 390
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float2> () 
#line 391
{ 
#line 392
int e = (((int)sizeof(float)) * 8); 
#line 394
return cudaCreateChannelDesc(e, e, 0, 0, cudaChannelFormatKindFloat); 
#line 395
} 
#line 397
template<> __inline cudaChannelFormatDesc cudaCreateChannelDesc< float4> () 
#line 398
{ 
#line 399
int e = (((int)sizeof(float)) * 8); 
#line 401
return cudaCreateChannelDesc(e, e, e, e, cudaChannelFormatKindFloat); 
#line 402
} 
#line 404
static __inline cudaChannelFormatDesc cudaCreateChannelDescNV12() 
#line 405
{ 
#line 406
int e = (((int)sizeof(char)) * 8); 
#line 408
return cudaCreateChannelDesc(e, e, e, 0, cudaChannelFormatKindNV12); 
#line 409
} 
#line 79 "e:\\cuda\\include\\driver_functions.h"
static __inline cudaPitchedPtr make_cudaPitchedPtr(void *d, size_t p, size_t xsz, size_t ysz) 
#line 80
{ 
#line 81
cudaPitchedPtr s; 
#line 83
(s.ptr) = d; 
#line 84
(s.pitch) = p; 
#line 85
(s.xsize) = xsz; 
#line 86
(s.ysize) = ysz; 
#line 88
return s; 
#line 89
} 
#line 106
static __inline cudaPos make_cudaPos(size_t x, size_t y, size_t z) 
#line 107
{ 
#line 108
cudaPos p; 
#line 110
(p.x) = x; 
#line 111
(p.y) = y; 
#line 112
(p.z) = z; 
#line 114
return p; 
#line 115
} 
#line 132
static __inline cudaExtent make_cudaExtent(size_t w, size_t h, size_t d) 
#line 133
{ 
#line 134
cudaExtent e; 
#line 136
(e.width) = w; 
#line 137
(e.height) = h; 
#line 138
(e.depth) = d; 
#line 140
return e; 
#line 141
} 
#line 73 "e:\\cuda\\include\\vector_functions.h"
static __inline char1 make_char1(signed char x); 
#line 75
static __inline uchar1 make_uchar1(unsigned char x); 
#line 77
static __inline char2 make_char2(signed char x, signed char y); 
#line 79
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y); 
#line 81
static __inline char3 make_char3(signed char x, signed char y, signed char z); 
#line 83
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z); 
#line 85
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w); 
#line 87
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w); 
#line 89
static __inline short1 make_short1(short x); 
#line 91
static __inline ushort1 make_ushort1(unsigned short x); 
#line 93
static __inline short2 make_short2(short x, short y); 
#line 95
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y); 
#line 97
static __inline short3 make_short3(short x, short y, short z); 
#line 99
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z); 
#line 101
static __inline short4 make_short4(short x, short y, short z, short w); 
#line 103
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w); 
#line 105
static __inline int1 make_int1(int x); 
#line 107
static __inline uint1 make_uint1(unsigned x); 
#line 109
static __inline int2 make_int2(int x, int y); 
#line 111
static __inline uint2 make_uint2(unsigned x, unsigned y); 
#line 113
static __inline int3 make_int3(int x, int y, int z); 
#line 115
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z); 
#line 117
static __inline int4 make_int4(int x, int y, int z, int w); 
#line 119
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w); 
#line 121
static __inline long1 make_long1(long x); 
#line 123
static __inline ulong1 make_ulong1(unsigned long x); 
#line 125
static __inline long2 make_long2(long x, long y); 
#line 127
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y); 
#line 129
static __inline long3 make_long3(long x, long y, long z); 
#line 131
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z); 
#line 133
static __inline long4 make_long4(long x, long y, long z, long w); 
#line 135
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w); 
#line 137
static __inline float1 make_float1(float x); 
#line 139
static __inline float2 make_float2(float x, float y); 
#line 141
static __inline float3 make_float3(float x, float y, float z); 
#line 143
static __inline float4 make_float4(float x, float y, float z, float w); 
#line 145
static __inline longlong1 make_longlong1(__int64 x); 
#line 147
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x); 
#line 149
static __inline longlong2 make_longlong2(__int64 x, __int64 y); 
#line 151
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y); 
#line 153
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z); 
#line 155
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z); 
#line 157
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w); 
#line 159
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w); 
#line 161
static __inline double1 make_double1(double x); 
#line 163
static __inline double2 make_double2(double x, double y); 
#line 165
static __inline double3 make_double3(double x, double y, double z); 
#line 167
static __inline double4 make_double4(double x, double y, double z, double w); 
#line 73 "e:\\cuda\\include\\vector_functions.hpp"
static __inline char1 make_char1(signed char x) 
#line 74
{ 
#line 75
char1 t; (t.x) = x; return t; 
#line 76
} 
#line 78
static __inline uchar1 make_uchar1(unsigned char x) 
#line 79
{ 
#line 80
uchar1 t; (t.x) = x; return t; 
#line 81
} 
#line 83
static __inline char2 make_char2(signed char x, signed char y) 
#line 84
{ 
#line 85
char2 t; (t.x) = x; (t.y) = y; return t; 
#line 86
} 
#line 88
static __inline uchar2 make_uchar2(unsigned char x, unsigned char y) 
#line 89
{ 
#line 90
uchar2 t; (t.x) = x; (t.y) = y; return t; 
#line 91
} 
#line 93
static __inline char3 make_char3(signed char x, signed char y, signed char z) 
#line 94
{ 
#line 95
char3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 96
} 
#line 98
static __inline uchar3 make_uchar3(unsigned char x, unsigned char y, unsigned char z) 
#line 99
{ 
#line 100
uchar3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 101
} 
#line 103
static __inline char4 make_char4(signed char x, signed char y, signed char z, signed char w) 
#line 104
{ 
#line 105
char4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 106
} 
#line 108
static __inline uchar4 make_uchar4(unsigned char x, unsigned char y, unsigned char z, unsigned char w) 
#line 109
{ 
#line 110
uchar4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 111
} 
#line 113
static __inline short1 make_short1(short x) 
#line 114
{ 
#line 115
short1 t; (t.x) = x; return t; 
#line 116
} 
#line 118
static __inline ushort1 make_ushort1(unsigned short x) 
#line 119
{ 
#line 120
ushort1 t; (t.x) = x; return t; 
#line 121
} 
#line 123
static __inline short2 make_short2(short x, short y) 
#line 124
{ 
#line 125
short2 t; (t.x) = x; (t.y) = y; return t; 
#line 126
} 
#line 128
static __inline ushort2 make_ushort2(unsigned short x, unsigned short y) 
#line 129
{ 
#line 130
ushort2 t; (t.x) = x; (t.y) = y; return t; 
#line 131
} 
#line 133
static __inline short3 make_short3(short x, short y, short z) 
#line 134
{ 
#line 135
short3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 136
} 
#line 138
static __inline ushort3 make_ushort3(unsigned short x, unsigned short y, unsigned short z) 
#line 139
{ 
#line 140
ushort3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 141
} 
#line 143
static __inline short4 make_short4(short x, short y, short z, short w) 
#line 144
{ 
#line 145
short4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 146
} 
#line 148
static __inline ushort4 make_ushort4(unsigned short x, unsigned short y, unsigned short z, unsigned short w) 
#line 149
{ 
#line 150
ushort4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 151
} 
#line 153
static __inline int1 make_int1(int x) 
#line 154
{ 
#line 155
int1 t; (t.x) = x; return t; 
#line 156
} 
#line 158
static __inline uint1 make_uint1(unsigned x) 
#line 159
{ 
#line 160
uint1 t; (t.x) = x; return t; 
#line 161
} 
#line 163
static __inline int2 make_int2(int x, int y) 
#line 164
{ 
#line 165
int2 t; (t.x) = x; (t.y) = y; return t; 
#line 166
} 
#line 168
static __inline uint2 make_uint2(unsigned x, unsigned y) 
#line 169
{ 
#line 170
uint2 t; (t.x) = x; (t.y) = y; return t; 
#line 171
} 
#line 173
static __inline int3 make_int3(int x, int y, int z) 
#line 174
{ 
#line 175
int3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 176
} 
#line 178
static __inline uint3 make_uint3(unsigned x, unsigned y, unsigned z) 
#line 179
{ 
#line 180
uint3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 181
} 
#line 183
static __inline int4 make_int4(int x, int y, int z, int w) 
#line 184
{ 
#line 185
int4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 186
} 
#line 188
static __inline uint4 make_uint4(unsigned x, unsigned y, unsigned z, unsigned w) 
#line 189
{ 
#line 190
uint4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 191
} 
#line 193
static __inline long1 make_long1(long x) 
#line 194
{ 
#line 195
long1 t; (t.x) = x; return t; 
#line 196
} 
#line 198
static __inline ulong1 make_ulong1(unsigned long x) 
#line 199
{ 
#line 200
ulong1 t; (t.x) = x; return t; 
#line 201
} 
#line 203
static __inline long2 make_long2(long x, long y) 
#line 204
{ 
#line 205
long2 t; (t.x) = x; (t.y) = y; return t; 
#line 206
} 
#line 208
static __inline ulong2 make_ulong2(unsigned long x, unsigned long y) 
#line 209
{ 
#line 210
ulong2 t; (t.x) = x; (t.y) = y; return t; 
#line 211
} 
#line 213
static __inline long3 make_long3(long x, long y, long z) 
#line 214
{ 
#line 215
long3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 216
} 
#line 218
static __inline ulong3 make_ulong3(unsigned long x, unsigned long y, unsigned long z) 
#line 219
{ 
#line 220
ulong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 221
} 
#line 223
static __inline long4 make_long4(long x, long y, long z, long w) 
#line 224
{ 
#line 225
long4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 226
} 
#line 228
static __inline ulong4 make_ulong4(unsigned long x, unsigned long y, unsigned long z, unsigned long w) 
#line 229
{ 
#line 230
ulong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 231
} 
#line 233
static __inline float1 make_float1(float x) 
#line 234
{ 
#line 235
float1 t; (t.x) = x; return t; 
#line 236
} 
#line 238
static __inline float2 make_float2(float x, float y) 
#line 239
{ 
#line 240
float2 t; (t.x) = x; (t.y) = y; return t; 
#line 241
} 
#line 243
static __inline float3 make_float3(float x, float y, float z) 
#line 244
{ 
#line 245
float3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 246
} 
#line 248
static __inline float4 make_float4(float x, float y, float z, float w) 
#line 249
{ 
#line 250
float4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 251
} 
#line 253
static __inline longlong1 make_longlong1(__int64 x) 
#line 254
{ 
#line 255
longlong1 t; (t.x) = x; return t; 
#line 256
} 
#line 258
static __inline ulonglong1 make_ulonglong1(unsigned __int64 x) 
#line 259
{ 
#line 260
ulonglong1 t; (t.x) = x; return t; 
#line 261
} 
#line 263
static __inline longlong2 make_longlong2(__int64 x, __int64 y) 
#line 264
{ 
#line 265
longlong2 t; (t.x) = x; (t.y) = y; return t; 
#line 266
} 
#line 268
static __inline ulonglong2 make_ulonglong2(unsigned __int64 x, unsigned __int64 y) 
#line 269
{ 
#line 270
ulonglong2 t; (t.x) = x; (t.y) = y; return t; 
#line 271
} 
#line 273
static __inline longlong3 make_longlong3(__int64 x, __int64 y, __int64 z) 
#line 274
{ 
#line 275
longlong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 276
} 
#line 278
static __inline ulonglong3 make_ulonglong3(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z) 
#line 279
{ 
#line 280
ulonglong3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 281
} 
#line 283
static __inline longlong4 make_longlong4(__int64 x, __int64 y, __int64 z, __int64 w) 
#line 284
{ 
#line 285
longlong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 286
} 
#line 288
static __inline ulonglong4 make_ulonglong4(unsigned __int64 x, unsigned __int64 y, unsigned __int64 z, unsigned __int64 w) 
#line 289
{ 
#line 290
ulonglong4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 291
} 
#line 293
static __inline double1 make_double1(double x) 
#line 294
{ 
#line 295
double1 t; (t.x) = x; return t; 
#line 296
} 
#line 298
static __inline double2 make_double2(double x, double y) 
#line 299
{ 
#line 300
double2 t; (t.x) = x; (t.y) = y; return t; 
#line 301
} 
#line 303
static __inline double3 make_double3(double x, double y, double z) 
#line 304
{ 
#line 305
double3 t; (t.x) = x; (t.y) = y; (t.z) = z; return t; 
#line 306
} 
#line 308
static __inline double4 make_double4(double x, double y, double z, double w) 
#line 309
{ 
#line 310
double4 t; (t.x) = x; (t.y) = y; (t.z) = z; (t.w) = w; return t; 
#line 311
} 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\errno.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
int *__cdecl _errno(); 
#line 22
errno_t __cdecl _set_errno(int _Value); 
#line 23
errno_t __cdecl _get_errno(int * _Value); 
#line 25
unsigned long *__cdecl __doserrno(); 
#line 28
errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 29
errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\errno.h"
}__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
const void *__cdecl memchr(const void * _Buf, int _Val, size_t _MaxCount); 
#line 26
int __cdecl memcmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 40 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
void *__cdecl memcpy(void * _Dst, const void * _Src, size_t _Size); 
#line 47
void *__cdecl memmove(void * _Dst, const void * _Src, size_t _Size); 
#line 60 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_string.h"
void *__cdecl memset(void * _Dst, int _Val, size_t _Size); 
#line 67
const char *__cdecl strchr(const char * _Str, int _Val); 
#line 73
const char *__cdecl strrchr(const char * _Str, int _Ch); 
#line 79
const char *__cdecl strstr(const char * _Str, const char * _SubStr); 
#line 86
const __wchar_t *__cdecl wcschr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 92
const __wchar_t *__cdecl wcsrchr(const __wchar_t * _Str, __wchar_t _Ch); 
#line 99
const __wchar_t *__cdecl wcsstr(const __wchar_t * _Str, const __wchar_t * _SubStr); 
#line 106
}__pragma( pack ( pop )) 
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 35 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
static __inline errno_t __cdecl memcpy_s(void *const 
#line 36
_Destination, const rsize_t 
#line 37
_DestinationSize, const void *const 
#line 38
_Source, const rsize_t 
#line 39
_SourceSize) 
#line 41
{ 
#line 42
if (_SourceSize == (0)) 
#line 43
{ 
#line 44
return 0; 
#line 45
}  
#line 47
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 48
if ((_Source == (0)) || (_DestinationSize < _SourceSize)) 
#line 49
{ 
#line 50
memset(_Destination, 0, _DestinationSize); 
#line 52
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 53
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 56
return 22; 
#line 57
}  
#pragma warning(suppress:4996)
memcpy(_Destination, _Source, _SourceSize); 
#line 60
return 0; 
#line 61
} 
#line 64
static __inline errno_t __cdecl memmove_s(void *const 
#line 65
_Destination, const rsize_t 
#line 66
_DestinationSize, const void *const 
#line 67
_Source, const rsize_t 
#line 68
_SourceSize) 
#line 70
{ 
#line 71
if (_SourceSize == (0)) 
#line 72
{ 
#line 73
return 0; 
#line 74
}  
#line 76
{ int _Expr_val = !(!(_Destination != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 77
{ int _Expr_val = !(!(_Source != (0))); if (!_Expr_val) { (*_errno()) = 22; _invalid_parameter_noinfo(); return 22; }  } ; 
#line 78
{ int _Expr_val = !(!(_DestinationSize >= _SourceSize)); if (!_Expr_val) { (*_errno()) = 34; _invalid_parameter_noinfo(); return 34; }  } ; 
#line 80
#pragma warning(suppress:4996)
memmove(_Destination, _Source, _SourceSize); 
#line 82
return 0; 
#line 83
} 
#line 89 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_memcpy_s.h"
}__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
int __cdecl _memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 31
int __cdecl _memicmp_l(const void * _Buf1, const void * _Buf2, size_t _Size, _locale_t _Locale); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
void *__cdecl memccpy(void * _Dst, const void * _Src, int _Val, size_t _Size); 
#line 87
int __cdecl memicmp(const void * _Buf1, const void * _Buf2, size_t _Size); 
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
extern "C++" inline void *__cdecl memchr(void *
#line 101
_Pv, int 
#line 102
_C, size_t 
#line 103
_N) 
#line 105
{ 
#line 106
const void *const _Pvc = _Pv; 
#line 107
return const_cast< void *>(memchr(_Pvc, _C, _N)); 
#line 108
} 
#line 114 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_memory.h"
}__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
errno_t __cdecl wcscat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 35
errno_t __cdecl wcscpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source); 
#line 42
errno_t __cdecl wcsncat_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 50
errno_t __cdecl wcsncpy_s(__wchar_t * _Destination, rsize_t _SizeInWords, const __wchar_t * _Source, rsize_t _MaxCount); 
#line 58
__wchar_t *__cdecl wcstok_s(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 79 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__declspec(allocator) __wchar_t *__cdecl _wcsdup(const __wchar_t * _String); 
#line 89 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl wcscat_s(__wchar_t (&_Destination)[_Size], const __wchar_t *_Source) throw() { return wcscat_s(_Destination, _Size, _Source); } }
#line 97 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__wchar_t *__cdecl wcscat(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 105 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcscmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 114
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl wcscpy_s(__wchar_t (&_Destination)[_Size], const __wchar_t *_Source) throw() { return wcscpy_s(_Destination, _Size, _Source); } }
#line 120 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__wchar_t *__cdecl wcscpy(__wchar_t * _Destination, const __wchar_t * _Source); 
#line 128 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 131
size_t __cdecl wcscspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 137
size_t __cdecl wcslen(const __wchar_t * _String); 
#line 150 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcsnlen(const __wchar_t * _Source, size_t _MaxCount); 
#line 166 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
static __inline size_t __cdecl wcsnlen_s(const __wchar_t *
#line 167
_Source, size_t 
#line 168
_MaxCount) 
#line 170
{ 
#line 171
return (_Source == (0)) ? 0 : wcsnlen(_Source, _MaxCount); 
#line 172
} 
#line 176 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl wcsncat_s(__wchar_t (&_Destination)[_Size], const __wchar_t *_Source, ::size_t _Count) throw() { return wcsncat_s(_Destination, _Size, _Source, _Count); } }
#line 183 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsncat(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 192 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcsncmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 198
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl wcsncpy_s(__wchar_t (&_Destination)[_Size], const __wchar_t *_Source, ::size_t _Count) throw() { return wcsncpy_s(_Destination, _Size, _Source, _Count); } }
#line 205 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsncpy(__wchar_t * _Destination, const __wchar_t * _Source, size_t _Count); 
#line 214 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
const __wchar_t *__cdecl wcspbrk(const __wchar_t * _String, const __wchar_t * _Control); 
#line 220
size_t __cdecl wcsspn(const __wchar_t * _String, const __wchar_t * _Control); 
#line 226
__wchar_t *__cdecl wcstok(__wchar_t * _String, const __wchar_t * _Delimiter, __wchar_t ** _Context); 
#line 243 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(push)
#pragma warning(disable: 4141 4996)
#pragma warning(disable: 28719 28726 28727)
#line 247
static __inline __wchar_t *__cdecl _wcstok(__wchar_t *const 
#line 248
_String, const __wchar_t *const 
#line 249
_Delimiter) 
#line 251
{ 
#line 252
return wcstok(_String, _Delimiter, 0); 
#line 253
} 
#line 261 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
extern "C++" 
#line 260
__declspec(deprecated("wcstok has been changed to conform with the ISO C standard, adding an extra context parameter. To use the legacy Microsoft wcsto" "k, define _CRT_NON_CONFORMING_WCSTOK.")) inline __wchar_t *__cdecl 
#line 261
wcstok(__wchar_t *
#line 262
_String, const __wchar_t *
#line 263
_Delimiter) throw() 
#line 265
{ 
#line 266
return wcstok(_String, _Delimiter, 0); 
#line 267
} 
#line 270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
#pragma warning(pop)
#line 278 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcserror(int _ErrorNumber); 
#line 283
errno_t __cdecl _wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, int _ErrorNumber); 
#line 289
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wcserror_s(__wchar_t (&_Buffer)[_Size], int _Error) throw() { return _wcserror_s(_Buffer, _Size, _Error); } }
#line 298 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl __wcserror(const __wchar_t * _String); 
#line 302
errno_t __cdecl __wcserror_s(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _ErrorMessage); 
#line 308
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl __wcserror_s(__wchar_t (&_Buffer)[_Size], const __wchar_t *_ErrorMessage) throw() { return __wcserror_s(_Buffer, _Size, _ErrorMessage); } }
#line 314 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl _wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 319
int __cdecl _wcsicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 325
int __cdecl _wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 331
int __cdecl _wcsnicmp_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 338
errno_t __cdecl _wcsnset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value, size_t _MaxCount); 
#line 345
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wcsnset_s(__wchar_t (&_Destination)[_Size], __wchar_t _Value, ::size_t _MaxCount) throw() { return _wcsnset_s(_Destination, _Size, _Value, _MaxCount); } }
#line 352 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 360 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsrev(__wchar_t * _String); 
#line 364
errno_t __cdecl _wcsset_s(__wchar_t * _Destination, size_t _SizeInWords, __wchar_t _Value); 
#line 370
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wcsset_s(__wchar_t (&_String)[_Size], __wchar_t _Value) throw() { return _wcsset_s(_String, _Size, _Value); } }
#line 376 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 383 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcslwr_s(__wchar_t * _String, size_t _SizeInWords); 
#line 388
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wcslwr_s(__wchar_t (&_String)[_Size]) throw() { return _wcslwr_s(_String, _Size); } }
#line 393 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcslwr(__wchar_t * _String); 
#line 399 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcslwr_s_l(__wchar_t * _String, size_t _SizeInWords, _locale_t _Locale); 
#line 405
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wcslwr_s_l(__wchar_t (&_String)[_Size], ::_locale_t _Locale) throw() { return _wcslwr_s_l(_String, _Size, _Locale); } }
#line 411 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcslwr_l(__wchar_t * _String, _locale_t _Locale); 
#line 419 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcsupr_s(__wchar_t * _String, size_t _Size); 
#line 424
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wcsupr_s(__wchar_t (&_String)[_Size]) throw() { return _wcsupr_s(_String, _Size); } }
#line 429 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsupr(__wchar_t * _String); 
#line 435 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
errno_t __cdecl _wcsupr_s_l(__wchar_t * _String, size_t _Size, _locale_t _Locale); 
#line 441
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wcsupr_s_l(__wchar_t (&_String)[_Size], ::_locale_t _Locale) throw() { return _wcsupr_s_l(_String, _Size, _Locale); } }
#line 447 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl _wcsupr_l(__wchar_t * _String, _locale_t _Locale); 
#line 456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
size_t __cdecl wcsxfrm(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount); 
#line 464
size_t __cdecl _wcsxfrm_l(__wchar_t * _Destination, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 472
int __cdecl wcscoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 478
int __cdecl _wcscoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 485
int __cdecl _wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 491
int __cdecl _wcsicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, _locale_t _Locale); 
#line 498
int __cdecl _wcsncoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 505
int __cdecl _wcsncoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 513
int __cdecl _wcsnicoll(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 520
int __cdecl _wcsnicoll_l(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 535
extern "C++" {
#line 539
inline __wchar_t *__cdecl wcschr(__wchar_t *_String, __wchar_t _C) 
#line 540
{ 
#line 541
return const_cast< __wchar_t *>(wcschr(static_cast< const __wchar_t *>(_String), _C)); 
#line 542
} 
#line 545
inline __wchar_t *__cdecl wcspbrk(__wchar_t *_String, const __wchar_t *_Control) 
#line 546
{ 
#line 547
return const_cast< __wchar_t *>(wcspbrk(static_cast< const __wchar_t *>(_String), _Control)); 
#line 548
} 
#line 551
inline __wchar_t *__cdecl wcsrchr(__wchar_t *_String, __wchar_t _C) 
#line 552
{ 
#line 553
return const_cast< __wchar_t *>(wcsrchr(static_cast< const __wchar_t *>(_String), _C)); 
#line 554
} 
#line 558
inline __wchar_t *__cdecl wcsstr(__wchar_t *_String, const __wchar_t *_SubStr) 
#line 559
{ 
#line 560
return const_cast< __wchar_t *>(wcsstr(static_cast< const __wchar_t *>(_String), _SubStr)); 
#line 561
} 
#line 563
}
#line 580 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
__wchar_t *__cdecl wcsdup(const __wchar_t * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
int __cdecl wcsicmp(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 598
int __cdecl wcsnicmp(const __wchar_t * _String1, const __wchar_t * _String2, size_t _MaxCount); 
#line 606
__wchar_t *__cdecl wcsnset(__wchar_t * _String, __wchar_t _Value, size_t _MaxCount); 
#line 614
__wchar_t *__cdecl wcsrev(__wchar_t * _String); 
#line 620
__wchar_t *__cdecl wcsset(__wchar_t * _String, __wchar_t _Value); 
#line 627
__wchar_t *__cdecl wcslwr(__wchar_t * _String); 
#line 633
__wchar_t *__cdecl wcsupr(__wchar_t * _String); 
#line 638
int __cdecl wcsicoll(const __wchar_t * _String1, const __wchar_t * _String2); 
#line 647 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstring.h"
}__pragma( pack ( pop )) 
#line 19 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
errno_t __cdecl strcpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 35
errno_t __cdecl strcat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source); 
#line 42
errno_t __cdecl strerror_s(char * _Buffer, size_t _SizeInBytes, int _ErrorNumber); 
#line 48
errno_t __cdecl strncat_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 56
errno_t __cdecl strncpy_s(char * _Destination, rsize_t _SizeInBytes, const char * _Source, rsize_t _MaxCount); 
#line 64
char *__cdecl strtok_s(char * _String, const char * _Delimiter, char ** _Context); 
#line 72 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
void *__cdecl _memccpy(void * _Dst, const void * _Src, int _Val, size_t _MaxCount); 
#line 79
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl strcat_s(char (&_Destination)[_Size], const char *_Source) throw() { return strcat_s(_Destination, _Size, _Source); } }
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcat(char * _Destination, const char * _Source); 
#line 95 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(pop)
#line 100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl strcmp(const char * _Str1, const char * _Str2); 
#line 106
int __cdecl _strcmpi(const char * _String1, const char * _String2); 
#line 112
int __cdecl strcoll(const char * _String1, const char * _String2); 
#line 118
int __cdecl _strcoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 124
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl strcpy_s(char (&_Destination)[_Size], const char *_Source) throw() { return strcpy_s(_Destination, _Size, _Source); } }
#line 130 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl strcpy(char * _Destination, const char * _Source); 
#line 138 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
#pragma warning(pop)
#line 141
size_t __cdecl strcspn(const char * _Str, const char * _Control); 
#line 152 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
__declspec(allocator) char *__cdecl _strdup(const char * _Source); 
#line 163 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strerror(const char * _ErrorMessage); 
#line 168
errno_t __cdecl _strerror_s(char * _Buffer, size_t _SizeInBytes, const char * _ErrorMessage); 
#line 174
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strerror_s(char (&_Buffer)[_Size], const char *_ErrorMessage) throw() { return _strerror_s(_Buffer, _Size, _ErrorMessage); } }
#line 182 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strerror(int _ErrorMessage); 
#line 186
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl strerror_s(char (&_Buffer)[_Size], int _ErrorMessage) throw() { return strerror_s(_Buffer, _Size, _ErrorMessage); } }
#line 193 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl _stricmp(const char * _String1, const char * _String2); 
#line 199
int __cdecl _stricoll(const char * _String1, const char * _String2); 
#line 205
int __cdecl _stricoll_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 212
int __cdecl _stricmp_l(const char * _String1, const char * _String2, _locale_t _Locale); 
#line 219
size_t __cdecl strlen(const char * _Str); 
#line 224
errno_t __cdecl _strlwr_s(char * _String, size_t _Size); 
#line 229
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strlwr_s(char (&_String)[_Size]) throw() { return _strlwr_s(_String, _Size); } }
#line 234 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strlwr(char * _String); 
#line 240 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strlwr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 246
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strlwr_s_l(char (&_String)[_Size], ::_locale_t _Locale) throw() { return _strlwr_s_l(_String, _Size, _Locale); } }
#line 252 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strlwr_l(char * _String, _locale_t _Locale); 
#line 259 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl strncat_s(char (&_Destination)[_Size], const char *_Source, ::size_t _Count) throw() { return strncat_s(_Destination, _Size, _Source, _Count); } }
#line 266 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strncat(char * _Destination, const char * _Source, size_t _Count); 
#line 275 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
int __cdecl strncmp(const char * _Str1, const char * _Str2, size_t _MaxCount); 
#line 282
int __cdecl _strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 289
int __cdecl _strnicmp_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 297
int __cdecl _strnicoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 304
int __cdecl _strnicoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 312
int __cdecl _strncoll(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 319
int __cdecl _strncoll_l(const char * _String1, const char * _String2, size_t _MaxCount, _locale_t _Locale); 
#line 326
size_t __cdecl __strncnt(const char * _String, size_t _Count); 
#line 331
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl strncpy_s(char (&_Destination)[_Size], const char *_Source, ::size_t _Count) throw() { return strncpy_s(_Destination, _Size, _Source, _Count); } }
#line 338 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strncpy(char * _Destination, const char * _Source, size_t _Count); 
#line 355 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strnlen(const char * _String, size_t _MaxCount); 
#line 371 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
static __inline size_t __cdecl strnlen_s(const char *
#line 372
_String, size_t 
#line 373
_MaxCount) 
#line 375
{ 
#line 376
return (_String == (0)) ? 0 : strnlen(_String, _MaxCount); 
#line 377
} 
#line 382 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strnset_s(char * _String, size_t _SizeInBytes, int _Value, size_t _MaxCount); 
#line 389
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strnset_s(char (&_Destination)[_Size], int _Value, ::size_t _Count) throw() { return _strnset_s(_Destination, _Size, _Value, _Count); } }
#line 396 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strnset(char * _Destination, int _Value, size_t _Count); 
#line 405 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
const char *__cdecl strpbrk(const char * _Str, const char * _Control); 
#line 410
char *__cdecl _strrev(char * _Str); 
#line 415
errno_t __cdecl _strset_s(char * _Destination, size_t _DestinationSize, int _Value); 
#line 421
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strset_s(char (&_Destination)[_Size], int _Value) throw() { return _strset_s(_Destination, _Size, _Value); } }
#line 427 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strset(char * _Destination, int _Value); 
#line 434 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strspn(const char * _Str, const char * _Control); 
#line 440
char *__cdecl strtok(char * _String, const char * _Delimiter); 
#line 446
errno_t __cdecl _strupr_s(char * _String, size_t _Size); 
#line 451
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strupr_s(char (&_String)[_Size]) throw() { return _strupr_s(_String, _Size); } }
#line 456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strupr(char * _String); 
#line 462 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
errno_t __cdecl _strupr_s_l(char * _String, size_t _Size, _locale_t _Locale); 
#line 468
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strupr_s_l(char (&_String)[_Size], ::_locale_t _Locale) throw() { return _strupr_s_l(_String, _Size, _Locale); } }
#line 474 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl _strupr_l(char * _String, _locale_t _Locale); 
#line 483 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
size_t __cdecl strxfrm(char * _Destination, const char * _Source, size_t _MaxCount); 
#line 491
size_t __cdecl _strxfrm_l(char * _Destination, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 501
extern "C++" {
#line 504
inline char *__cdecl strchr(char *const _String, const int _Ch) 
#line 505
{ 
#line 506
return const_cast< char *>(strchr(static_cast< const char *>(_String), _Ch)); 
#line 507
} 
#line 510
inline char *__cdecl strpbrk(char *const _String, const char *const _Control) 
#line 511
{ 
#line 512
return const_cast< char *>(strpbrk(static_cast< const char *>(_String), _Control)); 
#line 513
} 
#line 516
inline char *__cdecl strrchr(char *const _String, const int _Ch) 
#line 517
{ 
#line 518
return const_cast< char *>(strrchr(static_cast< const char *>(_String), _Ch)); 
#line 519
} 
#line 522
inline char *__cdecl strstr(char *const _String, const char *const _SubString) 
#line 523
{ 
#line 524
return const_cast< char *>(strstr(static_cast< const char *>(_String), _SubString)); 
#line 525
} 
#line 526
}
#line 536 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
char *__cdecl strdup(const char * _String); 
#line 543
int __cdecl strcmpi(const char * _String1, const char * _String2); 
#line 549
int __cdecl stricmp(const char * _String1, const char * _String2); 
#line 555
char *__cdecl strlwr(char * _String); 
#line 560
int __cdecl strnicmp(const char * _String1, const char * _String2, size_t _MaxCount); 
#line 567
char *__cdecl strnset(char * _String, int _Value, size_t _MaxCount); 
#line 574
char *__cdecl strrev(char * _String); 
#line 579
char *__cdecl strset(char * _String, int _Value); 
#line 584
char *__cdecl strupr(char * _String); 
#line 592 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\string.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 22
struct tm { 
#line 24
int tm_sec; 
#line 25
int tm_min; 
#line 26
int tm_hour; 
#line 27
int tm_mday; 
#line 28
int tm_mon; 
#line 29
int tm_year; 
#line 30
int tm_wday; 
#line 31
int tm_yday; 
#line 32
int tm_isdst; 
#line 33
}; 
#line 44
__wchar_t *__cdecl _wasctime(const tm * _Tm); 
#line 50
errno_t __cdecl _wasctime_s(__wchar_t * _Buffer, size_t _SizeInWords, const tm * _Tm); 
#line 56
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wasctime_s(__wchar_t (&_Buffer)[_Size], const ::tm *_Time) throw() { return _wasctime_s(_Buffer, _Size, _Time); } }
#line 65 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
size_t __cdecl wcsftime(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm); 
#line 74
size_t __cdecl _wcsftime_l(__wchar_t * _Buffer, size_t _SizeInWords, const __wchar_t * _Format, const tm * _Tm, _locale_t _Locale); 
#line 84
__wchar_t *__cdecl _wctime32(const __time32_t * _Time); 
#line 89
errno_t __cdecl _wctime32_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time32_t * _Time); 
#line 95
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wctime32_s(__wchar_t (&_Buffer)[_Size], const ::__time32_t *_Time) throw() { return _wctime32_s(_Buffer, _Size, _Time); } }
#line 104 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wctime64(const __time64_t * _Time); 
#line 109
errno_t __cdecl _wctime64_s(__wchar_t * _Buffer, size_t _SizeInWords, const __time64_t * _Time); 
#line 114
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wctime64_s(__wchar_t (&_Buffer)[_Size], const ::__time64_t *_Time) throw() { return _wctime64_s(_Buffer, _Size, _Time); } }
#line 121 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
errno_t __cdecl _wstrdate_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 126
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wstrdate_s(__wchar_t (&_Buffer)[_Size]) throw() { return _wstrdate_s(_Buffer, _Size); } }
#line 131 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wstrdate(__wchar_t * _Buffer); 
#line 137 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
errno_t __cdecl _wstrtime_s(__wchar_t * _Buffer, size_t _SizeInWords); 
#line 142
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wstrtime_s(__wchar_t (&_Buffer)[_Size]) throw() { return _wstrtime_s(_Buffer, _Size); } }
#line 147 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__wchar_t *__cdecl _wstrtime(__wchar_t * _Buffer); 
#line 160 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#line 185
static __inline __wchar_t *__cdecl _wctime(const time_t *const 
#line 186
_Time) 
#line 187
{ 
#line 188
return _wctime64(_Time); 
#line 189
} 
#line 192
static __inline errno_t __cdecl _wctime_s(__wchar_t *const 
#line 193
_Buffer, const size_t 
#line 194
_SizeInWords, const time_t *const 
#line 195
_Time) 
#line 197
{ 
#line 198
return _wctime64_s(_Buffer, _SizeInWords, _Time); 
#line 199
} 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
}
#line 203 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
#pragma warning(pop)
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wtime.h"
__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
typedef long clock_t; 
#line 26
struct _timespec32 { 
#line 28
__time32_t tv_sec; 
#line 29
long tv_nsec; 
#line 30
}; 
#line 32
struct _timespec64 { 
#line 34
__time64_t tv_sec; 
#line 35
long tv_nsec; 
#line 36
}; 
#line 39
struct timespec { 
#line 41
time_t tv_sec; 
#line 42
long tv_nsec; 
#line 43
}; 
#line 62 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
int *__cdecl __daylight(); 
#line 68
long *__cdecl __dstbias(); 
#line 74
long *__cdecl __timezone(); 
#line 80
char **__cdecl __tzname(); 
#line 85
errno_t __cdecl _get_daylight(int * _Daylight); 
#line 90
errno_t __cdecl _get_dstbias(long * _DaylightSavingsBias); 
#line 95
errno_t __cdecl _get_timezone(long * _TimeZone); 
#line 100
errno_t __cdecl _get_tzname(size_t * _ReturnValue, char * _Buffer, size_t _SizeInBytes, int _Index); 
#line 117
char *__cdecl asctime(const tm * _Tm); 
#line 124
errno_t __cdecl asctime_s(char * _Buffer, size_t _SizeInBytes, const tm * _Tm); 
#line 131 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl asctime_s(char (&_Buffer)[_Size], const ::tm *_Time) throw() { return asctime_s(_Buffer, _Size, _Time); } }
#line 138 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
clock_t __cdecl clock(); 
#line 143
char *__cdecl _ctime32(const __time32_t * _Time); 
#line 148
errno_t __cdecl _ctime32_s(char * _Buffer, size_t _SizeInBytes, const __time32_t * _Time); 
#line 154
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _ctime32_s(char (&_Buffer)[_Size], const ::__time32_t *_Time) throw() { return _ctime32_s(_Buffer, _Size, _Time); } }
#line 163 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _ctime64(const __time64_t * _Time); 
#line 168
errno_t __cdecl _ctime64_s(char * _Buffer, size_t _SizeInBytes, const __time64_t * _Time); 
#line 174
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _ctime64_s(char (&_Buffer)[_Size], const ::__time64_t *_Time) throw() { return _ctime64_s(_Buffer, _Size, _Time); } }
#line 181 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
double __cdecl _difftime32(__time32_t _Time1, __time32_t _Time2); 
#line 187
double __cdecl _difftime64(__time64_t _Time1, __time64_t _Time2); 
#line 194
tm *__cdecl _gmtime32(const __time32_t * _Time); 
#line 199
errno_t __cdecl _gmtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 206
tm *__cdecl _gmtime64(const __time64_t * _Time); 
#line 211
errno_t __cdecl _gmtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 218
tm *__cdecl _localtime32(const __time32_t * _Time); 
#line 223
errno_t __cdecl _localtime32_s(tm * _Tm, const __time32_t * _Time); 
#line 230
tm *__cdecl _localtime64(const __time64_t * _Time); 
#line 235
errno_t __cdecl _localtime64_s(tm * _Tm, const __time64_t * _Time); 
#line 241
__time32_t __cdecl _mkgmtime32(tm * _Tm); 
#line 246
__time64_t __cdecl _mkgmtime64(tm * _Tm); 
#line 251
__time32_t __cdecl _mktime32(tm * _Tm); 
#line 256
__time64_t __cdecl _mktime64(tm * _Tm); 
#line 262
size_t __cdecl strftime(char * _Buffer, size_t _SizeInBytes, const char * _Format, const tm * _Tm); 
#line 271
size_t __cdecl _strftime_l(char * _Buffer, size_t _MaxSize, const char * _Format, const tm * _Tm, _locale_t _Locale); 
#line 280
errno_t __cdecl _strdate_s(char * _Buffer, size_t _SizeInBytes); 
#line 285
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strdate_s(char (&_Buffer)[_Size]) throw() { return _strdate_s(_Buffer, _Size); } }
#line 290 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _strdate(char * _Buffer); 
#line 296 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
errno_t __cdecl _strtime_s(char * _Buffer, size_t _SizeInBytes); 
#line 301
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _strtime_s(char (&_Buffer)[_Size]) throw() { return _strtime_s(_Buffer, _Size); } }
#line 306 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
char *__cdecl _strtime(char * _Buffer); 
#line 311 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
__time32_t __cdecl _time32(__time32_t * _Time); 
#line 315
__time64_t __cdecl _time64(__time64_t * _Time); 
#line 321
int __cdecl _timespec32_get(_timespec32 * _Ts, int _Base); 
#line 328
int __cdecl _timespec64_get(_timespec64 * _Ts, int _Base); 
#line 342
void __cdecl _tzset(); 
#line 345
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetLocalTime in" "stead. See online help for details.")) unsigned __cdecl 
#line 346
_getsystime(tm * _Tm); 
#line 350
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetLocalTime in" "stead. See online help for details.")) unsigned __cdecl 
#line 351
_setsystime(tm * _Tm, unsigned _Milliseconds); 
#line 476 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
static __inline char *__cdecl ctime(const time_t *const 
#line 477
_Time) 
#line 479
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _ctime64(_Time); 
#pragma warning(pop)
} 
#line 487
static __inline double __cdecl difftime(const time_t 
#line 488
_Time1, const time_t 
#line 489
_Time2) 
#line 491
{ 
#line 492
return _difftime64(_Time1, _Time2); 
#line 493
} 
#line 496
static __inline tm *__cdecl gmtime(const time_t *const 
#line 497
_Time) 
#line 498
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _gmtime64(_Time); 
#pragma warning(pop)
} 
#line 506
static __inline tm *__cdecl localtime(const time_t *const 
#line 507
_Time) 
#line 509
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _localtime64(_Time); 
#pragma warning(pop)
} 
#line 517
static __inline time_t __cdecl _mkgmtime(tm *const 
#line 518
_Tm) 
#line 520
{ 
#line 521
return _mkgmtime64(_Tm); 
#line 522
} 
#line 525
static __inline time_t __cdecl mktime(tm *const 
#line 526
_Tm) 
#line 528
{ 
#line 529
return _mktime64(_Tm); 
#line 530
} 
#line 532
static __inline time_t __cdecl time(time_t *const 
#line 533
_Time) 
#line 535
{ 
#line 536
return _time64(_Time); 
#line 537
} 
#line 540
static __inline int __cdecl timespec_get(timespec *const 
#line 541
_Ts, const int 
#line 542
_Base) 
#line 544
{ 
#line 545
return _timespec64_get((_timespec64 *)_Ts, _Base); 
#line 546
} 
#line 550
static __inline errno_t __cdecl ctime_s(char *const 
#line 551
_Buffer, const size_t 
#line 552
_SizeInBytes, const time_t *const 
#line 553
_Time) 
#line 555
{ 
#line 556
return _ctime64_s(_Buffer, _SizeInBytes, _Time); 
#line 557
} 
#line 560
static __inline errno_t __cdecl gmtime_s(tm *const 
#line 561
_Tm, const time_t *const 
#line 562
_Time) 
#line 564
{ 
#line 565
return _gmtime64_s(_Tm, _Time); 
#line 566
} 
#line 569
static __inline errno_t __cdecl localtime_s(tm *const 
#line 570
_Tm, const time_t *const 
#line 571
_Time) 
#line 573
{ 
#line 574
return _localtime64_s(_Tm, _Time); 
#line 575
} 
#line 594 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
void __cdecl tzset(); 
#line 601 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\time.h"
}__pragma( pack ( pop )) 
#line 88 "e:\\cuda\\include\\crt/common_functions.h"
extern "C" {
#line 91 "e:\\cuda\\include\\crt/common_functions.h"
extern clock_t __cdecl clock(); 
#line 96 "e:\\cuda\\include\\crt/common_functions.h"
extern void *__cdecl memset(void *, int, size_t); 
#line 97
extern void *__cdecl memcpy(void *, const void *, size_t); 
#line 99
}
#line 115 "e:\\cuda\\include\\crt\\math_functions.h"
extern "C" {
#line 213 "e:\\cuda\\include\\crt\\math_functions.h"
extern int __cdecl abs(int a); 
#line 221
extern long __cdecl labs(long a); 
#line 229
extern __int64 llabs(__int64 a); 
#line 279 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl fabs(double x); 
#line 320
extern __inline float fabsf(float x); 
#line 330 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline int min(const int a, const int b); 
#line 337
extern inline unsigned umin(const unsigned a, const unsigned b); 
#line 344
extern inline __int64 llmin(const __int64 a, const __int64 b); 
#line 351
extern inline unsigned __int64 ullmin(const unsigned __int64 a, const unsigned __int64 b); 
#line 374 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl fminf(float x, float y); 
#line 394 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl fmin(double x, double y); 
#line 405 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline int max(const int a, const int b); 
#line 413
extern inline unsigned umax(const unsigned a, const unsigned b); 
#line 420
extern inline __int64 llmax(const __int64 a, const __int64 b); 
#line 427
extern inline unsigned __int64 ullmax(const unsigned __int64 a, const unsigned __int64 b); 
#line 450 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl fmaxf(float x, float y); 
#line 470 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl fmax(double, double); 
#line 512 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl sin(double x); 
#line 545
extern double __cdecl cos(double x); 
#line 564 "e:\\cuda\\include\\crt\\math_functions.h"
extern void sincos(double x, double * sptr, double * cptr); 
#line 580
extern void sincosf(float x, float * sptr, float * cptr); 
#line 625 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl tan(double x); 
#line 694
extern double __cdecl sqrt(double x); 
#line 766 "e:\\cuda\\include\\crt\\math_functions.h"
extern double rsqrt(double x); 
#line 836
extern float rsqrtf(float x); 
#line 894 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl log2(double x); 
#line 919 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl exp2(double x); 
#line 944 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl exp2f(float x); 
#line 969 "e:\\cuda\\include\\crt\\math_functions.h"
extern double exp10(double x); 
#line 992
extern float exp10f(float x); 
#line 1040 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl expm1(double x); 
#line 1085 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl expm1f(float x); 
#line 1140 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl log2f(float x); 
#line 1192 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl log10(double x); 
#line 1263
extern double __cdecl log(double x); 
#line 1368 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl log1p(double x); 
#line 1474 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl log1pf(float x); 
#line 1536 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl floor(double x); 
#line 1575
extern double __cdecl exp(double x); 
#line 1606
extern double __cdecl cosh(double x); 
#line 1656
extern double __cdecl sinh(double x); 
#line 1686
extern double __cdecl tanh(double x); 
#line 1723 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl acosh(double x); 
#line 1761 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl acoshf(float x); 
#line 1777 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl asinh(double x); 
#line 1793 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl asinhf(float x); 
#line 1847 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl atanh(double x); 
#line 1901 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl atanhf(float x); 
#line 1958 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl ldexp(double x, int exp); 
#line 2014
extern __inline float ldexpf(float x, int exp); 
#line 2068 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl logb(double x); 
#line 2123 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl logbf(float x); 
#line 2154 "e:\\cuda\\include\\crt\\math_functions.h"
extern int __cdecl ilogb(double x); 
#line 2185 "e:\\cuda\\include\\crt\\math_functions.h"
extern int __cdecl ilogbf(float x); 
#line 2261 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl scalbn(double x, int n); 
#line 2337 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl scalbnf(float x, int n); 
#line 2413 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl scalbln(double x, long n); 
#line 2489 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl scalblnf(float x, long n); 
#line 2565 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl frexp(double x, int * nptr); 
#line 2640
extern __inline float frexpf(float x, int * nptr); 
#line 2656 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl round(double x); 
#line 2673 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl roundf(float x); 
#line 2691 "e:\\cuda\\include\\crt\\math_functions.h"
extern long __cdecl lround(double x); 
#line 2709 "e:\\cuda\\include\\crt\\math_functions.h"
extern long __cdecl lroundf(float x); 
#line 2727 "e:\\cuda\\include\\crt\\math_functions.h"
extern __int64 __cdecl llround(double x); 
#line 2745 "e:\\cuda\\include\\crt\\math_functions.h"
extern __int64 __cdecl llroundf(float x); 
#line 2797 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl rintf(float x); 
#line 2814 "e:\\cuda\\include\\crt\\math_functions.h"
extern long __cdecl lrint(double x); 
#line 2831 "e:\\cuda\\include\\crt\\math_functions.h"
extern long __cdecl lrintf(float x); 
#line 2848 "e:\\cuda\\include\\crt\\math_functions.h"
extern __int64 __cdecl llrint(double x); 
#line 2865 "e:\\cuda\\include\\crt\\math_functions.h"
extern __int64 __cdecl llrintf(float x); 
#line 2918 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl nearbyint(double x); 
#line 2971 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl nearbyintf(float x); 
#line 3031 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl ceil(double x); 
#line 3045 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl trunc(double x); 
#line 3060 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl truncf(float x); 
#line 3086 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl fdim(double x, double y); 
#line 3112 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl fdimf(float x, float y); 
#line 3146 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl atan2(double y, double x); 
#line 3177
extern double __cdecl atan(double x); 
#line 3200
extern double __cdecl acos(double x); 
#line 3232
extern double __cdecl asin(double x); 
#line 3275 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl hypot(double x, double y); 
#line 3374 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline float __cdecl hypotf(float x, float y); 
#line 4110 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl cbrt(double x); 
#line 4196 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl cbrtf(float x); 
#line 4249 "e:\\cuda\\include\\crt\\math_functions.h"
extern double rcbrt(double x); 
#line 4299
extern float rcbrtf(float x); 
#line 4359
extern double sinpi(double x); 
#line 4419
extern float sinpif(float x); 
#line 4471
extern double cospi(double x); 
#line 4523
extern float cospif(float x); 
#line 4553
extern void sincospi(double x, double * sptr, double * cptr); 
#line 4583
extern void sincospif(float x, float * sptr, float * cptr); 
#line 4895 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl pow(double x, double y); 
#line 4951
extern double __cdecl modf(double x, double * iptr); 
#line 5010
extern double __cdecl fmod(double x, double y); 
#line 5098 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl remainder(double x, double y); 
#line 5188 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl remainderf(float x, float y); 
#line 5242 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl remquo(double x, double y, int * quo); 
#line 5296 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl remquof(float x, float y, int * quo); 
#line 5335 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl j0(double x); 
#line 5377 "e:\\cuda\\include\\crt\\math_functions.h"
extern float j0f(float x); 
#line 5446 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl j1(double x); 
#line 5515 "e:\\cuda\\include\\crt\\math_functions.h"
extern float j1f(float x); 
#line 5558 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl jn(int n, double x); 
#line 5601 "e:\\cuda\\include\\crt\\math_functions.h"
extern float jnf(int n, float x); 
#line 5653 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl y0(double x); 
#line 5705 "e:\\cuda\\include\\crt\\math_functions.h"
extern float y0f(float x); 
#line 5757 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl y1(double x); 
#line 5809 "e:\\cuda\\include\\crt\\math_functions.h"
extern float y1f(float x); 
#line 5862 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl yn(int n, double x); 
#line 5915 "e:\\cuda\\include\\crt\\math_functions.h"
extern float ynf(int n, float x); 
#line 6106 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl erf(double x); 
#line 6188 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl erff(float x); 
#line 6250 "e:\\cuda\\include\\crt\\math_functions.h"
extern double erfinv(double y); 
#line 6307
extern float erfinvf(float y); 
#line 6348 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl erfc(double x); 
#line 6386 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl erfcf(float x); 
#line 6514 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl lgamma(double x); 
#line 6575 "e:\\cuda\\include\\crt\\math_functions.h"
extern double erfcinv(double y); 
#line 6631
extern float erfcinvf(float y); 
#line 6689
extern double normcdfinv(double y); 
#line 6747
extern float normcdfinvf(float y); 
#line 6790
extern double normcdf(double y); 
#line 6833
extern float normcdff(float y); 
#line 6908
extern double erfcx(double x); 
#line 6983
extern float erfcxf(float x); 
#line 7119 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl lgammaf(float x); 
#line 7228 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl tgamma(double x); 
#line 7337 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl tgammaf(float x); 
#line 7350 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl copysign(double x, double y); 
#line 7363 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl copysignf(float x, float y); 
#line 7382 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl nextafter(double x, double y); 
#line 7401 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl nextafterf(float x, float y); 
#line 7417 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl nan(const char * tagp); 
#line 7433 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl nanf(const char * tagp); 
#line 7438 "e:\\cuda\\include\\crt\\math_functions.h"
extern int __isinff(float); 
#line 7439
extern int __isnanf(float); 
#line 7449 "e:\\cuda\\include\\crt\\math_functions.h"
extern int __finite(double); 
#line 7450
extern int __finitef(float); 
#line 7451
extern int __signbit(double); 
#line 7452
extern int __isnan(double); 
#line 7453
extern int __isinf(double); 
#line 7456 "e:\\cuda\\include\\crt\\math_functions.h"
extern int __signbitf(float); 
#line 7617 "e:\\cuda\\include\\crt\\math_functions.h"
extern double __cdecl fma(double x, double y, double z); 
#line 7775 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl fmaf(float x, float y, float z); 
#line 7784 "e:\\cuda\\include\\crt\\math_functions.h"
extern int __signbitl(long double); 
#line 7790 "e:\\cuda\\include\\crt\\math_functions.h"
extern int __finitel(long double); 
#line 7791
extern int __isinfl(long double); 
#line 7792
extern int __isnanl(long double); 
#line 7796 "e:\\cuda\\include\\crt\\math_functions.h"
extern float __cdecl acosf(float); 
#line 7797
extern float __cdecl asinf(float); 
#line 7798
extern float __cdecl atanf(float); 
#line 7799
extern float __cdecl atan2f(float, float); 
#line 7800
extern float __cdecl cosf(float); 
#line 7801
extern float __cdecl sinf(float); 
#line 7802
extern float __cdecl tanf(float); 
#line 7803
extern float __cdecl coshf(float); 
#line 7804
extern float __cdecl sinhf(float); 
#line 7805
extern float __cdecl tanhf(float); 
#line 7806
extern float __cdecl expf(float); 
#line 7807
extern float __cdecl logf(float); 
#line 7808
extern float __cdecl log10f(float); 
#line 7809
extern float __cdecl modff(float, float *); 
#line 7810
extern float __cdecl powf(float, float); 
#line 7811
extern float __cdecl sqrtf(float); 
#line 7812
extern float __cdecl ceilf(float); 
#line 7813
extern float __cdecl floorf(float); 
#line 7814
extern float __cdecl fmodf(float, float); 
#line 8951 "e:\\cuda\\include\\crt\\math_functions.h"
}
#line 14 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 16
#pragma warning(push)
#pragma warning(disable:4738)
#pragma warning(disable:4820)
#line 25
struct _exception { 
#line 27
int type; 
#line 28
char *name; 
#line 29
double arg1; 
#line 30
double arg2; 
#line 31
double retval; 
#line 32
}; 
#line 39
struct _complex { 
#line 41
double x, y; 
#line 42
}; 
#line 61 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
typedef float float_t; 
#line 62
typedef double double_t; 
#line 80 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
extern const double _HUGE; 
#line 171 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
void __cdecl _fperrraise(int _Except); 
#line 173
short __cdecl _dclass(double _X); 
#line 174
short __cdecl _ldclass(long double _X); 
#line 175
short __cdecl _fdclass(float _X); 
#line 177
int __cdecl _dsign(double _X); 
#line 178
int __cdecl _ldsign(long double _X); 
#line 179
int __cdecl _fdsign(float _X); 
#line 181
int __cdecl _dpcomp(double _X, double _Y); 
#line 182
int __cdecl _ldpcomp(long double _X, long double _Y); 
#line 183
int __cdecl _fdpcomp(float _X, float _Y); 
#line 185
short __cdecl _dtest(double * _Px); 
#line 186
short __cdecl _ldtest(long double * _Px); 
#line 187
short __cdecl _fdtest(float * _Px); 
#line 189
short __cdecl _d_int(double * _Px, short _Xexp); 
#line 190
short __cdecl _ld_int(long double * _Px, short _Xexp); 
#line 191
short __cdecl _fd_int(float * _Px, short _Xexp); 
#line 193
short __cdecl _dscale(double * _Px, long _Lexp); 
#line 194
short __cdecl _ldscale(long double * _Px, long _Lexp); 
#line 195
short __cdecl _fdscale(float * _Px, long _Lexp); 
#line 197
short __cdecl _dunscale(short * _Pex, double * _Px); 
#line 198
short __cdecl _ldunscale(short * _Pex, long double * _Px); 
#line 199
short __cdecl _fdunscale(short * _Pex, float * _Px); 
#line 201
short __cdecl _dexp(double * _Px, double _Y, long _Eoff); 
#line 202
short __cdecl _ldexp(long double * _Px, long double _Y, long _Eoff); 
#line 203
short __cdecl _fdexp(float * _Px, float _Y, long _Eoff); 
#line 205
short __cdecl _dnorm(unsigned short * _Ps); 
#line 206
short __cdecl _fdnorm(unsigned short * _Ps); 
#line 208
double __cdecl _dpoly(double _X, const double * _Tab, int _N); 
#line 209
long double __cdecl _ldpoly(long double _X, const long double * _Tab, int _N); 
#line 210
float __cdecl _fdpoly(float _X, const float * _Tab, int _N); 
#line 212
double __cdecl _dlog(double _X, int _Baseflag); 
#line 213
long double __cdecl _ldlog(long double _X, int _Baseflag); 
#line 214
float __cdecl _fdlog(float _X, int _Baseflag); 
#line 216
double __cdecl _dsin(double _X, unsigned _Qoff); 
#line 217
long double __cdecl _ldsin(long double _X, unsigned _Qoff); 
#line 218
float __cdecl _fdsin(float _X, unsigned _Qoff); 
#line 225
typedef 
#line 222
union { 
#line 223
unsigned short _Sh[4]; 
#line 224
double _Val; 
#line 225
} _double_val; 
#line 232
typedef 
#line 229
union { 
#line 230
unsigned short _Sh[2]; 
#line 231
float _Val; 
#line 232
} _float_val; 
#line 239
typedef 
#line 236
union { 
#line 237
unsigned short _Sh[4]; 
#line 238
long double _Val; 
#line 239
} _ldouble_val; 
#line 247
typedef 
#line 242
union { 
#line 243
unsigned short _Word[4]; 
#line 244
float _Float; 
#line 245
double _Double; 
#line 246
long double _Long_double; 
#line 247
} _float_const; 
#line 249
extern const _float_const _Denorm_C, _Inf_C, _Nan_C, _Snan_C, _Hugeval_C; 
#line 250
extern const _float_const _FDenorm_C, _FInf_C, _FNan_C, _FSnan_C; 
#line 251
extern const _float_const _LDenorm_C, _LInf_C, _LNan_C, _LSnan_C; 
#line 253
extern const _float_const _Eps_C, _Rteps_C; 
#line 254
extern const _float_const _FEps_C, _FRteps_C; 
#line 255
extern const _float_const _LEps_C, _LRteps_C; 
#line 257
extern const double _Zero_C, _Xbig_C; 
#line 258
extern const float _FZero_C, _FXbig_C; 
#line 259
extern const long double _LZero_C, _LXbig_C; 
#line 288
extern "C++" {
#line 290
inline int fpclassify(float _X) throw() 
#line 291
{ 
#line 292
return _fdtest(&_X); 
#line 293
} 
#line 295
inline int fpclassify(double _X) throw() 
#line 296
{ 
#line 297
return _dtest(&_X); 
#line 298
} 
#line 300
inline int fpclassify(long double _X) throw() 
#line 301
{ 
#line 302
return _ldtest(&_X); 
#line 303
} 
#line 305
inline bool signbit(float _X) throw() 
#line 306
{ 
#line 307
return _fdsign(_X) != 0; 
#line 308
} 
#line 310
inline bool signbit(double _X) throw() 
#line 311
{ 
#line 312
return _dsign(_X) != 0; 
#line 313
} 
#line 315
inline bool signbit(long double _X) throw() 
#line 316
{ 
#line 317
return _ldsign(_X) != 0; 
#line 318
} 
#line 320
inline int _fpcomp(float _X, float _Y) throw() 
#line 321
{ 
#line 322
return _fdpcomp(_X, _Y); 
#line 323
} 
#line 325
inline int _fpcomp(double _X, double _Y) throw() 
#line 326
{ 
#line 327
return _dpcomp(_X, _Y); 
#line 328
} 
#line 330
inline int _fpcomp(long double _X, long double _Y) throw() 
#line 331
{ 
#line 332
return _ldpcomp(_X, _Y); 
#line 333
} 
#line 335
template< class _Trc, class _Tre> struct _Combined_type { 
#line 337
typedef float _Type; 
#line 338
}; 
#line 340
template<> struct _Combined_type< float, double>  { 
#line 342
typedef double _Type; 
#line 343
}; 
#line 345
template<> struct _Combined_type< float, long double>  { 
#line 347
typedef long double _Type; 
#line 348
}; 
#line 350
template< class _Ty, class _T2> struct _Real_widened { 
#line 352
typedef long double _Type; 
#line 353
}; 
#line 355
template<> struct _Real_widened< float, float>  { 
#line 357
typedef float _Type; 
#line 358
}; 
#line 360
template<> struct _Real_widened< float, double>  { 
#line 362
typedef double _Type; 
#line 363
}; 
#line 365
template<> struct _Real_widened< double, float>  { 
#line 367
typedef double _Type; 
#line 368
}; 
#line 370
template<> struct _Real_widened< double, double>  { 
#line 372
typedef double _Type; 
#line 373
}; 
#line 375
template< class _Ty> struct _Real_type { 
#line 377
typedef double _Type; 
#line 378
}; 
#line 380
template<> struct _Real_type< float>  { 
#line 382
typedef float _Type; 
#line 383
}; 
#line 385
template<> struct _Real_type< long double>  { 
#line 387
typedef long double _Type; 
#line 388
}; 
#line 390
template< class _T1, class _T2> inline int 
#line 391
_fpcomp(_T1 _X, _T2 _Y) throw() 
#line 392
{ 
#line 396
typedef typename _Combined_type< float, typename _Real_widened< typename _Real_type< _T1> ::_Type, typename _Real_type< _T2> ::_Type> ::_Type> ::_Type _Tw; 
#line 397
return _fpcomp((_Tw)_X, (_Tw)_Y); 
#line 398
} 
#line 400
template< class _Ty> inline bool 
#line 401
isfinite(_Ty _X) throw() 
#line 402
{ 
#line 403
return fpclassify(_X) <= 0; 
#line 404
} 
#line 406
template< class _Ty> inline bool 
#line 407
isinf(_Ty _X) throw() 
#line 408
{ 
#line 409
return fpclassify(_X) == 1; 
#line 410
} 
#line 412
template< class _Ty> inline bool 
#line 413
isnan(_Ty _X) throw() 
#line 414
{ 
#line 415
return fpclassify(_X) == 2; 
#line 416
} 
#line 418
template< class _Ty> inline bool 
#line 419
isnormal(_Ty _X) throw() 
#line 420
{ 
#line 421
return fpclassify(_X) == (-1); 
#line 422
} 
#line 424
template< class _Ty1, class _Ty2> inline bool 
#line 425
isgreater(_Ty1 _X, _Ty2 _Y) throw() 
#line 426
{ 
#line 427
return (_fpcomp(_X, _Y) & 4) != 0; 
#line 428
} 
#line 430
template< class _Ty1, class _Ty2> inline bool 
#line 431
isgreaterequal(_Ty1 _X, _Ty2 _Y) throw() 
#line 432
{ 
#line 433
return (_fpcomp(_X, _Y) & (2 | 4)) != 0; 
#line 434
} 
#line 436
template< class _Ty1, class _Ty2> inline bool 
#line 437
isless(_Ty1 _X, _Ty2 _Y) throw() 
#line 438
{ 
#line 439
return (_fpcomp(_X, _Y) & 1) != 0; 
#line 440
} 
#line 442
template< class _Ty1, class _Ty2> inline bool 
#line 443
islessequal(_Ty1 _X, _Ty2 _Y) throw() 
#line 444
{ 
#line 445
return (_fpcomp(_X, _Y) & (1 | 2)) != 0; 
#line 446
} 
#line 448
template< class _Ty1, class _Ty2> inline bool 
#line 449
islessgreater(_Ty1 _X, _Ty2 _Y) throw() 
#line 450
{ 
#line 451
return (_fpcomp(_X, _Y) & (1 | 4)) != 0; 
#line 452
} 
#line 454
template< class _Ty1, class _Ty2> inline bool 
#line 455
isunordered(_Ty1 _X, _Ty2 _Y) throw() 
#line 456
{ 
#line 457
return _fpcomp(_X, _Y) == 0; 
#line 458
} 
#line 459
}
#line 466 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
int __cdecl abs(int _X); 
#line 467
long __cdecl labs(long _X); 
#line 468
__int64 __cdecl llabs(__int64 _X); 
#line 470
double __cdecl acos(double _X); 
#line 471
double __cdecl asin(double _X); 
#line 472
double __cdecl atan(double _X); 
#line 473
double __cdecl atan2(double _Y, double _X); 
#line 475
double __cdecl cos(double _X); 
#line 476
double __cdecl cosh(double _X); 
#line 477
double __cdecl exp(double _X); 
#line 478
double __cdecl fabs(double _X); 
#line 479
double __cdecl fmod(double _X, double _Y); 
#line 480
double __cdecl log(double _X); 
#line 481
double __cdecl log10(double _X); 
#line 482
double __cdecl pow(double _X, double _Y); 
#line 483
double __cdecl sin(double _X); 
#line 484
double __cdecl sinh(double _X); 
#line 485
double __cdecl sqrt(double _X); 
#line 486
double __cdecl tan(double _X); 
#line 487
double __cdecl tanh(double _X); 
#line 489
double __cdecl acosh(double _X); 
#line 490
double __cdecl asinh(double _X); 
#line 491
double __cdecl atanh(double _X); 
#line 492
double __cdecl atof(const char * _String); 
#line 493
double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 494
double __cdecl _cabs(_complex _Complex_value); 
#line 495
double __cdecl cbrt(double _X); 
#line 496
double __cdecl ceil(double _X); 
#line 497
double __cdecl _chgsign(double _X); 
#line 498
double __cdecl copysign(double _Number, double _Sign); 
#line 499
double __cdecl _copysign(double _Number, double _Sign); 
#line 500
double __cdecl erf(double _X); 
#line 501
double __cdecl erfc(double _X); 
#line 502
double __cdecl exp2(double _X); 
#line 503
double __cdecl expm1(double _X); 
#line 504
double __cdecl fdim(double _X, double _Y); 
#line 505
double __cdecl floor(double _X); 
#line 506
double __cdecl fma(double _X, double _Y, double _Z); 
#line 507
double __cdecl fmax(double _X, double _Y); 
#line 508
double __cdecl fmin(double _X, double _Y); 
#line 509
double __cdecl frexp(double _X, int * _Y); 
#line 510
double __cdecl hypot(double _X, double _Y); 
#line 511
double __cdecl _hypot(double _X, double _Y); 
#line 512
int __cdecl ilogb(double _X); 
#line 513
double __cdecl ldexp(double _X, int _Y); 
#line 514
double __cdecl lgamma(double _X); 
#line 515
__int64 __cdecl llrint(double _X); 
#line 516
__int64 __cdecl llround(double _X); 
#line 517
double __cdecl log1p(double _X); 
#line 518
double __cdecl log2(double _X); 
#line 519
double __cdecl logb(double _X); 
#line 520
long __cdecl lrint(double _X); 
#line 521
long __cdecl lround(double _X); 
#line 523
int __cdecl _matherr(_exception * _Except); 
#line 525
double __cdecl modf(double _X, double * _Y); 
#line 526
double __cdecl nan(const char * _X); 
#line 527
double __cdecl nearbyint(double _X); 
#line 528
double __cdecl nextafter(double _X, double _Y); 
#line 529
double __cdecl nexttoward(double _X, long double _Y); 
#line 530
double __cdecl remainder(double _X, double _Y); 
#line 531
double __cdecl remquo(double _X, double _Y, int * _Z); 
#line 532
double __cdecl rint(double _X); 
#line 533
double __cdecl round(double _X); 
#line 534
double __cdecl scalbln(double _X, long _Y); 
#line 535
double __cdecl scalbn(double _X, int _Y); 
#line 536
double __cdecl tgamma(double _X); 
#line 537
double __cdecl trunc(double _X); 
#line 538
double __cdecl _j0(double _X); 
#line 539
double __cdecl _j1(double _X); 
#line 540
double __cdecl _jn(int _X, double _Y); 
#line 541
double __cdecl _y0(double _X); 
#line 542
double __cdecl _y1(double _X); 
#line 543
double __cdecl _yn(int _X, double _Y); 
#line 545
float __cdecl acoshf(float _X); 
#line 546
float __cdecl asinhf(float _X); 
#line 547
float __cdecl atanhf(float _X); 
#line 548
float __cdecl cbrtf(float _X); 
#line 549
float __cdecl _chgsignf(float _X); 
#line 550
float __cdecl copysignf(float _Number, float _Sign); 
#line 551
float __cdecl _copysignf(float _Number, float _Sign); 
#line 552
float __cdecl erff(float _X); 
#line 553
float __cdecl erfcf(float _X); 
#line 554
float __cdecl expm1f(float _X); 
#line 555
float __cdecl exp2f(float _X); 
#line 556
float __cdecl fdimf(float _X, float _Y); 
#line 557
float __cdecl fmaf(float _X, float _Y, float _Z); 
#line 558
float __cdecl fmaxf(float _X, float _Y); 
#line 559
float __cdecl fminf(float _X, float _Y); 
#line 560
float __cdecl _hypotf(float _X, float _Y); 
#line 561
int __cdecl ilogbf(float _X); 
#line 562
float __cdecl lgammaf(float _X); 
#line 563
__int64 __cdecl llrintf(float _X); 
#line 564
__int64 __cdecl llroundf(float _X); 
#line 565
float __cdecl log1pf(float _X); 
#line 566
float __cdecl log2f(float _X); 
#line 567
float __cdecl logbf(float _X); 
#line 568
long __cdecl lrintf(float _X); 
#line 569
long __cdecl lroundf(float _X); 
#line 570
float __cdecl nanf(const char * _X); 
#line 571
float __cdecl nearbyintf(float _X); 
#line 572
float __cdecl nextafterf(float _X, float _Y); 
#line 573
float __cdecl nexttowardf(float _X, long double _Y); 
#line 574
float __cdecl remainderf(float _X, float _Y); 
#line 575
float __cdecl remquof(float _X, float _Y, int * _Z); 
#line 576
float __cdecl rintf(float _X); 
#line 577
float __cdecl roundf(float _X); 
#line 578
float __cdecl scalblnf(float _X, long _Y); 
#line 579
float __cdecl scalbnf(float _X, int _Y); 
#line 580
float __cdecl tgammaf(float _X); 
#line 581
float __cdecl truncf(float _X); 
#line 591 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl _logbf(float _X); 
#line 592
float __cdecl _nextafterf(float _X, float _Y); 
#line 593
int __cdecl _finitef(float _X); 
#line 594
int __cdecl _isnanf(float _X); 
#line 595
int __cdecl _fpclassf(float _X); 
#line 597
int __cdecl _set_FMA3_enable(int _Flag); 
#line 598
int __cdecl _get_FMA3_enable(); 
#line 611 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl acosf(float _X); 
#line 612
float __cdecl asinf(float _X); 
#line 613
float __cdecl atan2f(float _Y, float _X); 
#line 614
float __cdecl atanf(float _X); 
#line 615
float __cdecl ceilf(float _X); 
#line 616
float __cdecl cosf(float _X); 
#line 617
float __cdecl coshf(float _X); 
#line 618
float __cdecl expf(float _X); 
#line 670 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__inline float __cdecl fabsf(float _X) 
#line 671
{ 
#line 672
return (float)fabs(_X); 
#line 673
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
float __cdecl floorf(float _X); 
#line 680
float __cdecl fmodf(float _X, float _Y); 
#line 696 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
__inline float __cdecl frexpf(float _X, int *_Y) 
#line 697
{ 
#line 698
return (float)frexp(_X, _Y); 
#line 699
} 
#line 701
__inline float __cdecl hypotf(float _X, float _Y) 
#line 702
{ 
#line 703
return _hypotf(_X, _Y); 
#line 704
} 
#line 706
__inline float __cdecl ldexpf(float _X, int _Y) 
#line 707
{ 
#line 708
return (float)ldexp(_X, _Y); 
#line 709
} 
#line 713
float __cdecl log10f(float _X); 
#line 714
float __cdecl logf(float _X); 
#line 715
float __cdecl modff(float _X, float * _Y); 
#line 716
float __cdecl powf(float _X, float _Y); 
#line 717
float __cdecl sinf(float _X); 
#line 718
float __cdecl sinhf(float _X); 
#line 719
float __cdecl sqrtf(float _X); 
#line 720
float __cdecl tanf(float _X); 
#line 721
float __cdecl tanhf(float _X); 
#line 775 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
long double __cdecl acoshl(long double _X); 
#line 777
__inline long double __cdecl acosl(long double _X) 
#line 778
{ 
#line 779
return acos((double)_X); 
#line 780
} 
#line 782
long double __cdecl asinhl(long double _X); 
#line 784
__inline long double __cdecl asinl(long double _X) 
#line 785
{ 
#line 786
return asin((double)_X); 
#line 787
} 
#line 789
__inline long double __cdecl atan2l(long double _Y, long double _X) 
#line 790
{ 
#line 791
return atan2((double)_Y, (double)_X); 
#line 792
} 
#line 794
long double __cdecl atanhl(long double _X); 
#line 796
__inline long double __cdecl atanl(long double _X) 
#line 797
{ 
#line 798
return atan((double)_X); 
#line 799
} 
#line 801
long double __cdecl cbrtl(long double _X); 
#line 803
__inline long double __cdecl ceill(long double _X) 
#line 804
{ 
#line 805
return ceil((double)_X); 
#line 806
} 
#line 808
__inline long double __cdecl _chgsignl(long double _X) 
#line 809
{ 
#line 810
return _chgsign((double)_X); 
#line 811
} 
#line 813
long double __cdecl copysignl(long double _Number, long double _Sign); 
#line 815
__inline long double __cdecl _copysignl(long double _Number, long double _Sign) 
#line 816
{ 
#line 817
return _copysign((double)_Number, (double)_Sign); 
#line 818
} 
#line 820
__inline long double __cdecl coshl(long double _X) 
#line 821
{ 
#line 822
return cosh((double)_X); 
#line 823
} 
#line 825
__inline long double __cdecl cosl(long double _X) 
#line 826
{ 
#line 827
return cos((double)_X); 
#line 828
} 
#line 830
long double __cdecl erfl(long double _X); 
#line 831
long double __cdecl erfcl(long double _X); 
#line 833
__inline long double __cdecl expl(long double _X) 
#line 834
{ 
#line 835
return exp((double)_X); 
#line 836
} 
#line 838
long double __cdecl exp2l(long double _X); 
#line 839
long double __cdecl expm1l(long double _X); 
#line 841
__inline long double __cdecl fabsl(long double _X) 
#line 842
{ 
#line 843
return fabs((double)_X); 
#line 844
} 
#line 846
long double __cdecl fdiml(long double _X, long double _Y); 
#line 848
__inline long double __cdecl floorl(long double _X) 
#line 849
{ 
#line 850
return floor((double)_X); 
#line 851
} 
#line 853
long double __cdecl fmal(long double _X, long double _Y, long double _Z); 
#line 854
long double __cdecl fmaxl(long double _X, long double _Y); 
#line 855
long double __cdecl fminl(long double _X, long double _Y); 
#line 857
__inline long double __cdecl fmodl(long double _X, long double _Y) 
#line 858
{ 
#line 859
return fmod((double)_X, (double)_Y); 
#line 860
} 
#line 862
__inline long double __cdecl frexpl(long double _X, int *_Y) 
#line 863
{ 
#line 864
return frexp((double)_X, _Y); 
#line 865
} 
#line 867
int __cdecl ilogbl(long double _X); 
#line 869
__inline long double __cdecl _hypotl(long double _X, long double _Y) 
#line 870
{ 
#line 871
return _hypot((double)_X, (double)_Y); 
#line 872
} 
#line 874
__inline long double __cdecl hypotl(long double _X, long double _Y) 
#line 875
{ 
#line 876
return _hypot((double)_X, (double)_Y); 
#line 877
} 
#line 879
__inline long double __cdecl ldexpl(long double _X, int _Y) 
#line 880
{ 
#line 881
return ldexp((double)_X, _Y); 
#line 882
} 
#line 884
long double __cdecl lgammal(long double _X); 
#line 885
__int64 __cdecl llrintl(long double _X); 
#line 886
__int64 __cdecl llroundl(long double _X); 
#line 888
__inline long double __cdecl logl(long double _X) 
#line 889
{ 
#line 890
return log((double)_X); 
#line 891
} 
#line 893
__inline long double __cdecl log10l(long double _X) 
#line 894
{ 
#line 895
return log10((double)_X); 
#line 896
} 
#line 898
long double __cdecl log1pl(long double _X); 
#line 899
long double __cdecl log2l(long double _X); 
#line 900
long double __cdecl logbl(long double _X); 
#line 901
long __cdecl lrintl(long double _X); 
#line 902
long __cdecl lroundl(long double _X); 
#line 904
__inline long double __cdecl modfl(long double _X, long double *_Y) 
#line 905
{ 
#line 906
double _F, _I; 
#line 907
_F = modf((double)_X, &_I); 
#line 908
(*_Y) = _I; 
#line 909
return _F; 
#line 910
} 
#line 912
long double __cdecl nanl(const char * _X); 
#line 913
long double __cdecl nearbyintl(long double _X); 
#line 914
long double __cdecl nextafterl(long double _X, long double _Y); 
#line 915
long double __cdecl nexttowardl(long double _X, long double _Y); 
#line 917
__inline long double __cdecl powl(long double _X, long double _Y) 
#line 918
{ 
#line 919
return pow((double)_X, (double)_Y); 
#line 920
} 
#line 922
long double __cdecl remainderl(long double _X, long double _Y); 
#line 923
long double __cdecl remquol(long double _X, long double _Y, int * _Z); 
#line 924
long double __cdecl rintl(long double _X); 
#line 925
long double __cdecl roundl(long double _X); 
#line 926
long double __cdecl scalblnl(long double _X, long _Y); 
#line 927
long double __cdecl scalbnl(long double _X, int _Y); 
#line 929
__inline long double __cdecl sinhl(long double _X) 
#line 930
{ 
#line 931
return sinh((double)_X); 
#line 932
} 
#line 934
__inline long double __cdecl sinl(long double _X) 
#line 935
{ 
#line 936
return sin((double)_X); 
#line 937
} 
#line 939
__inline long double __cdecl sqrtl(long double _X) 
#line 940
{ 
#line 941
return sqrt((double)_X); 
#line 942
} 
#line 944
__inline long double __cdecl tanhl(long double _X) 
#line 945
{ 
#line 946
return tanh((double)_X); 
#line 947
} 
#line 949
__inline long double __cdecl tanl(long double _X) 
#line 950
{ 
#line 951
return tan((double)_X); 
#line 952
} 
#line 954
long double __cdecl tgammal(long double _X); 
#line 955
long double __cdecl truncl(long double _X); 
#line 976 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
extern double HUGE; 
#line 981 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
double __cdecl j0(double _X); 
#line 982
double __cdecl j1(double _X); 
#line 983
double __cdecl jn(int _X, double _Y); 
#line 984
double __cdecl y0(double _X); 
#line 985
double __cdecl y1(double _X); 
#line 986
double __cdecl yn(int _X, double _Y); 
#line 994 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_math.h"
}
#line 992
#pragma warning(pop)
#line 994
__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_malloc.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 54 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_malloc.h"
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 55
_calloc_base(size_t _Count, size_t _Size); 
#line 61
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 62
calloc(size_t _Count, size_t _Size); 
#line 68
int __cdecl _callnewh(size_t _Size); 
#line 73
__declspec(allocator) void *__cdecl 
#line 74
_expand(void * _Block, size_t _Size); 
#line 80
void __cdecl _free_base(void * _Block); 
#line 85
void __cdecl free(void * _Block); 
#line 90
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 91
_malloc_base(size_t _Size); 
#line 96
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 97
malloc(size_t _Size); 
#line 103
size_t __cdecl _msize_base(void * _Block); 
#line 109
size_t __cdecl _msize(void * _Block); 
#line 114
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 115
_realloc_base(void * _Block, size_t _Size); 
#line 121
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 122
realloc(void * _Block, size_t _Size); 
#line 128
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 129
_recalloc_base(void * _Block, size_t _Count, size_t _Size); 
#line 136
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 137
_recalloc(void * _Block, size_t _Count, size_t _Size); 
#line 144
void __cdecl _aligned_free(void * _Block); 
#line 149
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 150
_aligned_malloc(size_t _Size, size_t _Alignment); 
#line 156
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 157
_aligned_offset_malloc(size_t _Size, size_t _Alignment, size_t _Offset); 
#line 165
size_t __cdecl _aligned_msize(void * _Block, size_t _Alignment, size_t _Offset); 
#line 172
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 173
_aligned_offset_realloc(void * _Block, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 181
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 182
_aligned_offset_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment, size_t _Offset); 
#line 191
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 192
_aligned_realloc(void * _Block, size_t _Size, size_t _Alignment); 
#line 199
__declspec(allocator) __declspec(restrict) void *__cdecl 
#line 200
_aligned_recalloc(void * _Block, size_t _Count, size_t _Size, size_t _Alignment); 
#line 228 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_malloc.h"
}__pragma( pack ( pop )) 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_search.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
typedef int (__cdecl *_CoreCrtSecureSearchSortCompareFunction)(void *, const void *, const void *); 
#line 20
typedef int (__cdecl *_CoreCrtNonSecureSearchSortCompareFunction)(const void *, const void *); 
#line 26
void *__cdecl bsearch_s(const void * _Key, const void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 35
void __cdecl qsort_s(void * _Base, rsize_t _NumOfElements, rsize_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 48 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_search.h"
void *__cdecl bsearch(const void * _Key, const void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 56
void __cdecl qsort(void * _Base, size_t _NumOfElements, size_t _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 64
void *__cdecl _lfind_s(const void * _Key, const void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 74
void *__cdecl _lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 83
void *__cdecl _lsearch_s(const void * _Key, void * _Base, unsigned * _NumOfElements, size_t _SizeOfElements, _CoreCrtSecureSearchSortCompareFunction _CompareFunction, void * _Context); 
#line 93
void *__cdecl _lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_search.h"
void *__cdecl lfind(const void * _Key, const void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 200
void *__cdecl lsearch(const void * _Key, void * _Base, unsigned * _NumOfElements, unsigned _SizeOfElements, _CoreCrtNonSecureSearchSortCompareFunction _CompareFunction); 
#line 212 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_search.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 50
errno_t __cdecl _itow_s(int _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 57
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _itow_s(int _Value, __wchar_t (&_Buffer)[_Size], int _Radix) throw() { return _itow_s(_Value, _Buffer, _Size, _Radix); } }
#line 64 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _itow(int _Value, __wchar_t * _Buffer, int _Radix); 
#line 73 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _ltow_s(long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 80
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _ltow_s(long _Value, __wchar_t (&_Buffer)[_Size], int _Radix) throw() { return _ltow_s(_Value, _Buffer, _Size, _Radix); } }
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _ltow(long _Value, __wchar_t * _Buffer, int _Radix); 
#line 95 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _ultow_s(unsigned long _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 102
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _ultow_s(unsigned long _Value, __wchar_t (&_Buffer)[_Size], int _Radix) throw() { return _ultow_s(_Value, _Buffer, _Size, _Radix); } }
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
__wchar_t *__cdecl _ultow(unsigned long _Value, __wchar_t * _Buffer, int _Radix); 
#line 117 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
double __cdecl wcstod(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 123
double __cdecl _wcstod_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 130
long __cdecl wcstol(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 137
long __cdecl _wcstol_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 145
__int64 __cdecl wcstoll(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 152
__int64 __cdecl _wcstoll_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 160
unsigned long __cdecl wcstoul(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 167
unsigned long __cdecl _wcstoul_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 175
unsigned __int64 __cdecl wcstoull(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 182
unsigned __int64 __cdecl _wcstoull_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 190
long double __cdecl wcstold(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 196
long double __cdecl _wcstold_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 203
float __cdecl wcstof(const __wchar_t * _String, __wchar_t ** _EndPtr); 
#line 209
float __cdecl _wcstof_l(const __wchar_t * _String, __wchar_t ** _EndPtr, _locale_t _Locale); 
#line 216
double __cdecl _wtof(const __wchar_t * _String); 
#line 221
double __cdecl _wtof_l(const __wchar_t * _String, _locale_t _Locale); 
#line 227
int __cdecl _wtoi(const __wchar_t * _String); 
#line 232
int __cdecl _wtoi_l(const __wchar_t * _String, _locale_t _Locale); 
#line 238
long __cdecl _wtol(const __wchar_t * _String); 
#line 243
long __cdecl _wtol_l(const __wchar_t * _String, _locale_t _Locale); 
#line 249
__int64 __cdecl _wtoll(const __wchar_t * _String); 
#line 254
__int64 __cdecl _wtoll_l(const __wchar_t * _String, _locale_t _Locale); 
#line 260
errno_t __cdecl _i64tow_s(__int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 268
__wchar_t *__cdecl _i64tow(__int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 275
errno_t __cdecl _ui64tow_s(unsigned __int64 _Value, __wchar_t * _Buffer, size_t _BufferCount, int _Radix); 
#line 283
__wchar_t *__cdecl _ui64tow(unsigned __int64 _Value, __wchar_t * _Buffer, int _Radix); 
#line 290
__int64 __cdecl _wtoi64(const __wchar_t * _String); 
#line 295
__int64 __cdecl _wtoi64_l(const __wchar_t * _String, _locale_t _Locale); 
#line 301
__int64 __cdecl _wcstoi64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 308
__int64 __cdecl _wcstoi64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 316
unsigned __int64 __cdecl _wcstoui64(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 323
unsigned __int64 __cdecl _wcstoui64_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 335
__declspec(allocator) __wchar_t *__cdecl _wfullpath(__wchar_t * _Buffer, const __wchar_t * _Path, size_t _BufferCount); 
#line 344
errno_t __cdecl _wmakepath_s(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 353
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wmakepath_s(__wchar_t (&_Buffer)[_Size], const __wchar_t *_Drive, const __wchar_t *_Dir, const __wchar_t *_Filename, const __wchar_t *_Ext) throw() { return _wmakepath_s(_Buffer, _Size, _Drive, _Dir, _Filename, _Ext); } }
#line 362 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
void __cdecl _wmakepath(__wchar_t * _Buffer, const __wchar_t * _Drive, const __wchar_t * _Dir, const __wchar_t * _Filename, const __wchar_t * _Ext); 
#line 373 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
#pragma warning(pop)
#line 375
void __cdecl _wperror(const __wchar_t * _ErrorMessage); 
#line 380
void __cdecl _wsplitpath(const __wchar_t * _FullPath, __wchar_t * _Drive, __wchar_t * _Dir, __wchar_t * _Filename, __wchar_t * _Ext); 
#line 388
errno_t __cdecl _wsplitpath_s(const __wchar_t * _FullPath, __wchar_t * _Drive, size_t _DriveCount, __wchar_t * _Dir, size_t _DirCount, __wchar_t * _Filename, size_t _FilenameCount, __wchar_t * _Ext, size_t _ExtCount); 
#line 400
extern "C++" {template< size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline ::errno_t __cdecl _wsplitpath_s(const __wchar_t *_Path, __wchar_t (&_Drive)[_DriveSize], __wchar_t (&_Dir)[_DirSize], __wchar_t (&_Name)[_NameSize], __wchar_t (&_Ext)[_ExtSize]) throw() { return _wsplitpath_s(_Path, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }
#line 409 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
errno_t __cdecl _wdupenv_s(__wchar_t ** _Buffer, size_t * _BufferCount, const __wchar_t * _VarName); 
#line 418
__wchar_t *__cdecl _wgetenv(const __wchar_t * _VarName); 
#line 424
errno_t __cdecl _wgetenv_s(size_t * _RequiredCount, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _VarName); 
#line 431
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wgetenv_s(::size_t *_RequiredCount, __wchar_t (&_Buffer)[_Size], const __wchar_t *_VarName) throw() { return _wgetenv_s(_RequiredCount, _Buffer, _Size, _VarName); } }
#line 440 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
int __cdecl _wputenv(const __wchar_t * _EnvString); 
#line 445
errno_t __cdecl _wputenv_s(const __wchar_t * _Name, const __wchar_t * _Value); 
#line 450
errno_t __cdecl _wsearchenv_s(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _Buffer, size_t _BufferCount); 
#line 457
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wsearchenv_s(const __wchar_t *_Filename, const __wchar_t *_VarName, __wchar_t (&_ResultPath)[_Size]) throw() { return _wsearchenv_s(_Filename, _VarName, _ResultPath, _Size); } }
#line 464 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
void __cdecl _wsearchenv(const __wchar_t * _Filename, const __wchar_t * _VarName, __wchar_t * _ResultPath); 
#line 471 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
int __cdecl _wsystem(const __wchar_t * _Command); 
#line 479 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdlib.h"
}__pragma( pack ( pop )) 
#line 18 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 34 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
void __cdecl _swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 52
__declspec(noreturn) void __cdecl exit(int _Code); 
#line 53
__declspec(noreturn) void __cdecl _exit(int _Code); 
#line 54
__declspec(noreturn) void __cdecl _Exit(int _Code); 
#line 55
__declspec(noreturn) void __cdecl quick_exit(int _Code); 
#line 56
__declspec(noreturn) void __cdecl abort(); 
#line 63 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
unsigned __cdecl _set_abort_behavior(unsigned _Flags, unsigned _Mask); 
#line 73
typedef int (__cdecl *_onexit_t)(void); 
#line 140 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl atexit(void (__cdecl *)(void)); 
#line 141
_onexit_t __cdecl _onexit(_onexit_t _Func); 
#line 144 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl at_quick_exit(void (__cdecl *)(void)); 
#line 155
typedef void (__cdecl *_purecall_handler)(void); 
#line 158
typedef void (__cdecl *_invalid_parameter_handler)(const __wchar_t *, const __wchar_t *, const __wchar_t *, unsigned, uintptr_t); 
#line 167
_purecall_handler __cdecl _set_purecall_handler(_purecall_handler _Handler); 
#line 171
_purecall_handler __cdecl _get_purecall_handler(); 
#line 174
_invalid_parameter_handler __cdecl _set_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 178
_invalid_parameter_handler __cdecl _get_invalid_parameter_handler(); 
#line 180
_invalid_parameter_handler __cdecl _set_thread_local_invalid_parameter_handler(_invalid_parameter_handler _Handler); 
#line 184
_invalid_parameter_handler __cdecl _get_thread_local_invalid_parameter_handler(); 
#line 208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl _set_error_mode(int _Mode); 
#line 213
int *__cdecl _errno(); 
#line 216
errno_t __cdecl _set_errno(int _Value); 
#line 217
errno_t __cdecl _get_errno(int * _Value); 
#line 219
unsigned long *__cdecl __doserrno(); 
#line 222
errno_t __cdecl _set_doserrno(unsigned long _Value); 
#line 223
errno_t __cdecl _get_doserrno(unsigned long * _Value); 
#line 226
char **__cdecl __sys_errlist(); 
#line 229
int *__cdecl __sys_nerr(); 
#line 232
void __cdecl perror(const char * _ErrMsg); 
#line 238 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
char **__cdecl __p__pgmptr(); 
#line 239
__wchar_t **__cdecl __p__wpgmptr(); 
#line 240
int *__cdecl __p__fmode(); 
#line 255 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _get_pgmptr(char ** _Value); 
#line 258
errno_t __cdecl _get_wpgmptr(__wchar_t ** _Value); 
#line 260
errno_t __cdecl _set_fmode(int _Mode); 
#line 262
errno_t __cdecl _get_fmode(int * _PMode); 
#line 275
typedef 
#line 271
struct _div_t { 
#line 273
int quot; 
#line 274
int rem; 
#line 275
} div_t; 
#line 281
typedef 
#line 277
struct _ldiv_t { 
#line 279
long quot; 
#line 280
long rem; 
#line 281
} ldiv_t; 
#line 287
typedef 
#line 283
struct _lldiv_t { 
#line 285
__int64 quot; 
#line 286
__int64 rem; 
#line 287
} lldiv_t; 
#line 289
int __cdecl abs(int _Number); 
#line 290
long __cdecl labs(long _Number); 
#line 291
__int64 __cdecl llabs(__int64 _Number); 
#line 292
__int64 __cdecl _abs64(__int64 _Number); 
#line 294
unsigned short __cdecl _byteswap_ushort(unsigned short _Number); 
#line 295
unsigned long __cdecl _byteswap_ulong(unsigned long _Number); 
#line 296
unsigned __int64 __cdecl _byteswap_uint64(unsigned __int64 _Number); 
#line 298
div_t __cdecl div(int _Numerator, int _Denominator); 
#line 299
ldiv_t __cdecl ldiv(long _Numerator, long _Denominator); 
#line 300
lldiv_t __cdecl lldiv(__int64 _Numerator, __int64 _Denominator); 
#line 304
#pragma warning (push)
#pragma warning (disable:6540)
#line 307
unsigned __cdecl _rotl(unsigned _Value, int _Shift); 
#line 313
unsigned long __cdecl _lrotl(unsigned long _Value, int _Shift); 
#line 318
unsigned __int64 __cdecl _rotl64(unsigned __int64 _Value, int _Shift); 
#line 323
unsigned __cdecl _rotr(unsigned _Value, int _Shift); 
#line 329
unsigned long __cdecl _lrotr(unsigned long _Value, int _Shift); 
#line 334
unsigned __int64 __cdecl _rotr64(unsigned __int64 _Value, int _Shift); 
#line 339
#pragma warning (pop)
#line 346
void __cdecl srand(unsigned _Seed); 
#line 348
int __cdecl rand(); 
#line 357 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
extern "C++" {
#line 359
inline long abs(const long _X) throw() 
#line 360
{ 
#line 361
return labs(_X); 
#line 362
} 
#line 364
inline __int64 abs(const __int64 _X) throw() 
#line 365
{ 
#line 366
return llabs(_X); 
#line 367
} 
#line 369
inline ldiv_t div(const long _A1, const long _A2) throw() 
#line 370
{ 
#line 371
return ldiv(_A1, _A2); 
#line 372
} 
#line 374
inline lldiv_t div(const __int64 _A1, const __int64 _A2) throw() 
#line 375
{ 
#line 376
return lldiv(_A1, _A2); 
#line 377
} 
#line 378
}
#line 390 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma pack ( push, 4 )
#line 394
typedef 
#line 392
struct { 
#line 393
unsigned char ld[10]; 
#line 394
} _LDOUBLE; 
#pragma pack ( pop )
#line 414 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
typedef 
#line 412
struct { 
#line 413
double x; 
#line 414
} _CRT_DOUBLE; 
#line 419
typedef 
#line 417
struct { 
#line 418
float f; 
#line 419
} _CRT_FLOAT; 
#line 428
typedef 
#line 426
struct { 
#line 427
long double x; 
#line 428
} _LONGDOUBLE; 
#line 432
#pragma pack ( push, 4 )
#line 436
typedef 
#line 434
struct { 
#line 435
unsigned char ld12[12]; 
#line 436
} _LDBL12; 
#pragma pack ( pop )
#line 446
double __cdecl atof(const char * _String); 
#line 447
int __cdecl atoi(const char * _String); 
#line 448
long __cdecl atol(const char * _String); 
#line 449
__int64 __cdecl atoll(const char * _String); 
#line 450
__int64 __cdecl _atoi64(const char * _String); 
#line 452
double __cdecl _atof_l(const char * _String, _locale_t _Locale); 
#line 453
int __cdecl _atoi_l(const char * _String, _locale_t _Locale); 
#line 454
long __cdecl _atol_l(const char * _String, _locale_t _Locale); 
#line 455
__int64 __cdecl _atoll_l(const char * _String, _locale_t _Locale); 
#line 456
__int64 __cdecl _atoi64_l(const char * _String, _locale_t _Locale); 
#line 458
int __cdecl _atoflt(_CRT_FLOAT * _Result, const char * _String); 
#line 459
int __cdecl _atodbl(_CRT_DOUBLE * _Result, char * _String); 
#line 460
int __cdecl _atoldbl(_LDOUBLE * _Result, char * _String); 
#line 463
int __cdecl _atoflt_l(_CRT_FLOAT * _Result, const char * _String, _locale_t _Locale); 
#line 470
int __cdecl _atodbl_l(_CRT_DOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 478
int __cdecl _atoldbl_l(_LDOUBLE * _Result, char * _String, _locale_t _Locale); 
#line 485
float __cdecl strtof(const char * _String, char ** _EndPtr); 
#line 491
float __cdecl _strtof_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 498
double __cdecl strtod(const char * _String, char ** _EndPtr); 
#line 504
double __cdecl _strtod_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 511
long double __cdecl strtold(const char * _String, char ** _EndPtr); 
#line 517
long double __cdecl _strtold_l(const char * _String, char ** _EndPtr, _locale_t _Locale); 
#line 524
long __cdecl strtol(const char * _String, char ** _EndPtr, int _Radix); 
#line 531
long __cdecl _strtol_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 539
__int64 __cdecl strtoll(const char * _String, char ** _EndPtr, int _Radix); 
#line 546
__int64 __cdecl _strtoll_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 554
unsigned long __cdecl strtoul(const char * _String, char ** _EndPtr, int _Radix); 
#line 561
unsigned long __cdecl _strtoul_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 569
unsigned __int64 __cdecl strtoull(const char * _String, char ** _EndPtr, int _Radix); 
#line 576
unsigned __int64 __cdecl _strtoull_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 584
__int64 __cdecl _strtoi64(const char * _String, char ** _EndPtr, int _Radix); 
#line 591
__int64 __cdecl _strtoi64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 599
unsigned __int64 __cdecl _strtoui64(const char * _String, char ** _EndPtr, int _Radix); 
#line 606
unsigned __int64 __cdecl _strtoui64_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 622
errno_t __cdecl _itoa_s(int _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 629
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _itoa_s(int _Value, char (&_Buffer)[_Size], int _Radix) throw() { return _itoa_s(_Value, _Buffer, _Size, _Radix); } }
#line 637 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
char *__cdecl _itoa(int _Value, char * _Buffer, int _Radix); 
#line 646 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 650
errno_t __cdecl _ltoa_s(long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 657
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _ltoa_s(long _Value, char (&_Buffer)[_Size], int _Radix) throw() { return _ltoa_s(_Value, _Buffer, _Size, _Radix); } }
#line 664 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl _ltoa(long _Value, char * _Buffer, int _Radix); 
#line 673 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _ultoa_s(unsigned long _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 680
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _ultoa_s(unsigned long _Value, char (&_Buffer)[_Size], int _Radix) throw() { return _ultoa_s(_Value, _Buffer, _Size, _Radix); } }
#line 687 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28726)
char *__cdecl _ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 695 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 699
errno_t __cdecl _i64toa_s(__int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 708
char *__cdecl _i64toa(__int64 _Value, char * _Buffer, int _Radix); 
#line 716
errno_t __cdecl _ui64toa_s(unsigned __int64 _Value, char * _Buffer, size_t _BufferCount, int _Radix); 
#line 724
char *__cdecl _ui64toa(unsigned __int64 _Value, char * _Buffer, int _Radix); 
#line 744
errno_t __cdecl _ecvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 753
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _ecvt_s(char (&_Buffer)[_Size], double _Value, int _DigitCount, int *_PtDec, int *_PtSign) throw() { return _ecvt_s(_Buffer, _Size, _Value, _DigitCount, _PtDec, _PtSign); } }
#line 763 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl _ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 772
errno_t __cdecl _fcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 781
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _fcvt_s(char (&_Buffer)[_Size], double _Value, int _FractionalDigitCount, int *_PtDec, int *_PtSign) throw() { return _fcvt_s(_Buffer, _Size, _Value, _FractionalDigitCount, _PtDec, _PtSign); } }
#line 793 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl _fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 801
errno_t __cdecl _gcvt_s(char * _Buffer, size_t _BufferCount, double _Value, int _DigitCount); 
#line 808
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _gcvt_s(char (&_Buffer)[_Size], double _Value, int _DigitCount) throw() { return _gcvt_s(_Buffer, _Size, _Value, _DigitCount); } }
#line 817 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl _gcvt(double _Value, int _DigitCount, char * _Buffer); 
#line 846 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl ___mb_cur_max_func(); 
#line 849
int __cdecl ___mb_cur_max_l_func(_locale_t _Locale); 
#line 855 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl mblen(const char * _Ch, size_t _MaxCount); 
#line 861
int __cdecl _mblen_l(const char * _Ch, size_t _MaxCount, _locale_t _Locale); 
#line 869
size_t __cdecl _mbstrlen(const char * _String); 
#line 875
size_t __cdecl _mbstrlen_l(const char * _String, _locale_t _Locale); 
#line 882
size_t __cdecl _mbstrnlen(const char * _String, size_t _MaxCount); 
#line 889
size_t __cdecl _mbstrnlen_l(const char * _String, size_t _MaxCount, _locale_t _Locale); 
#line 896
int __cdecl mbtowc(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes); 
#line 903
int __cdecl _mbtowc_l(__wchar_t * _DstCh, const char * _SrcCh, size_t _SrcSizeInBytes, _locale_t _Locale); 
#line 911
errno_t __cdecl mbstowcs_s(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount); 
#line 919
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl mbstowcs_s(::size_t *_PtNumOfCharConverted, __wchar_t (&_Dest)[_Size], const char *_Source, ::size_t _MaxCount) throw() { return mbstowcs_s(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount); } }
#line 927 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
size_t __cdecl mbstowcs(__wchar_t * _Dest, const char * _Source, size_t _MaxCount); 
#line 935 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _mbstowcs_s_l(size_t * _PtNumOfCharConverted, __wchar_t * _DstBuf, size_t _SizeInWords, const char * _SrcBuf, size_t _MaxCount, _locale_t _Locale); 
#line 944
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _mbstowcs_s_l(::size_t *_PtNumOfCharConverted, __wchar_t (&_Dest)[_Size], const char *_Source, ::size_t _MaxCount, ::_locale_t _Locale) throw() { return _mbstowcs_s_l(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale); } }
#line 953 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
size_t __cdecl _mbstowcs_l(__wchar_t * _Dest, const char * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 966 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl wctomb(char * _MbCh, __wchar_t _WCh); 
#line 972
int __cdecl _wctomb_l(char * _MbCh, __wchar_t _WCh, _locale_t _Locale); 
#line 981
errno_t __cdecl wctomb_s(int * _SizeConverted, char * _MbCh, rsize_t _SizeInBytes, __wchar_t _WCh); 
#line 991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _wctomb_s_l(int * _SizeConverted, char * _MbCh, size_t _SizeInBytes, __wchar_t _WCh, _locale_t _Locale); 
#line 999
errno_t __cdecl wcstombs_s(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes); 
#line 1007
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl wcstombs_s(::size_t *_PtNumOfCharConverted, char (&_Dest)[_Size], const __wchar_t *_Source, ::size_t _MaxCount) throw() { return wcstombs_s(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount); } }
#line 1015 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
size_t __cdecl wcstombs(char * _Dest, const __wchar_t * _Source, size_t _MaxCount); 
#line 1023 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _wcstombs_s_l(size_t * _PtNumOfCharConverted, char * _Dst, size_t _DstSizeInBytes, const __wchar_t * _Src, size_t _MaxCountInBytes, _locale_t _Locale); 
#line 1032
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wcstombs_s_l(::size_t *_PtNumOfCharConverted, char (&_Dest)[_Size], const __wchar_t *_Source, ::size_t _MaxCount, ::_locale_t _Locale) throw() { return _wcstombs_s_l(_PtNumOfCharConverted, _Dest, _Size, _Source, _MaxCount, _Locale); } }
#line 1041 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
size_t __cdecl _wcstombs_l(char * _Dest, const __wchar_t * _Source, size_t _MaxCount, _locale_t _Locale); 
#line 1071 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
__declspec(allocator) char *__cdecl _fullpath(char * _Buffer, const char * _Path, size_t _BufferCount); 
#line 1080
errno_t __cdecl _makepath_s(char * _Buffer, size_t _BufferCount, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1089
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _makepath_s(char (&_Buffer)[_Size], const char *_Drive, const char *_Dir, const char *_Filename, const char *_Ext) throw() { return _makepath_s(_Buffer, _Size, _Drive, _Dir, _Filename, _Ext); } }
#line 1098 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
void __cdecl _makepath(char * _Buffer, const char * _Drive, const char * _Dir, const char * _Filename, const char * _Ext); 
#line 1109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(pop)
#line 1112
void __cdecl _splitpath(const char * _FullPath, char * _Drive, char * _Dir, char * _Filename, char * _Ext); 
#line 1121
errno_t __cdecl _splitpath_s(const char * _FullPath, char * _Drive, size_t _DriveCount, char * _Dir, size_t _DirCount, char * _Filename, size_t _FilenameCount, char * _Ext, size_t _ExtCount); 
#line 1133
extern "C++" {template< size_t _DriveSize, size_t _DirSize, size_t _NameSize, size_t _ExtSize> inline ::errno_t __cdecl _splitpath_s(const char *_Dest, char (&_Drive)[_DriveSize], char (&_Dir)[_DirSize], char (&_Name)[_NameSize], char (&_Ext)[_ExtSize]) throw() { return _splitpath_s(_Dest, _Drive, _DriveSize, _Dir, _DirSize, _Name, _NameSize, _Ext, _ExtSize); } }
#line 1139
errno_t __cdecl getenv_s(size_t * _RequiredCount, char * _Buffer, rsize_t _BufferCount, const char * _VarName); 
#line 1151 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
int *__cdecl __p___argc(); 
#line 1152
char ***__cdecl __p___argv(); 
#line 1153
__wchar_t ***__cdecl __p___wargv(); 
#line 1165 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
char ***__cdecl __p__environ(); 
#line 1166
__wchar_t ***__cdecl __p__wenviron(); 
#line 1191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
char *__cdecl getenv(const char * _VarName); 
#line 1195
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl getenv_s(::size_t *_RequiredCount, char (&_Buffer)[_Size], const char *_VarName) throw() { return getenv_s(_RequiredCount, _Buffer, _Size, _VarName); } }
#line 1208 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
errno_t __cdecl _dupenv_s(char ** _Buffer, size_t * _BufferCount, const char * _VarName); 
#line 1218 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
int __cdecl system(const char * _Command); 
#line 1224
#pragma warning (push)
#pragma warning (disable:6540)
#line 1228
int __cdecl _putenv(const char * _EnvString); 
#line 1233
errno_t __cdecl _putenv_s(const char * _Name, const char * _Value); 
#line 1238
#pragma warning (pop)
#line 1240
errno_t __cdecl _searchenv_s(const char * _Filename, const char * _VarName, char * _Buffer, size_t _BufferCount); 
#line 1247
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _searchenv_s(const char *_Filename, const char *_VarName, char (&_Buffer)[_Size]) throw() { return _searchenv_s(_Filename, _VarName, _Buffer, _Size); } }
#line 1254 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
void __cdecl _searchenv(const char * _Filename, const char * _VarName, char * _Buffer); 
#line 1262 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using SetErrorMode in" "stead. See online help for details.")) void __cdecl 
#line 1263
_seterrormode(int _Mode); 
#line 1267
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Beep instead. S" "ee online help for details.")) void __cdecl 
#line 1268
_beep(unsigned _Frequency, unsigned _Duration); 
#line 1273
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using Sleep instead. " "See online help for details.")) void __cdecl 
#line 1274
_sleep(unsigned long _Duration); 
#line 1296 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
#pragma warning(push)
#pragma warning(disable: 4141)
#line 1300
char *__cdecl ecvt(double _Value, int _DigitCount, int * _PtDec, int * _PtSign); 
#line 1308
char *__cdecl fcvt(double _Value, int _FractionalDigitCount, int * _PtDec, int * _PtSign); 
#line 1316
char *__cdecl gcvt(double _Value, int _DigitCount, char * _DstBuf); 
#line 1323
char *__cdecl itoa(int _Value, char * _Buffer, int _Radix); 
#line 1330
char *__cdecl ltoa(long _Value, char * _Buffer, int _Radix); 
#line 1338
void __cdecl swab(char * _Buf1, char * _Buf2, int _SizeInBytes); 
#line 1345
char *__cdecl ultoa(unsigned long _Value, char * _Buffer, int _Radix); 
#line 1354
int __cdecl putenv(const char * _EnvString); 
#line 1358
#pragma warning(pop)
#line 1360
_onexit_t __cdecl onexit(_onexit_t _Func); 
#line 1366 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdlib.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
extern "C++" {
#line 15
#pragma pack ( push, 8 )
#line 17
#pragma warning(push)
#pragma warning(disable: 4985)
#line 49 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
namespace std { 
#line 51
struct nothrow_t { 
#line 53
explicit nothrow_t() = default;
#line 55 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
}; 
#line 60
extern const nothrow_t nothrow; 
#line 62 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
}
#line 66 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
__declspec(allocator) void *__cdecl operator new(size_t _Size); 
#line 71
__declspec(allocator) void *__cdecl operator new(size_t _Size, const std::nothrow_t &) noexcept; 
#line 77
__declspec(allocator) void *__cdecl operator new[](size_t _Size); 
#line 82
__declspec(allocator) void *__cdecl operator new[](size_t _Size, const std::nothrow_t &) noexcept; 
#line 87
void __cdecl operator delete(void * _Block) noexcept; 
#line 91
void __cdecl operator delete(void * _Block, const std::nothrow_t &) noexcept; 
#line 96
void __cdecl operator delete[](void * _Block) noexcept; 
#line 100
void __cdecl operator delete[](void * _Block, const std::nothrow_t &) noexcept; 
#line 105
void __cdecl operator delete(void * _Block, size_t _Size) noexcept; 
#line 110
void __cdecl operator delete[](void * _Block, size_t _Size) noexcept; 
#line 178 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
#pragma warning(push)
#pragma warning(disable: 4577)
#pragma warning(disable: 4514)
#line 184
inline void *__cdecl operator new(size_t _Size, void *_Where) noexcept 
#line 185
{ 
#line 186
(void)_Size; 
#line 187
return _Where; 
#line 188
} 
#line 190
inline void __cdecl operator delete(void *, void *) noexcept 
#line 191
{ 
#line 193
} 
#line 199 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
inline void *__cdecl operator new[](size_t _Size, void *
#line 200
_Where) noexcept 
#line 201
{ 
#line 202
(void)_Size; 
#line 203
return _Where; 
#line 204
} 
#line 206
inline void __cdecl operator delete[](void *, void *) noexcept 
#line 207
{ 
#line 208
} 
#line 217 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new.h"
}
#line 210
#pragma warning(pop)
#line 214
#pragma warning(pop)
#pragma pack ( pop )
#line 13 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new_debug.h"
extern "C++" {
#line 15
#pragma pack ( push, 8 )
#line 23
__declspec(allocator) void *__cdecl operator new(size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 31
__declspec(allocator) void *__cdecl operator new[](size_t _Size, int _BlockUse, const char * _FileName, int _LineNumber); 
#line 38
void __cdecl operator delete(void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 45
void __cdecl operator delete[](void * _Block, int _BlockUse, const char * _FileName, int _LineNumber) noexcept; 
#line 58 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_new_debug.h"
}
#line 56
#pragma pack ( pop )
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\crtdbg.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 19
typedef void *_HFILE; 
#line 45
typedef int (__cdecl *_CRT_REPORT_HOOK)(int, char *, int *); 
#line 46
typedef int (__cdecl *_CRT_REPORT_HOOKW)(int, __wchar_t *, int *); 
#line 52
typedef int (__cdecl *_CRT_ALLOC_HOOK)(int, void *, size_t, int, long, const unsigned char *, int); 
#line 108
typedef void (__cdecl *_CRT_DUMP_CLIENT)(void *, size_t); 
#line 114
struct _CrtMemBlockHeader; 
#line 123
typedef 
#line 116
struct _CrtMemState { 
#line 118
_CrtMemBlockHeader *pBlockHeader; 
#line 119
size_t lCounts[5]; 
#line 120
size_t lSizes[5]; 
#line 121
size_t lHighWaterCount; 
#line 122
size_t lTotalCount; 
#line 123
} _CrtMemState; 
#line 809 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\crtdbg.h"
}__pragma( pack ( pop )) 
#line 10 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 132 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma detect_mismatch("_MSC_VER", "1900")
#line 136 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma detect_mismatch("_ITERATOR_DEBUG_LEVEL", "0")
#line 141 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma detect_mismatch("RuntimeLibrary", "MT_StaticRelease")
#line 57 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\use_ansi.h"
#pragma comment(lib, "libcpmt")
#line 332 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
namespace std { 
#line 333
enum _Uninitialized { 
#line 335
_Noinit
#line 336
}; 
#line 339
class _Lockit { 
#line 360 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
public: __thiscall _Lockit(); 
#line 361
explicit __thiscall _Lockit(int); 
#line 362
__thiscall ~_Lockit() noexcept; 
#line 365 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
static void __cdecl _Lockit_ctor(int); 
#line 366
static void __cdecl _Lockit_dtor(int); 
#line 369
private: static void __cdecl _Lockit_ctor(_Lockit *); 
#line 370
static void __cdecl _Lockit_ctor(_Lockit *, int); 
#line 371
static void __cdecl _Lockit_dtor(_Lockit *); 
#line 374
public: _Lockit(const _Lockit &) = delete;
#line 375
_Lockit &operator=(const _Lockit &) = delete;
#line 378
private: int _Locktype; 
#line 379
}; 
#line 465 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
class _Init_locks { 
#line 480 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
public: __thiscall _Init_locks(); 
#line 481
__thiscall ~_Init_locks() noexcept; 
#line 485 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
private: static void __cdecl _Init_locks_ctor(_Init_locks *); 
#line 486
static void __cdecl _Init_locks_dtor(_Init_locks *); 
#line 487
}; 
#line 524 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
}
#line 533 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\yvals.h"
#pragma warning(pop)
#pragma pack ( pop )
#line 11 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\cstdlib"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 19
inline double abs(double _Xx) noexcept 
#line 20
{ 
#line 21
return ::fabs(_Xx); 
#line 22
} 
#line 24
inline float abs(float _Xx) noexcept 
#line 25
{ 
#line 26
return ::fabsf(_Xx); 
#line 27
} 
#line 29
inline long double abs(long double _Xx) noexcept 
#line 30
{ 
#line 31
return ::fabsl(_Xx); 
#line 32
} 
#line 34
namespace std { 
#line 35
using ::size_t;using ::div_t;using ::ldiv_t;
#line 36
using ::abort;using ::abs;using ::atexit;
#line 37
using ::atof;using ::atoi;using ::atol;
#line 38
using ::bsearch;using ::calloc;using ::div;
#line 39
using ::exit;using ::free;
#line 40
using ::labs;using ::ldiv;using ::malloc;
#line 41
using ::mblen;using ::mbstowcs;using ::mbtowc;
#line 42
using ::qsort;using ::rand;using ::realloc;
#line 43
using ::srand;using ::strtod;using ::strtol;
#line 44
using ::strtoul;
#line 45
using ::wcstombs;using ::wctomb;
#line 47
using ::lldiv_t;
#line 50
using ::getenv;
#line 51
using ::system;
#line 54 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\cstdlib"
using ::atoll;using ::llabs;using ::lldiv;
#line 55
using ::strtof;using ::strtold;
#line 56
using ::strtoll;using ::strtoull;
#line 58
using ::_Exit;using ::at_quick_exit;using ::quick_exit;
#line 59
}
#line 63
#pragma warning(pop)
#pragma pack ( pop )
#line 10 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\cmath"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 17
inline double pow(double _Xx, int _Yx) noexcept 
#line 18
{ 
#line 19
if (_Yx == 2) { 
#line 20
return (_Xx * _Xx); }  
#line 22
return ::pow(_Xx, static_cast< double>(_Yx)); 
#line 23
} 
#line 25
inline float acos(float _Xx) noexcept 
#line 26
{ 
#line 27
return ::acosf(_Xx); 
#line 28
} 
#line 30
inline float acosh(float _Xx) noexcept 
#line 31
{ 
#line 32
return ::acoshf(_Xx); 
#line 33
} 
#line 35
inline float asin(float _Xx) noexcept 
#line 36
{ 
#line 37
return ::asinf(_Xx); 
#line 38
} 
#line 40
inline float asinh(float _Xx) noexcept 
#line 41
{ 
#line 42
return ::asinhf(_Xx); 
#line 43
} 
#line 45
inline float atan(float _Xx) noexcept 
#line 46
{ 
#line 47
return ::atanf(_Xx); 
#line 48
} 
#line 50
inline float atanh(float _Xx) noexcept 
#line 51
{ 
#line 52
return ::atanhf(_Xx); 
#line 53
} 
#line 55
inline float atan2(float _Yx, float _Xx) noexcept 
#line 56
{ 
#line 57
return ::atan2f(_Yx, _Xx); 
#line 58
} 
#line 60
inline float cbrt(float _Xx) noexcept 
#line 61
{ 
#line 62
return ::cbrtf(_Xx); 
#line 63
} 
#line 65
inline float ceil(float _Xx) noexcept 
#line 66
{ 
#line 67
return ::ceilf(_Xx); 
#line 68
} 
#line 70
inline float copysign(float _Number, float 
#line 71
_Sign) noexcept 
#line 72
{ 
#line 73
return ::copysignf(_Number, _Sign); 
#line 74
} 
#line 76
inline float cos(float _Xx) noexcept 
#line 77
{ 
#line 78
return ::cosf(_Xx); 
#line 79
} 
#line 81
inline float cosh(float _Xx) noexcept 
#line 82
{ 
#line 83
return ::coshf(_Xx); 
#line 84
} 
#line 86
inline float erf(float _Xx) noexcept 
#line 87
{ 
#line 88
return ::erff(_Xx); 
#line 89
} 
#line 91
inline float erfc(float _Xx) noexcept 
#line 92
{ 
#line 93
return ::erfcf(_Xx); 
#line 94
} 
#line 96
inline float exp(float _Xx) noexcept 
#line 97
{ 
#line 98
return ::expf(_Xx); 
#line 99
} 
#line 101
inline float exp2(float _Xx) noexcept 
#line 102
{ 
#line 103
return ::exp2f(_Xx); 
#line 104
} 
#line 106
inline float expm1(float _Xx) noexcept 
#line 107
{ 
#line 108
return ::expm1f(_Xx); 
#line 109
} 
#line 111
inline float fabs(float _Xx) noexcept 
#line 112
{ 
#line 113
return ::fabsf(_Xx); 
#line 114
} 
#line 116
inline float fdim(float _Xx, float _Yx) noexcept 
#line 117
{ 
#line 118
return ::fdimf(_Xx, _Yx); 
#line 119
} 
#line 121
inline float floor(float _Xx) noexcept 
#line 122
{ 
#line 123
return ::floorf(_Xx); 
#line 124
} 
#line 126
inline float fma(float _Xx, float _Yx, float 
#line 127
_Zx) noexcept 
#line 128
{ 
#line 129
return ::fmaf(_Xx, _Yx, _Zx); 
#line 130
} 
#line 132
inline float fmax(float _Xx, float _Yx) noexcept 
#line 133
{ 
#line 134
return ::fmaxf(_Xx, _Yx); 
#line 135
} 
#line 137
inline float fmin(float _Xx, float _Yx) noexcept 
#line 138
{ 
#line 139
return ::fminf(_Xx, _Yx); 
#line 140
} 
#line 142
inline float fmod(float _Xx, float _Yx) noexcept 
#line 143
{ 
#line 144
return ::fmodf(_Xx, _Yx); 
#line 145
} 
#line 147
inline float frexp(float _Xx, int *_Yx) noexcept 
#line 148
{ 
#line 149
return ::frexpf(_Xx, _Yx); 
#line 150
} 
#line 152
inline float hypot(float _Xx, float _Yx) noexcept 
#line 153
{ 
#line 154
return ::hypotf(_Xx, _Yx); 
#line 155
} 
#line 157
inline int ilogb(float _Xx) noexcept 
#line 158
{ 
#line 159
return ::ilogbf(_Xx); 
#line 160
} 
#line 162
inline float ldexp(float _Xx, int _Yx) noexcept 
#line 163
{ 
#line 164
return ::ldexpf(_Xx, _Yx); 
#line 165
} 
#line 167
inline float lgamma(float _Xx) noexcept 
#line 168
{ 
#line 169
return ::lgammaf(_Xx); 
#line 170
} 
#line 172
inline __int64 llrint(float _Xx) noexcept 
#line 173
{ 
#line 174
return ::llrintf(_Xx); 
#line 175
} 
#line 177
inline __int64 llround(float _Xx) noexcept 
#line 178
{ 
#line 179
return ::llroundf(_Xx); 
#line 180
} 
#line 182
inline float log(float _Xx) noexcept 
#line 183
{ 
#line 184
return ::logf(_Xx); 
#line 185
} 
#line 187
inline float log10(float _Xx) noexcept 
#line 188
{ 
#line 189
return ::log10f(_Xx); 
#line 190
} 
#line 192
inline float log1p(float _Xx) noexcept 
#line 193
{ 
#line 194
return ::log1pf(_Xx); 
#line 195
} 
#line 197
inline float log2(float _Xx) noexcept 
#line 198
{ 
#line 199
return ::log2f(_Xx); 
#line 200
} 
#line 202
inline float logb(float _Xx) noexcept 
#line 203
{ 
#line 204
return ::logbf(_Xx); 
#line 205
} 
#line 207
inline long lrint(float _Xx) noexcept 
#line 208
{ 
#line 209
return ::lrintf(_Xx); 
#line 210
} 
#line 212
inline long lround(float _Xx) noexcept 
#line 213
{ 
#line 214
return ::lroundf(_Xx); 
#line 215
} 
#line 217
inline float modf(float _Xx, float *_Yx) noexcept 
#line 218
{ 
#line 219
return ::modff(_Xx, _Yx); 
#line 220
} 
#line 222
inline float nearbyint(float _Xx) noexcept 
#line 223
{ 
#line 224
return ::nearbyintf(_Xx); 
#line 225
} 
#line 227
inline float nextafter(float _Xx, float _Yx) noexcept 
#line 228
{ 
#line 229
return ::nextafterf(_Xx, _Yx); 
#line 230
} 
#line 232
inline float nexttoward(float _Xx, long double 
#line 233
_Yx) noexcept 
#line 234
{ 
#line 235
return ::nexttowardf(_Xx, _Yx); 
#line 236
} 
#line 238
inline float pow(float _Xx, float 
#line 239
_Yx) noexcept 
#line 240
{ 
#line 241
return ::powf(_Xx, _Yx); 
#line 242
} 
#line 244
inline float pow(float _Xx, int _Yx) noexcept 
#line 245
{ 
#line 246
if (_Yx == 2) { 
#line 247
return (_Xx * _Xx); }  
#line 249
return ::powf(_Xx, static_cast< float>(_Yx)); 
#line 250
} 
#line 252
inline float remainder(float _Xx, float _Yx) noexcept 
#line 253
{ 
#line 254
return ::remainderf(_Xx, _Yx); 
#line 255
} 
#line 257
inline float remquo(float _Xx, float _Yx, int *
#line 258
_Zx) noexcept 
#line 259
{ 
#line 260
return ::remquof(_Xx, _Yx, _Zx); 
#line 261
} 
#line 263
inline float rint(float _Xx) noexcept 
#line 264
{ 
#line 265
return ::rintf(_Xx); 
#line 266
} 
#line 268
inline float round(float _Xx) noexcept 
#line 269
{ 
#line 270
return ::roundf(_Xx); 
#line 271
} 
#line 273
inline float scalbln(float _Xx, long _Yx) noexcept 
#line 274
{ 
#line 275
return ::scalblnf(_Xx, _Yx); 
#line 276
} 
#line 278
inline float scalbn(float _Xx, int _Yx) noexcept 
#line 279
{ 
#line 280
return ::scalbnf(_Xx, _Yx); 
#line 281
} 
#line 283
inline float sin(float _Xx) noexcept 
#line 284
{ 
#line 285
return ::sinf(_Xx); 
#line 286
} 
#line 288
inline float sinh(float _Xx) noexcept 
#line 289
{ 
#line 290
return ::sinhf(_Xx); 
#line 291
} 
#line 293
inline float sqrt(float _Xx) noexcept 
#line 294
{ 
#line 295
return ::sqrtf(_Xx); 
#line 296
} 
#line 298
inline float tan(float _Xx) noexcept 
#line 299
{ 
#line 300
return ::tanf(_Xx); 
#line 301
} 
#line 303
inline float tanh(float _Xx) noexcept 
#line 304
{ 
#line 305
return ::tanhf(_Xx); 
#line 306
} 
#line 308
inline float tgamma(float _Xx) noexcept 
#line 309
{ 
#line 310
return ::tgammaf(_Xx); 
#line 311
} 
#line 313
inline float trunc(float _Xx) noexcept 
#line 314
{ 
#line 315
return ::truncf(_Xx); 
#line 316
} 
#line 318
inline long double acos(long double _Xx) noexcept 
#line 319
{ 
#line 320
return ::acosl(_Xx); 
#line 321
} 
#line 323
inline long double acosh(long double _Xx) noexcept 
#line 324
{ 
#line 325
return ::acoshl(_Xx); 
#line 326
} 
#line 328
inline long double asin(long double _Xx) noexcept 
#line 329
{ 
#line 330
return ::asinl(_Xx); 
#line 331
} 
#line 333
inline long double asinh(long double _Xx) noexcept 
#line 334
{ 
#line 335
return ::asinhl(_Xx); 
#line 336
} 
#line 338
inline long double atan(long double _Xx) noexcept 
#line 339
{ 
#line 340
return ::atanl(_Xx); 
#line 341
} 
#line 343
inline long double atanh(long double _Xx) noexcept 
#line 344
{ 
#line 345
return ::atanhl(_Xx); 
#line 346
} 
#line 348
inline long double atan2(long double _Yx, long double 
#line 349
_Xx) noexcept 
#line 350
{ 
#line 351
return ::atan2l(_Yx, _Xx); 
#line 352
} 
#line 354
inline long double cbrt(long double _Xx) noexcept 
#line 355
{ 
#line 356
return ::cbrtl(_Xx); 
#line 357
} 
#line 359
inline long double ceil(long double _Xx) noexcept 
#line 360
{ 
#line 361
return ::ceill(_Xx); 
#line 362
} 
#line 364
inline long double copysign(long double _Number, long double 
#line 365
_Sign) noexcept 
#line 366
{ 
#line 367
return ::copysignl(_Number, _Sign); 
#line 368
} 
#line 370
inline long double cos(long double _Xx) noexcept 
#line 371
{ 
#line 372
return ::cosl(_Xx); 
#line 373
} 
#line 375
inline long double cosh(long double _Xx) noexcept 
#line 376
{ 
#line 377
return ::coshl(_Xx); 
#line 378
} 
#line 380
inline long double erf(long double _Xx) noexcept 
#line 381
{ 
#line 382
return ::erfl(_Xx); 
#line 383
} 
#line 385
inline long double erfc(long double _Xx) noexcept 
#line 386
{ 
#line 387
return ::erfcl(_Xx); 
#line 388
} 
#line 390
inline long double exp(long double _Xx) noexcept 
#line 391
{ 
#line 392
return ::expl(_Xx); 
#line 393
} 
#line 395
inline long double exp2(long double _Xx) noexcept 
#line 396
{ 
#line 397
return ::exp2l(_Xx); 
#line 398
} 
#line 400
inline long double expm1(long double _Xx) noexcept 
#line 401
{ 
#line 402
return ::expm1l(_Xx); 
#line 403
} 
#line 405
inline long double fabs(long double _Xx) noexcept 
#line 406
{ 
#line 407
return ::fabsl(_Xx); 
#line 408
} 
#line 410
inline long double fdim(long double _Xx, long double 
#line 411
_Yx) noexcept 
#line 412
{ 
#line 413
return ::fdiml(_Xx, _Yx); 
#line 414
} 
#line 416
inline long double floor(long double _Xx) noexcept 
#line 417
{ 
#line 418
return ::floorl(_Xx); 
#line 419
} 
#line 421
inline long double fma(long double _Xx, long double 
#line 422
_Yx, long double _Zx) noexcept 
#line 423
{ 
#line 424
return ::fmal(_Xx, _Yx, _Zx); 
#line 425
} 
#line 427
inline long double fmax(long double _Xx, long double 
#line 428
_Yx) noexcept 
#line 429
{ 
#line 430
return ::fmaxl(_Xx, _Yx); 
#line 431
} 
#line 433
inline long double fmin(long double _Xx, long double 
#line 434
_Yx) noexcept 
#line 435
{ 
#line 436
return ::fminl(_Xx, _Yx); 
#line 437
} 
#line 439
inline long double fmod(long double _Xx, long double 
#line 440
_Yx) noexcept 
#line 441
{ 
#line 442
return ::fmodl(_Xx, _Yx); 
#line 443
} 
#line 445
inline long double frexp(long double _Xx, int *
#line 446
_Yx) noexcept 
#line 447
{ 
#line 448
return ::frexpl(_Xx, _Yx); 
#line 449
} 
#line 451
inline long double hypot(long double _Xx, long double 
#line 452
_Yx) noexcept 
#line 453
{ 
#line 454
return ::hypotl(_Xx, _Yx); 
#line 455
} 
#line 457
inline int ilogb(long double _Xx) noexcept 
#line 458
{ 
#line 459
return ::ilogbl(_Xx); 
#line 460
} 
#line 462
inline long double ldexp(long double _Xx, int 
#line 463
_Yx) noexcept 
#line 464
{ 
#line 465
return ::ldexpl(_Xx, _Yx); 
#line 466
} 
#line 468
inline long double lgamma(long double _Xx) noexcept 
#line 469
{ 
#line 470
return ::lgammal(_Xx); 
#line 471
} 
#line 473
inline __int64 llrint(long double _Xx) noexcept 
#line 474
{ 
#line 475
return ::llrintl(_Xx); 
#line 476
} 
#line 478
inline __int64 llround(long double _Xx) noexcept 
#line 479
{ 
#line 480
return ::llroundl(_Xx); 
#line 481
} 
#line 483
inline long double log(long double _Xx) noexcept 
#line 484
{ 
#line 485
return ::logl(_Xx); 
#line 486
} 
#line 488
inline long double log10(long double _Xx) noexcept 
#line 489
{ 
#line 490
return ::log10l(_Xx); 
#line 491
} 
#line 493
inline long double log1p(long double _Xx) noexcept 
#line 494
{ 
#line 495
return ::log1pl(_Xx); 
#line 496
} 
#line 498
inline long double log2(long double _Xx) noexcept 
#line 499
{ 
#line 500
return ::log2l(_Xx); 
#line 501
} 
#line 503
inline long double logb(long double _Xx) noexcept 
#line 504
{ 
#line 505
return ::logbl(_Xx); 
#line 506
} 
#line 508
inline long lrint(long double _Xx) noexcept 
#line 509
{ 
#line 510
return ::lrintl(_Xx); 
#line 511
} 
#line 513
inline long lround(long double _Xx) noexcept 
#line 514
{ 
#line 515
return ::lroundl(_Xx); 
#line 516
} 
#line 518
inline long double modf(long double _Xx, long double *
#line 519
_Yx) noexcept 
#line 520
{ 
#line 521
return ::modfl(_Xx, _Yx); 
#line 522
} 
#line 524
inline long double nearbyint(long double _Xx) noexcept 
#line 525
{ 
#line 526
return ::nearbyintl(_Xx); 
#line 527
} 
#line 529
inline long double nextafter(long double _Xx, long double 
#line 530
_Yx) noexcept 
#line 531
{ 
#line 532
return ::nextafterl(_Xx, _Yx); 
#line 533
} 
#line 535
inline long double nexttoward(long double _Xx, long double 
#line 536
_Yx) noexcept 
#line 537
{ 
#line 538
return ::nexttowardl(_Xx, _Yx); 
#line 539
} 
#line 541
inline long double pow(long double _Xx, long double 
#line 542
_Yx) noexcept 
#line 543
{ 
#line 544
return ::powl(_Xx, _Yx); 
#line 545
} 
#line 547
inline long double pow(long double _Xx, int 
#line 548
_Yx) noexcept 
#line 549
{ 
#line 550
if (_Yx == 2) { 
#line 551
return (_Xx * _Xx); }  
#line 553
return ::powl(_Xx, static_cast< long double>(_Yx)); 
#line 554
} 
#line 556
inline long double remainder(long double _Xx, long double 
#line 557
_Yx) noexcept 
#line 558
{ 
#line 559
return ::remainderl(_Xx, _Yx); 
#line 560
} 
#line 562
inline long double remquo(long double _Xx, long double 
#line 563
_Yx, int *_Zx) noexcept 
#line 564
{ 
#line 565
return ::remquol(_Xx, _Yx, _Zx); 
#line 566
} 
#line 568
inline long double rint(long double _Xx) noexcept 
#line 569
{ 
#line 570
return ::rintl(_Xx); 
#line 571
} 
#line 573
inline long double round(long double _Xx) noexcept 
#line 574
{ 
#line 575
return ::roundl(_Xx); 
#line 576
} 
#line 578
inline long double scalbln(long double _Xx, long 
#line 579
_Yx) noexcept 
#line 580
{ 
#line 581
return ::scalblnl(_Xx, _Yx); 
#line 582
} 
#line 584
inline long double scalbn(long double _Xx, int 
#line 585
_Yx) noexcept 
#line 586
{ 
#line 587
return ::scalbnl(_Xx, _Yx); 
#line 588
} 
#line 590
inline long double sin(long double _Xx) noexcept 
#line 591
{ 
#line 592
return ::sinl(_Xx); 
#line 593
} 
#line 595
inline long double sinh(long double _Xx) noexcept 
#line 596
{ 
#line 597
return ::sinhl(_Xx); 
#line 598
} 
#line 600
inline long double sqrt(long double _Xx) noexcept 
#line 601
{ 
#line 602
return ::sqrtl(_Xx); 
#line 603
} 
#line 605
inline long double tan(long double _Xx) noexcept 
#line 606
{ 
#line 607
return ::tanl(_Xx); 
#line 608
} 
#line 610
inline long double tanh(long double _Xx) noexcept 
#line 611
{ 
#line 612
return ::tanhl(_Xx); 
#line 613
} 
#line 615
inline long double tgamma(long double _Xx) noexcept 
#line 616
{ 
#line 617
return ::tgammal(_Xx); 
#line 618
} 
#line 620
inline long double trunc(long double _Xx) noexcept 
#line 621
{ 
#line 622
return ::truncl(_Xx); 
#line 623
} 
#line 8 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtr1common"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 15
namespace std { 
#line 17
template < class _Ty,
 _Ty _Val >
 struct integral_constant
 {
 static constexpr _Ty value = _Val;

 using value_type = _Ty;
 using type = integral_constant;

 constexpr operator value_type ( ) const noexcept
  {
  return ( value );
  }

  constexpr value_type operator ( ) ( ) const noexcept
  {
  return ( value );
  }
 };
#line 38
template< bool _Val> using bool_constant = integral_constant< bool, _Val> ; 
#line 41
using true_type = bool_constant< true> ; 
#line 42
using false_type = bool_constant< false> ; 
#line 45
template< bool _Test, class 
#line 46
_Ty = void> 
#line 47
struct enable_if { 
#line 49
}; 
#line 51
template< class _Ty> 
#line 52
struct enable_if< true, _Ty>  { 
#line 54
using type = _Ty; 
#line 55
}; 
#line 57
template< bool _Test, class 
#line 58
_Ty = void> using enable_if_t = typename enable_if< _Test, _Ty> ::type; 
#line 62
template< bool _Test, class 
#line 63
_Ty1, class 
#line 64
_Ty2> 
#line 65
struct conditional { 
#line 67
using type = _Ty2; 
#line 68
}; 
#line 70
template< class _Ty1, class 
#line 71
_Ty2> 
#line 72
struct conditional< true, _Ty1, _Ty2>  { 
#line 74
using type = _Ty1; 
#line 75
}; 
#line 77
template< bool _Test, class 
#line 78
_Ty1, class 
#line 79
_Ty2> using conditional_t = typename conditional< _Test, _Ty1, _Ty2> ::type; 
#line 83
template< class _Ty1, class 
#line 84
_Ty2> 
#line 85
struct is_same : public false_type { 
#line 88
}; 
#line 90
template< class _Ty1> 
#line 91
struct is_same< _Ty1, _Ty1>  : public true_type { 
#line 94
}; 
#line 96
template< class _Ty, class 
#line 97
_Uty> constexpr bool 
#line 98
is_same_v = (is_same< _Ty, _Uty> ::value); 
#line 101
template< class _Ty> 
#line 102
struct remove_const { 
#line 104
using type = _Ty; 
#line 105
}; 
#line 107
template< class _Ty> 
#line 108
struct remove_const< const _Ty>  { 
#line 110
using type = _Ty; 
#line 111
}; 
#line 113
template< class _Ty> using remove_const_t = typename remove_const< _Ty> ::type; 
#line 117
template< class _Ty> 
#line 118
struct remove_volatile { 
#line 120
using type = _Ty; 
#line 121
}; 
#line 123
template< class _Ty> 
#line 124
struct remove_volatile< volatile _Ty>  { 
#line 126
using type = _Ty; 
#line 127
}; 
#line 129
template< class _Ty> using remove_volatile_t = typename remove_volatile< _Ty> ::type; 
#line 133
template< class _Ty> 
#line 134
struct remove_cv { 
#line 136
using type = _Ty; 
#line 137
}; 
#line 139
template< class _Ty> 
#line 140
struct remove_cv< const _Ty>  { 
#line 142
using type = _Ty; 
#line 143
}; 
#line 145
template< class _Ty> 
#line 146
struct remove_cv< volatile _Ty>  { 
#line 148
using type = _Ty; 
#line 149
}; 
#line 151
template< class _Ty> 
#line 152
struct remove_cv< const volatile _Ty>  { 
#line 154
using type = _Ty; 
#line 155
}; 
#line 157
template< class _Ty> using remove_cv_t = typename remove_cv< _Ty> ::type; 
#line 161
template< class _Ty> 
#line 162
struct _Is_integral : public false_type { 
#line 165
}; 
#line 168
template<> struct _Is_integral< bool>  : public true_type { 
#line 171
}; 
#line 174
template<> struct _Is_integral< char>  : public true_type { 
#line 177
}; 
#line 180
template<> struct _Is_integral< unsigned char>  : public true_type { 
#line 183
}; 
#line 186
template<> struct _Is_integral< signed char>  : public true_type { 
#line 189
}; 
#line 193
template<> struct _Is_integral< __wchar_t>  : public true_type { 
#line 196
}; 
#line 200 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtr1common"
template<> struct _Is_integral< char16_t>  : public true_type { 
#line 203
}; 
#line 206
template<> struct _Is_integral< char32_t>  : public true_type { 
#line 209
}; 
#line 212
template<> struct _Is_integral< unsigned short>  : public true_type { 
#line 215
}; 
#line 218
template<> struct _Is_integral< short>  : public true_type { 
#line 221
}; 
#line 224
template<> struct _Is_integral< unsigned>  : public true_type { 
#line 227
}; 
#line 230
template<> struct _Is_integral< int>  : public true_type { 
#line 233
}; 
#line 236
template<> struct _Is_integral< unsigned long>  : public true_type { 
#line 239
}; 
#line 242
template<> struct _Is_integral< long>  : public true_type { 
#line 245
}; 
#line 248
template<> struct _Is_integral< unsigned __int64>  : public true_type { 
#line 251
}; 
#line 254
template<> struct _Is_integral< __int64>  : public true_type { 
#line 257
}; 
#line 260
template< class _Ty> 
#line 261
struct is_integral : public _Is_integral< remove_cv_t< _Ty> > ::type { 
#line 264
}; 
#line 266
template< class _Ty> constexpr bool 
#line 267
is_integral_v = (is_integral< _Ty> ::value); 
#line 270
template< class _Ty> 
#line 271
struct _Is_floating_point : public false_type { 
#line 274
}; 
#line 277
template<> struct _Is_floating_point< float>  : public true_type { 
#line 280
}; 
#line 283
template<> struct _Is_floating_point< double>  : public true_type { 
#line 286
}; 
#line 289
template<> struct _Is_floating_point< long double>  : public true_type { 
#line 292
}; 
#line 295
template< class _Ty> 
#line 296
struct is_floating_point : public _Is_floating_point< remove_cv_t< _Ty> > ::type { 
#line 299
}; 
#line 301
template< class _Ty> constexpr bool 
#line 302
is_floating_point_v = (is_floating_point< _Ty> ::value); 
#line 305
template< class _Ty> 
#line 306
struct is_arithmetic : public bool_constant< is_integral_v< _Ty>  || is_floating_point_v< _Ty> >  { 
#line 310
}; 
#line 312
template< class _Ty> constexpr bool 
#line 313
is_arithmetic_v = (is_arithmetic< _Ty> ::value); 
#line 316
template< class _Ty> 
#line 317
struct remove_reference { 
#line 319
using type = _Ty; 
#line 320
}; 
#line 322
template< class _Ty> 
#line 323
struct remove_reference< _Ty &>  { 
#line 325
using type = _Ty; 
#line 326
}; 
#line 328
template< class _Ty> 
#line 329
struct remove_reference< _Ty &&>  { 
#line 331
using type = _Ty; 
#line 332
}; 
#line 334
template< class _Ty> using remove_reference_t = typename remove_reference< _Ty> ::type; 
#line 337
}
#line 340
#pragma warning(pop)
#pragma pack ( pop )
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
#pragma pack ( push, 8 )
#pragma warning(push,3)
#pragma warning(disable: 4455 4494 4619 4643 4702 4984 4988 )
#line 19
namespace std { 
#line 20
template< class _Ty1, class 
#line 21
_Ty2> using _Common_float_type_t = conditional_t< is_same_v< _Ty1, long double>  || is_same_v< _Ty2, long double> , long double, conditional_t< is_same_v< _Ty1, float>  && is_same_v< _Ty2, float> , float, double> > ; 
#line 26
}
#line 66
template < class _Ty1,
 class _Ty2,
 class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline
 :: std :: _Common_float_type_t < _Ty1, _Ty2 > pow ( const _Ty1 _Left, const _Ty2 _Right )
 {
 using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >;
 return ( :: pow ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) );
 }
#line 76
extern "C" double __cdecl acos(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double acos ( _Ty _Left ) { return ( :: acos ( static_cast < double > ( _Left ) ) ); }
#line 77
extern "C" double __cdecl asin(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double asin ( _Ty _Left ) { return ( :: asin ( static_cast < double > ( _Left ) ) ); }
#line 78
extern "C" double __cdecl atan(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double atan ( _Ty _Left ) { return ( :: atan ( static_cast < double > ( _Left ) ) ); }
#line 79
extern "C" double __cdecl atan2(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > atan2 ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: atan2 ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 80
extern "C" double __cdecl ceil(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double ceil ( _Ty _Left ) { return ( :: ceil ( static_cast < double > ( _Left ) ) ); }
#line 81
extern "C" double __cdecl cos(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double cos ( _Ty _Left ) { return ( :: cos ( static_cast < double > ( _Left ) ) ); }
#line 82
extern "C" double __cdecl cosh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double cosh ( _Ty _Left ) { return ( :: cosh ( static_cast < double > ( _Left ) ) ); }
#line 83
extern "C" double __cdecl exp(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double exp ( _Ty _Left ) { return ( :: exp ( static_cast < double > ( _Left ) ) ); }
#line 85
extern "C" double __cdecl fabs(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double fabs ( _Ty _Left ) { return ( :: fabs ( static_cast < double > ( _Left ) ) ); }
#line 87
extern "C" double __cdecl floor(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double floor ( _Ty _Left ) { return ( :: floor ( static_cast < double > ( _Left ) ) ); }
#line 88
extern "C" double __cdecl fmod(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmod ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: fmod ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 89
extern "C" double __cdecl frexp(double, int *); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double frexp ( _Ty _Left, int * _Arg2 ) { return ( :: frexp ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 90
extern "C" double __cdecl ldexp(double, int); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double ldexp ( _Ty _Left, int _Arg2 ) { return ( :: ldexp ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 91
extern "C" double __cdecl log(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double log ( _Ty _Left ) { return ( :: log ( static_cast < double > ( _Left ) ) ); }
#line 92
extern "C" double __cdecl log10(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double log10 ( _Ty _Left ) { return ( :: log10 ( static_cast < double > ( _Left ) ) ); }
#line 95
extern "C" double __cdecl sin(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double sin ( _Ty _Left ) { return ( :: sin ( static_cast < double > ( _Left ) ) ); }
#line 96
extern "C" double __cdecl sinh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double sinh ( _Ty _Left ) { return ( :: sinh ( static_cast < double > ( _Left ) ) ); }
#line 97
extern "C" double __cdecl sqrt(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double sqrt ( _Ty _Left ) { return ( :: sqrt ( static_cast < double > ( _Left ) ) ); }
#line 98
extern "C" double __cdecl tan(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double tan ( _Ty _Left ) { return ( :: tan ( static_cast < double > ( _Left ) ) ); }
#line 99
extern "C" double __cdecl tanh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double tanh ( _Ty _Left ) { return ( :: tanh ( static_cast < double > ( _Left ) ) ); }
#line 105
inline float _Fma(float _Left, float _Middle, float _Right) 
#line 106
{ 
#line 107
return ::fmaf(_Left, _Middle, _Right); 
#line 108
} 
#line 110
inline double _Fma(double _Left, double _Middle, double _Right) 
#line 111
{ 
#line 112
return ::fma(_Left, _Middle, _Right); 
#line 113
} 
#line 115
inline long double _Fma(long double _Left, long double _Middle, long double 
#line 116
_Right) 
#line 117
{ 
#line 118
return ::fmal(_Left, _Middle, _Right); 
#line 119
} 
#line 122 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
template < class _Ty1,
 class _Ty2,
 class _Ty3,
 class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 >
  && :: std :: is_arithmetic_v < _Ty3 > > > inline
 :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 > >
 fma ( _Ty1 _Left, _Ty2 _Middle, _Ty3 _Right )
 {
 using _Common = :: std :: _Common_float_type_t < _Ty1, :: std :: _Common_float_type_t < _Ty2, _Ty3 >>;














 return ( _Fma ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Middle ), static_cast < _Common > ( _Right ) ) );

 }
#line 151 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
inline float _Remquo(float _Left, float _Right, int *_Pquo) 
#line 152
{ 
#line 153
return ::remquof(_Left, _Right, _Pquo); 
#line 154
} 
#line 156
inline double _Remquo(double _Left, double _Right, int *_Pquo) 
#line 157
{ 
#line 158
return ::remquo(_Left, _Right, _Pquo); 
#line 159
} 
#line 161
inline long double _Remquo(long double _Left, long double _Right, int *_Pquo) 
#line 162
{ 
#line 163
return ::remquol(_Left, _Right, _Pquo); 
#line 164
} 
#line 167 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
template < class _Ty1,
 class _Ty2,
 class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline
 :: std :: _Common_float_type_t < _Ty1, _Ty2 >
 remquo ( _Ty1 _Left, _Ty2 _Right, int * _Pquo )
 {
 using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >;














 return ( _Remquo ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ), _Pquo ) );

 }
#line 192 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\xtgmath.h"
extern "C" double __cdecl acosh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double acosh ( _Ty _Left ) { return ( :: acosh ( static_cast < double > ( _Left ) ) ); }
#line 193
extern "C" double __cdecl asinh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double asinh ( _Ty _Left ) { return ( :: asinh ( static_cast < double > ( _Left ) ) ); }
#line 194
extern "C" double __cdecl atanh(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double atanh ( _Ty _Left ) { return ( :: atanh ( static_cast < double > ( _Left ) ) ); }
#line 195
extern "C" double __cdecl cbrt(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double cbrt ( _Ty _Left ) { return ( :: cbrt ( static_cast < double > ( _Left ) ) ); }
#line 196
extern "C" double __cdecl copysign(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > copysign ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: copysign ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 197
extern "C" double __cdecl erf(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double erf ( _Ty _Left ) { return ( :: erf ( static_cast < double > ( _Left ) ) ); }
#line 198
extern "C" double __cdecl erfc(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double erfc ( _Ty _Left ) { return ( :: erfc ( static_cast < double > ( _Left ) ) ); }
#line 199
extern "C" double __cdecl expm1(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double expm1 ( _Ty _Left ) { return ( :: expm1 ( static_cast < double > ( _Left ) ) ); }
#line 200
extern "C" double __cdecl exp2(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double exp2 ( _Ty _Left ) { return ( :: exp2 ( static_cast < double > ( _Left ) ) ); }
#line 201
extern "C" double __cdecl fdim(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > fdim ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: fdim ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 203
extern "C" double __cdecl fmax(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmax ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: fmax ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 204
extern "C" double __cdecl fmin(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > fmin ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: fmin ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 205
extern "C" double __cdecl hypot(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > hypot ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: hypot ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 206
extern "C" int __cdecl ilogb(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline int ilogb ( _Ty _Left ) { return ( :: ilogb ( static_cast < double > ( _Left ) ) ); }
#line 207
extern "C" double __cdecl lgamma(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double lgamma ( _Ty _Left ) { return ( :: lgamma ( static_cast < double > ( _Left ) ) ); }
#line 208
extern "C" __int64 __cdecl llrint(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline long long llrint ( _Ty _Left ) { return ( :: llrint ( static_cast < double > ( _Left ) ) ); }
#line 209
extern "C" __int64 __cdecl llround(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline long long llround ( _Ty _Left ) { return ( :: llround ( static_cast < double > ( _Left ) ) ); }
#line 210
extern "C" double __cdecl log1p(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double log1p ( _Ty _Left ) { return ( :: log1p ( static_cast < double > ( _Left ) ) ); }
#line 211
extern "C" double __cdecl log2(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double log2 ( _Ty _Left ) { return ( :: log2 ( static_cast < double > ( _Left ) ) ); }
#line 212
extern "C" double __cdecl logb(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double logb ( _Ty _Left ) { return ( :: logb ( static_cast < double > ( _Left ) ) ); }
#line 213
extern "C" long __cdecl lrint(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline long lrint ( _Ty _Left ) { return ( :: lrint ( static_cast < double > ( _Left ) ) ); }
#line 214
extern "C" long __cdecl lround(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline long lround ( _Ty _Left ) { return ( :: lround ( static_cast < double > ( _Left ) ) ); }
#line 215
extern "C" double __cdecl nearbyint(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double nearbyint ( _Ty _Left ) { return ( :: nearbyint ( static_cast < double > ( _Left ) ) ); }
#line 216
extern "C" double __cdecl nextafter(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > nextafter ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: nextafter ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 217
extern "C" double __cdecl nexttoward(double, long double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double nexttoward ( _Ty _Left, long double _Arg2 ) { return ( :: nexttoward ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 218
extern "C" double __cdecl remainder(double, double); template < class _Ty1, class _Ty2, class = :: std :: enable_if_t < :: std :: is_arithmetic_v < _Ty1 > && :: std :: is_arithmetic_v < _Ty2 > > > inline :: std :: _Common_float_type_t < _Ty1, _Ty2 > remainder ( _Ty1 _Left, _Ty2 _Right ) { using _Common = :: std :: _Common_float_type_t < _Ty1, _Ty2 >; return ( :: remainder ( static_cast < _Common > ( _Left ), static_cast < _Common > ( _Right ) ) ); }
#line 220
extern "C" double __cdecl rint(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double rint ( _Ty _Left ) { return ( :: rint ( static_cast < double > ( _Left ) ) ); }
#line 221
extern "C" double __cdecl round(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double round ( _Ty _Left ) { return ( :: round ( static_cast < double > ( _Left ) ) ); }
#line 222
extern "C" double __cdecl scalbln(double, long); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double scalbln ( _Ty _Left, long _Arg2 ) { return ( :: scalbln ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 223
extern "C" double __cdecl scalbn(double, int); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double scalbn ( _Ty _Left, int _Arg2 ) { return ( :: scalbn ( static_cast < double > ( _Left ), _Arg2 ) ); }
#line 224
extern "C" double __cdecl tgamma(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double tgamma ( _Ty _Left ) { return ( :: tgamma ( static_cast < double > ( _Left ) ) ); }
#line 225
extern "C" double __cdecl trunc(double); template < class _Ty, class = :: std :: enable_if_t < :: std :: is_integral_v < _Ty > > > inline double trunc ( _Ty _Left ) { return ( :: trunc ( static_cast < double > ( _Left ) ) ); }
#line 237
#pragma warning(pop)
#pragma pack ( pop )
#line 627 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\cmath"
namespace std { 
#line 628
using ::abs;using ::acos;using ::asin;
#line 629
using ::atan;using ::atan2;using ::ceil;
#line 630
using ::cos;using ::cosh;using ::exp;
#line 631
using ::fabs;using ::floor;using ::fmod;
#line 632
using ::frexp;using ::ldexp;using ::log;
#line 633
using ::log10;using ::modf;using ::pow;
#line 634
using ::sin;using ::sinh;using ::sqrt;
#line 635
using ::tan;using ::tanh;
#line 637
using ::acosf;using ::asinf;
#line 638
using ::atanf;using ::atan2f;using ::ceilf;
#line 639
using ::cosf;using ::coshf;using ::expf;
#line 640
using ::fabsf;using ::floorf;using ::fmodf;
#line 641
using ::frexpf;using ::ldexpf;using ::logf;
#line 642
using ::log10f;using ::modff;using ::powf;
#line 643
using ::sinf;using ::sinhf;using ::sqrtf;
#line 644
using ::tanf;using ::tanhf;
#line 646
using ::acosl;using ::asinl;
#line 647
using ::atanl;using ::atan2l;using ::ceill;
#line 648
using ::cosl;using ::coshl;using ::expl;
#line 649
using ::fabsl;using ::floorl;using ::fmodl;
#line 650
using ::frexpl;using ::ldexpl;using ::logl;
#line 651
using ::log10l;using ::modfl;using ::powl;
#line 652
using ::sinl;using ::sinhl;using ::sqrtl;
#line 653
using ::tanl;using ::tanhl;
#line 655
using ::float_t;using ::double_t;
#line 657
using ::acosh;using ::asinh;using ::atanh;
#line 658
using ::cbrt;using ::erf;using ::erfc;
#line 659
using ::expm1;using ::exp2;
#line 660
using ::hypot;using ::ilogb;using ::lgamma;
#line 661
using ::log1p;using ::log2;using ::logb;
#line 662
using ::llrint;using ::lrint;using ::nearbyint;
#line 663
using ::rint;using ::llround;using ::lround;
#line 664
using ::fdim;using ::fma;using ::fmax;using ::fmin;
#line 665
using ::round;using ::trunc;
#line 666
using ::remainder;using ::remquo;
#line 667
using ::copysign;using ::nan;using ::nextafter;
#line 668
using ::scalbn;using ::scalbln;
#line 669
using ::nexttoward;using ::tgamma;
#line 671
using ::acoshf;using ::asinhf;using ::atanhf;
#line 672
using ::cbrtf;using ::erff;using ::erfcf;
#line 673
using ::expm1f;using ::exp2f;
#line 674
using ::hypotf;using ::ilogbf;using ::lgammaf;
#line 675
using ::log1pf;using ::log2f;using ::logbf;
#line 676
using ::llrintf;using ::lrintf;using ::nearbyintf;
#line 677
using ::rintf;using ::llroundf;using ::lroundf;
#line 678
using ::fdimf;using ::fmaf;using ::fmaxf;using ::fminf;
#line 679
using ::roundf;using ::truncf;
#line 680
using ::remainderf;using ::remquof;
#line 681
using ::copysignf;using ::nanf;
#line 682
using ::nextafterf;using ::scalbnf;using ::scalblnf;
#line 683
using ::nexttowardf;using ::tgammaf;
#line 685
using ::acoshl;using ::asinhl;using ::atanhl;
#line 686
using ::cbrtl;using ::erfl;using ::erfcl;
#line 687
using ::expm1l;using ::exp2l;
#line 688
using ::hypotl;using ::ilogbl;using ::lgammal;
#line 689
using ::log1pl;using ::log2l;using ::logbl;
#line 690
using ::llrintl;using ::lrintl;using ::nearbyintl;
#line 691
using ::rintl;using ::llroundl;using ::lroundl;
#line 692
using ::fdiml;using ::fmal;using ::fmaxl;using ::fminl;
#line 693
using ::roundl;using ::truncl;
#line 694
using ::remainderl;using ::remquol;
#line 695
using ::copysignl;using ::nanl;
#line 696
using ::nextafterl;using ::scalbnl;using ::scalblnl;
#line 697
using ::nexttowardl;using ::tgammal;
#line 699
using ::fpclassify;using ::signbit;
#line 700
using ::isfinite;using ::isinf;
#line 701
using ::isnan;using ::isnormal;
#line 702
using ::isgreater;using ::isgreaterequal;
#line 703
using ::isless;using ::islessequal;
#line 704
using ::islessgreater;using ::isunordered;
#line 705
}
#line 1183 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\cmath"
#pragma warning(pop)
#pragma pack ( pop )
#line 9239 "e:\\cuda\\include\\crt\\math_functions.h"
extern "C" double __cdecl _hypot(double x, double y); 
#line 9240
extern "C" float __cdecl _hypotf(float x, float y); 
#line 9250 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline bool signbit(long double) throw(); 
#line 9251
extern "C" int _ldsign(long double); 
#line 9294 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline bool signbit(double) throw(); 
#line 9295
extern "C" int _dsign(double); 
#line 9339 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline bool signbit(float) throw(); 
#line 9340
extern "C" int _fdsign(float); 
#line 9348 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isinf(long double a); 
#line 9383 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isinf(double a); 
#line 9421 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isinf(float a); 
#line 9428 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isnan(long double a); 
#line 9461 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isnan(double a); 
#line 9497 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isnan(float a); 
#line 9504 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isfinite(long double a); 
#line 9541 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isfinite(double a); 
#line 9577 "e:\\cuda\\include\\crt\\math_functions.h"
static __inline bool isfinite(float a); 
#line 9585 "e:\\cuda\\include\\crt\\math_functions.h"
template< class T> extern T _Pow_int(T, int) throw(); 
#line 9586
extern inline __int64 abs(__int64) throw(); 
#line 9667 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline long __cdecl abs(long) throw(); 
#line 9671 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline float __cdecl abs(float) throw(); 
#line 9672
extern inline double __cdecl abs(double) throw(); 
#line 9673
extern inline float __cdecl fabs(float) throw(); 
#line 9674
extern inline float __cdecl ceil(float) throw(); 
#line 9675
extern inline float __cdecl floor(float) throw(); 
#line 9676
extern inline float __cdecl sqrt(float) throw(); 
#line 9677
extern inline float __cdecl pow(float, float) throw(); 
#line 9708 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline float __cdecl pow(float, int) throw(); 
#line 9709
extern inline double __cdecl pow(double, int) throw(); 
#line 9713 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline float __cdecl log(float) throw(); 
#line 9714
extern inline float __cdecl log10(float) throw(); 
#line 9715
extern inline float __cdecl fmod(float, float) throw(); 
#line 9716
extern inline float __cdecl modf(float, float *) throw(); 
#line 9717
extern inline float __cdecl exp(float) throw(); 
#line 9718
extern inline float __cdecl frexp(float, int *) throw(); 
#line 9719
extern inline float __cdecl ldexp(float, int) throw(); 
#line 9720
extern inline float __cdecl asin(float) throw(); 
#line 9721
extern inline float __cdecl sin(float) throw(); 
#line 9722
extern inline float __cdecl sinh(float) throw(); 
#line 9723
extern inline float __cdecl acos(float) throw(); 
#line 9724
extern inline float __cdecl cos(float) throw(); 
#line 9725
extern inline float __cdecl cosh(float) throw(); 
#line 9726
extern inline float __cdecl atan(float) throw(); 
#line 9727
extern inline float __cdecl atan2(float, float) throw(); 
#line 9728
extern inline float __cdecl tan(float) throw(); 
#line 9729
extern inline float __cdecl tanh(float) throw(); 
#line 9952 "e:\\cuda\\include\\crt\\math_functions.h"
extern inline float __cdecl logb(float) throw(); 
#line 9953
extern inline int __cdecl ilogb(float) throw(); 
#line 9954
extern float __cdecl scalbn(float, float) throw(); 
#line 9955
extern inline float __cdecl scalbln(float, long) throw(); 
#line 9956
extern inline float __cdecl exp2(float) throw(); 
#line 9957
extern inline float __cdecl expm1(float) throw(); 
#line 9958
extern inline float __cdecl log2(float) throw(); 
#line 9959
extern inline float __cdecl log1p(float) throw(); 
#line 9960
extern inline float __cdecl acosh(float) throw(); 
#line 9961
extern inline float __cdecl asinh(float) throw(); 
#line 9962
extern inline float __cdecl atanh(float) throw(); 
#line 9963
extern inline float __cdecl hypot(float, float) throw(); 
#line 9964
extern inline float __cdecl cbrt(float) throw(); 
#line 9965
extern inline float __cdecl erf(float) throw(); 
#line 9966
extern inline float __cdecl erfc(float) throw(); 
#line 9967
extern inline float __cdecl lgamma(float) throw(); 
#line 9968
extern inline float __cdecl tgamma(float) throw(); 
#line 9969
extern inline float __cdecl copysign(float, float) throw(); 
#line 9970
extern inline float __cdecl nextafter(float, float) throw(); 
#line 9971
extern inline float __cdecl remainder(float, float) throw(); 
#line 9972
extern inline float __cdecl remquo(float, float, int *) throw(); 
#line 9973
extern inline float __cdecl round(float) throw(); 
#line 9974
extern inline long __cdecl lround(float) throw(); 
#line 9975
extern inline __int64 __cdecl llround(float) throw(); 
#line 9976
extern inline float __cdecl trunc(float) throw(); 
#line 9977
extern inline float __cdecl rint(float) throw(); 
#line 9978
extern inline long __cdecl lrint(float) throw(); 
#line 9979
extern inline __int64 __cdecl llrint(float) throw(); 
#line 9980
extern inline float __cdecl nearbyint(float) throw(); 
#line 9981
extern inline float __cdecl fdim(float, float) throw(); 
#line 9982
extern inline float __cdecl fma(float, float, float) throw(); 
#line 9983
extern inline float __cdecl fmax(float, float) throw(); 
#line 9984
extern inline float __cdecl fmin(float, float) throw(); 
#line 9987 "e:\\cuda\\include\\crt\\math_functions.h"
static inline float exp10(const float a); 
#line 9989
static inline float rsqrt(const float a); 
#line 9991
static inline float rcbrt(const float a); 
#line 9993
static inline float sinpi(const float a); 
#line 9995
static inline float cospi(const float a); 
#line 9997
static inline void sincospi(const float a, float *const sptr, float *const cptr); 
#line 9999
static inline void sincos(const float a, float *const sptr, float *const cptr); 
#line 10001
static inline float j0(const float a); 
#line 10003
static inline float j1(const float a); 
#line 10005
static inline float jn(const int n, const float a); 
#line 10007
static inline float y0(const float a); 
#line 10009
static inline float y1(const float a); 
#line 10011
static inline float yn(const int n, const float a); 
#line 10013
static inline float cyl_bessel_i0(const float a); 
#line 10015
static inline float cyl_bessel_i1(const float a); 
#line 10017
static inline float erfinv(const float a); 
#line 10019
static inline float erfcinv(const float a); 
#line 10021
static inline float normcdfinv(const float a); 
#line 10023
static inline float normcdf(const float a); 
#line 10025
static inline float erfcx(const float a); 
#line 10027
static inline double copysign(const double a, const float b); 
#line 10029
static inline double copysign(const float a, const double b); 
#line 10037
static inline unsigned min(const unsigned a, const unsigned b); 
#line 10045
static inline unsigned min(const int a, const unsigned b); 
#line 10053
static inline unsigned min(const unsigned a, const int b); 
#line 10061
static inline long min(const long a, const long b); 
#line 10069
static inline unsigned long min(const unsigned long a, const unsigned long b); 
#line 10077
static inline unsigned long min(const long a, const unsigned long b); 
#line 10085
static inline unsigned long min(const unsigned long a, const long b); 
#line 10093
static inline __int64 min(const __int64 a, const __int64 b); 
#line 10101
static inline unsigned __int64 min(const unsigned __int64 a, const unsigned __int64 b); 
#line 10109
static inline unsigned __int64 min(const __int64 a, const unsigned __int64 b); 
#line 10117
static inline unsigned __int64 min(const unsigned __int64 a, const __int64 b); 
#line 10128
static inline float min(const float a, const float b); 
#line 10139
static inline double min(const double a, const double b); 
#line 10149
static inline double min(const float a, const double b); 
#line 10159
static inline double min(const double a, const float b); 
#line 10167
static inline unsigned max(const unsigned a, const unsigned b); 
#line 10175
static inline unsigned max(const int a, const unsigned b); 
#line 10183
static inline unsigned max(const unsigned a, const int b); 
#line 10191
static inline long max(const long a, const long b); 
#line 10199
static inline unsigned long max(const unsigned long a, const unsigned long b); 
#line 10207
static inline unsigned long max(const long a, const unsigned long b); 
#line 10215
static inline unsigned long max(const unsigned long a, const long b); 
#line 10223
static inline __int64 max(const __int64 a, const __int64 b); 
#line 10231
static inline unsigned __int64 max(const unsigned __int64 a, const unsigned __int64 b); 
#line 10239
static inline unsigned __int64 max(const __int64 a, const unsigned __int64 b); 
#line 10247
static inline unsigned __int64 max(const unsigned __int64 a, const __int64 b); 
#line 10258
static inline float max(const float a, const float b); 
#line 10269
static inline double max(const double a, const double b); 
#line 10279
static inline double max(const float a, const double b); 
#line 10289
static inline double max(const double a, const float b); 
#line 10300
extern "C" {
#line 10301
inline void *__nv_aligned_device_malloc(size_t size, size_t align) {int volatile ___ = 1;(void)size;(void)align;::exit(___);}
#if 0
#line 10302
{ 
#line 10303
void *__nv_aligned_device_malloc_impl(size_t, size_t); 
#line 10304
return __nv_aligned_device_malloc_impl(size, align); 
#line 10305
} 
#endif
#line 10306 "e:\\cuda\\include\\crt\\math_functions.h"
}
#line 433 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isinf(const long double a) 
#line 434
{ 
#line 438 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isinf< long double> (a); 
#line 440 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 449 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isinf(const double a) 
#line 450
{ 
#line 454 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isinf< double> (a); 
#line 456 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 465 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isinf(const float a) 
#line 466
{ 
#line 470 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isinf< float> (a); 
#line 472 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 481 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isnan(const long double a) 
#line 482
{ 
#line 486 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isnan< long double> (a); 
#line 488 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 497 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isnan(const double a) 
#line 498
{ 
#line 502 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isnan< double> (a); 
#line 504 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 513 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isnan(const float a) 
#line 514
{ 
#line 518 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isnan< float> (a); 
#line 520 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 529 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(const long double a) 
#line 530
{ 
#line 534 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isfinite< long double> (a); 
#line 536 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 545 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(const double a) 
#line 546
{ 
#line 550 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isfinite< double> (a); 
#line 552 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 561 "e:\\cuda\\include\\crt\\math_functions.hpp"
static __inline bool isfinite(const float a) 
#line 562
{ 
#line 566 "e:\\cuda\\include\\crt\\math_functions.hpp"
return isfinite< float> (a); 
#line 568 "e:\\cuda\\include\\crt\\math_functions.hpp"
} 
#line 758 "e:\\cuda\\include\\crt\\math_functions.hpp"
static inline float exp10(const float a) 
#line 759
{ 
#line 760
return exp10f(a); 
#line 761
} 
#line 763
static inline float rsqrt(const float a) 
#line 764
{ 
#line 765
return rsqrtf(a); 
#line 766
} 
#line 768
static inline float rcbrt(const float a) 
#line 769
{ 
#line 770
return rcbrtf(a); 
#line 771
} 
#line 773
static inline float sinpi(const float a) 
#line 774
{ 
#line 775
return sinpif(a); 
#line 776
} 
#line 778
static inline float cospi(const float a) 
#line 779
{ 
#line 780
return cospif(a); 
#line 781
} 
#line 783
static inline void sincospi(const float a, float *const sptr, float *const cptr) 
#line 784
{ 
#line 785
sincospif(a, sptr, cptr); 
#line 786
} 
#line 788
static inline void sincos(const float a, float *const sptr, float *const cptr) 
#line 789
{ 
#line 790
sincosf(a, sptr, cptr); 
#line 791
} 
#line 793
static inline float j0(const float a) 
#line 794
{ 
#line 795
return j0f(a); 
#line 796
} 
#line 798
static inline float j1(const float a) 
#line 799
{ 
#line 800
return j1f(a); 
#line 801
} 
#line 803
static inline float jn(const int n, const float a) 
#line 804
{ 
#line 805
return jnf(n, a); 
#line 806
} 
#line 808
static inline float y0(const float a) 
#line 809
{ 
#line 810
return y0f(a); 
#line 811
} 
#line 813
static inline float y1(const float a) 
#line 814
{ 
#line 815
return y1f(a); 
#line 816
} 
#line 818
static inline float yn(const int n, const float a) 
#line 819
{ 
#line 820
return ynf(n, a); 
#line 821
} 
#line 823
static inline float cyl_bessel_i0(const float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 824
{ 
#line 825
return cyl_bessel_i0f(a); 
#line 826
} 
#endif
#line 828 "e:\\cuda\\include\\crt\\math_functions.hpp"
static inline float cyl_bessel_i1(const float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 829
{ 
#line 830
return cyl_bessel_i1f(a); 
#line 831
} 
#endif
#line 833 "e:\\cuda\\include\\crt\\math_functions.hpp"
static inline float erfinv(const float a) 
#line 834
{ 
#line 835
return erfinvf(a); 
#line 836
} 
#line 838
static inline float erfcinv(const float a) 
#line 839
{ 
#line 840
return erfcinvf(a); 
#line 841
} 
#line 843
static inline float normcdfinv(const float a) 
#line 844
{ 
#line 845
return normcdfinvf(a); 
#line 846
} 
#line 848
static inline float normcdf(const float a) 
#line 849
{ 
#line 850
return normcdff(a); 
#line 851
} 
#line 853
static inline float erfcx(const float a) 
#line 854
{ 
#line 855
return erfcxf(a); 
#line 856
} 
#line 858
static inline double copysign(const double a, const float b) 
#line 859
{ 
#line 860
return copysign(a, static_cast< double>(b)); 
#line 861
} 
#line 863
static inline double copysign(const float a, const double b) 
#line 864
{ 
#line 865
return copysign(static_cast< double>(a), b); 
#line 866
} 
#line 868
static inline unsigned min(const unsigned a, const unsigned b) 
#line 869
{ 
#line 870
return umin(a, b); 
#line 871
} 
#line 873
static inline unsigned min(const int a, const unsigned b) 
#line 874
{ 
#line 875
return umin(static_cast< unsigned>(a), b); 
#line 876
} 
#line 878
static inline unsigned min(const unsigned a, const int b) 
#line 879
{ 
#line 880
return umin(a, static_cast< unsigned>(b)); 
#line 881
} 
#line 883
static inline long min(const long a, const long b) 
#line 884
{ 
#line 885
long retval; 
#line 888
#pragma warning (disable: 4127)
#line 891 "e:\\cuda\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 893
#pragma warning (default: 4127)
#line 895 "e:\\cuda\\include\\crt\\math_functions.hpp"
retval = (static_cast< long>(min(static_cast< int>(a), static_cast< int>(b)))); 
#line 896
} else { 
#line 897
retval = (static_cast< long>(llmin(static_cast< __int64>(a), static_cast< __int64>(b)))); 
#line 898
}  
#line 899
return retval; 
#line 900
} 
#line 902
static inline unsigned long min(const unsigned long a, const unsigned long b) 
#line 903
{ 
#line 904
unsigned long retval; 
#line 906
#pragma warning (disable: 4127)
#line 908 "e:\\cuda\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 910
#pragma warning (default: 4127)
#line 912 "e:\\cuda\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 913
} else { 
#line 914
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 915
}  
#line 916
return retval; 
#line 917
} 
#line 919
static inline unsigned long min(const long a, const unsigned long b) 
#line 920
{ 
#line 921
unsigned long retval; 
#line 923
#pragma warning (disable: 4127)
#line 925 "e:\\cuda\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 927
#pragma warning (default: 4127)
#line 929 "e:\\cuda\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 930
} else { 
#line 931
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 932
}  
#line 933
return retval; 
#line 934
} 
#line 936
static inline unsigned long min(const unsigned long a, const long b) 
#line 937
{ 
#line 938
unsigned long retval; 
#line 940
#pragma warning (disable: 4127)
#line 942 "e:\\cuda\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 944
#pragma warning (default: 4127)
#line 946 "e:\\cuda\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umin(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 947
} else { 
#line 948
retval = (static_cast< unsigned long>(ullmin(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 949
}  
#line 950
return retval; 
#line 951
} 
#line 953
static inline __int64 min(const __int64 a, const __int64 b) 
#line 954
{ 
#line 955
return llmin(a, b); 
#line 956
} 
#line 958
static inline unsigned __int64 min(const unsigned __int64 a, const unsigned __int64 b) 
#line 959
{ 
#line 960
return ullmin(a, b); 
#line 961
} 
#line 963
static inline unsigned __int64 min(const __int64 a, const unsigned __int64 b) 
#line 964
{ 
#line 965
return ullmin(static_cast< unsigned __int64>(a), b); 
#line 966
} 
#line 968
static inline unsigned __int64 min(const unsigned __int64 a, const __int64 b) 
#line 969
{ 
#line 970
return ullmin(a, static_cast< unsigned __int64>(b)); 
#line 971
} 
#line 973
static inline float min(const float a, const float b) 
#line 974
{ 
#line 975
return fminf(a, b); 
#line 976
} 
#line 978
static inline double min(const double a, const double b) 
#line 979
{ 
#line 980
return fmin(a, b); 
#line 981
} 
#line 983
static inline double min(const float a, const double b) 
#line 984
{ 
#line 985
return fmin(static_cast< double>(a), b); 
#line 986
} 
#line 988
static inline double min(const double a, const float b) 
#line 989
{ 
#line 990
return fmin(a, static_cast< double>(b)); 
#line 991
} 
#line 993
static inline unsigned max(const unsigned a, const unsigned b) 
#line 994
{ 
#line 995
return umax(a, b); 
#line 996
} 
#line 998
static inline unsigned max(const int a, const unsigned b) 
#line 999
{ 
#line 1000
return umax(static_cast< unsigned>(a), b); 
#line 1001
} 
#line 1003
static inline unsigned max(const unsigned a, const int b) 
#line 1004
{ 
#line 1005
return umax(a, static_cast< unsigned>(b)); 
#line 1006
} 
#line 1008
static inline long max(const long a, const long b) 
#line 1009
{ 
#line 1010
long retval; 
#line 1013
#pragma warning (disable: 4127)
#line 1015 "e:\\cuda\\include\\crt\\math_functions.hpp"
if (sizeof(long) == sizeof(int)) { 
#line 1017
#pragma warning (default: 4127)
#line 1019 "e:\\cuda\\include\\crt\\math_functions.hpp"
retval = (static_cast< long>(max(static_cast< int>(a), static_cast< int>(b)))); 
#line 1020
} else { 
#line 1021
retval = (static_cast< long>(llmax(static_cast< __int64>(a), static_cast< __int64>(b)))); 
#line 1022
}  
#line 1023
return retval; 
#line 1024
} 
#line 1026
static inline unsigned long max(const unsigned long a, const unsigned long b) 
#line 1027
{ 
#line 1028
unsigned long retval; 
#line 1030
#pragma warning (disable: 4127)
#line 1032 "e:\\cuda\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1034
#pragma warning (default: 4127)
#line 1036 "e:\\cuda\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 1037
} else { 
#line 1038
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 1039
}  
#line 1040
return retval; 
#line 1041
} 
#line 1043
static inline unsigned long max(const long a, const unsigned long b) 
#line 1044
{ 
#line 1045
unsigned long retval; 
#line 1047
#pragma warning (disable: 4127)
#line 1049 "e:\\cuda\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1051
#pragma warning (default: 4127)
#line 1053 "e:\\cuda\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 1054
} else { 
#line 1055
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 1056
}  
#line 1057
return retval; 
#line 1058
} 
#line 1060
static inline unsigned long max(const unsigned long a, const long b) 
#line 1061
{ 
#line 1062
unsigned long retval; 
#line 1064
#pragma warning (disable: 4127)
#line 1066 "e:\\cuda\\include\\crt\\math_functions.hpp"
if (sizeof(unsigned long) == sizeof(unsigned)) { 
#line 1068
#pragma warning (default: 4127)
#line 1070 "e:\\cuda\\include\\crt\\math_functions.hpp"
retval = (static_cast< unsigned long>(umax(static_cast< unsigned>(a), static_cast< unsigned>(b)))); 
#line 1071
} else { 
#line 1072
retval = (static_cast< unsigned long>(ullmax(static_cast< unsigned __int64>(a), static_cast< unsigned __int64>(b)))); 
#line 1073
}  
#line 1074
return retval; 
#line 1075
} 
#line 1077
static inline __int64 max(const __int64 a, const __int64 b) 
#line 1078
{ 
#line 1079
return llmax(a, b); 
#line 1080
} 
#line 1082
static inline unsigned __int64 max(const unsigned __int64 a, const unsigned __int64 b) 
#line 1083
{ 
#line 1084
return ullmax(a, b); 
#line 1085
} 
#line 1087
static inline unsigned __int64 max(const __int64 a, const unsigned __int64 b) 
#line 1088
{ 
#line 1089
return ullmax(static_cast< unsigned __int64>(a), b); 
#line 1090
} 
#line 1092
static inline unsigned __int64 max(const unsigned __int64 a, const __int64 b) 
#line 1093
{ 
#line 1094
return ullmax(a, static_cast< unsigned __int64>(b)); 
#line 1095
} 
#line 1097
static inline float max(const float a, const float b) 
#line 1098
{ 
#line 1099
return fmaxf(a, b); 
#line 1100
} 
#line 1102
static inline double max(const double a, const double b) 
#line 1103
{ 
#line 1104
return fmax(a, b); 
#line 1105
} 
#line 1107
static inline double max(const float a, const double b) 
#line 1108
{ 
#line 1109
return fmax(static_cast< double>(a), b); 
#line 1110
} 
#line 1112
static inline double max(const double a, const float b) 
#line 1113
{ 
#line 1114
return fmax(a, static_cast< double>(b)); 
#line 1115
} 
#line 1121
#pragma warning(disable : 4211)
#line 1126 "e:\\cuda\\include\\crt\\math_functions.hpp"
static inline int min(const int a, const int b) 
#line 1127
{ 
#line 1128
return (a < b) ? a : b; 
#line 1129
} 
#line 1131
static inline unsigned umin(const unsigned a, const unsigned b) 
#line 1132
{ 
#line 1133
return (a < b) ? a : b; 
#line 1134
} 
#line 1136
static inline __int64 llmin(const __int64 a, const __int64 b) 
#line 1137
{ 
#line 1138
return (a < b) ? a : b; 
#line 1139
} 
#line 1141
static inline unsigned __int64 ullmin(const unsigned __int64 a, const unsigned __int64 
#line 1142
b) 
#line 1143
{ 
#line 1144
return (a < b) ? a : b; 
#line 1145
} 
#line 1147
static inline int max(const int a, const int b) 
#line 1148
{ 
#line 1149
return (a > b) ? a : b; 
#line 1150
} 
#line 1152
static inline unsigned umax(const unsigned a, const unsigned b) 
#line 1153
{ 
#line 1154
return (a > b) ? a : b; 
#line 1155
} 
#line 1157
static inline __int64 llmax(const __int64 a, const __int64 b) 
#line 1158
{ 
#line 1159
return (a > b) ? a : b; 
#line 1160
} 
#line 1162
static inline unsigned __int64 ullmax(const unsigned __int64 a, const unsigned __int64 
#line 1163
b) 
#line 1164
{ 
#line 1165
return (a > b) ? a : b; 
#line 1166
} 
#line 1169
#pragma warning(default: 4211)
#line 74 "e:\\cuda\\include\\cuda_surface_types.h"
template< class T, int dim = 1> 
#line 75
struct surface : public surfaceReference { 
#line 78
surface() 
#line 79
{ 
#line 80
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 81
} 
#line 83
surface(::cudaChannelFormatDesc desc) 
#line 84
{ 
#line 85
(channelDesc) = desc; 
#line 86
} 
#line 88 "e:\\cuda\\include\\cuda_surface_types.h"
}; 
#line 90
template< int dim> 
#line 91
struct surface< void, dim>  : public surfaceReference { 
#line 94
surface() 
#line 95
{ 
#line 96
(channelDesc) = cudaCreateChannelDesc< void> (); 
#line 97
} 
#line 99 "e:\\cuda\\include\\cuda_surface_types.h"
}; 
#line 74 "e:\\cuda\\include\\cuda_texture_types.h"
template< class T, int texType = 1, cudaTextureReadMode mode = cudaReadModeElementType> 
#line 75
struct texture : public textureReference { 
#line 78
texture(int norm = 0, ::cudaTextureFilterMode 
#line 79
fMode = cudaFilterModePoint, ::cudaTextureAddressMode 
#line 80
aMode = cudaAddressModeClamp) 
#line 81
{ 
#line 82
(normalized) = norm; 
#line 83
(filterMode) = fMode; 
#line 84
((addressMode)[0]) = aMode; 
#line 85
((addressMode)[1]) = aMode; 
#line 86
((addressMode)[2]) = aMode; 
#line 87
(channelDesc) = cudaCreateChannelDesc< T> (); 
#line 88
(sRGB) = 0; 
#line 89
} 
#line 91
texture(int norm, ::cudaTextureFilterMode 
#line 92
fMode, ::cudaTextureAddressMode 
#line 93
aMode, ::cudaChannelFormatDesc 
#line 94
desc) 
#line 95
{ 
#line 96
(normalized) = norm; 
#line 97
(filterMode) = fMode; 
#line 98
((addressMode)[0]) = aMode; 
#line 99
((addressMode)[1]) = aMode; 
#line 100
((addressMode)[2]) = aMode; 
#line 101
(channelDesc) = desc; 
#line 102
(sRGB) = 0; 
#line 103
} 
#line 105 "e:\\cuda\\include\\cuda_texture_types.h"
}; 
#line 89 "e:\\cuda\\include\\crt/device_functions.h"
extern "C" {
#line 3215 "e:\\cuda\\include\\crt/device_functions.h"
}
#line 3223
static __inline int mulhi(const int a, const int b); 
#line 3225
static __inline unsigned mulhi(const unsigned a, const unsigned b); 
#line 3227
static __inline unsigned mulhi(const int a, const unsigned b); 
#line 3229
static __inline unsigned mulhi(const unsigned a, const int b); 
#line 3231
static __inline __int64 mul64hi(const __int64 a, const __int64 b); 
#line 3233
static __inline unsigned __int64 mul64hi(const unsigned __int64 a, const unsigned __int64 b); 
#line 3235
static __inline unsigned __int64 mul64hi(const __int64 a, const unsigned __int64 b); 
#line 3237
static __inline unsigned __int64 mul64hi(const unsigned __int64 a, const __int64 b); 
#line 3239
static __inline int float_as_int(const float a); 
#line 3241
static __inline float int_as_float(const int a); 
#line 3243
static __inline unsigned float_as_uint(const float a); 
#line 3245
static __inline float uint_as_float(const unsigned a); 
#line 3247
static __inline float saturate(const float a); 
#line 3249
static __inline int mul24(const int a, const int b); 
#line 3251
static __inline unsigned umul24(const unsigned a, const unsigned b); 
#line 3253
static __inline int float2int(const float a, const cudaRoundMode mode = cudaRoundZero); 
#line 3255
static __inline unsigned float2uint(const float a, const cudaRoundMode mode = cudaRoundZero); 
#line 3257
static __inline float int2float(const int a, const cudaRoundMode mode = cudaRoundNearest); 
#line 3259
static __inline float uint2float(const unsigned a, const cudaRoundMode mode = cudaRoundNearest); 
#line 90 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline int mulhi(const int a, const int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 91
{ 
#line 92
return __mulhi(a, b); 
#line 93
} 
#endif
#line 95 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(const unsigned a, const unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 96
{ 
#line 97
return __umulhi(a, b); 
#line 98
} 
#endif
#line 100 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(const int a, const unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 101
{ 
#line 102
return __umulhi(static_cast< unsigned>(a), b); 
#line 103
} 
#endif
#line 105 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned mulhi(const unsigned a, const int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 106
{ 
#line 107
return __umulhi(a, static_cast< unsigned>(b)); 
#line 108
} 
#endif
#line 110 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline __int64 mul64hi(const __int64 a, const __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 111
{ 
#line 112
return __mul64hi(a, b); 
#line 113
} 
#endif
#line 115 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(const unsigned __int64 a, const unsigned __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 116
{ 
#line 117
return __umul64hi(a, b); 
#line 118
} 
#endif
#line 120 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(const __int64 a, const unsigned __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 121
{ 
#line 122
return __umul64hi(static_cast< unsigned __int64>(a), b); 
#line 123
} 
#endif
#line 125 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned __int64 mul64hi(const unsigned __int64 a, const __int64 b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 126
{ 
#line 127
return __umul64hi(a, static_cast< unsigned __int64>(b)); 
#line 128
} 
#endif
#line 130 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline int float_as_int(const float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 131
{ 
#line 132
return __float_as_int(a); 
#line 133
} 
#endif
#line 135 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline float int_as_float(const int a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 136
{ 
#line 137
return __int_as_float(a); 
#line 138
} 
#endif
#line 140 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned float_as_uint(const float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 141
{ 
#line 142
return __float_as_uint(a); 
#line 143
} 
#endif
#line 145 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline float uint_as_float(const unsigned a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 146
{ 
#line 147
return __uint_as_float(a); 
#line 148
} 
#endif
#line 149 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline float saturate(const float a) {int volatile ___ = 1;(void)a;::exit(___);}
#if 0
#line 150
{ 
#line 151
return __saturatef(a); 
#line 152
} 
#endif
#line 154 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline int mul24(const int a, const int b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 155
{ 
#line 156
return __mul24(a, b); 
#line 157
} 
#endif
#line 159 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned umul24(const unsigned a, const unsigned b) {int volatile ___ = 1;(void)a;(void)b;::exit(___);}
#if 0
#line 160
{ 
#line 161
return __umul24(a, b); 
#line 162
} 
#endif
#line 164 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline int float2int(const float a, const cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 165
{ 
#line 166
return (mode == (cudaRoundNearest)) ? __float2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2int_rd(a) : __float2int_rz(a))); 
#line 170
} 
#endif
#line 172 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline unsigned float2uint(const float a, const cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 173
{ 
#line 174
return (mode == (cudaRoundNearest)) ? __float2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __float2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __float2uint_rd(a) : __float2uint_rz(a))); 
#line 178
} 
#endif
#line 180 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline float int2float(const int a, const cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 181
{ 
#line 182
return (mode == (cudaRoundZero)) ? __int2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __int2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __int2float_rd(a) : __int2float_rn(a))); 
#line 186
} 
#endif
#line 188 "e:\\cuda\\include\\crt\\device_functions.hpp"
static __inline float uint2float(const unsigned a, const cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 189
{ 
#line 190
return (mode == (cudaRoundZero)) ? __uint2float_rz(a) : ((mode == (cudaRoundPosInf)) ? __uint2float_ru(a) : ((mode == (cudaRoundMinInf)) ? __uint2float_rd(a) : __uint2float_rn(a))); 
#line 194
} 
#endif
#line 106 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicAdd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 108 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicAdd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 110 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicSub(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 112 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicSub(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 114 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicExch(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 116 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicExch(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 118 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline float atomicExch(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 120 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicMin(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 120
{ } 
#endif
#line 122 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicMin(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 122
{ } 
#endif
#line 124 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicMax(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 126 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicMax(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 128 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicInc(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 130 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicDec(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 132 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicAnd(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 132
{ } 
#endif
#line 134 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicAnd(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 136 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicOr(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 138 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicOr(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 138
{ } 
#endif
#line 140 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicXor(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 142 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicXor(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 144 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline int atomicCAS(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 146 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned atomicCAS(unsigned *address, unsigned compare, unsigned val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 146
{ } 
#endif
#line 171 "e:\\cuda\\include\\device_atomic_functions.h"
extern "C" {
#line 180
}
#line 189
static __inline unsigned __int64 atomicAdd(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 191 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicExch(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 193 "e:\\cuda\\include\\device_atomic_functions.h"
static __inline unsigned __int64 atomicCAS(unsigned __int64 *address, unsigned __int64 compare, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 193
{ } 
#endif
#line 195 "e:\\cuda\\include\\device_atomic_functions.h"
__declspec(deprecated("__any() is deprecated in favor of __any_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool any(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 195
{ } 
#endif
#line 197 "e:\\cuda\\include\\device_atomic_functions.h"
__declspec(deprecated("__all() is deprecated in favor of __all_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to suppr" "ess this warning).")) static __inline bool all(bool cond) {int volatile ___ = 1;(void)cond;::exit(___);}
#if 0
#line 197
{ } 
#endif
#line 87 "e:\\cuda\\include\\crt\\device_double_functions.h"
extern "C" {
#line 1139
}
#line 1147
static __inline double fma(double a, double b, double c, cudaRoundMode mode); 
#line 1149
static __inline double dmul(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1151
static __inline double dadd(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1153
static __inline double dsub(double a, double b, cudaRoundMode mode = cudaRoundNearest); 
#line 1155
static __inline int double2int(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1157
static __inline unsigned double2uint(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1159
static __inline __int64 double2ll(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1161
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode = cudaRoundZero); 
#line 1163
static __inline double ll2double(__int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1165
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode = cudaRoundNearest); 
#line 1167
static __inline double int2double(int a, cudaRoundMode mode = cudaRoundNearest); 
#line 1169
static __inline double uint2double(unsigned a, cudaRoundMode mode = cudaRoundNearest); 
#line 1171
static __inline double float2double(float a, cudaRoundMode mode = cudaRoundNearest); 
#line 93 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double fma(double a, double b, double c, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)c;(void)mode;::exit(___);}
#if 0
#line 94
{ 
#line 95
return (mode == (cudaRoundZero)) ? __fma_rz(a, b, c) : ((mode == (cudaRoundPosInf)) ? __fma_ru(a, b, c) : ((mode == (cudaRoundMinInf)) ? __fma_rd(a, b, c) : __fma_rn(a, b, c))); 
#line 99
} 
#endif
#line 101 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double dmul(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 102
{ 
#line 103
return (mode == (cudaRoundZero)) ? __dmul_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dmul_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dmul_rd(a, b) : __dmul_rn(a, b))); 
#line 107
} 
#endif
#line 109 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double dadd(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 110
{ 
#line 111
return (mode == (cudaRoundZero)) ? __dadd_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dadd_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dadd_rd(a, b) : __dadd_rn(a, b))); 
#line 115
} 
#endif
#line 117 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double dsub(double a, double b, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)b;(void)mode;::exit(___);}
#if 0
#line 118
{ 
#line 119
return (mode == (cudaRoundZero)) ? __dsub_rz(a, b) : ((mode == (cudaRoundPosInf)) ? __dsub_ru(a, b) : ((mode == (cudaRoundMinInf)) ? __dsub_rd(a, b) : __dsub_rn(a, b))); 
#line 123
} 
#endif
#line 125 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline int double2int(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 126
{ 
#line 127
return (mode == (cudaRoundNearest)) ? __double2int_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2int_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2int_rd(a) : __double2int_rz(a))); 
#line 131
} 
#endif
#line 133 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline unsigned double2uint(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 134
{ 
#line 135
return (mode == (cudaRoundNearest)) ? __double2uint_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2uint_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2uint_rd(a) : __double2uint_rz(a))); 
#line 139
} 
#endif
#line 141 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline __int64 double2ll(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 142
{ 
#line 143
return (mode == (cudaRoundNearest)) ? __double2ll_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ll_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ll_rd(a) : __double2ll_rz(a))); 
#line 147
} 
#endif
#line 149 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline unsigned __int64 double2ull(double a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 150
{ 
#line 151
return (mode == (cudaRoundNearest)) ? __double2ull_rn(a) : ((mode == (cudaRoundPosInf)) ? __double2ull_ru(a) : ((mode == (cudaRoundMinInf)) ? __double2ull_rd(a) : __double2ull_rz(a))); 
#line 155
} 
#endif
#line 157 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double ll2double(__int64 a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 158
{ 
#line 159
return (mode == (cudaRoundZero)) ? __ll2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ll2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ll2double_rd(a) : __ll2double_rn(a))); 
#line 163
} 
#endif
#line 165 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double ull2double(unsigned __int64 a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 166
{ 
#line 167
return (mode == (cudaRoundZero)) ? __ull2double_rz(a) : ((mode == (cudaRoundPosInf)) ? __ull2double_ru(a) : ((mode == (cudaRoundMinInf)) ? __ull2double_rd(a) : __ull2double_rn(a))); 
#line 171
} 
#endif
#line 173 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double int2double(int a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 174
{ 
#line 175
return (double)a; 
#line 176
} 
#endif
#line 178 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double uint2double(unsigned a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 179
{ 
#line 180
return (double)a; 
#line 181
} 
#endif
#line 183 "e:\\cuda\\include\\crt\\device_double_functions.hpp"
static __inline double float2double(float a, cudaRoundMode mode) {int volatile ___ = 1;(void)a;(void)mode;::exit(___);}
#if 0
#line 184
{ 
#line 185
return (double)a; 
#line 186
} 
#endif
#line 89 "e:\\cuda\\include\\sm_20_atomic_functions.h"
static __inline float atomicAdd(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 89
{ } 
#endif
#line 100 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMin(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 102 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicMax(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 104 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicAnd(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 106 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicOr(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 108 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline __int64 atomicXor(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 110 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMin(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 112 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicMax(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 114 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicAnd(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 116 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicOr(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 118 "e:\\cuda\\include\\sm_32_atomic_functions.h"
static __inline unsigned __int64 atomicXor(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 303 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 303
{ } 
#endif
#line 306 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 306
{ } 
#endif
#line 309 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicAdd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 309
{ } 
#endif
#line 312 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 312
{ } 
#endif
#line 315 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAdd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 315
{ } 
#endif
#line 318 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 318
{ } 
#endif
#line 321 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAdd_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 321
{ } 
#endif
#line 324 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 324
{ } 
#endif
#line 327 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline float atomicAdd_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 327
{ } 
#endif
#line 330 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_block(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 330
{ } 
#endif
#line 333 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline double atomicAdd_system(double *address, double val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 333
{ } 
#endif
#line 336 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 336
{ } 
#endif
#line 339 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicSub_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 339
{ } 
#endif
#line 342 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 342
{ } 
#endif
#line 345 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicSub_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 345
{ } 
#endif
#line 348 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 348
{ } 
#endif
#line 351 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicExch_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 351
{ } 
#endif
#line 354 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 354
{ } 
#endif
#line 357 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicExch_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 357
{ } 
#endif
#line 360 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 360
{ } 
#endif
#line 363 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicExch_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 363
{ } 
#endif
#line 366 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_block(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 366
{ } 
#endif
#line 369 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline float atomicExch_system(float *address, float val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 369
{ } 
#endif
#line 372 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 372
{ } 
#endif
#line 375 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicMin_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 375
{ } 
#endif
#line 378 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 378
{ } 
#endif
#line 381 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMin_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 381
{ } 
#endif
#line 384 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 384
{ } 
#endif
#line 387 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMin_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 387
{ } 
#endif
#line 390 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 390
{ } 
#endif
#line 393 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMin_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 393
{ } 
#endif
#line 396 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 396
{ } 
#endif
#line 399 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicMax_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 399
{ } 
#endif
#line 402 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 402
{ } 
#endif
#line 405 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicMax_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 405
{ } 
#endif
#line 408 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 408
{ } 
#endif
#line 411 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicMax_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 411
{ } 
#endif
#line 414 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 414
{ } 
#endif
#line 417 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicMax_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 417
{ } 
#endif
#line 420 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 420
{ } 
#endif
#line 423 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicInc_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 423
{ } 
#endif
#line 426 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 426
{ } 
#endif
#line 429 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicDec_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 429
{ } 
#endif
#line 432 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_block(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 432
{ } 
#endif
#line 435 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicCAS_system(int *address, int compare, int val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 435
{ } 
#endif
#line 438 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_block(unsigned *address, unsigned compare, unsigned 
#line 439
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 439
{ } 
#endif
#line 442 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicCAS_system(unsigned *address, unsigned compare, unsigned 
#line 443
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 443
{ } 
#endif
#line 446 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_block(unsigned __int64 *address, unsigned __int64 
#line 447
compare, unsigned __int64 
#line 448
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 448
{ } 
#endif
#line 451 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicCAS_system(unsigned __int64 *address, unsigned __int64 
#line 452
compare, unsigned __int64 
#line 453
val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 453
{ } 
#endif
#line 456 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 456
{ } 
#endif
#line 459 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicAnd_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 459
{ } 
#endif
#line 462 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 462
{ } 
#endif
#line 465 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicAnd_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 465
{ } 
#endif
#line 468 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 468
{ } 
#endif
#line 471 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicAnd_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 471
{ } 
#endif
#line 474 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 474
{ } 
#endif
#line 477 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicAnd_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 477
{ } 
#endif
#line 480 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 480
{ } 
#endif
#line 483 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicOr_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 483
{ } 
#endif
#line 486 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 486
{ } 
#endif
#line 489 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicOr_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 489
{ } 
#endif
#line 492 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 492
{ } 
#endif
#line 495 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicOr_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 495
{ } 
#endif
#line 498 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 498
{ } 
#endif
#line 501 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicOr_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 501
{ } 
#endif
#line 504 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_block(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 504
{ } 
#endif
#line 507 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline int atomicXor_system(int *address, int val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 507
{ } 
#endif
#line 510 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_block(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 510
{ } 
#endif
#line 513 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline __int64 atomicXor_system(__int64 *address, __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 513
{ } 
#endif
#line 516 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_block(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 516
{ } 
#endif
#line 519 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned atomicXor_system(unsigned *address, unsigned val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 519
{ } 
#endif
#line 522 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_block(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 522
{ } 
#endif
#line 525 "e:\\cuda\\include\\sm_60_atomic_functions.h"
static __inline unsigned __int64 atomicXor_system(unsigned __int64 *address, unsigned __int64 val) {int volatile ___ = 1;(void)address;(void)val;::exit(___);}
#if 0
#line 525
{ } 
#endif
#line 90 "e:\\cuda\\include\\sm_20_intrinsics.h"
extern "C" {
#line 1503
}
#line 1510
__declspec(deprecated("__ballot() is deprecated in favor of __ballot_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to" " suppress this warning).")) static __inline unsigned ballot(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1510
{ } 
#endif
#line 1512 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline int syncthreads_count(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1512
{ } 
#endif
#line 1514 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_and(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1514
{ } 
#endif
#line 1516 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline bool syncthreads_or(bool pred) {int volatile ___ = 1;(void)pred;::exit(___);}
#if 0
#line 1516
{ } 
#endif
#line 1521 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline unsigned __isGlobal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1521
{ } 
#endif
#line 1522 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline unsigned __isShared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1522
{ } 
#endif
#line 1523 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline unsigned __isConstant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1523
{ } 
#endif
#line 1524 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline unsigned __isLocal(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1524
{ } 
#endif
#line 1526 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_global(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1526
{ } 
#endif
#line 1527 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_shared(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1527
{ } 
#endif
#line 1528 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_constant(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1528
{ } 
#endif
#line 1529 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline size_t __cvta_generic_to_local(const void *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 1529
{ } 
#endif
#line 1531 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_global_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1531
{ } 
#endif
#line 1532 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_shared_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1532
{ } 
#endif
#line 1533 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_constant_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1533
{ } 
#endif
#line 1534 "e:\\cuda\\include\\sm_20_intrinsics.h"
static __inline void *__cvta_local_to_generic(size_t rawbits) {int volatile ___ = 1;(void)rawbits;::exit(___);}
#if 0
#line 1534
{ } 
#endif
#line 102 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __fns(unsigned mask, unsigned base, int offset) {int volatile ___ = 1;(void)mask;(void)base;(void)offset;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 103 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync(unsigned id) {int volatile ___ = 1;(void)id;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 104 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline void __barrier_sync_count(unsigned id, unsigned cnt) {int volatile ___ = 1;(void)id;(void)cnt;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 105 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline void __syncwarp(unsigned mask = 4294967295U) {int volatile ___ = 1;(void)mask;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline int __all_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline int __any_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline int __uni_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __ballot_sync(unsigned mask, int pred) {int volatile ___ = 1;(void)mask;(void)pred;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __activemask() {int volatile ___ = 1;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 119 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline int __shfl(int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 119
{ } 
#endif
#line 120 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __shfl(unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 120
{ } 
#endif
#line 121 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline int __shfl_up(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 121
{ } 
#endif
#line 122 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __shfl_up(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 122
{ } 
#endif
#line 123 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline int __shfl_down(int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 123
{ } 
#endif
#line 124 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __shfl_down(unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 125 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline int __shfl_xor(int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 125
{ } 
#endif
#line 126 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __shfl_xor(unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 127 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline float __shfl(float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 127
{ } 
#endif
#line 128 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline float __shfl_up(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 129 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline float __shfl_down(float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 130 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline float __shfl_xor(float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 133 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline int __shfl_sync(unsigned mask, int var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 134 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_sync(unsigned mask, unsigned var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 135 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline int __shfl_up_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 135
{ } 
#endif
#line 136 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_up_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 137 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline int __shfl_down_sync(unsigned mask, int var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 137
{ } 
#endif
#line 138 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_down_sync(unsigned mask, unsigned var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 138
{ } 
#endif
#line 139 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline int __shfl_xor_sync(unsigned mask, int var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 140 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __shfl_xor_sync(unsigned mask, unsigned var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 141 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline float __shfl_sync(unsigned mask, float var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 141
{ } 
#endif
#line 142 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline float __shfl_up_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 143 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline float __shfl_down_sync(unsigned mask, float var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 143
{ } 
#endif
#line 144 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline float __shfl_xor_sync(unsigned mask, float var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 148 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned __int64 __shfl(unsigned __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 148
{ } 
#endif
#line 149 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline __int64 __shfl(__int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 149
{ } 
#endif
#line 150 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline __int64 __shfl_up(__int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 150
{ } 
#endif
#line 151 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned __int64 __shfl_up(unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 151
{ } 
#endif
#line 152 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline __int64 __shfl_down(__int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 152
{ } 
#endif
#line 153 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned __int64 __shfl_down(unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 153
{ } 
#endif
#line 154 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline __int64 __shfl_xor(__int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 154
{ } 
#endif
#line 155 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned __int64 __shfl_xor(unsigned __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 155
{ } 
#endif
#line 156 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline double __shfl(double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 156
{ } 
#endif
#line 157 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline double __shfl_up(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 157
{ } 
#endif
#line 158 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline double __shfl_down(double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 158
{ } 
#endif
#line 159 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline double __shfl_xor(double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 159
{ } 
#endif
#line 162 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_sync(unsigned mask, __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 162
{ } 
#endif
#line 163 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_sync(unsigned mask, unsigned __int64 var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 163
{ } 
#endif
#line 164 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_up_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 164
{ } 
#endif
#line 165 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_up_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 165
{ } 
#endif
#line 166 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_down_sync(unsigned mask, __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 166
{ } 
#endif
#line 167 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_down_sync(unsigned mask, unsigned __int64 var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 167
{ } 
#endif
#line 168 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline __int64 __shfl_xor_sync(unsigned mask, __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 168
{ } 
#endif
#line 169 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned __int64 __shfl_xor_sync(unsigned mask, unsigned __int64 var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 169
{ } 
#endif
#line 170 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline double __shfl_sync(unsigned mask, double var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 170
{ } 
#endif
#line 171 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline double __shfl_up_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 171
{ } 
#endif
#line 172 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline double __shfl_down_sync(unsigned mask, double var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 172
{ } 
#endif
#line 173 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline double __shfl_xor_sync(unsigned mask, double var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 173
{ } 
#endif
#line 177 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline long __shfl(long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 177
{ } 
#endif
#line 178 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl() is deprecated in favor of __shfl_sync() and may be removed in a future release (Use -Wno-deprecated-declarations to sup" "press this warning).")) static __inline unsigned long __shfl(unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 178
{ } 
#endif
#line 179 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline long __shfl_up(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 179
{ } 
#endif
#line 180 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_up() is deprecated in favor of __shfl_up_sync() and may be removed in a future release (Use -Wno-deprecated-declarations " "to suppress this warning).")) static __inline unsigned long __shfl_up(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 180
{ } 
#endif
#line 181 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline long __shfl_down(long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 181
{ } 
#endif
#line 182 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_down() is deprecated in favor of __shfl_down_sync() and may be removed in a future release (Use -Wno-deprecated-declarati" "ons to suppress this warning).")) static __inline unsigned long __shfl_down(unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 182
{ } 
#endif
#line 183 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline long __shfl_xor(long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 183
{ } 
#endif
#line 184 "e:\\cuda\\include\\sm_30_intrinsics.h"
__declspec(deprecated("__shfl_xor() is deprecated in favor of __shfl_xor_sync() and may be removed in a future release (Use -Wno-deprecated-declaration" "s to suppress this warning).")) static __inline unsigned long __shfl_xor(unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 184
{ } 
#endif
#line 187 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline long __shfl_sync(unsigned mask, long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 187
{ } 
#endif
#line 188 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_sync(unsigned mask, unsigned long var, int srcLane, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)srcLane;(void)width;::exit(___);}
#if 0
#line 188
{ } 
#endif
#line 189 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline long __shfl_up_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 190 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_up_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 190
{ } 
#endif
#line 191 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline long __shfl_down_sync(unsigned mask, long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 192 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_down_sync(unsigned mask, unsigned long var, unsigned delta, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)delta;(void)width;::exit(___);}
#if 0
#line 192
{ } 
#endif
#line 193 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline long __shfl_xor_sync(unsigned mask, long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 193
{ } 
#endif
#line 194 "e:\\cuda\\include\\sm_30_intrinsics.h"
static __inline unsigned long __shfl_xor_sync(unsigned mask, unsigned long var, int laneMask, int width = 32) {int volatile ___ = 1;(void)mask;(void)var;(void)laneMask;(void)width;::exit(___);}
#if 0
#line 194
{ } 
#endif
#line 87 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline long __ldg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 87
{ } 
#endif
#line 88 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 88
{ } 
#endif
#line 90 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char __ldg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 91 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline signed char __ldg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 91
{ } 
#endif
#line 92 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short __ldg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 93 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int __ldg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldg(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char2 __ldg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char4 __ldg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 97 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short2 __ldg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short4 __ldg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int2 __ldg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 100 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int4 __ldg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 101 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 101
{ } 
#endif
#line 103 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 104 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 105 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldg(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 111 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 112 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 113 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 115 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float __ldg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 115
{ } 
#endif
#line 116 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double __ldg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 116
{ } 
#endif
#line 117 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float2 __ldg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 117
{ } 
#endif
#line 118 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float4 __ldg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 118
{ } 
#endif
#line 119 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double2 __ldg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 119
{ } 
#endif
#line 123 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline long __ldcg(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 123
{ } 
#endif
#line 124 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcg(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 124
{ } 
#endif
#line 126 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char __ldcg(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 126
{ } 
#endif
#line 127 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcg(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 127
{ } 
#endif
#line 128 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short __ldcg(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 128
{ } 
#endif
#line 129 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int __ldcg(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 129
{ } 
#endif
#line 130 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcg(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 130
{ } 
#endif
#line 131 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcg(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 131
{ } 
#endif
#line 132 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcg(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 132
{ } 
#endif
#line 133 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcg(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 133
{ } 
#endif
#line 134 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcg(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 134
{ } 
#endif
#line 135 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcg(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 135
{ } 
#endif
#line 136 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcg(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 136
{ } 
#endif
#line 137 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcg(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 137
{ } 
#endif
#line 139 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcg(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 139
{ } 
#endif
#line 140 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcg(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 140
{ } 
#endif
#line 141 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcg(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 141
{ } 
#endif
#line 142 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcg(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 142
{ } 
#endif
#line 143 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcg(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 143
{ } 
#endif
#line 144 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcg(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 144
{ } 
#endif
#line 145 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcg(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 145
{ } 
#endif
#line 146 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcg(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 146
{ } 
#endif
#line 147 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcg(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 147
{ } 
#endif
#line 148 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcg(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 148
{ } 
#endif
#line 149 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcg(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 149
{ } 
#endif
#line 151 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float __ldcg(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 151
{ } 
#endif
#line 152 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double __ldcg(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 152
{ } 
#endif
#line 153 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcg(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 153
{ } 
#endif
#line 154 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcg(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 154
{ } 
#endif
#line 155 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcg(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 155
{ } 
#endif
#line 159 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline long __ldca(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 159
{ } 
#endif
#line 160 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldca(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 160
{ } 
#endif
#line 162 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char __ldca(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 162
{ } 
#endif
#line 163 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline signed char __ldca(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 163
{ } 
#endif
#line 164 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short __ldca(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 164
{ } 
#endif
#line 165 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int __ldca(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 165
{ } 
#endif
#line 166 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldca(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 166
{ } 
#endif
#line 167 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char2 __ldca(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 167
{ } 
#endif
#line 168 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char4 __ldca(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 168
{ } 
#endif
#line 169 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short2 __ldca(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 169
{ } 
#endif
#line 170 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short4 __ldca(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 170
{ } 
#endif
#line 171 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int2 __ldca(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 171
{ } 
#endif
#line 172 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int4 __ldca(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 172
{ } 
#endif
#line 173 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldca(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 173
{ } 
#endif
#line 175 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldca(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 175
{ } 
#endif
#line 176 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldca(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 176
{ } 
#endif
#line 177 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldca(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 177
{ } 
#endif
#line 178 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldca(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 178
{ } 
#endif
#line 179 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldca(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 179
{ } 
#endif
#line 180 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldca(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 180
{ } 
#endif
#line 181 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldca(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 181
{ } 
#endif
#line 182 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldca(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 182
{ } 
#endif
#line 183 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldca(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 183
{ } 
#endif
#line 184 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldca(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 184
{ } 
#endif
#line 185 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldca(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 185
{ } 
#endif
#line 187 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float __ldca(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 187
{ } 
#endif
#line 188 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double __ldca(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 188
{ } 
#endif
#line 189 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float2 __ldca(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 189
{ } 
#endif
#line 190 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float4 __ldca(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 190
{ } 
#endif
#line 191 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double2 __ldca(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 191
{ } 
#endif
#line 195 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline long __ldcs(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 195
{ } 
#endif
#line 196 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcs(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 196
{ } 
#endif
#line 198 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char __ldcs(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 198
{ } 
#endif
#line 199 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcs(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 199
{ } 
#endif
#line 200 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short __ldcs(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 200
{ } 
#endif
#line 201 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int __ldcs(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 201
{ } 
#endif
#line 202 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcs(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 202
{ } 
#endif
#line 203 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcs(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 203
{ } 
#endif
#line 204 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcs(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 204
{ } 
#endif
#line 205 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcs(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 205
{ } 
#endif
#line 206 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcs(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 206
{ } 
#endif
#line 207 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcs(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 207
{ } 
#endif
#line 208 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcs(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 208
{ } 
#endif
#line 209 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcs(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 209
{ } 
#endif
#line 211 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcs(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 211
{ } 
#endif
#line 212 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcs(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 212
{ } 
#endif
#line 213 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcs(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 213
{ } 
#endif
#line 214 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcs(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 214
{ } 
#endif
#line 215 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcs(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 215
{ } 
#endif
#line 216 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcs(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 216
{ } 
#endif
#line 217 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcs(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 217
{ } 
#endif
#line 218 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcs(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 218
{ } 
#endif
#line 219 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcs(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 219
{ } 
#endif
#line 220 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcs(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 220
{ } 
#endif
#line 221 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcs(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 221
{ } 
#endif
#line 223 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float __ldcs(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 223
{ } 
#endif
#line 224 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double __ldcs(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 224
{ } 
#endif
#line 225 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcs(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 225
{ } 
#endif
#line 226 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcs(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 226
{ } 
#endif
#line 227 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcs(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 227
{ } 
#endif
#line 231 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline long __ldlu(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 231
{ } 
#endif
#line 232 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldlu(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 232
{ } 
#endif
#line 234 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char __ldlu(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 234
{ } 
#endif
#line 235 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline signed char __ldlu(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 235
{ } 
#endif
#line 236 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short __ldlu(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 236
{ } 
#endif
#line 237 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int __ldlu(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 237
{ } 
#endif
#line 238 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldlu(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 238
{ } 
#endif
#line 239 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char2 __ldlu(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 239
{ } 
#endif
#line 240 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char4 __ldlu(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 240
{ } 
#endif
#line 241 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short2 __ldlu(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 241
{ } 
#endif
#line 242 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short4 __ldlu(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 242
{ } 
#endif
#line 243 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int2 __ldlu(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 243
{ } 
#endif
#line 244 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int4 __ldlu(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 244
{ } 
#endif
#line 245 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldlu(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 245
{ } 
#endif
#line 247 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldlu(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 247
{ } 
#endif
#line 248 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldlu(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 248
{ } 
#endif
#line 249 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldlu(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 249
{ } 
#endif
#line 250 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldlu(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 250
{ } 
#endif
#line 251 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldlu(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 251
{ } 
#endif
#line 252 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldlu(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 252
{ } 
#endif
#line 253 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldlu(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 253
{ } 
#endif
#line 254 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldlu(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 254
{ } 
#endif
#line 255 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldlu(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 255
{ } 
#endif
#line 256 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldlu(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 256
{ } 
#endif
#line 257 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldlu(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 257
{ } 
#endif
#line 259 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float __ldlu(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 259
{ } 
#endif
#line 260 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double __ldlu(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 260
{ } 
#endif
#line 261 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float2 __ldlu(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 261
{ } 
#endif
#line 262 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float4 __ldlu(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 262
{ } 
#endif
#line 263 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double2 __ldlu(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 263
{ } 
#endif
#line 267 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline long __ldcv(const long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 267
{ } 
#endif
#line 268 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned long __ldcv(const unsigned long *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 268
{ } 
#endif
#line 270 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char __ldcv(const char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 270
{ } 
#endif
#line 271 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline signed char __ldcv(const signed char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 271
{ } 
#endif
#line 272 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short __ldcv(const short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 272
{ } 
#endif
#line 273 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int __ldcv(const int *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 273
{ } 
#endif
#line 274 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline __int64 __ldcv(const __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 274
{ } 
#endif
#line 275 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char2 __ldcv(const char2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 275
{ } 
#endif
#line 276 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline char4 __ldcv(const char4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 276
{ } 
#endif
#line 277 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short2 __ldcv(const short2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 277
{ } 
#endif
#line 278 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline short4 __ldcv(const short4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 278
{ } 
#endif
#line 279 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int2 __ldcv(const int2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 279
{ } 
#endif
#line 280 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline int4 __ldcv(const int4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 280
{ } 
#endif
#line 281 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline longlong2 __ldcv(const longlong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 281
{ } 
#endif
#line 283 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned char __ldcv(const unsigned char *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 283
{ } 
#endif
#line 284 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned short __ldcv(const unsigned short *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 284
{ } 
#endif
#line 285 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __ldcv(const unsigned *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 285
{ } 
#endif
#line 286 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __int64 __ldcv(const unsigned __int64 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 286
{ } 
#endif
#line 287 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar2 __ldcv(const uchar2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 287
{ } 
#endif
#line 288 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uchar4 __ldcv(const uchar4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 288
{ } 
#endif
#line 289 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort2 __ldcv(const ushort2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 289
{ } 
#endif
#line 290 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ushort4 __ldcv(const ushort4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 290
{ } 
#endif
#line 291 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint2 __ldcv(const uint2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 291
{ } 
#endif
#line 292 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline uint4 __ldcv(const uint4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 292
{ } 
#endif
#line 293 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline ulonglong2 __ldcv(const ulonglong2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 293
{ } 
#endif
#line 295 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float __ldcv(const float *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 295
{ } 
#endif
#line 296 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double __ldcv(const double *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 296
{ } 
#endif
#line 297 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float2 __ldcv(const float2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 297
{ } 
#endif
#line 298 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline float4 __ldcv(const float4 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 298
{ } 
#endif
#line 299 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline double2 __ldcv(const double2 *ptr) {int volatile ___ = 1;(void)ptr;::exit(___);}
#if 0
#line 299
{ } 
#endif
#line 303 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 303
{ } 
#endif
#line 304 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 304
{ } 
#endif
#line 306 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 306
{ } 
#endif
#line 307 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 307
{ } 
#endif
#line 308 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 308
{ } 
#endif
#line 309 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 309
{ } 
#endif
#line 310 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(__int64 *ptr, __int64 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 310
{ } 
#endif
#line 311 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 311
{ } 
#endif
#line 312 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 312
{ } 
#endif
#line 313 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 313
{ } 
#endif
#line 314 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 314
{ } 
#endif
#line 315 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 315
{ } 
#endif
#line 316 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 316
{ } 
#endif
#line 317 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 317
{ } 
#endif
#line 319 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 319
{ } 
#endif
#line 320 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 320
{ } 
#endif
#line 321 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 321
{ } 
#endif
#line 322 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(unsigned __int64 *ptr, unsigned __int64 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 322
{ } 
#endif
#line 323 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 323
{ } 
#endif
#line 324 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 324
{ } 
#endif
#line 325 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 325
{ } 
#endif
#line 326 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 326
{ } 
#endif
#line 327 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 327
{ } 
#endif
#line 328 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 328
{ } 
#endif
#line 329 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 329
{ } 
#endif
#line 331 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 331
{ } 
#endif
#line 332 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 332
{ } 
#endif
#line 333 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 333
{ } 
#endif
#line 334 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 334
{ } 
#endif
#line 335 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwb(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 335
{ } 
#endif
#line 339 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 339
{ } 
#endif
#line 340 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 340
{ } 
#endif
#line 342 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 342
{ } 
#endif
#line 343 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 343
{ } 
#endif
#line 344 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 344
{ } 
#endif
#line 345 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 345
{ } 
#endif
#line 346 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(__int64 *ptr, __int64 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 346
{ } 
#endif
#line 347 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 347
{ } 
#endif
#line 348 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 348
{ } 
#endif
#line 349 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 349
{ } 
#endif
#line 350 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 350
{ } 
#endif
#line 351 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 351
{ } 
#endif
#line 352 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 352
{ } 
#endif
#line 353 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 353
{ } 
#endif
#line 355 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 355
{ } 
#endif
#line 356 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 356
{ } 
#endif
#line 357 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 357
{ } 
#endif
#line 358 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(unsigned __int64 *ptr, unsigned __int64 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 358
{ } 
#endif
#line 359 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 359
{ } 
#endif
#line 360 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 360
{ } 
#endif
#line 361 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 361
{ } 
#endif
#line 362 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 362
{ } 
#endif
#line 363 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 363
{ } 
#endif
#line 364 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 364
{ } 
#endif
#line 365 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 365
{ } 
#endif
#line 367 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 367
{ } 
#endif
#line 368 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 368
{ } 
#endif
#line 369 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 369
{ } 
#endif
#line 370 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 370
{ } 
#endif
#line 371 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcg(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 371
{ } 
#endif
#line 375 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 375
{ } 
#endif
#line 376 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 376
{ } 
#endif
#line 378 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 378
{ } 
#endif
#line 379 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 379
{ } 
#endif
#line 380 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 380
{ } 
#endif
#line 381 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 381
{ } 
#endif
#line 382 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(__int64 *ptr, __int64 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 382
{ } 
#endif
#line 383 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 383
{ } 
#endif
#line 384 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 384
{ } 
#endif
#line 385 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 385
{ } 
#endif
#line 386 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 386
{ } 
#endif
#line 387 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 387
{ } 
#endif
#line 388 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 388
{ } 
#endif
#line 389 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 389
{ } 
#endif
#line 391 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 391
{ } 
#endif
#line 392 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 392
{ } 
#endif
#line 393 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 393
{ } 
#endif
#line 394 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(unsigned __int64 *ptr, unsigned __int64 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 394
{ } 
#endif
#line 395 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 395
{ } 
#endif
#line 396 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 396
{ } 
#endif
#line 397 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 397
{ } 
#endif
#line 398 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 398
{ } 
#endif
#line 399 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 399
{ } 
#endif
#line 400 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 400
{ } 
#endif
#line 401 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 401
{ } 
#endif
#line 403 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 403
{ } 
#endif
#line 404 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 404
{ } 
#endif
#line 405 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 405
{ } 
#endif
#line 406 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 406
{ } 
#endif
#line 407 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stcs(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 407
{ } 
#endif
#line 411 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(long *ptr, long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 411
{ } 
#endif
#line 412 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned long *ptr, unsigned long value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 412
{ } 
#endif
#line 414 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(char *ptr, char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 414
{ } 
#endif
#line 415 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(signed char *ptr, signed char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 415
{ } 
#endif
#line 416 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(short *ptr, short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 416
{ } 
#endif
#line 417 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(int *ptr, int value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 417
{ } 
#endif
#line 418 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(__int64 *ptr, __int64 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 418
{ } 
#endif
#line 419 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(char2 *ptr, char2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 419
{ } 
#endif
#line 420 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(char4 *ptr, char4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 420
{ } 
#endif
#line 421 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(short2 *ptr, short2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 421
{ } 
#endif
#line 422 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(short4 *ptr, short4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 422
{ } 
#endif
#line 423 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(int2 *ptr, int2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 423
{ } 
#endif
#line 424 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(int4 *ptr, int4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 424
{ } 
#endif
#line 425 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(longlong2 *ptr, longlong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 425
{ } 
#endif
#line 427 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned char *ptr, unsigned char value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 427
{ } 
#endif
#line 428 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned short *ptr, unsigned short value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 428
{ } 
#endif
#line 429 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned *ptr, unsigned value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 429
{ } 
#endif
#line 430 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(unsigned __int64 *ptr, unsigned __int64 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 430
{ } 
#endif
#line 431 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(uchar2 *ptr, uchar2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 431
{ } 
#endif
#line 432 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(uchar4 *ptr, uchar4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 432
{ } 
#endif
#line 433 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(ushort2 *ptr, ushort2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 433
{ } 
#endif
#line 434 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(ushort4 *ptr, ushort4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 434
{ } 
#endif
#line 435 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(uint2 *ptr, uint2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 435
{ } 
#endif
#line 436 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(uint4 *ptr, uint4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 436
{ } 
#endif
#line 437 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(ulonglong2 *ptr, ulonglong2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 437
{ } 
#endif
#line 439 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(float *ptr, float value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 439
{ } 
#endif
#line 440 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(double *ptr, double value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 440
{ } 
#endif
#line 441 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(float2 *ptr, float2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 441
{ } 
#endif
#line 442 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(float4 *ptr, float4 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 442
{ } 
#endif
#line 443 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline void __stwt(double2 *ptr, double2 value) {int volatile ___ = 1;(void)ptr;(void)value;::exit(___);}
#if 0
#line 443
{ } 
#endif
#line 460 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_l(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 460
{ } 
#endif
#line 472 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_lc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 472
{ } 
#endif
#line 485 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_r(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 485
{ } 
#endif
#line 497 "e:\\cuda\\include\\sm_32_intrinsics.h"
static __inline unsigned __funnelshift_rc(unsigned lo, unsigned hi, unsigned shift) {int volatile ___ = 1;(void)lo;(void)hi;(void)shift;::exit(___);}
#if 0
#line 497
{ } 
#endif
#line 89 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 89
{ } 
#endif
#line 90 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 90
{ } 
#endif
#line 92 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_lo(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 92
{ } 
#endif
#line 93 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_lo(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 95 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 98 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline int __dp2a_hi(short2 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp2a_hi(ushort2 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 106 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(int srcA, int srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(unsigned srcA, unsigned srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 109 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline int __dp4a(char4 srcA, char4 srcB, int c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 110 "e:\\cuda\\include\\sm_61_intrinsics.h"
static __inline unsigned __dp4a(uchar4 srcA, uchar4 srcB, unsigned c) {int volatile ___ = 1;(void)srcA;(void)srcB;(void)c;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 93 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 96 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, long value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 96
{ } 
#endif
#line 97 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, unsigned __int64 value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, __int64 value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, float value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 100 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_any_sync(unsigned mask, double value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 100
{ } 
#endif
#line 102 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 103 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, int value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 104 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 104
{ } 
#endif
#line 105 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, long value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 105
{ } 
#endif
#line 106 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, unsigned __int64 value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 106
{ } 
#endif
#line 107 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, __int64 value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 107
{ } 
#endif
#line 108 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, float value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned __match_all_sync(unsigned mask, double value, int *pred) {int volatile ___ = 1;(void)mask;(void)value;(void)pred;::exit(___);}
#if 0
#line 109
{ } 
#endif
#line 111 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline void __nanosleep(unsigned ns) {int volatile ___ = 1;(void)ns;::exit(___);}
#if 0
#line 111
{ } 
#endif
#line 113 "e:\\cuda\\include\\crt\\sm_70_rt.h"
static __inline unsigned short atomicCAS(unsigned short *address, unsigned short compare, unsigned short val) {int volatile ___ = 1;(void)address;(void)compare;(void)val;::exit(___);}
#if 0
#line 113
{ } 
#endif
#line 93 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_add_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 93
{ } 
#endif
#line 94 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_min_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 94
{ } 
#endif
#line 95 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_max_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 95
{ } 
#endif
#line 97 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline int __reduce_add_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 97
{ } 
#endif
#line 98 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline int __reduce_min_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 98
{ } 
#endif
#line 99 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline int __reduce_max_sync(unsigned mask, int value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 99
{ } 
#endif
#line 101 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_and_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 101
{ } 
#endif
#line 102 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_or_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 102
{ } 
#endif
#line 103 "e:\\cuda\\include\\crt\\sm_80_rt.h"
static __inline unsigned __reduce_xor_sync(unsigned mask, unsigned value) {int volatile ___ = 1;(void)mask;(void)value;::exit(___);}
#if 0
#line 103
{ } 
#endif
#line 106 "e:\\cuda\\include\\crt\\sm_80_rt.h"
extern "C" {
#line 107
inline void *__nv_associate_access_property(const void *ptr, unsigned 
#line 108
policy) {int volatile ___ = 1;(void)ptr;(void)policy;::exit(___);}
#if 0
#line 108
{ } 
#endif
#line 109 "e:\\cuda\\include\\crt\\sm_80_rt.h"
inline void __nv_memcpy_async_shared_global_4(void *dst, const void *src, unsigned 
#line 110
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;::exit(___);}
#if 0
#line 110
{ } 
#endif
#line 111 "e:\\cuda\\include\\crt\\sm_80_rt.h"
inline void __nv_memcpy_async_shared_global_8(void *dst, const void *src, unsigned 
#line 112
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;::exit(___);}
#if 0
#line 112
{ } 
#endif
#line 113 "e:\\cuda\\include\\crt\\sm_80_rt.h"
inline void __nv_memcpy_async_shared_global_16(void *dst, const void *src, unsigned 
#line 114
src_size) {int volatile ___ = 1;(void)dst;(void)src;(void)src_size;::exit(___);}
#if 0
#line 114
{ } 
#endif
#line 115 "e:\\cuda\\include\\crt\\sm_80_rt.h"
}
#line 122 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 123
__declspec(deprecated) static __forceinline void surf1Dread(T *res, ::surface< void, 1>  surf, int x, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)s;(void)mode;::exit(___);}
#if 0
#line 124
{ 
#line 128
} 
#endif
#line 130 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 131
__declspec(deprecated) static __forceinline T surf1Dread(::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 132
{ 
#line 138
} 
#endif
#line 140 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 141
__declspec(deprecated) static __forceinline void surf1Dread(T *res, ::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 142
{ 
#line 146
} 
#endif
#line 149 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 150
__declspec(deprecated) static __forceinline void surf2Dread(T *res, ::surface< void, 2>  surf, int x, int y, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)s;(void)mode;::exit(___);}
#if 0
#line 151
{ 
#line 155
} 
#endif
#line 157 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 158
__declspec(deprecated) static __forceinline T surf2Dread(::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 159
{ 
#line 165
} 
#endif
#line 167 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 168
__declspec(deprecated) static __forceinline void surf2Dread(T *res, ::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 169
{ 
#line 173
} 
#endif
#line 176 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 177
__declspec(deprecated) static __forceinline void surf3Dread(T *res, ::surface< void, 3>  surf, int x, int y, int z, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;::exit(___);}
#if 0
#line 178
{ 
#line 182
} 
#endif
#line 184 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 185
__declspec(deprecated) static __forceinline T surf3Dread(::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 186
{ 
#line 192
} 
#endif
#line 194 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 195
__declspec(deprecated) static __forceinline void surf3Dread(T *res, ::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 196
{ 
#line 200
} 
#endif
#line 204 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 205
__declspec(deprecated) static __forceinline void surf1DLayeredread(T *res, ::surface< void, 241>  surf, int x, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 206
{ 
#line 210
} 
#endif
#line 212 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 213
__declspec(deprecated) static __forceinline T surf1DLayeredread(::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 214
{ 
#line 220
} 
#endif
#line 223 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 224
__declspec(deprecated) static __forceinline void surf1DLayeredread(T *res, ::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 225
{ 
#line 229
} 
#endif
#line 232 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 233
__declspec(deprecated) static __forceinline void surf2DLayeredread(T *res, ::surface< void, 242>  surf, int x, int y, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 234
{ 
#line 238
} 
#endif
#line 240 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 241
__declspec(deprecated) static __forceinline T surf2DLayeredread(::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 242
{ 
#line 248
} 
#endif
#line 251 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 252
__declspec(deprecated) static __forceinline void surf2DLayeredread(T *res, ::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 253
{ 
#line 257
} 
#endif
#line 260 "e:\\cuda\\include\\surface_functions.h"
template< class T> static __forceinline void 
#line 261
surfCubemapread(T *res, ::surface< void, 12>  surf, int x, int y, int face, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;::exit(___);}
#if 0
#line 262
{ 
#line 266
} 
#endif
#line 268 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 269
__declspec(deprecated) static __forceinline T surfCubemapread(::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 270
{ 
#line 277
} 
#endif
#line 279 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 280
__declspec(deprecated) static __forceinline void surfCubemapread(T *res, ::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 281
{ 
#line 285
} 
#endif
#line 288 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 289
__declspec(deprecated) static __forceinline void surfCubemapLayeredread(T *res, ::surface< void, 252>  surf, int x, int y, int layerFace, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;::exit(___);}
#if 0
#line 290
{ 
#line 294
} 
#endif
#line 296 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 297
__declspec(deprecated) static __forceinline T surfCubemapLayeredread(::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 298
{ 
#line 304
} 
#endif
#line 306 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 307
__declspec(deprecated) static __forceinline void surfCubemapLayeredread(T *res, ::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)res;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 308
{ 
#line 312
} 
#endif
#line 315 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 316
__declspec(deprecated) static __forceinline void surf1Dwrite(T val, ::surface< void, 1>  surf, int x, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)s;(void)mode;::exit(___);}
#if 0
#line 317
{ 
#line 321
} 
#endif
#line 323 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 324
__declspec(deprecated) static __forceinline void surf1Dwrite(T val, ::surface< void, 1>  surf, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)mode;::exit(___);}
#if 0
#line 325
{ 
#line 329
} 
#endif
#line 333 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 334
__declspec(deprecated) static __forceinline void surf2Dwrite(T val, ::surface< void, 2>  surf, int x, int y, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)s;(void)mode;::exit(___);}
#if 0
#line 335
{ 
#line 339
} 
#endif
#line 341 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 342
__declspec(deprecated) static __forceinline void surf2Dwrite(T val, ::surface< void, 2>  surf, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 343
{ 
#line 347
} 
#endif
#line 350 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 351
__declspec(deprecated) static __forceinline void surf3Dwrite(T val, ::surface< void, 3>  surf, int x, int y, int z, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)s;(void)mode;::exit(___);}
#if 0
#line 352
{ 
#line 356
} 
#endif
#line 358 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 359
__declspec(deprecated) static __forceinline void surf3Dwrite(T val, ::surface< void, 3>  surf, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 360
{ 
#line 364
} 
#endif
#line 367 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 368
__declspec(deprecated) static __forceinline void surf1DLayeredwrite(T val, ::surface< void, 241>  surf, int x, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 369
{ 
#line 373
} 
#endif
#line 375 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 376
__declspec(deprecated) static __forceinline void surf1DLayeredwrite(T val, ::surface< void, 241>  surf, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 377
{ 
#line 381
} 
#endif
#line 384 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 385
__declspec(deprecated) static __forceinline void surf2DLayeredwrite(T val, ::surface< void, 242>  surf, int x, int y, int layer, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)s;(void)mode;::exit(___);}
#if 0
#line 386
{ 
#line 390
} 
#endif
#line 392 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 393
__declspec(deprecated) static __forceinline void surf2DLayeredwrite(T val, ::surface< void, 242>  surf, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 394
{ 
#line 398
} 
#endif
#line 401 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 402
__declspec(deprecated) static __forceinline void surfCubemapwrite(T val, ::surface< void, 12>  surf, int x, int y, int face, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)s;(void)mode;::exit(___);}
#if 0
#line 403
{ 
#line 407
} 
#endif
#line 409 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 410
__declspec(deprecated) static __forceinline void surfCubemapwrite(T val, ::surface< void, 12>  surf, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 411
{ 
#line 415
} 
#endif
#line 419 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 420
__declspec(deprecated) static __forceinline void surfCubemapLayeredwrite(T val, ::surface< void, 252>  surf, int x, int y, int layerFace, int s, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)s;(void)mode;::exit(___);}
#if 0
#line 421
{ 
#line 425
} 
#endif
#line 427 "e:\\cuda\\include\\surface_functions.h"
template< class T> 
#line 428
__declspec(deprecated) static __forceinline void surfCubemapLayeredwrite(T val, ::surface< void, 252>  surf, int x, int y, int layerFace, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)surf;(void)x;(void)y;(void)layerFace;(void)mode;::exit(___);}
#if 0
#line 429
{ 
#line 433
} 
#endif
#line 72 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 73
struct __nv_tex_rmet_ret { }; 
#line 75
template<> struct __nv_tex_rmet_ret< char>  { typedef char type; }; 
#line 76
template<> struct __nv_tex_rmet_ret< signed char>  { typedef signed char type; }; 
#line 77
template<> struct __nv_tex_rmet_ret< unsigned char>  { typedef unsigned char type; }; 
#line 78
template<> struct __nv_tex_rmet_ret< char1>  { typedef char1 type; }; 
#line 79
template<> struct __nv_tex_rmet_ret< uchar1>  { typedef uchar1 type; }; 
#line 80
template<> struct __nv_tex_rmet_ret< char2>  { typedef char2 type; }; 
#line 81
template<> struct __nv_tex_rmet_ret< uchar2>  { typedef uchar2 type; }; 
#line 82
template<> struct __nv_tex_rmet_ret< char4>  { typedef char4 type; }; 
#line 83
template<> struct __nv_tex_rmet_ret< uchar4>  { typedef uchar4 type; }; 
#line 85
template<> struct __nv_tex_rmet_ret< short>  { typedef short type; }; 
#line 86
template<> struct __nv_tex_rmet_ret< unsigned short>  { typedef unsigned short type; }; 
#line 87
template<> struct __nv_tex_rmet_ret< short1>  { typedef short1 type; }; 
#line 88
template<> struct __nv_tex_rmet_ret< ushort1>  { typedef ushort1 type; }; 
#line 89
template<> struct __nv_tex_rmet_ret< short2>  { typedef short2 type; }; 
#line 90
template<> struct __nv_tex_rmet_ret< ushort2>  { typedef ushort2 type; }; 
#line 91
template<> struct __nv_tex_rmet_ret< short4>  { typedef short4 type; }; 
#line 92
template<> struct __nv_tex_rmet_ret< ushort4>  { typedef ushort4 type; }; 
#line 94
template<> struct __nv_tex_rmet_ret< int>  { typedef int type; }; 
#line 95
template<> struct __nv_tex_rmet_ret< unsigned>  { typedef unsigned type; }; 
#line 96
template<> struct __nv_tex_rmet_ret< int1>  { typedef int1 type; }; 
#line 97
template<> struct __nv_tex_rmet_ret< uint1>  { typedef uint1 type; }; 
#line 98
template<> struct __nv_tex_rmet_ret< int2>  { typedef int2 type; }; 
#line 99
template<> struct __nv_tex_rmet_ret< uint2>  { typedef uint2 type; }; 
#line 100
template<> struct __nv_tex_rmet_ret< int4>  { typedef int4 type; }; 
#line 101
template<> struct __nv_tex_rmet_ret< uint4>  { typedef uint4 type; }; 
#line 104
template<> struct __nv_tex_rmet_ret< long>  { typedef long type; }; 
#line 105
template<> struct __nv_tex_rmet_ret< unsigned long>  { typedef unsigned long type; }; 
#line 106
template<> struct __nv_tex_rmet_ret< long1>  { typedef long1 type; }; 
#line 107
template<> struct __nv_tex_rmet_ret< ulong1>  { typedef ulong1 type; }; 
#line 108
template<> struct __nv_tex_rmet_ret< long2>  { typedef long2 type; }; 
#line 109
template<> struct __nv_tex_rmet_ret< ulong2>  { typedef ulong2 type; }; 
#line 110
template<> struct __nv_tex_rmet_ret< long4>  { typedef long4 type; }; 
#line 111
template<> struct __nv_tex_rmet_ret< ulong4>  { typedef ulong4 type; }; 
#line 113 "e:\\cuda\\include\\texture_fetch_functions.h"
template<> struct __nv_tex_rmet_ret< float>  { typedef float type; }; 
#line 114
template<> struct __nv_tex_rmet_ret< float1>  { typedef float1 type; }; 
#line 115
template<> struct __nv_tex_rmet_ret< float2>  { typedef float2 type; }; 
#line 116
template<> struct __nv_tex_rmet_ret< float4>  { typedef float4 type; }; 
#line 119
template< class T> struct __nv_tex_rmet_cast { typedef T *type; }; 
#line 121
template<> struct __nv_tex_rmet_cast< long>  { typedef int *type; }; 
#line 122
template<> struct __nv_tex_rmet_cast< unsigned long>  { typedef unsigned *type; }; 
#line 123
template<> struct __nv_tex_rmet_cast< long1>  { typedef int1 *type; }; 
#line 124
template<> struct __nv_tex_rmet_cast< ulong1>  { typedef uint1 *type; }; 
#line 125
template<> struct __nv_tex_rmet_cast< long2>  { typedef int2 *type; }; 
#line 126
template<> struct __nv_tex_rmet_cast< ulong2>  { typedef uint2 *type; }; 
#line 127
template<> struct __nv_tex_rmet_cast< long4>  { typedef int4 *type; }; 
#line 128
template<> struct __nv_tex_rmet_cast< ulong4>  { typedef uint4 *type; }; 
#line 131 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 132
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeElementType>  t, int x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 133
{ 
#line 139
} 
#endif
#line 141 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 142
struct __nv_tex_rmnf_ret { }; 
#line 144
template<> struct __nv_tex_rmnf_ret< char>  { typedef float type; }; 
#line 145
template<> struct __nv_tex_rmnf_ret< signed char>  { typedef float type; }; 
#line 146
template<> struct __nv_tex_rmnf_ret< unsigned char>  { typedef float type; }; 
#line 147
template<> struct __nv_tex_rmnf_ret< short>  { typedef float type; }; 
#line 148
template<> struct __nv_tex_rmnf_ret< unsigned short>  { typedef float type; }; 
#line 149
template<> struct __nv_tex_rmnf_ret< char1>  { typedef float1 type; }; 
#line 150
template<> struct __nv_tex_rmnf_ret< uchar1>  { typedef float1 type; }; 
#line 151
template<> struct __nv_tex_rmnf_ret< short1>  { typedef float1 type; }; 
#line 152
template<> struct __nv_tex_rmnf_ret< ushort1>  { typedef float1 type; }; 
#line 153
template<> struct __nv_tex_rmnf_ret< char2>  { typedef float2 type; }; 
#line 154
template<> struct __nv_tex_rmnf_ret< uchar2>  { typedef float2 type; }; 
#line 155
template<> struct __nv_tex_rmnf_ret< short2>  { typedef float2 type; }; 
#line 156
template<> struct __nv_tex_rmnf_ret< ushort2>  { typedef float2 type; }; 
#line 157
template<> struct __nv_tex_rmnf_ret< char4>  { typedef float4 type; }; 
#line 158
template<> struct __nv_tex_rmnf_ret< uchar4>  { typedef float4 type; }; 
#line 159
template<> struct __nv_tex_rmnf_ret< short4>  { typedef float4 type; }; 
#line 160
template<> struct __nv_tex_rmnf_ret< ushort4>  { typedef float4 type; }; 
#line 162
template< class T> 
#line 163
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex1Dfetch(texture< T, 1, cudaReadModeNormalizedFloat>  t, int x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 164
{ 
#line 171
} 
#endif
#line 174 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 175
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex1D(texture< T, 1, cudaReadModeElementType>  t, float x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 176
{ 
#line 182
} 
#endif
#line 184 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 185
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex1D(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x) {int volatile ___ = 1;(void)t;(void)x;::exit(___);}
#if 0
#line 186
{ 
#line 193
} 
#endif
#line 197 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 198
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex2D(texture< T, 2, cudaReadModeElementType>  t, float x, float y) {int volatile ___ = 1;(void)t;(void)x;(void)y;::exit(___);}
#if 0
#line 199
{ 
#line 206
} 
#endif
#line 208 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 209
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex2D(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y) {int volatile ___ = 1;(void)t;(void)x;(void)y;::exit(___);}
#if 0
#line 210
{ 
#line 217
} 
#endif
#line 221 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 222
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeElementType>  t, float x, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)layer;::exit(___);}
#if 0
#line 223
{ 
#line 229
} 
#endif
#line 231 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 232
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex1DLayered(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)layer;::exit(___);}
#if 0
#line 233
{ 
#line 240
} 
#endif
#line 244 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 245
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 246
{ 
#line 252
} 
#endif
#line 254 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 255
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex2DLayered(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 256
{ 
#line 263
} 
#endif
#line 266 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 267
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex3D(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 268
{ 
#line 274
} 
#endif
#line 276 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 277
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex3D(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 278
{ 
#line 285
} 
#endif
#line 288 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 289
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 290
{ 
#line 296
} 
#endif
#line 298 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 299
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type texCubemap(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 300
{ 
#line 307
} 
#endif
#line 310 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 311
struct __nv_tex2dgather_ret { }; 
#line 312
template<> struct __nv_tex2dgather_ret< char>  { typedef char4 type; }; 
#line 313
template<> struct __nv_tex2dgather_ret< signed char>  { typedef char4 type; }; 
#line 314
template<> struct __nv_tex2dgather_ret< char1>  { typedef char4 type; }; 
#line 315
template<> struct __nv_tex2dgather_ret< char2>  { typedef char4 type; }; 
#line 316
template<> struct __nv_tex2dgather_ret< char3>  { typedef char4 type; }; 
#line 317
template<> struct __nv_tex2dgather_ret< char4>  { typedef char4 type; }; 
#line 318
template<> struct __nv_tex2dgather_ret< unsigned char>  { typedef uchar4 type; }; 
#line 319
template<> struct __nv_tex2dgather_ret< uchar1>  { typedef uchar4 type; }; 
#line 320
template<> struct __nv_tex2dgather_ret< uchar2>  { typedef uchar4 type; }; 
#line 321
template<> struct __nv_tex2dgather_ret< uchar3>  { typedef uchar4 type; }; 
#line 322
template<> struct __nv_tex2dgather_ret< uchar4>  { typedef uchar4 type; }; 
#line 324
template<> struct __nv_tex2dgather_ret< short>  { typedef short4 type; }; 
#line 325
template<> struct __nv_tex2dgather_ret< short1>  { typedef short4 type; }; 
#line 326
template<> struct __nv_tex2dgather_ret< short2>  { typedef short4 type; }; 
#line 327
template<> struct __nv_tex2dgather_ret< short3>  { typedef short4 type; }; 
#line 328
template<> struct __nv_tex2dgather_ret< short4>  { typedef short4 type; }; 
#line 329
template<> struct __nv_tex2dgather_ret< unsigned short>  { typedef ushort4 type; }; 
#line 330
template<> struct __nv_tex2dgather_ret< ushort1>  { typedef ushort4 type; }; 
#line 331
template<> struct __nv_tex2dgather_ret< ushort2>  { typedef ushort4 type; }; 
#line 332
template<> struct __nv_tex2dgather_ret< ushort3>  { typedef ushort4 type; }; 
#line 333
template<> struct __nv_tex2dgather_ret< ushort4>  { typedef ushort4 type; }; 
#line 335
template<> struct __nv_tex2dgather_ret< int>  { typedef int4 type; }; 
#line 336
template<> struct __nv_tex2dgather_ret< int1>  { typedef int4 type; }; 
#line 337
template<> struct __nv_tex2dgather_ret< int2>  { typedef int4 type; }; 
#line 338
template<> struct __nv_tex2dgather_ret< int3>  { typedef int4 type; }; 
#line 339
template<> struct __nv_tex2dgather_ret< int4>  { typedef int4 type; }; 
#line 340
template<> struct __nv_tex2dgather_ret< unsigned>  { typedef uint4 type; }; 
#line 341
template<> struct __nv_tex2dgather_ret< uint1>  { typedef uint4 type; }; 
#line 342
template<> struct __nv_tex2dgather_ret< uint2>  { typedef uint4 type; }; 
#line 343
template<> struct __nv_tex2dgather_ret< uint3>  { typedef uint4 type; }; 
#line 344
template<> struct __nv_tex2dgather_ret< uint4>  { typedef uint4 type; }; 
#line 346
template<> struct __nv_tex2dgather_ret< float>  { typedef float4 type; }; 
#line 347
template<> struct __nv_tex2dgather_ret< float1>  { typedef float4 type; }; 
#line 348
template<> struct __nv_tex2dgather_ret< float2>  { typedef float4 type; }; 
#line 349
template<> struct __nv_tex2dgather_ret< float3>  { typedef float4 type; }; 
#line 350
template<> struct __nv_tex2dgather_ret< float4>  { typedef float4 type; }; 
#line 352
template< class T> static __forceinline typename __nv_tex2dgather_ret< T> ::type 
#line 353
tex2Dgather(texture< T, 2, cudaReadModeElementType>  t, float x, float y, int comp = 0) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 354
{ 
#line 361
} 
#endif
#line 364 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> struct __nv_tex2dgather_rmnf_ret { }; 
#line 365
template<> struct __nv_tex2dgather_rmnf_ret< char>  { typedef float4 type; }; 
#line 366
template<> struct __nv_tex2dgather_rmnf_ret< signed char>  { typedef float4 type; }; 
#line 367
template<> struct __nv_tex2dgather_rmnf_ret< unsigned char>  { typedef float4 type; }; 
#line 368
template<> struct __nv_tex2dgather_rmnf_ret< char1>  { typedef float4 type; }; 
#line 369
template<> struct __nv_tex2dgather_rmnf_ret< uchar1>  { typedef float4 type; }; 
#line 370
template<> struct __nv_tex2dgather_rmnf_ret< char2>  { typedef float4 type; }; 
#line 371
template<> struct __nv_tex2dgather_rmnf_ret< uchar2>  { typedef float4 type; }; 
#line 372
template<> struct __nv_tex2dgather_rmnf_ret< char3>  { typedef float4 type; }; 
#line 373
template<> struct __nv_tex2dgather_rmnf_ret< uchar3>  { typedef float4 type; }; 
#line 374
template<> struct __nv_tex2dgather_rmnf_ret< char4>  { typedef float4 type; }; 
#line 375
template<> struct __nv_tex2dgather_rmnf_ret< uchar4>  { typedef float4 type; }; 
#line 376
template<> struct __nv_tex2dgather_rmnf_ret< signed short>  { typedef float4 type; }; 
#line 377
template<> struct __nv_tex2dgather_rmnf_ret< unsigned short>  { typedef float4 type; }; 
#line 378
template<> struct __nv_tex2dgather_rmnf_ret< short1>  { typedef float4 type; }; 
#line 379
template<> struct __nv_tex2dgather_rmnf_ret< ushort1>  { typedef float4 type; }; 
#line 380
template<> struct __nv_tex2dgather_rmnf_ret< short2>  { typedef float4 type; }; 
#line 381
template<> struct __nv_tex2dgather_rmnf_ret< ushort2>  { typedef float4 type; }; 
#line 382
template<> struct __nv_tex2dgather_rmnf_ret< short3>  { typedef float4 type; }; 
#line 383
template<> struct __nv_tex2dgather_rmnf_ret< ushort3>  { typedef float4 type; }; 
#line 384
template<> struct __nv_tex2dgather_rmnf_ret< short4>  { typedef float4 type; }; 
#line 385
template<> struct __nv_tex2dgather_rmnf_ret< ushort4>  { typedef float4 type; }; 
#line 387
template< class T> static __forceinline typename __nv_tex2dgather_rmnf_ret< T> ::type 
#line 388
tex2Dgather(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, int comp = 0) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 389
{ 
#line 396
} 
#endif
#line 400 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 401
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeElementType>  t, float x, float level) {int volatile ___ = 1;(void)t;(void)x;(void)level;::exit(___);}
#if 0
#line 402
{ 
#line 408
} 
#endif
#line 410 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 411
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex1DLod(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float level) {int volatile ___ = 1;(void)t;(void)x;(void)level;::exit(___);}
#if 0
#line 412
{ 
#line 419
} 
#endif
#line 422 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 423
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeElementType>  t, float x, float y, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 424
{ 
#line 430
} 
#endif
#line 432 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 433
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex2DLod(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 434
{ 
#line 441
} 
#endif
#line 444 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 445
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 446
{ 
#line 452
} 
#endif
#line 454 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 455
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredLod(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 456
{ 
#line 463
} 
#endif
#line 466 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 467
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 468
{ 
#line 474
} 
#endif
#line 476 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 477
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredLod(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 478
{ 
#line 485
} 
#endif
#line 488 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 489
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 490
{ 
#line 496
} 
#endif
#line 498 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 499
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex3DLod(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 500
{ 
#line 507
} 
#endif
#line 510 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 511
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 512
{ 
#line 518
} 
#endif
#line 520 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 521
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type texCubemapLod(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 522
{ 
#line 529
} 
#endif
#line 533 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 534
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 535
{ 
#line 541
} 
#endif
#line 543 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 544
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayered(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 545
{ 
#line 552
} 
#endif
#line 556 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 557
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 558
{ 
#line 564
} 
#endif
#line 566 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 567
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredLod(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 568
{ 
#line 575
} 
#endif
#line 579 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 580
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeElementType>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 581
{ 
#line 587
} 
#endif
#line 589 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 590
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type texCubemapGrad(texture< T, 12, cudaReadModeNormalizedFloat>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 591
{ 
#line 598
} 
#endif
#line 602 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 603
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeElementType>  t, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 604
{ 
#line 610
} 
#endif
#line 612 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 613
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type texCubemapLayeredGrad(texture< T, 252, cudaReadModeNormalizedFloat>  t, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 614
{ 
#line 621
} 
#endif
#line 625 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 626
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeElementType>  t, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 627
{ 
#line 633
} 
#endif
#line 635 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 636
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex1DGrad(texture< T, 1, cudaReadModeNormalizedFloat>  t, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 637
{ 
#line 644
} 
#endif
#line 648 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 649
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeElementType>  t, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 650
{ 
#line 656
} 
#endif
#line 658 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 659
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex2DGrad(texture< T, 2, cudaReadModeNormalizedFloat>  t, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 660
{ 
#line 667
} 
#endif
#line 670 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 671
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeElementType>  t, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 672
{ 
#line 678
} 
#endif
#line 680 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 681
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex1DLayeredGrad(texture< T, 241, cudaReadModeNormalizedFloat>  t, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 682
{ 
#line 689
} 
#endif
#line 692 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 693
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeElementType>  t, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 694
{ 
#line 700
} 
#endif
#line 702 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 703
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex2DLayeredGrad(texture< T, 242, cudaReadModeNormalizedFloat>  t, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 704
{ 
#line 711
} 
#endif
#line 714 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 715
__declspec(deprecated) static __forceinline typename __nv_tex_rmet_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeElementType>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 716
{ 
#line 722
} 
#endif
#line 724 "e:\\cuda\\include\\texture_fetch_functions.h"
template< class T> 
#line 725
__declspec(deprecated) static __forceinline typename __nv_tex_rmnf_ret< T> ::type tex3DGrad(texture< T, 3, cudaReadModeNormalizedFloat>  t, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)t;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 726
{ 
#line 733
} 
#endif
#line 64 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> struct __nv_itex_trait { }; 
#line 65
template<> struct __nv_itex_trait< char>  { typedef void type; }; 
#line 66
template<> struct __nv_itex_trait< signed char>  { typedef void type; }; 
#line 67
template<> struct __nv_itex_trait< char1>  { typedef void type; }; 
#line 68
template<> struct __nv_itex_trait< char2>  { typedef void type; }; 
#line 69
template<> struct __nv_itex_trait< char4>  { typedef void type; }; 
#line 70
template<> struct __nv_itex_trait< unsigned char>  { typedef void type; }; 
#line 71
template<> struct __nv_itex_trait< uchar1>  { typedef void type; }; 
#line 72
template<> struct __nv_itex_trait< uchar2>  { typedef void type; }; 
#line 73
template<> struct __nv_itex_trait< uchar4>  { typedef void type; }; 
#line 74
template<> struct __nv_itex_trait< short>  { typedef void type; }; 
#line 75
template<> struct __nv_itex_trait< short1>  { typedef void type; }; 
#line 76
template<> struct __nv_itex_trait< short2>  { typedef void type; }; 
#line 77
template<> struct __nv_itex_trait< short4>  { typedef void type; }; 
#line 78
template<> struct __nv_itex_trait< unsigned short>  { typedef void type; }; 
#line 79
template<> struct __nv_itex_trait< ushort1>  { typedef void type; }; 
#line 80
template<> struct __nv_itex_trait< ushort2>  { typedef void type; }; 
#line 81
template<> struct __nv_itex_trait< ushort4>  { typedef void type; }; 
#line 82
template<> struct __nv_itex_trait< int>  { typedef void type; }; 
#line 83
template<> struct __nv_itex_trait< int1>  { typedef void type; }; 
#line 84
template<> struct __nv_itex_trait< int2>  { typedef void type; }; 
#line 85
template<> struct __nv_itex_trait< int4>  { typedef void type; }; 
#line 86
template<> struct __nv_itex_trait< unsigned>  { typedef void type; }; 
#line 87
template<> struct __nv_itex_trait< uint1>  { typedef void type; }; 
#line 88
template<> struct __nv_itex_trait< uint2>  { typedef void type; }; 
#line 89
template<> struct __nv_itex_trait< uint4>  { typedef void type; }; 
#line 91
template<> struct __nv_itex_trait< long>  { typedef void type; }; 
#line 92
template<> struct __nv_itex_trait< long1>  { typedef void type; }; 
#line 93
template<> struct __nv_itex_trait< long2>  { typedef void type; }; 
#line 94
template<> struct __nv_itex_trait< long4>  { typedef void type; }; 
#line 95
template<> struct __nv_itex_trait< unsigned long>  { typedef void type; }; 
#line 96
template<> struct __nv_itex_trait< ulong1>  { typedef void type; }; 
#line 97
template<> struct __nv_itex_trait< ulong2>  { typedef void type; }; 
#line 98
template<> struct __nv_itex_trait< ulong4>  { typedef void type; }; 
#line 100 "e:\\cuda\\include\\texture_indirect_functions.h"
template<> struct __nv_itex_trait< float>  { typedef void type; }; 
#line 101
template<> struct __nv_itex_trait< float1>  { typedef void type; }; 
#line 102
template<> struct __nv_itex_trait< float2>  { typedef void type; }; 
#line 103
template<> struct __nv_itex_trait< float4>  { typedef void type; }; 
#line 107
template< class T> static typename __nv_itex_trait< T> ::type 
#line 108
tex1Dfetch(T *ptr, ::cudaTextureObject_t obj, int x) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;::exit(___);}
#if 0
#line 109
{ 
#line 113
} 
#endif
#line 115 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 116
tex1Dfetch(::cudaTextureObject_t texObject, int x) {int volatile ___ = 1;(void)texObject;(void)x;::exit(___);}
#if 0
#line 117
{ 
#line 123
} 
#endif
#line 125 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 126
tex1D(T *ptr, ::cudaTextureObject_t obj, float x) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;::exit(___);}
#if 0
#line 127
{ 
#line 131
} 
#endif
#line 134 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 135
tex1D(::cudaTextureObject_t texObject, float x) {int volatile ___ = 1;(void)texObject;(void)x;::exit(___);}
#if 0
#line 136
{ 
#line 142
} 
#endif
#line 145 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 146
tex2D(T *ptr, ::cudaTextureObject_t obj, float x, float y) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;::exit(___);}
#if 0
#line 147
{ 
#line 151
} 
#endif
#line 153 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 154
tex2D(::cudaTextureObject_t texObject, float x, float y) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;::exit(___);}
#if 0
#line 155
{ 
#line 161
} 
#endif
#line 164 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 165
tex2D(T *ptr, ::cudaTextureObject_t obj, float x, float y, bool *
#line 166
isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;::exit(___);}
#if 0
#line 167
{ 
#line 173
} 
#endif
#line 175 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 176
tex2D(::cudaTextureObject_t texObject, float x, float y, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)isResident;::exit(___);}
#if 0
#line 177
{ 
#line 183
} 
#endif
#line 188 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 189
tex3D(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 190
{ 
#line 194
} 
#endif
#line 196 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 197
tex3D(::cudaTextureObject_t texObject, float x, float y, float z) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 198
{ 
#line 204
} 
#endif
#line 207 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 208
tex3D(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, bool *
#line 209
isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)isResident;::exit(___);}
#if 0
#line 210
{ 
#line 216
} 
#endif
#line 218 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 219
tex3D(::cudaTextureObject_t texObject, float x, float y, float z, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)isResident;::exit(___);}
#if 0
#line 220
{ 
#line 226
} 
#endif
#line 230 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 231
tex1DLayered(T *ptr, ::cudaTextureObject_t obj, float x, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;::exit(___);}
#if 0
#line 232
{ 
#line 236
} 
#endif
#line 238 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 239
tex1DLayered(::cudaTextureObject_t texObject, float x, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;::exit(___);}
#if 0
#line 240
{ 
#line 246
} 
#endif
#line 248 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 249
tex2DLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 250
{ 
#line 254
} 
#endif
#line 256 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 257
tex2DLayered(::cudaTextureObject_t texObject, float x, float y, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;::exit(___);}
#if 0
#line 258
{ 
#line 264
} 
#endif
#line 267 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 268
tex2DLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, bool *isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)isResident;::exit(___);}
#if 0
#line 269
{ 
#line 275
} 
#endif
#line 277 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 278
tex2DLayered(::cudaTextureObject_t texObject, float x, float y, int layer, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)isResident;::exit(___);}
#if 0
#line 279
{ 
#line 285
} 
#endif
#line 289 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 290
texCubemap(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 291
{ 
#line 295
} 
#endif
#line 298 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 299
texCubemap(::cudaTextureObject_t texObject, float x, float y, float z) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;::exit(___);}
#if 0
#line 300
{ 
#line 306
} 
#endif
#line 309 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 310
texCubemapLayered(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 311
{ 
#line 315
} 
#endif
#line 317 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 318
texCubemapLayered(::cudaTextureObject_t texObject, float x, float y, float z, int layer) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;::exit(___);}
#if 0
#line 319
{ 
#line 325
} 
#endif
#line 327 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 328
tex2Dgather(T *ptr, ::cudaTextureObject_t obj, float x, float y, int comp = 0) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 329
{ 
#line 333
} 
#endif
#line 335 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 336
tex2Dgather(::cudaTextureObject_t to, float x, float y, int comp = 0) {int volatile ___ = 1;(void)to;(void)x;(void)y;(void)comp;::exit(___);}
#if 0
#line 337
{ 
#line 343
} 
#endif
#line 346 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 347
tex2Dgather(T *ptr, ::cudaTextureObject_t obj, float x, float y, bool *isResident, int comp = 0) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)isResident;(void)comp;::exit(___);}
#if 0
#line 348
{ 
#line 354
} 
#endif
#line 356 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 357
tex2Dgather(::cudaTextureObject_t to, float x, float y, bool *isResident, int comp = 0) {int volatile ___ = 1;(void)to;(void)x;(void)y;(void)isResident;(void)comp;::exit(___);}
#if 0
#line 358
{ 
#line 364
} 
#endif
#line 368 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 369
tex1DLod(T *ptr, ::cudaTextureObject_t obj, float x, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)level;::exit(___);}
#if 0
#line 370
{ 
#line 374
} 
#endif
#line 376 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 377
tex1DLod(::cudaTextureObject_t texObject, float x, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)level;::exit(___);}
#if 0
#line 378
{ 
#line 384
} 
#endif
#line 387 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 388
tex2DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 389
{ 
#line 393
} 
#endif
#line 395 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 396
tex2DLod(::cudaTextureObject_t texObject, float x, float y, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;::exit(___);}
#if 0
#line 397
{ 
#line 403
} 
#endif
#line 407 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 408
tex2DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float level, bool *isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)level;(void)isResident;::exit(___);}
#if 0
#line 409
{ 
#line 415
} 
#endif
#line 417 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 418
tex2DLod(::cudaTextureObject_t texObject, float x, float y, float level, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)level;(void)isResident;::exit(___);}
#if 0
#line 419
{ 
#line 425
} 
#endif
#line 430 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 431
tex3DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 432
{ 
#line 436
} 
#endif
#line 438 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 439
tex3DLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 440
{ 
#line 446
} 
#endif
#line 449 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 450
tex3DLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level, bool *isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;(void)isResident;::exit(___);}
#if 0
#line 451
{ 
#line 457
} 
#endif
#line 459 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 460
tex3DLod(::cudaTextureObject_t texObject, float x, float y, float z, float level, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;(void)isResident;::exit(___);}
#if 0
#line 461
{ 
#line 467
} 
#endif
#line 472 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 473
tex1DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 474
{ 
#line 478
} 
#endif
#line 480 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 481
tex1DLayeredLod(::cudaTextureObject_t texObject, float x, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)level;::exit(___);}
#if 0
#line 482
{ 
#line 488
} 
#endif
#line 491 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 492
tex2DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 493
{ 
#line 497
} 
#endif
#line 499 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 500
tex2DLayeredLod(::cudaTextureObject_t texObject, float x, float y, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;::exit(___);}
#if 0
#line 501
{ 
#line 507
} 
#endif
#line 510 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 511
tex2DLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, float level, bool *isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)level;(void)isResident;::exit(___);}
#if 0
#line 512
{ 
#line 518
} 
#endif
#line 520 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 521
tex2DLayeredLod(::cudaTextureObject_t texObject, float x, float y, int layer, float level, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)level;(void)isResident;::exit(___);}
#if 0
#line 522
{ 
#line 528
} 
#endif
#line 531 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 532
texCubemapLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 533
{ 
#line 537
} 
#endif
#line 539 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 540
texCubemapLod(::cudaTextureObject_t texObject, float x, float y, float z, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)level;::exit(___);}
#if 0
#line 541
{ 
#line 547
} 
#endif
#line 550 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 551
texCubemapGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 552
{ 
#line 556
} 
#endif
#line 558 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 559
texCubemapGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 560
{ 
#line 566
} 
#endif
#line 568 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 569
texCubemapLayeredLod(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 570
{ 
#line 574
} 
#endif
#line 576 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 577
texCubemapLayeredLod(::cudaTextureObject_t texObject, float x, float y, float z, int layer, float level) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)level;::exit(___);}
#if 0
#line 578
{ 
#line 584
} 
#endif
#line 586 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 587
tex1DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 588
{ 
#line 592
} 
#endif
#line 594 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 595
tex1DGrad(::cudaTextureObject_t texObject, float x, float dPdx, float dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 596
{ 
#line 602
} 
#endif
#line 605 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 606
tex2DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 607
{ 
#line 612
} 
#endif
#line 614 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 615
tex2DGrad(::cudaTextureObject_t texObject, float x, float y, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 616
{ 
#line 622
} 
#endif
#line 625 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 626
tex2DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, ::float2 dPdx, ::float2 dPdy, bool *isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 627
{ 
#line 634
} 
#endif
#line 636 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 637
tex2DGrad(::cudaTextureObject_t texObject, float x, float y, ::float2 dPdx, ::float2 dPdy, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 638
{ 
#line 644
} 
#endif
#line 648 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 649
tex3DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 650
{ 
#line 654
} 
#endif
#line 656 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 657
tex3DGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 658
{ 
#line 664
} 
#endif
#line 667 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 668
tex3DGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, ::float4 dPdx, ::float4 dPdy, bool *isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 669
{ 
#line 675
} 
#endif
#line 677 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 678
tex3DGrad(::cudaTextureObject_t texObject, float x, float y, float z, ::float4 dPdx, ::float4 dPdy, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 679
{ 
#line 685
} 
#endif
#line 690 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 691
tex1DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 692
{ 
#line 696
} 
#endif
#line 698 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 699
tex1DLayeredGrad(::cudaTextureObject_t texObject, float x, int layer, float dPdx, float dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 700
{ 
#line 706
} 
#endif
#line 709 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 710
tex2DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 711
{ 
#line 715
} 
#endif
#line 717 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 718
tex2DLayeredGrad(::cudaTextureObject_t texObject, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 719
{ 
#line 725
} 
#endif
#line 728 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 729
tex2DLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy, bool *isResident) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 730
{ 
#line 736
} 
#endif
#line 738 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 739
tex2DLayeredGrad(::cudaTextureObject_t texObject, float x, float y, int layer, ::float2 dPdx, ::float2 dPdy, bool *isResident) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)layer;(void)dPdx;(void)dPdy;(void)isResident;::exit(___);}
#if 0
#line 740
{ 
#line 746
} 
#endif
#line 750 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static typename __nv_itex_trait< T> ::type 
#line 751
texCubemapLayeredGrad(T *ptr, ::cudaTextureObject_t obj, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 752
{ 
#line 756
} 
#endif
#line 758 "e:\\cuda\\include\\texture_indirect_functions.h"
template< class T> static T 
#line 759
texCubemapLayeredGrad(::cudaTextureObject_t texObject, float x, float y, float z, int layer, ::float4 dPdx, ::float4 dPdy) {int volatile ___ = 1;(void)texObject;(void)x;(void)y;(void)z;(void)layer;(void)dPdx;(void)dPdy;::exit(___);}
#if 0
#line 760
{ 
#line 766
} 
#endif
#line 59 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> struct __nv_isurf_trait { }; 
#line 60
template<> struct __nv_isurf_trait< char>  { typedef void type; }; 
#line 61
template<> struct __nv_isurf_trait< signed char>  { typedef void type; }; 
#line 62
template<> struct __nv_isurf_trait< char1>  { typedef void type; }; 
#line 63
template<> struct __nv_isurf_trait< unsigned char>  { typedef void type; }; 
#line 64
template<> struct __nv_isurf_trait< uchar1>  { typedef void type; }; 
#line 65
template<> struct __nv_isurf_trait< short>  { typedef void type; }; 
#line 66
template<> struct __nv_isurf_trait< short1>  { typedef void type; }; 
#line 67
template<> struct __nv_isurf_trait< unsigned short>  { typedef void type; }; 
#line 68
template<> struct __nv_isurf_trait< ushort1>  { typedef void type; }; 
#line 69
template<> struct __nv_isurf_trait< int>  { typedef void type; }; 
#line 70
template<> struct __nv_isurf_trait< int1>  { typedef void type; }; 
#line 71
template<> struct __nv_isurf_trait< unsigned>  { typedef void type; }; 
#line 72
template<> struct __nv_isurf_trait< uint1>  { typedef void type; }; 
#line 73
template<> struct __nv_isurf_trait< __int64>  { typedef void type; }; 
#line 74
template<> struct __nv_isurf_trait< longlong1>  { typedef void type; }; 
#line 75
template<> struct __nv_isurf_trait< unsigned __int64>  { typedef void type; }; 
#line 76
template<> struct __nv_isurf_trait< ulonglong1>  { typedef void type; }; 
#line 77
template<> struct __nv_isurf_trait< float>  { typedef void type; }; 
#line 78
template<> struct __nv_isurf_trait< float1>  { typedef void type; }; 
#line 80
template<> struct __nv_isurf_trait< char2>  { typedef void type; }; 
#line 81
template<> struct __nv_isurf_trait< uchar2>  { typedef void type; }; 
#line 82
template<> struct __nv_isurf_trait< short2>  { typedef void type; }; 
#line 83
template<> struct __nv_isurf_trait< ushort2>  { typedef void type; }; 
#line 84
template<> struct __nv_isurf_trait< int2>  { typedef void type; }; 
#line 85
template<> struct __nv_isurf_trait< uint2>  { typedef void type; }; 
#line 86
template<> struct __nv_isurf_trait< longlong2>  { typedef void type; }; 
#line 87
template<> struct __nv_isurf_trait< ulonglong2>  { typedef void type; }; 
#line 88
template<> struct __nv_isurf_trait< float2>  { typedef void type; }; 
#line 90
template<> struct __nv_isurf_trait< char4>  { typedef void type; }; 
#line 91
template<> struct __nv_isurf_trait< uchar4>  { typedef void type; }; 
#line 92
template<> struct __nv_isurf_trait< short4>  { typedef void type; }; 
#line 93
template<> struct __nv_isurf_trait< ushort4>  { typedef void type; }; 
#line 94
template<> struct __nv_isurf_trait< int4>  { typedef void type; }; 
#line 95
template<> struct __nv_isurf_trait< uint4>  { typedef void type; }; 
#line 96
template<> struct __nv_isurf_trait< float4>  { typedef void type; }; 
#line 99
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 100
surf1Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)mode;::exit(___);}
#if 0
#line 101
{ 
#line 105
} 
#endif
#line 107 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 108
surf1Dread(::cudaSurfaceObject_t surfObject, int x, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)boundaryMode;::exit(___);}
#if 0
#line 109
{ 
#line 115
} 
#endif
#line 117 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 118
surf2Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 119
{ 
#line 123
} 
#endif
#line 125 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 126
surf2Dread(::cudaSurfaceObject_t surfObject, int x, int y, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)boundaryMode;::exit(___);}
#if 0
#line 127
{ 
#line 133
} 
#endif
#line 136 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 137
surf3Dread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 138
{ 
#line 142
} 
#endif
#line 144 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 145
surf3Dread(::cudaSurfaceObject_t surfObject, int x, int y, int z, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)z;(void)boundaryMode;::exit(___);}
#if 0
#line 146
{ 
#line 152
} 
#endif
#line 154 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 155
surf1DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 156
{ 
#line 160
} 
#endif
#line 162 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 163
surf1DLayeredread(::cudaSurfaceObject_t surfObject, int x, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)layer;(void)boundaryMode;::exit(___);}
#if 0
#line 164
{ 
#line 170
} 
#endif
#line 172 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 173
surf2DLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 174
{ 
#line 178
} 
#endif
#line 180 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 181
surf2DLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layer, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layer;(void)boundaryMode;::exit(___);}
#if 0
#line 182
{ 
#line 188
} 
#endif
#line 190 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 191
surfCubemapread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 192
{ 
#line 196
} 
#endif
#line 198 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 199
surfCubemapread(::cudaSurfaceObject_t surfObject, int x, int y, int face, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)face;(void)boundaryMode;::exit(___);}
#if 0
#line 200
{ 
#line 206
} 
#endif
#line 208 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 209
surfCubemapLayeredread(T *ptr, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)ptr;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;::exit(___);}
#if 0
#line 210
{ 
#line 214
} 
#endif
#line 216 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static T 
#line 217
surfCubemapLayeredread(::cudaSurfaceObject_t surfObject, int x, int y, int layerface, ::cudaSurfaceBoundaryMode boundaryMode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)surfObject;(void)x;(void)y;(void)layerface;(void)boundaryMode;::exit(___);}
#if 0
#line 218
{ 
#line 224
} 
#endif
#line 226 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 227
surf1Dwrite(T val, ::cudaSurfaceObject_t obj, int x, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)mode;::exit(___);}
#if 0
#line 228
{ 
#line 232
} 
#endif
#line 234 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 235
surf2Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)mode;::exit(___);}
#if 0
#line 236
{ 
#line 240
} 
#endif
#line 242 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 243
surf3Dwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int z, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)z;(void)mode;::exit(___);}
#if 0
#line 244
{ 
#line 248
} 
#endif
#line 250 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 251
surf1DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)layer;(void)mode;::exit(___);}
#if 0
#line 252
{ 
#line 256
} 
#endif
#line 258 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 259
surf2DLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layer, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layer;(void)mode;::exit(___);}
#if 0
#line 260
{ 
#line 264
} 
#endif
#line 266 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 267
surfCubemapwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int face, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)face;(void)mode;::exit(___);}
#if 0
#line 268
{ 
#line 272
} 
#endif
#line 274 "e:\\cuda\\include\\surface_indirect_functions.h"
template< class T> static typename __nv_isurf_trait< T> ::type 
#line 275
surfCubemapLayeredwrite(T val, ::cudaSurfaceObject_t obj, int x, int y, int layerface, ::cudaSurfaceBoundaryMode mode = cudaBoundaryModeTrap) {int volatile ___ = 1;(void)val;(void)obj;(void)x;(void)y;(void)layerface;(void)mode;::exit(___);}
#if 0
#line 276
{ 
#line 280
} 
#endif
#line 3295 "e:\\cuda\\include\\crt/device_functions.h"
extern "C" unsigned __stdcall __cudaPushCallConfiguration(dim3 gridDim, dim3 blockDim, size_t sharedMem = 0, CUstream_st * stream = 0); 
#line 68 "e:\\cuda\\include\\device_launch_parameters.h"
extern "C" {
#line 71 "e:\\cuda\\include\\device_launch_parameters.h"
extern const uint3 __device_builtin_variable_threadIdx; 
#line 72
extern const uint3 __device_builtin_variable_blockIdx; 
#line 73
extern const dim3 __device_builtin_variable_blockDim; 
#line 74
extern const dim3 __device_builtin_variable_gridDim; 
#line 75
extern const int __device_builtin_variable_warpSize; 
#line 80
}
#line 201 "E:\\cuda\\bin/../include\\cuda_runtime.h"
template< class T> static __inline ::cudaError_t 
#line 202
cudaLaunchKernel(const T *
#line 203
func, ::dim3 
#line 204
gridDim, ::dim3 
#line 205
blockDim, void **
#line 206
args, ::size_t 
#line 207
sharedMem = 0, ::cudaStream_t 
#line 208
stream = 0) 
#line 210
{ 
#line 211
return ::cudaLaunchKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 212
} 
#line 263
template< class T> static __inline ::cudaError_t 
#line 264
cudaLaunchCooperativeKernel(const T *
#line 265
func, ::dim3 
#line 266
gridDim, ::dim3 
#line 267
blockDim, void **
#line 268
args, ::size_t 
#line 269
sharedMem = 0, ::cudaStream_t 
#line 270
stream = 0) 
#line 272
{ 
#line 273
return ::cudaLaunchCooperativeKernel((const void *)func, gridDim, blockDim, args, sharedMem, stream); 
#line 274
} 
#line 307
static __inline cudaError_t cudaEventCreate(cudaEvent_t *
#line 308
event, unsigned 
#line 309
flags) 
#line 311
{ 
#line 312
return ::cudaEventCreateWithFlags(event, flags); 
#line 313
} 
#line 372
static __inline cudaError_t cudaMallocHost(void **
#line 373
ptr, size_t 
#line 374
size, unsigned 
#line 375
flags) 
#line 377
{ 
#line 378
return ::cudaHostAlloc(ptr, size, flags); 
#line 379
} 
#line 381
template< class T> static __inline ::cudaError_t 
#line 382
cudaHostAlloc(T **
#line 383
ptr, ::size_t 
#line 384
size, unsigned 
#line 385
flags) 
#line 387
{ 
#line 388
return ::cudaHostAlloc((void **)((void *)ptr), size, flags); 
#line 389
} 
#line 391
template< class T> static __inline ::cudaError_t 
#line 392
cudaHostGetDevicePointer(T **
#line 393
pDevice, void *
#line 394
pHost, unsigned 
#line 395
flags) 
#line 397
{ 
#line 398
return ::cudaHostGetDevicePointer((void **)((void *)pDevice), pHost, flags); 
#line 399
} 
#line 501
template< class T> static __inline ::cudaError_t 
#line 502
cudaMallocManaged(T **
#line 503
devPtr, ::size_t 
#line 504
size, unsigned 
#line 505
flags = 1) 
#line 507
{ 
#line 508
return ::cudaMallocManaged((void **)((void *)devPtr), size, flags); 
#line 509
} 
#line 591
template< class T> static __inline ::cudaError_t 
#line 592
cudaStreamAttachMemAsync(::cudaStream_t 
#line 593
stream, T *
#line 594
devPtr, ::size_t 
#line 595
length = 0, unsigned 
#line 596
flags = 4) 
#line 598
{ 
#line 599
return ::cudaStreamAttachMemAsync(stream, (void *)devPtr, length, flags); 
#line 600
} 
#line 602
template< class T> __inline ::cudaError_t 
#line 603
cudaMalloc(T **
#line 604
devPtr, ::size_t 
#line 605
size) 
#line 607
{ 
#line 608
return ::cudaMalloc((void **)((void *)devPtr), size); 
#line 609
} 
#line 611
template< class T> static __inline ::cudaError_t 
#line 612
cudaMallocHost(T **
#line 613
ptr, ::size_t 
#line 614
size, unsigned 
#line 615
flags = 0) 
#line 617
{ 
#line 618
return cudaMallocHost((void **)((void *)ptr), size, flags); 
#line 619
} 
#line 621
template< class T> static __inline ::cudaError_t 
#line 622
cudaMallocPitch(T **
#line 623
devPtr, ::size_t *
#line 624
pitch, ::size_t 
#line 625
width, ::size_t 
#line 626
height) 
#line 628
{ 
#line 629
return ::cudaMallocPitch((void **)((void *)devPtr), pitch, width, height); 
#line 630
} 
#line 641
static __inline cudaError_t cudaMallocAsync(void **
#line 642
ptr, size_t 
#line 643
size, cudaMemPool_t 
#line 644
memPool, cudaStream_t 
#line 645
stream) 
#line 647
{ 
#line 648
return ::cudaMallocFromPoolAsync(ptr, size, memPool, stream); 
#line 649
} 
#line 651
template< class T> static __inline ::cudaError_t 
#line 652
cudaMallocAsync(T **
#line 653
ptr, ::size_t 
#line 654
size, ::cudaMemPool_t 
#line 655
memPool, ::cudaStream_t 
#line 656
stream) 
#line 658
{ 
#line 659
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
#line 660
} 
#line 662
template< class T> static __inline ::cudaError_t 
#line 663
cudaMallocAsync(T **
#line 664
ptr, ::size_t 
#line 665
size, ::cudaStream_t 
#line 666
stream) 
#line 668
{ 
#line 669
return ::cudaMallocAsync((void **)((void *)ptr), size, stream); 
#line 670
} 
#line 672
template< class T> static __inline ::cudaError_t 
#line 673
cudaMallocFromPoolAsync(T **
#line 674
ptr, ::size_t 
#line 675
size, ::cudaMemPool_t 
#line 676
memPool, ::cudaStream_t 
#line 677
stream) 
#line 679
{ 
#line 680
return ::cudaMallocFromPoolAsync((void **)((void *)ptr), size, memPool, stream); 
#line 681
} 
#line 720
template< class T> static __inline ::cudaError_t 
#line 721
cudaMemcpyToSymbol(const T &
#line 722
symbol, const void *
#line 723
src, ::size_t 
#line 724
count, ::size_t 
#line 725
offset = 0, ::cudaMemcpyKind 
#line 726
kind = cudaMemcpyHostToDevice) 
#line 728
{ 
#line 729
return ::cudaMemcpyToSymbol((const void *)(&symbol), src, count, offset, kind); 
#line 730
} 
#line 774
template< class T> static __inline ::cudaError_t 
#line 775
cudaMemcpyToSymbolAsync(const T &
#line 776
symbol, const void *
#line 777
src, ::size_t 
#line 778
count, ::size_t 
#line 779
offset = 0, ::cudaMemcpyKind 
#line 780
kind = cudaMemcpyHostToDevice, ::cudaStream_t 
#line 781
stream = 0) 
#line 783
{ 
#line 784
return ::cudaMemcpyToSymbolAsync((const void *)(&symbol), src, count, offset, kind, stream); 
#line 785
} 
#line 822
template< class T> static __inline ::cudaError_t 
#line 823
cudaMemcpyFromSymbol(void *
#line 824
dst, const T &
#line 825
symbol, ::size_t 
#line 826
count, ::size_t 
#line 827
offset = 0, ::cudaMemcpyKind 
#line 828
kind = cudaMemcpyDeviceToHost) 
#line 830
{ 
#line 831
return ::cudaMemcpyFromSymbol(dst, (const void *)(&symbol), count, offset, kind); 
#line 832
} 
#line 876
template< class T> static __inline ::cudaError_t 
#line 877
cudaMemcpyFromSymbolAsync(void *
#line 878
dst, const T &
#line 879
symbol, ::size_t 
#line 880
count, ::size_t 
#line 881
offset = 0, ::cudaMemcpyKind 
#line 882
kind = cudaMemcpyDeviceToHost, ::cudaStream_t 
#line 883
stream = 0) 
#line 885
{ 
#line 886
return ::cudaMemcpyFromSymbolAsync(dst, (const void *)(&symbol), count, offset, kind, stream); 
#line 887
} 
#line 945
template< class T> static __inline ::cudaError_t 
#line 946
cudaGraphAddMemcpyNodeToSymbol(::cudaGraphNode_t *
#line 947
pGraphNode, ::cudaGraph_t 
#line 948
graph, const ::cudaGraphNode_t *
#line 949
pDependencies, ::size_t 
#line 950
numDependencies, const T &
#line 951
symbol, const void *
#line 952
src, ::size_t 
#line 953
count, ::size_t 
#line 954
offset, ::cudaMemcpyKind 
#line 955
kind) 
#line 956
{ 
#line 957
return ::cudaGraphAddMemcpyNodeToSymbol(pGraphNode, graph, pDependencies, numDependencies, (const void *)(&symbol), src, count, offset, kind); 
#line 958
} 
#line 1016
template< class T> static __inline ::cudaError_t 
#line 1017
cudaGraphAddMemcpyNodeFromSymbol(::cudaGraphNode_t *
#line 1018
pGraphNode, ::cudaGraph_t 
#line 1019
graph, const ::cudaGraphNode_t *
#line 1020
pDependencies, ::size_t 
#line 1021
numDependencies, void *
#line 1022
dst, const T &
#line 1023
symbol, ::size_t 
#line 1024
count, ::size_t 
#line 1025
offset, ::cudaMemcpyKind 
#line 1026
kind) 
#line 1027
{ 
#line 1028
return ::cudaGraphAddMemcpyNodeFromSymbol(pGraphNode, graph, pDependencies, numDependencies, dst, (const void *)(&symbol), count, offset, kind); 
#line 1029
} 
#line 1067
template< class T> static __inline ::cudaError_t 
#line 1068
cudaGraphMemcpyNodeSetParamsToSymbol(::cudaGraphNode_t 
#line 1069
node, const T &
#line 1070
symbol, const void *
#line 1071
src, ::size_t 
#line 1072
count, ::size_t 
#line 1073
offset, ::cudaMemcpyKind 
#line 1074
kind) 
#line 1075
{ 
#line 1076
return ::cudaGraphMemcpyNodeSetParamsToSymbol(node, (const void *)(&symbol), src, count, offset, kind); 
#line 1077
} 
#line 1115
template< class T> static __inline ::cudaError_t 
#line 1116
cudaGraphMemcpyNodeSetParamsFromSymbol(::cudaGraphNode_t 
#line 1117
node, void *
#line 1118
dst, const T &
#line 1119
symbol, ::size_t 
#line 1120
count, ::size_t 
#line 1121
offset, ::cudaMemcpyKind 
#line 1122
kind) 
#line 1123
{ 
#line 1124
return ::cudaGraphMemcpyNodeSetParamsFromSymbol(node, dst, (const void *)(&symbol), count, offset, kind); 
#line 1125
} 
#line 1173
template< class T> static __inline ::cudaError_t 
#line 1174
cudaGraphExecMemcpyNodeSetParamsToSymbol(::cudaGraphExec_t 
#line 1175
hGraphExec, ::cudaGraphNode_t 
#line 1176
node, const T &
#line 1177
symbol, const void *
#line 1178
src, ::size_t 
#line 1179
count, ::size_t 
#line 1180
offset, ::cudaMemcpyKind 
#line 1181
kind) 
#line 1182
{ 
#line 1183
return ::cudaGraphExecMemcpyNodeSetParamsToSymbol(hGraphExec, node, (const void *)(&symbol), src, count, offset, kind); 
#line 1184
} 
#line 1232
template< class T> static __inline ::cudaError_t 
#line 1233
cudaGraphExecMemcpyNodeSetParamsFromSymbol(::cudaGraphExec_t 
#line 1234
hGraphExec, ::cudaGraphNode_t 
#line 1235
node, void *
#line 1236
dst, const T &
#line 1237
symbol, ::size_t 
#line 1238
count, ::size_t 
#line 1239
offset, ::cudaMemcpyKind 
#line 1240
kind) 
#line 1241
{ 
#line 1242
return ::cudaGraphExecMemcpyNodeSetParamsFromSymbol(hGraphExec, node, dst, (const void *)(&symbol), count, offset, kind); 
#line 1243
} 
#line 1321 "E:\\cuda\\bin/../include\\cuda_runtime.h"
template< class T> static __inline ::cudaError_t 
#line 1322
cudaGetSymbolAddress(void **
#line 1323
devPtr, const T &
#line 1324
symbol) 
#line 1326
{ 
#line 1327
return ::cudaGetSymbolAddress(devPtr, (const void *)(&symbol)); 
#line 1328
} 
#line 1353
template< class T> static __inline ::cudaError_t 
#line 1354
cudaGetSymbolSize(::size_t *
#line 1355
size, const T &
#line 1356
symbol) 
#line 1358
{ 
#line 1359
return ::cudaGetSymbolSize(size, (const void *)(&symbol)); 
#line 1360
} 
#line 1397
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1398
__declspec(deprecated) static __inline ::cudaError_t cudaBindTexture(::size_t *
#line 1399
offset, const texture< T, dim, readMode>  &
#line 1400
tex, const void *
#line 1401
devPtr, const ::cudaChannelFormatDesc &
#line 1402
desc, ::size_t 
#line 1403
size = 4294967295U) 
#line 1405
{ 
#line 1406
return ::cudaBindTexture(offset, &tex, devPtr, &desc, size); 
#line 1407
} 
#line 1443
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1444
__declspec(deprecated) static __inline ::cudaError_t cudaBindTexture(::size_t *
#line 1445
offset, const texture< T, dim, readMode>  &
#line 1446
tex, const void *
#line 1447
devPtr, ::size_t 
#line 1448
size = 4294967295U) 
#line 1450
{ 
#line 1451
return cudaBindTexture(offset, tex, devPtr, (tex.channelDesc), size); 
#line 1452
} 
#line 1500
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1501
__declspec(deprecated) static __inline ::cudaError_t cudaBindTexture2D(::size_t *
#line 1502
offset, const texture< T, dim, readMode>  &
#line 1503
tex, const void *
#line 1504
devPtr, const ::cudaChannelFormatDesc &
#line 1505
desc, ::size_t 
#line 1506
width, ::size_t 
#line 1507
height, ::size_t 
#line 1508
pitch) 
#line 1510
{ 
#line 1511
return ::cudaBindTexture2D(offset, &tex, devPtr, &desc, width, height, pitch); 
#line 1512
} 
#line 1559
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1560
__declspec(deprecated) static __inline ::cudaError_t cudaBindTexture2D(::size_t *
#line 1561
offset, const texture< T, dim, readMode>  &
#line 1562
tex, const void *
#line 1563
devPtr, ::size_t 
#line 1564
width, ::size_t 
#line 1565
height, ::size_t 
#line 1566
pitch) 
#line 1568
{ 
#line 1569
return ::cudaBindTexture2D(offset, &tex, devPtr, &(tex.channelDesc), width, height, pitch); 
#line 1570
} 
#line 1602
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1603
__declspec(deprecated) static __inline ::cudaError_t cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 1604
tex, ::cudaArray_const_t 
#line 1605
array, const ::cudaChannelFormatDesc &
#line 1606
desc) 
#line 1608
{ 
#line 1609
return ::cudaBindTextureToArray(&tex, array, &desc); 
#line 1610
} 
#line 1641
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1642
__declspec(deprecated) static __inline ::cudaError_t cudaBindTextureToArray(const texture< T, dim, readMode>  &
#line 1643
tex, ::cudaArray_const_t 
#line 1644
array) 
#line 1646
{ 
#line 1647
::cudaChannelFormatDesc desc; 
#line 1648
::cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
#line 1650
return (err == (cudaSuccess)) ? cudaBindTextureToArray(tex, array, desc) : err; 
#line 1651
} 
#line 1683
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1684
__declspec(deprecated) static __inline ::cudaError_t cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
#line 1685
tex, ::cudaMipmappedArray_const_t 
#line 1686
mipmappedArray, const ::cudaChannelFormatDesc &
#line 1687
desc) 
#line 1689
{ 
#line 1690
return ::cudaBindTextureToMipmappedArray(&tex, mipmappedArray, &desc); 
#line 1691
} 
#line 1722
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1723
__declspec(deprecated) static __inline ::cudaError_t cudaBindTextureToMipmappedArray(const texture< T, dim, readMode>  &
#line 1724
tex, ::cudaMipmappedArray_const_t 
#line 1725
mipmappedArray) 
#line 1727
{ 
#line 1728
::cudaChannelFormatDesc desc; 
#line 1729
::cudaArray_t levelArray; 
#line 1730
::cudaError_t err = ::cudaGetMipmappedArrayLevel(&levelArray, mipmappedArray, 0); 
#line 1732
if (err != (cudaSuccess)) { 
#line 1733
return err; 
#line 1734
}  
#line 1735
err = ::cudaGetChannelDesc(&desc, levelArray); 
#line 1737
return (err == (cudaSuccess)) ? cudaBindTextureToMipmappedArray(tex, mipmappedArray, desc) : err; 
#line 1738
} 
#line 1765
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1766
__declspec(deprecated) static __inline ::cudaError_t cudaUnbindTexture(const texture< T, dim, readMode>  &
#line 1767
tex) 
#line 1769
{ 
#line 1770
return ::cudaUnbindTexture(&tex); 
#line 1771
} 
#line 1801
template< class T, int dim, cudaTextureReadMode readMode> 
#line 1802
__declspec(deprecated) static __inline ::cudaError_t cudaGetTextureAlignmentOffset(::size_t *
#line 1803
offset, const texture< T, dim, readMode>  &
#line 1804
tex) 
#line 1806
{ 
#line 1807
return ::cudaGetTextureAlignmentOffset(offset, &tex); 
#line 1808
} 
#line 1853
template< class T> static __inline ::cudaError_t 
#line 1854
cudaFuncSetCacheConfig(T *
#line 1855
func, ::cudaFuncCache 
#line 1856
cacheConfig) 
#line 1858
{ 
#line 1859
return ::cudaFuncSetCacheConfig((const void *)func, cacheConfig); 
#line 1860
} 
#line 1862
template< class T> static __inline ::cudaError_t 
#line 1863
cudaFuncSetSharedMemConfig(T *
#line 1864
func, ::cudaSharedMemConfig 
#line 1865
config) 
#line 1867
{ 
#line 1868
return ::cudaFuncSetSharedMemConfig((const void *)func, config); 
#line 1869
} 
#line 1901 "E:\\cuda\\bin/../include\\cuda_runtime.h"
template< class T> __inline ::cudaError_t 
#line 1902
cudaOccupancyMaxActiveBlocksPerMultiprocessor(int *
#line 1903
numBlocks, T 
#line 1904
func, int 
#line 1905
blockSize, ::size_t 
#line 1906
dynamicSMemSize) 
#line 1907
{ 
#line 1908
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, 0); 
#line 1909
} 
#line 1953
template< class T> __inline ::cudaError_t 
#line 1954
cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(int *
#line 1955
numBlocks, T 
#line 1956
func, int 
#line 1957
blockSize, ::size_t 
#line 1958
dynamicSMemSize, unsigned 
#line 1959
flags) 
#line 1960
{ 
#line 1961
return ::cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(numBlocks, (const void *)func, blockSize, dynamicSMemSize, flags); 
#line 1962
} 
#line 1967
class __cudaOccupancyB2DHelper { 
#line 1968
size_t n; 
#line 1970
public: __cudaOccupancyB2DHelper(size_t n_) : n(n_) { } 
#line 1971
size_t operator()(int) 
#line 1972
{ 
#line 1973
return n; 
#line 1974
} 
#line 1975
}; 
#line 2023
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 2024
cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(int *
#line 2025
minGridSize, int *
#line 2026
blockSize, T 
#line 2027
func, UnaryFunction 
#line 2028
blockSizeToDynamicSMemSize, int 
#line 2029
blockSizeLimit = 0, unsigned 
#line 2030
flags = 0) 
#line 2031
{ 
#line 2032
::cudaError_t status; 
#line 2035
int device; 
#line 2036
::cudaFuncAttributes attr; 
#line 2039
int maxThreadsPerMultiProcessor; 
#line 2040
int warpSize; 
#line 2041
int devMaxThreadsPerBlock; 
#line 2042
int multiProcessorCount; 
#line 2043
int funcMaxThreadsPerBlock; 
#line 2044
int occupancyLimit; 
#line 2045
int granularity; 
#line 2048
int maxBlockSize = 0; 
#line 2049
int numBlocks = 0; 
#line 2050
int maxOccupancy = 0; 
#line 2053
int blockSizeToTryAligned; 
#line 2054
int blockSizeToTry; 
#line 2055
int blockSizeLimitAligned; 
#line 2056
int occupancyInBlocks; 
#line 2057
int occupancyInThreads; 
#line 2058
::size_t dynamicSMemSize; 
#line 2064
if (((!minGridSize) || (!blockSize)) || (!func)) { 
#line 2065
return cudaErrorInvalidValue; 
#line 2066
}  
#line 2072
status = ::cudaGetDevice(&device); 
#line 2073
if (status != (cudaSuccess)) { 
#line 2074
return status; 
#line 2075
}  
#line 2077
status = cudaDeviceGetAttribute(&maxThreadsPerMultiProcessor, cudaDevAttrMaxThreadsPerMultiProcessor, device); 
#line 2081
if (status != (cudaSuccess)) { 
#line 2082
return status; 
#line 2083
}  
#line 2085
status = cudaDeviceGetAttribute(&warpSize, cudaDevAttrWarpSize, device); 
#line 2089
if (status != (cudaSuccess)) { 
#line 2090
return status; 
#line 2091
}  
#line 2093
status = cudaDeviceGetAttribute(&devMaxThreadsPerBlock, cudaDevAttrMaxThreadsPerBlock, device); 
#line 2097
if (status != (cudaSuccess)) { 
#line 2098
return status; 
#line 2099
}  
#line 2101
status = cudaDeviceGetAttribute(&multiProcessorCount, cudaDevAttrMultiProcessorCount, device); 
#line 2105
if (status != (cudaSuccess)) { 
#line 2106
return status; 
#line 2107
}  
#line 2109
status = cudaFuncGetAttributes(&attr, func); 
#line 2110
if (status != (cudaSuccess)) { 
#line 2111
return status; 
#line 2112
}  
#line 2114
funcMaxThreadsPerBlock = (attr.maxThreadsPerBlock); 
#line 2120
occupancyLimit = maxThreadsPerMultiProcessor; 
#line 2121
granularity = warpSize; 
#line 2123
if (blockSizeLimit == 0) { 
#line 2124
blockSizeLimit = devMaxThreadsPerBlock; 
#line 2125
}  
#line 2127
if (devMaxThreadsPerBlock < blockSizeLimit) { 
#line 2128
blockSizeLimit = devMaxThreadsPerBlock; 
#line 2129
}  
#line 2131
if (funcMaxThreadsPerBlock < blockSizeLimit) { 
#line 2132
blockSizeLimit = funcMaxThreadsPerBlock; 
#line 2133
}  
#line 2135
blockSizeLimitAligned = (((blockSizeLimit + (granularity - 1)) / granularity) * granularity); 
#line 2137
for (blockSizeToTryAligned = blockSizeLimitAligned; blockSizeToTryAligned > 0; blockSizeToTryAligned -= granularity) { 
#line 2141
if (blockSizeLimit < blockSizeToTryAligned) { 
#line 2142
blockSizeToTry = blockSizeLimit; 
#line 2143
} else { 
#line 2144
blockSizeToTry = blockSizeToTryAligned; 
#line 2145
}  
#line 2147
dynamicSMemSize = blockSizeToDynamicSMemSize(blockSizeToTry); 
#line 2149
status = cudaOccupancyMaxActiveBlocksPerMultiprocessorWithFlags(&occupancyInBlocks, func, blockSizeToTry, dynamicSMemSize, flags); 
#line 2156
if (status != (cudaSuccess)) { 
#line 2157
return status; 
#line 2158
}  
#line 2160
occupancyInThreads = (blockSizeToTry * occupancyInBlocks); 
#line 2162
if (occupancyInThreads > maxOccupancy) { 
#line 2163
maxBlockSize = blockSizeToTry; 
#line 2164
numBlocks = occupancyInBlocks; 
#line 2165
maxOccupancy = occupancyInThreads; 
#line 2166
}  
#line 2170
if (occupancyLimit == maxOccupancy) { 
#line 2171
break; 
#line 2172
}  
#line 2173
}  
#line 2181
(*minGridSize) = (numBlocks * multiProcessorCount); 
#line 2182
(*blockSize) = maxBlockSize; 
#line 2184
return status; 
#line 2185
} 
#line 2219
template< class UnaryFunction, class T> static __inline ::cudaError_t 
#line 2220
cudaOccupancyMaxPotentialBlockSizeVariableSMem(int *
#line 2221
minGridSize, int *
#line 2222
blockSize, T 
#line 2223
func, UnaryFunction 
#line 2224
blockSizeToDynamicSMemSize, int 
#line 2225
blockSizeLimit = 0) 
#line 2226
{ 
#line 2227
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, blockSizeToDynamicSMemSize, blockSizeLimit, 0); 
#line 2228
} 
#line 2265
template< class T> static __inline ::cudaError_t 
#line 2266
cudaOccupancyMaxPotentialBlockSize(int *
#line 2267
minGridSize, int *
#line 2268
blockSize, T 
#line 2269
func, ::size_t 
#line 2270
dynamicSMemSize = 0, int 
#line 2271
blockSizeLimit = 0) 
#line 2272
{ 
#line 2273
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, 0); 
#line 2274
} 
#line 2303
template< class T> static __inline ::cudaError_t 
#line 2304
cudaOccupancyAvailableDynamicSMemPerBlock(::size_t *
#line 2305
dynamicSmemSize, T 
#line 2306
func, int 
#line 2307
numBlocks, int 
#line 2308
blockSize) 
#line 2309
{ 
#line 2310
return ::cudaOccupancyAvailableDynamicSMemPerBlock(dynamicSmemSize, (const void *)func, numBlocks, blockSize); 
#line 2311
} 
#line 2362
template< class T> static __inline ::cudaError_t 
#line 2363
cudaOccupancyMaxPotentialBlockSizeWithFlags(int *
#line 2364
minGridSize, int *
#line 2365
blockSize, T 
#line 2366
func, ::size_t 
#line 2367
dynamicSMemSize = 0, int 
#line 2368
blockSizeLimit = 0, unsigned 
#line 2369
flags = 0) 
#line 2370
{ 
#line 2371
return cudaOccupancyMaxPotentialBlockSizeVariableSMemWithFlags(minGridSize, blockSize, func, ((::__cudaOccupancyB2DHelper)(dynamicSMemSize)), blockSizeLimit, flags); 
#line 2372
} 
#line 2405
template< class T> __inline ::cudaError_t 
#line 2406
cudaFuncGetAttributes(::cudaFuncAttributes *
#line 2407
attr, T *
#line 2408
entry) 
#line 2410
{ 
#line 2411
return ::cudaFuncGetAttributes(attr, (const void *)entry); 
#line 2412
} 
#line 2450
template< class T> static __inline ::cudaError_t 
#line 2451
cudaFuncSetAttribute(T *
#line 2452
entry, ::cudaFuncAttribute 
#line 2453
attr, int 
#line 2454
value) 
#line 2456
{ 
#line 2457
return ::cudaFuncSetAttribute((const void *)entry, attr, value); 
#line 2458
} 
#line 2482
template< class T, int dim> 
#line 2483
__declspec(deprecated) static __inline ::cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
#line 2484
surf, ::cudaArray_const_t 
#line 2485
array, const ::cudaChannelFormatDesc &
#line 2486
desc) 
#line 2488
{ 
#line 2489
return ::cudaBindSurfaceToArray(&surf, array, &desc); 
#line 2490
} 
#line 2513
template< class T, int dim> 
#line 2514
__declspec(deprecated) static __inline ::cudaError_t cudaBindSurfaceToArray(const surface< T, dim>  &
#line 2515
surf, ::cudaArray_const_t 
#line 2516
array) 
#line 2518
{ 
#line 2519
::cudaChannelFormatDesc desc; 
#line 2520
::cudaError_t err = ::cudaGetChannelDesc(&desc, array); 
#line 2522
return (err == (cudaSuccess)) ? cudaBindSurfaceToArray(surf, array, desc) : err; 
#line 2523
} 
#line 2537 "E:\\cuda\\bin/../include\\cuda_runtime.h"
#pragma warning(pop)
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_stdio_config.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 68 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_stdio_config.h"
#pragma detect_mismatch("_CRT_STDIO_ISO_WIDE_SPECIFIERS", "0")
#line 85 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_stdio_config.h"
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_printf_options() 
#line 86
{ 
#line 87
static unsigned __int64 _OptionsStorage; 
#line 88
return &_OptionsStorage; 
#line 89
} 
#line 95
__declspec(noinline) __inline unsigned __int64 *__cdecl __local_stdio_scanf_options() 
#line 96
{ 
#line 97
static unsigned __int64 _OptionsStorage; 
#line 98
return &_OptionsStorage; 
#line 99
} 
#line 124 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_stdio_config.h"
}__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 28
typedef 
#line 25
struct _iobuf { 
#line 27
void *_Placeholder; 
#line 28
} FILE; 
#line 31 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
FILE *__cdecl __acrt_iob_func(unsigned _Ix); 
#line 48
wint_t __cdecl fgetwc(FILE * _Stream); 
#line 53
wint_t __cdecl _fgetwchar(); 
#line 56
wint_t __cdecl fputwc(__wchar_t _Character, FILE * _Stream); 
#line 61
wint_t __cdecl _fputwchar(__wchar_t _Character); 
#line 66
wint_t __cdecl getwc(FILE * _Stream); 
#line 71
wint_t __cdecl getwchar(); 
#line 76
__wchar_t *__cdecl fgetws(__wchar_t * _Buffer, int _BufferCount, FILE * _Stream); 
#line 83
int __cdecl fputws(const __wchar_t * _Buffer, FILE * _Stream); 
#line 90
__wchar_t *__cdecl _getws_s(__wchar_t * _Buffer, size_t _BufferCount); 
#line 95
extern "C++" {template< size_t _Size> inline __wchar_t *__cdecl _getws_s(__wchar_t (&_Buffer)[_Size]) throw() { return _getws_s(_Buffer, _Size); } }
#line 102 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
wint_t __cdecl putwc(__wchar_t _Character, FILE * _Stream); 
#line 108
wint_t __cdecl putwchar(__wchar_t _Character); 
#line 113
int __cdecl _putws(const __wchar_t * _Buffer); 
#line 118
wint_t __cdecl ungetwc(wint_t _Character, FILE * _Stream); 
#line 124
FILE *__cdecl _wfdopen(int _FileHandle, const __wchar_t * _Mode); 
#line 130
FILE *__cdecl _wfopen(const __wchar_t * _FileName, const __wchar_t * _Mode); 
#line 136
errno_t __cdecl _wfopen_s(FILE ** _Stream, const __wchar_t * _FileName, const __wchar_t * _Mode); 
#line 144
FILE *__cdecl _wfreopen(const __wchar_t * _FileName, const __wchar_t * _Mode, FILE * _OldStream); 
#line 151
errno_t __cdecl _wfreopen_s(FILE ** _Stream, const __wchar_t * _FileName, const __wchar_t * _Mode, FILE * _OldStream); 
#line 159
FILE *__cdecl _wfsopen(const __wchar_t * _FileName, const __wchar_t * _Mode, int _ShFlag); 
#line 165
void __cdecl _wperror(const __wchar_t * _ErrorMessage); 
#line 172
FILE *__cdecl _wpopen(const __wchar_t * _Command, const __wchar_t * _Mode); 
#line 179 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
int __cdecl _wremove(const __wchar_t * _FileName); 
#line 187
__declspec(allocator) __wchar_t *__cdecl _wtempnam(const __wchar_t * _Directory, const __wchar_t * _FilePrefix); 
#line 196
errno_t __cdecl _wtmpnam_s(__wchar_t * _Buffer, size_t _BufferCount); 
#line 201
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl _wtmpnam_s(__wchar_t (&_Buffer)[_Size]) throw() { return _wtmpnam_s(_Buffer, _Size); } }
#line 207 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__wchar_t *__cdecl _wtmpnam(__wchar_t * _Buffer); 
#line 221 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
wint_t __cdecl _fgetwc_nolock(FILE * _Stream); 
#line 226
wint_t __cdecl _fputwc_nolock(__wchar_t _Character, FILE * _Stream); 
#line 232
wint_t __cdecl _getwc_nolock(FILE * _Stream); 
#line 237
wint_t __cdecl _putwc_nolock(__wchar_t _Character, FILE * _Stream); 
#line 243
wint_t __cdecl _ungetwc_nolock(wint_t _Character, FILE * _Stream); 
#line 269 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
int __cdecl __stdio_common_vfwprintf(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 278
int __cdecl __stdio_common_vfwprintf_s(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 287
int __cdecl __stdio_common_vfwprintf_p(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 296
__inline int __cdecl _vfwprintf_l(FILE *const 
#line 297
_Stream, const __wchar_t *const 
#line 298
_Format, const _locale_t 
#line 299
_Locale, va_list 
#line 300
_ArgList) 
#line 305 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 306
return __stdio_common_vfwprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 307
} 
#line 311 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwprintf(FILE *const 
#line 312
_Stream, const __wchar_t *const 
#line 313
_Format, va_list 
#line 314
_ArgList) 
#line 319 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 320
return _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
#line 321
} 
#line 325 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_s_l(FILE *const 
#line 326
_Stream, const __wchar_t *const 
#line 327
_Format, const _locale_t 
#line 328
_Locale, va_list 
#line 329
_ArgList) 
#line 334 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 335
return __stdio_common_vfwprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 336
} 
#line 342 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwprintf_s(FILE *const 
#line 343
_Stream, const __wchar_t *const 
#line 344
_Format, va_list 
#line 345
_ArgList) 
#line 350 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 351
return _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
#line 352
} 
#line 358 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_p_l(FILE *const 
#line 359
_Stream, const __wchar_t *const 
#line 360
_Format, const _locale_t 
#line 361
_Locale, va_list 
#line 362
_ArgList) 
#line 367 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 368
return __stdio_common_vfwprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 369
} 
#line 373 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwprintf_p(FILE *const 
#line 374
_Stream, const __wchar_t *const 
#line 375
_Format, va_list 
#line 376
_ArgList) 
#line 381 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 382
return _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
#line 383
} 
#line 387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_l(const __wchar_t *const 
#line 388
_Format, const _locale_t 
#line 389
_Locale, va_list 
#line 390
_ArgList) 
#line 395 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 396
return _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 397
} 
#line 401 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwprintf(const __wchar_t *const 
#line 402
_Format, va_list 
#line 403
_ArgList) 
#line 408 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 409
return _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 410
} 
#line 414 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_s_l(const __wchar_t *const 
#line 415
_Format, const _locale_t 
#line 416
_Locale, va_list 
#line 417
_ArgList) 
#line 422 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 423
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 424
} 
#line 430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwprintf_s(const __wchar_t *const 
#line 431
_Format, va_list 
#line 432
_ArgList) 
#line 437 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 438
return _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 439
} 
#line 445 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_p_l(const __wchar_t *const 
#line 446
_Format, const _locale_t 
#line 447
_Locale, va_list 
#line 448
_ArgList) 
#line 453 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 454
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 455
} 
#line 459 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwprintf_p(const __wchar_t *const 
#line 460
_Format, va_list 
#line 461
_ArgList) 
#line 466 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 467
return _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 468
} 
#line 472 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_l(FILE *const 
#line 473
_Stream, const __wchar_t *const 
#line 474
_Format, const _locale_t 
#line 475
_Locale, ...) 
#line 480 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 481
int _Result; 
#line 482
va_list _ArgList; 
#line 483
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 484
_Result = _vfwprintf_l(_Stream, _Format, _Locale, _ArgList); 
#line 485
(void)(_ArgList = ((va_list)0)); 
#line 486
return _Result; 
#line 487
} 
#line 491 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwprintf(FILE *const 
#line 492
_Stream, const __wchar_t *const 
#line 493
_Format, ...) 
#line 498 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 499
int _Result; 
#line 500
va_list _ArgList; 
#line 501
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 502
_Result = _vfwprintf_l(_Stream, _Format, 0, _ArgList); 
#line 503
(void)(_ArgList = ((va_list)0)); 
#line 504
return _Result; 
#line 505
} 
#line 509 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_s_l(FILE *const 
#line 510
_Stream, const __wchar_t *const 
#line 511
_Format, const _locale_t 
#line 512
_Locale, ...) 
#line 517 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 518
int _Result; 
#line 519
va_list _ArgList; 
#line 520
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 521
_Result = _vfwprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
#line 522
(void)(_ArgList = ((va_list)0)); 
#line 523
return _Result; 
#line 524
} 
#line 530 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwprintf_s(FILE *const 
#line 531
_Stream, const __wchar_t *const 
#line 532
_Format, ...) 
#line 537 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 538
int _Result; 
#line 539
va_list _ArgList; 
#line 540
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 541
_Result = _vfwprintf_s_l(_Stream, _Format, 0, _ArgList); 
#line 542
(void)(_ArgList = ((va_list)0)); 
#line 543
return _Result; 
#line 544
} 
#line 550 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_p_l(FILE *const 
#line 551
_Stream, const __wchar_t *const 
#line 552
_Format, const _locale_t 
#line 553
_Locale, ...) 
#line 558 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 559
int _Result; 
#line 560
va_list _ArgList; 
#line 561
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 562
_Result = _vfwprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
#line 563
(void)(_ArgList = ((va_list)0)); 
#line 564
return _Result; 
#line 565
} 
#line 569 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwprintf_p(FILE *const 
#line 570
_Stream, const __wchar_t *const 
#line 571
_Format, ...) 
#line 576 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 577
int _Result; 
#line 578
va_list _ArgList; 
#line 579
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 580
_Result = _vfwprintf_p_l(_Stream, _Format, 0, _ArgList); 
#line 581
(void)(_ArgList = ((va_list)0)); 
#line 582
return _Result; 
#line 583
} 
#line 587 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_l(const __wchar_t *const 
#line 588
_Format, const _locale_t 
#line 589
_Locale, ...) 
#line 594 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 595
int _Result; 
#line 596
va_list _ArgList; 
#line 597
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 598
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 599
(void)(_ArgList = ((va_list)0)); 
#line 600
return _Result; 
#line 601
} 
#line 605 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wprintf(const __wchar_t *const 
#line 606
_Format, ...) 
#line 611 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 612
int _Result; 
#line 613
va_list _ArgList; 
#line 614
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 615
_Result = _vfwprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 616
(void)(_ArgList = ((va_list)0)); 
#line 617
return _Result; 
#line 618
} 
#line 622 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_s_l(const __wchar_t *const 
#line 623
_Format, const _locale_t 
#line 624
_Locale, ...) 
#line 629 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 630
int _Result; 
#line 631
va_list _ArgList; 
#line 632
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 633
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 634
(void)(_ArgList = ((va_list)0)); 
#line 635
return _Result; 
#line 636
} 
#line 642 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wprintf_s(const __wchar_t *const 
#line 643
_Format, ...) 
#line 648 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 649
int _Result; 
#line 650
va_list _ArgList; 
#line 651
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 652
_Result = _vfwprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 653
(void)(_ArgList = ((va_list)0)); 
#line 654
return _Result; 
#line 655
} 
#line 661 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_p_l(const __wchar_t *const 
#line 662
_Format, const _locale_t 
#line 663
_Locale, ...) 
#line 668 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 669
int _Result; 
#line 670
va_list _ArgList; 
#line 671
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 672
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 673
(void)(_ArgList = ((va_list)0)); 
#line 674
return _Result; 
#line 675
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wprintf_p(const __wchar_t *const 
#line 680
_Format, ...) 
#line 685 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 686
int _Result; 
#line 687
va_list _ArgList; 
#line 688
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 689
_Result = _vfwprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 690
(void)(_ArgList = ((va_list)0)); 
#line 691
return _Result; 
#line 692
} 
#line 702 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
int __cdecl __stdio_common_vfwscanf(unsigned __int64 _Options, FILE * _Stream, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 711
__inline int __cdecl _vfwscanf_l(FILE *const 
#line 712
_Stream, const __wchar_t *const 
#line 713
_Format, const _locale_t 
#line 714
_Locale, va_list 
#line 715
_ArgList) 
#line 720 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 721
return __stdio_common_vfwscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 724
} 
#line 728 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwscanf(FILE *const 
#line 729
_Stream, const __wchar_t *const 
#line 730
_Format, va_list 
#line 731
_ArgList) 
#line 736 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 737
return _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
#line 738
} 
#line 742 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vfwscanf_s_l(FILE *const 
#line 743
_Stream, const __wchar_t *const 
#line 744
_Format, const _locale_t 
#line 745
_Locale, va_list 
#line 746
_ArgList) 
#line 751 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 752
return __stdio_common_vfwscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 
#line 755
} 
#line 761 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vfwscanf_s(FILE *const 
#line 762
_Stream, const __wchar_t *const 
#line 763
_Format, va_list 
#line 764
_ArgList) 
#line 769 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 770
return _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
#line 771
} 
#line 776 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwscanf_l(const __wchar_t *const 
#line 777
_Format, const _locale_t 
#line 778
_Locale, va_list 
#line 779
_ArgList) 
#line 784 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 785
return _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 786
} 
#line 790 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwscanf(const __wchar_t *const 
#line 791
_Format, va_list 
#line 792
_ArgList) 
#line 797 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 798
return _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 799
} 
#line 803 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vwscanf_s_l(const __wchar_t *const 
#line 804
_Format, const _locale_t 
#line 805
_Locale, va_list 
#line 806
_ArgList) 
#line 811 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 812
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 813
} 
#line 819 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vwscanf_s(const __wchar_t *const 
#line 820
_Format, va_list 
#line 821
_ArgList) 
#line 826 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 827
return _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 828
} 
#line 834 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwscanf_l(FILE *const 
#line 835
_Stream, const __wchar_t *const 
#line 836
_Format, const _locale_t 
#line 837
_Locale, ...) 
#line 842 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 843
int _Result; 
#line 844
va_list _ArgList; 
#line 845
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 846
_Result = _vfwscanf_l(_Stream, _Format, _Locale, _ArgList); 
#line 847
(void)(_ArgList = ((va_list)0)); 
#line 848
return _Result; 
#line 849
} 
#line 853 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwscanf(FILE *const 
#line 854
_Stream, const __wchar_t *const 
#line 855
_Format, ...) 
#line 860 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 861
int _Result; 
#line 862
va_list _ArgList; 
#line 863
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 864
_Result = _vfwscanf_l(_Stream, _Format, 0, _ArgList); 
#line 865
(void)(_ArgList = ((va_list)0)); 
#line 866
return _Result; 
#line 867
} 
#line 871 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _fwscanf_s_l(FILE *const 
#line 872
_Stream, const __wchar_t *const 
#line 873
_Format, const _locale_t 
#line 874
_Locale, ...) 
#line 879 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 880
int _Result; 
#line 881
va_list _ArgList; 
#line 882
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 883
_Result = _vfwscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
#line 884
(void)(_ArgList = ((va_list)0)); 
#line 885
return _Result; 
#line 886
} 
#line 892 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl fwscanf_s(FILE *const 
#line 893
_Stream, const __wchar_t *const 
#line 894
_Format, ...) 
#line 899 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 900
int _Result; 
#line 901
va_list _ArgList; 
#line 902
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 903
_Result = _vfwscanf_s_l(_Stream, _Format, 0, _ArgList); 
#line 904
(void)(_ArgList = ((va_list)0)); 
#line 905
return _Result; 
#line 906
} 
#line 912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wscanf_l(const __wchar_t *const 
#line 913
_Format, const _locale_t 
#line 914
_Locale, ...) 
#line 919 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 920
int _Result; 
#line 921
va_list _ArgList; 
#line 922
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 923
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 924
(void)(_ArgList = ((va_list)0)); 
#line 925
return _Result; 
#line 926
} 
#line 930 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wscanf(const __wchar_t *const 
#line 931
_Format, ...) 
#line 936 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 937
int _Result; 
#line 938
va_list _ArgList; 
#line 939
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 940
_Result = _vfwscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 941
(void)(_ArgList = ((va_list)0)); 
#line 942
return _Result; 
#line 943
} 
#line 947 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _wscanf_s_l(const __wchar_t *const 
#line 948
_Format, const _locale_t 
#line 949
_Locale, ...) 
#line 954 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 955
int _Result; 
#line 956
va_list _ArgList; 
#line 957
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 958
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 959
(void)(_ArgList = ((va_list)0)); 
#line 960
return _Result; 
#line 961
} 
#line 967 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl wscanf_s(const __wchar_t *const 
#line 968
_Format, ...) 
#line 973 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 974
int _Result; 
#line 975
va_list _ArgList; 
#line 976
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 977
_Result = _vfwscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 978
(void)(_ArgList = ((va_list)0)); 
#line 979
return _Result; 
#line 980
} 
#line 1003 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
int __cdecl __stdio_common_vswprintf(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1014
int __cdecl __stdio_common_vswprintf_s(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1025
int __cdecl __stdio_common_vsnwprintf_s(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, size_t _MaxCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1037
int __cdecl __stdio_common_vswprintf_p(unsigned __int64 _Options, __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1048
__inline int __cdecl _vsnwprintf_l(__wchar_t *const 
#line 1049
_Buffer, const size_t 
#line 1050
_BufferCount, const __wchar_t *const 
#line 1051
_Format, const _locale_t 
#line 1052
_Locale, va_list 
#line 1053
_ArgList) 
#line 1058 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1059
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1063
return (_Result < 0) ? -1 : _Result; 
#line 1064
} 
#line 1067 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#pragma warning(disable: 4793)
#line 1072
__inline int __cdecl _vsnwprintf_s_l(__wchar_t *const 
#line 1073
_Buffer, const size_t 
#line 1074
_BufferCount, const size_t 
#line 1075
_MaxCount, const __wchar_t *const 
#line 1076
_Format, const _locale_t 
#line 1077
_Locale, va_list 
#line 1078
_ArgList) 
#line 1083 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1084
const int _Result = __stdio_common_vsnwprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
#line 1088
return (_Result < 0) ? -1 : _Result; 
#line 1089
} 
#line 1094 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vsnwprintf_s(__wchar_t *const 
#line 1095
_Buffer, const size_t 
#line 1096
_BufferCount, const size_t 
#line 1097
_MaxCount, const __wchar_t *const 
#line 1098
_Format, va_list 
#line 1099
_ArgList) 
#line 1104 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1105
return _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 1106
} 
#line 1109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, ...); __inline int __cdecl _vsnwprintf(__wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, va_list _Args); 
#line 1118 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(pop)
#line 1122
__inline int __cdecl _vsnwprintf(__wchar_t *
#line 1123
_Buffer, size_t 
#line 1124
_BufferCount, const __wchar_t *
#line 1125
_Format, va_list 
#line 1126
_ArgList) 
#line 1131 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
} 
#line 1139 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {template< size_t _Size> inline int __cdecl _vsnwprintf_s(__wchar_t (&_Buffer)[_Size], ::size_t _BufferCount, const __wchar_t *_Format, ::va_list _ArgList) throw() { return _vsnwprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }
#line 1150 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_c_l(__wchar_t *const 
#line 1151
_Buffer, const size_t 
#line 1152
_BufferCount, const __wchar_t *const 
#line 1153
_Format, const _locale_t 
#line 1154
_Locale, va_list 
#line 1155
_ArgList) 
#line 1160 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1161
const int _Result = __stdio_common_vswprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1165
return (_Result < 0) ? -1 : _Result; 
#line 1166
} 
#line 1171 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_c(__wchar_t *const 
#line 1172
_Buffer, const size_t 
#line 1173
_BufferCount, const __wchar_t *const 
#line 1174
_Format, va_list 
#line 1175
_ArgList) 
#line 1180 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1181
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1182
} 
#line 1187 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_l(__wchar_t *const 
#line 1188
_Buffer, const size_t 
#line 1189
_BufferCount, const __wchar_t *const 
#line 1190
_Format, const _locale_t 
#line 1191
_Locale, va_list 
#line 1192
_ArgList) 
#line 1197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
} 
#line 1207 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl __vswprintf_l(__wchar_t *const 
#line 1208
_Buffer, const __wchar_t *const 
#line 1209
_Format, const _locale_t 
#line 1210
_Locale, va_list 
#line 1211
_ArgList) 
#line 1216 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1217
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1218
} 
#line 1223 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf(__wchar_t *const 
#line 1224
_Buffer, const __wchar_t *const 
#line 1225
_Format, va_list 
#line 1226
_ArgList) 
#line 1231 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1232
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
#line 1233
} 
#line 1238 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswprintf(__wchar_t *const 
#line 1239
_Buffer, const size_t 
#line 1240
_BufferCount, const __wchar_t *const 
#line 1241
_Format, va_list 
#line 1242
_ArgList) 
#line 1247 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1248
return _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1249
} 
#line 1254 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_s_l(__wchar_t *const 
#line 1255
_Buffer, const size_t 
#line 1256
_BufferCount, const __wchar_t *const 
#line 1257
_Format, const _locale_t 
#line 1258
_Locale, va_list 
#line 1259
_ArgList) 
#line 1264 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1265
const int _Result = __stdio_common_vswprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1269
return (_Result < 0) ? -1 : _Result; 
#line 1270
} 
#line 1276 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswprintf_s(__wchar_t *const 
#line 1277
_Buffer, const size_t 
#line 1278
_BufferCount, const __wchar_t *const 
#line 1279
_Format, va_list 
#line 1280
_ArgList) 
#line 1285 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1286
return _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1287
} 
#line 1292 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {template< size_t _Size> inline int __cdecl vswprintf_s(__wchar_t (&_Buffer)[_Size], const __wchar_t *_Format, ::va_list _ArgList) throw() { return vswprintf_s(_Buffer, _Size, _Format, _ArgList); } }
#line 1302 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_p_l(__wchar_t *const 
#line 1303
_Buffer, const size_t 
#line 1304
_BufferCount, const __wchar_t *const 
#line 1305
_Format, const _locale_t 
#line 1306
_Locale, va_list 
#line 1307
_ArgList) 
#line 1312 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1313
const int _Result = __stdio_common_vswprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1317
return (_Result < 0) ? -1 : _Result; 
#line 1318
} 
#line 1323 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswprintf_p(__wchar_t *const 
#line 1324
_Buffer, const size_t 
#line 1325
_BufferCount, const __wchar_t *const 
#line 1326
_Format, va_list 
#line 1327
_ArgList) 
#line 1332 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1333
return _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1334
} 
#line 1339 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_l(const __wchar_t *const 
#line 1340
_Format, const _locale_t 
#line 1341
_Locale, va_list 
#line 1342
_ArgList) 
#line 1347 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1348
const int _Result = __stdio_common_vswprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 
#line 1352
return (_Result < 0) ? -1 : _Result; 
#line 1353
} 
#line 1358 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf(const __wchar_t *const 
#line 1359
_Format, va_list 
#line 1360
_ArgList) 
#line 1365 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1366
return _vscwprintf_l(_Format, 0, _ArgList); 
#line 1367
} 
#line 1372 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_p_l(const __wchar_t *const 
#line 1373
_Format, const _locale_t 
#line 1374
_Locale, va_list 
#line 1375
_ArgList) 
#line 1380 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1381
const int _Result = __stdio_common_vswprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 
#line 1385
return (_Result < 0) ? -1 : _Result; 
#line 1386
} 
#line 1391 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vscwprintf_p(const __wchar_t *const 
#line 1392
_Format, va_list 
#line 1393
_ArgList) 
#line 1398 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1399
return _vscwprintf_p_l(_Format, 0, _ArgList); 
#line 1400
} 
#line 1405 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl __swprintf_l(__wchar_t *const 
#line 1406
_Buffer, const __wchar_t *const 
#line 1407
_Format, const _locale_t 
#line 1408
_Locale, ...) 
#line 1413 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1414
int _Result; 
#line 1415
va_list _ArgList; 
#line 1416
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1417
_Result = __vswprintf_l(_Buffer, _Format, _Locale, _ArgList); 
#line 1418
(void)(_ArgList = ((va_list)0)); 
#line 1419
return _Result; 
#line 1420
} 
#line 1425 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_l(__wchar_t *const 
#line 1426
_Buffer, const size_t 
#line 1427
_BufferCount, const __wchar_t *const 
#line 1428
_Format, const _locale_t 
#line 1429
_Locale, ...) 
#line 1434 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1435
int _Result; 
#line 1436
va_list _ArgList; 
#line 1437
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1438
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1439
(void)(_ArgList = ((va_list)0)); 
#line 1440
return _Result; 
#line 1441
} 
#line 1446 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf(__wchar_t *const 
#line 1447
_Buffer, const __wchar_t *const 
#line 1448
_Format, ...) 
#line 1453 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1454
int _Result; 
#line 1455
va_list _ArgList; 
#line 1456
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1457
_Result = __vswprintf_l(_Buffer, _Format, 0, _ArgList); 
#line 1458
(void)(_ArgList = ((va_list)0)); 
#line 1459
return _Result; 
#line 1460
} 
#line 1465 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swprintf(__wchar_t *const 
#line 1466
_Buffer, const size_t 
#line 1467
_BufferCount, const __wchar_t *const 
#line 1468
_Format, ...) 
#line 1473 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1474
int _Result; 
#line 1475
va_list _ArgList; 
#line 1476
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1477
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1478
(void)(_ArgList = ((va_list)0)); 
#line 1479
return _Result; 
#line 1480
} 
#line 1483 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#line 1486
#pragma warning(disable:4793 4996)
#line 1488
__inline int __cdecl __swprintf_l(__wchar_t * _Buffer, const __wchar_t * _Format, _locale_t _Locale, ...); __inline int __cdecl __vswprintf_l(__wchar_t * _Buffer, const __wchar_t * _Format, _locale_t _Locale, va_list _Args); 
#line 1497 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf(__wchar_t * _Buffer, const __wchar_t * _Format, ...); __inline int __cdecl _vswprintf(__wchar_t * _Buffer, const __wchar_t * _Format, va_list _Args); 
#line 1504 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(pop)
#line 1508
__inline int __cdecl _swprintf_s_l(__wchar_t *const 
#line 1509
_Buffer, const size_t 
#line 1510
_BufferCount, const __wchar_t *const 
#line 1511
_Format, const _locale_t 
#line 1512
_Locale, ...) 
#line 1517 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1518
int _Result; 
#line 1519
va_list _ArgList; 
#line 1520
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1521
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1522
(void)(_ArgList = ((va_list)0)); 
#line 1523
return _Result; 
#line 1524
} 
#line 1530 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swprintf_s(__wchar_t *const 
#line 1531
_Buffer, const size_t 
#line 1532
_BufferCount, const __wchar_t *const 
#line 1533
_Format, ...) 
#line 1538 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1539
int _Result; 
#line 1540
va_list _ArgList; 
#line 1541
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1542
_Result = _vswprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1543
(void)(_ArgList = ((va_list)0)); 
#line 1544
return _Result; 
#line 1545
} 
#line 1550 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {__pragma( warning(push)) __pragma( warning(disable: 4793)) template< size_t _Size> inline int __cdecl swprintf_s(__wchar_t (&_Buffer)[_Size], const __wchar_t *_Format, ...) throw() { ::va_list _ArgList; (void)(::__vcrt_assert_va_start_is_not_reference< const __wchar_t *> (), ((void)__va_start(&_ArgList, _Format))); return vswprintf_s(_Buffer, _Size, _Format, _ArgList); } __pragma( warning(pop)) }
#line 1559 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_p_l(__wchar_t *const 
#line 1560
_Buffer, const size_t 
#line 1561
_BufferCount, const __wchar_t *const 
#line 1562
_Format, const _locale_t 
#line 1563
_Locale, ...) 
#line 1568 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1569
int _Result; 
#line 1570
va_list _ArgList; 
#line 1571
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1572
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1573
(void)(_ArgList = ((va_list)0)); 
#line 1574
return _Result; 
#line 1575
} 
#line 1580 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_p(__wchar_t *const 
#line 1581
_Buffer, const size_t 
#line 1582
_BufferCount, const __wchar_t *const 
#line 1583
_Format, ...) 
#line 1588 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1589
int _Result; 
#line 1590
va_list _ArgList; 
#line 1591
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1592
_Result = _vswprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1593
(void)(_ArgList = ((va_list)0)); 
#line 1594
return _Result; 
#line 1595
} 
#line 1600 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_c_l(__wchar_t *const 
#line 1601
_Buffer, const size_t 
#line 1602
_BufferCount, const __wchar_t *const 
#line 1603
_Format, const _locale_t 
#line 1604
_Locale, ...) 
#line 1609 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1610
int _Result; 
#line 1611
va_list _ArgList; 
#line 1612
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1613
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1614
(void)(_ArgList = ((va_list)0)); 
#line 1615
return _Result; 
#line 1616
} 
#line 1621 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swprintf_c(__wchar_t *const 
#line 1622
_Buffer, const size_t 
#line 1623
_BufferCount, const __wchar_t *const 
#line 1624
_Format, ...) 
#line 1629 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1630
int _Result; 
#line 1631
va_list _ArgList; 
#line 1632
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1633
_Result = _vswprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1634
(void)(_ArgList = ((va_list)0)); 
#line 1635
return _Result; 
#line 1636
} 
#line 1641 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf_l(__wchar_t *const 
#line 1642
_Buffer, const size_t 
#line 1643
_BufferCount, const __wchar_t *const 
#line 1644
_Format, const _locale_t 
#line 1645
_Locale, ...) 
#line 1650 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1651
int _Result; 
#line 1652
va_list _ArgList; 
#line 1653
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1655
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
#line 1660
(void)(_ArgList = ((va_list)0)); 
#line 1661
return _Result; 
#line 1662
} 
#line 1667 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf(__wchar_t *
#line 1668
_Buffer, size_t 
#line 1669
_BufferCount, const __wchar_t *
#line 1670
_Format, ...) 
#line 1675 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1676
int _Result; 
#line 1677
va_list _ArgList; 
#line 1678
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1680
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
#line 1685
(void)(_ArgList = ((va_list)0)); 
#line 1686
return _Result; 
#line 1687
} 
#line 1692 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf_s_l(__wchar_t *const 
#line 1693
_Buffer, const size_t 
#line 1694
_BufferCount, const size_t 
#line 1695
_MaxCount, const __wchar_t *const 
#line 1696
_Format, const _locale_t 
#line 1697
_Locale, ...) 
#line 1702 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1703
int _Result; 
#line 1704
va_list _ArgList; 
#line 1705
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1706
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
#line 1707
(void)(_ArgList = ((va_list)0)); 
#line 1708
return _Result; 
#line 1709
} 
#line 1714 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwprintf_s(__wchar_t *const 
#line 1715
_Buffer, const size_t 
#line 1716
_BufferCount, const size_t 
#line 1717
_MaxCount, const __wchar_t *const 
#line 1718
_Format, ...) 
#line 1723 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1724
int _Result; 
#line 1725
va_list _ArgList; 
#line 1726
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1727
_Result = _vsnwprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 1728
(void)(_ArgList = ((va_list)0)); 
#line 1729
return _Result; 
#line 1730
} 
#line 1733 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {__pragma( warning(push)) __pragma( warning(disable: 4793)) template< size_t _Size> inline int __cdecl _snwprintf_s(__wchar_t (&_Buffer)[_Size], ::size_t _BufferCount, const __wchar_t *_Format, ...) throw() { ::va_list _ArgList; (void)(::__vcrt_assert_va_start_is_not_reference< const __wchar_t *> (), ((void)__va_start(&_ArgList, _Format))); return _vsnwprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } __pragma( warning(pop)) }
#line 1742 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_l(const __wchar_t *const 
#line 1743
_Format, const _locale_t 
#line 1744
_Locale, ...) 
#line 1749 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1750
int _Result; 
#line 1751
va_list _ArgList; 
#line 1752
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1753
_Result = _vscwprintf_l(_Format, _Locale, _ArgList); 
#line 1754
(void)(_ArgList = ((va_list)0)); 
#line 1755
return _Result; 
#line 1756
} 
#line 1761 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf(const __wchar_t *const 
#line 1762
_Format, ...) 
#line 1767 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1768
int _Result; 
#line 1769
va_list _ArgList; 
#line 1770
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1771
_Result = _vscwprintf_l(_Format, 0, _ArgList); 
#line 1772
(void)(_ArgList = ((va_list)0)); 
#line 1773
return _Result; 
#line 1774
} 
#line 1779 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_p_l(const __wchar_t *const 
#line 1780
_Format, const _locale_t 
#line 1781
_Locale, ...) 
#line 1786 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1787
int _Result; 
#line 1788
va_list _ArgList; 
#line 1789
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1790
_Result = _vscwprintf_p_l(_Format, _Locale, _ArgList); 
#line 1791
(void)(_ArgList = ((va_list)0)); 
#line 1792
return _Result; 
#line 1793
} 
#line 1798 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _scwprintf_p(const __wchar_t *const 
#line 1799
_Format, ...) 
#line 1804 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1805
int _Result; 
#line 1806
va_list _ArgList; 
#line 1807
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1808
_Result = _vscwprintf_p_l(_Format, 0, _ArgList); 
#line 1809
(void)(_ArgList = ((va_list)0)); 
#line 1810
return _Result; 
#line 1811
} 
#line 1816 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(push)
#pragma warning(disable: 4141 4412 4793 4996 6054)
#line 1822
extern "C++" 
#line 1821
__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int 
#line 1822
swprintf(__wchar_t *const 
#line 1823
_Buffer, const __wchar_t *const 
#line 1824
_Format, ...) throw() 
#line 1826
{ 
#line 1827
int _Result; 
#line 1828
va_list _ArgList; 
#line 1829
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#pragma warning(suppress: 28719)
_Result = vswprintf(_Buffer, 2147483647, _Format, _ArgList); 
#line 1832
(void)(_ArgList = ((va_list)0)); 
#line 1833
return _Result; 
#line 1834
} 
#line 1837
extern "C++" 
#line 1836
__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int __cdecl 
#line 1837
vswprintf(__wchar_t *const 
#line 1838
_Buffer, const __wchar_t *const 
#line 1839
_Format, va_list 
#line 1840
_ArgList) throw() 
#line 1842
{ 
#pragma warning(suppress: 28719)
return vswprintf(_Buffer, 2147483647, _Format, _ArgList); 
#line 1845
} 
#line 1848
extern "C++" 
#line 1847
__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int 
#line 1848
_swprintf_l(__wchar_t *const 
#line 1849
_Buffer, const __wchar_t *const 
#line 1850
_Format, const _locale_t 
#line 1851
_Locale, ...) throw() 
#line 1853
{ 
#line 1854
int _Result; 
#line 1855
va_list _ArgList; 
#line 1856
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1857
_Result = _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1858
(void)(_ArgList = ((va_list)0)); 
#line 1859
return _Result; 
#line 1860
} 
#line 1863
extern "C++" 
#line 1862
__declspec(deprecated("function has been changed to conform with the ISO C standard, adding an extra character count parameter. To use the traditional " "Microsoft version, set _CRT_NON_CONFORMING_SWPRINTFS.")) inline int __cdecl 
#line 1863
_vswprintf_l(__wchar_t *const 
#line 1864
_Buffer, const __wchar_t *const 
#line 1865
_Format, const _locale_t 
#line 1866
_Locale, va_list 
#line 1867
_ArgList) throw() 
#line 1869
{ 
#line 1870
return _vswprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1871
} 
#line 1875 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
#pragma warning(pop)
#line 1892 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
int __cdecl __stdio_common_vswscanf(unsigned __int64 _Options, const __wchar_t * _Buffer, size_t _BufferCount, const __wchar_t * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1903
__inline int __cdecl _vswscanf_l(const __wchar_t *const 
#line 1904
_Buffer, const __wchar_t *const 
#line 1905
_Format, const _locale_t 
#line 1906
_Locale, va_list 
#line 1907
_ArgList) 
#line 1912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1913
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1916
} 
#line 1921 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswscanf(const __wchar_t *
#line 1922
_Buffer, const __wchar_t *
#line 1923
_Format, va_list 
#line 1924
_ArgList) 
#line 1929 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1930
return _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
#line 1931
} 
#line 1936 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vswscanf_s_l(const __wchar_t *const 
#line 1937
_Buffer, const __wchar_t *const 
#line 1938
_Format, const _locale_t 
#line 1939
_Locale, va_list 
#line 1940
_ArgList) 
#line 1945 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1946
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 1949
} 
#line 1956 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl vswscanf_s(const __wchar_t *const 
#line 1957
_Buffer, const __wchar_t *const 
#line 1958
_Format, va_list 
#line 1959
_ArgList) 
#line 1964 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1965
return _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
#line 1966
} 
#line 1971 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
extern "C++" {template< size_t _Size> inline int __cdecl vswscanf_s(__wchar_t (&_Buffer)[_Size], const __wchar_t *_Format, ::va_list _ArgList) throw() { return vswscanf_s(_Buffer, _Size, _Format, _ArgList); } }
#line 1981 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vsnwscanf_l(const __wchar_t *const 
#line 1982
_Buffer, const size_t 
#line 1983
_BufferCount, const __wchar_t *const 
#line 1984
_Format, const _locale_t 
#line 1985
_Locale, va_list 
#line 1986
_ArgList) 
#line 1991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 1992
return __stdio_common_vswscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1995
} 
#line 2000 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _vsnwscanf_s_l(const __wchar_t *const 
#line 2001
_Buffer, const size_t 
#line 2002
_BufferCount, const __wchar_t *const 
#line 2003
_Format, const _locale_t 
#line 2004
_Locale, va_list 
#line 2005
_ArgList) 
#line 2010 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2011
return __stdio_common_vswscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2014
} 
#line 2019 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swscanf_l(const __wchar_t *const 
#line 2020
_Buffer, const __wchar_t *const 
#line 2021
_Format, _locale_t 
#line 2022
_Locale, ...) 
#line 2027 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2028
int _Result; 
#line 2029
va_list _ArgList; 
#line 2030
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2031
_Result = _vswscanf_l(_Buffer, _Format, _Locale, _ArgList); 
#line 2032
(void)(_ArgList = ((va_list)0)); 
#line 2033
return _Result; 
#line 2034
} 
#line 2039 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swscanf(const __wchar_t *const 
#line 2040
_Buffer, const __wchar_t *const 
#line 2041
_Format, ...) 
#line 2046 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2047
int _Result; 
#line 2048
va_list _ArgList; 
#line 2049
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2050
_Result = _vswscanf_l(_Buffer, _Format, 0, _ArgList); 
#line 2051
(void)(_ArgList = ((va_list)0)); 
#line 2052
return _Result; 
#line 2053
} 
#line 2058 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _swscanf_s_l(const __wchar_t *const 
#line 2059
_Buffer, const __wchar_t *const 
#line 2060
_Format, const _locale_t 
#line 2061
_Locale, ...) 
#line 2066 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2067
int _Result; 
#line 2068
va_list _ArgList; 
#line 2069
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2070
_Result = _vswscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
#line 2071
(void)(_ArgList = ((va_list)0)); 
#line 2072
return _Result; 
#line 2073
} 
#line 2080 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl swscanf_s(const __wchar_t *const 
#line 2081
_Buffer, const __wchar_t *const 
#line 2082
_Format, ...) 
#line 2087 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2088
int _Result; 
#line 2089
va_list _ArgList; 
#line 2090
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2091
_Result = _vswscanf_s_l(_Buffer, _Format, 0, _ArgList); 
#line 2092
(void)(_ArgList = ((va_list)0)); 
#line 2093
return _Result; 
#line 2094
} 
#line 2101 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf_l(const __wchar_t *const 
#line 2102
_Buffer, const size_t 
#line 2103
_BufferCount, const __wchar_t *const 
#line 2104
_Format, const _locale_t 
#line 2105
_Locale, ...) 
#line 2110 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2111
int _Result; 
#line 2112
va_list _ArgList; 
#line 2113
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2115
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
#line 2120
(void)(_ArgList = ((va_list)0)); 
#line 2121
return _Result; 
#line 2122
} 
#line 2127 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf(const __wchar_t *const 
#line 2128
_Buffer, const size_t 
#line 2129
_BufferCount, const __wchar_t *const 
#line 2130
_Format, ...) 
#line 2135 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2136
int _Result; 
#line 2137
va_list _ArgList; 
#line 2138
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2140
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnwscanf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
#line 2145
(void)(_ArgList = ((va_list)0)); 
#line 2146
return _Result; 
#line 2147
} 
#line 2152 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf_s_l(const __wchar_t *const 
#line 2153
_Buffer, const size_t 
#line 2154
_BufferCount, const __wchar_t *const 
#line 2155
_Format, const _locale_t 
#line 2156
_Locale, ...) 
#line 2161 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2162
int _Result; 
#line 2163
va_list _ArgList; 
#line 2164
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2165
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2166
(void)(_ArgList = ((va_list)0)); 
#line 2167
return _Result; 
#line 2168
} 
#line 2173 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
__inline int __cdecl _snwscanf_s(const __wchar_t *const 
#line 2174
_Buffer, const size_t 
#line 2175
_BufferCount, const __wchar_t *const 
#line 2176
_Format, ...) 
#line 2181 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
{ 
#line 2182
int _Result; 
#line 2183
va_list _ArgList; 
#line 2184
(void)(__vcrt_assert_va_start_is_not_reference< const __wchar_t *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2185
_Result = _vsnwscanf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 2186
(void)(_ArgList = ((va_list)0)); 
#line 2187
return _Result; 
#line 2188
} 
#line 2198 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wstdio.h"
}__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 69 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
typedef __int64 fpos_t; 
#line 76
errno_t __cdecl _get_stream_buffer_pointers(FILE * _Stream, char *** _Base, char *** _Pointer, int ** _Count); 
#line 92
errno_t __cdecl clearerr_s(FILE * _Stream); 
#line 97
errno_t __cdecl fopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode); 
#line 105
size_t __cdecl fread_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 114
errno_t __cdecl freopen_s(FILE ** _Stream, const char * _FileName, const char * _Mode, FILE * _OldStream); 
#line 122
char *__cdecl gets_s(char * _Buffer, rsize_t _Size); 
#line 128
errno_t __cdecl tmpfile_s(FILE ** _Stream); 
#line 134
errno_t __cdecl tmpnam_s(char * _Buffer, rsize_t _Size); 
#line 141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
void __cdecl clearerr(FILE * _Stream); 
#line 147
int __cdecl fclose(FILE * _Stream); 
#line 152
int __cdecl _fcloseall(); 
#line 155
FILE *__cdecl _fdopen(int _FileHandle, const char * _Mode); 
#line 161
int __cdecl feof(FILE * _Stream); 
#line 166
int __cdecl ferror(FILE * _Stream); 
#line 171
int __cdecl fflush(FILE * _Stream); 
#line 177
int __cdecl fgetc(FILE * _Stream); 
#line 182
int __cdecl _fgetchar(); 
#line 186
int __cdecl fgetpos(FILE * _Stream, fpos_t * _Position); 
#line 193
char *__cdecl fgets(char * _Buffer, int _MaxCount, FILE * _Stream); 
#line 200
int __cdecl _fileno(FILE * _Stream); 
#line 205
int __cdecl _flushall(); 
#line 208
FILE *__cdecl fopen(const char * _FileName, const char * _Mode); 
#line 216
int __cdecl fputc(int _Character, FILE * _Stream); 
#line 222
int __cdecl _fputchar(int _Character); 
#line 228
int __cdecl fputs(const char * _Buffer, FILE * _Stream); 
#line 234
size_t __cdecl fread(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 243
FILE *__cdecl freopen(const char * _FileName, const char * _Mode, FILE * _Stream); 
#line 250
FILE *__cdecl _fsopen(const char * _FileName, const char * _Mode, int _ShFlag); 
#line 258
int __cdecl fsetpos(FILE * _Stream, const fpos_t * _Position); 
#line 265
int __cdecl fseek(FILE * _Stream, long _Offset, int _Origin); 
#line 273
int __cdecl _fseeki64(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 281
long __cdecl ftell(FILE * _Stream); 
#line 287
__int64 __cdecl _ftelli64(FILE * _Stream); 
#line 292
size_t __cdecl fwrite(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 301
int __cdecl getc(FILE * _Stream); 
#line 306
int __cdecl getchar(); 
#line 309
int __cdecl _getmaxstdio(); 
#line 311
extern "C++" {template< size_t _Size> inline char *__cdecl gets_s(char (&_Buffer)[_Size]) throw() { return gets_s(_Buffer, _Size); } }
#line 316 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int __cdecl _getw(FILE * _Stream); 
#line 320
void __cdecl perror(const char * _ErrorMessage); 
#line 328
int __cdecl _pclose(FILE * _Stream); 
#line 333
FILE *__cdecl _popen(const char * _Command, const char * _Mode); 
#line 342 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int __cdecl putc(int _Character, FILE * _Stream); 
#line 348
int __cdecl putchar(int _Character); 
#line 353
int __cdecl puts(const char * _Buffer); 
#line 359
int __cdecl _putw(int _Word, FILE * _Stream); 
#line 364
int __cdecl remove(const char * _FileName); 
#line 369
int __cdecl rename(const char * _OldFileName, const char * _NewFileName); 
#line 374
int __cdecl _unlink(const char * _FileName); 
#line 381
int __cdecl unlink(const char * _FileName); 
#line 387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
void __cdecl rewind(FILE * _Stream); 
#line 392
int __cdecl _rmtmp(); 
#line 395
void __cdecl setbuf(FILE * _Stream, char * _Buffer); 
#line 401
int __cdecl _setmaxstdio(int _Maximum); 
#line 407
int __cdecl setvbuf(FILE * _Stream, char * _Buffer, int _Mode, size_t _Size); 
#line 420 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__declspec(allocator) char *__cdecl _tempnam(const char * _DirectoryName, const char * _FilePrefix); 
#line 430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
FILE *__cdecl tmpfile(); 
#line 432
extern "C++" {template< size_t _Size> inline ::errno_t __cdecl tmpnam_s(char (&_Buffer)[_Size]) throw() { return tmpnam_s(_Buffer, _Size); } }
#line 438 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable: 28726)
char *__cdecl tmpnam(char * _Buffer); 
#line 445 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
#pragma warning(pop)
#line 449
int __cdecl ungetc(int _Character, FILE * _Stream); 
#line 461
void __cdecl _lock_file(FILE * _Stream); 
#line 465
void __cdecl _unlock_file(FILE * _Stream); 
#line 471
int __cdecl _fclose_nolock(FILE * _Stream); 
#line 477
int __cdecl _fflush_nolock(FILE * _Stream); 
#line 483
int __cdecl _fgetc_nolock(FILE * _Stream); 
#line 489
int __cdecl _fputc_nolock(int _Character, FILE * _Stream); 
#line 495
size_t __cdecl _fread_nolock(void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 504
size_t __cdecl _fread_nolock_s(void * _Buffer, size_t _BufferSize, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 513
int __cdecl _fseek_nolock(FILE * _Stream, long _Offset, int _Origin); 
#line 520
int __cdecl _fseeki64_nolock(FILE * _Stream, __int64 _Offset, int _Origin); 
#line 527
long __cdecl _ftell_nolock(FILE * _Stream); 
#line 532
__int64 __cdecl _ftelli64_nolock(FILE * _Stream); 
#line 537
size_t __cdecl _fwrite_nolock(const void * _Buffer, size_t _ElementSize, size_t _ElementCount, FILE * _Stream); 
#line 545
int __cdecl _getc_nolock(FILE * _Stream); 
#line 550
int __cdecl _putc_nolock(int _Character, FILE * _Stream); 
#line 556
int __cdecl _ungetc_nolock(int _Character, FILE * _Stream); 
#line 587 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int *__cdecl __p__commode(); 
#line 607 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int __cdecl __stdio_common_vfprintf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 615
int __cdecl __stdio_common_vfprintf_s(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 624
int __cdecl __stdio_common_vfprintf_p(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 633
__inline int __cdecl _vfprintf_l(FILE *const 
#line 634
_Stream, const char *const 
#line 635
_Format, const _locale_t 
#line 636
_Locale, va_list 
#line 637
_ArgList) 
#line 642 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 643
return __stdio_common_vfprintf(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 644
} 
#line 648 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vfprintf(FILE *const 
#line 649
_Stream, const char *const 
#line 650
_Format, va_list 
#line 651
_ArgList) 
#line 656 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 657
return _vfprintf_l(_Stream, _Format, 0, _ArgList); 
#line 658
} 
#line 662 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_s_l(FILE *const 
#line 663
_Stream, const char *const 
#line 664
_Format, const _locale_t 
#line 665
_Locale, va_list 
#line 666
_ArgList) 
#line 671 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 672
return __stdio_common_vfprintf_s(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 673
} 
#line 679 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vfprintf_s(FILE *const 
#line 680
_Stream, const char *const 
#line 681
_Format, va_list 
#line 682
_ArgList) 
#line 687 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 688
return _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
#line 689
} 
#line 695 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_p_l(FILE *const 
#line 696
_Stream, const char *const 
#line 697
_Format, const _locale_t 
#line 698
_Locale, va_list 
#line 699
_ArgList) 
#line 704 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 705
return __stdio_common_vfprintf_p(*__local_stdio_printf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 706
} 
#line 710 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vfprintf_p(FILE *const 
#line 711
_Stream, const char *const 
#line 712
_Format, va_list 
#line 713
_ArgList) 
#line 718 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 719
return _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
#line 720
} 
#line 724 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_l(const char *const 
#line 725
_Format, const _locale_t 
#line 726
_Locale, va_list 
#line 727
_ArgList) 
#line 732 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 733
return _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 734
} 
#line 738 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vprintf(const char *const 
#line 739
_Format, va_list 
#line 740
_ArgList) 
#line 745 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 746
return _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 747
} 
#line 751 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_s_l(const char *const 
#line 752
_Format, const _locale_t 
#line 753
_Locale, va_list 
#line 754
_ArgList) 
#line 759 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 760
return _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 761
} 
#line 767 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vprintf_s(const char *const 
#line 768
_Format, va_list 
#line 769
_ArgList) 
#line 774 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 775
return _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 776
} 
#line 782 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_p_l(const char *const 
#line 783
_Format, const _locale_t 
#line 784
_Locale, va_list 
#line 785
_ArgList) 
#line 790 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 791
return _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 792
} 
#line 796 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vprintf_p(const char *const 
#line 797
_Format, va_list 
#line 798
_ArgList) 
#line 803 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 804
return _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 805
} 
#line 809 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_l(FILE *const 
#line 810
_Stream, const char *const 
#line 811
_Format, const _locale_t 
#line 812
_Locale, ...) 
#line 817 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 818
int _Result; 
#line 819
va_list _ArgList; 
#line 820
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 821
_Result = _vfprintf_l(_Stream, _Format, _Locale, _ArgList); 
#line 822
(void)(_ArgList = ((va_list)0)); 
#line 823
return _Result; 
#line 824
} 
#line 828 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl fprintf(FILE *const 
#line 829
_Stream, const char *const 
#line 830
_Format, ...) 
#line 835 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 836
int _Result; 
#line 837
va_list _ArgList; 
#line 838
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 839
_Result = _vfprintf_l(_Stream, _Format, 0, _ArgList); 
#line 840
(void)(_ArgList = ((va_list)0)); 
#line 841
return _Result; 
#line 842
} 
#line 845 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int __cdecl _set_printf_count_output(int _Value); 
#line 849
int __cdecl _get_printf_count_output(); 
#line 852
__inline int __cdecl _fprintf_s_l(FILE *const 
#line 853
_Stream, const char *const 
#line 854
_Format, const _locale_t 
#line 855
_Locale, ...) 
#line 860 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 861
int _Result; 
#line 862
va_list _ArgList; 
#line 863
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 864
_Result = _vfprintf_s_l(_Stream, _Format, _Locale, _ArgList); 
#line 865
(void)(_ArgList = ((va_list)0)); 
#line 866
return _Result; 
#line 867
} 
#line 873 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl fprintf_s(FILE *const 
#line 874
_Stream, const char *const 
#line 875
_Format, ...) 
#line 880 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 881
int _Result; 
#line 882
va_list _ArgList; 
#line 883
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 884
_Result = _vfprintf_s_l(_Stream, _Format, 0, _ArgList); 
#line 885
(void)(_ArgList = ((va_list)0)); 
#line 886
return _Result; 
#line 887
} 
#line 893 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_p_l(FILE *const 
#line 894
_Stream, const char *const 
#line 895
_Format, const _locale_t 
#line 896
_Locale, ...) 
#line 901 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 902
int _Result; 
#line 903
va_list _ArgList; 
#line 904
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 905
_Result = _vfprintf_p_l(_Stream, _Format, _Locale, _ArgList); 
#line 906
(void)(_ArgList = ((va_list)0)); 
#line 907
return _Result; 
#line 908
} 
#line 912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _fprintf_p(FILE *const 
#line 913
_Stream, const char *const 
#line 914
_Format, ...) 
#line 919 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 920
int _Result; 
#line 921
va_list _ArgList; 
#line 922
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 923
_Result = _vfprintf_p_l(_Stream, _Format, 0, _ArgList); 
#line 924
(void)(_ArgList = ((va_list)0)); 
#line 925
return _Result; 
#line 926
} 
#line 930 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_l(const char *const 
#line 931
_Format, const _locale_t 
#line 932
_Locale, ...) 
#line 937 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 938
int _Result; 
#line 939
va_list _ArgList; 
#line 940
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 941
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 942
(void)(_ArgList = ((va_list)0)); 
#line 943
return _Result; 
#line 944
} 
#line 948 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl printf(const char *const 
#line 949
_Format, ...) 
#line 954 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 955
int _Result; 
#line 956
va_list _ArgList; 
#line 957
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 958
_Result = _vfprintf_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 959
(void)(_ArgList = ((va_list)0)); 
#line 960
return _Result; 
#line 961
} 
#line 965 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_s_l(const char *const 
#line 966
_Format, const _locale_t 
#line 967
_Locale, ...) 
#line 972 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 973
int _Result; 
#line 974
va_list _ArgList; 
#line 975
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 976
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 977
(void)(_ArgList = ((va_list)0)); 
#line 978
return _Result; 
#line 979
} 
#line 985 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl printf_s(const char *const 
#line 986
_Format, ...) 
#line 991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 992
int _Result; 
#line 993
va_list _ArgList; 
#line 994
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 995
_Result = _vfprintf_s_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 996
(void)(_ArgList = ((va_list)0)); 
#line 997
return _Result; 
#line 998
} 
#line 1004 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_p_l(const char *const 
#line 1005
_Format, const _locale_t 
#line 1006
_Locale, ...) 
#line 1011 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1012
int _Result; 
#line 1013
va_list _ArgList; 
#line 1014
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1015
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, _Locale, _ArgList); 
#line 1016
(void)(_ArgList = ((va_list)0)); 
#line 1017
return _Result; 
#line 1018
} 
#line 1022 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _printf_p(const char *const 
#line 1023
_Format, ...) 
#line 1028 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1029
int _Result; 
#line 1030
va_list _ArgList; 
#line 1031
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1032
_Result = _vfprintf_p_l(__acrt_iob_func(1), _Format, 0, _ArgList); 
#line 1033
(void)(_ArgList = ((va_list)0)); 
#line 1034
return _Result; 
#line 1035
} 
#line 1044 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int __cdecl __stdio_common_vfscanf(unsigned __int64 _Options, FILE * _Stream, const char * _Format, _locale_t _Locale, va_list _Arglist); 
#line 1053
__inline int __cdecl _vfscanf_l(FILE *const 
#line 1054
_Stream, const char *const 
#line 1055
_Format, const _locale_t 
#line 1056
_Locale, va_list 
#line 1057
_ArgList) 
#line 1062 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1063
return __stdio_common_vfscanf(*__local_stdio_scanf_options(), _Stream, _Format, _Locale, _ArgList); 
#line 1066
} 
#line 1070 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vfscanf(FILE *const 
#line 1071
_Stream, const char *const 
#line 1072
_Format, va_list 
#line 1073
_ArgList) 
#line 1078 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1079
return _vfscanf_l(_Stream, _Format, 0, _ArgList); 
#line 1080
} 
#line 1084 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vfscanf_s_l(FILE *const 
#line 1085
_Stream, const char *const 
#line 1086
_Format, const _locale_t 
#line 1087
_Locale, va_list 
#line 1088
_ArgList) 
#line 1093 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1094
return __stdio_common_vfscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Stream, _Format, _Locale, _ArgList); 
#line 1097
} 
#line 1104 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vfscanf_s(FILE *const 
#line 1105
_Stream, const char *const 
#line 1106
_Format, va_list 
#line 1107
_ArgList) 
#line 1112 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1113
return _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
#line 1114
} 
#line 1120 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vscanf_l(const char *const 
#line 1121
_Format, const _locale_t 
#line 1122
_Locale, va_list 
#line 1123
_ArgList) 
#line 1128 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1129
return _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 1130
} 
#line 1134 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vscanf(const char *const 
#line 1135
_Format, va_list 
#line 1136
_ArgList) 
#line 1141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1142
return _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 1143
} 
#line 1147 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vscanf_s_l(const char *const 
#line 1148
_Format, const _locale_t 
#line 1149
_Locale, va_list 
#line 1150
_ArgList) 
#line 1155 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1156
return _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 1157
} 
#line 1163 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vscanf_s(const char *const 
#line 1164
_Format, va_list 
#line 1165
_ArgList) 
#line 1170 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1171
return _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 1172
} 
#line 1178 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _fscanf_l(FILE *const 
#line 1179
_Stream, const char *const 
#line 1180
_Format, const _locale_t 
#line 1181
_Locale, ...) 
#line 1186 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1187
int _Result; 
#line 1188
va_list _ArgList; 
#line 1189
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1190
_Result = _vfscanf_l(_Stream, _Format, _Locale, _ArgList); 
#line 1191
(void)(_ArgList = ((va_list)0)); 
#line 1192
return _Result; 
#line 1193
} 
#line 1197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl fscanf(FILE *const 
#line 1198
_Stream, const char *const 
#line 1199
_Format, ...) 
#line 1204 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1205
int _Result; 
#line 1206
va_list _ArgList; 
#line 1207
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1208
_Result = _vfscanf_l(_Stream, _Format, 0, _ArgList); 
#line 1209
(void)(_ArgList = ((va_list)0)); 
#line 1210
return _Result; 
#line 1211
} 
#line 1215 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _fscanf_s_l(FILE *const 
#line 1216
_Stream, const char *const 
#line 1217
_Format, const _locale_t 
#line 1218
_Locale, ...) 
#line 1223 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1224
int _Result; 
#line 1225
va_list _ArgList; 
#line 1226
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1227
_Result = _vfscanf_s_l(_Stream, _Format, _Locale, _ArgList); 
#line 1228
(void)(_ArgList = ((va_list)0)); 
#line 1229
return _Result; 
#line 1230
} 
#line 1236 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl fscanf_s(FILE *const 
#line 1237
_Stream, const char *const 
#line 1238
_Format, ...) 
#line 1243 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1244
int _Result; 
#line 1245
va_list _ArgList; 
#line 1246
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1247
_Result = _vfscanf_s_l(_Stream, _Format, 0, _ArgList); 
#line 1248
(void)(_ArgList = ((va_list)0)); 
#line 1249
return _Result; 
#line 1250
} 
#line 1256 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _scanf_l(const char *const 
#line 1257
_Format, const _locale_t 
#line 1258
_Locale, ...) 
#line 1263 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1264
int _Result; 
#line 1265
va_list _ArgList; 
#line 1266
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1267
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 1268
(void)(_ArgList = ((va_list)0)); 
#line 1269
return _Result; 
#line 1270
} 
#line 1274 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl scanf(const char *const 
#line 1275
_Format, ...) 
#line 1280 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1281
int _Result; 
#line 1282
va_list _ArgList; 
#line 1283
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1284
_Result = _vfscanf_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 1285
(void)(_ArgList = ((va_list)0)); 
#line 1286
return _Result; 
#line 1287
} 
#line 1291 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _scanf_s_l(const char *const 
#line 1292
_Format, const _locale_t 
#line 1293
_Locale, ...) 
#line 1298 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1299
int _Result; 
#line 1300
va_list _ArgList; 
#line 1301
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1302
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, _Locale, _ArgList); 
#line 1303
(void)(_ArgList = ((va_list)0)); 
#line 1304
return _Result; 
#line 1305
} 
#line 1311 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl scanf_s(const char *const 
#line 1312
_Format, ...) 
#line 1317 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1318
int _Result; 
#line 1319
va_list _ArgList; 
#line 1320
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1321
_Result = _vfscanf_s_l(__acrt_iob_func(0), _Format, 0, _ArgList); 
#line 1322
(void)(_ArgList = ((va_list)0)); 
#line 1323
return _Result; 
#line 1324
} 
#line 1337 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int __cdecl __stdio_common_vsprintf(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1347
int __cdecl __stdio_common_vsprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1357
int __cdecl __stdio_common_vsnprintf_s(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, size_t _MaxCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1368
int __cdecl __stdio_common_vsprintf_p(unsigned __int64 _Options, char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 1379
__inline int __cdecl _vsnprintf_l(char *const 
#line 1380
_Buffer, const size_t 
#line 1381
_BufferCount, const char *const 
#line 1382
_Format, const _locale_t 
#line 1383
_Locale, va_list 
#line 1384
_ArgList) 
#line 1389 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1390
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1394
return (_Result < 0) ? -1 : _Result; 
#line 1395
} 
#line 1400 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf(char *const 
#line 1401
_Buffer, const size_t 
#line 1402
_BufferCount, const char *const 
#line 1403
_Format, va_list 
#line 1404
_ArgList) 
#line 1409 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#pragma warning(pop)
} 
#line 1430 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vsnprintf(char *const 
#line 1431
_Buffer, const size_t 
#line 1432
_BufferCount, const char *const 
#line 1433
_Format, va_list 
#line 1434
_ArgList) 
#line 1439 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1440
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), _Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1444
return (_Result < 0) ? -1 : _Result; 
#line 1445
} 
#line 1450 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_l(char *const 
#line 1451
_Buffer, const char *const 
#line 1452
_Format, const _locale_t 
#line 1453
_Locale, va_list 
#line 1454
_ArgList) 
#line 1459 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#pragma warning(pop)
} 
#line 1469 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vsprintf(char *const 
#line 1470
_Buffer, const char *const 
#line 1471
_Format, va_list 
#line 1472
_ArgList) 
#line 1477 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#pragma warning(push)
#pragma warning(disable: 4996)
return _vsnprintf_l(_Buffer, (size_t)(-1), _Format, 0, _ArgList); 
#pragma warning(pop)
} 
#line 1487 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_s_l(char *const 
#line 1488
_Buffer, const size_t 
#line 1489
_BufferCount, const char *const 
#line 1490
_Format, const _locale_t 
#line 1491
_Locale, va_list 
#line 1492
_ArgList) 
#line 1497 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1498
const int _Result = __stdio_common_vsprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1502
return (_Result < 0) ? -1 : _Result; 
#line 1503
} 
#line 1510 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vsprintf_s(char *const 
#line 1511
_Buffer, const size_t 
#line 1512
_BufferCount, const char *const 
#line 1513
_Format, va_list 
#line 1514
_ArgList) 
#line 1519 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1520
return _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1521
} 
#line 1524 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
extern "C++" {template< size_t _Size> inline int __cdecl vsprintf_s(char (&_Buffer)[_Size], const char *_Format, ::va_list _ArgList) throw() { return vsprintf_s(_Buffer, _Size, _Format, _ArgList); } }
#line 1536 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_p_l(char *const 
#line 1537
_Buffer, const size_t 
#line 1538
_BufferCount, const char *const 
#line 1539
_Format, const _locale_t 
#line 1540
_Locale, va_list 
#line 1541
_ArgList) 
#line 1546 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1547
const int _Result = __stdio_common_vsprintf_p(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1551
return (_Result < 0) ? -1 : _Result; 
#line 1552
} 
#line 1557 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsprintf_p(char *const 
#line 1558
_Buffer, const size_t 
#line 1559
_BufferCount, const char *const 
#line 1560
_Format, va_list 
#line 1561
_ArgList) 
#line 1566 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1567
return _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1568
} 
#line 1573 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_s_l(char *const 
#line 1574
_Buffer, const size_t 
#line 1575
_BufferCount, const size_t 
#line 1576
_MaxCount, const char *const 
#line 1577
_Format, const _locale_t 
#line 1578
_Locale, va_list 
#line 1579
_ArgList) 
#line 1584 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1585
const int _Result = __stdio_common_vsnprintf_s(*__local_stdio_printf_options(), _Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
#line 1589
return (_Result < 0) ? -1 : _Result; 
#line 1590
} 
#line 1595 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_s(char *const 
#line 1596
_Buffer, const size_t 
#line 1597
_BufferCount, const size_t 
#line 1598
_MaxCount, const char *const 
#line 1599
_Format, va_list 
#line 1600
_ArgList) 
#line 1605 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1606
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 1607
} 
#line 1610 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
extern "C++" {template< size_t _Size> inline int __cdecl _vsnprintf_s(char (&_Buffer)[_Size], ::size_t _BufferCount, const char *_Format, ::va_list _ArgList) throw() { return _vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }
#line 1623 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vsnprintf_s(char *const 
#line 1624
_Buffer, const size_t 
#line 1625
_BufferCount, const size_t 
#line 1626
_MaxCount, const char *const 
#line 1627
_Format, va_list 
#line 1628
_ArgList) 
#line 1633 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1634
return _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 1635
} 
#line 1638 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
extern "C++" {template< size_t _Size> inline int __cdecl vsnprintf_s(char (&_Buffer)[_Size], ::size_t _BufferCount, const char *_Format, ::va_list _ArgList) throw() { return vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } }
#line 1650 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_l(const char *const 
#line 1651
_Format, const _locale_t 
#line 1652
_Locale, va_list 
#line 1653
_ArgList) 
#line 1658 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1659
const int _Result = __stdio_common_vsprintf((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 
#line 1663
return (_Result < 0) ? -1 : _Result; 
#line 1664
} 
#line 1668 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf(const char *const 
#line 1669
_Format, va_list 
#line 1670
_ArgList) 
#line 1675 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1676
return _vscprintf_l(_Format, 0, _ArgList); 
#line 1677
} 
#line 1681 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_p_l(const char *const 
#line 1682
_Format, const _locale_t 
#line 1683
_Locale, va_list 
#line 1684
_ArgList) 
#line 1689 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1690
const int _Result = __stdio_common_vsprintf_p((*__local_stdio_printf_options()) | (1Ui64 << 1), 0, 0, _Format, _Locale, _ArgList); 
#line 1694
return (_Result < 0) ? -1 : _Result; 
#line 1695
} 
#line 1699 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vscprintf_p(const char *const 
#line 1700
_Format, va_list 
#line 1701
_ArgList) 
#line 1706 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1707
return _vscprintf_p_l(_Format, 0, _ArgList); 
#line 1708
} 
#line 1712 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_c_l(char *const 
#line 1713
_Buffer, const size_t 
#line 1714
_BufferCount, const char *const 
#line 1715
_Format, const _locale_t 
#line 1716
_Locale, va_list 
#line 1717
_ArgList) 
#line 1722 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1723
const int _Result = __stdio_common_vsprintf(*__local_stdio_printf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1727
return (_Result < 0) ? -1 : _Result; 
#line 1728
} 
#line 1733 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsnprintf_c(char *const 
#line 1734
_Buffer, const size_t 
#line 1735
_BufferCount, const char *const 
#line 1736
_Format, va_list 
#line 1737
_ArgList) 
#line 1742 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1743
return _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1744
} 
#line 1749 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _sprintf_l(char *const 
#line 1750
_Buffer, const char *const 
#line 1751
_Format, const _locale_t 
#line 1752
_Locale, ...) 
#line 1757 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1758
int _Result; 
#line 1759
va_list _ArgList; 
#line 1760
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1762
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsprintf_l(_Buffer, _Format, _Locale, _ArgList); 
#pragma warning(pop)
#line 1767
(void)(_ArgList = ((va_list)0)); 
#line 1768
return _Result; 
#line 1769
} 
#line 1774 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl sprintf(char *const 
#line 1775
_Buffer, const char *const 
#line 1776
_Format, ...) 
#line 1781 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1782
int _Result; 
#line 1783
va_list _ArgList; 
#line 1784
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1786
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsprintf_l(_Buffer, _Format, 0, _ArgList); 
#pragma warning(pop)
#line 1791
(void)(_ArgList = ((va_list)0)); 
#line 1792
return _Result; 
#line 1793
} 
#line 1796 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable: 4996)
#pragma warning(disable: 28719)
#pragma warning(disable: 28726)
__inline int __cdecl sprintf(char * _Buffer, const char * _Format, ...); __inline int __cdecl vsprintf(char * _Buffer, const char * _Format, va_list _Args); 
#line 1806 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
#pragma warning(pop)
#line 1810
__inline int __cdecl _sprintf_s_l(char *const 
#line 1811
_Buffer, const size_t 
#line 1812
_BufferCount, const char *const 
#line 1813
_Format, const _locale_t 
#line 1814
_Locale, ...) 
#line 1819 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1820
int _Result; 
#line 1821
va_list _ArgList; 
#line 1822
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1823
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1824
(void)(_ArgList = ((va_list)0)); 
#line 1825
return _Result; 
#line 1826
} 
#line 1833 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl sprintf_s(char *const 
#line 1834
_Buffer, const size_t 
#line 1835
_BufferCount, const char *const 
#line 1836
_Format, ...) 
#line 1841 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1842
int _Result; 
#line 1843
va_list _ArgList; 
#line 1844
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1845
_Result = _vsprintf_s_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1846
(void)(_ArgList = ((va_list)0)); 
#line 1847
return _Result; 
#line 1848
} 
#line 1853 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
extern "C++" {__pragma( warning(push)) __pragma( warning(disable: 4793)) template< size_t _Size> inline int __cdecl sprintf_s(char (&_Buffer)[_Size], const char *_Format, ...) throw() { ::va_list _ArgList; (void)(::__vcrt_assert_va_start_is_not_reference< const char *> (), ((void)__va_start(&_ArgList, _Format))); return vsprintf_s(_Buffer, _Size, _Format, _ArgList); } __pragma( warning(pop)) }
#line 1862 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _sprintf_p_l(char *const 
#line 1863
_Buffer, const size_t 
#line 1864
_BufferCount, const char *const 
#line 1865
_Format, const _locale_t 
#line 1866
_Locale, ...) 
#line 1871 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1872
int _Result; 
#line 1873
va_list _ArgList; 
#line 1874
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1875
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 1876
(void)(_ArgList = ((va_list)0)); 
#line 1877
return _Result; 
#line 1878
} 
#line 1883 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _sprintf_p(char *const 
#line 1884
_Buffer, const size_t 
#line 1885
_BufferCount, const char *const 
#line 1886
_Format, ...) 
#line 1891 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1892
int _Result; 
#line 1893
va_list _ArgList; 
#line 1894
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 1895
_Result = _vsprintf_p_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 1896
(void)(_ArgList = ((va_list)0)); 
#line 1897
return _Result; 
#line 1898
} 
#line 1903 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_l(char *const 
#line 1904
_Buffer, const size_t 
#line 1905
_BufferCount, const char *const 
#line 1906
_Format, const _locale_t 
#line 1907
_Locale, ...) 
#line 1912 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1913
int _Result; 
#line 1914
va_list _ArgList; 
#line 1915
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 1917
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = _vsnprintf_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#pragma warning(pop)
#line 1922
(void)(_ArgList = ((va_list)0)); 
#line 1923
return _Result; 
#line 1924
} 
#line 1940 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl snprintf(char *const 
#line 1941
_Buffer, const size_t 
#line 1942
_BufferCount, const char *const 
#line 1943
_Format, ...) 
#line 1948 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1949
int _Result; 
#line 1950
va_list _ArgList; 
#line 1951
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#pragma warning(suppress:28719)
_Result = vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
#line 1954
(void)(_ArgList = ((va_list)0)); 
#line 1955
return _Result; 
#line 1956
} 
#line 1961 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf(char *const 
#line 1962
_Buffer, const size_t 
#line 1963
_BufferCount, const char *const 
#line 1964
_Format, ...) 
#line 1969 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 1970
int _Result; 
#line 1971
va_list _ArgList; 
#line 1972
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#pragma warning(suppress:28719)
_Result = _vsnprintf(_Buffer, _BufferCount, _Format, _ArgList); 
#line 1975
(void)(_ArgList = ((va_list)0)); 
#line 1976
return _Result; 
#line 1977
} 
#line 1980 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf(char * _Buffer, size_t _BufferCount, const char * _Format, ...); __inline int __cdecl _vsnprintf(char * _Buffer, size_t _BufferCount, const char * _Format, va_list _Args); 
#line 1991 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_c_l(char *const 
#line 1992
_Buffer, const size_t 
#line 1993
_BufferCount, const char *const 
#line 1994
_Format, const _locale_t 
#line 1995
_Locale, ...) 
#line 2000 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2001
int _Result; 
#line 2002
va_list _ArgList; 
#line 2003
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2004
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2005
(void)(_ArgList = ((va_list)0)); 
#line 2006
return _Result; 
#line 2007
} 
#line 2012 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_c(char *const 
#line 2013
_Buffer, const size_t 
#line 2014
_BufferCount, const char *const 
#line 2015
_Format, ...) 
#line 2020 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2021
int _Result; 
#line 2022
va_list _ArgList; 
#line 2023
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2024
_Result = _vsnprintf_c_l(_Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 2025
(void)(_ArgList = ((va_list)0)); 
#line 2026
return _Result; 
#line 2027
} 
#line 2032 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_s_l(char *const 
#line 2033
_Buffer, const size_t 
#line 2034
_BufferCount, const size_t 
#line 2035
_MaxCount, const char *const 
#line 2036
_Format, const _locale_t 
#line 2037
_Locale, ...) 
#line 2042 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2043
int _Result; 
#line 2044
va_list _ArgList; 
#line 2045
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2046
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, _Locale, _ArgList); 
#line 2047
(void)(_ArgList = ((va_list)0)); 
#line 2048
return _Result; 
#line 2049
} 
#line 2054 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snprintf_s(char *const 
#line 2055
_Buffer, const size_t 
#line 2056
_BufferCount, const size_t 
#line 2057
_MaxCount, const char *const 
#line 2058
_Format, ...) 
#line 2063 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2064
int _Result; 
#line 2065
va_list _ArgList; 
#line 2066
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2067
_Result = _vsnprintf_s_l(_Buffer, _BufferCount, _MaxCount, _Format, 0, _ArgList); 
#line 2068
(void)(_ArgList = ((va_list)0)); 
#line 2069
return _Result; 
#line 2070
} 
#line 2073 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
extern "C++" {__pragma( warning(push)) __pragma( warning(disable: 4793)) template< size_t _Size> inline int __cdecl _snprintf_s(char (&_Buffer)[_Size], ::size_t _BufferCount, const char *_Format, ...) throw() { ::va_list _ArgList; (void)(::__vcrt_assert_va_start_is_not_reference< const char *> (), ((void)__va_start(&_ArgList, _Format))); return _vsnprintf_s(_Buffer, _Size, _BufferCount, _Format, _ArgList); } __pragma( warning(pop)) }
#line 2082 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_l(const char *const 
#line 2083
_Format, const _locale_t 
#line 2084
_Locale, ...) 
#line 2089 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2090
int _Result; 
#line 2091
va_list _ArgList; 
#line 2092
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2093
_Result = _vscprintf_l(_Format, _Locale, _ArgList); 
#line 2094
(void)(_ArgList = ((va_list)0)); 
#line 2095
return _Result; 
#line 2096
} 
#line 2100 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf(const char *const 
#line 2101
_Format, ...) 
#line 2106 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2107
int _Result; 
#line 2108
va_list _ArgList; 
#line 2109
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2110
_Result = _vscprintf_l(_Format, 0, _ArgList); 
#line 2111
(void)(_ArgList = ((va_list)0)); 
#line 2112
return _Result; 
#line 2113
} 
#line 2117 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_p_l(const char *const 
#line 2118
_Format, const _locale_t 
#line 2119
_Locale, ...) 
#line 2124 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2125
int _Result; 
#line 2126
va_list _ArgList; 
#line 2127
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2128
_Result = _vscprintf_p_l(_Format, _Locale, _ArgList); 
#line 2129
(void)(_ArgList = ((va_list)0)); 
#line 2130
return _Result; 
#line 2131
} 
#line 2135 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _scprintf_p(const char *const 
#line 2136
_Format, ...) 
#line 2141 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2142
int _Result; 
#line 2143
va_list _ArgList; 
#line 2144
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2145
_Result = _vscprintf_p(_Format, _ArgList); 
#line 2146
(void)(_ArgList = ((va_list)0)); 
#line 2147
return _Result; 
#line 2148
} 
#line 2156 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int __cdecl __stdio_common_vsscanf(unsigned __int64 _Options, const char * _Buffer, size_t _BufferCount, const char * _Format, _locale_t _Locale, va_list _ArgList); 
#line 2166
__inline int __cdecl _vsscanf_l(const char *const 
#line 2167
_Buffer, const char *const 
#line 2168
_Format, const _locale_t 
#line 2169
_Locale, va_list 
#line 2170
_ArgList) 
#line 2175 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2176
return __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 2179
} 
#line 2183 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl vsscanf(const char *const 
#line 2184
_Buffer, const char *const 
#line 2185
_Format, va_list 
#line 2186
_ArgList) 
#line 2191 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2192
return _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
#line 2193
} 
#line 2197 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _vsscanf_s_l(const char *const 
#line 2198
_Buffer, const char *const 
#line 2199
_Format, const _locale_t 
#line 2200
_Locale, va_list 
#line 2201
_ArgList) 
#line 2206 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2207
return __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, (size_t)(-1), _Format, _Locale, _ArgList); 
#line 2210
} 
#line 2215 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable:6530)
#line 2219
__inline int __cdecl vsscanf_s(const char *const 
#line 2220
_Buffer, const char *const 
#line 2221
_Format, va_list 
#line 2222
_ArgList) 
#line 2227 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2228
return _vsscanf_s_l(_Buffer, _Format, 0, _ArgList); 
#line 2229
} 
#line 2232 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
extern "C++" {template< size_t _Size> inline int __cdecl vsscanf_s(const char (&_Buffer)[_Size], const char *_Format, ::va_list _ArgList) throw() { return vsscanf_s(_Buffer, _Size, _Format, _ArgList); } }
#line 2239 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
#pragma warning(pop)
#line 2244 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _sscanf_l(const char *const 
#line 2245
_Buffer, const char *const 
#line 2246
_Format, const _locale_t 
#line 2247
_Locale, ...) 
#line 2252 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2253
int _Result; 
#line 2254
va_list _ArgList; 
#line 2255
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2256
_Result = _vsscanf_l(_Buffer, _Format, _Locale, _ArgList); 
#line 2257
(void)(_ArgList = ((va_list)0)); 
#line 2258
return _Result; 
#line 2259
} 
#line 2263 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl sscanf(const char *const 
#line 2264
_Buffer, const char *const 
#line 2265
_Format, ...) 
#line 2270 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2271
int _Result; 
#line 2272
va_list _ArgList; 
#line 2273
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2274
_Result = _vsscanf_l(_Buffer, _Format, 0, _ArgList); 
#line 2275
(void)(_ArgList = ((va_list)0)); 
#line 2276
return _Result; 
#line 2277
} 
#line 2281 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _sscanf_s_l(const char *const 
#line 2282
_Buffer, const char *const 
#line 2283
_Format, const _locale_t 
#line 2284
_Locale, ...) 
#line 2289 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2290
int _Result; 
#line 2291
va_list _ArgList; 
#line 2292
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2293
_Result = _vsscanf_s_l(_Buffer, _Format, _Locale, _ArgList); 
#line 2294
(void)(_ArgList = ((va_list)0)); 
#line 2295
return _Result; 
#line 2296
} 
#line 2302 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl sscanf_s(const char *const 
#line 2303
_Buffer, const char *const 
#line 2304
_Format, ...) 
#line 2309 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2310
int _Result; 
#line 2311
va_list _ArgList; 
#line 2312
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2314
#pragma warning(push)
#pragma warning(disable: 4996)
_Result = vsscanf_s(_Buffer, _Format, _ArgList); 
#pragma warning(pop)
#line 2319
(void)(_ArgList = ((va_list)0)); 
#line 2320
return _Result; 
#line 2321
} 
#line 2326 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
#pragma warning(push)
#pragma warning(disable:6530)
#line 2330
__inline int __cdecl _snscanf_l(const char *const 
#line 2331
_Buffer, const size_t 
#line 2332
_BufferCount, const char *const 
#line 2333
_Format, const _locale_t 
#line 2334
_Locale, ...) 
#line 2339 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2340
int _Result; 
#line 2341
va_list _ArgList; 
#line 2342
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2344
_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2348
(void)(_ArgList = ((va_list)0)); 
#line 2349
return _Result; 
#line 2350
} 
#line 2354 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snscanf(const char *const 
#line 2355
_Buffer, const size_t 
#line 2356
_BufferCount, const char *const 
#line 2357
_Format, ...) 
#line 2362 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2363
int _Result; 
#line 2364
va_list _ArgList; 
#line 2365
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2367
_Result = __stdio_common_vsscanf(*__local_stdio_scanf_options(), _Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 2371
(void)(_ArgList = ((va_list)0)); 
#line 2372
return _Result; 
#line 2373
} 
#line 2378 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snscanf_s_l(const char *const 
#line 2379
_Buffer, const size_t 
#line 2380
_BufferCount, const char *const 
#line 2381
_Format, const _locale_t 
#line 2382
_Locale, ...) 
#line 2387 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2388
int _Result; 
#line 2389
va_list _ArgList; 
#line 2390
(void)(__vcrt_assert_va_start_is_not_reference< __crt_locale_pointers *const> (), ((void)__va_start(&_ArgList, _Locale))); 
#line 2392
_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, _Locale, _ArgList); 
#line 2396
(void)(_ArgList = ((va_list)0)); 
#line 2397
return _Result; 
#line 2398
} 
#line 2402 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
__inline int __cdecl _snscanf_s(const char *const 
#line 2403
_Buffer, const size_t 
#line 2404
_BufferCount, const char *const 
#line 2405
_Format, ...) 
#line 2410 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
{ 
#line 2411
int _Result; 
#line 2412
va_list _ArgList; 
#line 2413
(void)(__vcrt_assert_va_start_is_not_reference< const char *const> (), ((void)__va_start(&_ArgList, _Format))); 
#line 2415
_Result = __stdio_common_vsscanf((*__local_stdio_scanf_options()) | (1Ui64 << 0), _Buffer, _BufferCount, _Format, 0, _ArgList); 
#line 2419
(void)(_ArgList = ((va_list)0)); 
#line 2420
return _Result; 
#line 2421
} 
#line 2424 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
#pragma warning(pop)
#line 2447 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
char *__cdecl tempnam(const char * _Directory, const char * _FilePrefix); 
#line 2456 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
int __cdecl fcloseall(); 
#line 2457
FILE *__cdecl fdopen(int _FileHandle, const char * _Format); 
#line 2458
int __cdecl fgetchar(); 
#line 2459
int __cdecl fileno(FILE * _Stream); 
#line 2460
int __cdecl flushall(); 
#line 2461
int __cdecl fputchar(int _Ch); 
#line 2462
int __cdecl getw(FILE * _Stream); 
#line 2463
int __cdecl putw(int _Ch, FILE * _Stream); 
#line 2464
int __cdecl rmtmp(); 
#line 2471 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\stdio.h"
}__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\stdint.h"
typedef signed char int8_t; 
#line 18
typedef short int16_t; 
#line 19
typedef int int32_t; 
#line 20
typedef __int64 int64_t; 
#line 21
typedef unsigned char uint8_t; 
#line 22
typedef unsigned short uint16_t; 
#line 23
typedef unsigned uint32_t; 
#line 24
typedef unsigned __int64 uint64_t; 
#line 26
typedef signed char int_least8_t; 
#line 27
typedef short int_least16_t; 
#line 28
typedef int int_least32_t; 
#line 29
typedef __int64 int_least64_t; 
#line 30
typedef unsigned char uint_least8_t; 
#line 31
typedef unsigned short uint_least16_t; 
#line 32
typedef unsigned uint_least32_t; 
#line 33
typedef unsigned __int64 uint_least64_t; 
#line 35
typedef signed char int_fast8_t; 
#line 36
typedef int int_fast16_t; 
#line 37
typedef int int_fast32_t; 
#line 38
typedef __int64 int_fast64_t; 
#line 39
typedef unsigned char uint_fast8_t; 
#line 40
typedef unsigned uint_fast16_t; 
#line 41
typedef unsigned uint_fast32_t; 
#line 42
typedef unsigned __int64 uint_fast64_t; 
#line 44
typedef __int64 intmax_t; 
#line 45
typedef unsigned __int64 uintmax_t; 
#line 16 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\inttypes.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 29
typedef 
#line 26
struct { 
#line 27
intmax_t quot; 
#line 28
intmax_t rem; 
#line 29
} _Lldiv_t; 
#line 31
typedef _Lldiv_t imaxdiv_t; 
#line 41
intmax_t __cdecl imaxabs(intmax_t _Number); 
#line 46
imaxdiv_t __cdecl imaxdiv(intmax_t _Numerator, intmax_t _Denominator); 
#line 51
intmax_t __cdecl strtoimax(const char * _String, char ** _EndPtr, int _Radix); 
#line 57
intmax_t __cdecl _strtoimax_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 64
uintmax_t __cdecl strtoumax(const char * _String, char ** _EndPtr, int _Radix); 
#line 70
uintmax_t __cdecl _strtoumax_l(const char * _String, char ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 77
intmax_t __cdecl wcstoimax(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 83
intmax_t __cdecl _wcstoimax_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 90
uintmax_t __cdecl wcstoumax(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix); 
#line 96
uintmax_t __cdecl _wcstoumax_l(const __wchar_t * _String, __wchar_t ** _EndPtr, int _Radix, _locale_t _Locale); 
#line 328 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\inttypes.h"
}__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\sys/timeb.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 21
struct __timeb32 { 
#line 23
__time32_t time; 
#line 24
unsigned short millitm; 
#line 25
short timezone; 
#line 26
short dstflag; 
#line 27
}; 
#line 29
struct __timeb64 { 
#line 31
__time64_t time; 
#line 32
unsigned short millitm; 
#line 33
short timezone; 
#line 34
short dstflag; 
#line 35
}; 
#line 38
struct timeb { 
#line 40
time_t time; 
#line 41
unsigned short millitm; 
#line 42
short timezone; 
#line 43
short dstflag; 
#line 44
}; 
#line 67 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\sys/timeb.h"
void __cdecl _ftime32(__timeb32 * _Time); 
#line 71
errno_t __cdecl _ftime32_s(__timeb32 * _Time); 
#line 76
void __cdecl _ftime64(__timeb64 * _Time); 
#line 80
errno_t __cdecl _ftime64_s(__timeb64 * _Time); 
#line 88
#pragma warning(push)
#pragma warning(disable:4996)
#line 101
static __inline void __cdecl ftime(timeb *const _Tmb) 
#line 102
{ 
#line 103
typedef char __static_assert_t[(sizeof(timeb) == sizeof(__timeb64)) != 0]; 
#line 104
_ftime64((__timeb64 *)_Tmb); 
#line 105
} 
#line 115 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\sys/timeb.h"
}
#line 109 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\sys/timeb.h"
#pragma warning(pop)
#line 115 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\sys/timeb.h"
__pragma( pack ( pop )) 
#line 12 "C:\\Program Files (x86)\\Microsoft Visual Studio\\2017\\BuildTools\\VC\\Tools\\MSVC\\14.16.27023\\include\\vcruntime_startup.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 21
typedef 
#line 16
enum _crt_argv_mode { 
#line 18
_crt_argv_no_arguments, 
#line 19
_crt_argv_unexpanded_arguments, 
#line 20
_crt_argv_expanded_arguments
#line 21
} _crt_argv_mode; 
#line 27
typedef 
#line 23
enum _crt_exit_return_mode { 
#line 25
_crt_exit_terminate_process, 
#line 26
_crt_exit_return_to_caller
#line 27
} _crt_exit_return_mode; 
#line 34
typedef 
#line 29
enum _crt_exit_cleanup_mode { 
#line 31
_crt_exit_full_cleanup, 
#line 32
_crt_exit_quick_cleanup, 
#line 33
_crt_exit_no_cleanup
#line 34
} _crt_exit_cleanup_mode; 
#line 36
extern _crt_exit_return_mode __current_exit_return_mode; 
#line 40
__vcrt_bool __cdecl __vcrt_initialize(); 
#line 41
__vcrt_bool __cdecl __vcrt_uninitialize(__vcrt_bool _Terminating); 
#line 42
__vcrt_bool __cdecl __vcrt_uninitialize_critical(); 
#line 43
__vcrt_bool __cdecl __vcrt_thread_attach(); 
#line 44
__vcrt_bool __cdecl __vcrt_thread_detach(); 
#line 46
int __cdecl __isa_available_init(); 
#line 47
_crt_argv_mode __cdecl _get_startup_argv_mode(); 
#line 51
}__pragma( pack ( pop )) 
#line 15 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_startup.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 24
struct _EXCEPTION_POINTERS; 
#line 26
int __cdecl _seh_filter_dll(unsigned long _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr); 
#line 31
int __cdecl _seh_filter_exe(unsigned long _ExceptionNum, _EXCEPTION_POINTERS * _ExceptionPtr); 
#line 48
typedef 
#line 43
enum _crt_app_type { 
#line 45
_crt_unknown_app, 
#line 46
_crt_console_app, 
#line 47
_crt_gui_app
#line 48
} _crt_app_type; 
#line 50
_crt_app_type __cdecl _query_app_type(); 
#line 52
void __cdecl _set_app_type(_crt_app_type _Type); 
#line 56
typedef int (__cdecl *_UserMathErrorFunctionPointer)(_exception *); 
#line 58
void __cdecl __setusermatherr(_UserMathErrorFunctionPointer _UserMathErrorFunction); 
#line 62
int __cdecl _is_c_termination_complete(); 
#line 71
errno_t __cdecl _configure_narrow_argv(_crt_argv_mode mode); 
#line 75
errno_t __cdecl _configure_wide_argv(_crt_argv_mode mode); 
#line 81
int __cdecl _initialize_narrow_environment(); 
#line 82
int __cdecl _initialize_wide_environment(); 
#line 84
char **__cdecl _get_initial_narrow_environment(); 
#line 85
__wchar_t **__cdecl _get_initial_wide_environment(); 
#line 87
char *__cdecl _get_narrow_winmain_command_line(); 
#line 88
__wchar_t *__cdecl _get_wide_winmain_command_line(); 
#line 90
char **__cdecl __p__acmdln(); 
#line 91
__wchar_t **__cdecl __p__wcmdln(); 
#line 108 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_startup.h"
typedef void (__cdecl *_PVFV)(void); 
#line 109
typedef int (__cdecl *_PIFV)(void); 
#line 110
typedef void (__cdecl *_PVFI)(int); 
#line 113
void __cdecl _initterm(_PVFV * _First, _PVFV * _Last); 
#line 118
int __cdecl _initterm_e(_PIFV * _First, _PIFV * _Last); 
#line 138 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_startup.h"
typedef 
#line 133
struct _onexit_table_t { 
#line 135
_PVFV *_first; 
#line 136
_PVFV *_last; 
#line 137
_PVFV *_end; 
#line 138
} _onexit_table_t; 
#line 140
int __cdecl _initialize_onexit_table(_onexit_table_t * _Table); 
#line 144
int __cdecl _register_onexit_function(_onexit_table_t * _Table, _onexit_t _Function); 
#line 149
int __cdecl _execute_onexit_table(_onexit_table_t * _Table); 
#line 153
int __cdecl _crt_atexit(_PVFV _Function); 
#line 157
int __cdecl _crt_at_quick_exit(_PVFV _Function); 
#line 171
__crt_bool __cdecl __acrt_initialize(); 
#line 174
__crt_bool __cdecl __acrt_uninitialize(__crt_bool _Terminating); 
#line 179
__crt_bool __cdecl __acrt_uninitialize_critical(__crt_bool _Terminating); 
#line 184
__crt_bool __cdecl __acrt_thread_attach(); 
#line 187
__crt_bool __cdecl __acrt_thread_detach(); 
#line 193 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_startup.h"
}__pragma( pack ( pop )) 
#line 13 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wprocess.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 20
intptr_t __cdecl _wexecl(const __wchar_t * _FileName, const __wchar_t * _ArgList, ...); 
#line 25
intptr_t __cdecl _wexecle(const __wchar_t * _FileName, const __wchar_t * _ArgList, ...); 
#line 30
intptr_t __cdecl _wexeclp(const __wchar_t * _FileName, const __wchar_t * _ArgList, ...); 
#line 35
intptr_t __cdecl _wexeclpe(const __wchar_t * _FileName, const __wchar_t * _ArgList, ...); 
#line 40
intptr_t __cdecl _wexecv(const __wchar_t * _FileName, const __wchar_t *const * _ArgList); 
#line 45
intptr_t __cdecl _wexecve(const __wchar_t * _FileName, const __wchar_t *const * _ArgList, const __wchar_t *const * _Env); 
#line 51
intptr_t __cdecl _wexecvp(const __wchar_t * _FileName, const __wchar_t *const * _ArgList); 
#line 56
intptr_t __cdecl _wexecvpe(const __wchar_t * _FileName, const __wchar_t *const * _ArgList, const __wchar_t *const * _Env); 
#line 62
intptr_t __cdecl _wspawnl(int _Mode, const __wchar_t * _FileName, const __wchar_t * _ArgList, ...); 
#line 68
intptr_t __cdecl _wspawnle(int _Mode, const __wchar_t * _FileName, const __wchar_t * _ArgList, ...); 
#line 74
intptr_t __cdecl _wspawnlp(int _Mode, const __wchar_t * _FileName, const __wchar_t * _ArgList, ...); 
#line 80
intptr_t __cdecl _wspawnlpe(int _Mode, const __wchar_t * _FileName, const __wchar_t * _ArgList, ...); 
#line 86
intptr_t __cdecl _wspawnv(int _Mode, const __wchar_t * _FileName, const __wchar_t *const * _ArgList); 
#line 92
intptr_t __cdecl _wspawnve(int _Mode, const __wchar_t * _FileName, const __wchar_t *const * _ArgList, const __wchar_t *const * _Env); 
#line 99
intptr_t __cdecl _wspawnvp(int _Mode, const __wchar_t * _FileName, const __wchar_t *const * _ArgList); 
#line 105
intptr_t __cdecl _wspawnvpe(int _Mode, const __wchar_t * _FileName, const __wchar_t *const * _ArgList, const __wchar_t *const * _Env); 
#line 112
int __cdecl _wsystem(const __wchar_t * _Command); 
#line 121 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_wprocess.h"
}__pragma( pack ( pop )) 
#line 17 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\process.h"
__pragma( pack ( push, 8 )) extern "C" {
#line 38
__declspec(noreturn) void __cdecl exit(int _Code); 
#line 39
__declspec(noreturn) void __cdecl _exit(int _Code); 
#line 40
__declspec(noreturn) void __cdecl _Exit(int _Code); 
#line 41
__declspec(noreturn) void __cdecl quick_exit(int _Code); 
#line 42
__declspec(noreturn) void __cdecl abort(); 
#line 44
int __cdecl system(const char * _Command); 
#line 46
void __cdecl _cexit(); 
#line 47
void __cdecl _c_exit(); 
#line 49
typedef void (__stdcall *_tls_callback_type)(void *, unsigned long, void *); 
#line 50
void __cdecl _register_thread_local_exe_atexit_callback(_tls_callback_type _Callback); 
#line 80 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\process.h"
typedef void (__cdecl *_beginthread_proc_type)(void *); 
#line 81
typedef unsigned (__stdcall *_beginthreadex_proc_type)(void *); 
#line 83
uintptr_t __cdecl _beginthread(_beginthread_proc_type _StartAddress, unsigned _StackSize, void * _ArgList); 
#line 89
void __cdecl _endthread(); 
#line 92
uintptr_t __cdecl _beginthreadex(void * _Security, unsigned _StackSize, _beginthreadex_proc_type _StartAddress, void * _ArgList, unsigned _InitFlag, unsigned * _ThrdAddr); 
#line 101
void __cdecl _endthreadex(unsigned _ReturnCode); 
#line 109
int __cdecl _getpid(); 
#line 111
intptr_t __cdecl _cwait(int * _TermStat, intptr_t _ProcHandle, int _Action); 
#line 117
intptr_t __cdecl _execl(const char * _FileName, const char * _Arguments, ...); 
#line 122
intptr_t __cdecl _execle(const char * _FileName, const char * _Arguments, ...); 
#line 127
intptr_t __cdecl _execlp(const char * _FileName, const char * _Arguments, ...); 
#line 132
intptr_t __cdecl _execlpe(const char * _FileName, const char * _Arguments, ...); 
#line 137
intptr_t __cdecl _execv(const char * _FileName, const char *const * _Arguments); 
#line 142
intptr_t __cdecl _execve(const char * _FileName, const char *const * _Arguments, const char *const * _Environment); 
#line 148
intptr_t __cdecl _execvp(const char * _FileName, const char *const * _Arguments); 
#line 153
intptr_t __cdecl _execvpe(const char * _FileName, const char *const * _Arguments, const char *const * _Environment); 
#line 159
intptr_t __cdecl _spawnl(int _Mode, const char * _FileName, const char * _Arguments, ...); 
#line 165
intptr_t __cdecl _spawnle(int _Mode, const char * _FileName, const char * _Arguments, ...); 
#line 171
intptr_t __cdecl _spawnlp(int _Mode, const char * _FileName, const char * _Arguments, ...); 
#line 177
intptr_t __cdecl _spawnlpe(int _Mode, const char * _FileName, const char * _Arguments, ...); 
#line 183
intptr_t __cdecl _spawnv(int _Mode, const char * _FileName, const char *const * _Arguments); 
#line 189
intptr_t __cdecl _spawnve(int _Mode, const char * _FileName, const char *const * _Arguments, const char *const * _Environment); 
#line 196
intptr_t __cdecl _spawnvp(int _Mode, const char * _FileName, const char *const * _Arguments); 
#line 202
intptr_t __cdecl _spawnvpe(int _Mode, const char * _FileName, const char *const * _Arguments, const char *const * _Environment); 
#line 209
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using LoadLibrary ins" "tead. See online help for details.")) intptr_t __cdecl 
#line 210
_loaddll(char * _FileName); 
#line 214
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using FreeLibrary ins" "tead. See online help for details.")) int __cdecl 
#line 215
_unloaddll(intptr_t _Handle); 
#line 219
typedef int (__cdecl *_GetDllProcAddrProcType)(void); 
#line 221
__declspec(deprecated("This function or variable has been superceded by newer library or operating system functionality. Consider using GetProcAddress " "instead. See online help for details.")) _GetDllProcAddrProcType __cdecl 
#line 222
_getdllprocaddr(intptr_t _Handle, char * _ProcedureName, intptr_t _Ordinal); 
#line 246 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\process.h"
intptr_t __cdecl cwait(int * _TermStat, intptr_t _ProcHandle, int _Action); 
#line 253
intptr_t __cdecl execl(const char * _FileName, const char * _Arguments, ...); 
#line 259
intptr_t __cdecl execle(const char * _FileName, const char * _Arguments, ...); 
#line 265
intptr_t __cdecl execlp(const char * _FileName, const char * _Arguments, ...); 
#line 271
intptr_t __cdecl execlpe(const char * _FileName, const char * _Arguments, ...); 
#line 277
intptr_t __cdecl execv(const char * _FileName, const char *const * _Arguments); 
#line 283
intptr_t __cdecl execve(const char * _FileName, const char *const * _Arguments, const char *const * _Environment); 
#line 290
intptr_t __cdecl execvp(const char * _FileName, const char *const * _Arguments); 
#line 296
intptr_t __cdecl execvpe(const char * _FileName, const char *const * _Arguments, const char *const * _Environment); 
#line 303
intptr_t __cdecl spawnl(int _Mode, const char * _FileName, const char * _Arguments, ...); 
#line 310
intptr_t __cdecl spawnle(int _Mode, const char * _FileName, const char * _Arguments, ...); 
#line 317
intptr_t __cdecl spawnlp(int _Mode, const char * _FileName, const char * _Arguments, ...); 
#line 324
intptr_t __cdecl spawnlpe(int _Mode, const char * _FileName, const char * _Arguments, ...); 
#line 331
intptr_t __cdecl spawnv(int _Mode, const char * _FileName, const char *const * _Arguments); 
#line 337
intptr_t __cdecl spawnve(int _Mode, const char * _FileName, const char *const * _Arguments, const char *const * _Environment); 
#line 345
intptr_t __cdecl spawnvp(int _Mode, const char * _FileName, const char *const * _Arguments); 
#line 352
intptr_t __cdecl spawnvpe(int _Mode, const char * _FileName, const char *const * _Arguments, const char *const * _Environment); 
#line 360
int __cdecl getpid(); 
#line 368 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\process.h"
}__pragma( pack ( pop )) 
#line 43 "d:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.h"
extern uint8_t solution[32]; 
#line 44
extern uint64_t *h_message; 
#line 47
void gpu_mine(uint64_t * solution, uint64_t cnt); 
#line 50
void stop_solving(); 
#line 53
uint64_t getHashCount(); 
#line 56
void resetHashCount(); 
#line 59
void send_to_device(uint64_t target, uint64_t * message); 
#line 62
void gpu_init(); 
#line 65
void update_mining_inputs(uint64_t target, uint8_t * hash_prefix); 
#line 68
void gpu_cleanup(); 
#line 71
bool find_message(); 
#line 25 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
bool h_HBoptimizations[8] = {(0)}; 
#line 40
int32_t intensity; 
#line 41
int32_t cuda_device; 
#line 42
int32_t clock_speed; 
#line 43
int32_t compute_version; 
#line 44
timeb start, end; 
#line 46
uint64_t cnt; 
#line 47
uint64_t printable_hashrate_cnt; 
#line 48
uint64_t print_counter; 
#line 50
bool gpu_initialized; 
#line 51
bool new_input; 
#line 53
uint8_t solution[32] = {(0)}; 
#line 55
uint64_t *h_message; 
#line 56
uint8_t init_message[84]; 
#line 58
uint64_t *d_solution; 
#line 60
uint8_t *d_challenge; 
#line 61
uint8_t *d_hash_prefix; 
#line 62
static uint64_t d_mid[25]; 
#line 63
static uint64_t d_target; 
#line 64
static uint32_t threads; 
#line 65
static bool d_HBoptimizations[8]; 
#line 68
__forceinline uint64_t bswap_64(uint64_t input) {int volatile ___ = 1;(void)input;::exit(___);}
#if 0
#line 69
{ 
#line 70
__asm {  .reg .u32 oh, ol;  mov.b64 {oh,ol}, %0;  prmt.b32 oh, oh, 0, 0x0123;  prmt.b32 ol, ol, 0, 0x0123;  mov.b64 %0, {ol,oh};}
#line 77
return input; 
#line 78
} 
#endif
#line 82 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTL64asm(uint64_t input, uint32_t magnitude) {int volatile ___ = 1;(void)input;(void)magnitude;::exit(___);}
#if 0
#line 83
{ 
#line 84
__asm {.reg .b32 hi, lo, mag, scr;mov.b32 mag, %1;mov.b64 {hi,lo}, %0;shf.l.wrap.b32 scr, lo, hi, mag;shf.l.wrap.b32 lo, hi, lo, mag;mov.b64 %0, {scr,lo};}
#line 92
return input; 
#line 93
} 
#endif
#line 97 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTR64asm(uint64_t input, uint32_t magnitude) {int volatile ___ = 1;(void)input;(void)magnitude;::exit(___);}
#if 0
#line 98
{ 
#line 99
__asm {.reg .b32 hi, lo, mag, scr;mov.b32 mag, %1;mov.b64 {hi,lo}, %0;shf.r.wrap.b32 scr, hi, lo, mag;shf.r.wrap.b32 lo, lo, hi, mag;mov.b64 %0, {scr,lo};}
#line 107
return input; 
#line 108
} 
#endif
#line 111 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t xor5(uint64_t a, uint64_t b, uint64_t c, uint64_t d, uint64_t e) {int volatile ___ = 1;(void)a;(void)b;(void)c;(void)d;(void)e;::exit(___);}
#if 0
#line 112
{ 
#line 113
__asm   xor.b64 %0, %0, %1;
__asm   xor.b64 %0, %0, %1;
__asm   xor.b64 %0, %0, %1;
__asm   xor.b64 %0, %0, %1;
return a; 
#line 118
} 
#endif
#line 122 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTLfrom32(uint64_t rtdby32, uint32_t magnitude) {int volatile ___ = 1;(void)rtdby32;(void)magnitude;::exit(___);}
#if 0
#line 123
{ 
#line 124
__asm {    .reg .b32 hi, lo, scr, mag;           mov.b64 {lo,hi}, %0;                  mov.b32 mag, %1;                      shf.l.wrap.b32 scr, lo, hi, mag;      shf.l.wrap.b32 lo, hi, lo, mag;       mov.b64 %0, {scr,lo};             }
#line 133
return rtdby32; 
#line 134
} 
#endif
#line 138 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTRfrom32(uint64_t rtdby32, uint32_t magnitude) {int volatile ___ = 1;(void)rtdby32;(void)magnitude;::exit(___);}
#if 0
#line 139
{ 
#line 140
__asm {    .reg .b32 hi, lo, scr, mag;           mov.b64 {lo,hi}, %0;                  mov.b32 mag, %1;                      shf.r.wrap.b32 scr, hi, lo, mag;      shf.r.wrap.b32 lo, lo, hi, mag;       mov.b64 %0, {scr,lo};             }
#line 149
return rtdby32; 
#line 150
} 
#endif
#line 153 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTLby16(uint64_t input) {int volatile ___ = 1;(void)input;::exit(___);}
#if 0
#line 154
{ 
#line 155
__asm {   .reg .b32 hi, lo, scr;   mov.b64 {hi,lo}, %0;   prmt.b32 scr, hi, lo, 0x5432;   prmt.b32 lo, hi, lo, 0x1076;   mov.b64 %0, {lo,scr}; }
#line 162
return input; 
#line 163
} 
#endif
#line 167 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTLby8(uint64_t input) {int volatile ___ = 1;(void)input;::exit(___);}
#if 0
#line 168
{ 
#line 169
__asm {.reg .b32 hi, lo, scr;mov.b64 {hi,lo}, %0;prmt.b32 scr, hi, lo, 0x2107;prmt.b32 lo, hi, lo, 0x6543;mov.b64 %0, {scr,lo};}
#line 177
return input; 
#line 178
} 
#endif
#line 181 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTRby8(uint64_t input) {int volatile ___ = 1;(void)input;::exit(___);}
#if 0
#line 182
{ 
#line 183
__asm {.reg .b32 hi, lo, scr;mov.b64 {hi,lo}, %0;prmt.b32 scr, lo, hi, 0x0765;prmt.b32 lo, lo, hi, 0x4321;mov.b64 %0, {scr,lo};}
#line 191
return input; 
#line 192
} 
#endif
#line 197 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTLby1(uint64_t input) {int volatile ___ = 1;(void)input;::exit(___);}
#if 0
#line 198
{ 
#line 199
__asm {.reg .b32 hi, lo, scr;mov.b64 {hi,lo}, %0;shf.l.wrap.b32 scr, lo, hi, 1;shf.l.wrap.b32 lo, hi, lo, 1;mov.b64 %0, {scr,lo};}
#line 206
return input; 
#line 207
} 
#endif
#line 211 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t ROTRby1(uint64_t input) {int volatile ___ = 1;(void)input;::exit(___);}
#if 0
#line 212
{ 
#line 213
__asm {.reg .b32 hi, lo, scr;mov.b64 {hi,lo}, %0;shf.r.wrap.b32 scr, hi, lo, 1;shf.r.wrap.b32 lo, lo, hi, 1;mov.b64 %0, {scr,lo};}
#line 220
return input; 
#line 221
} 
#endif
#line 224 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t xor3(uint64_t a, uint64_t b, uint64_t c) {int volatile ___ = 1;(void)a;(void)b;(void)c;::exit(___);}
#if 0
#line 225
{ 
#line 226
uint64_t output{(0)}; 
#line 227
__asm {  xor.b64 %0, %1, %2;  xor.b64 %0, %0, %3;}
#line 231
return output; 
#line 232
} 
#endif
#line 236 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
__forceinline uint64_t lop3_0xD2(uint64_t a, uint64_t b, uint64_t c) {int volatile ___ = 1;(void)a;(void)b;(void)c;::exit(___);}
#if 0
#line 237
{ 
#line 239
__asm {  .reg .b32 ah, al, bh, bl, ch, cl;  mov.b64 {ah,al}, %0;  mov.b64 {bh,bl}, %1;  mov.b64 {ch,cl}, %2;  lop3.b32 ah, ah, bh, ch, 0xD2;  lop3.b32 al, al, bl, cl, 0xD2;  mov.b64 %0, {ah,al};}
#line 249
return a; 
#line 253
} 
#endif
#line 256 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
bool keccak(uint64_t nonce, uint32_t thread, uint64_t i_mid[], bool optimizations[]) {int volatile ___ = 1;(void)nonce;(void)thread;(void)i_mid;(void)optimizations;::exit(___);}
#if 0
#line 257
{ 
#line 258
uint64_t state[25], C[5], D[5], scratch; 
#line 262
uint64_t RClocal[24] = {(1), (32898), 9223372036854808714Ui64, 9223372039002292224Ui64, (32907), (2147483649U), 9223372039002292353Ui64, 9223372036854808585Ui64, (138), (136), (2147516425U), (2147483658U), (2147516555U), 9223372036854775947Ui64, 9223372036854808713Ui64, 9223372036854808579Ui64, 9223372036854808578Ui64, 9223372036854775936Ui64, (32778), 9223372039002259466Ui64, 9223372039002292353Ui64, 9223372036854808704Ui64, (2147483649U), 9223372039002292232Ui64}; 
#line 280
uint2 *stateVec = (uint2 *)(&state); 
#line 285
(C[0]) = ((i_mid[2]) ^ ROTR64asm(nonce, 20)); 
#line 286
(C[1]) = ((i_mid[4]) ^ ROTL64asm(nonce, 14)); 
#line 288
(state[0]) = lop3_0xD2(i_mid[0], i_mid[1], C[0]); 
#line 293 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
(state[0]) = ((state[0]) ^ (1)); 
#line 296 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
(state[1]) = lop3_0xD2(i_mid[1], C[0], i_mid[3]); 
#line 297
(state[2]) = lop3_0xD2(C[0], i_mid[3], C[1]); 
#line 298
(state[3]) = lop3_0xD2(i_mid[3], C[1], i_mid[0]); 
#line 299
(state[4]) = lop3_0xD2(C[1], i_mid[0], i_mid[1]); 
#line 301
(C[0]) = ((i_mid[6]) ^ ROTL64asm(nonce, 20)); 
#line 302
(C[1]) = ((i_mid[9]) ^ ((nonce >> 2) ^ (nonce << (64 - 2)))); 
#line 303
(state[5]) = lop3_0xD2(i_mid[5], C[0], i_mid[7]); 
#line 304
(state[6]) = lop3_0xD2(C[0], i_mid[7], i_mid[8]); 
#line 305
(state[7]) = lop3_0xD2(i_mid[7], i_mid[8], C[1]); 
#line 306
(state[8]) = lop3_0xD2(i_mid[8], C[1], i_mid[5]); 
#line 307
(state[9]) = lop3_0xD2(C[1], i_mid[5], C[0]); 
#line 310
scratch = (nonce * (128)); 
#line 311
(C[0]) = ((i_mid[11]) ^ scratch); 
#line 312
(C[1]) = ((i_mid[13]) ^ (scratch * (2))); 
#line 313
(state[10]) = lop3_0xD2(i_mid[10], C[0], i_mid[12]); 
#line 314
(state[11]) = lop3_0xD2(C[0], i_mid[12], C[1]); 
#line 315
(state[12]) = lop3_0xD2(i_mid[12], C[1], i_mid[14]); 
#line 316
(state[13]) = lop3_0xD2(C[1], i_mid[14], i_mid[10]); 
#line 317
(state[14]) = lop3_0xD2(i_mid[14], i_mid[10], C[0]); 
#line 319
(C[0]) = ((i_mid[15]) ^ ROTL64asm(nonce, 27)); 
#line 320
(C[1]) = ((i_mid[18]) ^ ROTLby16(nonce)); 
#line 321
(state[15]) = lop3_0xD2(C[0], i_mid[16], i_mid[17]); 
#line 322
(state[16]) = lop3_0xD2(i_mid[16], i_mid[17], C[1]); 
#line 323
(state[17]) = lop3_0xD2(i_mid[17], C[1], i_mid[19]); 
#line 324
(state[18]) = lop3_0xD2(C[1], i_mid[19], C[0]); 
#line 325
(state[19]) = lop3_0xD2(i_mid[19], C[0], i_mid[16]); 
#line 327
(C[0]) = ((i_mid[20]) ^ ROTRby1(nonce)); 
#line 328
(C[1]) = ((i_mid[21]) ^ ((nonce >> 9) ^ (nonce << (64 - 9)))); 
#line 329
(C[2]) = ((i_mid[22]) ^ ((nonce >> 25) ^ (nonce << (64 - 25)))); 
#line 330
(state[20]) = lop3_0xD2(C[0], C[1], C[2]); 
#line 331
(state[21]) = lop3_0xD2(C[1], C[2], i_mid[23]); 
#line 332
(state[22]) = lop3_0xD2(C[2], i_mid[23], i_mid[24]); 
#line 333
(state[23]) = lop3_0xD2(i_mid[23], i_mid[24], C[0]); 
#line 334
(state[24]) = lop3_0xD2(i_mid[24], C[0], C[1]); 
#line 340 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
for (int32_t i{1}; i < 23; ++i) 
#line 341
{ 
#line 343
for (uint32_t x{(0)}; x < (5); ++x) 
#line 344
{ 
#line 345
(C[(x + (6)) % (5)]) = xor5(state[x], state[x + (5)], state[x + (10)], state[x + (15)], state[x + (20)]); 
#line 346
}  
#line 359 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
for (uint32_t x{(0)}; x < (5); ++x) 
#line 360
{ 
#line 361
(D[x]) = ((((C[(x + (2)) % (5)]) << 1) ^ ((C[(x + (2)) % (5)]) >> (64 - 1))) ^ (C[x])); 
#line 362
(state[x]) = ((state[x]) ^ (D[x])); 
#line 363
(state[x + (5)]) = ((state[x + (5)]) ^ (D[x])); 
#line 364
(state[x + (10)]) = ((state[x + (10)]) ^ (D[x])); 
#line 365
(state[x + (15)]) = ((state[x + (15)]) ^ (D[x])); 
#line 366
(state[x + (20)]) = ((state[x + (20)]) ^ (D[x])); 
#line 367
}  
#line 371 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
(C[0]) = (state[1]); 
#line 372
(state[1]) = ROTR64asm(state[6], 20); 
#line 373
(state[6]) = ROTL64asm(state[9], 20); 
#line 374
(state[9]) = (((state[22]) >> 3) ^ ((state[22]) << (64 - 3))); 
#line 375
(state[22]) = ROTR64asm(state[14], 25); 
#line 376
(state[14]) = ROTL64asm(state[20], 18); 
#line 377
(state[20]) = (((state[2]) >> 2) ^ ((state[2]) << (64 - 2))); 
#line 378
(state[2]) = ROTR64asm(state[12], 21); 
#line 379
(state[12]) = ROTL64asm(state[13], 25); 
#line 380
(state[13]) = ROTLby8(state[19]); 
#line 381
(state[19]) = ROTRby8(state[23]); 
#line 382
(state[23]) = ROTR64asm(state[15], 23); 
#line 386
(state[15]) = ROTRfrom32(state[4], 5); 
#line 397
(state[4]) = ROTL64asm(state[24], 14); 
#line 398
(state[24]) = (((state[21]) << 2) ^ ((state[21]) >> (64 - 2))); 
#line 399
(state[21]) = (((state[8]) >> 9) ^ ((state[8]) << (64 - 9))); 
#line 400
(state[8]) = ROTR64asm(state[16], 19); 
#line 405
(state[16]) = ROTLfrom32(state[5], 4); 
#line 406
(state[5]) = ROTRfrom32(state[3], 4); 
#line 414
(state[3]) = ROTL64asm(state[18], 21); 
#line 415
(state[18]) = ROTL64asm(state[17], 15); 
#line 416
(state[17]) = ROTL64asm(state[11], 10); 
#line 417
(state[11]) = (((state[7]) << 6) ^ ((state[7]) >> (64 - 6))); 
#line 418
(state[7]) = (((state[10]) << 3) ^ ((state[10]) >> (64 - 3))); 
#line 419
(state[10]) = ROTLby1(C[0]); 
#line 422
for (uint32_t x{(0)}; x < (25); x += (5)) 
#line 423
{ 
#line 424
(C[0]) = (state[x]); 
#line 425
(C[1]) = (state[x + (1)]); 
#line 426
(C[2]) = (state[x + (2)]); 
#line 427
(C[3]) = (state[x + (3)]); 
#line 428
(C[4]) = (state[x + (4)]); 
#line 429
(state[x]) = lop3_0xD2(C[0], C[1], C[2]); 
#line 430
(state[x + (1)]) = lop3_0xD2(C[1], C[2], C[3]); 
#line 431
(state[x + (2)]) = lop3_0xD2(C[2], C[3], C[4]); 
#line 432
(state[x + (3)]) = lop3_0xD2(C[3], C[4], C[0]); 
#line 433
(state[x + (4)]) = lop3_0xD2(C[4], C[0], C[1]); 
#line 434
}  
#line 437
(state[0]) = ((state[0]) ^ (RClocal[i])); 
#line 438
}  
#line 440
for (uint32_t x{(0)}; x < (5); ++x) 
#line 441
{ 
#line 442
(C[(x + (6)) % (5)]) = xor5(state[x], state[x + (5)], state[x + (10)], state[x + (15)], state[x + (20)]); 
#line 443
}  
#line 445
(D[0]) = ROTLby1(C[2]); 
#line 446
(D[1]) = ROTLby1(C[3]); 
#line 447
(D[2]) = ROTLby1(C[4]); 
#line 449
(state[0]) = xor3(state[0], D[0], C[0]); 
#line 450
(state[6]) = ROTR64asm(xor3(state[6], D[1], C[1]), 20); 
#line 451
(state[12]) = ((xor3(state[12], D[2], C[2]) >> 21) ^ (xor3(state[12], D[2], C[2]) << (64 - 21))); 
#line 453
(state[0]) = (lop3_0xD2(state[0], state[6], state[12]) ^ 9223372039002292232Ui64); 
#line 455
return bswap_64(state[0]) <= d_target; 
#line 456
} 
#endif
#line 459 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
void gpu_mine(uint64_t *solution, uint64_t cnt) ;
#if 0
#line 460
{ 
#line 461
uint64_t thread = ((__device_builtin_variable_blockDim.x) * (__device_builtin_variable_blockIdx.x)) + (__device_builtin_variable_threadIdx.x); 
#line 462
uint64_t nonce{cnt + thread}; 
#line 463
uint64_t passingMid[25]; 
#line 464
bool passingOptimizations[8]; 
#line 465
uint8_t i; 
#line 468
for (i = (0); i < 8; ++i) { 
#line 469
(passingOptimizations[i]) = (d_HBoptimizations[i]); }  
#line 472
for (i = (0); i < 25; ++i) { 
#line 473
(passingMid[i]) = (d_mid[i]); }  
#line 475
if (keccak(nonce, thread, passingMid, passingOptimizations)) 
#line 476
{ 
#line 477
(*solution) = nonce; 
#line 478
return; 
#line 479
}  
#line 480
} 
#endif
#line 483 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
void stop_solving() 
#line 484
{ 
#line 486
} 
#line 489
uint64_t getHashCount() 
#line 490
{ 
#line 491
return cnt; 
#line 492
} 
#line 495
void resetHashCount() 
#line 496
{ 
#line 497
cudaSetDevice(cuda_device); 
#line 499
(*h_message) = 18446744073709551615Ui64; 
#line 500
cudaMemcpy(d_solution, h_message, 8, cudaMemcpyHostToDevice); 
#line 503
printable_hashrate_cnt = (0); 
#line 504
print_counter = (0); 
#line 506
ftime(&start); 
#line 507
} 
#line 510
void send_to_device(uint64_t target, uint64_t *message) 
#line 511
{ 
#line 512
cudaSetDevice(cuda_device); 
#line 514
uint64_t C[4], D[5], mid[25]; 
#line 515
(C[0]) = ((((message[0]) ^ (message[5])) ^ (message[10])) ^ 4294967296Ui64); 
#line 516
(C[1]) = (((message[1]) ^ (message[6])) ^ 9223372036854775808Ui64); 
#line 517
(C[2]) = ((message[2]) ^ (message[7])); 
#line 518
(C[3]) = ((message[4]) ^ (message[9])); 
#line 520
(D[0]) = ((((C[1]) << 1) ^ ((C[1]) >> (64 - 1))) ^ (C[3])); 
#line 521
(D[1]) = ((((C[2]) << 1) ^ ((C[2]) >> (64 - 1))) ^ (C[0])); 
#line 522
(D[2]) = ((((message[3]) << 1) ^ ((message[3]) >> (64 - 1))) ^ (C[1])); 
#line 523
(D[3]) = ((((C[3]) << 1) ^ ((C[3]) >> (64 - 1))) ^ (C[2])); 
#line 524
(D[4]) = ((((C[0]) << 1) ^ ((C[0]) >> (64 - 1))) ^ (message[3])); 
#line 526
(mid[0]) = ((message[0]) ^ (D[0])); 
#line 527
(mid[1]) = ((((message[6]) ^ (D[1])) << 44) ^ (((message[6]) ^ (D[1])) >> (64 - 44))); 
#line 528
(mid[2]) = (((D[2]) << 43) ^ ((D[2]) >> (64 - 43))); 
#line 529
(mid[3]) = (((D[3]) << 21) ^ ((D[3]) >> (64 - 21))); 
#line 530
(mid[4]) = (((D[4]) << 14) ^ ((D[4]) >> (64 - 14))); 
#line 531
(mid[5]) = ((((message[3]) ^ (D[3])) << 28) ^ (((message[3]) ^ (D[3])) >> (64 - 28))); 
#line 532
(mid[6]) = ((((message[9]) ^ (D[4])) << 20) ^ (((message[9]) ^ (D[4])) >> (64 - 20))); 
#line 533
(mid[7]) = (((((message[10]) ^ (D[0])) ^ 4294967296Ui64) << 3) ^ ((((message[10]) ^ (D[0])) ^ 4294967296Ui64) >> (64 - 3))); 
#line 534
(mid[8]) = (((9223372036854775808Ui64 ^ (D[1])) << 45) ^ ((9223372036854775808Ui64 ^ (D[1])) >> (64 - 45))); 
#line 535
(mid[9]) = (((D[2]) << 61) ^ ((D[2]) >> (64 - 61))); 
#line 536
(mid[10]) = ((((message[1]) ^ (D[1])) << 1) ^ (((message[1]) ^ (D[1])) >> (64 - 1))); 
#line 537
(mid[11]) = ((((message[7]) ^ (D[2])) << 6) ^ (((message[7]) ^ (D[2])) >> (64 - 6))); 
#line 538
(mid[12]) = (((D[3]) << 25) ^ ((D[3]) >> (64 - 25))); 
#line 539
(mid[13]) = (((D[4]) << 8) ^ ((D[4]) >> (64 - 8))); 
#line 540
(mid[14]) = (((D[0]) << 18) ^ ((D[0]) >> (64 - 18))); 
#line 541
(mid[15]) = ((((message[4]) ^ (D[4])) << 27) ^ (((message[4]) ^ (D[4])) >> (64 - 27))); 
#line 542
(mid[16]) = ((((message[5]) ^ (D[0])) << 36) ^ (((message[5]) ^ (D[0])) >> (64 - 36))); 
#line 543
(mid[17]) = (((D[1]) << 10) ^ ((D[1]) >> (64 - 10))); 
#line 544
(mid[18]) = (((D[2]) << 15) ^ ((D[2]) >> (64 - 15))); 
#line 545
(mid[19]) = (((D[3]) << 56) ^ ((D[3]) >> (64 - 56))); 
#line 546
(mid[20]) = ((((message[2]) ^ (D[2])) << 62) ^ (((message[2]) ^ (D[2])) >> (64 - 62))); 
#line 547
(mid[21]) = (((D[3]) << 55) ^ ((D[3]) >> (64 - 55))); 
#line 548
(mid[22]) = (((D[4]) << 39) ^ ((D[4]) >> (64 - 39))); 
#line 549
(mid[23]) = (((D[0]) << 41) ^ ((D[0]) >> (64 - 41))); 
#line 550
(mid[24]) = (((D[1]) << 2) ^ ((D[1]) >> (64 - 2))); 
#line 552
cudaMemcpyToSymbol(d_mid, mid, sizeof mid, 0, cudaMemcpyHostToDevice); 
#line 554
cudaMemcpyToSymbol(d_target, &target, sizeof target, 0, cudaMemcpyHostToDevice); 
#line 555
} 
#line 558
void ConfigOptimizations(cudaDeviceProp theDevice) 
#line 559
{ 
#line 560
printf("HashBurner (New) Optimizations (in-use on this device):\n"); 
#line 562
for (uint8_t i = (0); i < 8; ++i) { 
#line 563
(h_HBoptimizations[i]) = (0); }  
#line 566
(h_HBoptimizations[0]) = (1); 
#line 567
printf("+ROTLBACK32  "); 
#line 572
if ((theDevice.major) >= 6) 
#line 573
{ 
#line 574
(h_HBoptimizations[1]) = (0); 
#line 575
printf("-SEL32BITXOR  "); 
#line 576
} else 
#line 578
{ 
#line 579
(h_HBoptimizations[1]) = (1); 
#line 580
printf("+SEL32BITXOR  "); 
#line 581
}  
#line 584
(h_HBoptimizations[2]) = (1); 
#line 585
printf("+NONCEARITH  "); 
#line 586
printf("\n\n"); 
#line 587
} 
#line 593
void gpu_init() 
#line 594
{ 
#line 595
cudaDeviceProp device_prop; 
#line 596
int32_t device_count; 
#line 598
char config[10]; 
#line 599
FILE *inf; 
#line 600
inf = fopen("0xbtc.conf", "r"); 
#line 601
if (inf) 
#line 602
{ 
#line 603
fgets(config, 10, inf); 
#line 604
fclose(inf); 
#line 605
intensity = (atol(strtok(config, " "))); 
#line 606
cuda_device = (atol(strtok(0, " "))); 
#line 607
printf("\n\nRead ./0xbtc.conf - using custom intensity %d and CUDA device %d.", intensity, cuda_device); 
#line 608
} else 
#line 610
{ 
#line 611
intensity = 25; 
#line 612
cuda_device = 0; 
#line 613
printf("\n\nNo ./0xbtc.conf - using hardcoded intensity %d and CUDA device %d.", intensity, cuda_device); 
#line 614
}  
#line 616
cudaGetDeviceCount(&device_count); 
#line 618
if ((cudaGetDeviceProperties(&device_prop, cuda_device)) != (cudaSuccess)) 
#line 619
{ 
#line 620
printf("Problem getting properties for device. (Device unresponsive\? Intensity too high\?) Exiting.\n"); 
#line 621
exit(1); 
#line 622
}  
#line 624
cudaSetDevice(cuda_device); 
#line 626
if (!gpu_initialized) 
#line 627
{ 
#line 629
cudaDeviceReset(); 
#line 630
cudaSetDeviceFlags(4 | 16); 
#line 631
cudaDeviceSetCacheConfig(cudaFuncCachePreferL1); 
#line 633
printf("\nInitialized CUDA device %d : ", cuda_device); 
#line 634
printf(device_prop.name); 
#line 635
printf("\nAvailable compute capability: %d.%d \n\n", device_prop.major, device_prop.minor); 
#line 637
ConfigOptimizations(device_prop); 
#line 639
printf("Now mining! \n---\n"); 
#line 641
cudaMalloc((void **)(&d_solution), 8); 
#line 642
cudaMallocHost((void **)(&h_message), 8); 
#line 644
((uint32_t &)(init_message[52])) = 1701608001U; 
#line 645
((uint32_t &)(init_message[56])) = 1634300520U; 
#line 647
srand((time(0) & (65535)) | (getpid() << 16)); 
#line 648
for (int8_t i_rand{(60)}; i_rand < 84; ++i_rand) { 
#line 649
(init_message[i_rand]) = (((uint8_t)rand()) % 256); 
#line 650
}  
#line 651
memcpy(solution, &(init_message[52]), 32); 
#line 653
uint32_t h_threads{1U << intensity}; 
#line 654
cudaMemcpyToSymbol(threads, &h_threads, sizeof h_threads, 0, cudaMemcpyHostToDevice); 
#line 657
cudaMemcpyToSymbol(d_HBoptimizations, &h_HBoptimizations, sizeof h_HBoptimizations, 0, cudaMemcpyHostToDevice); 
#line 659
gpu_initialized = true; 
#line 660
}  
#line 662
compute_version = (((device_prop.major) * 100) + ((device_prop.minor) * 10)); 
#line 665
clock_speed = ((int32_t)(((device_prop.memoryClockRate) * 1000) * 1000)); 
#line 668
printable_hashrate_cnt = (0); 
#line 669
print_counter = (0); 
#line 671
ftime(&start); 
#line 672
if (new_input) { new_input = false; }  
#line 673
} 
#line 676
void update_mining_inputs(uint64_t target, uint8_t *hash_prefix) 
#line 677
{ 
#line 678
memcpy(init_message, hash_prefix, 52); 
#line 679
send_to_device(target, (uint64_t *)(init_message)); 
#line 680
} 
#line 683
void gpu_cleanup() 
#line 684
{ 
#line 685
cudaSetDevice(cuda_device); 
#line 687
cudaThreadSynchronize(); 
#line 689
cudaFree(d_solution); 
#line 690
cudaFreeHost(h_message); 
#line 692
cudaDeviceReset(); 
#line 693
} 
#line 696
bool find_message() 
#line 697
{ 
#line 698
cudaSetDevice(cuda_device); 
#line 700
uint32_t threads{1U << intensity}; 
#line 702
uint32_t tpb{(compute_version > 500) ? 1024U : 384U}; 
#line 703
dim3 grid{((threads + tpb) - (1)) / tpb}; 
#line 704
dim3 block{tpb}; 
#line 706
(__cudaPushCallConfiguration(grid, block)) ? (void)0 : gpu_mine(d_solution, cnt); 
#line 714
cnt += threads; 
#line 715
printable_hashrate_cnt += threads; 
#line 717
cudaMemcpy(h_message, d_solution, 8, cudaMemcpyDeviceToHost); 
#line 718
if ((*h_message) != 18446744073709551615Ui64) { 
#line 719
memcpy(&(solution[12]), h_message, 8); }  
#line 721
ftime(&end); 
#line 722
double t{((double)((((end.time) * (1000)) + (end.millitm)) - (((start.time) * (1000)) + (start.millitm)))) / (1000)}; 
#line 724
if ((t * (10)) > print_counter) 
#line 725
{ 
#line 726
++print_counter; 
#line 729
printf("\033[s\033[\?25l\033[2;22f\033[38;5;221m%*.2f\033[0m\033[u\033[\?25h\033[s\033[\?25l\033[3;36f\033[38;5;208m%*llu\033[0m\033[u\033" "[\?25h\033[s\033[\?25l\033[2;75f\033[38;5;33m%02u:%02u\033[0m\033[u\033[\?25h", 8, (((double)printable_hashrate_cnt) / t) / (1000000), 25, printable_hashrate_cnt, ((uint32_t)t) / (60), ((uint32_t)t) % (60)); 
#line 735
}  
#line 737
return ((*h_message) != 18446744073709551615Ui64); 
#line 739
} 
#line 1 "cuda_sha3.compute_52.cudafe1.stub.c"
#define _NV_ANON_NAMESPACE _GLOBAL__N__28_cuda_sha3_compute_52_cpp1_ii_0371d84c
#ifdef _NV_ANON_NAMESPACE
#endif
#pragma pack()
#line 1 "cuda_sha3.compute_52.cudafe1.stub.c"
#include "cuda_sha3.compute_52.cudafe1.stub.c"
#line 1 "cuda_sha3.compute_52.cudafe1.stub.c"
#undef _NV_ANON_NAMESPACE
