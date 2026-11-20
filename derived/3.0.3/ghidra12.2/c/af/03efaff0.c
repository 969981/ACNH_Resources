
void FUN_03efaff0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_LAB_04ba7580;
  puVar2 = param_1 + 7;
  do {
    puVar2 = (undefined8 *)puVar2[1];
  } while (puVar2 != param_1 + 7);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03efb050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

