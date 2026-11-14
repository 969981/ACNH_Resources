
void FUN_01a0c010(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_049f98e0;
  puVar1 = PTR_DAT_04bb3058;
  param_1[4] = &PTR_LAB_049f99a0;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x10]);
  if (((uVar2 & 1) != 0) && (pvVar4 = (void *)param_1[0x10], pvVar4 != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
  }
  param_1[0x10] = 0;
  *param_1 = &PTR_LAB_049f9b00;
  param_1[4] = &PTR_LAB_049f9b88;
  plVar3 = (long *)param_1[9];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[9];
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xc] != 0) {
    if (0 < *(int *)(param_1 + 0xb)) {
      lVar6 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0xc] + lVar6 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar6 = lVar6 + 1;
        *puVar5 = param_1[0xd];
        param_1[0xd] = puVar5;
      } while (lVar6 < *(int *)(param_1 + 0xb));
    }
    pvVar4 = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  lVar6 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

