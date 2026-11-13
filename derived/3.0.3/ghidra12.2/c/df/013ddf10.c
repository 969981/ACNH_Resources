
void FUN_013ddf10(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  void *pvVar6;
  long lVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04995d40;
  param_1[0x30] = &PTR_LAB_049960c0;
  param_1[0x34] = &PTR_LAB_04996148;
  plVar3 = (long *)param_1[0x39];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x39];
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3c] != 0) {
    if (0 < *(int *)(param_1 + 0x3b)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x3c] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x3d];
        param_1[0x3d] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x3b));
    }
    pvVar6 = (void *)param_1[0x3e];
    *(undefined4 *)(param_1 + 0x3b) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 500) = 0;
    *(undefined8 *)((long)param_1 + 0x1ec) = 0;
    *(undefined8 *)((long)param_1 + 0x1e4) = 0;
    *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  }
  lVar7 = param_1[0x31];
  param_1[0x30] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_013de098;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x180);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0x31] = 1;
LAB_013de098:
  puVar2 = PTR_DAT_04bb3380;
  param_1[0x2f] = 0;
  param_1[0x2a] = puVar2 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x23] = PTR_DAT_04bb2fe8 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x29]);
  if (((uVar4 & 1) != 0) && (pvVar6 = (void *)param_1[0x29], pvVar6 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  param_1[0x29] = 0;
  param_1[0x22] = 0;
  param_1[0x17] = PTR_DAT_04bb33a8 + 0x10;
  param_1[0x1c] = 0;
  param_1[0x1d] = puVar2 + 0x10;
  param_1[6] = PTR_DAT_04bb3578 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x16]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x16] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  param_1[0x16] = 0;
  return;
}

