
void FUN_003d5de0(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  pMVar1 = (MutexType *)(param_1 + 0x2341);
  nn::os::LockMutex(pMVar1);
  if (param_1[0x1f] != 0) {
    FUN_003d910c();
  }
  iVar7 = (int)param_1[0x8d];
  if (0 < iVar7) {
    lVar9 = 0;
    plVar10 = param_1 + 0x91;
    do {
      if (*plVar10 != 0) {
        FUN_003c0c30();
        iVar7 = (int)param_1[0x8d];
      }
      lVar9 = lVar9 + 1;
      plVar10 = plVar10 + 0x210;
    } while (lVar9 < iVar7);
  }
  if (*(char *)((long)param_1 + 0xe1) != '\0') {
    uVar5 = FUN_003ca198();
    FUN_003ca594(uVar5,param_1 + 0x18);
    *(undefined1 *)((long)param_1 + 0xe1) = 0;
  }
  if (*(char *)((long)param_1 + 0x39) != '\0') {
    *(undefined1 *)((long)param_1 + 0x39) = 0;
  }
  if ((char)param_1[0x1b] == '\0') {
    FUN_003c5db8(param_1);
    nn::os::UnlockMutex(pMVar1);
    return;
  }
  *(undefined1 *)((long)param_1 + 0xda) = 1;
  iVar7 = (int)param_1[0x8d];
  if (0 < iVar7) {
    lVar9 = 0;
    plVar10 = param_1 + 0x90;
    do {
      if (*plVar10 != 0) {
        FUN_003dd6b0(param_1[0x20]);
        *plVar10 = 0;
        iVar7 = (int)param_1[0x8d];
      }
      lVar9 = lVar9 + 1;
      plVar10 = plVar10 + 0x210;
    } while (lVar9 < iVar7);
    if (0 < iVar7) {
      lVar9 = 0;
      plVar10 = param_1 + 0x91;
      do {
        if (*plVar10 != 0) {
          FUN_003c0ba0();
          *plVar10 = 0;
          iVar7 = (int)param_1[0x8d];
        }
        lVar9 = lVar9 + 1;
        plVar10 = plVar10 + 0x210;
      } while (lVar9 < iVar7);
    }
  }
  if (param_1[0x1f] != 0) {
    FUN_003d90c8();
    lVar9 = param_1[0x1f];
    if ((lVar9 != 0) && (lVar11 = param_1[0x1e], lVar11 != 0)) {
      uVar6 = FUN_003d9370(lVar9);
      bVar4 = (uVar6 & 1) == 0;
      lVar2 = 0x38;
      if (bVar4) {
        lVar2 = 0x28;
      }
      lVar8 = *(long *)(lVar9 + 0x3610);
      *(undefined8 *)(lVar9 + 0x3610) = *(undefined8 *)(lVar11 + lVar2);
      lVar3 = lVar11 + 0x38;
      if (bVar4) {
        lVar3 = lVar11 + 0x28;
      }
      *(long *)(lVar8 + 8) = lVar3;
      *(long *)(*(long *)(lVar11 + lVar2) + 8) = lVar9 + 0x3610;
      *(long *)(lVar11 + lVar2) = lVar8;
      param_1[0x1f] = 0;
    }
  }
  param_1[0x20] = 0;
  FUN_003c5db8(param_1);
  (**(code **)(*param_1 + 0x38))(param_1,0);
  *(undefined1 *)(param_1 + 0x1b) = 0;
  nn::os::UnlockMutex(pMVar1);
  return;
}

