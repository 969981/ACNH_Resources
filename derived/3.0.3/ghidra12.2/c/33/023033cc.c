
/* WARNING: Removing unreachable block (ram,0x0230367c) */
/* WARNING: Removing unreachable block (ram,0x023036e8) */

uint FUN_023033cc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined **ppuVar8;
  undefined *local_830;
  undefined4 local_828;
  undefined4 local_824;
  undefined8 uStack_820;
  undefined *local_818;
  undefined *local_810;
  ulong local_808;
  undefined *local_800;
  undefined *local_7f8;
  undefined *local_7f0;
  undefined *local_7e8;
  undefined *local_7e0;
  undefined *local_7d8;
  undefined *local_7d0;
  undefined *local_7c8;
  undefined *local_7c0;
  undefined *local_7b8;
  undefined *local_7b0;
  undefined *local_7a8;
  undefined *local_7a0;
  undefined *local_798;
  undefined *local_790;
  undefined *local_788;
  undefined *local_780;
  undefined *local_778;
  undefined *local_770;
  undefined *local_768;
  undefined *local_760;
  undefined *local_758 [7];
  undefined1 auStack_720 [8];
  undefined1 auStack_718 [592];
  undefined *puStack_4c8;
  undefined *apuStack_4c0 [78];
  undefined *local_250;
  undefined *local_248;
  undefined *local_228;
  undefined *local_220;
  undefined *local_1e0;
  undefined *local_1d8;
  undefined *local_1b8;
  undefined *local_1b0;
  undefined *local_170;
  undefined *local_168;
  undefined *local_148;
  undefined *local_140;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined *local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined8 local_c2;
  undefined8 local_ba;
  undefined8 local_b2;
  undefined6 local_aa;
  undefined2 uStack_a4;
  undefined6 uStack_a2;
  byte local_98 [8];
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04bbc1a0;
  if (*(int *)(param_1 + 8) == 0x1a) {
    local_98[2] = 0;
    local_98[0] = *(byte *)(param_2 + 0x28);
    local_80 = (undefined *)0x0;
    local_7f8 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_88 = PTR_DAT_04bb2010 + 0x10;
    if (7 < local_98[0]) {
      local_98[0] = 0xff;
    }
    local_70 = (undefined *)0x0;
    local_90 = local_7f8;
    local_78 = puStack_88;
    if (*(int *)(param_2 + 8) == 5) {
      local_800 = (undefined *)((ulong)local_800 & 0xffffffff00000000);
      local_98[1] = 5;
      puVar2 = PTR_DAT_04bc4988 + 0x10;
      local_7c8 = PTR_DAT_04bb2018 + 0x10;
      local_818 = (undefined *)0x0;
      local_828 = *(undefined4 *)PTR_DAT_04bb3238;
      puVar3 = PTR_DAT_04bc4568 + 0x10;
      local_824 = 2;
      local_7e8 = (undefined *)0x0;
      local_808 = 0;
      local_7c0 = (undefined *)0x0;
      puVar4 = PTR_DAT_04bbc5d8 + 0x10;
      local_7b0 = (undefined *)0x0;
      local_798 = (undefined *)0x0;
      local_788 = (undefined *)0x0;
      local_770 = (undefined *)0x0;
      local_760 = (undefined *)0x0;
      local_7d8 = (undefined *)0x0;
      local_830 = puVar2;
      local_810 = puVar3;
      local_7f0 = puStack_88;
      local_7e0 = puStack_88;
      local_7d0 = puVar4;
      local_7b8 = local_7c8;
      local_7a8 = local_7f8;
      local_7a0 = puStack_88;
      local_790 = puStack_88;
      local_780 = local_7f8;
      local_778 = puStack_88;
      local_768 = puStack_88;
      uStack_820 = local_7c8;
      FUN_02ad636c(local_758);
      local_f8 = 0x400000000;
      local_f0 = 0x400000004;
      local_e8 = 0x400000004;
      local_e0 = 0x400000004;
      local_d8 = 4;
      local_d0 = PTR_DAT_04bc4980 + 0x10;
      local_c8 = 0;
      local_c4 = 0;
      local_c2 = 0;
      local_ba = 0;
      local_b2 = 0;
      local_aa = 0;
      uStack_a4 = 0;
      uStack_a2 = 0;
      FUN_02b25e6c(&local_830,&local_d0,param_2);
      if (((byte)local_808 >> 1 & 1) == 0) {
        ppuVar8 = &local_7f8;
      }
      else {
        local_64 = 5;
        ppuVar8 = apuStack_4c0;
      }
      local_80 = ppuVar8[2];
      puVar7 = auStack_718;
      local_70 = ppuVar8[4];
      local_98[2] = *(undefined1 *)(param_2 + 0x46);
      local_220 = puVar1 + 0x10;
      local_758[0] = PTR_DAT_04bc4788 + 0x10;
      local_830 = puVar2;
      local_810 = puVar3;
      local_248 = puVar4;
      local_1d8 = puVar4;
      local_1b0 = local_220;
      local_168 = puVar4;
      local_140 = local_220;
    }
    else {
      uVar6 = 0;
      if (*(int *)(param_2 + 8) != 4) goto LAB_0230374c;
      local_824 = 0;
      uStack_820._0_4_ = 0;
      local_808 = local_808 & 0xffffffff00000000;
      local_98[1] = 3;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      local_7e8 = PTR_DAT_04bb2010 + 0x10;
      local_828 = *(undefined4 *)PTR_DAT_04bb3238;
      local_7f0 = (undefined *)0x0;
      puVar2 = PTR_DAT_04bc4948 + 0x10;
      puVar3 = PTR_DAT_04bc4568 + 0x10;
      local_810 = (undefined *)0x0;
      puVar4 = PTR_DAT_04bbc5d8 + 0x10;
      local_7e0 = (undefined *)0x0;
      puVar5 = PTR_DAT_04bb2018 + 0x10;
      local_7a0 = (undefined *)0x0;
      local_778 = (undefined *)0x0;
      local_768 = (undefined *)0x0;
      local_790 = (undefined *)0x0;
      local_7c8 = (undefined *)0x0;
      local_7b8 = (undefined *)0x0;
      local_830 = puVar2;
      local_818 = puVar3;
      local_800 = puVar1;
      local_7f8 = local_7e8;
      local_7d8 = puVar4;
      local_7d0 = puVar5;
      local_7c0 = puVar5;
      local_7b0 = puVar1;
      local_7a8 = local_7e8;
      local_798 = local_7e8;
      local_788 = puVar1;
      local_780 = local_7e8;
      local_770 = local_7e8;
      FUN_02ad636c(&local_760);
      local_f8 = 0;
      local_d0 = PTR_DAT_04bc4980 + 0x10;
      local_f0 = (ulong)local_f0._6_2_ << 0x30;
      local_e8 = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c2 = 0;
      local_ba = 0;
      local_b2 = 0;
      local_aa = 0;
      uStack_a4 = 0;
      uStack_a2 = 0;
      local_100 = puVar5;
      FUN_02b12e00(&local_830,&local_d0,param_2);
      if (((byte)local_810 >> 1 & 1) == 0) {
        ppuVar8 = &local_800;
      }
      else {
        local_64 = 5;
        ppuVar8 = &puStack_4c8;
      }
      local_80 = ppuVar8[2];
      puVar7 = auStack_720;
      local_70 = ppuVar8[4];
      local_98[2] = *(undefined1 *)(param_2 + 0x44);
      local_760 = PTR_DAT_04bc4788 + 0x10;
      local_830 = puVar2;
      local_818 = puVar3;
      local_250 = puVar4;
      local_228 = puVar1;
      local_1e0 = puVar4;
      local_1b8 = puVar1;
      local_170 = puVar4;
      local_148 = puVar1;
    }
    FUN_02ad6758(puVar7);
    uVar6 = FUN_0230277c(param_1,local_98);
  }
  else {
    uVar6 = 0;
  }
LAB_0230374c:
  return uVar6 & 1;
}

