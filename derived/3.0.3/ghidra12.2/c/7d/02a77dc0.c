
/* WARNING: Removing unreachable block (ram,0x02a781c8) */
/* WARNING: Removing unreachable block (ram,0x02a781d8) */
/* WARNING: Removing unreachable block (ram,0x02a781e4) */

void FUN_02a77dc0(long param_1)

{
  int iVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  int iVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined *local_1b0;
  int local_1a8;
  int iStack_1a4;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined *puStack_170;
  undefined1 *local_168;
  undefined4 local_160;
  undefined1 local_15c [127];
  undefined1 local_dd;
  uint local_d8;
  char local_d4;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined4 local_8c;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar10 = PTR_DAT_04bbc1a0;
  puVar8 = PTR_DAT_04bb2010;
  if (*(char *)(param_1 + 800) != '\0') {
    return;
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  if (lVar18 == 0) {
    return;
  }
  local_dd = 0;
  local_15c[0] = 0;
  local_d8 = 0;
  local_168 = local_15c;
  local_160 = 0x80;
  local_178 = PTR_DAT_04bb5d38 + 0x10;
  local_d4 = '\0';
  puStack_170 = PTR_DAT_04bb2d88 + 0x10;
  local_d0 = PTR_DAT_04bb2010 + 0x10;
  local_c8 = 0;
  local_a8 = 0;
  local_90 = 0;
  local_98 = 0;
  puStack_b8 = PTR_DAT_04bbc1a0 + 0x10;
  local_c0 = 0;
  puStack_80 = *(undefined **)(param_1 + 0x2d0);
  local_8c = 0;
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_78 = CONCAT44((int)(local_78 >> 0x20),*(undefined4 *)(lVar18 + 0x2b4)) & 0xffffff00ffffffff;
  local_b0 = local_d0;
  local_a0 = local_d0;
  FUN_009893c0(&local_178,&local_88);
  puVar9 = PTR_DAT_04bb27c8;
  if (local_d4 == '\0') {
    return;
  }
  iVar4 = (int)local_98 - (int)local_a8;
  iVar1 = iVar4 + 2;
  iVar17 = local_98._4_4_ - local_a8._4_4_;
  if (-1 < iVar4 + 1) {
    iVar1 = iVar4 + 1;
  }
  iVar15 = (int)((float)(int)*(float *)(lVar18 + 0x278) / 5.0) -
           (uint)(*(float *)(lVar18 + 0x278) < 0.0);
  iVar4 = iVar17 + 2;
  iVar14 = (int)((float)(int)*(float *)(lVar18 + 0x280) / 5.0) -
           (uint)(*(float *)(lVar18 + 0x280) < 0.0);
  if (-1 < iVar17 + 1) {
    iVar4 = iVar17 + 1;
  }
  if (((int)local_c8 != 0) || (local_c8._4_4_ != 0)) {
    iVar15 = iVar15 - (iVar1 >> 1);
    iVar14 = iVar14 - (iVar4 >> 1);
  }
  puStack_198 = puVar8 + 0x10;
  local_1a0 = puVar10 + 0x10;
  local_190 = CONCAT44(local_a8._4_4_ + iVar14,(int)local_a8 + iVar15);
  local_180 = CONCAT44(local_98._4_4_ + iVar14,(int)local_98 + iVar15);
  lVar12 = *(long *)PTR_DAT_04bb27c8;
  lVar13 = *(long *)(lVar12 + 0xa8);
  if (lVar13 == *(long *)(lVar12 + 0x90)) {
    uVar16 = 1;
  }
  else if (lVar13 == *(long *)(lVar12 + 0x98)) {
    uVar16 = 2;
  }
  else {
    uVar16 = 3;
    if (lVar13 != *(long *)(lVar12 + 0xa0)) {
      uVar16 = 0;
    }
  }
  local_188 = puStack_198;
  if (local_d8 == 0) {
    if (*(char *)(param_1 + 800) != '\0') goto LAB_02a780e4;
    local_88 = puVar10 + 0x10;
    puStack_80 = puVar8 + 0x10;
    local_78 = 0;
    local_68 = 0;
    local_70 = puStack_80;
    FUN_00947a00(*(undefined4 *)(lVar18 + 0x27c),lVar12 + 0x28,param_1 + 0x2c8,&puStack_198,
                 &local_88,uVar16,*(uint *)(param_1 + 0x278) >> 1 & 1);
    cVar3 = *(char *)(param_1 + 800);
    uVar6 = local_78;
    uVar7 = local_68;
  }
  else {
    local_1a8 = (int)local_a8 + iVar15 + (iVar1 >> 1);
    iStack_1a4 = local_a8._4_4_ + iVar14 + (iVar4 >> 1);
    local_1b0 = puVar8 + 0x10;
    if (*(char *)(param_1 + 800) != '\0') goto LAB_02a780e4;
    local_78 = 0;
    local_68 = 0;
    local_88 = puVar10 + 0x10;
    puStack_80 = local_1b0;
    local_70 = local_1b0;
    FUN_00948180(*(undefined4 *)(lVar18 + 0x27c),(float)local_d8 * 8.381903e-08,lVar12 + 0x28,
                 param_1 + 0x2c8,&local_1b0,&local_88,uVar16,*(uint *)(param_1 + 0x278) >> 1 & 1);
    cVar3 = *(char *)(param_1 + 800);
    uVar6 = local_78;
    uVar7 = local_68;
  }
  if (cVar3 == '\0') {
    lVar18 = *(long *)puVar9;
    lVar12 = *(long *)(lVar18 + 0x1150);
    plVar2 = (long *)((long)*(int *)(lVar18 + 0x1164) + param_1 + 0x280);
    *(long **)(lVar18 + 0x1150) = plVar2;
    *plVar2 = lVar12;
    plVar2[1] = lVar18 + 0x1150;
    if (lVar12 != 0) {
      *(long **)(lVar12 + 8) = plVar2;
    }
    *(int *)(lVar18 + 0x1160) = *(int *)(lVar18 + 0x1160) + 1;
  }
  *(undefined4 *)(param_1 + 0x324) = uVar16;
  *(undefined1 *)(param_1 + 800) = 1;
  local_78._0_4_ = (undefined4)uVar6;
  local_78._4_4_ = (undefined4)(uVar6 >> 0x20);
  *(undefined4 *)(param_1 + 0x2b0) = (undefined4)local_78;
  *(undefined4 *)(param_1 + 0x2b4) = local_78._4_4_;
  local_68._0_4_ = (undefined4)uVar7;
  local_68._4_4_ = (undefined4)((ulong)uVar7 >> 0x20);
  *(undefined4 *)(param_1 + 0x2c0) = (undefined4)local_68;
  *(undefined4 *)(param_1 + 0x2c4) = local_68._4_4_;
  local_78 = uVar6;
  local_68 = uVar7;
LAB_02a780e4:
  fVar19 = (float)*(int *)(param_1 + 0x2b0) * 0.5;
  fVar20 = (float)*(int *)(param_1 + 0x2b4) * 0.5;
  fVar22 = (float)*(int *)(param_1 + 0x2c0) * 0.5;
  fVar21 = (float)*(int *)(param_1 + 0x2c4) * 0.5;
  uVar11 = 0;
  if (fVar19 != (float)(int)fVar19) {
    uVar11 = (uint)(fVar19 < 0.0);
  }
  iVar1 = (int)fVar19 - uVar11;
  uVar11 = 0;
  if (fVar20 != (float)(int)fVar20) {
    uVar11 = (uint)(fVar20 < 0.0);
  }
  iVar4 = (int)fVar20 - uVar11;
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  uVar11 = 0;
  if (fVar22 != (float)(int)fVar22) {
    uVar11 = (uint)(fVar22 < 0.0);
  }
  iVar17 = (int)fVar22 - uVar11;
  uVar11 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar11 = (uint)(fVar21 < 0.0);
  }
  iVar14 = (int)fVar21 - uVar11;
  iVar15 = iVar1;
  if (iVar17 <= iVar1) {
    iVar15 = iVar17;
  }
  if (iVar1 <= iVar17) {
    iVar1 = iVar17;
  }
  iVar17 = iVar4;
  if (iVar14 <= iVar4) {
    iVar17 = iVar14;
  }
  if (iVar4 <= iVar14) {
    iVar4 = iVar14;
  }
  if (((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
      (lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0), lVar18 != 0)) &&
     (iVar4 + 1 != iVar17)) {
    iVar14 = iVar15;
    do {
      uVar11 = iVar14 - *(int *)(lVar18 + 0x28);
      uVar5 = iVar17 - *(int *)(lVar18 + 0x2c);
      if ((uVar11 < *(uint *)(lVar18 + 0x18) && uVar5 <= *(uint *)(lVar18 + 0x1c)) &&
          (*(uint *)(lVar18 + 0x18) <= uVar11 || *(uint *)(lVar18 + 0x1c) != uVar5)) {
        lVar12 = lVar18 + 0x40;
LAB_02a78274:
        FUN_0138367c(lVar12);
      }
      else if (((*(char *)(lVar18 + 0x88) != '\0') &&
               ((uint)(iVar14 - *(int *)(lVar18 + 0x98)) < *(uint *)(lVar18 + 0xa0))) &&
              ((uint)(iVar17 - *(int *)(lVar18 + 0x9c)) < *(uint *)(lVar18 + 0xa4))) {
        lVar12 = lVar18 + 0xa8;
        goto LAB_02a78274;
      }
      if (iVar14 < iVar1) {
        iVar14 = iVar14 + 1;
      }
      else {
        iVar17 = iVar17 + 1;
        iVar14 = iVar15;
      }
    } while ((iVar15 != iVar14) || (iVar4 + 1 != iVar17));
  }
  return;
}

