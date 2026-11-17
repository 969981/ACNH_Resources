
undefined8 FUN_02efcb94(int *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  byte *pbVar4;
  
  puVar1 = PTR_DAT_04bb6270;
  iVar2 = *param_1;
  if (iVar2 == 0x3b) {
    return 1;
  }
  pbVar4 = (byte *)(param_1 + 1);
  if (7 < *pbVar4) {
    return 0;
  }
  if (iVar2 < 0x6e) {
    if ((0x37 < iVar2 - 0x24U) || ((1L << ((ulong)(iVar2 - 0x24U) & 0x3f) & 0x80000200000001U) == 0)
       ) goto LAB_02efccac;
  }
  else if (((0x24 < iVar2 - 0x6eU) || ((1L << ((ulong)(iVar2 - 0x6eU) & 0x3f) & 0x100000000fU) == 0)
           ) && ((iVar2 != 0xef && (iVar2 != 0xdb)))) {
LAB_02efccac:
    if (*(char *)((long)param_1 + 0x11) == '\0') {
      uVar3 = FUN_0252ffe8(pbVar4);
      if ((uVar3 & 1) == 0) {
        return 0;
      }
      if (*(long *)puVar1 == 0) {
        return 0;
      }
      goto LAB_02efcc48;
    }
  }
  if (*(long *)PTR_DAT_04bb6270 == 0) {
    return 0;
  }
LAB_02efcc48:
  iVar2 = FUN_00a74b78(pbVar4);
  if (iVar2 != 4) {
    return 0;
  }
  if (*DAT_055c10d8 == '\0') {
    FUN_00a76460(*(undefined8 *)puVar1,pbVar4,0xffffffffffffffff,4,0x13,5);
  }
  return 1;
}

