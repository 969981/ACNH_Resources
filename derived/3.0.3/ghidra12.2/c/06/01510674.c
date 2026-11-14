
uint FUN_01510674(undefined4 *param_1,byte *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  float *pfVar6;
  long lVar7;
  byte bVar8;
  undefined8 *puVar9;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  local_50 = 0;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar9 = &DAT_055c04a0;
  }
  else {
    puVar9 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar9 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar7 + 0x338));
      iVar3 = FUN_006bd550(*puVar9,0);
      puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar9 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar9 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_58 = PTR_DAT_04bb3140 + 0x10;
  uVar5 = FUN_015000c4(&local_58);
  if ((uVar5 & 1) != 0) {
    pfVar6 = (float *)FUN_0251b3b0(param_2,0);
    puVar1 = PTR_DAT_04bb2010;
    uVar4 = 0;
    if (pfVar6 == (float *)0x0) goto LAB_01510988;
    local_78 = PTR_DAT_04bb2010 + 0x10;
    local_70 = 0;
    iStack_5c = (int)((float)(int)pfVar6[2] / 5.0) - (uint)(pfVar6[2] < 0.0);
    local_60 = (int)((float)(int)*pfVar6 / 5.0) - (uint)(*pfVar6 < 0.0);
    local_68 = local_78;
    FUN_01a5033c(&local_f8,&local_58,7,&local_68,&local_78);
    local_80 = local_f8;
    local_7c = local_f4;
    uVar5 = FUN_0277e294(&local_80);
    puVar2 = PTR_DAT_04bb43c0;
    if ((uVar5 & 1) != 0) {
      local_88 = 0;
      local_98 = PTR_DAT_04bc0510 + 0x10;
      local_90 = local_80;
      uStack_8c = local_7c;
      lVar7 = *(long *)PTR_DAT_04bb43c0;
      uVar4 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar2 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar4 = FUN_0277d6c4(&local_80);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
            if (lVar7 != 0) {
              local_88 = lVar7;
            }
          }
        }
      }
      puVar1 = puVar1 + 0x10;
      local_b0 = 0;
      local_a0 = 0;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      local_c0 = puVar2;
      puStack_b8 = puVar1;
      local_a8 = puVar1;
      FUN_01afb480(&local_98,&local_c0);
      iStack_d4 = local_b0._4_4_ + local_70._4_4_;
      iStack_c4 = local_a0._4_4_ + local_70._4_4_;
      bVar8 = *param_2;
      local_d8 = (int)local_b0 + (int)local_70;
      local_c8 = (int)local_a0 + (int)local_70;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      local_f8 = CONCAT31(local_f8._1_3_,bVar8);
      local_f4 = local_80;
      local_f0 = local_7c;
      local_e8 = puVar2;
      puStack_e0 = puVar1;
      local_d0 = puVar1;
      local_a0._0_4_ = local_c8;
      local_a0._4_4_ = iStack_c4;
      local_b0._0_4_ = local_d8;
      local_b0._4_4_ = iStack_d4;
      uVar4 = FUN_0150ee60(&local_f8);
      if ((uVar4 & 1) != 0) {
        *param_1 = local_80;
        param_1[1] = local_7c;
        param_1[4] = (int)local_70;
        param_1[5] = local_70._4_4_;
        param_1[6] = 7;
        param_1[8] = 0x42200000;
        param_1[7] = ((float)(int)local_b0 * 5.0 + (float)(int)local_a0 * 5.0 + 5.0) * 0.5;
        param_1[9] = ((float)local_b0._4_4_ * 5.0 + (float)local_a0._4_4_ * 5.0 + 5.0) * 0.5;
      }
      goto LAB_01510988;
    }
  }
  uVar4 = 0;
LAB_01510988:
  return uVar4 & 1;
}

