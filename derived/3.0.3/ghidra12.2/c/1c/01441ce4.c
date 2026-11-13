
void FUN_01441ce4(undefined8 param_1,long param_2)

{
  int iVar1;
  char *__dest;
  
  __dest = *(char **)(param_2 + 8);
  if (__dest != "Actor/FtrCookingParam_RVer_20000") {
    iVar1 = 0x20;
    if (*(int *)(param_2 + 0x10) < 0x21) {
      iVar1 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,"Actor/FtrCookingParam_RVer_20000",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}

