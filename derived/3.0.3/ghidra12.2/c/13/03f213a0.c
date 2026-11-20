
void FUN_03f213a0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *__dest;
  long *plVar3;
  void *pvVar4;
  int *piVar5;
  
  *param_1 = &PTR_FUN_04ba8240;
  param_1[1] = &PTR_LAB_04ba82d0;
  piVar5 = (int *)(param_1 + 3);
  iVar1 = *piVar5;
  plVar3 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar3, iVar1 != 0) {
    if (iVar1 < 1) {
      plVar3 = (long *)0x0;
    }
    else {
      __dest = (undefined8 *)param_1[4];
      plVar3 = (long *)*__dest;
      memmove(__dest,__dest + 1,(long)(iVar1 * 8 + -8));
      *(int *)(param_1 + 3) = *(int *)(param_1 + 3) + -1;
    }
    (**(code **)(*plVar3 + 0x10))(plVar3);
    (**(code **)(*plVar3 + 8))(plVar3);
    plVar3 = (long *)PTR_DAT_04bb2698;
    iVar1 = *piVar5;
  }
  pvVar4 = (void *)param_1[4];
  if (pvVar4 != (void *)0x0) {
    if (*plVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*plVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    piVar5[0] = 0;
    piVar5[1] = 0;
    param_1[4] = 0;
  }
  pvVar4 = (void *)param_1[10];
  if (pvVar4 != (void *)0x0) {
    if (*plVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*plVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[10] = 0;
  }
  pvVar4 = (void *)param_1[0x18];
  if (pvVar4 != (void *)0x0) {
    if (*plVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*plVar3,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0x17] = 0;
    param_1[0x18] = 0;
  }
  return;
}

