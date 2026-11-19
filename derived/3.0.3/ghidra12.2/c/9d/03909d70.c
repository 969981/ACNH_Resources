
void FUN_03909d70(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  nn::os::GetSystemTick();
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    iVar4 = 0;
    do {
      if ((*(byte *)(lVar3 + (long)iVar4 * 0x58 + 0x24) & 1) != 0) {
        FUN_03909f10(lVar3 + (long)iVar4 * 0x58);
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x50);
    iVar4 = 0;
    do {
      FUN_0390a000(lVar3 + (long)iVar4 * 0x1f0);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  iVar1 = *(int *)(param_1 + 0x58);
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x60);
    iVar4 = 0;
    do {
      lVar2 = lVar3 + (long)iVar4 * 0x58;
      *(uint *)(lVar2 + 0x24) = *(uint *)(lVar2 + 0x24) & 0xfffffffe;
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  return;
}

