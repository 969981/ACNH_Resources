
void FUN_03c5a8f8(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  
  *param_1 = &PTR_FUN_04b81670;
  if (*(char *)((long)param_1 + 0x5e) != '\0') {
    (**(code **)(param_1[9] + 0x18))(param_1 + 9);
    pvVar2 = (void *)param_1[10];
    if (pvVar2 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x5e) = 0;
  }
  if (*(char *)((long)param_1 + 0x46) != '\0') {
    (**(code **)(param_1[6] + 0x18))(param_1 + 6);
    pvVar2 = (void *)param_1[7];
    if (pvVar2 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x46) = 0;
  }
  *param_1 = &PTR_LAB_04b81ac0;
  if (param_1[3] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03c5a9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[3] + 8))(param_1[1]);
  return;
}

