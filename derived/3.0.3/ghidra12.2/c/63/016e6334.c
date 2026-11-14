
undefined8 FUN_016e6334(void)

{
  uint *puVar1;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x1a & 1) != 0) && ((*puVar1 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

