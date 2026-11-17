
ulong FUN_02a75a38(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  uint *puVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined *local_218;
  undefined *puStack_210;
  undefined8 local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined *local_1d8;
  undefined1 local_1d0;
  undefined4 local_1cc;
  undefined *local_1c8;
  undefined8 local_1c0;
  uint local_1b8;
  undefined2 local_1b4;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined2 local_144;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined4 local_130;
  undefined1 local_12c [87];
  undefined1 local_d5;
  undefined4 local_d0;
  char local_cc;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined4 local_84;
  uint local_80 [2];
  undefined1 local_78;
  
  puVar9 = PTR_DAT_04bc4608;
  puVar8 = PTR_DAT_04bc44c0;
  puVar6 = PTR_DAT_04bb2010;
  iVar12 = *(int *)(param_2 + 0xc);
  if (iVar12 == 0) {
    return (ulong)*(uint *)PTR_DAT_04bb3238;
  }
  if ((param_3 == 0xffffffff) || (lVar14 = *(long *)PTR_DAT_04bb27c0, lVar14 == 0))
  goto LAB_02a75f24;
  local_170 = (undefined *)CONCAT44(local_170._4_4_,iVar12);
  local_160 = CONCAT44(iVar12,(undefined4)local_160);
  local_160 = CONCAT71(local_160._1_7_,*(undefined1 *)(param_2 + 8));
  local_1b0 = PTR_DAT_04bc44c0 + 0x10;
  local_1a8 = 0xffffffff00000000;
  local_150 = *(undefined8 *)(param_2 + 0x18);
  local_168 = PTR_DAT_04bc4608 + 0x10;
  local_158 = PTR_DAT_04bb2010 + 0x10;
  local_148 = *(undefined4 *)(param_2 + 0x20);
  local_144 = *(undefined2 *)(param_2 + 0x24);
  local_140 = (undefined *)CONCAT44(local_140._4_4_,param_3);
  local_218 = PTR_DAT_04bc44c8 + 0x10;
  FUN_02a6d654(&local_218,&local_1b0,&local_170);
  puVar7 = PTR_DAT_04bbc1a0;
  if ((int)local_1a8 == 0) goto LAB_02a75f24;
  if (*(int *)(param_2 + 0xc) == 0) {
LAB_02a75d8c:
    fVar15 = 0.0;
    fVar16 = 0.0;
  }
  else {
    puStack_210 = puVar6 + 0x10;
    local_208 = 0;
    local_1f8 = 0;
    local_218 = PTR_DAT_04bbc1a0 + 0x10;
    local_200 = puStack_210;
    FUN_02a8f7b0(param_2,&local_218);
    uVar3 = *(uint *)(param_2 + 0xc);
    local_170 = (undefined *)CONCAT44(local_170._4_4_,uVar3);
    if (uVar3 == 0) {
LAB_02a75ce0:
      if (uVar3 != 0) {
        local_80[1] = 0;
        puStack_b0 = puVar7 + 0x10;
        local_160 = (long)&local_158 + 4;
        local_78 = 0;
        local_d5 = 0;
        local_168 = PTR_DAT_04bb2d88 + 0x10;
        local_158 = (undefined *)CONCAT35(local_158._5_3_,0x80);
        local_b8 = 0;
        local_c8 = puVar6 + 0x10;
        local_d0 = 0;
        local_cc = '\0';
        local_88 = 0;
        local_84 = 0;
        local_c0 = 0;
        local_a0 = (undefined **)0x0;
        uStack_90 = 0;
        local_170 = PTR_DAT_04bc49b8 + 0x10;
        local_a8 = local_c8;
        local_98 = local_c8;
        local_80[0] = uVar3;
        FUN_02b34590(&local_170,local_80);
        if (local_cc != '\0') {
          fVar15 = (float)((int)local_208 - (int)local_c0) * 5.0;
          fVar16 = (float)(local_208._4_4_ - local_c0._4_4_) * 5.0;
          goto LAB_02a75d94;
        }
      }
      goto LAB_02a75d8c;
    }
    lVar13 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar13 + 0x1e0) < 1) {
      if ((((*(long *)(lVar13 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar13 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar13 + 0xe8) <= uVar3 ||
           (*(char *)(*(long *)(lVar13 + 0xf0) + (long)(int)uVar3) != '\0')))) &&
         (((uVar3 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * uVar3 + (uint)(ushort)puVar11[2] * 8 + iVar12) +
                          (long)puVar11);
        if (puVar11 != (uint *)0x0) goto LAB_02a75b88;
      }
      goto LAB_02a75ce0;
    }
    if (*(uint *)(lVar13 + 0x1e0) <= uVar3) goto LAB_02a75ce0;
    uVar1 = uVar3;
    if (*(uint *)(lVar13 + 0x1d0) <= uVar3) {
      uVar1 = 0;
    }
    puVar11 = *(uint **)(*(long *)(lVar13 + 0x1d8) + (ulong)uVar1 * 8);
    if (puVar11 == (uint *)0x0) goto LAB_02a75ce0;
LAB_02a75b88:
    puVar5 = (uint *)((long)puVar11 - (ulong)*puVar11);
    if (((*puVar11 == 0) || (puVar5 == (uint *)0x0)) ||
       ((*puVar5 == 0 || ((uVar1 = puVar5[1], uVar1 == 0 || ((ulong)(ushort)puVar5[2] == 0))))))
    goto LAB_02a75ce0;
    lVar13 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    lVar13 = (long)puVar5 + lVar13 + (ulong)(ushort)puVar5[2] * 8;
    if (lVar13 == 0) goto LAB_02a75ce0;
    uVar2 = 0;
    if ((ulong)uVar1 != 0) {
      uVar2 = (uint)((ulong)((long)puVar11 - lVar13) / (ulong)uVar1);
    }
    if (*puVar5 <= uVar2) {
      uVar2 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bc46a8 <= uVar2) goto LAB_02a75ce0;
    uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar2 * 2);
    if (4 < uVar4) goto LAB_02a75ce0;
    if ((uVar4 == 4) || (uVar4 == 1)) {
      fVar15 = ((float)(int)local_208 * 5.0 + (float)(int)local_1f8 * 5.0 + 5.0) * 0.5;
      fVar16 = (float)((local_1f8._4_4_ - local_208._4_4_) + 1) * 5.0 * 0.5 +
               ((float)local_208._4_4_ * 5.0 + (float)local_1f8._4_4_ * 5.0 + 5.0) * 0.5;
    }
    else {
      if (uVar4 == 0) goto LAB_02a75ce0;
      fVar15 = ((float)(int)local_208 * 5.0 + (float)(int)local_1f8 * 5.0 + 5.0) * 0.5;
      fVar16 = ((float)local_208._4_4_ * 5.0 + (float)local_1f8._4_4_ * 5.0 + 5.0) * 0.5;
    }
  }
