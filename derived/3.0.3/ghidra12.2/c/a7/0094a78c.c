
void FUN_0094a78c(long param_1,long param_2,float *param_3,float *param_4,float *param_5,
                 ulong param_6,undefined4 *param_7)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
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
  float local_f0;
  float fStack_ec;
  float local_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  float local_a8;
  float fStack_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  
  fVar13 = param_5[2];
  fVar18 = *param_5;
  fVar19 = param_5[1] + param_3[1] * 0.5;
  fVar7 = sinf(*param_4);
  fVar8 = sinf(param_4[1]);
  fVar9 = sinf(param_4[2]);
  fVar10 = cosf(*param_4);
  fVar11 = cosf(param_4[1]);
  fVar12 = cosf(param_4[2]);
  fVar15 = *param_3;
  fVar17 = param_3[1];
  fVar21 = fVar15 * fVar11 * fVar12;
  fVar16 = fVar9 * fVar11 * fVar15;
  fVar14 = -(fVar8 * fVar15);
  fVar24 = (fVar10 * fVar12 + fVar9 * fVar7 * fVar8) * fVar17;
  fVar23 = (fVar7 * fVar8 * fVar12 - fVar9 * fVar10) * fVar17;
  fVar17 = fVar7 * fVar11 * fVar17;
  fVar15 = param_3[2];
  fVar20 = (-(fVar7 * fVar12) + fVar8 * fVar9 * fVar10) * fVar15;
  fVar12 = (fVar7 * fVar9 + fVar8 * fVar10 * fVar12) * fVar15;
  fVar22 = fVar17 * 0.5;
  fVar25 = fVar22 + fVar14 * -0.5;
  fVar17 = fVar17 * -0.5;
  fVar15 = fVar10 * fVar11 * fVar15;
  fVar8 = fVar23 * 0.5;
  fVar7 = fVar8 + fVar21 * -0.5;
  fVar23 = fVar23 * -0.5;
  local_9c = fVar18 + fVar7 + fVar12 * -0.5;
  fVar9 = fVar24 * 0.5;
  fVar10 = fVar9 + fVar16 * -0.5;
  local_a8 = fVar18 + fVar7 + fVar12 * 0.5;
  fVar9 = fVar9 + fVar16 * 0.5;
  fVar24 = fVar24 * -0.5;
  fStack_a4 = fVar19 + fVar10 + fVar20 * 0.5;
  fStack_98 = fVar19 + fVar10 + fVar20 * -0.5;
  fVar7 = fVar24 + fVar16 * -0.5;
  fVar24 = fVar24 + fVar16 * 0.5;
  fVar8 = fVar8 + fVar21 * 0.5;
  local_94 = fVar13 + fVar25 + fVar15 * -0.5;
  fVar22 = fVar22 + fVar14 * 0.5;
  fStack_e0 = fVar19 + fVar24 + fVar20 * 0.5;
  local_a0 = fVar13 + fVar25 + fVar15 * 0.5;
  local_b4 = fVar18 + fVar8 + fVar12 * 0.5;
  local_c0 = fVar18 + fVar8 + fVar12 * -0.5;
  fStack_bc = fVar19 + fVar9 + fVar20 * -0.5;
  fStack_b0 = fVar19 + fVar9 + fVar20 * 0.5;
  fStack_c8 = fVar19 + fVar7 + fVar20 * -0.5;
  fStack_d4 = fVar19 + fVar7 + fVar20 * 0.5;
  local_b8 = fVar13 + fVar22 + fVar15 * -0.5;
  fVar7 = fVar23 + fVar21 * -0.5;
  fVar23 = fVar23 + fVar21 * 0.5;
  local_ac = fVar13 + fVar22 + fVar15 * 0.5;
  local_cc = fVar18 + fVar7 + fVar12 * -0.5;
  local_f0 = fVar18 + fVar23 + fVar12 * -0.5;
  fStack_ec = fVar19 + fVar24 + fVar20 * -0.5;
  local_d8 = fVar18 + fVar7 + fVar12 * 0.5;
  local_e4 = fVar18 + fVar23 + fVar12 * 0.5;
  fVar9 = fVar17 + fVar14 * -0.5;
  fVar17 = fVar17 + fVar14 * 0.5;
  local_e8 = fVar13 + fVar17 + fVar15 * -0.5;
  local_c4 = fVar13 + fVar9 + fVar15 * -0.5;
  local_dc = fVar13 + fVar17 + fVar15 * 0.5;
  fVar8 = (float)NEON_fminnm(local_9c,0x49742400);
  fVar7 = local_9c;
  if (local_9c <= -1e+06) {
    fVar7 = -1e+06;
  }
  local_d0 = fVar13 + fVar9 + fVar15 * 0.5;
  fVar9 = local_a8;
  if (fVar8 <= local_a8) {
    fVar9 = fVar8;
  }
  fVar8 = local_a8;
  if (local_a8 <= fVar7) {
    fVar8 = fVar7;
  }
  fVar7 = local_b4;
  if (fVar9 <= local_b4) {
    fVar7 = fVar9;
  }
  fVar9 = local_b4;
  if (local_b4 <= fVar8) {
    fVar9 = fVar8;
  }
  fVar8 = local_c0;
  if (fVar7 <= local_c0) {
    fVar8 = fVar7;
  }
  fVar7 = local_c0;
  if (local_c0 <= fVar9) {
    fVar7 = fVar9;
  }
  iVar3 = (int)((float)(int)(fVar8 + -0.01) / 5.0) - (uint)(fVar8 + -0.01 < 0.0);
  iVar4 = (int)((float)(int)(fVar7 + 0.01) / 5.0) - (uint)(fVar7 + 0.01 < 0.0);
  iVar5 = iVar3;
  if (iVar4 <= iVar3) {
    iVar5 = iVar4;
  }
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
  if (iVar5 <= *(int *)(param_2 + 8) && *(int *)(param_2 + 8) <= iVar3) {
    fVar8 = (float)NEON_fminnm(local_94,0x49742400);
    fVar7 = local_a0;
    if (fVar8 <= local_a0) {
      fVar7 = fVar8;
    }
    fVar8 = local_ac;
    if (fVar7 <= local_ac) {
      fVar8 = fVar7;
    }
    fVar7 = local_b8;
    if (fVar8 <= local_b8) {
      fVar7 = fVar8;
    }
    iVar5 = (int)((float)(int)(fVar7 + -0.01) / 5.0) - (uint)(fVar7 + -0.01 < 0.0);
    fVar7 = local_94;
    if (local_94 <= -1e+06) {
      fVar7 = -1e+06;
    }
    fVar8 = local_a0;
    if (local_a0 <= fVar7) {
      fVar8 = fVar7;
    }
    fVar7 = local_ac;
    if (local_ac <= fVar8) {
      fVar7 = fVar8;
    }
    fVar8 = local_b8;
    if (local_b8 <= fVar7) {
      fVar8 = fVar7;
    }
    iVar4 = (int)((float)(int)(fVar8 + 0.01) / 5.0) - (uint)(fVar8 + 0.01 < 0.0);
    iVar3 = iVar5;
    if (iVar5 <= iVar4) {
      iVar3 = iVar4;
    }
    if (iVar4 <= iVar5) {
      iVar5 = iVar4;
    }
    if (iVar5 <= *(int *)(param_2 + 0xc) && *(int *)(param_2 + 0xc) <= iVar3) {
      if (*(char *)(param_1 + 0xa6) != '\0') {
        lVar1 = param_1 + 0xa8;
        lVar2 = param_1 + 0xb0;
        uVar6 = param_6 & 0xffffff7f | 0x80;
        FUN_009728fc(&local_cc,&local_d8,&local_a8,&local_9c,lVar1,lVar2,uVar6,*param_7,0);
        FUN_009728fc(&local_d8,&local_e4,&local_b4,&local_a8,lVar1,lVar2,uVar6,*param_7,0);
        FUN_009728fc(&local_e4,&local_f0,&local_c0,&local_b4,lVar1,lVar2,uVar6,*param_7,0);
        FUN_009728fc(&local_f0,&local_cc,&local_9c,&local_c0,lVar1,lVar2,uVar6,*param_7,0);
      }
      if (*(char *)(param_1 + 0xa7) != '\0') {
        FUN_009728fc(&local_9c,&local_a8,&local_b4,&local_c0,param_1 + 0xa8,param_1 + 0xb0,
                     param_6 & 0xfffffdff | 0x200,*param_7,0);
      }
    }
  }
  return;
}

