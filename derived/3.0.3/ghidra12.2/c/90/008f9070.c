
float FUN_008f9070(void)

{
  uint *puVar1;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 1 & 1) != 0) && ((*puVar1 >> 0x1a & 1) != 0)) && (DAT_05abff60 != 0)) {
      return ((float)*(int *)(DAT_05abff60 + 0x28) * 5.0 +
             (float)*(int *)(DAT_05abff60 + 0x38) * 5.0 + 5.0) * 0.5;
    }
  }
  if (DAT_05292338 == 0) {
    return 40.0;
  }
  return *(float *)(DAT_05292338 + 0xd74);
}