LAB_02a75d94:
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
    local_218 = puVar8 + 0x10;
    local_1d0 = 0;
    local_1d8 = puVar9 + 0x10;
    puStack_210 = (undefined *)0xffffffff00000000;
    local_1c8 = puVar6 + 0x10;
    local_1cc = 0;
    local_1b8 = 0;
    local_1b4 = 0;
    local_1c0 = 0;
    FUN_02a6ccf0(&local_218,&local_1b0);
    local_1d0 = *(undefined1 *)(param_2 + 8);
    local_170 = (undefined *)0xd800000000;
    local_1cc = *(undefined4 *)(param_2 + 0xc);
    local_1c0 = *(undefined8 *)(param_2 + 0x18);
    local_1b4 = *(undefined2 *)(param_2 + 0x24);
    local_80[0] = *(uint *)(param_2 + 0x20);
    local_1b8 = local_80[0];
  }
  else {
    local_218 = puVar8 + 0x10;
    puStack_210 = (undefined *)0xffffffff00000000;
    FUN_02a6ccf0(&local_218,&local_1b0);
    local_170 = (undefined *)0xd00000000;
    local_80[0] = *(uint *)(param_2 + 0x20);
  }
  local_130 = 0x80;
  local_a0 = &local_218;
  local_140 = PTR_DAT_04bb2d88 + 0x10;
  puStack_138 = local_12c;
  puStack_b0._0_4_ = (uint)(uint3)puStack_b0;
  local_12c[0] = 0;
  local_150 = 0;
  local_148 = 0;
  local_168 = (undefined *)(ulong)(uint)fVar15;
  local_160 = CONCAT44(0x3f800000,fVar16);
  local_158 = (undefined *)
              CONCAT44(param_3,(int)(long)((float)(int)local_80[0] * 90.0 * 11930465.0));
  local_a8 = (undefined *)CONCAT26(local_a8._6_2_,0x20000000007);
  if ((int)param_3 < 0x36) {
    uVar10 = FUN_007402e0(lVar14,&local_170,0,0);
    if (param_3 < 0x36) {
      param_1 = param_1 + (ulong)param_3 * 8;
      *(int *)(param_1 + 0x10) = (int)uVar10;
      *(uint *)(param_1 + 0x14) = param_3;
      return uVar10;
    }
    return uVar10;
  }
LAB_02a75f24:
  return (ulong)*(uint *)PTR_DAT_04bb3238;
}

