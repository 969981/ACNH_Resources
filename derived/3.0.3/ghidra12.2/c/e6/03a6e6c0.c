
void FUN_03a6e6c0(undefined8 *param_1)

{
  MutexType *pMVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04b70568;
  FUN_03a6e940();
  if (param_1[0x23d] != 0) {
    if ((long *)param_1[0x23e] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x23e] + 8))();
    }
    *(undefined4 *)(param_1 + 0x23c) = 0;
    param_1[0x23d] = 0;
    param_1[0x23e] = 0;
  }
  if (param_1[0x240] != 0) {
    if ((long *)param_1[0x241] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x241] + 8))();
    }
    *(undefined4 *)(param_1 + 0x23f) = 0;
    param_1[0x240] = 0;
    param_1[0x241] = 0;
  }
  puVar4 = PTR_DAT_04bb2698;
  pvVar6 = (void *)param_1[0x28c];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    param_1[0x28c] = 0;
    *(undefined4 *)(param_1 + 0x28b) = 0;
  }
  pvVar6 = (void *)param_1[0x28f];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar4,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    param_1[0x28f] = 0;
    *(undefined4 *)(param_1 + 0x28e) = 0;
  }
  FUN_038e1a84(param_1 + 0x291);
  lVar7 = DAT_05ae78f0;
  if (*(short *)((long)param_1 + 0x143a) != -1) {
    pMVar1 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar1);
    uVar3 = (int)*(short *)((long)param_1 + 0x143a) - (uint)*(ushort *)(lVar7 + 0x5c0);
    if (*(uint *)(lVar7 + 0x5a0) <= uVar3) {
      uVar3 = 0;
    }
    lVar8 = *(long *)(lVar7 + 0x5a8) + (long)(int)uVar3 * 0x80;
    sVar2 = *(short *)(lVar8 + 0x76) + -1;
    *(short *)(lVar8 + 0x76) = sVar2;
    if (sVar2 == 0) {
      *(short *)(lVar7 + 0x5c4) = *(short *)(lVar7 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar1);
    *(undefined2 *)((long)param_1 + 0x143a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x276);
  param_1[0x250] = &PTR_LAB_049a8b20;
  FUN_038fd0e0(param_1 + 0x25b);
  FUN_038fd0e0(param_1 + 0x232);
  FUN_038fd0e0(param_1 + 0x21e);
  FUN_03a6a6c0(param_1 + 0x82);
  lVar7 = param_1[0x3c];
  param_1[0x3b] = &PTR_FUN_04b64428;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_03a6e91c;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x1d8);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0x3c] = 1;
LAB_03a6e91c:
  *param_1 = &PTR_LAB_04b66628;
  return;
}

