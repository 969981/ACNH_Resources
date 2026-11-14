
void FUN_01592aa0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_049ae0b8;
  param_1[4] = &PTR_LAB_049ae140;
  plVar2 = (long *)param_1[9];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[9];
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0xc] != 0) {
    if (0 < *(int *)(param_1 + 0xb)) {
      lVar4 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0xc] + lVar4 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar4 = lVar4 + 1;
        *puVar3 = param_1[0xd];
        param_1[0xd] = puVar3;
      } while (lVar4 < *(int *)(param_1 + 0xb));
    }
    __ptr = (void *)param_1[0xe];
    *(undefined4 *)(param_1 + 0xb) = 0;
    if (__ptr != (void *)0x0) {
      lVar4 = *(long *)puVar1;
      if (lVar4 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(lVar4,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined8 *)((long)param_1 + 0x5c) = 0;
  }
  lVar4 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_01592c18;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[1] = 1;
LAB_01592c18:
  lVar4 = *(long *)puVar1;
  if (lVar4 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(lVar4,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01592c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

