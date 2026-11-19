
void FUN_03b16a30(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04b73958;
  (**(code **)(*(long *)param_1[0xc] + 0x68))((long *)param_1[0xc],param_1 + 1,0,0);
  thunk_FUN_0035008c(param_1 + 1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03b16aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

