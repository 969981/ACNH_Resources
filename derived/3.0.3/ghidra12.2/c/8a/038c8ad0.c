
long FUN_038c8ad0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  
  uVar2 = -param_2;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  uVar9 = (ulong)(uVar2 - 1);
  if ((uVar2 & uVar2 - 1) != 0) {
    return 0;
  }
  if ((*(uint *)(param_1 + 0xd0) & 1) == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = param_1 + 0x90;
    nn::os::LockMutex((MutexType *)(param_1 + 0xb0));
  }
  lVar4 = (long)*(int *)(param_1 + 0xec);
  lVar6 = *(long *)(param_1 + 0xe0) - lVar4;
  lVar5 = (param_1 - lVar4) + 0xd8;
  if (uVar2 < 9) {
    if (lVar6 != lVar5) {
      lVar3 = 0;
      do {
        if ((7 < *(ulong *)(lVar6 + 0x18)) &&
           ((lVar3 == 0 || (*(ulong *)(lVar3 + 0x18) < *(ulong *)(lVar6 + 0x18))))) {
          lVar3 = lVar6;
        }
        lVar6 = *(long *)(lVar6 + lVar4 + 8) + -lVar4;
      } while (lVar6 != lVar5);
      lVar5 = 0;
      if (lVar3 != 0) {
LAB_038c8c24:
        lVar5 = *(long *)(lVar3 + 0x18) + lVar5;
        goto joined_r0x038c8c38;
      }
    }
  }
  else if (lVar6 != lVar5) {
    lVar3 = 0;
    do {
      uVar7 = *(ulong *)(lVar6 + 0x18);
      if (((7 < uVar7) &&
          (lVar1 = lVar6 + (ulong)*(ushort *)(lVar6 + 0x12) + 0x20,
          ((lVar1 + uVar9 & ~uVar9) - lVar1) + 8 <= uVar7)) &&
         ((lVar3 == 0 || (*(ulong *)(lVar3 + 0x18) < uVar7)))) {
        lVar3 = lVar6;
      }
      lVar6 = *(long *)(lVar6 + lVar4 + 8) + -lVar4;
    } while (lVar6 != lVar5);
    if (lVar3 != 0) {
      lVar5 = lVar3 + (ulong)*(ushort *)(lVar3 + 0x12) + 0x20;
      lVar5 = lVar5 - (lVar5 + uVar9 & ~uVar9);
      goto LAB_038c8c24;
    }
  }
  lVar5 = 0;
joined_r0x038c8c38:
  if (lVar8 != 0) {
    nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
  }
  return lVar5;
}

