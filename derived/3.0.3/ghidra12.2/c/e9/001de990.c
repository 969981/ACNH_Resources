
undefined8 * FUN_001de990(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar13;
  undefined8 *puVar12;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  
  puVar6 = (undefined8 *)*param_1;
  puVar15 = (undefined8 *)param_1[1];
  lVar17 = (long)param_2 - (long)puVar6;
  uVar14 = lVar17 >> 4;
  if (puVar15 < (undefined8 *)param_1[2]) {
    if (param_2 == puVar15) {
      uVar1 = param_3[1];
      *param_2 = *param_3;
      param_2[1] = uVar1;
      param_1[1] = (long)(param_2 + 2);
      return param_2;
    }
    puVar9 = puVar15 + -2;
    puVar10 = puVar15;
    if (puVar9 < puVar15) {
      puVar11 = puVar15;
      puVar12 = puVar9;
      do {
        puVar13 = puVar12 + 2;
        uVar1 = puVar12[1];
        puVar10 = puVar11 + 2;
        *puVar11 = *puVar12;
        puVar11[1] = uVar1;
        puVar11 = puVar10;
        puVar12 = puVar13;
      } while (puVar13 < puVar15);
    }
    param_1[1] = (long)puVar10;
    if (puVar15 != param_2 + 2) {
      uVar7 = (long)puVar15 + (-0x10 - (long)(param_2 + 2));
      puVar10 = puVar15;
      if (((uint)uVar7 >> 4 & 1) == 0) {
        puVar9 = puVar15 + -4;
        puVar10 = puVar15 + -2;
        *(undefined4 *)puVar10 = *(undefined4 *)puVar9;
        *(undefined2 *)((long)puVar15 + -0xc) = *(undefined2 *)((long)puVar15 + -0x1c);
        puVar15[-1] = puVar15[-3];
      }
      if (0xf < uVar7) {
        puVar10 = puVar10 + -2;
        do {
          uVar2 = *(undefined4 *)(puVar9 + -2);
          *(undefined2 *)((long)puVar10 + 4) = *(undefined2 *)((long)puVar9 + -0xc);
          *(undefined4 *)puVar10 = uVar2;
          puVar10[1] = puVar9[-1];
          puVar15 = puVar9 + -4;
          uVar3 = *(undefined2 *)((long)puVar9 + -0x1c);
          *(undefined4 *)(puVar10 + -2) = *(undefined4 *)puVar15;
          *(undefined2 *)((long)puVar10 + -0xc) = uVar3;
          puVar10[-1] = puVar9[-3];
          puVar10 = puVar10 + -4;
          puVar9 = puVar15;
        } while (puVar15 != param_2);
      }
      puVar10 = (undefined8 *)param_1[1];
    }
    param_3 = param_3 + (ulong)((param_2 <= param_3 && param_3 <= puVar10) &&
                               (param_3 < param_2 || puVar10 != param_3)) * 2;
    uVar2 = *(undefined4 *)param_3;
    *(undefined2 *)((long)param_2 + 4) = *(undefined2 *)((long)param_3 + 4);
    *(undefined4 *)param_2 = uVar2;
    puVar6[uVar14 * 2 + 1] = param_3[1];
    return param_2;
  }
  uVar7 = ((long)puVar15 - (long)puVar6 >> 4) + 1;
  if (uVar7 >> 0x3c != 0) {
    FUN_001de8e0(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_01c67100("vector");
  }
  uVar5 = param_1[2] - (long)puVar6;
  uVar8 = (long)uVar5 >> 3;
  if (uVar8 <= uVar7) {
    uVar8 = uVar7;
  }
  if (0x7fffffffffffffef < uVar5) {
    uVar8 = 0xfffffffffffffff;
  }
  if (uVar8 == 0) {
    lVar4 = 0;
    puVar15 = (undefined8 *)(uVar14 << 4);
    lVar16 = 0;
    if (uVar14 != 0) goto LAB_001deb80;
  }
  else {
    lVar4 = FUN_00187df4(uVar8 << 4);
    puVar15 = (undefined8 *)(lVar4 + uVar14 * 0x10);
    lVar16 = lVar4 + uVar8 * 0x10;
    if (uVar14 != uVar8) goto LAB_001deb80;
  }
  if (lVar17 < 1) {
    uVar14 = lVar17 >> 3;
    if (puVar6 == param_2) {
      uVar14 = 1;
    }
    lVar17 = FUN_00187df4(uVar14 * 0x10);
    lVar16 = lVar17 + uVar14 * 0x10;
    puVar15 = (undefined8 *)(lVar17 + (uVar14 >> 2) * 0x10);
    if (lVar4 != 0) {
      FUN_00187e4c(lVar4);
    }
  }
  else {
    uVar7 = uVar14 + 2;
    if (-2 < (long)uVar14) {
      uVar7 = uVar14 + 1;
    }
    puVar15 = puVar15 + (uVar7 >> 1) * -2;
  }
LAB_001deb80:
  uVar1 = param_3[1];
  *puVar15 = *param_3;
  puVar15[1] = uVar1;
  puVar9 = (undefined8 *)*param_1;
  puVar6 = puVar15;
  if (puVar9 != param_2) {
    puVar10 = puVar15;
    puVar11 = param_2;
    do {
      puVar12 = puVar11 + -2;
      uVar1 = puVar11[-1];
      puVar6 = puVar10 + -2;
      *puVar6 = *puVar12;
      puVar10[-1] = uVar1;
      puVar10 = puVar6;
      puVar11 = puVar12;
    } while (puVar12 != puVar9);
  }
  puVar10 = (undefined8 *)param_1[1];
  puVar9 = puVar15;
  for (; puVar11 = puVar9 + 2, puVar10 != param_2; param_2 = param_2 + 2) {
    uVar1 = param_2[1];
    *puVar11 = *param_2;
    puVar9[3] = uVar1;
    puVar9 = puVar11;
  }
  lVar17 = *param_1;
  *param_1 = (long)puVar6;
  param_1[1] = (long)puVar11;
  param_1[2] = lVar16;
  if (lVar17 != 0) {
    FUN_00187e4c();
  }
  return puVar15;
}

