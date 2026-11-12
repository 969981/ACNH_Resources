
undefined8 FUN_008dbc7c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
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
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  float local_80;
  undefined8 local_78;
  float local_70;
  undefined8 local_6c;
  float local_64;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_50;
  float local_48;
  
  puVar2 = PTR_DAT_04bb2020;
  if ((*(long *)PTR_DAT_04bb5ce0 == 0) || (*(char *)(*(long *)PTR_DAT_04bb5ce0 + 0xf5c) == '\0')) {
    return 0;
  }
  local_50 = *(undefined8 *)(param_1 + 0x2a8);
  local_48 = *(float *)(param_1 + 0x2b0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "alw";
  local_60 = puVar1;
  FUN_008cdfe0(param_1,&local_60,&local_50);
  local_6c = 0x7fc000007fc00000;
  local_64 = NAN;
  fVar4 = (float)NEON_ucvtf(*(undefined4 *)(param_1 + 0x315d4));
  fVar4 = fVar4 * 8.381903e-08;
  fVar5 = fVar4 + -360.0;
  if (fVar4 <= 180.0) {
    fVar5 = fVar4;
  }
  fVar4 = -fVar5;
  if (0.0 <= fVar5) {
    fVar4 = fVar5;
  }
  if (180.0 < fVar4) {
LAB_008dbe04:
    fVar5 = NAN;
    fVar4 = fVar5;
    fVar16 = fVar5;
  }
  else {
    local_78 = *(undefined8 *)(param_1 + 0x2a8);
    local_88 = *(undefined8 *)(param_1 + 0x2a8);
    local_70 = *(float *)(param_1 + 0x2b0);
    local_80 = *(float *)(param_1 + 0x2b0);
    pcStack_58 = "alw";
    local_60 = puVar1;
    uVar3 = FUN_008ce460(&local_60,&local_78);
    if ((uVar3 & 1) == 0) goto LAB_008dbe04;
    local_98 = puVar2 + 0x10;
    pcStack_90 = "alp";
    uVar3 = FUN_008ce460(&local_98,&local_88);
    if ((uVar3 & 1) == 0) goto LAB_008dbe04;
    if (3 < (int)(SQRT((local_70 - local_80) * (local_70 - local_80) +
                       ((float)local_78 - (float)local_88) * ((float)local_78 - (float)local_88)) /
                 5.0)) goto LAB_008dbe04;
    local_60 = puVar2 + 0x10;
    pcStack_58 = "alp";
    FUN_008cdfe0(uVar3,&local_60,&local_6c);
    fVar5 = local_64;
    fVar4 = local_6c._4_4_;
    fVar16 = (float)local_6c;
  }
  fVar10 = (float)NEON_fminnm((float)local_50,0x7f7fffff);
  fVar6 = (float)NEON_fminnm(local_50._4_4_,0x7f7fffff);
  fVar8 = (float)NEON_fminnm(local_48,0x7f7fffff);
  fVar14 = (float)local_50;
  if ((float)local_50 <= -3.4028235e+38) {
    fVar14 = -3.4028235e+38;
  }
  fVar12 = local_50._4_4_;
  if (local_50._4_4_ <= -3.4028235e+38) {
    fVar12 = -3.4028235e+38;
  }
  fVar17 = local_48;
  if (local_48 <= -3.4028235e+38) {
    fVar17 = -3.4028235e+38;
  }
  fVar7 = fVar6;
  fVar9 = fVar8;
  fVar11 = fVar10;
  fVar13 = fVar12;
  fVar15 = fVar14;
  if (((!NAN(fVar16)) && (!NAN(fVar4))) && (!NAN(fVar5))) {
    fVar11 = fVar16;
    if (fVar10 <= fVar16) {
      fVar11 = fVar10;
    }
    fVar7 = fVar4;
    if (fVar6 <= fVar4) {
      fVar7 = fVar6;
    }
    fVar9 = fVar5;
    if (fVar8 <= fVar5) {
      fVar9 = fVar8;
    }
    fVar15 = fVar16;
    if (fVar16 <= fVar14) {
      fVar15 = fVar14;
    }
    fVar13 = fVar4;
    if (fVar4 <= fVar12) {
      fVar13 = fVar12;
    }
    if (fVar17 < fVar5) goto LAB_008dbe8c;
  }
  fVar5 = fVar17;
LAB_008dbe8c:
  local_98 = puVar2 + 0x10;
  pcStack_58 = s_cRoomNormal_049228d2;
  *(float *)(param_1 + 0x316f0) = (fVar11 + fVar15) * 0.5;
  *(float *)(param_1 + 0x316f4) = (fVar7 + fVar13) * 0.5;
  *(float *)(param_1 + 0x316f8) = (fVar9 + fVar5) * 0.5;
  pcStack_90 = "JBWipe";
  local_60 = local_98;
  FUN_008bf770(param_1,&local_60,&local_98);
  return 1;
}

