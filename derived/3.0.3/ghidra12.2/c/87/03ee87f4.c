
void FUN_03ee87f4(long param_1,uint param_2)

{
  short *psVar1;
  short *psVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  float *pfVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
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
  float local_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  
  lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 0x270);
  uVar3 = param_2;
  if (*(uint *)(*(long *)(param_1 + 0x10) + 0x268) <= param_2) {
    uVar3 = 0;
  }
  uVar4 = *(uint *)(lVar9 + (long)(int)uVar3 * 0x130 + 0x48);
  if (*(uint *)(param_1 + 0x20) <= uVar4) {
    uVar4 = 0;
  }
  psVar1 = (short *)(*(long *)(param_1 + 0x28) + (long)(int)uVar4 * 4);
  if (*psVar1 == -1 || psVar1[1] == -1) {
    return;
  }
  uVar8 = *(uint *)(lVar9 + (long)(int)uVar3 * 0x130 + 0x108);
  uVar4 = (uint)psVar1[1];
  if (uVar8 == 0xffffffff) {
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = uVar4;
    if (*(uint *)(lVar7 + 0x30) <= uVar4) {
      uVar8 = 0;
    }
    if ((*(byte *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar8) >> 1 & 1) == 0) {
      if (*(uint *)(lVar7 + 0x20) <= uVar4) {
        uVar4 = 0;
      }
      pfVar6 = (float *)(*(long *)(lVar7 + 0x28) + (long)(int)uVar4 * 0x1c);
    }
    else {
      pfVar6 = (float *)FUN_03ef9df0();
    }
LAB_03ee8934:
    fVar10 = *pfVar6;
    fVar12 = pfVar6[1];
    fVar13 = pfVar6[2];
    fVar11 = pfVar6[3];
  }
  else {
    if (uVar8 == 0xfffffffe) {
      pfVar6 = (float *)FUN_03ef9b40(*(undefined8 *)(param_1 + 8));
      goto LAB_03ee8934;
    }
    if (*(uint *)(param_1 + 0x20) <= uVar8) {
      uVar8 = 0;
    }
    psVar2 = (short *)(*(long *)(param_1 + 0x28) + (long)(int)uVar8 * 4);
    sVar5 = psVar2[1];
    if (*psVar2 == -1 || sVar5 == -1) {
      return;
    }
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = (uint)sVar5;
    uVar4 = uVar8;
    if (*(uint *)(lVar7 + 0x30) <= uVar8) {
      uVar4 = 0;
    }
    if ((*(byte *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar4) >> 1 & 1) == 0) {
      if (*(uint *)(lVar7 + 0x20) <= uVar8) {
        uVar8 = 0;
      }
      pfVar6 = (float *)(*(long *)(lVar7 + 0x28) + (long)(int)uVar8 * 0x1c);
    }
    else {
      pfVar6 = (float *)FUN_03ef9df0();
    }
    fVar13 = *pfVar6;
    fVar14 = pfVar6[1];
    fVar15 = pfVar6[2];
    fVar17 = pfVar6[3];
    fVar10 = fVar13 * fVar13 + fVar17 * fVar17 + fVar14 * fVar14 + fVar15 * fVar15;
    if (1.1920929e-07 < fVar10) {
      fVar10 = 1.0 / fVar10;
      fVar17 = fVar17 * fVar10;
      fVar13 = fVar13 * fVar10;
      fVar14 = fVar14 * fVar10;
      fVar15 = fVar15 * fVar10;
    }
    fVar15 = -fVar15;
    fVar14 = -fVar14;
    fVar13 = -fVar13;
    lVar7 = *(long *)(param_1 + 8);
    uVar8 = (uint)psVar1[1];
    uVar4 = uVar8;
    if (*(uint *)(lVar7 + 0x30) <= (uint)(int)psVar1[1]) {
      uVar4 = 0;
    }
    if ((*(byte *)(*(long *)(lVar7 + 0x38) + (long)(int)uVar4) >> 1 & 1) == 0) {
      if (*(uint *)(lVar7 + 0x20) <= uVar8) {
        uVar8 = 0;
      }
      pfVar6 = (float *)(*(long *)(lVar7 + 0x28) + (long)(int)uVar8 * 0x1c);
    }
    else {
      pfVar6 = (float *)FUN_03ef9df0();
    }
    fVar18 = *pfVar6;
    fVar16 = pfVar6[1];
    fVar20 = pfVar6[2];
    fVar19 = pfVar6[3];
    fVar11 = ((-(fVar13 * fVar18) + fVar19 * fVar17) - fVar16 * fVar14) - fVar20 * fVar15;
    fVar12 = -(fVar13 * fVar20) + fVar16 * fVar17 + fVar19 * fVar14 + fVar18 * fVar15;
    fVar10 = (fVar13 * fVar19 + fVar18 * fVar17 + fVar20 * fVar14) - fVar16 * fVar15;
    fVar13 = ((fVar13 * fVar16 + fVar20 * fVar17) - fVar18 * fVar14) + fVar19 * fVar15;
  }
  lVar9 = lVar9 + (long)(int)uVar3 * 0x130;
  fVar14 = *(float *)(lVar9 + 0x11c);
  fVar15 = *(float *)(lVar9 + 0x110);
  fVar17 = *(float *)(lVar9 + 0x114);
  fVar18 = *(float *)(lVar9 + 0x118);
  uVar3 = param_2;
  if (*(uint *)(param_1 + 0x40) <= param_2) {
    uVar3 = 0;
  }
  lVar7 = *(long *)(param_1 + 0x48) + (long)(int)uVar3 * 0x1c;
  fVar20 = (fVar11 * fVar15 + fVar10 * fVar14 + fVar13 * fVar17) - fVar12 * fVar18;
  fVar21 = -(fVar15 * fVar13) + fVar12 * fVar14 + fVar11 * fVar17 + fVar10 * fVar18;
  fVar16 = ((-(fVar15 * fVar10) + fVar11 * fVar14) - fVar12 * fVar17) - fVar13 * fVar18;
  fVar10 = ((fVar12 * fVar15 + fVar13 * fVar14) - fVar10 * fVar17) + fVar11 * fVar18;
  fVar13 = fVar20 + fVar20;
  fVar11 = fVar21 * (fVar21 + fVar21);
  fVar17 = fVar10 * (fVar21 + fVar21);
  fVar16 = fVar16 + fVar16;
  fVar12 = fVar10 * (fVar10 + fVar10);
  fVar22 = 1.0 - fVar20 * fVar13;
  fVar14 = fVar21 * fVar13 - fVar10 * fVar16;
  fVar18 = fVar21 * fVar13 + fVar10 * fVar16;
  fVar19 = fVar17 - fVar20 * fVar16;
  fVar17 = fVar17 + fVar20 * fVar16;
  fVar20 = *(float *)(lVar9 + 0xb8);
  fVar15 = fVar10 * fVar13 + fVar21 * fVar16;
  fVar13 = fVar10 * fVar13 - fVar21 * fVar16;
  fVar10 = (1.0 - fVar11) - fVar12;
  fVar12 = fVar22 - fVar12;
  fVar22 = fVar22 - fVar11;
  fVar11 = *(float *)(lVar9 + 0xbc);
  fVar16 = *(float *)(lVar9 + 0xc0);
  local_6c = fVar11 * fVar14 + fVar20 * fVar10 + fVar16 * fVar15;
  fStack_68 = fVar11 * fVar12 + fVar20 * fVar18 + fVar16 * fVar19;
  local_64 = fVar11 * fVar17 + fVar20 * fVar13 + fVar16 * fVar22;
  fVar11 = SQRT(fStack_68 * fStack_68 + local_6c * local_6c + local_64 * local_64);
  if (0.0 < fVar11) {
    fVar11 = 1.0 / fVar11;
    local_6c = local_6c * fVar11;
    fStack_68 = fStack_68 * fVar11;
    local_64 = local_64 * fVar11;
  }
  fVar16 = (fVar22 + fVar10 + fVar12 + 1.0) * 0.25;
  fVar20 = fVar16 + (fVar12 + fVar22) * -0.5;
  fVar11 = fVar16 + (fVar10 + fVar22) * -0.5;
  fVar10 = fVar16 + (fVar10 + fVar12) * -0.5;
  if (fVar16 <= fVar20) {
    if (fVar20 <= fVar11) goto code_r0x03ee8b3c;
    if (fVar10 < fVar20) {
      local_7c = SQRT(fVar20);
      if (NAN(local_7c)) {
        local_7c = sqrtf(fVar20);
      }
      local_74 = 0.25 / local_7c;
      fStack_78 = (fVar14 + fVar18) * local_74;
      fStack_70 = (fVar17 - fVar19) * local_74;
      local_74 = (fVar15 + fVar13) * local_74;
      goto LAB_03ee8ba4;
    }
  }
  else if (fVar16 <= fVar11) {
code_r0x03ee8b3c:
    if (fVar10 < fVar11) {
      fStack_78 = SQRT(fVar11);
      if (NAN(fStack_78)) {
        fStack_78 = sqrtf(fVar11);
      }
      local_7c = 0.25 / fStack_78;
      fStack_70 = (fVar15 - fVar13) * local_7c;
      local_74 = (fVar19 + fVar17) * local_7c;
      local_7c = (fVar18 + fVar14) * local_7c;
      goto LAB_03ee8ba4;
    }
  }
  else if (fVar10 < fVar16) {
    fStack_70 = SQRT(fVar16);
    if (NAN(fStack_70)) {
      fStack_70 = sqrtf(fVar16);
    }
    local_74 = 0.25 / fStack_70;
    local_7c = (fVar17 - fVar19) * local_74;
    fStack_78 = (fVar15 - fVar13) * local_74;
    local_74 = (fVar18 - fVar14) * local_74;
    goto LAB_03ee8ba4;
  }
  local_74 = SQRT(fVar10);
  if (NAN(local_74)) {
    local_74 = sqrtf(fVar10);
  }
  fStack_78 = 0.25 / local_74;
  fStack_70 = (fVar18 - fVar14) * fStack_78;
  local_7c = (fVar13 + fVar15) * fStack_78;
  fStack_78 = (fVar17 + fVar19) * fStack_78;
LAB_03ee8ba4:
  FUN_03efb110(lVar7,lVar7 + 8,&local_7c,&local_6c,(float *)(lVar9 + 0xb8),lVar9 + 0xe0,
               lVar9 + 0x120);
  if (*(uint *)(param_1 + 0x50) <= param_2) {
    param_2 = 0;
  }
  *(byte *)(*(long *)(param_1 + 0x58) + (long)(int)param_2) =
       *(byte *)(*(long *)(param_1 + 0x58) + (long)(int)param_2) | 1;
  return;
}

