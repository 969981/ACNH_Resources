
void FUN_0093a788(long param_1)

{
  uint *puVar1;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) == 0) {
        return;
      }
      if ((*puVar1 >> 1 & 1) == 0) {
        return;
      }
    }
    if (*(char *)(param_1 + 0x1158) != '\0') {
      FUN_01384d80();
      *(char *)(param_1 + 0x1158) = '\0';
    }
  }
  return;
}

