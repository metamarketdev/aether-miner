#line 1 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
#line 25 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
extern char h_HBoptimizations[8];
#line 40 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
int32_t intensity = 0;
int32_t cuda_device = 0;
int32_t clock_speed = 0;
int32_t compute_version = 0;
struct timeb start = {0};
#line 44 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
struct timeb end = {0};

uint64_t cnt = 0;
uint64_t printable_hashrate_cnt = 0;
uint64_t print_counter = 0;

char gpu_initialized = 0;
char new_input = 0;

extern uint8_t solution[32];

uint64_t *h_message = 0;
uint8_t init_message[84];

uint64_t *d_solution = 0;

uint8_t *d_challenge = 0;
uint8_t *d_hash_prefix = 0;
#line 87 "C:\\Program Files (x86)\\Windows Kits\\10\\Include\\10.0.17763.0\\ucrt\\corecrt_stdio_config.h"
 /* COMDAT group: _ZZ28__local_stdio_printf_optionsE15_OptionsStorage */ unsigned __int64 _ZZ28__local_stdio_printf_optionsE15_OptionsStorage;
#line 25 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
char h_HBoptimizations[8] = {((char)0)};
#line 53 "D:\\0xbitcoinminer\\miner\\cpp\\hybridminer\\cuda_sha3.cu"
uint8_t solution[32] = {((uint8_t)0U)};
