
void FUN_01d706a4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *__ptr;
  long lVar3;
  void *__ptr_00;
  long lVar4;
  
  *param_1 = &PTR_FUN_04a59fd8;
  FUN_01d707f4();
  __ptr = (undefined8 *)param_1[8];
  param_1[7] = &PTR_FUN_04a59ff8;
  puVar1 = PTR_DAT_04bb2698;
  if (__ptr == (undefined8 *)0x0) goto LAB_01d7075c;
  __ptr_00 = (void *)__ptr[1];
  if (__ptr_00 == (void *)0x0) {
LAB_01d70728:
    if (*(long *)puVar1 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr_00);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr_00);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr_00);
      }
    }
    *__ptr = 0;
    __ptr[1] = 0;
    __ptr = (undefined8 *)param_1[8];
    if (__ptr != (undefined8 *)0x0) goto LAB_01d70728;
  }
  param_1[8] = 0;
LAB_01d7075c:
  lVar3 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      return;
    }
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

