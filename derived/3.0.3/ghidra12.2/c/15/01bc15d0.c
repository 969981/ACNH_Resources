
void FUN_01bc15d0(long param_1)

{
  bool bVar1;
  bool bVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x20));
  uVar3 = (ulong)*(int *)(param_1 + 0x5c);
  lVar5 = *(long *)(param_1 + 0x50);
  if (*(int *)(param_1 + 0x58) < 1) {
    lVar5 = 0;
  }
  lVar7 = lVar5 - uVar3;
  if (lVar5 != 0 && lVar7 != 0) {
    do {
      uVar6 = (ulong)*(int *)(lVar7 + 0x2c);
      lVar5 = *(long *)(lVar7 + 0x20);
      if (*(int *)(lVar7 + 0x28) < 1) {
        lVar5 = 0;
      }
      lVar8 = lVar5 - uVar6;
      if (lVar5 != 0 && lVar8 != 0) {
        do {
          if (*(long *)(lVar8 + 0x28) != 0) {
            FUN_01c09dd0();
            uVar6 = (ulong)*(uint *)(lVar7 + 0x2c);
          }
          lVar5 = *(long *)(lVar8 + (int)uVar6 + 8);
          lVar8 = lVar5 + -(int)uVar6;
        } while (lVar5 != lVar7 + 0x18 && lVar8 != 0);
        uVar3 = (ulong)*(uint *)(param_1 + 0x5c);
      }
      lVar5 = *(long *)(lVar7 + (int)uVar3 + 8);
      lVar7 = lVar5 + -(int)uVar3;
    } while (lVar5 != param_1 + 0x48 && lVar7 != 0);
  }
  if (*(int *)(param_1 + 0x60) == 1) {
    bVar1 = true;
    lVar5 = -0x5da8;
    do {
      lVar7 = param_1 + 0x188 + lVar5;
      if (*(long *)(lVar7 + 0x5da8) == 0) {
LAB_01bc1634:
        bVar2 = true;
      }
      else {
        FUN_01c09dd0();
        piVar4 = *(int **)(lVar7 + 0x5da8);
        if (piVar4 == (int *)0x0) goto LAB_01bc1634;
        bVar2 = *piVar4 - 3U < 2;
      }
      bVar1 = (bool)(bVar2 & bVar1);
      lVar5 = lVar5 + 0x128;
    } while (lVar5 != 0);
    if (bVar1) {
      *(undefined4 *)(param_1 + 0x60) = 2;
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x20));
  return;
}

