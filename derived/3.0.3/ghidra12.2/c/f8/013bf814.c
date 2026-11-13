
void FUN_013bf814(long param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  float *pfVar12;
  long *plVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  int iVar17;
  int iVar18;
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
  uint local_8c;
  uint uStack_88;
  undefined4 local_84;
  undefined8 local_80;
  float local_78;
  
  *(int *)(param_1 + 0x56c) = *(int *)(param_1 + 0x56c) + -1;
  uVar11 = FUN_013bcd70(param_1,(undefined8 *)(param_1 + 0x308),*(undefined4 *)(param_1 + 0x594));
  if ((uVar11 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x568) = 0x9600000096;
    fVar19 = (float)FUN_013bc8b0(param_1);
    *(float *)(param_1 + 0x34c) = fVar19 * 0.5;
    if (*(int *)(param_1 + 0x510) == 1) {
      return;
    }
    FUN_03ebb160(param_1 + 0x508);
    return;
  }
  if (7 < *(byte *)(param_1 + 0x558)) {
    return;
  }
  pfVar12 = (float *)FUN_0251b3b0(param_1 + 0x558,0);
  if (pfVar12 == (float *)0x0) {
    return;
  }
  fVar19 = (float)FUN_013bc8b0(param_1);
  if (*(int *)(param_1 + 0x514) < *(int *)(param_1 + 0x550)) {
    if (*(float *)(param_1 + 0x34c) <= fVar19 * 0.25) goto LAB_013bf928;
    fVar19 = *(float *)(param_1 + 0x34c) + fVar19 * -0.0625;
  }
  else {
    fVar19 = (float)FUN_013bc8b0(param_1);
  }
  *(float *)(param_1 + 0x34c) = fVar19;
LAB_013bf928:
  uVar8 = FUN_006f0400(*pfVar12 - *(float *)(param_1 + 0x308),
                       pfVar12[2] - *(float *)(param_1 + 0x310));
  puVar5 = PTR_DAT_04bb2d00;
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar8 >> 0x18) * 0x10);
  fVar19 = (float)(uVar8 & 0xffffff) * 5.9604645e-08;
  local_78 = *(float *)(param_1 + 0x310);
  uVar15 = *(undefined8 *)(param_1 + 0x308);
  lVar16 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  iVar18 = *(int *)(lVar16 + 0x2b0);
  iVar4 = *(int *)(lVar16 + 0x2b4);
  fVar27 = *(float *)(param_1 + 0x590) * (*pfVar1 + fVar19 * pfVar1[1]) +
           *(float *)(param_1 + 0x55c);
  fVar28 = *(float *)(param_1 + 0x590) * (pfVar1[2] + fVar19 * pfVar1[3]) +
           *(float *)(param_1 + 0x564);
  fVar19 = pfVar12[1] + 10.0;
  local_80._0_4_ = (float)uVar15;
  local_80._4_4_ = (float)((ulong)uVar15 >> 0x20);
  bVar6 = false;
  if (((float)local_80 == fVar27) && (bVar6 = false, !NAN(local_80._4_4_) && !NAN(fVar19))) {
    bVar6 = local_80._4_4_ == fVar19;
  }
  bVar7 = false;
  if ((bVar6) && (bVar7 = false, !NAN(local_78) && !NAN(fVar28))) {
    bVar7 = local_78 == fVar28;
  }
  if (bVar7) {
    fVar26 = (float)local_80;
    fVar25 = local_78;
    fVar19 = local_80._4_4_;
  }
  else {
    fVar22 = (float)local_80 - fVar27;
    fVar21 = local_80._4_4_ - fVar19;
    fVar20 = local_78 - fVar28;
    fVar23 = SQRT(fVar21 * fVar21 + fVar22 * fVar22 + fVar20 * fVar20);
    bVar6 = false;
    bVar7 = true;
    if (-1.1920929e-07 <= fVar23) {
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar23)) {
        bVar6 = fVar23 == 1.1920929e-07;
        bVar7 = 1.1920929e-07 <= fVar23;
      }
    }
    fVar26 = fVar27;
    fVar25 = fVar28;
    if (bVar7 && !bVar6) {
      if (*(float *)(param_1 + 0x34c) < fVar23) {
        fVar23 = *(float *)(param_1 + 0x34c) / fVar23;
        fVar22 = fVar22 * fVar23;
        fVar21 = fVar21 * fVar23;
        fVar20 = fVar20 * fVar23;
      }
      fVar26 = (float)local_80 - fVar22;
      local_80 = CONCAT44(local_80._4_4_,fVar26);
      fVar25 = local_78 - fVar20;
      fVar19 = local_80._4_4_ - fVar21;
      uVar15 = local_80;
    }
  }
  local_80 = uVar15;
  fVar20 = fVar26 - *(float *)(param_1 + 0x308);
  fVar21 = fVar25 - *(float *)(param_1 + 0x310);
  iVar9 = FUN_006f0400(-(fVar19 - *(float *)(param_1 + 0x30c)),
                       SQRT(fVar21 * fVar21 + fVar20 * fVar20));
  iVar10 = FUN_006f0400(fVar26 - *(float *)(param_1 + 0x308),fVar25 - *(float *)(param_1 + 0x310));
  local_84 = 0;
  iVar14 = (int)((float)(iVar9 - iVar18) * 0.56);
  iVar9 = 0x7fffffff;
  if (iVar14 < 1) {
    iVar9 = 0;
  }
  iVar17 = 0;
  if (iVar14 < 1) {
    iVar17 = -0x7fffffff;
  }
  iVar3 = iVar14;
  if (iVar9 <= iVar14) {
    iVar3 = iVar9;
  }
  if (iVar17 <= iVar14) {
    iVar17 = iVar3;
  }
  uVar8 = iVar17 + iVar18;
  fVar20 = fVar26 - *(float *)(param_1 + 0x55c);
  fVar21 = fVar25 - *(float *)(param_1 + 0x564);
  iVar9 = (int)((float)(iVar10 - iVar4) * 0.56);
  iVar18 = 0;
  if (iVar9 < 1) {
    iVar18 = -0x7fffffff;
  }
  iVar10 = 0x7fffffff;
  if (iVar9 < 1) {
    iVar10 = 0;
  }
  iVar14 = iVar9;
  if (iVar10 <= iVar9) {
    iVar14 = iVar10;
  }
  fVar22 = *(float *)(param_1 + 0x590);
  if (iVar18 <= iVar9) {
    iVar18 = iVar14;
  }
  uVar2 = iVar18 + iVar4;
  if (SQRT(fVar21 * fVar21 + fVar20 * fVar20) < fVar22) {
    local_8c = uVar8;
    uStack_88 = uVar2;
    if (*(float *)(param_1 + 0x58c) <
        SQRT((fVar25 - pfVar12[2]) * (fVar25 - pfVar12[2]) +
             (fVar26 - *pfVar12) * (fVar26 - *pfVar12))) {
      *(undefined8 *)(param_1 + 0x568) = 0x1e0000001e;
      fVar20 = (float)FUN_013bc8b0(param_1);
      *(float *)(param_1 + 0x34c) = fVar20 * 0.5;
      if (*(int *)(param_1 + 0x510) != 1) {
        FUN_03ebb160(param_1 + 0x508);
      }
      fVar22 = *(float *)(param_1 + 0x590);
    }
    if (SQRT((fVar25 - fVar28) * (fVar25 - fVar28) + (fVar26 - fVar27) * (fVar26 - fVar27)) <=
        fVar22 * 0.1) {
      if (*(int *)(param_1 + 0x510) != 5) {
        FUN_03ebb160(param_1 + 0x508);
      }
    }
    else {
      fVar27 = *(float *)(param_1 + 0x314);
      pfVar12 = (float *)(puVar5 + (ulong)(uVar8 >> 0x18) * 0x10);
      fVar28 = *(float *)(param_1 + 0x318);
      fVar21 = (float)(uVar8 & 0xffffff) * 5.9604645e-08;
      fVar20 = *(float *)(param_1 + 0x31c);
      fVar23 = *pfVar12 + fVar21 * pfVar12[1];
      pfVar1 = (float *)(puVar5 + (ulong)(uVar2 >> 0x18) * 0x10);
      fVar21 = pfVar12[2] + fVar21 * pfVar12[3];
      fVar22 = (float)(uVar2 & 0xffffff) * 5.9604645e-08;
      fVar24 = *pfVar1 + fVar22 * pfVar1[1];
      plVar13 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
      fVar22 = pfVar1[2] + fVar22 * pfVar1[3];
      local_78 = fVar25 - (fVar28 * (fVar24 * 0.0 + fVar22 * fVar23) +
                           fVar27 * (fVar23 * fVar22 * 0.0 - fVar24) + fVar20 * fVar21 * fVar22 +
                          0.0);
      local_80 = CONCAT44(fVar19 - (((fVar28 * fVar21 + fVar27 * fVar21 * 0.0) - fVar20 * fVar23) +
                                   0.0),
                          fVar26 - (fVar28 * (fVar23 * fVar24 - fVar22 * 0.0) +
                                    fVar27 * (fVar22 + fVar24 * 0.0 * fVar23) +
                                    fVar20 * fVar21 * fVar24 + 0.0));
      (**(code **)(*plVar13 + 0x100))(plVar13,&local_80);
      plVar13 = *(long **)(*(long *)(param_1 + 0x48) + 0x68);
      (**(code **)(*plVar13 + 0x150))(plVar13,&local_8c);
    }
  }
  return;
}

