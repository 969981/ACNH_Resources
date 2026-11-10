
long FUN_00153c50(long param_1,long param_2,int param_3)

{
  int iVar1;
  FILE *__stream;
  
  __stream = *(FILE **)(param_1 + 0x48);
  if ((param_2 == 0) && (param_3 == 0)) {
    if (__stream == (FILE *)0x0) {
      return 0;
    }
  }
  else if (__stream == (FILE *)0x0) {
    __stream = fopen(*(char **)(param_1 + 0x20),"rb");
    *(FILE **)(param_1 + 0x48) = __stream;
    if (__stream == (FILE *)0x0) {
      return 1;
    }
  }
  iVar1 = fseek(__stream,param_2,param_3);
  return (ulong)(iVar1 != 0) << 1;
}

