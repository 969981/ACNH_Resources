
void FUN_03444fd0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0x5e3];
  *param_1 = &PTR_FUN_04b2aa78;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
      lVar3 = param_1[0x5e6];
      goto joined_r0x03445028;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
    }
  }
  lVar3 = param_1[0x5e6];
joined_r0x03445028:
  if (lVar3 != 0) {
    pvVar4 = (void *)(lVar3 + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x5e6] = 0;
    *(undefined4 *)(param_1 + 0x5e5) = 0;
  }
  return;
}

