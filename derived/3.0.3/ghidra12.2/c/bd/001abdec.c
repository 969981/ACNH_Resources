
void FUN_001abdec(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcc438 + 0x10);
  if (param_1[0xb] != 0) {
    (**(code **)(**(long **)(param_1[0xb] + 8) + 0x80))();
  }
  FUN_00197350(param_1);
  return;
}

