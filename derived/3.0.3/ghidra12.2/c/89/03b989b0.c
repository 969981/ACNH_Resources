
void FUN_03b989b0(int param_1,int *param_2,long param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  int iVar15;
  ulong uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  
  *param_2 = 0;
  if (param_1 < 9) {
    if (param_1 != 8) {
      return;
    }
    iVar7 = 2;
    uVar12 = 1;
  }
  else {
    uVar12 = 1;
    do {
      uVar11 = (uint)uVar12;
      param_1 = param_1 >> 1;
      if (0 < (int)uVar11) {
        if (uVar11 < 4) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          piVar9 = param_2;
          do {
            piVar1 = piVar9 + uVar12;
            lVar13 = lVar13 + -4;
            *piVar1 = *piVar9 + param_1;
            piVar1[1] = piVar9[1] + param_1;
            piVar1[2] = piVar9[2] + param_1;
            piVar14 = piVar9 + 3;
            piVar9 = piVar9 + 4;
            piVar1[3] = *piVar14 + param_1;
          } while (-lVar13 != (uVar12 & 0xfffffffc));
          lVar13 = -lVar13;
        }
        if ((uVar12 & 3) != 0) {
          uVar10 = uVar12 & 3;
          piVar9 = param_2 + lVar13 + uVar12;
          piVar14 = param_2 + lVar13;
          do {
            uVar10 = uVar10 - 1;
            *piVar9 = *piVar14 + param_1;
            piVar9 = piVar9 + 1;
            piVar14 = piVar14 + 1;
          } while (uVar10 != 0);
        }
      }
      uVar4 = uVar11 * 2;
      uVar12 = (ulong)uVar4;
    } while ((int)(uVar11 * 0x10) < param_1);
    iVar7 = uVar11 * 4;
    if (uVar11 * 0x10 != param_1) {
      if ((int)uVar4 < 2) {
        return;
      }
      uVar10 = 1;
      do {
        iVar15 = 0;
        uVar16 = 0;
        do {
          piVar9 = param_2 + uVar16;
          uVar16 = uVar16 + 1;
          lVar13 = (long)*piVar9 + (long)((int)uVar10 << 1);
          uVar11 = iVar15 + param_2[uVar10];
          iVar15 = iVar15 + 2;
          uVar5 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2;
          uVar4 = uVar11 + iVar7;
          puVar3 = (undefined4 *)(param_3 + lVar13 * 4);
          uVar6 = -(ulong)(uVar11 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar11 + 1) << 2;
          uVar17 = *(undefined4 *)(param_3 + uVar5);
          uVar18 = *(undefined4 *)(param_3 + uVar6);
          puVar2 = (undefined4 *)(param_3 + (long)((int)lVar13 + iVar7) * 4);
          uVar19 = puVar3[1];
          *(undefined4 *)(param_3 + uVar5) = *puVar3;
          uVar5 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
          *(undefined4 *)(param_3 + uVar6) = uVar19;
          *puVar3 = uVar17;
          puVar3[1] = uVar18;
          uVar6 = -(ulong)(uVar4 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar4 + 1) << 2;
          uVar17 = *(undefined4 *)(param_3 + uVar5);
          uVar19 = puVar2[1];
          uVar18 = *(undefined4 *)(param_3 + uVar6);
          *(undefined4 *)(param_3 + uVar5) = *puVar2;
          *(undefined4 *)(param_3 + uVar6) = uVar19;
          *puVar2 = uVar17;
          puVar2[1] = uVar18;
        } while (uVar10 != uVar16);
        uVar10 = uVar10 + 1;
      } while (uVar10 != uVar12);
      return;
    }
    if ((int)uVar4 < 1) {
      return;
    }
  }
  uVar10 = 0;
  do {
    iVar15 = 0;
    iVar8 = 0;
    if (uVar10 != 0) {
      uVar16 = 0;
      iVar8 = (int)uVar10;
      do {
        piVar9 = param_2 + uVar16;
        uVar16 = uVar16 + 1;
        lVar13 = (long)*piVar9 + (long)(iVar8 << 1);
        uVar4 = iVar15 + param_2[uVar10];
        iVar15 = iVar15 + 2;
        uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        puVar2 = (undefined4 *)(param_3 + lVar13 * 4);
        uVar5 = -(ulong)(uVar4 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar4 + 1) << 2;
        uVar17 = *(undefined4 *)(param_3 + uVar6);
        uVar18 = *(undefined4 *)(param_3 + uVar5);
        lVar13 = (long)(int)lVar13 + (long)(int)(uVar12 << 2);
        uVar19 = puVar2[1];
        *(undefined4 *)(param_3 + uVar6) = *puVar2;
        uVar11 = uVar4 + iVar7;
        *(undefined4 *)(param_3 + uVar5) = uVar19;
        *puVar2 = uVar17;
        puVar2[1] = uVar18;
        puVar2 = (undefined4 *)(param_3 + lVar13 * 4);
        uVar6 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2;
        lVar13 = (long)(int)lVar13 - (long)iVar7;
        uVar5 = -(ulong)(uVar11 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar11 + 1) << 2;
        uVar17 = *(undefined4 *)(param_3 + uVar6);
        uVar19 = puVar2[1];
        uVar18 = *(undefined4 *)(param_3 + uVar5);
        *(undefined4 *)(param_3 + uVar6) = *puVar2;
        uVar11 = uVar4 + iVar7 * 2;
        *(undefined4 *)(param_3 + uVar5) = uVar19;
        uVar4 = uVar4 + iVar7 * 3;
        *puVar2 = uVar17;
        puVar2[1] = uVar18;
        puVar2 = (undefined4 *)(param_3 + lVar13 * 4);
        uVar6 = -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2;
        uVar5 = -(ulong)(uVar11 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar11 + 1) << 2;
        uVar17 = *(undefined4 *)(param_3 + uVar6);
        uVar18 = *(undefined4 *)(param_3 + uVar5);
        uVar19 = puVar2[1];
        puVar3 = (undefined4 *)
                 (param_3 +
                 ((-(uVar12 >> 0x1f) & 0xfffffffc00000000 | uVar12 << 2) + (long)(int)lVar13) * 4);
        *(undefined4 *)(param_3 + uVar6) = *puVar2;
        uVar6 = -(ulong)(uVar4 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar4 << 2;
        *(undefined4 *)(param_3 + uVar5) = uVar19;
        *puVar2 = uVar17;
        puVar2[1] = uVar18;
        uVar5 = -(ulong)(uVar4 + 1 >> 0x1f) & 0xfffffffc00000000 | (ulong)(uVar4 + 1) << 2;
        uVar17 = *(undefined4 *)(param_3 + uVar6);
        uVar19 = puVar3[1];
        uVar18 = *(undefined4 *)(param_3 + uVar5);
        *(undefined4 *)(param_3 + uVar6) = *puVar3;
        *(undefined4 *)(param_3 + uVar5) = uVar19;
        *puVar3 = uVar17;
        puVar3[1] = uVar18;
      } while (uVar10 != uVar16);
    }
    piVar9 = param_2 + uVar10;
    uVar10 = uVar10 + 1;
    lVar13 = (long)*piVar9 + (long)(((int)uVar12 + iVar8) * 2);
    puVar2 = (undefined4 *)(param_3 + lVar13 * 4);
    uVar17 = *puVar2;
    uVar18 = puVar2[1];
    puVar3 = (undefined4 *)(param_3 + ((long)(int)lVar13 + (long)iVar7) * 4);
    uVar19 = puVar3[1];
    *puVar2 = *puVar3;
    puVar2[1] = uVar19;
    *puVar3 = uVar17;
    puVar3[1] = uVar18;
  } while (uVar10 != uVar12);
  return;
}

