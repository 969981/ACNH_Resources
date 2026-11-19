
void FUN_03c5aa08(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04b81670;
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)((long)param_1 + 0x5e) != '\0') {
    (**(code **)(param_1[9] + 0x18))(param_1 + 9);
    pvVar3 = (void *)param_1[10];
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x5e) = 0;
  }
  if (*(char *)((long)param_1 + 0x46) != '\0') {
    (**(code **)(param_1[6] + 0x18))(param_1 + 6);
    pvVar3 = (void *)param_1[7];
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x46) = 0;
  }
  *param_1 = &PTR_LAB_04b81ac0;
  if (param_1[3] != 0) {
    (**(code **)(param_1[3] + 8))(param_1[1]);
  }
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03c5ab2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

