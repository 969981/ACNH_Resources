
/* WARNING: Removing unreachable block (ram,0x016e702c) */

bool FUN_016e6f44(void)

{
  uint *puVar1;
  
  if (DAT_04c487d4 == -1) {
    return false;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((((*puVar1 & 1) == 0) || ((*puVar1 >> 6 & 1) != 0)) || ((*puVar1 >> 7 & 1) != 0)) {
    return false;
  }
  return (puVar1[1] & 1) == 0;
}

