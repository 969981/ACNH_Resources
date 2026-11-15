
undefined8 FUN_02115040(long param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  undefined8 uVar18;
  float local_124 [2];
  float local_11c;
  short local_118 [4];
  undefined **local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  byte local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  byte local_d8;
  undefined **local_d0;
  undefined **local_c8;
  undefined **local_c0;
  int local_b8;
  int local_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined1 local_84;
  
  puVar13 = PTR_DAT_04bbc1a0;
  puVar11 = PTR_DAT_04bb2010;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  local_c0 = &local_b0;
  local_c8 = &local_e8;
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_a8 = PTR_DAT_04bb2010 + 0x10;
  local_a0 = *(undefined8 *)(param_1 + 0x10);
  local_90 = *(undefined8 *)(param_1 + 0x20);
  local_88 = *param_2;
  local_d0 = &PTR_FUN_04a74ed0;
  local_84 = 0;
  iVar14 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  local_98 = puStack_a8;
  if (iVar14 != 0) {
    lVar16 = (long)iVar14 << 3;
    puVar17 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    do {
      (*(code *)*local_d0)(&local_d0,*puVar17);
      lVar16 = lVar16 + -8;
      puVar17 = puVar17 + 1;
    } while (lVar16 != 0);
    if ((char)local_e8 != '\0') {
      return 0;
    }
  }
  puVar12 = PTR_DAT_04bb2720;
  local_e0 = 0;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar14 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  local_dc = *(undefined4 *)(puVar17 + 7);
  local_d8 = FUN_017baf44();
  local_d8 = local_d8 & 1;
  local_e8 = PTR_DAT_04bb3140 + 0x10;
  uVar15 = FUN_01a4fafc(&local_e8,0,param_1);
  if ((uVar15 & 1) == 0) {
    return 0;
  }
  FUN_01a4fafc(&local_e8,0,param_1);
  local_f8 = 0;
  local_100 = PTR_DAT_04bbfe68 + 0x10;
  lVar16 = *(long *)puVar12;
  if (lVar16 == 0) {
    puVar17 = &DAT_055c04a0;
  }
  else {
    puVar17 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar17 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar14 = FUN_006bd550(*puVar17,0);
      puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar17 = &DAT_055c04a0;
      }
    }
  }
  local_f4 = *(undefined4 *)(puVar17 + 7);
  local_f0 = FUN_017baf44();
  local_f0 = local_f0 & 1;
  local_c8 = (undefined **)(param_1 + 0x18);
  local_d0 = (undefined **)(param_1 + 8);
  ppuVar3 = (undefined **)(puVar11 + 0x10);
  iVar4 = *(int *)(param_1 + 0x10);
  local_b4 = *(int *)(param_1 + 0x14);
  iVar14 = *(int *)(param_1 + 0x24) + 1;
  if (iVar14 == local_b4) {
    return 1;
  }
  uVar18 = 1;
  local_c0 = ppuVar3;
  local_b8 = iVar4;
  do {
    local_108 = 0;
    local_110 = ppuVar3;
    FUN_01a5033c(local_118,&local_100,0,&local_c0,&local_110);
    if (local_118[0] != -2) {
      puStack_a8 = puVar11 + 0x10;
      local_a0 = 0;
      local_90 = 0;
      local_b0 = puVar13 + 0x10;
      local_98 = puStack_a8;
      FUN_0277f02c(local_118,&local_b0);
      local_a0._0_4_ = (int)local_a0 + (int)local_108;
      local_90._0_4_ = (int)local_90 + (int)local_108;
      local_a0._4_4_ = local_a0._4_4_ + local_108._4_4_;
      local_90._4_4_ = local_90._4_4_ + local_108._4_4_;
      if (((((int)local_a0 <= *(int *)(param_1 + 0x10)) &&
           (*(int *)(param_1 + 0x20) <= (int)local_90)) &&
          (local_a0._4_4_ <= *(int *)(param_1 + 0x14))) &&
         (*(int *)(param_1 + 0x24) <= local_90._4_4_)) {
        local_11c = (float)local_b4 * 5.0 + 2.5;
        local_124[0] = (float)local_b8 * 5.0 + 2.5;
        uVar15 = FUN_021f2ed0(local_124,0);
        if (((uVar15 & 1) != 0) &&
           (uVar15 = FUN_021f32f0(local_124,local_124,0,0,0), (uVar15 & 1) != 0)) {
          iVar5 = *(int *)(param_1 + 0x10);
          iVar7 = *(int *)(param_1 + 0x14);
          iVar6 = *(int *)(param_1 + 0x20);
          iVar8 = *(int *)(param_1 + 0x24);
          iVar9 = (int)((float)(int)(local_124[0] + -2.5) / 5.0) - (uint)(local_124[0] + -2.5 < 0.0)
          ;
          iVar10 = (int)((float)(int)(local_11c + -2.5) / 5.0) - (uint)(local_11c + -2.5 < 0.0);
          iVar1 = iVar9 + 1;
          iVar2 = iVar10 + 1;
          if (((iVar5 <= iVar9 && iVar1 <= iVar6) && iVar7 <= iVar10) && iVar2 == iVar8 ||
              (((iVar5 <= iVar9 && iVar1 <= iVar6) && iVar7 <= iVar10) && iVar2 - iVar8 < 0) !=
              (((iVar5 <= iVar9 && iVar1 <= iVar6) && iVar7 <= iVar10) && SBORROW4(iVar2,iVar8))) {
            return 1;
          }
        }
      }
      uVar18 = 0;
    }
    if (local_b8 < *(int *)((long)local_c8 + 8)) {
      local_b8 = local_b8 + 1;
    }
    else {
      local_b8 = *(int *)(local_d0 + 1);
      local_b4 = local_b4 + 1;
    }
  } while ((iVar4 != local_b8) || (iVar14 != local_b4));
  return uVar18;
}

