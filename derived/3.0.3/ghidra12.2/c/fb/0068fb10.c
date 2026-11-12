
undefined8
FUN_0068fb10(undefined8 param_1,undefined4 *param_2,long *param_3,long param_4,long param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long *plVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  undefined8 *puVar19;
  
  lVar6 = param_5 - param_4 >> 3;
  *param_2 = 0;
  *(long **)(param_2 + 2) = param_3;
  uVar16 = lVar6 * 0xb6db6db7;
  puVar3 = (undefined8 *)
           (**(code **)(*param_3 + 0x10))(param_3,lVar6 * 0x6db6db7800000000 >> 0x20,0x10);
  if (param_2[6] != 0) {
    lVar6 = (long)(int)param_2[6] * 0x48;
    plVar13 = (long *)(*(long *)(param_2 + 4) + 0x18);
    do {
      lVar4 = *plVar13;
      *plVar13 = 0;
      plVar13[1] = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)plVar13[2] + 0x18))();
      }
      lVar4 = plVar13[-3];
      plVar13[2] = 0;
      *(undefined4 *)(plVar13 + 1) = 0;
      plVar13[-3] = 0;
      plVar13[-2] = 0;
      if (lVar4 != 0) {
        (**(code **)(*(long *)plVar13[-1] + 0x18))();
      }
      plVar13[-1] = 0;
      lVar6 = lVar6 + -0x48;
      *(undefined4 *)(plVar13 + -2) = 0;
      plVar13 = plVar13 + 9;
    } while (lVar6 != 0);
  }
  *(undefined8 **)(param_2 + 4) = puVar3;
  iVar15 = (int)uVar16;
  param_2[6] = iVar15;
  if (iVar15 != 0) {
    uVar10 = (long)iVar15 * 0x48 - 0x48;
    uVar1 = ((uint)(uVar10 / 0x48) & 0x3ffffff) + 1;
    uVar14 = (ulong)uVar1 & 7;
    puVar5 = puVar3;
    if ((uVar1 & 7) != 0) {
      puVar19 = puVar3;
      do {
        *(undefined2 *)(puVar19 + 8) = 0;
        uVar14 = uVar14 - 1;
        puVar19[6] = 0;
        puVar19[7] = 0;
        puVar19[4] = 0;
        puVar19[5] = 0;
        puVar19[2] = 0;
        puVar19[3] = 0;
        puVar5 = puVar19 + 9;
        *puVar19 = 0;
        puVar19[1] = 0;
        puVar19 = puVar5;
      } while (uVar14 != 0);
    }
    if (0x1f7 < uVar10) {
      do {
        *(undefined2 *)(puVar5 + 8) = 0;
        *(undefined2 *)(puVar5 + 0x11) = 0;
        *(undefined2 *)(puVar5 + 0x1a) = 0;
        *(undefined2 *)(puVar5 + 0x23) = 0;
        *(undefined2 *)(puVar5 + 0x2c) = 0;
        *(undefined2 *)(puVar5 + 0x35) = 0;
        *(undefined2 *)(puVar5 + 0x3e) = 0;
        *(undefined2 *)(puVar5 + 0x47) = 0;
        puVar5[0x46] = 0;
        puVar5[0x45] = 0;
        puVar5[0x44] = 0;
        puVar5[0x43] = 0;
        puVar5[0x42] = 0;
        puVar5[0x41] = 0;
        puVar5[6] = 0;
        puVar5[7] = 0;
        puVar5[4] = 0;
        puVar5[5] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[9] = 0;
        puVar5[10] = 0;
        puVar5[0xb] = 0;
        puVar5[0xc] = 0;
        puVar5[0xd] = 0;
        puVar5[0xe] = 0;
        puVar5[0xf] = 0;
        puVar5[0x10] = 0;
        puVar5[0x18] = 0;
        puVar5[0x19] = 0;
        puVar5[0x16] = 0;
        puVar5[0x17] = 0;
        puVar5[0x14] = 0;
        puVar5[0x15] = 0;
        puVar5[0x12] = 0;
        puVar5[0x13] = 0;
        puVar5[0x1b] = 0;
        puVar5[0x1c] = 0;
        puVar5[0x1d] = 0;
        puVar5[0x1e] = 0;
        puVar5[0x1f] = 0;
        puVar5[0x20] = 0;
        puVar5[0x21] = 0;
        puVar5[0x22] = 0;
        puVar5[0x2a] = 0;
        puVar5[0x2b] = 0;
        puVar5[0x28] = 0;
        puVar5[0x29] = 0;
        puVar5[0x26] = 0;
        puVar5[0x27] = 0;
        puVar5[0x24] = 0;
        puVar5[0x25] = 0;
        puVar5[0x33] = 0;
        puVar5[0x34] = 0;
        puVar5[0x31] = 0;
        puVar5[0x32] = 0;
        puVar5[0x2f] = 0;
        puVar5[0x30] = 0;
        puVar5[0x2d] = 0;
        puVar5[0x2e] = 0;
        puVar5[0x3c] = 0;
        puVar5[0x3d] = 0;
        puVar5[0x3a] = 0;
        puVar5[0x3b] = 0;
        puVar5[0x38] = 0;
        puVar5[0x39] = 0;
        puVar5[0x36] = 0;
        puVar5[0x37] = 0;
        puVar5[0x3f] = 0;
        puVar5[0x40] = 0;
        puVar5 = puVar5 + 0x48;
      } while (puVar5 != puVar3 + (long)iVar15 * 9);
    }
    if (0 < iVar15) {
      uVar14 = 0;
      do {
        lVar4 = *(long *)(param_2 + 4);
        plVar17 = (long *)(lVar4 + uVar14 * 0x48);
        plVar17[7] = param_4;
        lVar6 = *plVar17;
        plVar13 = *(long **)(param_2 + 2);
        *plVar17 = 0;
        plVar17[1] = 0;
        if (lVar6 != 0) {
          (**(code **)(*(long *)plVar17[2] + 0x18))();
        }
        plVar17[2] = (long)plVar13;
        puVar3 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x18,0x10);
        puVar5 = (undefined8 *)*plVar17;
        iVar15 = (int)plVar17[1];
        if (iVar15 != 0) {
          uVar11 = (long)iVar15 * 0x18 - 0x18;
          uVar1 = ((uint)(uVar11 / 0x18) & 0xfffffff) + 1;
          uVar10 = (ulong)uVar1 & 3;
          puVar7 = puVar3;
          puVar19 = puVar5;
          if ((uVar1 & 3) != 0) {
            puVar9 = puVar3;
            do {
              uVar2 = *puVar19;
              puVar7 = puVar19 + 1;
              uVar10 = uVar10 - 1;
              uVar12 = puVar19[2];
              puVar19 = puVar19 + 3;
              puVar9[1] = *puVar7;
              puVar9[2] = uVar12;
              puVar7 = puVar9 + 3;
              *puVar9 = uVar2;
              puVar9 = puVar7;
            } while (uVar10 != 0);
          }
          if (0x47 < uVar11) {
            do {
              uVar2 = *puVar19;
              uVar12 = puVar19[2];
              puVar7[1] = puVar19[1];
              puVar7[2] = uVar12;
              *puVar7 = uVar2;
              uVar2 = puVar19[3];
              uVar12 = puVar19[5];
              puVar7[4] = puVar19[4];
              puVar7[5] = uVar12;
              puVar7[3] = uVar2;
              uVar2 = puVar19[6];
              uVar12 = puVar19[8];
              puVar7[7] = puVar19[7];
              puVar7[8] = uVar12;
              puVar7[6] = uVar2;
              puVar9 = puVar19 + 9;
              uVar2 = puVar19[10];
              uVar12 = puVar19[0xb];
              puVar19 = puVar19 + 0xc;
              puVar7[9] = *puVar9;
              puVar7[10] = uVar2;
              puVar7[0xb] = uVar12;
              puVar7 = puVar7 + 0xc;
            } while (puVar19 != puVar5 + (long)iVar15 * 3);
          }
        }
        *plVar17 = (long)puVar3;
        *(undefined4 *)((long)plVar17 + 0xc) = 1;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)(*(long *)plVar17[2] + 0x18))();
        }
        lVar18 = lVar4 + uVar14 * 0x48;
        plVar13 = *(long **)(param_2 + 2);
        plVar17 = (long *)(lVar18 + 0x18);
        lVar6 = *plVar17;
        *plVar17 = 0;
        *(undefined8 *)(lVar18 + 0x20) = 0;
        if (lVar6 != 0) {
          (**(code **)(**(long **)(lVar4 + uVar14 * 0x48 + 0x28) + 0x18))();
        }
        puVar19 = (undefined8 *)(lVar4 + uVar14 * 0x48 + 0x28);
        *puVar19 = plVar13;
        puVar3 = (undefined8 *)(**(code **)(*plVar13 + 0x10))(plVar13,0x18,0x10);
        puVar5 = (undefined8 *)*plVar17;
        iVar15 = *(int *)(lVar18 + 0x20);
        if (iVar15 != 0) {
          uVar11 = (long)iVar15 * 0x18 - 0x18;
          uVar1 = ((uint)(uVar11 / 0x18) & 0xfffffff) + 1;
          uVar10 = (ulong)uVar1 & 3;
          puVar9 = puVar3;
          puVar7 = puVar5;
          if ((uVar1 & 3) != 0) {
            puVar8 = puVar3;
            do {
              uVar2 = *puVar7;
              puVar9 = puVar7 + 1;
              uVar10 = uVar10 - 1;
              uVar12 = puVar7[2];
              puVar7 = puVar7 + 3;
              puVar8[1] = *puVar9;
              puVar8[2] = uVar12;
              puVar9 = puVar8 + 3;
              *puVar8 = uVar2;
              puVar8 = puVar9;
            } while (uVar10 != 0);
          }
          if (0x47 < uVar11) {
            do {
              uVar2 = *puVar7;
              uVar12 = puVar7[2];
              puVar9[1] = puVar7[1];
              puVar9[2] = uVar12;
              *puVar9 = uVar2;
              uVar2 = puVar7[3];
              uVar12 = puVar7[5];
              puVar9[4] = puVar7[4];
              puVar9[5] = uVar12;
              puVar9[3] = uVar2;
              uVar2 = puVar7[6];
              uVar12 = puVar7[8];
              puVar9[7] = puVar7[7];
              puVar9[8] = uVar12;
              puVar9[6] = uVar2;
              puVar8 = puVar7 + 9;
              uVar2 = puVar7[10];
              uVar12 = puVar7[0xb];
              puVar7 = puVar7 + 0xc;
              puVar9[9] = *puVar8;
              puVar9[10] = uVar2;
              puVar9[0xb] = uVar12;
              puVar9 = puVar9 + 0xc;
            } while (puVar7 != puVar5 + (long)iVar15 * 3);
          }
        }
        *plVar17 = (long)puVar3;
        *(undefined4 *)(lVar18 + 0x24) = 1;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)(*(long *)*puVar19 + 0x18))();
        }
        uVar14 = uVar14 + 1;
        param_4 = param_4 + 0x38;
      } while (uVar14 != (uVar16 & 0xffffffff));
    }
  }
  return 1;
}

