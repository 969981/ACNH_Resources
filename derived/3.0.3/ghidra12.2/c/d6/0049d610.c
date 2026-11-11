
void FUN_0049d610(long param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  
  FUN_004715a0(param_1 + 0x18);
  iVar10 = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  if (1 < *(int *)(param_1 + 0xc0)) {
    iVar10 = 0;
    lVar9 = 1;
    piVar7 = (int *)(*(long *)(param_1 + 0xb8) + 0xc);
    do {
      piVar1 = piVar7 + -1;
      iVar5 = *piVar7;
      piVar7 = piVar7 + 4;
      lVar9 = lVar9 + 2;
      iVar10 = (iVar10 + iVar5 + 1) - *piVar1;
    } while (lVar9 < *(int *)(param_1 + 0xc0));
    if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < iVar10) {
      uVar4 = FUN_00426720(PTR_DAT_048607b8,iVar10,1,*(undefined8 *)(param_1 + 0x40),
                           *(undefined4 *)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x40) = uVar4;
    }
  }
  iVar5 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x48) != iVar10) {
    *(int *)(param_1 + 0x48) = iVar10;
    iVar5 = iVar10;
  }
  if (1 < *(int *)(param_1 + 0xc0)) {
    lVar8 = *(long *)(param_1 + 0x40);
    uVar4 = *(undefined8 *)PTR_PTR_04bd4d20;
    lVar13 = 0;
    lVar11 = 2;
    lVar9 = lVar8;
    while( true ) {
      lVar2 = *(long *)(param_1 + 0xb8) + lVar13;
      lVar3 = (long)*(int *)(lVar2 + 8);
      uVar12 = *(int *)(lVar2 + 0xc) - lVar3;
      FUN_0043a2b0(lVar9,((int)lVar8 + iVar5) - (int)lVar9,
                   *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80) + lVar3,
                   uVar12 & 0xffffffff);
      *(undefined1 *)(lVar9 + uVar12) = 0;
      uVar6 = *(uint *)(param_1 + 0x38);
      if (uVar6 == (*(uint *)(param_1 + 0x3c) & 0x3fffffff)) {
        FUN_00426990(uVar4,param_1 + 0x30,8);
        uVar6 = *(uint *)(param_1 + 0x38);
      }
      *(long *)(*(long *)(param_1 + 0x30) + (long)(int)uVar6 * 8) = lVar9;
      *(uint *)(param_1 + 0x38) = uVar6 + 1;
      FUN_00471240(param_1 + 0x18,lVar9,lVar11);
      if (*(int *)(param_1 + 0xc0) <= (int)lVar11 + 1) break;
      lVar9 = lVar9 + ((int)uVar12 + 1);
      lVar8 = *(long *)(param_1 + 0x40);
      iVar5 = *(int *)(param_1 + 0x48);
      lVar11 = lVar11 + 2;
      lVar13 = lVar13 + 0x10;
    }
  }
  return;
}

