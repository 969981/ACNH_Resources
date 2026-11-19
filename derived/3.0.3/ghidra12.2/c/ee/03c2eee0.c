
void FUN_03c2eee0(long *param_1)

{
  long *plVar1;
  
  *param_1 = (long)&PTR_FUN_04b7eae0;
  param_1[0x45] = (long)&PTR_LAB_04b7ebb8;
  FUN_038e1a84(param_1 + 0x47c);
  if ((char)param_1[0x65] != '\0') {
    DAT_05aed590 = 0;
  }
  FUN_038e31ec(param_1 + 0x59);
  FUN_038e31ec(param_1 + 0x4f);
  FUN_038e1a84(param_1 + 0x46);
  *param_1 = (long)(PTR_DAT_04bcb5f8 + 0x10);
  FUN_03968cfc(param_1 + 0x39);
  FUN_03968cfc(param_1 + 0x2d);
  FUN_038ba020(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03c2ef90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

