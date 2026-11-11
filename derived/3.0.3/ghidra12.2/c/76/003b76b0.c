
long FUN_003b76b0(ulong param_1)

{
  return (-(param_1 >> 0x1f & 1) & 0xffffff0000000000 | (param_1 & 0xffffffff) << 8) +
         (long)(int)param_1 * 0xc + 0x40;
}

