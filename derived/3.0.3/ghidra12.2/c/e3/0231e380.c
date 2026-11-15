
void FUN_0231e380(long param_1)

{
  byte *pbVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if ((*pbVar1 < 8) && (uVar4 = FUN_02582d8c(pbVar1,1), puVar2 = PTR_DAT_04bb4fb8, uVar4 < 8)) {
    if ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0') &&
       (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) != '\0' &&
         (uVar4 = FUN_02582d8c(pbVar1,1), uVar4 < 8)) &&
        (lVar6 = *(long *)puVar2, *(char *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0x13d4) != '\0')))) {
      piVar7 = (int *)(lVar6 + (ulong)uVar4 * 0x13f0 + 8);
      iVar5 = *piVar7;
      lVar8 = *(long *)PTR_DAT_04bb27d0;
      bVar3 = false;
      if (lVar8 != 0) {
        if (*(long *)(lVar8 + 0x28) == 0) {
          bVar3 = false;
        }
        else {
          bVar3 = *(int *)(lVar8 + 0x80) == 1;
        }
      }
      *(bool *)(lVar6 + (ulong)uVar4 * 0x13f0 + 0xc) = bVar3;
      if (10 < iVar5) {
        iVar5 = 0xb;
      }
      if (iVar5 < 2) {
        iVar5 = 1;
      }
      *piVar7 = iVar5 + -1;
    }
  }
  return;
}

