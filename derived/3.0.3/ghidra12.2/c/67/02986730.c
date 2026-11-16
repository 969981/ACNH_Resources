
undefined8 FUN_02986730(undefined4 *param_1)

{
  int iVar1;
  ulong uVar2;
  uint *puVar3;
  byte *pbVar4;
  
  pbVar4 = &DAT_0523c4c0;
  if ((DAT_0523c4c0 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0523c4c0);
    pbVar4 = PTR_DAT_04bbde00;
    if (iVar1 != 0) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
      pbVar4 = &DAT_0523c4c0;
    }
  }
  if (0 < (int)DAT_0523c4b0) {
    uVar2 = 0;
    do {
      if (*(int *)(DAT_0523c4b8 + uVar2 * 4) == 0) goto LAB_02986788;
      uVar2 = uVar2 + 1;
    } while (DAT_0523c4b0 != uVar2);
  }
  uVar2 = 0;
LAB_02986788:
  *param_1 = (int)uVar2;
  puVar3 = &DAT_0523c4b0;
  if ((*pbVar4 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_0523c4c0);
    puVar3 = (uint *)PTR_DAT_04bbddf8;
    if (iVar1 != 0) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
      puVar3 = &DAT_0523c4b0;
    }
  }
  if (0 < (int)*puVar3) {
    uVar2 = 0;
    do {
      if (*(int *)(*(long *)(puVar3 + 2) + uVar2 * 4) == 0) goto LAB_029867c8;
      uVar2 = uVar2 + 1;
    } while (*puVar3 != uVar2);
  }
  uVar2 = 0;
LAB_029867c8:
  param_1[1] = (int)uVar2;
  *(undefined1 *)(param_1 + 2) = 0;
  return 1;
}

