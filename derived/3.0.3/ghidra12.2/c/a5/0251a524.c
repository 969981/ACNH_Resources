
bool FUN_0251a524(byte *param_1)

{
  uint uVar1;
  
  if (7 < *param_1) {
    return false;
  }
  uVar1 = FUN_02582d8c(param_1,1);
  if ((uVar1 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')
     ) {
    return *(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0';
  }
  return false;
}

