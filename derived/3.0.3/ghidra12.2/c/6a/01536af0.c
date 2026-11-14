
void FUN_01536af0(long param_1,float *param_2,int param_3)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
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
  undefined *local_68;
  int local_60;
  int local_5c;
  undefined **local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  local_50 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar10 + 0x338));
      iVar7 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar12 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_58 = &PTR_LAB_048fe480;
  if (((DAT_05210a10 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_05210a10), iVar7 != 0)) {
    DAT_05210a08 = 14.142136;
    __cxa_guard_release(&DAT_05210a10);
  }
  uVar11 = (ulong)((float)param_3 * 45.0 * 11930465.0);
  uVar9 = (uint)uVar11;
  fVar15 = (float)(uVar9 & 0xffffff) * 5.9604645e-08;
  iVar7 = (int)((float)(int)(*param_2 + -2.5) / 5.0) - (uint)(*param_2 + -2.5 < 0.0);
  iVar2 = (int)((float)(int)(param_2[2] + -2.5) / 5.0) - (uint)(param_2[2] + -2.5 < 0.0);
  uVar11 = uVar11 >> 0x18 & 0xff;
  uVar1 = (ulong)(uVar9 + 0xe0000000 >> 0x19);
  fVar14 = DAT_05210a08 *
           ((float)(&DAT_04199798)[uVar11 * 4] + fVar15 * (float)(&DAT_0419979c)[uVar11 * 4]);
  fVar16 = DAT_05210a08 *
           ((float)(&DAT_041997a0)[uVar11 * 4] + fVar15 * (float)(&DAT_041997a4)[uVar11 * 4]);
  fVar15 = ((float)iVar7 * 5.0 + (float)(iVar7 + 1) * 5.0 + 5.0) * 0.5;
  fVar17 = ((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5;
  fVar22 = fVar14 + fVar15 + -2.5;
  fVar20 = fVar14 * 1.5 + fVar15 + -2.5;
  fVar15 = fVar14 + fVar14 + fVar15 + -2.5;
  fVar21 = fVar16 + fVar17 + -2.5;
  fVar19 = fVar16 * 1.5 + fVar17 + -2.5;
  fVar18 = fVar16 + fVar16 + fVar17 + -2.5;
  fVar17 = (float)(uVar9 >> 1 & 0xffffff) * 5.9604645e-08;
  iVar7 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
  iVar2 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar13 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  *(int *)(param_1 + 0x70) = iVar7;
  *(int *)(param_1 + 0x74) = iVar2;
  *(int *)(param_1 + 0x194) = iVar13;
  iVar3 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  iVar4 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar5 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  *(int *)(param_1 + 0x100) = iVar3;
  *(int *)(param_1 + 0x104) = iVar4;
  *(int *)(param_1 + 400) = iVar5;
  *(int *)(param_1 + 0x80) = iVar7 + 1;
  *(int *)(param_1 + 0x84) = iVar2 + 1;
  *(int *)(param_1 + 0x1a4) = iVar13 + 1;
  *(int *)(param_1 + 0x110) = iVar3 + 1;
  *(int *)(param_1 + 0x114) = iVar4 + 1;
  *(int *)(param_1 + 0x1a0) = iVar5 + 1;
  fVar15 = (float)(&DAT_04199798)[uVar1 * 4] + fVar17 * (float)(&DAT_0419979c)[uVar1 * 4];
  fVar17 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar17 * (float)(&DAT_041997a4)[uVar1 * 4];
  fVar18 = fVar15 * 0.0;
  fVar17 = fVar17 + fVar17;
  fVar23 = fVar15 * (fVar15 + fVar15);
  fVar24 = fVar18 * (fVar18 + fVar18);
  fVar19 = fVar18 * fVar17;
  fVar17 = fVar15 * fVar17;
  fVar22 = (1.0 - fVar23) - fVar24;
  fVar21 = fVar24 - fVar17;
  fVar17 = fVar24 + fVar17;
  fVar20 = ((float)iVar7 * 5.0 + (float)(iVar7 + 1) * 5.0 + 5.0) * 0.5;
  fVar23 = (1.0 - fVar24) - fVar23;
  fVar24 = ((fVar15 + fVar15) * fVar18 + fVar19) * 0.0;
  fVar19 = (fVar15 * (fVar18 + fVar18) - fVar19) * 0.0;
  fVar18 = ((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5;
  fVar15 = fVar19 + fVar22 * 0.0 + fVar17 * 5.0 + fVar20;
  fVar20 = fVar19 + fVar22 * 5.0 + fVar17 * 0.0 + fVar20;
  fVar22 = fVar24 + fVar21 * 0.0 + fVar23 * 5.0 + fVar18;
  fVar18 = fVar24 + fVar21 * 5.0 + fVar23 * 0.0 + fVar18;
  fVar17 = fVar15 + -2.5;
  fVar21 = fVar20 + -2.5;
  fVar24 = fVar22 + -2.5;
  fVar19 = fVar18 + -2.5;
  fVar23 = fVar14 * 0.5 + fVar15 + -2.5;
  fVar15 = fVar14 * 0.5 + fVar20 + -2.5;
  fVar20 = fVar16 * 0.5 + fVar22 + -2.5;
  fVar14 = fVar16 * 0.5 + fVar18 + -2.5;
  iVar7 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar2 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar13 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  *(int *)(param_1 + 0xa0) = iVar7;
  *(int *)(param_1 + 0xa4) = iVar13;
  iVar3 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  *(int *)(param_1 + 0xd0) = iVar2;
  *(int *)(param_1 + 0xd4) = iVar3;
  *(int *)(param_1 + 0xb0) = iVar7 + 1;
  *(int *)(param_1 + 0xb4) = iVar13 + 1;
  *(int *)(param_1 + 0xe0) = iVar2 + 1;
  *(int *)(param_1 + 0xe4) = iVar3 + 1;
  iVar7 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
  *(int *)(param_1 + 0x130) = iVar7;
  *(int *)(param_1 + 0x140) = iVar7 + 1;
  iVar7 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
  *(int *)(param_1 + 0x134) = iVar7;
  *(int *)(param_1 + 0x144) = iVar7 + 1;
  iVar7 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  *(int *)(param_1 + 0x160) = iVar7;
  iVar2 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  *(int *)(param_1 + 0x164) = iVar2;
  *(int *)(param_1 + 0x170) = iVar7 + 1;
  puVar6 = PTR_DAT_04bb3238;
  *(int *)(param_1 + 0x174) = iVar2 + 1;
  iVar13 = *(int *)puVar6;
  iVar2 = *(int *)(param_1 + 0x70);
  local_5c = *(int *)(param_1 + 0x74);
  local_68 = PTR_DAT_04bb2010 + 0x10;
  iVar7 = *(int *)(param_1 + 0x84) + 1;
  local_60 = iVar2;
  if (iVar7 != local_5c) {
    do {
      piVar8 = (int *)FUN_014fbd50(&local_58,0,&local_68);
      iVar13 = *piVar8;
      if (iVar13 == 0) {
        return;
      }
      if (local_60 < *(int *)(param_1 + 0x80)) {
        local_60 = local_60 + 1;
      }
      else {
        local_5c = local_5c + 1;
        local_60 = *(int *)(param_1 + 0x70);
      }
    } while (iVar2 != local_60 || iVar7 != local_5c);
  }
  iVar7 = FUN_015371f0(param_1 + 0x60);
  if (iVar13 == iVar7) {
    *(undefined1 *)(param_1 + 0x88) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x90);
  if (iVar13 == iVar7) {
    *(undefined1 *)(param_1 + 0xb8) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0xc0);
  if (iVar13 == iVar7) {
    *(undefined1 *)(param_1 + 0xe8) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0xf0);
  if (iVar13 == iVar7) {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x120);
  if (iVar13 == iVar7) {
    *(undefined1 *)(param_1 + 0x148) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x150);
  if (iVar13 == iVar7) {
    *(undefined1 *)(param_1 + 0x178) = 1;
  }
  iVar7 = FUN_015371f0(param_1 + 0x180);
  if (iVar13 == iVar7) {
    *(undefined1 *)(param_1 + 0x1a8) = 1;
  }
  return;
}

