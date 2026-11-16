
long FUN_0252c9d8(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (*param_1 < 8) {
    uVar2 = FUN_02582d8c(param_1,1);
    puVar1 = PTR_DAT_04bb4fb8;
    if (((uVar2 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) {
      uVar2 = FUN_02582d8c(param_1,1);
      if (uVar2 < 8) {
        lVar3 = *(long *)puVar1 + (ulong)uVar2 * 0x13f0;
        lVar4 = 0;
        if (*(char *)(lVar3 + 0x13d4) != '\0') {
          lVar4 = lVar3;
        }
      }
      else {
        lVar4 = 0;
      }
      lVar3 = 0;
      if (lVar4 != 0) {
        lVar3 = lVar4 + 8;
      }
    }
    else {
      lVar3 = 0;
    }
  }
  else {
    lVar3 = 0;
  }
  lVar4 = 0;
  if (lVar3 != 0) {
    lVar4 = lVar3 + 0x4f0;
  }
  return lVar4;
}

