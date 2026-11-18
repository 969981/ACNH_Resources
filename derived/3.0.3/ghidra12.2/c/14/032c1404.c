
void FUN_032c1404(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar3 = param_1[3];
  if (lVar3 != 0) {
    pvVar4 = (void *)(lVar3 + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined4 *)(param_1 + 5) = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  if (*param_1 != 0) {
    pvVar4 = (void *)(*param_1 + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}

