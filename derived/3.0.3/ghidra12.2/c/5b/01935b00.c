
void FUN_01935b00(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bbf8f8;
  *param_1 = &PTR_FUN_049deff0;
  param_1[0x1d] = 0;
  param_1[0x11] = puVar1 + 0x98;
  plVar2 = (long *)param_1[0x16];
  param_1[0xd] = puVar1 + 0x10;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x16];
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x19] != 0) {
    if (0 < *(int *)(param_1 + 0x18)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x19] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x1a];
        param_1[0x1a] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x18));
    }
    pvVar5 = (void *)param_1[0x1b];
    *(undefined4 *)(param_1 + 0x18) = 0;
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
    *(undefined4 *)((long)param_1 + 0xdc) = 0;
    *(undefined8 *)((long)param_1 + 0xd4) = 0;
    *(undefined8 *)((long)param_1 + 0xcc) = 0;
    *(undefined8 *)((long)param_1 + 0xc4) = 0;
  }
  lVar6 = param_1[0xe];
  param_1[0xd] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_01935c90;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0xd));
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
  param_1[0xe] = 1;
LAB_01935c90:
  puVar1 = PTR_DAT_04bb3058;
  param_1[6] = PTR_DAT_04bb2fe8 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xc]);
  if (((uVar3 & 1) != 0) && (pvVar5 = (void *)param_1[0xc], pvVar5 != (void *)0x0)) {
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
  param_1[0xc] = 0;
  return;
}

