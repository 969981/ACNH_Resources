
uint FUN_016e6434(void)

{
  uint *puVar1;
  
  if (DAT_04c487d4 == -1) {
    return 0;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  return *puVar1 & 1;
}

