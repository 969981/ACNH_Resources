
void FUN_007c51c8(undefined8 *param_1)

{
  long *plVar1;
  
  FUN_038b3c54(param_1 + 6);
  *param_1 = &PTR_LAB_04ba8860;
  if (*(char *)(param_1 + 1) != '\0') {
    __cxa_pure_virtual(param_1);
    *(undefined1 *)(param_1 + 1) = 0;
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007c5234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

