
void FUN_03bc4790(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *__ptr;
  
  __ptr = param_1 + -1;
  *__ptr = &PTR_LAB_04b7ac30;
  *param_1 = &PTR_FUN_04b7aca0;
  FUN_03bc4500(__ptr);
  FUN_038e1a84(param_1 + 0x2d);
  if (DAT_05ae7600 == 0) {
    free(__ptr);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03bc47f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
  return;
}

