
undefined8 FUN_02287a80(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_188;
  undefined *puStack_180;
  int local_178;
  int iStack_174;
  undefined *local_170;
  int local_168;
  int iStack_164;
  undefined *local_160;
  int local_158 [2];
  byte local_150 [8];
  undefined *local_148;
  undefined8 local_140;
  byte local_138;
  undefined *local_130;
  undefined8 local_128;
  byte local_120;
  undefined *local_118;
  undefined8 local_110;
  byte local_108;
  undefined *local_100;
  undefined8 local_f8;
  byte local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  byte local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  byte local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  byte local_a8;
  undefined *local_a0;
  undefined8 local_98;
  byte local_90;
  
  bVar6 = 0;
  local_150[0] = 0;
  local_138 = 0;
  local_120 = 0;
  local_108 = 0;
  local_160 = PTR_DAT_04bb2010 + 0x10;
  local_158[0] = 0;
  local_158[1] = 0;
  local_140 = 0;
  local_128 = 0;
  local_110 = 0;
  local_f8 = 0;
  local_e0 = 0;
  local_f0 = 0;
  local_c8 = 0;
  local_d8 = 0;
  local_b0 = 0;
  local_c0 = 0;
  local_98 = 0;
  local_a8 = 0;
  local_90 = 0;
  iVar2 = (int)((float)(int)(*param_2 + -10.0) / 10.0) - (uint)(*param_2 + -10.0 < 0.0);
  iVar11 = (int)((float)(int)(param_2[2] + -10.0) / 10.0) - (uint)(param_2[2] + -10.0 < 0.0);
  iVar1 = iVar11 + 3;
  iVar12 = iVar2;
  local_148 = local_160;
  local_130 = local_160;
  local_118 = local_160;
  local_100 = local_160;
  local_e8 = local_160;
  local_d0 = local_160;
  local_b8 = local_160;
  local_a0 = local_160;
  do {
    if (bVar6 < 9) {
      uVar13 = (ulong)bVar6;
      local_150[uVar13 * 0x18] = 0;
      fVar14 = (float)iVar12 * 10.0 + 2.5;
      fVar16 = (float)iVar11 * 10.0 + 2.5;
      local_158[uVar13 * 6] = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      local_158[uVar13 * 6 + 1] = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
    }
    bVar6 = bVar6 + 1;
    if (iVar12 < iVar2 + 2) {
      iVar12 = iVar12 + 1;
    }
    else {
      iVar11 = iVar11 + 1;
      iVar12 = iVar2;
    }
  } while ((iVar2 != iVar12) || (iVar1 != iVar11));
  bVar6 = FUN_02287174(&local_160,1);
  local_150[0] = bVar6 & 1;
  if ((bVar6 & 1) == 0) {
    bVar6 = 0xff;
    fVar14 = 50.0;
  }
  else {
    fVar14 = ((float)local_158[0] * 5.0 + 2.5) - *param_2;
    fVar16 = ((float)local_158[1] * 5.0 + 2.5) - param_2[2];
    fVar16 = SQRT(fVar16 * fVar16 + fVar14 * fVar14);
    bVar3 = 50.0 - fVar16 <= 1.0;
    bVar6 = -(bVar3 || 50.0 <= fVar16);
    fVar14 = 50.0;
    if (!bVar3 && 50.0 > fVar16) {
      fVar14 = fVar16;
    }
  }
  bVar7 = FUN_02287174(&local_148,1);
  local_138 = bVar7 & 1;
  if ((bVar7 & 1) != 0) {
    fVar16 = ((float)(int)local_140 * 5.0 + 2.5) - *param_2;
    fVar15 = ((float)local_140._4_4_ * 5.0 + 2.5) - param_2[2];
    fVar16 = SQRT(fVar15 * fVar15 + fVar16 * fVar16);
    if (fVar16 < fVar14 && 1.0 < fVar14 - fVar16) {
      bVar6 = 1;
      fVar14 = fVar16;
    }
  }
  bVar8 = FUN_02287174(&local_130,1);
  local_120 = bVar8 & 1;
  fVar16 = fVar14;
  bVar7 = bVar6;
  if ((bVar8 & 1) != 0) {
    fVar16 = ((float)(int)local_128 * 5.0 + 2.5) - *param_2;
    fVar15 = ((float)local_128._4_4_ * 5.0 + 2.5) - param_2[2];
    fVar15 = SQRT(fVar15 * fVar15 + fVar16 * fVar16);
    fVar16 = fVar15;
    if (fVar14 <= fVar15 || fVar14 - fVar15 <= 1.0) {
      fVar16 = fVar14;
    }
    bVar7 = 2;
    if (fVar14 <= fVar15 || fVar14 - fVar15 <= 1.0) {
      bVar7 = bVar6;
    }
  }
  bVar8 = FUN_02287174(&local_118,1);
  local_108 = bVar8 & 1;
  fVar14 = fVar16;
  bVar6 = bVar7;
  if ((bVar8 & 1) != 0) {
    fVar14 = ((float)(int)local_110 * 5.0 + 2.5) - *param_2;
    fVar15 = ((float)local_110._4_4_ * 5.0 + 2.5) - param_2[2];
    fVar15 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
    fVar14 = fVar15;
    if (fVar16 <= fVar15 || fVar16 - fVar15 <= 1.0) {
      fVar14 = fVar16;
    }
    bVar6 = 3;
    if (fVar16 <= fVar15 || fVar16 - fVar15 <= 1.0) {
      bVar6 = bVar7;
    }
  }
  bVar8 = FUN_02287174(&local_100,1);
  local_f0 = bVar8 & 1;
  fVar16 = fVar14;
  bVar7 = bVar6;
  if ((bVar8 & 1) != 0) {
    fVar16 = ((float)(int)local_f8 * 5.0 + 2.5) - *param_2;
    fVar15 = ((float)local_f8._4_4_ * 5.0 + 2.5) - param_2[2];
    fVar15 = SQRT(fVar15 * fVar15 + fVar16 * fVar16);
    fVar16 = fVar15;
    if (fVar14 <= fVar15 || fVar14 - fVar15 <= 1.0) {
      fVar16 = fVar14;
    }
    bVar7 = 4;
    if (fVar14 <= fVar15 || fVar14 - fVar15 <= 1.0) {
      bVar7 = bVar6;
    }
  }
  uVar13 = FUN_02287174(&local_100,0);
  if ((uVar13 & 1) == 0) {
    return 0;
  }
  bVar8 = FUN_02287174(&local_e8,1);
  local_d8 = bVar8 & 1;
  fVar14 = fVar16;
  bVar6 = bVar7;
  if ((bVar8 & 1) != 0) {
    fVar14 = ((float)(int)local_e0 * 5.0 + 2.5) - *param_2;
    fVar15 = ((float)local_e0._4_4_ * 5.0 + 2.5) - param_2[2];
    fVar15 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
    fVar14 = fVar15;
    if (fVar16 <= fVar15 || fVar16 - fVar15 <= 1.0) {
      fVar14 = fVar16;
    }
    bVar6 = 5;
    if (fVar16 <= fVar15 || fVar16 - fVar15 <= 1.0) {
      bVar6 = bVar7;
    }
  }
  bVar8 = FUN_02287174(&local_d0,1);
  local_c0 = bVar8 & 1;
  fVar16 = fVar14;
  bVar7 = bVar6;
  if ((bVar8 & 1) != 0) {
    fVar16 = ((float)(int)local_c8 * 5.0 + 2.5) - *param_2;
    fVar15 = ((float)local_c8._4_4_ * 5.0 + 2.5) - param_2[2];
    fVar15 = SQRT(fVar15 * fVar15 + fVar16 * fVar16);
    fVar16 = fVar15;
    if (fVar14 <= fVar15 || fVar14 - fVar15 <= 1.0) {
      fVar16 = fVar14;
    }
    bVar7 = 6;
    if (fVar14 <= fVar15 || fVar14 - fVar15 <= 1.0) {
      bVar7 = bVar6;
    }
  }
  bVar8 = FUN_02287174(&local_b8,1);
  local_a8 = bVar8 & 1;
  fVar14 = fVar16;
  bVar6 = bVar7;
  if ((bVar8 & 1) != 0) {
    fVar14 = ((float)(int)local_b0 * 5.0 + 2.5) - *param_2;
    fVar15 = ((float)local_b0._4_4_ * 5.0 + 2.5) - param_2[2];
    fVar15 = SQRT(fVar15 * fVar15 + fVar14 * fVar14);
    fVar14 = fVar15;
    if (fVar16 <= fVar15 || fVar16 - fVar15 <= 1.0) {
      fVar14 = fVar16;
    }
    bVar6 = 7;
    if (fVar16 <= fVar15 || fVar16 - fVar15 <= 1.0) {
      bVar6 = bVar7;
    }
  }
  bVar7 = FUN_02287174(&local_a0,1);
  local_90 = bVar7 & 1;
  if ((bVar7 & 1) != 0) {
    fVar16 = ((float)(int)local_98 * 5.0 + 2.5) - *param_2;
    fVar15 = ((float)local_98._4_4_ * 5.0 + 2.5) - param_2[2];
    fVar16 = SQRT(fVar15 * fVar15 + fVar16 * fVar16);
    fVar15 = fVar14 - fVar16;
    bVar3 = false;
    bVar4 = true;
    bVar5 = false;
    if (fVar16 < fVar14) {
      bVar3 = false;
      bVar4 = false;
      bVar5 = true;
      if (!NAN(fVar15)) {
        bVar3 = fVar15 < 1.0;
        bVar4 = fVar15 == 1.0;
        bVar5 = false;
      }
    }
    if (!bVar4 && bVar3 == bVar5) {
      bVar6 = 8;
      goto LAB_02288030;
    }
  }
  if (bVar6 == 0xff) {
    return 0;
  }
LAB_02288030:
  uVar13 = (ulong)bVar6;
  iVar1 = local_158[uVar13 * 6];
  iVar11 = local_158[uVar13 * 6 + 1];
  puStack_180 = PTR_DAT_04bb2010 + 0x10;
  local_188 = PTR_DAT_04bbc1a0 + 0x10;
  local_168 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_164 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  local_178 = local_168;
  if (iVar1 <= local_168) {
    local_178 = iVar1;
  }
  if (local_168 <= iVar1) {
    local_168 = iVar1;
  }
  iStack_174 = iStack_164;
  if (iVar11 <= iStack_164) {
    iStack_174 = iVar11;
  }
  if (iStack_164 <= iVar11) {
    iStack_164 = iVar11;
  }
  if (*(long *)PTR_DAT_04bb27c8 == 0) {
    return 0;
  }
  lVar9 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
  if (lVar9 == 0) {
    return 0;
  }
  local_170 = puStack_180;
  uVar10 = FUN_00971f80(lVar9,&local_188,0);
  if ((uVar10 & 1) == 0) {
    return 0;
  }
  iVar1 = local_158[uVar13 * 6 + 1];
  *(int *)(param_1 + 8) = local_158[uVar13 * 6];
  *(int *)(param_1 + 0xc) = iVar1;
  return 1;
}

