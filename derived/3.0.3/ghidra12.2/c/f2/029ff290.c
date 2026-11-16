
undefined8 FUN_029ff290(byte *param_1,long param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  undefined **local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined8 uStack_d0;
  byte *local_c8;
  uint local_c0 [2];
  byte *local_b8;
  undefined8 local_b0;
  undefined ***local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  char *local_88;
  undefined *puStack_80;
  char *local_78;
  byte *pbStack_70;
  
  *(byte **)PTR_DAT_04bc4210 = param_1;
  puVar3 = PTR_DAT_04bc4208;
  param_1[0x23aa4] = 0;
  param_1[0x23aa5] = 0;
  param_1[0x23aa6] = 0;
  param_1[0x23aa7] = 0;
  *(byte **)puVar3 = param_1;
  param_1[0x23abc] = 0;
  param_1[0x23abd] = 0;
  param_1[0x23abe] = 0;
  param_1[0x23abf] = 0;
  if ((*(long *)PTR_DAT_04bc3ee8 != 0) &&
     (lVar7 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28), lVar7 != 0)) {
    lVar4 = FUN_03baddf0(lVar7,&DAT_055f25e0);
    lVar7 = *(long *)(lVar7 + 0x88);
    if (lVar4 != 0) {
      lVar7 = lVar4;
    }
    *(long *)(param_1 + 0x23b28) = lVar7;
  }
  local_b0 = CONCAT62(local_b0._2_6_,0x100);
  local_b0 = CONCAT44(0x44b1a91c,(undefined4)local_b0);
  local_b8 = *(byte **)(param_2 + 8);
  local_c0[0] = 0x80;
  local_a8 = (undefined ***)(PTR_DAT_04bb2020 + 0x10);
  puStack_a0 = &DAT_040a76d1;
  local_98 = (char *)CONCAT44(DAT_055f2598,0x3c23d70a);
  FUN_02a066f0(param_1 + 0x4b0,local_c0);
  FUN_02a066f0(param_1 + 0x1b50,local_c0);
  FUN_02a066f0(param_1 + 0x31f0,local_c0);
  FUN_02a066f0(param_1 + 0x4890,local_c0);
  FUN_02a066f0(param_1 + 0x5f30,local_c0);
  FUN_02a066f0(param_1 + 0x75d0,local_c0);
  FUN_02a066f0(param_1 + 0x8c70,local_c0);
  FUN_02a066f0(param_1 + 0xa310,local_c0);
  FUN_02a066f0(param_1 + 0xb9b0,local_c0);
  FUN_02a066f0(param_1 + 0xd050,local_c0);
  FUN_02a066f0(param_1 + 0xe6f0,local_c0);
  FUN_02a066f0(param_1 + 0xfd90,local_c0);
  FUN_02a066f0(param_1 + 0x11430,local_c0);
  FUN_02a066f0(param_1 + 0x12ad0,local_c0);
  FUN_02a066f0(param_1 + 0x14170,local_c0);
  FUN_02a066f0(param_1 + 0x15810,local_c0);
  FUN_02a066f0(param_1 + 0x16eb0,local_c0);
  FUN_02a066f0(param_1 + 0x18550,local_c0);
  FUN_02a066f0(param_1 + 0x19bf0,local_c0);
  FUN_02a066f0(param_1 + 0x1b290,local_c0);
  FUN_02a066f0(param_1 + 0x1c930,local_c0);
  FUN_02a066f0(param_1 + 0x1dfd0,local_c0);
  FUN_02a066f0(param_1 + 0x1f670,local_c0);
  FUN_02a066f0(param_1 + 0x20d10,local_c0);
  FUN_02a066f0(param_1 + 0x223b0,local_c0);
  uVar6 = 0;
  do {
    pbVar1 = param_1 + ((long)((ulong)uVar6 << 0x20) >> 0x1e) + 0x23ac0;
    pbVar1[2] = (byte)uVar6;
    pbVar1[3] = (byte)uVar6;
    uVar6 = uVar6 + 1;
    pbVar1[0] = 0;
    puVar3 = PTR_DAT_04bcb3d8;
    pbVar1[1] = 0;
  } while (uVar6 != 0x19);
  puStack_f0 = PTR_DAT_04bb2020 + 0x10;
  local_f8 = &PTR_FUN_04a992f8;
  local_e8 = PTR_DAT_04bb2120;
  local_d8 = PTR_DAT_04bb2120;
  uStack_d0 = 0;
  puStack_e0 = puStack_f0;
  if ((*param_1 >> 1 & 1) == 0) {
    local_98 = "Theremin_Normal";
    *param_1 = *param_1 | 2;
    local_a8 = &local_f8;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_88 = "Theremin_Normal";
    pbStack_70 = param_1 + 0x10;
    local_b0 = 0;
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x4b0;
    local_b8 = param_1;
    puStack_a0 = puStack_f0;
    puStack_90 = puStack_f0;
    puStack_80 = puStack_f0;
    FUN_03839ca0(*(undefined8 *)puVar3,local_c0,0);
  }
  puVar2 = PTR_DAT_04bb2020;
  local_b8 = param_1 + 0x30;
  if ((*local_b8 >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    param_1[0x30] = *local_b8 | 2;
    puStack_a0 = puVar2 + 0x10;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x40;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x1b50;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  local_b8 = param_1 + 0x60;
  if ((*local_b8 >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    param_1[0x60] = *local_b8 | 2;
    puStack_a0 = puVar2 + 0x10;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x70;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x31f0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  local_b8 = param_1 + 0x90;
  if ((*local_b8 >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    param_1[0x90] = *local_b8 | 2;
    puStack_a0 = puVar2 + 0x10;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0xa0;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x4890;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  local_b8 = param_1 + 0xc0;
  if ((*local_b8 >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    param_1[0xc0] = *local_b8 | 2;
    puStack_a0 = puVar2 + 0x10;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0xd0;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x5f30;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  local_b8 = param_1 + 0xf0;
  if ((*local_b8 >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    param_1[0xf0] = *local_b8 | 2;
    puStack_a0 = puVar2 + 0x10;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x100;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x75d0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x120] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x120] = param_1[0x120] | 2;
    local_b8 = param_1 + 0x120;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x130;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x8c70;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x150] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x150] = param_1[0x150] | 2;
    local_b8 = param_1 + 0x150;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x160;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0xa310;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x180] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x180] = param_1[0x180] | 2;
    local_b8 = param_1 + 0x180;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 400;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0xb9b0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x1b0] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x1b0] = param_1[0x1b0] | 2;
    local_b8 = param_1 + 0x1b0;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x1c0;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0xd050;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x1e0] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x1e0] = param_1[0x1e0] | 2;
    local_b8 = param_1 + 0x1e0;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x1f0;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0xe6f0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x210] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x210] = param_1[0x210] | 2;
    local_b8 = param_1 + 0x210;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x220;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0xfd90;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x240] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x240] = param_1[0x240] | 2;
    local_b8 = param_1 + 0x240;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x250;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x11430;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x270] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x270] = param_1[0x270] | 2;
    local_b8 = param_1 + 0x270;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x280;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x12ad0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x2a0] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x2a0] = param_1[0x2a0] | 2;
    local_b8 = param_1 + 0x2a0;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x2b0;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x14170;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x2d0] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x2d0] = param_1[0x2d0] | 2;
    local_b8 = param_1 + 0x2d0;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x2e0;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x15810;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x300] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x300] = param_1[0x300] | 2;
    local_b8 = param_1 + 0x300;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x310;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x16eb0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x330] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x330] = param_1[0x330] | 2;
    local_b8 = param_1 + 0x330;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x340;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x18550;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x360] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x360] = param_1[0x360] | 2;
    local_b8 = param_1 + 0x360;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x370;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x19bf0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x390] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x390] = param_1[0x390] | 2;
    local_b8 = param_1 + 0x390;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x3a0;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x1b290;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x3c0] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x3c0] = param_1[0x3c0] | 2;
    local_b8 = param_1 + 0x3c0;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x3d0;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x1c930;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x3f0] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x3f0] = param_1[0x3f0] | 2;
    local_b8 = param_1 + 0x3f0;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x400;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x1dfd0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x420] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x420] = param_1[0x420] | 2;
    local_b8 = param_1 + 0x420;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x430;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x1f670;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x450] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x450] = param_1[0x450] | 2;
    local_b8 = param_1 + 0x450;
    local_b0 = 0;
    local_a8 = &local_f8;
    pbStack_70 = param_1 + 0x460;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x20d10;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  if ((param_1[0x480] >> 1 & 1) == 0) {
    uVar5 = *(undefined8 *)puVar3;
    puStack_a0 = puVar2 + 0x10;
    param_1[0x480] = param_1[0x480] | 2;
    local_a8 = &local_f8;
    local_b8 = param_1 + 0x480;
    pbStack_70 = param_1 + 0x490;
    local_c0[0] = local_c0[0] & 0xffff0000;
    local_b0 = 0;
    local_98 = "Theremin_Normal";
    local_88 = "Theremin_Normal";
    local_78 = "ThereminObject";
    local_c8 = param_1 + 0x223b0;
    puStack_90 = puStack_a0;
    puStack_80 = puStack_a0;
    FUN_03839ca0(uVar5,local_c0,0);
  }
  return 1;
}

