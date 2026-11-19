
void FUN_03acc290(undefined4 param_1,undefined4 param_2,undefined4 param_3,long param_4,long param_5
                 ,undefined8 *param_6,undefined8 *param_7)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  float *pfVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float local_bc;
  float fStack_b8;
  float local_b4;
  undefined8 local_b0;
  float local_a8 [16];
  undefined1 *puStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  
  *(undefined4 *)(param_4 + 0x13c) = param_1;
  *(undefined4 *)(param_4 + 0x14c) = param_2;
  if (*(int *)(param_4 + 0x68) == 2) {
    FUN_03acba34(param_5,param_4 + 0x150,param_4 + 0x180,PTR_DAT_04bb4bd0);
  }
  else {
    FUN_03acb84c(param_5,param_4 + 0x150,param_4 + 0x180,param_6);
  }
  *(undefined4 *)(param_4 + 0x128) = param_3;
  FUN_03ad06c0(param_1,param_2,param_4 + 0x78,param_6,param_7);
  uVar6 = *param_6;
  *(undefined8 *)(param_4 + 0x328) = param_6[1];
  *(undefined8 *)(param_4 + 800) = uVar6;
  uVar6 = param_6[2];
  *(undefined8 *)(param_4 + 0x338) = param_6[3];
  *(undefined8 *)(param_4 + 0x330) = uVar6;
  uVar6 = param_6[4];
  *(undefined8 *)(param_4 + 0x348) = param_6[5];
  *(undefined8 *)(param_4 + 0x340) = uVar6;
  uVar6 = *param_7;
  *(undefined8 *)(param_4 + 0x358) = param_7[1];
  *(undefined8 *)(param_4 + 0x350) = uVar6;
  uVar6 = param_7[2];
  *(undefined8 *)(param_4 + 0x368) = param_7[3];
  *(undefined8 *)(param_4 + 0x360) = uVar6;
  uVar6 = param_7[4];
  *(undefined8 *)(param_4 + 0x378) = param_7[5];
  *(undefined8 *)(param_4 + 0x370) = uVar6;
  uVar6 = param_7[6];
  *(undefined8 *)(param_4 + 0x388) = param_7[7];
  *(undefined8 *)(param_4 + 0x380) = uVar6;
  cVar1 = *(char *)(param_5 + 0x70);
  *(undefined4 *)(param_4 + 0x438) = 0;
  *(char *)(param_4 + 0x5bc) = cVar1;
  if (cVar1 == '\0') {
    *(code **)(param_4 + 0x40) = FUN_03acde40;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(code **)(param_4 + 0x30) = FUN_03ace0f8;
    *(undefined8 *)(param_4 + 0x38) = 0;
    *(undefined8 *)(param_4 + 0x278) = *(undefined8 *)(param_4 + 0x158);
    *(undefined8 *)(param_4 + 0x270) = *(undefined8 *)(param_4 + 0x150);
    *(undefined8 *)(param_4 + 0x288) = *(undefined8 *)(param_4 + 0x168);
    *(undefined8 *)(param_4 + 0x280) = *(undefined8 *)(param_4 + 0x160);
    *(undefined8 *)(param_4 + 0x298) = *(undefined8 *)(param_4 + 0x178);
    *(undefined8 *)(param_4 + 0x290) = *(undefined8 *)(param_4 + 0x170);
    *(undefined8 *)(param_4 + 0x2a8) = *(undefined8 *)(param_4 + 0x188);
    *(undefined8 *)(param_4 + 0x2a0) = *(undefined8 *)(param_4 + 0x180);
    *(undefined8 *)(param_4 + 0x2b8) = *(undefined8 *)(param_4 + 0x198);
    *(undefined8 *)(param_4 + 0x2b0) = *(undefined8 *)(param_4 + 400);
    *(undefined8 *)(param_4 + 0x2c8) = *(undefined8 *)(param_4 + 0x1a8);
    *(undefined8 *)(param_4 + 0x2c0) = *(undefined8 *)(param_4 + 0x1a0);
    *(undefined8 *)(param_4 + 0x2d8) = *(undefined8 *)(param_4 + 0x1b8);
    *(undefined8 *)(param_4 + 0x2d0) = *(undefined8 *)(param_4 + 0x1b0);
    FUN_03acd660(0xbf800000,0x3f800000,param_4,param_4 + 0x270,param_4 + 0x2a0,0,0);
  }
  else {
    *(code **)(param_4 + 0x40) = FUN_03acc014;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(code **)(param_4 + 0x30) = FUN_03acbfc8;
    *(undefined8 *)(param_4 + 0x38) = 0;
    FUN_03acc68c(0,0,param_4,param_4 + 800,1,&DAT_0419b554);
    fVar8 = *(float *)(param_4 + 0x170);
    local_bc = -fVar8;
    fVar10 = *(float *)(param_4 + 0x174);
    fVar12 = *(float *)(param_4 + 0x178);
    fStack_b8 = -fVar10;
    local_b4 = -fVar12;
    fVar8 = SQRT(fVar10 * fVar10 + fVar8 * fVar8 + fVar12 * fVar12);
    if (0.0 < fVar8) {
      fVar8 = 1.0 / fVar8;
      local_bc = fVar8 * local_bc;
      fStack_b8 = fVar8 * fStack_b8;
      local_b4 = fVar8 * local_b4;
    }
    FUN_03acd660((*(float *)(param_4 + 0x37c) -
                 *(float *)(param_4 + 0x13c) * *(float *)(param_4 + 0x378)) /
                 (*(float *)(param_4 + 0x38c) -
                 *(float *)(param_4 + 0x13c) * *(float *)(param_4 + 0x388)),
                 (*(float *)(param_4 + 0x37c) -
                 *(float *)(param_4 + 0x14c) * *(float *)(param_4 + 0x378)) /
                 (*(float *)(param_4 + 0x38c) -
                 *(float *)(param_4 + 0x14c) * *(float *)(param_4 + 0x388)),param_4,param_4 + 800,
                 param_4 + 0x350,&local_bc,1);
    fVar5 = *(float *)(param_4 + 0x150);
    fVar7 = 3.4028235e+38;
    *(undefined4 *)(param_4 + 0x138) = 0xffffffff;
    *(undefined4 *)(param_4 + 0x148) = 0xffffffff;
    fVar9 = *(float *)(param_4 + 0x154);
    fVar11 = *(float *)(param_4 + 0x158);
    *(undefined8 *)(param_4 + 0x130) = 0xffffffffffffffff;
    fVar13 = *(float *)(param_4 + 0x15c);
    *(undefined8 *)(param_4 + 0x140) = 0xffffffffffffffff;
    fVar14 = *(float *)(param_4 + 0x160);
    fVar15 = *(float *)(param_4 + 0x164);
    fVar16 = *(float *)(param_4 + 0x168);
    fVar17 = *(float *)(param_4 + 0x16c);
    lVar3 = 0;
    fVar18 = *(float *)(param_4 + 0x170);
    pfVar4 = local_a8;
    fVar19 = *(float *)(param_4 + 0x174);
    local_b0 = 0xbf800000bf800000;
    local_a8[0] = -1.0;
    local_a8[1] = 1.0;
    fVar20 = *(float *)(param_4 + 0x178);
    local_a8[6] = 1.0;
    local_a8[7] = -1.0;
    local_a8[8] = -1.0;
    local_a8[9] = 1.0;
    fVar21 = *(float *)(param_4 + 0x17c);
    local_a8[10] = -1.0;
    local_a8[0xb] = 1.0;
    local_a8[0xc] = -1.0;
    local_a8[0xd] = 1.0;
    local_a8[2] = -1.0;
    local_a8[3] = -1.0;
    local_a8[4] = 1.0;
    local_a8[5] = -1.0;
    local_a8[0xe] = 1.0;
    local_a8[0xf] = -1.0;
    puStack_68 = &DAT_3f8000003f800000;
    local_60 = 0xbf8000003f800000;
    puStack_58 = &DAT_3f8000003f800000;
    fVar8 = -3.4028235e+38;
    fVar10 = -3.4028235e+38;
    fVar12 = -3.4028235e+38;
    fVar25 = 3.4028235e+38;
    fVar22 = 3.4028235e+38;
    do {
      fVar24 = pfVar4[-2];
      fVar28 = pfVar4[-1];
      fVar29 = *pfVar4;
      fVar27 = fVar13 + fVar9 * fVar28 + fVar24 * fVar5 + fVar29 * fVar11;
      fVar26 = fVar17 + fVar15 * fVar28 + fVar24 * fVar14 + fVar29 * fVar16;
      pfVar4[-2] = fVar27;
      pfVar4[-1] = fVar26;
      fVar23 = fVar27;
      if (fVar7 <= fVar27) {
        fVar23 = fVar7;
      }
      fVar7 = fVar23;
      fVar23 = fVar26;
      if (fVar25 <= fVar26) {
        fVar23 = fVar25;
      }
      fVar25 = fVar21 + fVar19 * fVar28 + fVar24 * fVar18 + fVar29 * fVar20;
      *pfVar4 = fVar25;
      fVar24 = fVar25;
      if (fVar22 <= fVar25) {
        fVar24 = fVar22;
      }
      fVar22 = fVar27;
      if (fVar27 <= fVar12) {
        fVar22 = fVar12;
      }
      fVar12 = fVar26;
      if (fVar26 <= fVar10) {
        fVar12 = fVar10;
      }
      fVar10 = fVar25;
      if (fVar25 <= fVar8) {
        fVar10 = fVar8;
      }
      uVar2 = (undefined4)lVar3;
      if (fVar7 == fVar27) {
        *(undefined4 *)(param_4 + 0x130) = uVar2;
      }
      if (fVar23 == fVar26) {
        *(undefined4 *)(param_4 + 0x134) = uVar2;
      }
      if (fVar24 == fVar25) {
        *(undefined4 *)(param_4 + 0x138) = uVar2;
      }
      if (fVar22 == fVar27) {
        *(undefined4 *)(param_4 + 0x140) = uVar2;
      }
      if (fVar12 == fVar26) {
        *(undefined4 *)(param_4 + 0x144) = uVar2;
      }
      if (fVar10 == fVar25) {
        *(undefined4 *)(param_4 + 0x148) = uVar2;
      }
      lVar3 = lVar3 + 1;
      pfVar4 = pfVar4 + 3;
      fVar8 = fVar10;
      fVar10 = fVar12;
      fVar12 = fVar22;
      fVar25 = fVar23;
      fVar22 = fVar24;
    } while (lVar3 != 8);
  }
  *(undefined8 *)(param_4 + 0x390) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x398) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x3a0) = 0xff7fffffff7fffff;
  *(undefined8 *)(param_4 + 0x3d8) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x3e0) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_4 + 1000) = 0xff7fffffff7fffff;
  *(undefined8 *)(param_4 + 0x3a8) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x3b0) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x3b8) = 0xff7fffffff7fffff;
  *(undefined8 *)(param_4 + 0x3f0) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x3f8) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x400) = 0xff7fffffff7fffff;
  *(undefined8 *)(param_4 + 0x3c0) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x3c8) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x3d0) = 0xff7fffffff7fffff;
  *(undefined8 *)(param_4 + 0x408) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x410) = 0xff7fffff7f7fffff;
  *(undefined8 *)(param_4 + 0x418) = 0xff7fffffff7fffff;
  return;
}

