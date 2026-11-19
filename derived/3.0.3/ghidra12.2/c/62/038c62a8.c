
void FUN_038c62a8(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04b64340;
  FUN_038ca860();
  nn::mem::StandardAllocator::Finalize();
  if (*(char *)(param_1 + 0x1b) != '\0') {
    nn::mem::StandardAllocator::Finalize();
  }
  FUN_038ca644(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038c631c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

