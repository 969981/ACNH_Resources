
void FUN_00728940(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04900c68;
  puVar1 = PTR_DAT_04bb3058;
  param_1[4] = &PTR_LAB_04900d28;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x10]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x10] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x10] + 8))();
  }
  param_1[0x10] = 0;
  *param_1 = &PTR_LAB_04900e88;
  param_1[4] = &PTR_LAB_04900f10;
  plVar3 = (long *)param_1[9];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[9];
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (param_1[0xc] != 0) {
    if (0 < *(int *)(param_1 + 0xb)) {
      lVar5 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0xc] + lVar5 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar5 = lVar5 + 1;
        *puVar4 = param_1[0xd];
        param_1[0xd] = puVar4;
      } while (lVar5 < *(int *)(param_1 + 0xb));
    }
    __ptr = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

