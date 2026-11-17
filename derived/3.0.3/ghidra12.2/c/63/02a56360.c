
long FUN_02a56360(int *param_1)

{
  long lVar1;
  
  if (*(int *)(DAT_055f6860 + 0x7c0) != -1) {
    if (*(int *)(DAT_055f6860 + 0x7c0) != 0) {
      lVar1 = 0;
      if (*(char *)(DAT_055f6860 + 0x63578) != '\0') {
        lVar1 = DAT_055f6860 + 0x634f8;
      }
      return lVar1;
    }
    if (((*(char *)(DAT_055f6860 + 0x2e6c) != '\0') && (*(int *)(DAT_055f6860 + 0x2d18) == *param_1)
        ) && (*(int *)(DAT_055f6860 + 0x2d1c) == param_1[1])) {
      lVar1 = DAT_055f6860 + 0x2dec;
      if (*(int *)(DAT_055f6860 + 0x2d20) != param_1[2] || *(int *)(DAT_055f6860 + 0x2d0c) != 4) {
        lVar1 = 0;
      }
      return lVar1;
    }
  }
  return 0;
}

