
void FUN_003878d4(ushort *param_1,ushort param_2,ushort param_3)

{
  *param_1 = (param_2 & 7) << 4 | (param_3 & 1) << 7 | *param_1 & 0xff0f;
  return;
}

