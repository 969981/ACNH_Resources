
ulong FUN_0049f970(ulong param_1,byte *param_2,long param_3)

{
  param_1 = ~param_1;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    param_1 = *(ulong *)(&DAT_04141710 + (param_1 & 0xff ^ (ulong)*param_2) * 8) ^ param_1 >> 8;
    param_2 = param_2 + 1;
  }
  return ~param_1;
}

