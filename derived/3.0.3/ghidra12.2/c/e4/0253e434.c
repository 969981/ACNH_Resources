
undefined8 FUN_0253e434(byte *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  
  if (((((**(char **)(param_2 + 8) != '\0') && (**(char **)(param_2 + 0x60) != '\0' && *param_1 < 8)
        ) && (uVar2 = FUN_02582d8c(param_1,1), puVar1 = PTR_DAT_04bb4fb8, uVar2 < 8)) &&
      ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0' &&
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')))) &&
     ((uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8 &&
      (lVar3 = *(long *)puVar1, *(char *)(lVar3 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')))) {
    lVar4 = lVar3 + (ulong)uVar2 * 0x13f0;
    if ((**(char **)(lVar4 + 0x230) == '\0') ||
       (**(char **)(lVar3 + (ulong)uVar2 * 0x13f0 + 0x288) == '\0')) {
      FUN_02478400(lVar4 + 0x228,param_2);
      if (DAT_0556aa70 != 0) {
        *(uint *)(DAT_0556aa70 + 0x43c) = *(uint *)(DAT_0556aa70 + 0x43c) | 0x10;
      }
      return 1;
    }
  }
  return 0;
}

