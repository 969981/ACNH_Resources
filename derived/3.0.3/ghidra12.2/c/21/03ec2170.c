
void FUN_03ec2170(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  void *pvVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb4a70;
  *param_1 = &PTR_FUN_04ba51c8;
  lVar8 = *(long *)puVar2;
  nn::os::LockMutex((MutexType *)(lVar8 + 0x40));
  plVar3 = (long *)((long)*(int *)(lVar8 + 0x1c) + (long)param_1);
  if (*plVar3 != 0) {
    *(long *)(*plVar3 + 8) = plVar3[1];
  }
  if ((long *)plVar3[1] != (long *)0x0) {
    *(long *)plVar3[1] = *plVar3;
  }
  *plVar3 = 0;
  plVar3[1] = 0;
  *(int *)(lVar8 + 0x18) = *(int *)(lVar8 + 0x18) + -1;
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x40));
  uVar5 = *(uint *)(param_1 + 3);
  if (0 < (int)uVar5) {
    uVar6 = 0;
    do {
      lVar8 = param_1[4];
      uVar1 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
      }
      plVar3 = *(long **)(lVar8 + (ulong)uVar1 * 0x10);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = uVar6;
        if (*(uint *)(param_1 + 3) <= uVar6) {
          uVar5 = 0;
        }
        *(undefined8 *)(param_1[4] + (ulong)uVar5 * 0x10) = 0;
        uVar5 = *(uint *)(param_1 + 3);
        lVar8 = param_1[4];
      }
      uVar1 = uVar6;
      if (uVar5 <= uVar6) {
        uVar1 = 0;
      }
      plVar3 = *(long **)(lVar8 + (ulong)uVar1 * 0x10 + 8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
        uVar5 = uVar6;
        if (*(uint *)(param_1 + 3) <= uVar6) {
          uVar5 = 0;
        }
        *(undefined8 *)(param_1[4] + (ulong)uVar5 * 0x10 + 8) = 0;
        uVar5 = *(uint *)(param_1 + 3);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < (int)uVar5);
  }
  puVar2 = PTR_DAT_04bb2698;
  pvVar7 = (void *)param_1[4];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  pvVar7 = (void *)param_1[0xd];
  if (pvVar7 != (void *)0x0) {
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar8,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0xd] = 0;
  }
  if (((*(byte *)((long)param_1 + 0x1d09) >> 1 & 1) != 0) && ((long *)param_1[5] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[5] + 0xb8))();
    param_1[5] = 0;
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
    param_1[6] = 0;
  }
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
    param_1[7] = 0;
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
    param_1[8] = 0;
  }
  if ((*(byte *)((long)param_1 + 0x1d09) & 1) == 0) {
    if ((long *)param_1[9] == (long *)0x0) goto LAB_03ec23c0;
    (**(code **)(*(long *)param_1[9] + 0x18))();
  }
  param_1[9] = 0;
LAB_03ec23c0:
  pvVar7 = (void *)param_1[0x3a0];
  if (pvVar7 != (void *)0x0) {
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      free(pvVar7);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar8,pvVar7);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar7);
      }
    }
    param_1[0x39f] = 0;
    param_1[0x3a0] = 0;
  }
  uVar4 = (**(code **)(*(long *)param_1[10] + 0x10))();
  if (((uVar4 & 1) == 0) || ((long *)param_1[10] == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03ec2438. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[10] + 8))();
  return;
}

