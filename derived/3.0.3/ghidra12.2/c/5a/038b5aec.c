
void FUN_038b5aec(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b63440;
  if ((long *)param_1[0x10] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x10] + 8))();
    param_1[0x10] = 0;
  }
  FUN_038b3c54(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038b5b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

