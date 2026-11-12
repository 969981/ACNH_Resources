
uint FUN_0093f250(float param_1,float param_2,long param_3,float *param_4,undefined4 param_5,
                 undefined4 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  uint uVar14;
  ulong uVar15;
  byte bVar16;
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
  float local_138;
  float fStack_134;
  float local_130;
  float local_128;
  float fStack_124;
  float local_120;
  undefined *local_118;
  int local_110;
  int iStack_10c;
  undefined *local_108;
  int local_100;
  int local_fc;
  undefined8 local_f8;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined *local_e0;
  int local_d8;
  int iStack_d4;
  undefined8 local_d0;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  
  puVar9 = PTR_DAT_04bb2010;
  fVar17 = *(float *)(param_3 + 8);
  fVar19 = *param_4;
  fVar25 = fVar17 - fVar19;
  fVar18 = *(float *)(param_3 + 0x10);
  fVar20 = param_4[2];
  fVar26 = fVar18 - fVar20;
  fVar24 = SQRT(fVar26 * fVar26 + fVar25 * fVar25);
  if (*(float *)(param_3 + 0x34) + param_1 < fVar24) goto LAB_0093f2bc;
  local_118 = PTR_DAT_04bb2018 + 0x10;
  local_100 = (int)((float)(int)fVar19 / 10.0) - (uint)(fVar19 < 0.0);
  local_fc = (int)((float)(int)fVar20 / 10.0) - (uint)(fVar20 < 0.0);
  iVar5 = (int)((float)(int)fVar17 / 10.0) - (uint)(fVar17 < 0.0);
  iVar6 = (int)((float)(int)fVar18 / 10.0) - (uint)(fVar18 < 0.0);
  local_110 = iVar5;
  iStack_10c = iVar6;
  local_108 = local_118;
  if (param_1 <= fVar24) {
    if ((((local_100 + -1 <= iVar5) && (iVar5 <= local_100 + 1)) && (local_fc + -1 <= iVar6)) &&
       (iVar6 <= local_fc + 1)) {
      fVar19 = (float)local_100 * 10.0 + 2.5;
      fVar21 = (float)local_fc * 10.0 + 2.5;
      fVar22 = (float)local_100 * 10.0 + 10.0 + -2.5;
      fVar23 = (float)local_fc * 10.0 + 10.0 + -2.5;
      fVar20 = *(float *)(param_3 + 0x2c) * 0.575;
      local_b0 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
      iStack_ac = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
      iVar7 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      iVar8 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
      local_c0 = local_b0;
      if (iVar7 <= local_b0) {
        local_c0 = iVar7;
      }
      if (local_b0 <= iVar7) {
        local_b0 = iVar7;
      }
      iStack_bc = iStack_ac;
      if (iVar8 <= iStack_ac) {
        iStack_bc = iVar8;
      }
      if (iStack_ac <= iVar8) {
        iStack_ac = iVar8;
      }
      if (fVar20 < 0.0) {
        fVar20 = 0.0;
      }
      iStack_d4 = (int)((float)(int)(fVar18 - fVar20) / 5.0) - (uint)(fVar18 - fVar20 < 0.0);
      local_d8 = (int)((float)(int)(fVar17 - fVar20) / 5.0) - (uint)(fVar17 - fVar20 < 0.0);
      iVar7 = (int)((float)(int)(fVar17 + fVar20) / 5.0) - (uint)(fVar17 + fVar20 < 0.0);
      iVar8 = (int)((float)(int)(fVar18 + fVar20) / 5.0) - (uint)(fVar18 + fVar20 < 0.0);
      local_e8 = local_d8;
      if (iVar7 <= local_d8) {
        local_e8 = iVar7;
      }
      if (local_d8 <= iVar7) {
        local_d8 = iVar7;
      }
      iStack_e4 = iStack_d4;
      if (iVar8 <= iStack_d4) {
        iStack_e4 = iVar8;
      }
      if (iStack_d4 <= iVar8) {
        iStack_d4 = iVar8;
      }
      local_f8 = puVar1;
      local_f0 = puVar2;
      local_e0 = puVar2;
      local_d0 = puVar1;
      local_c8 = puVar2;
      local_b8 = puVar2;
      uVar15 = FUN_0093ee80(&local_f8,&local_d0);
      if ((uVar15 & 1) != 0) {
        fVar17 = *(float *)(param_3 + 0x2c) * 0.575;
        if (fVar17 < 0.0) {
          fVar17 = 0.0;
        }
        fVar19 = *(float *)(param_3 + 0x14) - fVar17;
        fVar18 = *(float *)(param_3 + 0x14) + fVar17;
        fVar20 = *(float *)(param_3 + 0x1c) - fVar17;
        fVar17 = *(float *)(param_3 + 0x1c) + fVar17;
        local_d8 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
        iStack_d4 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
        iVar7 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
        iVar8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
        local_e8 = local_d8;
        if (iVar7 <= local_d8) {
          local_e8 = iVar7;
        }
        if (local_d8 <= iVar7) {
          local_d8 = iVar7;
        }
        iStack_e4 = iStack_d4;
        if (iVar8 <= iStack_d4) {
          iStack_e4 = iVar8;
        }
        if (iStack_d4 <= iVar8) {
          iStack_d4 = iVar8;
        }
        local_f8 = puVar1;
        local_f0 = puVar2;
        local_e0 = puVar2;
        uVar15 = FUN_0093ee80(&local_f8,&local_d0);
        if ((uVar15 & 1) != 0) {
          local_f0 = puVar9 + 0x10;
          local_f8 = PTR_DAT_04bbc1a0 + 0x10;
          fVar17 = (float)iVar5 * 10.0 + 2.5;
          fVar18 = (float)iVar6 * 10.0 + 2.5;
          fVar19 = (float)iVar5 * 10.0 + 10.0 + -2.5;
          fVar20 = (float)iVar6 * 10.0 + 10.0 + -2.5;
          local_d8 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
          iStack_d4 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
          iVar7 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
          iVar8 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
          local_e8 = local_d8;
          if (iVar7 <= local_d8) {
            local_e8 = iVar7;
          }
          if (local_d8 <= iVar7) {
            local_d8 = iVar7;
          }
          iStack_e4 = iStack_d4;
          if (iVar8 <= iStack_d4) {
            iStack_e4 = iVar8;
          }
          if (iStack_d4 <= iVar8) {
            iStack_d4 = iVar8;
          }
          local_e0 = local_f0;
          uVar15 = FUN_0093ee80(&local_f8,&local_d0);
          iVar8 = local_fc;
          iVar7 = local_100;
          if ((uVar15 & 1) != 0) {
            bVar10 = FUN_0093e690(&local_118,0,&local_d0,param_3);
            bVar11 = FUN_0093e690(&local_118,3,&local_d0,param_3);
            bVar12 = FUN_0093e690(&local_118,1,&local_d0,param_3);
            bVar13 = FUN_0093e690(&local_118,2,&local_d0,param_3);
            bVar16 = bVar10 | bVar11;
            if ((((bVar16 & 1) != 0) || ((bVar12 & 1) != 0)) || ((bVar13 & 1) != 0)) {
              iVar3 = iVar7 + -1;
              iVar7 = iVar7 + 1;
              if (((bVar12 | bVar11 | iVar3 == iVar5 | bVar10 ^ 1 | iVar7 == iVar5) & 1) == 0)
              goto LAB_0093f384;
              iVar4 = iVar8 + -1;
              iVar8 = iVar8 + 1;
              if (((bVar13 | bVar10 | iVar4 == iVar6 | iVar8 == iVar6 | bVar11 ^ 0xff) & 1) == 0)
              goto LAB_0093f8a8;
              if (((bVar13 | bVar10 | iVar4 == iVar6 | iVar8 == iVar6 | bVar12 ^ 0xff) & 1) == 0)
              goto LAB_0093f8c8;
              if (((bVar12 | bVar11 | iVar3 == iVar5 | iVar7 == iVar5 | bVar13 ^ 0xff) & 1) == 0)
              goto LAB_0093f9c0;
              if (((iVar4 == iVar6) && (iVar7 != iVar5)) && (iVar3 != iVar5)) {
                bVar16 = bVar11 | bVar12;
              }
              else if (((iVar7 == iVar5) && (iVar4 != iVar6)) && (iVar8 != iVar6)) {
                bVar16 = bVar10 | bVar12;
              }
              else if (((iVar3 != iVar5) || (iVar4 == iVar6)) || (iVar8 == iVar6)) {
                if (((bVar11 | bVar12 | bVar10 ^ 1) & 1) != 0 ||
                    ((iVar8 != iVar6 || iVar7 == iVar5) || iVar3 == iVar5)) goto LAB_0093fa08;
                goto LAB_0093f2bc;
              }
              if (((bVar16 | bVar13) & 1) != 0) goto LAB_0093fa08;
            }
            goto LAB_0093f2bc;
          }
        }
      }
    }
LAB_0093fa08:
    fVar24 = 1.0 / fVar24;
    fVar18 = fVar25 * fVar24 * param_1 + *param_4;
    fVar19 = fVar26 * fVar24 * 2.5;
    fVar17 = fVar24 * 0.0 * param_1 + param_4[1] + 0.0;
    fVar20 = fVar18 - fVar19;
    fVar19 = fVar19 + fVar18;
    local_d0 = (undefined *)CONCAT44(fVar17,fVar20);
    local_f8 = (undefined *)CONCAT44(fVar17,fVar19);
    fVar18 = fVar25 * fVar24 * 2.5;
    local_120 = fVar26 * fVar24 * param_1 + param_4[2];
    local_130 = fVar18 + local_120;
    local_120 = local_120 - fVar18;
    local_f0 = (undefined *)CONCAT44(local_f0._4_4_,local_120);
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,local_130);
    _local_128 = CONCAT44(fVar17 + param_2,fVar19);
    _local_138 = CONCAT44(fVar17 + param_2,fVar20);
    uVar14 = FUN_0096693c(param_3,&local_d0,&local_f8,&local_128,&local_138,param_5,param_6,param_7,
                          1,0,0);
  }
  else {
    uVar15 = FUN_0093e690(&local_108,0,&local_d0,param_3);
    if ((uVar15 & 1) == 0) {
      uVar15 = FUN_0093e690(&local_108,3,&local_f8,param_3);
      if ((uVar15 & 1) == 0) {
        uVar15 = FUN_0093e690(&local_108,1,&local_128,param_3);
        if ((uVar15 & 1) == 0) {
          uVar15 = FUN_0093e690(&local_108,2,&local_138,param_3);
          if ((uVar15 & 1) == 0) goto LAB_0093f2bc;
LAB_0093f9c0:
          fVar17 = -1.0;
          goto LAB_0093f388;
        }
LAB_0093f8c8:
        fVar17 = 0.0;
        fVar18 = 1.0;
      }
      else {
LAB_0093f8a8:
        fVar17 = 0.0;
        fVar18 = -1.0;
      }
    }
    else {
LAB_0093f384:
      fVar17 = 1.0;
LAB_0093f388:
      fVar18 = 0.0;
    }
    if (fVar24 <= *(float *)(param_3 + 0x2c) + param_1) {
      fVar24 = *(float *)(param_3 + 0x2c) + -0.625;
      fVar20 = *(float *)(param_3 + 8) - fVar18 * fVar24;
      fVar19 = (*(float *)(param_3 + 0xc) - fVar24 * 0.0) + 0.0;
      fVar25 = fVar20 - fVar17 * 2.5;
      fVar20 = fVar17 * 2.5 + fVar20;
      local_f8 = (undefined *)CONCAT44(fVar19,fVar20);
      local_120 = *(float *)(param_3 + 0x10) - fVar17 * fVar24;
      local_d0 = (undefined *)CONCAT44(fVar19,fVar25);
      local_130 = fVar18 * 2.5 + local_120;
      local_120 = local_120 - fVar18 * 2.5;
      local_f0 = (undefined *)CONCAT44(local_f0._4_4_,local_120);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,local_130);
      _local_128 = CONCAT44(fVar19 + param_2,fVar20);
      _local_138 = CONCAT44(fVar19 + param_2,fVar25);
      FUN_0096693c(param_3,&local_d0,&local_f8,&local_128,&local_138,param_5,param_6,param_7,1,0,0);
    }
LAB_0093f2bc:
    uVar14 = 0;
  }
  return uVar14 & 1;
}

