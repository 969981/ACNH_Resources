
long FUN_0264a320(byte *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  byte local_4 [4];
  
  if (7 < *param_1) {
    return 0;
  }
  uVar1 = FUN_02582d8c(param_1,1);
  if (((uVar1 < 8) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) {
    local_4[0] = *param_1;
    if (7 < local_4[0]) {
      local_4[0] = 0xff;
    }
    lVar2 = FUN_02583354(DAT_055021a0,local_4,1);
    lVar3 = 0;
    if (lVar2 != 0) {
      lVar3 = lVar2 + 0x194b0;
      if (*(long *)(lVar2 + 0x194b8) == 0) {
        lVar3 = *(long *)(DAT_05574040 + 0x20);
      }
      lVar3 = lVar3 + 0x1068;
    }
  }
  else {
    lVar3 = 0;
  }
  return lVar3;
}

