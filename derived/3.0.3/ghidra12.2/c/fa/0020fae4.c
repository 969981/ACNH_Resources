
void FUN_0020fae4(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04bccd48 + 0xb0;
  puVar2 = PTR_DAT_04bc0ec8 + 0x10;
  *param_1 = (long)(PTR_DAT_04bccd48 + 0x10);
  param_1[0x14] = (long)puVar1;
  param_1[0x35] = (long)puVar2;
  FUN_0018b1a0(param_1 + 0x35);
  if (param_1[0x31] != 0) {
    param_1[0x32] = param_1[0x31];
    FUN_00187e4c();
  }
  FUN_001efe40(param_1 + 0x2f);
  FUN_001976b0(param_1 + 0x1d);
  param_1[0x16] = (long)puVar2;
  FUN_0018b1a0();
  FUN_0019a368(param_1);
  return;
}

