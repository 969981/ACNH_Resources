
/* WARNING: Removing unreachable block (ram,0x02532d78) */

byte FUN_02532d08(byte *param_1)

{
  if ((ulong)*param_1 < 8) {
    return *(byte *)(DAT_054f5738 + (ulong)*param_1 * 0x80 + 0x302) >> 1 & 1;
  }
  return 0;
}

