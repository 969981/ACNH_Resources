
void FUN_01810570(long param_1,undefined4 param_2)

{
  int iVar1;
  char *__dest;
  
  __dest = *(char **)(param_1 + 8);
  if (__dest != "IdrMuseumFish_") {
    iVar1 = 0xe;
    if (*(int *)(param_1 + 0x10) < 0xf) {
      iVar1 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(__dest,"IdrMuseumFish_",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  FUN_038d13f0(param_1,&DAT_040c7be9,param_2);
  return;
}

