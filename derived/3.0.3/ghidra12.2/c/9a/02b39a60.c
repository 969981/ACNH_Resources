
void FUN_02b39a60(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04aa2ab8;
  FUN_009391e0(param_1 + 0x1b9a);
  FUN_009391e0(param_1 + 0x1b85);
  FUN_009391e0(param_1 + 0x1b70);
  param_1[0xdb9] = &PTR_LAB_04aa2a98;
  FUN_02b39080(param_1 + 0xdba);
  param_1[2] = &PTR_LAB_04aa2a98;
  FUN_02b39080(param_1 + 3);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b39af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

