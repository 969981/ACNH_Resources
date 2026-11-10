
void FUN_00339d80(float param_1,undefined8 param_2,long param_3,long param_4,int *param_5)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float *pfVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float local_18 [4];
  float local_8;
  float fStack_4;
  
  uVar1 = *(uint *)(param_4 + 0x70);
  uVar9 = (ulong)uVar1;
  if ((int)uVar1 < 2) {
    *(undefined4 *)(param_4 + 0x78) = 0;
    return;
  }
  pfVar10 = *(float **)(*(long *)(param_4 + 0x58) + 0x58);
  if (param_5[0x16] == 1) {
    fVar19 = 0.0;
    uVar12 = 1;
    pfVar16 = pfVar10;
    do {
      pfVar16 = *(float **)(pfVar16 + 0x16);
      uVar12 = uVar12 + 1;
      pfVar17 = *(float **)(pfVar16 + 0x18);
      fVar20 = (float)*(undefined8 *)pfVar16 - *pfVar17;
      fVar21 = (float)((ulong)*(undefined8 *)pfVar16 >> 0x20) - pfVar17[1];
      fVar22 = (float)*(undefined8 *)(pfVar16 + 2) - pfVar17[2];
      fVar23 = (float)((ulong)*(undefined8 *)(pfVar16 + 2) >> 0x20) - pfVar17[3];
      fVar20 = fVar20 * fVar20;
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      fVar23 = fVar23 * fVar23;
      auVar24._4_4_ = fVar21;
      auVar24._0_4_ = fVar20;
      auVar24._8_4_ = fVar22;
      auVar24._12_4_ = fVar23;
      auVar2._4_4_ = fVar21;
      auVar2._0_4_ = fVar20;
      auVar2._8_4_ = fVar22;
      auVar2._12_4_ = fVar23;
      auVar24 = NEON_ext(auVar24,auVar2,8,1);
      fVar19 = fVar19 + SQRT(auVar24._0_4_ + fVar20 + auVar24._4_4_ + fVar21);
    } while (uVar1 != uVar12);
    if ((int)uVar1 < 1) {
      bVar8 = false;
      *(undefined4 *)(param_4 + 0x78) = 0;
      iVar13 = *param_5;
      goto joined_r0x00339fd4;
    }
    fVar19 = 1.0 / fVar19;
    fVar20 = *(float *)(param_4 + 0x80) - (float)(int)*(float *)(param_4 + 0x80);
  }
  else {
    fVar20 = *(float *)(param_4 + 0x80) - (float)(int)*(float *)(param_4 + 0x80);
    fVar19 = 0.0;
  }
  uVar14 = 0;
  pfVar16 = (float *)(param_3 + 0x20);
  do {
    iVar13 = (int)uVar14;
    if (param_5[0x16] == 1) {
      uVar5 = (*(undefined8 **)(pfVar10 + 0x18))[1];
      uVar18 = **(undefined8 **)(pfVar10 + 0x18);
      if (iVar13 < 2) {
        iVar13 = 1;
      }
      bVar8 = uVar14 != 0;
      lVar11 = param_3 + (ulong)(iVar13 - 1) * 0x50;
      fVar21 = (float)uVar18 - *pfVar10;
      fVar22 = (float)((ulong)uVar18 >> 0x20) - pfVar10[1];
      fVar23 = (float)uVar5 - pfVar10[2];
      fVar25 = (float)((ulong)uVar5 >> 0x20) - pfVar10[3];
      fVar21 = fVar21 * fVar21;
      fVar22 = fVar22 * fVar22;
      fVar23 = fVar23 * fVar23;
      fVar25 = fVar25 * fVar25;
      auVar3._4_4_ = fVar22;
      auVar3._0_4_ = fVar21;
      auVar3._8_4_ = fVar23;
      auVar3._12_4_ = fVar25;
      auVar4._4_4_ = fVar22;
      auVar4._0_4_ = fVar21;
      auVar4._8_4_ = fVar23;
      auVar4._12_4_ = fVar25;
      auVar24 = NEON_ext(auVar3,auVar4,8,1);
      local_8 = *(float *)(param_4 + 0x8c) * 0.1;
      fVar21 = SQRT(auVar24._0_4_ + fVar21 + auVar24._4_4_ + fVar22);
      local_18[0] = 0.0;
      if (bVar8) {
        local_18[0] = *(float *)(lVar11 + 0x30) + fVar19 * fVar21;
      }
      local_18[3] = local_8;
      local_18[1] = 0.0;
      if (bVar8) {
        local_18[3] = *(float *)(lVar11 + 0x30) - fVar21 * 0.1;
        local_18[1] = *(float *)(lVar11 + 0x34) + fVar19 * fVar21;
      }
      fStack_4 = local_8;
      if (bVar8) {
        fStack_4 = *(float *)(lVar11 + 0x38) - fVar21 * 0.1;
      }
      local_18[2] = 0.0;
      if (bVar8) {
        local_18[2] = *(float *)(lVar11 + 0x38) + fVar19 * fVar21;
      }
      if (bVar8) {
        local_8 = *(float *)(lVar11 + 0x34) - fVar21 * 0.1;
      }
LAB_00339ef8:
      fVar22 = local_18[(long)param_5[3] * 3];
      fVar23 = local_18[(long)param_5[4] * 3 + 1];
      fVar21 = local_18[(long)param_5[5] * 3 + 2];
    }
    else {
      fVar21 = 0.0;
      fVar22 = 0.0;
      fVar23 = 0.0;
      if (param_5[0x16] == 0) {
        local_18[0] = (float)iVar13 / (float)(int)(uVar1 - 1);
        local_18[1] = local_18[0];
        fVar21 = (fVar20 + param_1 + (float)iVar13) / (float)((int)(float)param_5[6] + -1);
        local_8 = 1.0;
        if (fVar21 <= 1.0) {
          local_8 = fVar21;
        }
        fStack_4 = local_8;
        local_18[2] = local_18[0];
        local_18[3] = local_8;
        goto LAB_00339ef8;
      }
    }
    fVar25 = pfVar10[0x14];
    uVar14 = uVar14 + 1;
    uVar18 = *(undefined8 *)(pfVar10 + 2);
    *(undefined8 *)(pfVar16 + -8) = *(undefined8 *)pfVar10;
    pfVar16[-6] = (float)uVar18;
    pfVar16[-5] = fVar25;
    fVar25 = pfVar10[9];
    fVar6 = pfVar10[10];
    pfVar16[-4] = pfVar10[8];
    pfVar16[-3] = fVar25;
    pfVar16[-2] = fVar6;
    fVar25 = pfVar10[0xc];
    fVar6 = pfVar10[0xd];
    fVar7 = pfVar10[0xe];
    *(ulong *)(pfVar16 + 4) = CONCAT44(fVar23,fVar22);
    pfVar16[2] = fVar7;
    *pfVar16 = fVar25;
    pfVar16[1] = fVar6;
    pfVar16[6] = fVar21;
    pfVar10 = *(float **)(pfVar10 + 0x16);
    pfVar16 = pfVar16 + 0x14;
  } while (uVar9 != uVar14);
  bVar8 = true;
  *(uint *)(param_4 + 0x78) = uVar1 << 1;
  iVar13 = *param_5;
joined_r0x00339fd4:
  if (((iVar13 != 0) && (iVar13 != 3)) && (bVar8)) {
    lVar11 = *(long *)(param_4 + 0x58);
    puVar15 = (undefined4 *)(param_3 + 0x48);
    do {
      lVar11 = *(long *)(lVar11 + 0x58);
      uVar9 = uVar9 - 1;
      uVar18 = *(undefined8 *)(lVar11 + 0x48);
      *(undefined8 *)(puVar15 + -2) = *(undefined8 *)(lVar11 + 0x40);
      *puVar15 = (int)uVar18;
      puVar15 = puVar15 + 0x14;
    } while (uVar9 != 0);
  }
  return;
}

