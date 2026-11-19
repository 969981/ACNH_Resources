
void FUN_03c4b770(undefined8 param_1,long param_2)

{
  int iVar1;
  char *__dest;
  
  __dest = *(char **)(param_2 + 8);
  if (__dest != "Sound/SysSoundMgr") {
    iVar1 = 0x11;
    if (*(int *)(param_2 + 0x10) < 0x12) {
      iVar1 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,"Sound/SysSoundMgr",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  return;
}

