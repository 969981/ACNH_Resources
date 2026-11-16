
/* WARNING: Removing unreachable block (ram,0x0261dd54) */

uint FUN_0261dc78(void)

{
  uint *puVar1;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x57d4aeba ||
      *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x1693a871) {
    return 1;
  }
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 3 & 1) != 0) {
    return 1;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  return *puVar1 >> 7 & 1;
}

