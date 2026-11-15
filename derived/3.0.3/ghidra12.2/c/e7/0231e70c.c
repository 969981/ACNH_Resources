
long FUN_0231e70c(long param_1)

{
  byte *pbVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  
  if (*(int *)(param_1 + 0x178) == 1) {
    return 0;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if ((((7 < *pbVar1) || (uVar4 = FUN_02582d8c(pbVar1,1), puVar3 = PTR_DAT_04bb4fb8, 7 < uVar4)) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')) ||
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) == '\0' ||
       (uVar4 = FUN_02582d8c(pbVar1,1), 7 < uVar4)) ||
      (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')))) {
    return 0;
  }
  lVar5 = *(long *)puVar3 + (ulong)uVar4 * 0x13f0;
  lVar2 = 0;
  if (*(int *)(lVar5 + 0x4f8) != 0) {
    lVar2 = lVar5 + 0x4f8;
  }
  return lVar2;
}

