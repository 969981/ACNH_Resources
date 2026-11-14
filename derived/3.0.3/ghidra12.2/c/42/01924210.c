
void FUN_01924210(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  param_1[200] = 0;
  *param_1 = &PTR_FUN_049dd1a8;
  param_1[0xb8] = &PTR_LAB_049dd330;
  param_1[0xbc] = &PTR_LAB_049dd3b8;
  plVar2 = (long *)param_1[0xc1];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0xc1];
  }
  *(undefined4 *)(param_1 + 199) = 0;
  if (param_1[0xc4] != 0) {
    if (0 < *(int *)(param_1 + 0xc3)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0xc4] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0xc5];
        param_1[0xc5] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0xc3));
    }
    pvVar5 = (void *)param_1[0xc6];
    *(undefined4 *)(param_1 + 0xc3) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x634) = 0;
    *(undefined8 *)((long)param_1 + 0x62c) = 0;
    *(undefined8 *)((long)param_1 + 0x624) = 0;
    *(undefined8 *)((long)param_1 + 0x61c) = 0;
  }
  lVar6 = param_1[0xb9];
  param_1[0xb8] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_01924398;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x5c0);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0xb9] = 1;
LAB_01924398:
  puVar1 = PTR_DAT_04bb33a8;
  param_1[0xb7] = 0;
  param_1[0xb2] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0xab] = PTR_DAT_04bb2fe8 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xb1]);
  if (((uVar3 & 1) != 0) && (pvVar5 = (void *)param_1[0xb1], pvVar5 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  param_1[0xb1] = 0;
  param_1[0xa5] = &PTR_LAB_049dd658;
  param_1[0xaa] = 0;
  FUN_01908790(param_1);
  return;
}

