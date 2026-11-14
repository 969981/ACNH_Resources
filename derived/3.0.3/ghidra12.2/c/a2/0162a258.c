
void FUN_0162a258(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_049b4f20;
  param_1[0xef] = PTR_DAT_04bd11b8 + 0x10;
  FUN_0390d560(param_1 + 0xef);
  FUN_01629448(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0162a2c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

