
void FUN_039c0320(undefined8 *param_1)

{
  undefined *puVar1;
  MutexType *pMVar2;
  long lVar3;
  short sVar4;
  uint uVar5;
  long *plVar6;
  long *plVar7;
  void *__ptr;
  long lVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = &PTR_FUN_04b6aaf8;
  if (param_1[0x5d] != 0) {
    if ((long *)param_1[0x5e] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x5e] + 8))();
    }
    *(undefined4 *)(param_1 + 0x5c) = 0;
    param_1[0x5d] = 0;
    param_1[0x5e] = 0;
  }
  if (param_1[0x60] != 0) {
    if ((long *)param_1[0x61] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x61] + 8))();
    }
    *(undefined4 *)(param_1 + 0x5f) = 0;
    param_1[0x60] = 0;
    param_1[0x61] = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x18] != 0) {
    __ptr = (void *)(param_1[0x18] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    param_1[0x18] = 0;
    *(undefined4 *)(param_1 + 0x17) = 0;
  }
  lVar8 = param_1[0x2b];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = 0;
      lVar10 = *plVar6 * 0x5a8;
      do {
        lVar3 = lVar8 + lVar10;
        *(undefined ***)(lVar3 + -0xe0) = &PTR_LAB_049a8af0;
        FUN_038fd0e0(lVar3 + -0x88);
        *(undefined ***)(lVar3 + -0x1c0) = &PTR_LAB_049a8af0;
        FUN_038fd0e0(lVar3 + -0x168);
        *(undefined ***)(lVar3 + -0x2a0) = &PTR_LAB_049a8af0;
        FUN_038fd0e0(lVar3 + -0x248);
        *(undefined ***)(lVar3 + -0x380) = &PTR_LAB_049a8af0;
        FUN_038fd0e0(lVar3 + -0x328);
        *(undefined ***)(lVar3 + -0x460) = &PTR_LAB_049a8af0;
        FUN_038fd0e0(lVar3 + -0x408);
        *(undefined ***)(lVar3 + -0x540) = &PTR_LAB_049a8af0;
        FUN_038fd0e0(lVar3 + -0x4e8);
        lVar9 = lVar9 + 0x5a8;
        lVar8 = lVar8 + -0x5a8;
      } while (lVar10 != lVar9);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar6);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar1,plVar6);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
      }
    }
    param_1[0x2b] = 0;
    *(undefined4 *)(param_1 + 0x2a) = 0;
  }
  puVar1 = PTR_DAT_04bd11b8 + 0x10;
  param_1[0x71] = puVar1;
  FUN_0390d560(param_1 + 0x71);
  param_1[0x62] = puVar1;
  FUN_0390d560(param_1 + 0x62);
  FUN_038fd0e0(param_1 + 0x52);
  lVar8 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x23a) != -1) {
    pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar2);
    uVar5 = (int)*(short *)((long)param_1 + 0x23a) - (uint)*(ushort *)(lVar8 + 0x5c0);
    if (*(uint *)(lVar8 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar9 = *(long *)(lVar8 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar9 + 0x76) + -1;
    *(short *)(lVar9 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar8 + 0x5c4) = *(short *)(lVar8 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar2);
    *(undefined2 *)((long)param_1 + 0x23a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x36);
  return;
}

