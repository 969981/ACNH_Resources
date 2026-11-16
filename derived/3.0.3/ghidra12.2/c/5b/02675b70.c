
void FUN_02675b70(byte *param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((*param_1 < 8) &&
     ((((uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8 &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')) &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0')) ||
      (((*param_1 < 8 && (uVar1 = FUN_02582d8c(param_1,1), uVar1 < 8)) &&
       ((lVar2 = *(long *)PTR_DAT_04bb4fb8,
        *(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0' &&
        ((*(char *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d6) != '\0' &&
         (*(int *)(lVar2 + (ulong)uVar1 * 0x13f0 + 0x13d0) == 1)))))))))) {
    FUN_02674700(param_1,param_2,PTR_DAT_04bb37e0,1,0);
    return;
  }
  return;
}

