
void FUN_0034d150(undefined8 param_1,byte *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  
  iVar2 = *(int *)(param_2 + 0x20);
  uVar6 = FUN_00348e80(param_2[1],1 < iVar2,1 < *(ushort *)(param_2 + 8));
  uVar3 = *(undefined4 *)(&DAT_04130a28 + (ulong)uVar6 * 4);
  (*DAT_04c62120)(param_1);
  (**(code **)PTR_DAT_04bcf078)(param_1,*(undefined4 *)(param_2 + 0x14));
  iVar8 = iVar2;
  if (uVar6 != 4) {
    iVar8 = *(int *)(param_2 + 0x18);
  }
  (*DAT_04c62140)(param_1,iVar8);
  if ((uVar6 & 0xfffffffd) != 5) {
    iVar2 = *(int *)(param_2 + 0x1c);
  }
  (*DAT_04c62148)(param_1,iVar2);
  (**(code **)PTR_DAT_04bcf720)(param_1,*(undefined2 *)(param_2 + 6));
  if (1 < *(ushort *)(param_2 + 8)) {
    (**(code **)PTR_DAT_04bcf728)(param_1);
  }
  (**(code **)PTR_DAT_04bcf098)(param_1,uVar3);
  uVar11 = 0x62;
  piVar9 = &DAT_04130558;
  do {
    uVar12 = uVar11 >> 1;
    uVar11 = uVar11 + ~uVar12;
    piVar4 = piVar9 + uVar12 * 2 + 2;
    if (*(int *)(param_2 + 0xc) <= piVar9[uVar12 * 2]) {
      uVar11 = uVar12;
      piVar4 = piVar9;
    }
    piVar9 = piVar4;
  } while (uVar11 != 0);
  if ((piVar9 == &DAT_04130868) || (*(int *)(param_2 + 0xc) < *piVar9)) {
    iVar8 = 0;
  }
  else {
    iVar8 = piVar9[1];
  }
  (**(code **)PTR_DAT_04bcf090)(param_1,iVar8);
  uVar6 = *(uint *)(param_2 + 0x10) & 0x180;
  uVar10 = 4;
  if (*(short *)(param_2 + 2) != 1 && uVar6 != 0) {
    uVar10 = 0xc;
  }
  uVar10 = uVar10 | *(uint *)(param_2 + 0x10) >> 10 & 1 | (*param_2 >> 2 & 1) << 5;
  if (*(short *)(param_2 + 2) == 1) {
    lVar7 = FUN_00348dc0(*(undefined4 *)(param_2 + 0x14),*(int *)(param_2 + 0xc) >> 8);
    bVar5 = uVar6 != 0;
    uVar6 = 0x10;
    if (bVar5) {
      uVar6 = 0x40;
    }
    uVar10 = uVar10 | uVar6;
    uVar11 = 0xffffffffffffffe0;
    if (bVar5) {
      uVar11 = 0xffffffffffffff80;
    }
    lVar1 = 0x1f;
    if (bVar5) {
      lVar1 = 0x7f;
    }
    (*DAT_04c621c0)(param_1,lVar1 + lVar7 & uVar11);
  }
  (**(code **)PTR_DAT_04bcf0a0)(param_1,uVar10);
  if ((*param_2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0034d3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)PTR_DAT_04bcf758)(param_1,param_2 + 0x24);
  return;
}

