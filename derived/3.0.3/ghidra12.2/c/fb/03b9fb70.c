
void FUN_03b9fb70(long *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  
  *param_1 = (long)&PTR_FUN_04b79a60;
  param_1[0x36] = (long)&PTR_LAB_04b79b80;
  param_1[0x13] = (long)&PTR_LAB_04b79b30;
  if (0 < *(int *)((long)param_1 + 0x1c4)) {
    lVar3 = 0;
    do {
      plVar2 = *(long **)(param_1[0x45] + lVar3 * 8);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      lVar3 = lVar3 + 1;
      iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
    } while (lVar3 < iVar1);
  }
  __ptr = (void *)param_1[0x45];
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  FUN_03ba0d98(param_1);
  return;
}

