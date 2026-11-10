
void FUN_001ba0ec(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcc578 + 0x10);
  FUN_0019d600(&DAT_04c58c58,param_1);
  (**(code **)(*param_1 + 0x18))(param_1);
  FUN_001ba368(param_1 + 0x2c);
  FUN_001ba368(param_1 + 3);
  FUN_0019d6e0(param_1);
  return;
}

