
void FUN_003fe0d0(long param_1,long *param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  
  lVar17 = *(long *)(param_1 + 0x10);
  lVar9 = *(long *)(param_1 + 0x18);
  lVar10 = *param_2;
  param_2[1] = lVar10;
  if ((ulong)(*(long *)(lVar17 + 0x18) - lVar9) < 4) {
    *(undefined1 *)(param_1 + 8) = 1;
  }
  else {
    uVar4 = *(uint *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 0x28) + lVar9);
    uVar15 = (ulong)uVar4;
    *(long *)(param_1 + 0x18) = lVar9 + 4;
    if ((ulong)(param_2[2] - lVar10 >> 3) < uVar15) {
      puVar7 = (undefined8 *)FUN_00187df4(uVar15 * 8);
      puVar12 = (undefined8 *)*param_2;
      puVar8 = (undefined8 *)param_2[1];
      puVar13 = puVar7;
      if (puVar8 != puVar12) {
        do {
          puVar8 = puVar8 + -1;
          puVar13 = puVar13 + -1;
          *puVar13 = *puVar8;
        } while (puVar8 != puVar12);
      }
      *param_2 = (long)puVar13;
      param_2[1] = (long)puVar7;
      param_2[2] = (long)(puVar7 + uVar15);
      if (puVar12 != (undefined8 *)0x0) {
        FUN_00187e4c();
      }
    }
    if (uVar4 != 0) {
      uVar14 = 0;
      do {
        if (*(char *)(param_1 + 8) != '\0') {
          return;
        }
        lVar17 = *(long *)(param_1 + 0x10);
        lVar9 = *(long *)(param_1 + 0x18);
        if ((ulong)(*(long *)(lVar17 + 0x18) - lVar9) < 8) {
          *(undefined1 *)(param_1 + 8) = 1;
          param_2[1] = *param_2;
          return;
        }
        uVar16 = *(undefined8 *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 0x28) + lVar9);
        *(long *)(param_1 + 0x18) = lVar9 + 8;
        puVar12 = (undefined8 *)param_2[1];
        if (puVar12 == (undefined8 *)param_2[2]) {
          puVar8 = (undefined8 *)*param_2;
          uVar11 = (long)puVar12 - (long)puVar8;
          lVar17 = (long)uVar11 >> 3;
          uVar15 = lVar17 + 1;
          if (uVar15 >> 0x3d != 0) {
            auVar18 = FUN_01c6892c(param_2);
            lVar9 = auVar18._8_8_;
            lVar17 = auVar18._0_8_;
            *(undefined4 *)(lVar17 + 8) = *(undefined4 *)(lVar9 + 8);
            uVar2 = *(undefined4 *)(lVar9 + 0x18);
            uVar3 = *(undefined4 *)(lVar9 + 0x1c);
            uVar5 = *(undefined1 *)(lVar9 + 0x20);
            *(undefined8 *)(lVar17 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
            uVar6 = *(undefined2 *)(lVar9 + 0x22);
            *(undefined4 *)(lVar17 + 0x18) = uVar2;
            *(undefined4 *)(lVar17 + 0x1c) = uVar3;
            *(undefined1 *)(lVar17 + 0x20) = uVar5;
            *(undefined2 *)(lVar17 + 0x22) = uVar6;
            return;
          }
          uVar1 = (long)uVar11 >> 2;
          if ((ulong)((long)uVar11 >> 2) <= uVar15) {
            uVar1 = uVar15;
          }
          if (0x7ffffffffffffff7 < uVar11) {
            uVar1 = 0x1fffffffffffffff;
          }
          if (uVar1 == 0) {
            lVar9 = 0;
            puVar13 = (undefined8 *)(lVar17 * 8);
            puVar7 = puVar13 + 1;
            *puVar13 = uVar16;
            if (puVar12 != puVar8) goto LAB_003fe240;
          }
          else {
            lVar9 = FUN_00187df4(uVar1 << 3);
            puVar8 = (undefined8 *)*param_2;
            puVar12 = (undefined8 *)param_2[1];
            puVar13 = (undefined8 *)(lVar9 + lVar17 * 8);
            puVar7 = puVar13 + 1;
            *puVar13 = uVar16;
            if (puVar12 != puVar8) {
LAB_003fe240:
              do {
                puVar12 = puVar12 + -1;
                puVar13 = puVar13 + -1;
                *puVar13 = *puVar12;
              } while (puVar12 != puVar8);
            }
          }
          *param_2 = (long)puVar13;
          param_2[1] = (long)puVar7;
          param_2[2] = lVar9 + uVar1 * 8;
          if (puVar8 != (undefined8 *)0x0) {
            FUN_00187e4c();
          }
        }
        else {
          *puVar12 = uVar16;
          param_2[1] = (long)(puVar12 + 1);
        }
        uVar14 = uVar14 + 1;
      } while (uVar14 != uVar4);
    }
  }
  return;
}

