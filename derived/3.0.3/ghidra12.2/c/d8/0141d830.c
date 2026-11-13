
void FUN_0141d830(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_049990b0;
  param_1[10] = &PTR_LAB_04999298;
  plVar2 = (long *)param_1[0xf];
  param_1[6] = &PTR_LAB_04999210;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0xf];
  }
  *(undefined4 *)(param_1 + 0x15) = 0;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x12] != 0) {
    if (0 < *(int *)(param_1 + 0x11)) {
      lVar4 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x12] + lVar4 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar4 = lVar4 + 1;
        *puVar3 = param_1[0x13];
        param_1[0x13] = puVar3;
      } while (lVar4 < *(int *)(param_1 + 0x11));
    }
    __ptr = (void *)param_1[0x14];
    *(undefined4 *)(param_1 + 0x11) = 0;
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
    *(undefined4 *)((long)param_1 + 0xa4) = 0;
    *(undefined8 *)((long)param_1 + 0x9c) = 0;
    *(undefined8 *)((long)param_1 + 0x94) = 0;
    *(undefined8 *)((long)param_1 + 0x8c) = 0;
  }
  lVar4 = param_1[7];
  param_1[6] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_0141d9b8;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)(param_1 + 6));
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
  param_1[7] = 1;
LAB_0141d9b8:
  lVar4 = *(long *)puVar1;
  if (lVar4 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(lVar4,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0141d9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

