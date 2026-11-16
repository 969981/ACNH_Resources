
void FUN_025a8ea8(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined **ppuVar3;
  void *__ptr;
  
  __ptr = (void *)param_1[7];
  ppuVar3 = &PTR_FUN_04a85ad0;
  *param_1 = (long)&PTR_FUN_04a85ad0;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
    ppuVar3 = (undefined **)*param_1;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  iVar1 = (*(code *)ppuVar3[4])(param_1);
  if (iVar1 != -1) {
    iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
    if (iVar1 < 0xd) goto LAB_025a8f58;
  }
  if (*(int *)((long)param_1 + 0x24) == 0) {
    *(undefined4 *)((long)param_1 + 0x24) = 1;
  }
LAB_025a8f58:
  FUN_02601530(param_1);
  return;
}

