
void FUN_015f842c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_LAB_049b15d0;
  puVar1 = PTR_DAT_04bd11b8 + 0x10;
  param_1[0x66] = puVar1;
  FUN_0390d560(param_1 + 0x66);
  param_1[0x57] = puVar1;
  FUN_0390d560(param_1 + 0x57);
  FUN_01629448(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x015f84a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

