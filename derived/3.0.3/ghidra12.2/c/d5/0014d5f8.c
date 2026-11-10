
void FUN_0014d5f8(long param_1,undefined8 param_2)

{
  size_t sVar1;
  undefined1 auStack_1f8 [128];
  char acStack_152 [258];
  
  if (((*(byte *)(param_1 + 0xf63) >> 2 & 1) != 0) || (*(long *)(param_1 + 0x678) != 0)) {
    memset(acStack_152,0,0x102);
    FUN_00144ed0(acStack_152,0x100,param_2,auStack_1f8 + 0x80);
    sVar1 = strlen(acStack_152);
    if ((*(char **)(param_1 + 0x678) != (char *)0x0) &&
       ((*(ushort *)(param_1 + 0x15c4) >> 3 & 1) == 0)) {
      strcpy(*(char **)(param_1 + 0x678),acStack_152);
      *(ushort *)(param_1 + 0x15c4) = *(ushort *)(param_1 + 0x15c4) | 8;
    }
    if ((*(byte *)(param_1 + 0xf63) >> 2 & 1) != 0) {
      (acStack_152 + sVar1)[0] = '\n';
      (acStack_152 + sVar1)[1] = '\0';
      FUN_0014d550(param_1,0,acStack_152,sVar1 + 1);
    }
  }
  return;
}

