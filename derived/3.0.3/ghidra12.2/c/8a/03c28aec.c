
void FUN_03c28aec(long *param_1)

{
  *param_1 = (long)&PTR_FUN_04b7e8f8;
  param_1[0x45] = (long)&PTR_LAB_04b7e9d0;
  if ((char)param_1[0x65] != '\0') {
    DAT_05aed538 = 0;
  }
  FUN_038e31ec(param_1 + 0x59);
  FUN_038e31ec(param_1 + 0x4f);
  FUN_038e1a84(param_1 + 0x46);
  *param_1 = (long)(PTR_DAT_04bcb5f8 + 0x10);
  FUN_03968cfc(param_1 + 0x39);
  FUN_03968cfc(param_1 + 0x2d);
  FUN_038ba020(param_1);
  return;
}

