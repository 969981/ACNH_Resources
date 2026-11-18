
void FUN_032a1870(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0xd];
  *param_1 = &PTR_LAB_04b18e08;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar4 != (void *)0x0) {
    FUN_032afbc8(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  *param_1 = &PTR_LAB_04b18c60;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  pvVar4 = (void *)param_1[3];
  param_1[4] = 0;
  param_1[5] = 0;
  if (pvVar4 != (void *)0x0) {
    FUN_032d0688(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
      lVar3 = *(long *)puVar1;
      goto joined_r0x032a1980;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
    }
  }
  lVar3 = *(long *)puVar1;
joined_r0x032a1980:
  if (lVar3 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(lVar3,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032a1970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

