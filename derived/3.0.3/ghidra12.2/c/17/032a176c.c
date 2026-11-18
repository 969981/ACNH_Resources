
void FUN_032a176c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0xd];
  *param_1 = &PTR_LAB_04b18e08;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar4 != (void *)0x0) {
    FUN_032afbc8(pvVar4);
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
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
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(pvVar4);
      return;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,pvVar4);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032a1848. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      return;
    }
  }
  return;
}

