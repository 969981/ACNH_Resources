
long * FUN_0047b670(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  lVar7 = *param_2;
  nn::os::LockMutex((MutexType *)(lVar7 + 0x188));
  if (-1 < (int)param_1[1]) {
    lVar8 = *param_1;
    nn::os::LockMutex((MutexType *)(lVar8 + 0x188));
    *(undefined8 *)(*(long *)(*param_1 + 0x1a8) + (long)(int)param_1[1] * 0x10) = 0;
    lVar4 = *param_1;
    *param_1 = 0;
    if (lVar4 != 0) {
      FUN_004435c0();
    }
    *(undefined4 *)(param_1 + 1) = 0xffffffff;
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x188));
  }
  lVar4 = *param_2;
  puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x1a8) + (long)(int)param_2[1] * 0x10);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  nn::os::LockMutex((MutexType *)(lVar4 + 0x188));
  uVar5 = *(uint *)(lVar4 + 0x1b0);
  if (0 < (int)uVar5) {
    lVar10 = *(long *)(lVar4 + 0x1a8);
    lVar9 = 0;
    lVar8 = 0;
    do {
      if (*(long *)(lVar10 + lVar9) == 0) {
        *(undefined8 *)(lVar10 + lVar9) = uVar2;
        *(undefined8 *)(*(long *)(lVar4 + 0x1a8) + lVar9 + 8) = uVar3;
        uVar5 = (uint)lVar8;
        if (*(uint *)(lVar4 + 0x1b0) != uVar5) goto LAB_0047b7b0;
        break;
      }
      lVar8 = lVar8 + 1;
      lVar9 = lVar9 + 0x10;
    } while (lVar8 < (int)uVar5);
  }
  uVar6 = uVar5;
  if (uVar5 == (*(uint *)(lVar4 + 0x1b4) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,(long *)(lVar4 + 0x1a8),0x10);
    uVar6 = *(uint *)(lVar4 + 0x1b0);
  }
  puVar1 = (undefined8 *)(*(long *)(lVar4 + 0x1a8) + (long)(int)uVar6 * 0x10);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(uint *)(lVar4 + 0x1b0) = uVar6 + 1;
LAB_0047b7b0:
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x188));
  *(uint *)(param_1 + 1) = uVar5;
  if (*param_2 == 0) {
    lVar4 = *param_1;
    *param_1 = 0;
  }
  else {
    FUN_004435a0();
    lVar4 = *param_1;
    *param_1 = *param_2;
  }
  if (lVar4 != 0) {
    FUN_004435c0();
  }
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x188));
  return param_1;
}

