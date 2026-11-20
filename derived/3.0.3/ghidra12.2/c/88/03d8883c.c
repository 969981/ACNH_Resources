
void FUN_03d8883c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04b92c58;
  if ((long *)param_1[0x89] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x89] + 0x18))();
  }
  puVar2 = PTR_DAT_04bd38c8;
  puVar1 = PTR_DAT_04bb2698;
  puVar4 = *(undefined8 **)PTR_DAT_04bd38c8;
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)(*(long *)*puVar4 + 0x20))();
    if (*(long *)puVar1 == 0) {
      free(puVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,puVar4);
      }
    }
    *(undefined8 *)puVar2 = 0;
  }
  if ((long *)param_1[0x85] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x85] + 8))();
  }
  pvVar5 = (void *)param_1[0x82];
  if (pvVar5 == (void *)0x0) {
LAB_03d8890c:
    plVar3 = (long *)param_1[0x81];
  }
  else {
    if (*(long *)puVar1 != 0) {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
      goto LAB_03d8890c;
    }
    free(pvVar5);
    plVar3 = (long *)param_1[0x81];
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  pvVar5 = (void *)param_1[0x80];
  if (pvVar5 == (void *)0x0) {
LAB_03d8895c:
    plVar3 = (long *)param_1[0x83];
  }
  else {
    FUN_038e1a84((long)pvVar5 + 0x98);
    FUN_038e1a84((long)pvVar5 + 0x58);
    if (*(long *)puVar1 != 0) {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
      goto LAB_03d8895c;
    }
    free(pvVar5);
    plVar3 = (long *)param_1[0x83];
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((long *)param_1[0x88] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x88] + 8))();
  }
  puVar4 = *(undefined8 **)PTR_DAT_04bd1e10;
  if (puVar4 != (undefined8 *)0x0) {
    *(undefined8 *)PTR_DAT_04bd1e10 = 0;
    (**(code **)*puVar4)();
    puVar2 = PTR_DAT_04bd1e18;
    if (*(long **)PTR_DAT_04bd1e18 != (long *)0x0) {
      (**(code **)(**(long **)PTR_DAT_04bd1e18 + 8))();
    }
    *(undefined8 *)puVar2 = 0;
  }
  pvVar5 = (void *)param_1[0xa1];
  if (pvVar5 == (void *)0x0) {
LAB_03d889f8:
    pvVar5 = (void *)param_1[0x84];
  }
  else {
    FUN_038e1a84((long)pvVar5 + 0x40);
    if (*(long *)puVar1 != 0) {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
      goto LAB_03d889f8;
    }
    free(pvVar5);
    pvVar5 = (void *)param_1[0x84];
  }
  if (pvVar5 != (void *)0x0) {
    FUN_03d5ada4(pvVar5);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  FUN_03d5aae0(param_1 + 0x8d);
  FUN_038e1a84(param_1 + 0x78);
  param_1[0x65] = (long)(PTR_DAT_04bb24a8 + 0x10);
  FUN_038bbe20(param_1 + 0x65);
  lVar6 = param_1[0x66];
  param_1[0x65] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_03d88b28;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 0x65));
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
  param_1[0x66] = 1;
LAB_03d88b28:
  if ((char)param_1[100] != '\0') {
    DAT_05af83f0 = 0;
  }
  FUN_038e31ec(param_1 + 0x58);
  FUN_038e31ec(param_1 + 0x4e);
  FUN_038e1a84(param_1 + 0x45);
  *param_1 = (long)(PTR_DAT_04bcb5f8 + 0x10);
  FUN_03968cfc(param_1 + 0x39);
  FUN_03968cfc(param_1 + 0x2d);
  FUN_038ba020(param_1);
  return;
}

