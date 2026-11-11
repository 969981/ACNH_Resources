
void FUN_003878b8(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = param_2 & 3 | (param_3 & 3) << 2 | *param_1 & 0xfff0;
  return;
}

