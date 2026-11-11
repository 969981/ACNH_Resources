
ulong FUN_0039e460(uint param_1)

{
  if ((int)param_1 < 0x10) {
    return (ulong)((param_1 & 3) * 4 + 4);
  }
  if (param_1 < 0x1c) {
    return (ulong)((param_1 - 0x10 >> 2) + 2) << 4;
  }
  return *(ulong *)(&DAT_04135398 + (ulong)(param_1 - 0x1c) * 8);
}

