
long FUN_00672680(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  if (*(long *)(param_2 + 0x28) == 0) {
    lVar5 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  else {
    FUN_004435a0();
    lVar5 = *(long *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  }
  if (lVar5 != 0) {
    FUN_004435c0();
  }
  puVar4 = PTR_DAT_048607b8;
  if (param_2 != param_1) {
    lVar5 = *(long *)(param_2 + 0x30);
    uVar2 = *(uint *)(param_2 + 0x38);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < (int)uVar2) {
      uVar6 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x18,*(undefined8 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x38));
      *(undefined8 *)(param_1 + 0x30) = uVar6;
    }
    uVar9 = *(uint *)(param_1 + 0x38);
    iVar7 = uVar9 - uVar2;
    if (0 < iVar7) {
      iVar13 = 0;
      lVar8 = *(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x18 + (long)iVar7 * 0x18;
      do {
        iVar11 = *(int *)(lVar8 + -8);
        if (0 < iVar11) {
          lVar10 = *(long *)(lVar8 + -0x10) + (long)iVar11 * 0x10 + -8;
          do {
            FUN_0043be10(lVar10);
            iVar11 = iVar11 + -1;
            lVar10 = lVar10 + -0x10;
          } while (iVar11 != 0);
        }
        *(undefined4 *)(lVar8 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar8 + -4)) && (*(long *)(lVar8 + -0x10) != 0)) {
          FUN_00421f90(puVar4,*(long *)(lVar8 + -0x10),0x10,*(uint *)(lVar8 + -4) & 0x3fffffff);
        }
        *(undefined8 *)(lVar8 + -0x10) = 0;
        *(undefined4 *)(lVar8 + -4) = 0x80000000;
        FUN_0043be10(lVar8 + -0x18);
        iVar13 = iVar13 + 1;
        lVar8 = lVar8 + -0x18;
      } while (iVar13 != iVar7);
      uVar9 = *(uint *)(param_1 + 0x38);
    }
    lVar8 = *(long *)(param_1 + 0x30);
    uVar1 = uVar9;
    if ((int)uVar2 <= (int)uVar9) {
      uVar1 = uVar2;
    }
    if ((lVar8 != lVar5) && (0 < (int)uVar1)) {
      uVar12 = (ulong)uVar1;
      lVar10 = lVar5;
      do {
        FUN_00673050(lVar8,lVar10);
        uVar12 = uVar12 - 1;
        lVar8 = lVar8 + 0x18;
        lVar10 = lVar10 + 0x18;
      } while (uVar12 != 0);
      lVar8 = *(long *)(param_1 + 0x30);
    }
    if (0 < (int)(uVar2 - uVar1)) {
      uVar3 = ~uVar2;
      if ((int)uVar3 < (int)~uVar9) {
        uVar3 = ~uVar9;
      }
      iVar7 = uVar2 + uVar3 + 1;
      lVar8 = lVar8 + (long)(int)uVar1 * 0x18;
      lVar5 = lVar5 + (long)(int)uVar1 * 0x18;
      do {
        FUN_006731d0(lVar8,lVar5);
        iVar7 = iVar7 + -1;
        lVar8 = lVar8 + 0x18;
        lVar5 = lVar5 + 0x18;
      } while (iVar7 != 0);
    }
    *(uint *)(param_1 + 0x38) = uVar2;
  }
  return param_1;
}

