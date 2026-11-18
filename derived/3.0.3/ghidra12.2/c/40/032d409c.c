
void FUN_032d409c(long param_1,undefined8 param_2,undefined8 param_3)

{
  float *pfVar1;
  int iVar2;
  undefined1 auVar3 [12];
  bool bVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
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
  float local_50;
  float fStack_4c;
  float local_48;
  float local_44;
  
  if (*(char *)(param_1 + 0xe0) == '\0') {
    lVar7 = *(long *)(param_1 + 0x28);
    param_1 = FUN_0037d078(&local_50,lVar7 + -8);
    fVar14 = (float)((ulong)*(undefined8 *)(lVar7 + 0x70) >> 0x20);
    auVar3 = *(undefined1 (*) [12])(lVar7 + 0x68);
    fVar16 = auVar3._0_4_;
    fVar9 = auVar3._4_4_;
    fVar15 = (float)((ulong)*(undefined8 *)(lVar7 + 0x80) >> 0x20);
    auVar3 = *(undefined1 (*) [12])(lVar7 + 0x78);
    fVar8 = auVar3._0_4_;
    fVar10 = auVar3._4_4_;
    fVar11 = SUB124(*(undefined1 (*) [12])(lVar7 + 0x68),8);
    fVar12 = SUB124(*(undefined1 (*) [12])(lVar7 + 0x78),8);
    fVar17 = fVar14 + fVar16 * local_50 + fVar9 * local_44 + fVar11 * 0.0;
    fVar13 = fVar15 + fVar8 * local_50 + fVar10 * local_44 + fVar12 * 0.0;
    fVar14 = fVar14 + fVar16 * local_48 + fVar9 * fStack_4c + fVar11 * 0.0;
    fVar15 = fVar15 + fVar8 * local_48 + fVar10 * fStack_4c + fVar12 * 0.0;
    fVar16 = fVar14;
    if (fVar14 <= fVar17) {
      fVar16 = fVar17;
      fVar17 = fVar14;
    }
    fVar8 = fVar15;
    if (fVar15 <= fVar13) {
      fVar8 = fVar13;
      fVar13 = fVar15;
    }
  }
  else {
    fVar17 = *(float *)(param_1 + 0xf0);
    fVar16 = *(float *)(param_1 + 0xf8);
    fVar8 = *(float *)(param_1 + 0xfc);
    fVar13 = *(float *)(param_1 + 0xf4);
  }
  lVar7 = DAT_0572ecb8;
  if ((fVar16 - fVar17) * (fVar8 - fVar13) != 0.0) {
    local_50 = fVar17;
    fStack_4c = fVar13;
    local_48 = fVar16;
    local_44 = fVar8;
    if (*(int *)(DAT_0572ecb8 + 0x60) != 0) {
      pfVar1 = (float *)(DAT_0572ecb8 + (long)(*(int *)(DAT_0572ecb8 + 0x60) + -1) * 0x10);
      local_50 = *pfVar1;
      if (*pfVar1 <= fVar17) {
        local_50 = fVar17;
      }
      fStack_4c = pfVar1[1];
      if (pfVar1[1] <= fVar13) {
        fStack_4c = fVar13;
      }
      local_48 = pfVar1[2];
      if (fVar16 <= pfVar1[2]) {
        local_48 = fVar16;
      }
      local_44 = pfVar1[3];
      if (fVar8 <= pfVar1[3]) {
        local_44 = fVar8;
      }
      bVar4 = false;
      bVar5 = false;
      bVar6 = false;
      if (local_50 <= local_48) {
        bVar4 = false;
        bVar5 = false;
        bVar6 = true;
        if (!NAN(fStack_4c) && !NAN(local_44)) {
          bVar4 = fStack_4c < local_44;
          bVar5 = fStack_4c == local_44;
          bVar6 = false;
        }
      }
      if (!bVar5 && bVar4 == bVar6) {
        local_50 = 0.0;
        fStack_4c = 0.0;
        local_48 = 0.0;
        local_44 = 0.0;
      }
    }
    fVar8 = local_44;
    fVar13 = local_48;
    fVar17 = fStack_4c;
    fVar16 = local_50;
    FUN_032d44b0(param_1,param_3,1,&local_50);
    iVar2 = *(int *)(lVar7 + 0x60);
    if (iVar2 < 6) {
      pfVar1 = (float *)(lVar7 + (long)iVar2 * 0x10);
      *(int *)(lVar7 + 0x60) = iVar2 + 1;
      *pfVar1 = fVar16;
      pfVar1[1] = fVar17;
      pfVar1[2] = fVar13;
      pfVar1[3] = fVar8;
      return;
    }
    return;
  }
  if (*(int *)(DAT_0572ecb8 + 0x60) != 0) {
    pfVar1 = (float *)(DAT_0572ecb8 + (long)(*(int *)(DAT_0572ecb8 + 0x60) + -1) * 0x10);
    local_50 = *pfVar1;
    if (local_50 <= 0.0) {
      local_50 = 0.0;
    }
    fStack_4c = pfVar1[1];
    if (fStack_4c <= 0.0) {
      fStack_4c = 0.0;
    }
    local_48 = (float)NEON_fminnm(pfVar1[2],0);
    local_44 = (float)NEON_fminnm(pfVar1[3],0);
    bVar4 = false;
    bVar5 = false;
    bVar6 = false;
    if (local_50 <= local_48) {
      bVar4 = false;
      bVar5 = false;
      bVar6 = true;
      if (!NAN(fStack_4c) && !NAN(local_44)) {
        bVar4 = fStack_4c < local_44;
        bVar5 = fStack_4c == local_44;
        bVar6 = false;
      }
    }
    if (bVar5 || bVar4 != bVar6) goto LAB_032d42bc;
  }
  local_44 = 0.0;
  local_48 = 0.0;
  fStack_4c = 0.0;
  local_50 = 0.0;
LAB_032d42bc:
  fVar8 = local_44;
  fVar13 = local_48;
  fVar17 = fStack_4c;
  fVar16 = local_50;
  FUN_032d44b0(param_1,param_3,1,&local_50);
  iVar2 = *(int *)(lVar7 + 0x60);
  if (iVar2 < 6) {
    pfVar1 = (float *)(lVar7 + (long)iVar2 * 0x10);
    *(int *)(lVar7 + 0x60) = iVar2 + 1;
    *pfVar1 = fVar16;
    pfVar1[1] = fVar17;
    pfVar1[2] = fVar13;
    pfVar1[3] = fVar8;
  }
  return;
}

