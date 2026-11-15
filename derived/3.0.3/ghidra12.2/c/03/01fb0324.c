
void FUN_01fb0324(byte *param_1,uint param_2)

{
  if ((param_2 < 4) && (param_2 + 7 < 0xf)) {
    *param_1 = *param_1 | (byte)(1 << (ulong)(param_2 & 7));
  }
  return;
}

