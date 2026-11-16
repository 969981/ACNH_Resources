
void FUN_029e9834(long param_1,char *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *local_f0;
  undefined **ppuStack_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  byte *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  char *local_80;
  undefined *puStack_78;
  char *local_70;
  undefined *puStack_68;
  char *local_60;
  long lStack_58;
  
  puVar5 = (undefined1 *)CONCAT44(local_90._4_4_,(undefined4)local_90);
  local_90 = &local_f0;
  *(char *)(param_1 + 9) = *param_2;
  if (*(char *)(param_1 + 8) != '\0') {
    *(undefined1 *)(param_1 + 8) = 0;
    puVar2 = PTR_DAT_04bcb3d8;
    puVar1 = PTR_DAT_04bb2020;
    local_c0 = 0;
    uStack_b8 = 0;
    bVar3 = *(byte *)(param_1 + 0x10);
    ppuStack_e8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_d0 = PTR_DAT_04bb2120;
    uStack_c8 = 0;
    local_f0 = PTR_DAT_04bb4370 + 0x10;
    local_e0 = PTR_DAT_04bb2120;
    local_b0 = 0;
    puStack_d8 = (undefined *)ppuStack_e8;
    if ((bVar3 >> 1 & 1) == 0) {
      uVar8 = *(undefined8 *)PTR_DAT_04bcb3d8;
      local_98 = (undefined *)0x0;
      lStack_58 = param_1 + 0x20;
      local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffff0000);
      *(byte *)(param_1 + 0x10) = bVar3 | 2;
      local_80 = "MuseumCafeWindow";
      local_70 = "MuseumCafeWindow";
      local_60 = "WindowObject";
      local_a0 = (byte *)(param_1 + 0x10);
      puStack_78 = (undefined *)ppuStack_e8;
      puStack_68 = (undefined *)ppuStack_e8;
      uStack_88 = (undefined *)ppuStack_e8;
      FUN_03839ca0(uVar8,&local_a8,0);
      puVar5 = (undefined1 *)local_90;
    }
    bVar3 = *(byte *)(param_1 + 0x40);
    local_90 = (undefined **)puVar5;
    if ((bVar3 >> 1 & 1) == 0) {
      uVar8 = *(undefined8 *)puVar2;
      *(byte *)(param_1 + 0x40) = bVar3 | 2;
      puStack_78 = puVar1 + 0x10;
      local_98 = (undefined *)0x0;
      lStack_58 = param_1 + 0x50;
      local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffff0000);
      local_80 = "MuseumCafeWindow";
      local_70 = "MuseumCafeWindow";
      local_60 = "WindowObject";
      local_a0 = (byte *)(param_1 + 0x40);
      puStack_68 = puStack_78;
      local_90 = &local_f0;
      uStack_88 = puStack_78;
      FUN_03839ca0(uVar8,&local_a8,0);
    }
    bVar3 = *(byte *)(param_1 + 0x70);
    if ((bVar3 >> 1 & 1) == 0) {
      uVar8 = *(undefined8 *)puVar2;
      *(byte *)(param_1 + 0x70) = bVar3 | 2;
      puStack_78 = puVar1 + 0x10;
      local_98 = (undefined *)0x0;
      lStack_58 = param_1 + 0x80;
      local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffff0000);
      local_80 = "MuseumCafeWindow";
      local_70 = "MuseumCafeWindow";
      local_60 = "WindowObject";
      local_a0 = (byte *)(param_1 + 0x70);
      puStack_68 = puStack_78;
      local_90 = &local_f0;
      uStack_88 = puStack_78;
      FUN_03839ca0(uVar8,&local_a8,0);
    }
    bVar3 = *(byte *)(param_1 + 0xa0);
    if ((bVar3 >> 1 & 1) == 0) {
      uVar8 = *(undefined8 *)puVar2;
      *(byte *)(param_1 + 0xa0) = bVar3 | 2;
      puStack_78 = puVar1 + 0x10;
      local_98 = (undefined *)0x0;
      lStack_58 = param_1 + 0xb0;
      local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffff0000);
      local_80 = "MuseumCafeWindow";
      local_70 = "MuseumCafeWindow";
      local_60 = "WindowObject";
      local_a0 = (byte *)(param_1 + 0xa0);
      puStack_68 = puStack_78;
      local_90 = &local_f0;
      uStack_88 = puStack_78;
      FUN_03839ca0(uVar8,&local_a8,0);
    }
    bVar3 = *(byte *)(param_1 + 0xd0);
    if ((bVar3 >> 1 & 1) == 0) {
      uVar8 = *(undefined8 *)puVar2;
      *(byte *)(param_1 + 0xd0) = bVar3 | 2;
      puStack_78 = puVar1 + 0x10;
      local_98 = (undefined *)0x0;
      lStack_58 = param_1 + 0xe0;
      local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffff0000);
      local_80 = "MuseumCafeWindow";
      local_70 = "MuseumCafeWindow";
      local_60 = "WindowObject";
      local_a0 = (byte *)(param_1 + 0xd0);
      puStack_68 = puStack_78;
      local_90 = &local_f0;
      uStack_88 = puStack_78;
      FUN_03839ca0(uVar8,&local_a8,0);
    }
    puVar5 = (undefined1 *)local_90;
    if ((*(byte *)(param_1 + 0x100) >> 1 & 1) == 0) {
      uVar8 = *(undefined8 *)puVar2;
      puStack_78 = puVar1 + 0x10;
      *(byte *)(param_1 + 0x100) = *(byte *)(param_1 + 0x100) | 2;
      local_a0 = (byte *)(param_1 + 0x100);
      lStack_58 = param_1 + 0x110;
      local_a8 = (undefined *)((ulong)local_a8 & 0xffffffffffff0000);
      local_98 = (undefined *)0x0;
      local_80 = "MuseumCafeWindow";
      local_70 = "MuseumCafeWindow";
      local_60 = "WindowObject";
      puStack_68 = puStack_78;
      local_90 = &local_f0;
      uStack_88 = puStack_78;
      FUN_03839ca0(uVar8,&local_a8,0);
      puVar5 = (undefined1 *)local_90;
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb2720;
  puVar1 = uStack_88;
  if (lVar9 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      local_90 = (undefined **)puVar5;
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar7 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
      puVar5 = (undefined1 *)local_90;
      puVar1 = uStack_88;
    }
  }
  uStack_88._4_4_ = (undefined4)((ulong)puVar1 >> 0x20);
  if (*(int *)(FUN_0011e5e0 + *(long *)PTR_DAT_04bb26a8) == -1) {
    bVar6 = false;
  }
  else {
    bVar6 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x11e610) != 0;
  }
  lVar9 = param_1 + 0x10;
  bVar4 = *param_2 == '\0' || *(int *)(puVar10 + 7) != 0x11889761;
  if ((bool)((*param_2 != '\0' && *(int *)(puVar10 + 7) == 0x11889761) | bVar6)) {
    local_90 = (undefined **)puVar5;
    uStack_88 = puVar1;
    if ((*(long *)(param_1 + 0x30) != 0) && (*(int *)(param_1 + 0x28) == 1)) {
      FUN_03f459a0(param_1 + 0x20);
    }
    FUN_038386d0(lVar9);
    puVar2 = PTR_DAT_04bb4388;
    local_a0 = (byte *)CONCAT71(local_a0._1_7_,bVar4);
    local_90._0_4_ = CONCAT31(local_90._1_3_,1);
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_98 = &DAT_0417e2cc;
    local_f0 = (undefined *)0x0;
    puVar1 = PTR_DAT_04bb4388 + 0x10;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    FUN_03838950(lVar9,&local_f0);
    if ((*(long *)(param_1 + 0x60) != 0) && (*(int *)(param_1 + 0x58) == 1)) {
      FUN_03f459a0(param_1 + 0x50);
    }
    FUN_038386d0(param_1 + 0x40);
    local_90._0_4_ = CONCAT31(local_90._1_3_,1);
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_a0 = (byte *)CONCAT71(local_a0._1_7_,bVar4);
    local_98 = &DAT_0417e2d8;
    local_f0 = (undefined *)0x0;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    FUN_03838950(param_1 + 0x40,&local_f0);
    if ((*(long *)(param_1 + 0x90) != 0) && (*(int *)(param_1 + 0x88) == 1)) {
      FUN_03f459a0(param_1 + 0x80);
    }
    FUN_038386d0(param_1 + 0x70);
    local_a0 = (byte *)CONCAT71(local_a0._1_7_,bVar4);
    puVar1 = puVar2 + 0x10;
    local_90._0_4_ = CONCAT31(local_90._1_3_,1);
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_98 = &DAT_0417e2e4;
    local_f0 = (undefined *)0x0;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    FUN_03838950(param_1 + 0x70,&local_f0);
    if ((*(long *)(param_1 + 0xc0) != 0) && (*(int *)(param_1 + 0xb8) == 1)) {
      FUN_03f459a0(param_1 + 0xb0);
    }
    FUN_038386d0(param_1 + 0xa0);
    local_90._0_4_ = CONCAT31(local_90._1_3_,1);
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_a0 = (byte *)CONCAT71(local_a0._1_7_,bVar4);
    local_98 = &DAT_0417e2f0;
    local_f0 = (undefined *)0x0;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    FUN_03838950(param_1 + 0xa0,&local_f0);
    if ((*(long *)(param_1 + 0xf0) != 0) && (*(int *)(param_1 + 0xe8) == 1)) {
      FUN_03f459a0(param_1 + 0xe0);
    }
    FUN_038386d0(param_1 + 0xd0);
    puVar2 = puVar2 + 0x10;
    ppuStack_e8 = &local_a8;
    local_90._0_4_ = CONCAT31(local_90._1_3_,1);
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_a0 = (byte *)CONCAT71(local_a0._1_7_,bVar4);
    local_98 = &DAT_0417e2fc;
    local_f0 = (undefined *)0x0;
    local_a8 = puVar2;
    FUN_03838950(param_1 + 0xd0,&local_f0);
    if ((*(long *)(param_1 + 0x120) != 0) && (*(int *)(param_1 + 0x118) == 1)) {
      FUN_03f459a0(param_1 + 0x110);
    }
    FUN_038386d0(param_1 + 0x100);
    local_a8 = puVar2;
  }
  else {
    local_90._1_3_ = (undefined3)((ulong)puVar5 >> 8);
    local_90._0_1_ = 1;
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_98 = &DAT_0417e2cc;
    local_f0 = (undefined *)0x0;
    puVar1 = PTR_DAT_04bb4388 + 0x10;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    local_a0._0_1_ = bVar4;
    FUN_03838950(lVar9,&local_f0);
    local_90._0_1_ = 1;
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_98 = &DAT_0417e2d8;
    local_f0 = (undefined *)0x0;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    local_a0._0_1_ = bVar4;
    FUN_03838950(param_1 + 0x40,&local_f0);
    local_90._0_1_ = 1;
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_98 = &DAT_0417e2e4;
    local_f0 = (undefined *)0x0;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    local_a0._0_1_ = bVar4;
    FUN_03838950(param_1 + 0x70,&local_f0);
    local_90._0_1_ = 1;
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_98 = &DAT_0417e2f0;
    local_f0 = (undefined *)0x0;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    local_a0._0_1_ = bVar4;
    FUN_03838950(param_1 + 0xa0,&local_f0);
    local_90._0_1_ = 1;
    local_90._4_4_ = 0;
    uStack_88._0_4_ = 0x3f800000;
    local_98 = &DAT_0417e2fc;
    local_f0 = (undefined *)0x0;
    ppuStack_e8 = &local_a8;
    local_a8 = puVar1;
    local_a0._0_1_ = bVar4;
    FUN_03838950(param_1 + 0xd0,&local_f0);
    local_a8 = puVar1;
  }
  uStack_88._0_4_ = 0x3f800000;
  local_90._4_4_ = 0;
  local_90._0_4_ = CONCAT31(local_90._1_3_,1);
  local_98 = &DAT_0417e308;
  local_a0 = (byte *)CONCAT71(local_a0._1_7_,bVar4);
  ppuStack_e8 = &local_a8;
  local_f0 = (undefined *)0x0;
  FUN_03838950(param_1 + 0x100,&local_f0);
  return;
}

