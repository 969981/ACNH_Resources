
/* WARNING: Removing unreachable block (ram,0x016e6428) */

uint FUN_016e63c4(void)

{
  uint *puVar1;
  
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  return *puVar1 >> 1 & 1;
}

