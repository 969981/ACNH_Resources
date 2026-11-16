
void FUN_02532d84(byte *param_1)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  
  if ((((*param_1 < 8) && (uVar3 = FUN_02582d8c(param_1,1), puVar1 = PTR_DAT_04bb4fb8, uVar3 < 8))
      && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
     (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
       (uVar3 = FUN_02582d8c(param_1,1), uVar3 < 8)) &&
      (lVar5 = *(long *)puVar1, *(char *)(lVar5 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))) {
    piVar6 = (int *)(lVar5 + (ulong)uVar3 * 0x13f0 + 8);
    iVar4 = *piVar6;
    lVar7 = *(long *)PTR_DAT_04bb27d0;
    bVar2 = false;
    if (lVar7 != 0) {
      if (*(long *)(lVar7 + 0x28) == 0) {
        bVar2 = false;
      }
      else {
        bVar2 = *(int *)(lVar7 + 0x80) == 1;
      }
    }
    *(bool *)(lVar5 + (ulong)uVar3 * 0x13f0 + 0xc) = bVar2;
    if (10 < iVar4) {
      iVar4 = 0xb;
    }
    if (iVar4 < 2) {
      iVar4 = 1;
    }
    *piVar6 = iVar4 + -1;
  }
  return;
}

