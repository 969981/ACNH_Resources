
/* WARNING: Removing unreachable block (ram,0x017b7914) */

uint FUN_017b7888(void)

{
  uint *puVar1;
  uint uVar2;
  
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  uVar2 = 0;
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((puVar1[1] & 1) != 0) {
    uVar2 = *puVar1 & 1;
  }
  return uVar2;
}

