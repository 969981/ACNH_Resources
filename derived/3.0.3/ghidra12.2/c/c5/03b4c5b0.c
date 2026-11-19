
void FUN_03b4c5b0(long param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_03bcb120();
  }
  pcVar5 = *(char **)(param_1 + 0x60);
  if (((pcVar5 != (char *)0x0) && (*pcVar5 != '\0')) &&
     ((DAT_05aebc00 != '\0' || (uVar2 = FUN_003cd5f8(), (uVar2 & 1) != 0)))) {
    uVar2 = FUN_003ba54c(pcVar5 + 0x8c8);
    if ((uVar2 & 1) != 0) {
      FUN_003badf0(pcVar5 + 0x8c8);
    }
  }
  if (*(long *)(param_1 + 0x78) != 0) {
    FUN_03bcb250();
  }
  lVar7 = *(long *)(param_1 + 0x140);
  if ((lVar7 != 0) && (*(char *)(lVar7 + 0x48) != '\0')) {
    if (*(long **)(lVar7 + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x18) + 0x30))();
    }
    if (*(long **)(lVar7 + 0x10) != (long *)0x0) {
      (**(code **)(**(long **)(lVar7 + 0x10) + 0x18))();
    }
    if (*(int *)(lVar7 + 0x38) != 0) {
      if (*(long *)(lVar7 + 0x30) != lVar7 + 0x28) {
        lVar9 = (long)*(int *)(lVar7 + 0x3c);
        plVar6 = (long *)(*(long *)(lVar7 + 0x30) - lVar9);
        do {
          (**(code **)(*plVar6 + 0x30))(plVar6);
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar9 + 8) - lVar9);
        } while (plVar6 != (long *)((lVar7 + 0x28) - (long)*(int *)(lVar7 + 0x3c)));
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x90);
  if (lVar7 != 0) {
    iVar1 = *(int *)(lVar7 + 0x188);
    if (iVar1 != 0) {
      lVar9 = *(long *)(lVar7 + 400);
      iVar8 = 0;
      do {
        if (*(short *)(lVar9 + (long)iVar8 * 0x180) != -1) {
          FUN_03b392b0();
        }
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
    FUN_03b392b0(lVar7 + 8);
    if (**(char **)(lVar7 + 0x1c8) != '\0') {
      FUN_03b396f0(lVar7);
    }
  }
  lVar7 = *(long *)(param_1 + 0x98);
  if (lVar7 != 0) {
    nn::os::LockMutex((MutexType *)(lVar7 + 0x40));
    if (*(long *)(lVar7 + 0x10) != lVar7 + 8) {
      lVar9 = (long)*(int *)(lVar7 + 0x1c);
      plVar6 = (long *)(*(long *)(lVar7 + 0x10) - lVar9);
      do {
        lVar3 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if (*(int *)(lVar3 + 0xc) != -1) {
          plVar4 = (long *)(**(code **)(*plVar6 + 0x10))(plVar6);
          (**(code **)(*plVar4 + 0x30))();
        }
        plVar6 = (long *)(*(long *)((long)plVar6 + lVar9 + 8) - lVar9);
      } while (plVar6 != (long *)((lVar7 + 8) - lVar9));
    }
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x40));
  }
  if (*(long *)(param_1 + 0xa0) != 0) {
    FUN_03b3fa30();
  }
  if (DAT_05aebb88 == 0) {
    if (0 < param_2) {
      FUN_003cd870(param_2);
    }
  }
  else {
    FUN_03b510b0();
  }
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}

