
void FUN_03c54860(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b811b8;
  plVar2 = (long *)param_1[7];
  plVar1 = param_1 + 6;
  if (plVar2 != plVar1) {
    plVar4 = plVar2;
    do {
      plVar4 = (long *)plVar4[1];
    } while (plVar4 + -0x2c != param_1 + -0x26);
  }
  __ptr = (void *)param_1[10];
  if (__ptr == (void *)0x0) goto LAB_03c54978;
  if (plVar2 == plVar1) {
LAB_03c54938:
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  else {
    do {
      plVar4 = (long *)plVar2[1];
      plVar3 = plVar4;
      if (*plVar2 != 0) {
        *(long **)(*plVar2 + 8) = plVar4;
        plVar3 = (long *)plVar2[1];
      }
      if (plVar3 != (long *)0x0) {
        *plVar3 = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      plVar2 = plVar2 + -0x2c;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
      (**(code **)*plVar2)(plVar2);
      *plVar2 = param_1[9];
      param_1[9] = plVar2;
      plVar2 = plVar4;
    } while (plVar4 != plVar1);
    __ptr = (void *)param_1[10];
    if (__ptr != (void *)0x0) goto LAB_03c54938;
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
LAB_03c54978:
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
    plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

