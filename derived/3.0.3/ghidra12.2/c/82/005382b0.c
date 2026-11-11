
long FUN_005382b0(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined4 *puVar19;
  
  FUN_0043c080(param_1 + 0x18,param_2 + 0x18);
  if (param_2 != param_1) {
    uVar17 = *(undefined8 *)(param_2 + 0x20);
    iVar7 = *(int *)(param_2 + 0x28);
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    if ((int)(*(uint *)(param_1 + 0x2c) & 0x3fffffff) < iVar7) {
      uVar6 = FUN_004267f0(PTR_DAT_048607b8,iVar7,4,uVar6,*(undefined4 *)(param_1 + 0x28));
      *(undefined8 *)(param_1 + 0x20) = uVar6;
    }
    FUN_0043aa30(uVar6,uVar17,(long)iVar7 << 2);
    *(int *)(param_1 + 0x28) = iVar7;
    uVar1 = *(uint *)(param_2 + 0x38);
    lVar18 = *(long *)(param_2 + 0x30);
    if ((int)(*(uint *)(param_1 + 0x3c) & 0x3fffffff) < (int)uVar1) {
      lVar5 = FUN_004267f0(PTR_DAT_048607b8,uVar1,0x10,*(undefined8 *)(param_1 + 0x30),
                           *(undefined4 *)(param_1 + 0x38));
      *(long *)(param_1 + 0x30) = lVar5;
    }
    else {
      lVar5 = *(long *)(param_1 + 0x30);
    }
    uVar2 = *(uint *)(param_1 + 0x38);
    uVar8 = uVar2;
    if ((int)uVar1 <= (int)uVar2) {
      uVar8 = uVar1;
    }
    if ((lVar5 != lVar18) && (0 < (int)uVar8)) {
      uVar15 = (ulong)uVar8;
      if (uVar15 - 1 < 3) {
        lVar14 = 0;
      }
      else {
        lVar14 = 0;
        puVar10 = (undefined8 *)(lVar18 + 0x20);
        puVar13 = (undefined8 *)(lVar5 + 0x20);
        do {
          uVar6 = puVar10[-3];
          lVar14 = lVar14 + 4;
          puVar13[-4] = puVar10[-4];
          puVar13[-3] = uVar6;
          uVar6 = puVar10[-1];
          puVar13[-2] = puVar10[-2];
          puVar13[-1] = uVar6;
          uVar6 = puVar10[1];
          *puVar13 = *puVar10;
          puVar13[1] = uVar6;
          puVar9 = puVar10 + 2;
          uVar6 = puVar10[3];
          puVar10 = puVar10 + 8;
          puVar13[2] = *puVar9;
          puVar13[3] = uVar6;
          puVar13 = puVar13 + 8;
        } while (uVar15 - (uVar15 & 3) != lVar14);
      }
      if ((uVar8 & 3) != 0) {
        lVar11 = -(uVar15 & 3);
        puVar10 = (undefined8 *)(lVar5 + lVar14 * 0x10);
        puVar13 = (undefined8 *)(lVar18 + lVar14 * 0x10);
        do {
          uVar6 = puVar13[1];
          *puVar10 = *puVar13;
          puVar10[1] = uVar6;
          lVar11 = lVar11 + 1;
          puVar10 = puVar10 + 2;
          puVar13 = puVar13 + 2;
        } while (lVar11 != 0);
      }
      lVar5 = *(long *)(param_1 + 0x30);
    }
    if ((int)uVar2 < (int)uVar1) {
      puVar10 = (undefined8 *)(lVar18 + (long)(int)uVar8 * 0x10);
      puVar13 = (undefined8 *)(lVar5 + (long)(int)uVar8 * 0x10);
      uVar8 = uVar1 + ~uVar2 + 1 & 3;
      if (2 < uVar1 + ~uVar2) {
        iVar7 = (uVar2 + uVar8) - uVar1;
        puVar9 = puVar10;
        puVar12 = puVar13;
        do {
          uVar6 = puVar9[1];
          puVar10 = puVar9 + 8;
          *puVar12 = *puVar9;
          puVar12[1] = uVar6;
          puVar13 = puVar12 + 8;
          uVar6 = puVar9[3];
          iVar7 = iVar7 + 4;
          puVar12[2] = puVar9[2];
          puVar12[3] = uVar6;
          uVar6 = puVar9[5];
          puVar12[4] = puVar9[4];
          puVar12[5] = uVar6;
          uVar6 = puVar9[7];
          puVar12[6] = puVar9[6];
          puVar12[7] = uVar6;
          puVar9 = puVar10;
          puVar12 = puVar13;
        } while (iVar7 != 0);
      }
      if (uVar8 != 0) {
        iVar7 = -uVar8;
        do {
          uVar6 = puVar10[1];
          *puVar13 = *puVar10;
          puVar13[1] = uVar6;
          iVar7 = iVar7 + 1;
          puVar10 = puVar10 + 2;
          puVar13 = puVar13 + 2;
        } while (iVar7 != 0);
      }
    }
    *(uint *)(param_1 + 0x38) = uVar1;
    puVar4 = PTR_DAT_048607b8;
    if (param_2 != param_1) {
      lVar18 = *(long *)(param_2 + 0x40);
      uVar1 = *(uint *)(param_2 + 0x48);
      if ((int)(*(uint *)(param_1 + 0x4c) & 0x3fffffff) < (int)uVar1) {
        uVar6 = FUN_004267f0(PTR_DAT_048607b8,uVar1,0x20,*(undefined8 *)(param_1 + 0x40),
                             *(undefined4 *)(param_1 + 0x48));
        *(undefined8 *)(param_1 + 0x40) = uVar6;
      }
      uVar8 = *(uint *)(param_1 + 0x48);
      iVar7 = uVar8 - uVar1;
      if (0 < iVar7) {
        lVar5 = *(long *)(param_1 + 0x40) + (long)(int)uVar8 * 0x20 + -0x18;
        do {
          FUN_005294a0(lVar5);
          iVar7 = iVar7 + -1;
          lVar5 = lVar5 + -0x20;
        } while (iVar7 != 0);
        uVar8 = *(uint *)(param_1 + 0x48);
      }
      if ((int)uVar1 <= (int)uVar8) {
        uVar8 = uVar1;
      }
      if ((*(long *)(param_1 + 0x40) != lVar18) && (0 < (int)uVar8)) {
        uVar15 = (ulong)uVar8;
        lVar5 = lVar18 + 8;
        lVar14 = *(long *)(param_1 + 0x40) + 8;
        do {
          *(undefined4 *)(lVar14 + -8) = *(undefined4 *)(lVar5 + -8);
          FUN_00531150(lVar14,lVar5);
          uVar15 = uVar15 - 1;
          lVar5 = lVar5 + 0x20;
          lVar14 = lVar14 + 0x20;
        } while (uVar15 != 0);
      }
      if (0 < (int)(uVar1 - uVar8)) {
        iVar7 = 0;
        puVar16 = (undefined4 *)(*(long *)(param_1 + 0x40) + (long)(int)uVar8 * 0x20);
        puVar19 = (undefined4 *)(lVar18 + (long)(int)uVar8 * 0x20);
        do {
          *puVar16 = *puVar19;
          *(undefined8 *)(puVar16 + 4) = 0;
          *(undefined8 *)(puVar16 + 6) = 0x8000000000000000;
          iVar3 = puVar19[6];
          lVar18 = *(long *)(puVar19 + 4);
          if (iVar3 < 1) {
            if (iVar3 != 0) {
              lVar5 = 0;
              goto LAB_00538628;
            }
          }
          else {
            lVar5 = FUN_00426720(puVar4,iVar3,0x48,0,0,puVar16 + 7);
            *(long *)(puVar16 + 4) = lVar5;
LAB_00538628:
            lVar14 = (long)iVar3 * 0x48;
            do {
              FUN_0052ca20(lVar5,lVar18);
              lVar18 = lVar18 + 0x48;
              lVar14 = lVar14 + -0x48;
              lVar5 = lVar5 + 0x48;
            } while (lVar14 != 0);
          }
          puVar16[6] = iVar3;
          *(undefined1 *)(puVar16 + 2) = *(undefined1 *)(puVar19 + 2);
          iVar7 = iVar7 + 1;
          *(undefined1 *)((long)puVar16 + 9) = *(undefined1 *)((long)puVar19 + 9);
          puVar16 = puVar16 + 8;
          puVar19 = puVar19 + 8;
        } while (iVar7 != uVar1 - uVar8);
      }
      *(uint *)(param_1 + 0x48) = uVar1;
      if (param_2 != param_1) {
        uVar17 = *(undefined8 *)(param_2 + 0x50);
        iVar7 = *(int *)(param_2 + 0x58);
        uVar6 = *(undefined8 *)(param_1 + 0x50);
        if ((int)(*(uint *)(param_1 + 0x5c) & 0x3fffffff) < iVar7) {
          uVar6 = FUN_004267f0(puVar4,iVar7,4,uVar6,*(undefined4 *)(param_1 + 0x58));
          *(undefined8 *)(param_1 + 0x50) = uVar6;
        }
        FUN_0043aa30(uVar6,uVar17,(long)iVar7 << 2);
        *(int *)(param_1 + 0x58) = iVar7;
      }
    }
  }
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  return param_1;
}

