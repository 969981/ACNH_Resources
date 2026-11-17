
undefined8 FUN_02e1f550(int param_1)

{
  if ((param_1 - 10U < 8) ||
     ((param_1 - 0x54U < 0x14 && ((1 << (ulong)(param_1 - 0x54U & 0x1f) & 0x81001U) != 0)))) {
    return 1;
  }
  return 0;
}

