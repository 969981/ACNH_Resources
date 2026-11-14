
undefined8 FUN_01515300(float param_1,float *param_2,uint *param_3,undefined8 param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  uint *puVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  short *psVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_e0;
  undefined *puStack_d8;
  int local_d0;
  int iStack_cc;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  float local_b4 [2];
  float local_ac;
  undefined *local_a8;
  undefined *puStack_a0;
  int local_98;
  int iStack_94;
  undefined *local_90;
  int local_88;
  int iStack_84;
  
  puVar1 = PTR_DAT_04bbc1a0;
  puVar2 = PTR_DAT_04bb2010;
  fVar22 = *param_2 + -2.5;
  fVar19 = *param_2 + 2.5;
  fVar20 = param_2[2] + -2.5;
  fVar17 = param_2[2] + 2.5;
  pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x15) & 0x7f0));
  fVar23 = (float)(*param_3 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar21 = *pfVar3 + fVar23 * pfVar3[1];
  fVar23 = pfVar3[2] + fVar23 * pfVar3[3];
  iVar6 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iVar15 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar7 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iVar14 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  local_a8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_a0 = PTR_DAT_04bb2010 + 0x10;
  iVar9 = iVar6;
  if (iVar15 <= iVar6) {
    iVar9 = iVar15;
  }
  if (iVar6 <= iVar15) {
    iVar6 = iVar15;
  }
  iVar15 = iVar7;
  if (iVar7 <= iVar14) {
    iVar15 = iVar14;
  }
  fVar17 = fVar21 * 0.0;
  fVar23 = fVar23 + fVar23;
  fVar19 = fVar21 * (fVar21 + fVar21);
  fVar20 = fVar23 * fVar17;
  fVar23 = fVar21 * fVar23;
  if (iVar14 <= iVar7) {
    iVar7 = iVar14;
  }
  fVar22 = fVar17 * (fVar17 + fVar17);
  fVar18 = ((float)iVar9 * 5.0 + (float)iVar6 * 5.0 + 5.0) * 0.5 +
           (fVar21 * (fVar17 + fVar17) - fVar20) * 0.0 + ((1.0 - fVar19) - fVar22) * 0.0 +
           param_1 * (fVar23 + fVar22);
  fVar17 = ((float)iVar7 * 5.0 + (float)iVar15 * 5.0 + 5.0) * 0.5 +
           (fVar20 + (fVar21 + fVar21) * fVar17) * 0.0 + (fVar22 - fVar23) * 0.0 +
           param_1 * ((1.0 - fVar22) - fVar19);
  fVar23 = fVar18 + -2.5;
  fVar18 = fVar18 + 2.5;
  fVar19 = fVar17 + -2.5;
  fVar17 = fVar17 + 2.5;
  iVar6 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  iVar15 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar7 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar9 = iVar6;
  if (iVar15 <= iVar6) {
    iVar9 = iVar15;
  }
  if (iVar6 <= iVar15) {
    iVar6 = iVar15;
  }
  iVar14 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar15 = iVar7;
  if (iVar14 <= iVar7) {
    iVar15 = iVar14;
  }
  if (iVar7 <= iVar14) {
    iVar7 = iVar14;
  }
  local_98 = iVar9;
  iStack_94 = iVar15;
  local_90 = puStack_a0;
  local_88 = iVar6;
  iStack_84 = iVar7;
  FUN_01317b90(param_2,0);
  puVar8 = PTR_DAT_04bb27c8;
  lVar12 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar12 == 0) || (*(long *)(lVar12 + 0xa8) == 0)) || (*(char *)(lVar12 + 0x11c8) != '\0')) {
    fVar17 = -500.0;
  }
  else {
    fVar17 = (float)FUN_0093a950(lVar12 + 0x28,param_2,0);
  }
  if (iVar7 + 1 != iVar15) {
    puVar1 = puVar1 + 0x10;
    puVar2 = puVar2 + 0x10;
    psVar13 = (short *)PTR_DAT_04bb6298;
    iVar14 = iVar9;
    do {
      local_b4[0] = (float)iVar14 * 5.0 + 2.5;
      local_ac = (float)iVar15 * 5.0 + 2.5;
      sVar5 = *psVar13;
      if (sVar5 == -1) {
        uVar16 = 0;
        lVar12 = *(long *)puVar8;
        if (lVar12 != 0) goto LAB_0151568c;
LAB_015156a0:
        fVar19 = -500.0;
      }
      else {
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
        puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar4 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar16 = *puVar4 & 1;
        lVar12 = *(long *)puVar8;
        if (lVar12 == 0) goto LAB_015156a0;
LAB_0151568c:
        if ((*(long *)(lVar12 + 0xa8) == 0) || (*(char *)(lVar12 + 0x11c8) != '\0'))
        goto LAB_015156a0;
        fVar19 = (float)FUN_0093a950(lVar12 + 0x28,local_b4,0);
        psVar13 = (short *)PTR_DAT_04bb6298;
      }
      fVar19 = fVar17 - fVar19;
      fVar23 = -fVar19;
      if (0.0 <= fVar19) {
        fVar23 = fVar19;
      }
      if (uVar16 == 0) {
        if (7.0 < fVar23) goto LAB_015157b0;
        local_c0 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
        local_d0 = local_c0;
        if (iVar14 <= local_c0) {
          local_d0 = iVar14;
        }
        if (local_c0 <= iVar14) {
          local_c0 = iVar14;
        }
        iStack_bc = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
        iStack_cc = iStack_bc;
        if (iVar15 <= iStack_bc) {
          iStack_cc = iVar15;
        }
        if (iStack_bc <= iVar15) {
          iStack_bc = iVar15;
        }
        local_e0 = puVar1;
        puStack_d8 = puVar2;
        local_c8 = puVar2;
        if (((*(long *)puVar8 != 0) && (lVar12 = *(long *)(*(long *)puVar8 + 0xa8), lVar12 != 0)) &&
           (uVar10 = FUN_009721a0(lVar12,&local_e0,0), psVar13 = (short *)PTR_DAT_04bb6298,
           (uVar10 & 1) != 0)) goto LAB_015157b0;
      }
      else if (0.1 < fVar23) goto LAB_015157b0;
      if (iVar14 < iVar6) {
        iVar14 = iVar14 + 1;
      }
      else {
        iVar15 = iVar15 + 1;
        iVar14 = iVar9;
      }
    } while ((iVar9 != iVar14) || (iVar7 + 1 != iVar15));
  }
  iVar9 = FUN_01515c00(&local_a8,0);
  if ((iVar9 == 0) && (uVar10 = FUN_015158d0(&local_a8,param_5 & 1), (uVar10 & 1) != 0)) {
    uVar11 = 0;
  }
  else {
LAB_015157b0:
    uVar11 = 1;
  }
  return uVar11;
}

