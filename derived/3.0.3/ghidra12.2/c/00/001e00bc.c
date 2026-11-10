
void FUN_001e00bc(long *param_1)

{
  uint *puVar1;
  
  *param_1 = (long)(PTR_DAT_04bcbec0 + 0x10);
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  *param_1 = (long)&PTR_FUN_0483c890;
  *(undefined8 *)((long)param_1 + 0xc) = 0xffffffffffffffff;
  memset(param_1 + 3,0,0x10);
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0x19) = 2;
  if (DAT_04c58c68 != '\0') {
    puVar1 = (uint *)FUN_03876070(DAT_04c58c60);
    if (*puVar1 != 0) {
      param_1[7] = DAT_04c5e5e8 + (ulong)*puVar1 * 0x148;
      return;
    }
  }
  param_1[7] = (long)&DAT_04c5e5f0;
  return;
}

