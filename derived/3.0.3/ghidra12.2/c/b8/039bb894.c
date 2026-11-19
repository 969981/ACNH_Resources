
void FUN_039bb894(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b6a858;
  param_1[1] = 0;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 8))();
  }
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_038e1a84(param_1 + 0x16);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x039bb93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

