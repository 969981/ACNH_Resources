
undefined8 FUN_03909e50(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  
  *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 1;
  nn::os::GetSystemTick();
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 != 0) {
    lVar3 = *(long *)(param_1 + 0x50);
    iVar4 = 0;
    do {
      FUN_0390a390(lVar3 + (long)iVar4 * 0x1f0);
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if ((iVar1 != 0) && ((param_2 & 1) == 0)) {
    lVar3 = *(long *)(param_1 + 0x38);
    iVar4 = 0;
    do {
      uVar2 = FUN_03907990(lVar3 + (long)iVar4 * 0x150,0);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar1 != iVar4);
  }
  nn::os::GetSystemTick();
  return 1;
}

