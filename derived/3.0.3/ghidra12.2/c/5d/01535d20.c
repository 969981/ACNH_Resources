
void FUN_01535d20(long param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
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
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined *local_78;
  int local_70;
  int local_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  
  local_60 = 0;
  local_68 = PTR_DAT_04bbfe68 + 0x10;
  if (DAT_05aed670 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))
                          (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar7 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar11 + 7);
  local_58 = FUN_017baf44();
  uVar10 = (ulong)((float)param_3 * 90.0 * 11930465.0);
  fVar14 = (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
  iVar7 = (int)((float)(int)(*param_2 + -2.5) / 5.0) - (uint)(*param_2 + -2.5 < 0.0);
  iVar13 = (int)((float)(int)(param_2[2] + -2.5) / 5.0) - (uint)(param_2[2] + -2.5 < 0.0);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar10 >> 0x18 & 0xff) * 0x10);
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + (uVar10 >> 0x19 & 0x7f) * 0x10);
  local_68 = PTR_DAT_04bb3140 + 0x10;
  fVar15 = (*pfVar1 + fVar14 * pfVar1[1]) * 10.0;
  fVar14 = (pfVar1[2] + fVar14 * pfVar1[3]) * 10.0;
  fVar16 = ((float)iVar7 * 5.0 + (float)(iVar7 + 1) * 5.0 + 5.0) * 0.5;
  fVar17 = ((float)iVar13 * 5.0 + (float)(iVar13 + 1) * 5.0 + 5.0) * 0.5;
  fVar22 = fVar15 + fVar16 + -2.5;
  fVar20 = fVar15 * 1.5 + fVar16 + -2.5;
  fVar16 = fVar15 + fVar15 + fVar16 + -2.5;
  fVar21 = fVar14 + fVar17 + -2.5;
  fVar18 = fVar14 * 1.5 + fVar17 + -2.5;
  fVar17 = fVar14 + fVar14 + fVar17 + -2.5;
  fVar19 = (float)((uint)uVar10 >> 1 & 0xffffff) * 5.9604645e-08;
  iVar7 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iVar13 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar3 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iVar12 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar4 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  *(int *)(param_1 + 0x160) = iVar3;
  *(int *)(param_1 + 0x164) = iVar12;
  *(int *)(param_1 + 0x70) = iVar7;
  *(int *)(param_1 + 0x74) = iVar13;
  *(int *)(param_1 + 0x250) = iVar4;
  *(int *)(param_1 + 0x80) = iVar7 + 1;
  *(int *)(param_1 + 0x84) = iVar13 + 1;
  *(int *)(param_1 + 0x170) = iVar3 + 1;
  *(int *)(param_1 + 0x174) = iVar12 + 1;
  *(int *)(param_1 + 0x260) = iVar4 + 1;
  iVar3 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  *(int *)(param_1 + 0x254) = iVar3;
  *(int *)(param_1 + 0x264) = iVar3 + 1;
  local_58 = local_58 & 1;
  fVar27 = *pfVar2 + fVar19 * pfVar2[1];
  fVar17 = pfVar2[2] + fVar19 * pfVar2[3];
  fVar18 = fVar15 * 0.5;
  fVar19 = fVar14 * 0.5;
  fVar25 = fVar27 * 0.0;
  fVar17 = fVar17 + fVar17;
  fVar23 = fVar27 * (fVar27 + fVar27);
  fVar28 = fVar25 * fVar17;
  fVar17 = fVar27 * fVar17;
  fVar20 = ((float)iVar7 * 5.0 + (float)(iVar7 + 1) * 5.0 + 5.0) * 0.5;
  fVar16 = ((float)iVar13 * 5.0 + (float)(iVar13 + 1) * 5.0 + 5.0) * 0.5;
  fVar26 = fVar25 * (fVar25 + fVar25);
  fVar21 = (1.0 - fVar23) - fVar26;
  fVar22 = fVar26 + fVar17;
  fVar17 = fVar26 - fVar17;
  fVar24 = ((fVar27 + fVar27) * fVar25 + fVar28) * 0.0;
  fVar25 = (fVar27 * (fVar25 + fVar25) - fVar28) * 0.0;
  fVar23 = (1.0 - fVar26) - fVar23;
  fVar26 = fVar25 + fVar21 * 5.0 + fVar22 * 0.0;
  fVar27 = fVar24 + fVar17 * 5.0 + fVar23 * 0.0;
  fVar29 = fVar26 + fVar20;
  fVar30 = fVar27 + fVar16;
  fVar26 = fVar26 + fVar26 + fVar20;
  fVar27 = fVar27 + fVar27 + fVar16;
  fVar31 = fVar19 + fVar30 + -2.5;
  fVar32 = fVar26 + -2.5;
  fVar26 = fVar18 + fVar26 + -2.5;
  iVar7 = (int)((float)(int)(fVar29 + -2.5) / 5.0) - (uint)(fVar29 + -2.5 < 0.0);
  fVar33 = fVar27 + -2.5;
  fVar34 = fVar18 + fVar29 + -2.5;
  fVar28 = fVar19 + fVar27 + -2.5;
  iVar13 = (int)((float)(int)(fVar30 + -2.5) / 5.0) - (uint)(fVar30 + -2.5 < 0.0);
  *(int *)(param_1 + 0xa0) = iVar7;
  *(int *)(param_1 + 0xa4) = iVar13;
  *(int *)(param_1 + 0xb0) = iVar7 + 1;
  *(int *)(param_1 + 0xb4) = iVar13 + 1;
  iVar7 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
  iVar13 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
  fVar27 = fVar15 + fVar29 + -2.5;
  *(int *)(param_1 + 0xd0) = iVar7;
  *(int *)(param_1 + 0xd4) = iVar13;
  iVar3 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
  *(int *)(param_1 + 400) = iVar3;
  *(int *)(param_1 + 0xe0) = iVar7 + 1;
  *(int *)(param_1 + 0xe4) = iVar13 + 1;
  *(int *)(param_1 + 0x1a0) = iVar3 + 1;
  iVar7 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
  *(int *)(param_1 + 0x194) = iVar7;
  *(int *)(param_1 + 0x1a4) = iVar7 + 1;
  fVar29 = fVar14 + fVar30 + -2.5;
  iVar7 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
  *(int *)(param_1 + 0x1c0) = iVar7;
  iVar13 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
  *(int *)(param_1 + 0x1d0) = iVar7 + 1;
  *(int *)(param_1 + 0x1c4) = iVar13;
  *(int *)(param_1 + 0x1d4) = iVar13 + 1;
  fVar22 = fVar25 + fVar21 * -5.0 + fVar22 * 0.0;
  fVar23 = fVar24 + fVar17 * -5.0 + fVar23 * 0.0;
  iVar7 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  *(int *)(param_1 + 0x280) = iVar7;
  fVar21 = fVar22 + fVar20;
  fVar17 = fVar23 + fVar16;
  fVar20 = fVar22 + fVar22 + fVar20;
  fVar16 = fVar23 + fVar23 + fVar16;
  fVar22 = fVar20 + -2.5;
  fVar23 = fVar16 + -2.5;
  fVar15 = fVar15 + fVar21 + -2.5;
  fVar16 = fVar19 + fVar16 + -2.5;
  iVar13 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
  *(int *)(param_1 + 0x284) = iVar13;
  *(int *)(param_1 + 0x290) = iVar7 + 1;
  *(int *)(param_1 + 0x294) = iVar13 + 1;
  iVar7 = (int)((float)(int)(fVar21 + -2.5) / 5.0) - (uint)(fVar21 + -2.5 < 0.0);
  *(int *)(param_1 + 0x100) = iVar7;
  fVar21 = fVar18 + fVar21 + -2.5;
  fVar18 = fVar18 + fVar20 + -2.5;
  iVar13 = (int)((float)(int)(fVar17 + -2.5) / 5.0) - (uint)(fVar17 + -2.5 < 0.0);
  *(int *)(param_1 + 0x104) = iVar13;
  *(int *)(param_1 + 0x110) = iVar7 + 1;
  *(int *)(param_1 + 0x114) = iVar13 + 1;
  fVar19 = fVar19 + fVar17 + -2.5;
  fVar14 = fVar14 + fVar17 + -2.5;
  iVar7 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  *(int *)(param_1 + 0x130) = iVar7;
  iVar13 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  *(int *)(param_1 + 0x134) = iVar13;
  *(int *)(param_1 + 0x140) = iVar7 + 1;
  *(int *)(param_1 + 0x144) = iVar13 + 1;
  iVar7 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  *(int *)(param_1 + 0x1f0) = iVar7;
  iVar13 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  *(int *)(param_1 + 500) = iVar13;
  *(int *)(param_1 + 0x200) = iVar7 + 1;
  *(int *)(param_1 + 0x204) = iVar13 + 1;
  iVar7 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  *(int *)(param_1 + 0x220) = iVar7;
  iVar13 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  *(int *)(param_1 + 0x224) = iVar13;
  *(int *)(param_1 + 0x230) = iVar7 + 1;
  *(int *)(param_1 + 0x234) = iVar13 + 1;
  iVar7 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  *(int *)(param_1 + 0x2b0) = iVar7;
  iVar13 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  *(int *)(param_1 + 0x2b4) = iVar13;
  *(int *)(param_1 + 0x2c0) = iVar7 + 1;
  puVar6 = PTR_DAT_04bb3238;
  *(int *)(param_1 + 0x2c4) = iVar13 + 1;
  iVar13 = *(int *)puVar6;
  iVar3 = *(int *)(param_1 + 0x70);
  local_6c = *(int *)(param_1 + 0x74);
  local_78 = PTR_DAT_04bb2010 + 0x10;
  iVar7 = *(int *)(param_1 + 0x84) + 1;
  local_70 = iVar3;
  if (iVar7 == local_6c) {
    if (iVar13 == 0) {
      return;
    }
  }
  else {
    bVar5 = true;
    iVar12 = iVar13;
    do {
      piVar8 = (int *)FUN_014fbd50(&local_68,0,&local_78);
      iVar4 = *piVar8;
      iVar13 = iVar4;
      if (iVar4 == 0) {
        iVar13 = iVar12;
      }
      if (local_70 < *(int *)(param_1 + 0x80)) {
        local_70 = local_70 + 1;
      }
      else {
        local_6c = local_6c + 1;
        local_70 = *(int *)(param_1 + 0x70);
      }
      bVar5 = (bool)(bVar5 & iVar4 != 0);
      iVar12 = iVar13;
    } while (iVar3 != local_70 || iVar7 != local_6c);
    if (iVar13 == 0) {
      return;
    }
    if (!bVar5) {
      iVar7 = FUN_015371f0(param_1 + 0x90);
      if ((iVar7 != 0) && (iVar13 == iVar7)) {
        *(undefined1 *)(param_1 + 0xb8) = 1;
      }
      iVar7 = FUN_015371f0(param_1 + 0xf0);
      if (iVar7 == 0) {
        return;
      }
      if (iVar13 != iVar7) {
        return;
      }
      puVar9 = (undefined1 *)(param_1 + 0x118);
      goto LAB_01536748;
    }
  }
  iVar7 = FUN_015371f0(param_1 + 0x60);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x90);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0xc0);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0xf0);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x120);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x150);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x178) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x180);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x1b0);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x1d8) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x1e0);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x208) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x210);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x238) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x240);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x268) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x270);
  if ((iVar7 != 0) && (iVar13 == iVar7)) {
    *(undefined1 *)(param_1 + 0x298) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x2a0);
  if (iVar7 == 0) {
    return;
  }
  if (iVar13 != iVar7) {
    return;
  }
  puVar9 = (undefined1 *)(param_1 + 0x2c8);
LAB_01536748:
  *puVar9 = 1;
  return;
}

