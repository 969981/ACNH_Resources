
void FUN_001fd71c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcca48 + 0x10);
  FUN_0019d600(PTR_DAT_04bcc280,param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_001f79a0(param_1 + 7);
  FUN_001f79a0(param_1 + 3);
  FUN_0019d6e0(param_1);
  return;
}

