
long FUN_00687270(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  
  puVar4 = PTR_DAT_048607b8;
  if (param_2 != param_1) {
    uVar2 = *(uint *)(param_2 + 0x20);
    lVar14 = *(long *)(param_2 + 0x18);
    if ((int)(*(uint *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar2) {
      uVar5 = FUN_004267f0(PTR_DAT_048607b8,uVar2,0x18,*(undefined8 *)(param_1 + 0x18),
                           *(undefined4 *)(param_1 + 0x20));
      *(undefined8 *)(param_1 + 0x18) = uVar5;
    }
    uVar10 = *(uint *)(param_1 + 0x20);
    iVar8 = uVar10 - uVar2;
    if (0 < iVar8) {
      iVar13 = 0;
      lVar6 = *(long *)(param_1 + 0x18) + (long)(int)uVar2 * 0x18 + (long)iVar8 * 0x18;
      do {
        iVar11 = *(int *)(lVar6 + -8);
        if (0 < iVar11) {
          lVar9 = *(long *)(lVar6 + -0x10) + (long)iVar11 * 0x10;
          do {
            if (*(long *)(lVar9 + -8) != 0) {
              FUN_004435c0();
            }
            FUN_0043be10(lVar9 + -0x10);
            iVar11 = iVar11 + -1;
            lVar9 = lVar9 + -0x10;
          } while (iVar11 != 0);
        }
        *(undefined4 *)(lVar6 + -8) = 0;
        if ((-1 < (int)*(uint *)(lVar6 + -4)) && (*(long *)(lVar6 + -0x10) != 0)) {
          FUN_00421f90(puVar4,*(long *)(lVar6 + -0x10),0x10,*(uint *)(lVar6 + -4) & 0x3fffffff);
        }
        *(undefined8 *)(lVar6 + -0x10) = 0;
        *(undefined4 *)(lVar6 + -4) = 0x80000000;
        FUN_0043be10(lVar6 + -0x18);
        iVar13 = iVar13 + 1;
        lVar6 = lVar6 + -0x18;
      } while (iVar13 != iVar8);
      uVar10 = *(uint *)(param_1 + 0x20);
    }
    lVar6 = *(long *)(param_1 + 0x18);
    uVar1 = uVar10;
    if ((int)uVar2 <= (int)uVar10) {
      uVar1 = uVar2;
    }
    if ((lVar6 != lVar14) && (0 < (int)uVar1)) {
      uVar12 = (ulong)uVar1;
      lVar9 = lVar14;
      do {
        FUN_00687520(lVar6,lVar9);
        uVar12 = uVar12 - 1;
        lVar6 = lVar6 + 0x18;
        lVar9 = lVar9 + 0x18;
      } while (uVar12 != 0);
      lVar6 = *(long *)(param_1 + 0x18);
    }
    if (0 < (int)(uVar2 - uVar1)) {
      uVar3 = ~uVar2;
      if ((int)uVar3 < (int)~uVar10) {
        uVar3 = ~uVar10;
      }
      iVar8 = uVar2 + uVar3 + 1;
      lVar14 = lVar14 + (long)(int)uVar1 * 0x18;
      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 0x18);
      do {
        puVar7[2] = 0x8000000000000000;
        *puVar7 = 0;
        puVar7[1] = 0;
        FUN_00687520(puVar7,lVar14);
        iVar8 = iVar8 + -1;
        lVar14 = lVar14 + 0x18;
        puVar7 = puVar7 + 3;
      } while (iVar8 != 0);
    }
    *(uint *)(param_1 + 0x20) = uVar2;
  }
  return param_1;
}

