#define __NV_CUBIN_HANDLE_STORAGE__ static
#if !defined(__CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__)
#define __CUDA_INCLUDE_COMPILER_INTERNAL_HEADERS__
#endif
#include "crt/host_runtime.h"
#include "cuda_sha3.fatbin.c"
extern void __device_stub__Z8gpu_minePyy(uint64_t *, uint64_t);
static void __nv_cudaEntityRegisterCallback(void **);
static void __sti____cudaRegisterAll(void);
#pragma section(".CRT$XCU",read)
__declspec(allocate(".CRT$XCU"))static void (*__dummy_static_init__sti____cudaRegisterAll[])(void) = {__sti____cudaRegisterAll};
void __device_stub__Z8gpu_minePyy(
uint64_t *__par0, 
uint64_t __par1)
{
__cudaLaunchPrologue(2);
__cudaSetupArgSimple(__par0, 0Ui64);
__cudaSetupArgSimple(__par1, 8Ui64);
__cudaLaunch(((char *)((void ( *)(uint64_t *, uint64_t))gpu_mine)));
}
void gpu_mine( uint64_t *__cuda_0,uint64_t __cuda_1)
{__device_stub__Z8gpu_minePyy( __cuda_0,__cuda_1);
}
#line 1 "cuda_sha3.compute_61.cudafe1.stub.c"
static void __nv_cudaEntityRegisterCallback(
void **__T3)
{
__nv_dummy_param_ref(__T3);
__nv_save_fatbinhandle_for_managed_rt(__T3);
__cudaRegisterEntry(__T3, ((void ( *)(uint64_t *, uint64_t))gpu_mine), _Z8gpu_minePyy, 1024U);
__cudaRegisterVariable(__T3, __shadow_var(d_mid,::d_mid), 0, 200Ui64, 1, 0);
__cudaRegisterVariable(__T3, __shadow_var(d_target,::d_target), 0, 8Ui64, 1, 0);
__cudaRegisterVariable(__T3, __shadow_var(threads,::threads), 0, 4Ui64, 1, 0);
__cudaRegisterVariable(__T3, __shadow_var(d_HBoptimizations,::d_HBoptimizations), 0, 8Ui64, 1, 0);
}
static void __sti____cudaRegisterAll(void)
{
__cudaRegisterBinary(__nv_cudaEntityRegisterCallback);
}
