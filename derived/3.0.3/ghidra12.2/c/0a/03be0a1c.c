
undefined1  [16] FUN_03be0a1c(long param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  ulong uVar8;
  float *pfVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  ulong uVar13;
  undefined1 auVar14 [16];
  float fVar15;
  
  uVar5 = *param_2;
  uVar8 = (ulong)uVar5;
  uVar13 = 0;
  switch(uVar5 >> 0x18) {
  case 0:
    puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 8) + 0x10);
    puVar2 = puVar1 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar1;
    }
    uVar13 = (ulong)*(uint *)(*(long *)(*(long *)*puVar2 + 0x48) + (ulong)(uVar5 & 0xffffff) * 4);
    break;
  case 2:
    auVar14 = FUN_03bea4c0();
    return auVar14;
  case 3:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (uVar8 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    uVar4 = *(uint *)(lVar7 + 0xac);
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    fVar12 = *pfVar9;
    fVar11 = pfVar9[1];
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    uVar13 = (ulong)(uint)(fVar12 + (fVar11 - fVar12) * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0));
    break;
  case 6:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (uVar8 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar12 = *pfVar9;
    fVar11 = pfVar9[1];
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    fVar11 = fVar11 - fVar12;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar12 = fVar12 * 0.5;
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = fVar11 + fVar11 + -1.0;
    fVar11 = -fVar15;
    if (0.0 <= fVar15) {
      fVar11 = fVar15;
    }
    fVar10 = -(fVar12 * fVar11 * fVar11);
    if (0.0 <= fVar15) {
      fVar10 = fVar12 * fVar11 * fVar11;
    }
    uVar13 = (ulong)(uint)(fVar12 + *pfVar9 + fVar10);
    break;
  case 7:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (uVar8 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = fVar11 + fVar11 + -1.0;
    fVar11 = 3.0;
    goto LAB_03be0d98;
  case 8:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (uVar8 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = fVar11 + fVar11 + -1.0;
    fVar11 = 4.0;
    goto LAB_03be0d98;
  case 9:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (uVar8 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = fVar11 + fVar11 + -1.0;
    fVar11 = 1.5;
LAB_03be0d98:
    fVar10 = -fVar15;
    if (0.0 <= fVar15) {
      fVar10 = fVar15;
    }
    fVar10 = powf(fVar10,fVar11);
    fVar12 = fVar12 * 0.5;
    fVar11 = -(fVar12 * fVar10);
    if (0.0 <= fVar15) {
      fVar11 = fVar12 * fVar10;
    }
    uVar13 = (ulong)(uint)(fVar12 + *pfVar9 + fVar11);
    break;
  case 10:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (uVar8 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar12 = *pfVar9;
    fVar11 = pfVar9[1];
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    fVar11 = fVar11 - fVar12;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar12 = fVar12 * fVar11 * fVar11;
    goto LAB_03be1250;
  case 0xb:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (ulong)(uVar5 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = 3.0;
    goto LAB_03be1248;
  case 0xc:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (ulong)(uVar5 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = 4.0;
    goto LAB_03be1248;
  case 0xd:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (uVar8 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = 1.5;
LAB_03be1248:
    fVar11 = powf(fVar11,fVar15);
LAB_03be124c:
    fVar12 = fVar12 * fVar11;
LAB_03be1250:
    uVar13 = (ulong)(uint)(*pfVar9 + fVar12);
    break;
  case 0xe:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (ulong)(uVar5 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar12 = *pfVar9;
    fVar11 = pfVar9[1];
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    fVar11 = fVar11 - fVar12;
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar12 = fVar12 * (1.0 - fVar11 * fVar11);
    goto LAB_03be1250;
  case 0xf:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (ulong)(uVar5 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = 3.0;
    goto LAB_03be11b0;
  case 0x10:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (ulong)(uVar5 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))();
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = 4.0;
    goto LAB_03be11b0;
  case 0x11:
    plVar6 = *(long **)(param_1 + 8);
    plVar3 = plVar6 + 3 + *(uint *)(plVar6 + 2);
    if (1 < *(uint *)(plVar6 + 2)) {
      plVar3 = plVar6 + 3;
    }
    pfVar9 = (float *)(*(long *)(*(long *)*plVar3 + 0x50) + (ulong)(uVar5 & 0xffffff) * 8);
    lVar7 = (**(code **)(*plVar6 + 0x20))(0);
    fVar11 = pfVar9[1] - *pfVar9;
    uVar5 = *(uint *)(lVar7 + 0xa0) ^ *(uint *)(lVar7 + 0xa0) << 0xb;
    uVar4 = *(uint *)(lVar7 + 0xac);
    *(undefined4 *)(lVar7 + 0xa0) = *(undefined4 *)(lVar7 + 0xa4);
    *(undefined4 *)(lVar7 + 0xa4) = *(undefined4 *)(lVar7 + 0xa8);
    uVar5 = uVar5 >> 8 ^ uVar4 >> 0x13 ^ uVar5 ^ uVar4;
    *(uint *)(lVar7 + 0xa8) = uVar4;
    *(uint *)(lVar7 + 0xac) = uVar5;
    fVar12 = -fVar11;
    if (0.0 <= fVar11) {
      fVar12 = fVar11;
    }
    fVar11 = (float)(uVar5 >> 9 | 0x3f800000) + -1.0;
    fVar15 = 1.5;
LAB_03be11b0:
    fVar11 = powf(fVar11,fVar15);
    fVar11 = 1.0 - fVar11;
    goto LAB_03be124c;
  }
  auVar14._8_8_ = 0;
  auVar14._0_8_ = uVar13;
  return auVar14;
}

