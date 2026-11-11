
void FUN_00446cb0(ulong *param_1,ulong param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (ulong)DAT_04c6f640 & 0xfffffffffffffffc;
  param_1[1] = param_2;
  DAT_04c6f640 = param_1;
  return;
}

