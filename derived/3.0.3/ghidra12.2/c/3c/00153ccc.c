
size_t FUN_00153ccc(void *param_1,size_t param_2,size_t param_3,long param_4)

{
  size_t sVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(param_4 + 0x48);
  if (__stream == (FILE *)0x0) {
    __stream = fopen(*(char **)(param_4 + 0x20),"rb");
    *(FILE **)(param_4 + 0x48) = __stream;
    if (__stream == (FILE *)0x0) {
      return 0xffffffffffffffff;
    }
  }
  sVar1 = fread(param_1,param_2,param_3,__stream);
  return sVar1;
}

