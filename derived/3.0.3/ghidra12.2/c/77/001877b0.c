
ulong FUN_001877b0(uint param_1)

{
  return (ulong)param_1 / 10000 | (ulong)(param_1 % 10000) << 0x20;
}

