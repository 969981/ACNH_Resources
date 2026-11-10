
ulong FUN_0016b7a0(byte *param_1,long param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    param_2 = param_2 + -1;
    lVar1 = lVar1 + (ulong)*(uint *)(PTR_DAT_04bcb698 + (ulong)*param_1 * 8);
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return lVar1 + 7U >> 3;
}

