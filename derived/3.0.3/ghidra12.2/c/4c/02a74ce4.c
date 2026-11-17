
void FUN_02a74ce4(long param_1)

{
  uint *puVar1;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      FUN_02a72e90(param_1 + 0x1c0);
      return;
    }
  }
  return;
}

