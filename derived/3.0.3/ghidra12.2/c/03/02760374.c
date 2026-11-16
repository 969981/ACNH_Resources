
undefined8 FUN_02760374(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  long local_120;
  undefined4 local_118 [2];
  undefined8 *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  undefined4 local_b8 [2];
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar4 = PTR_DAT_04bc3850;
  uVar11 = DAT_0417b5e4;
  local_b0 = &local_a8;
  local_98 = 0;
  local_b8[0] = 2;
  lVar13 = *param_1;
  lVar12 = param_1[0xe];
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = PTR_DAT_04bc3850 + 0x10;
  local_c0 = 0;
  local_a8 = 0xd23e4730;
  local_a0 = DAT_0417b5e4;
  local_e8 = (undefined *)0x0;
  local_150 = (undefined *)0x0;
  local_d0 = 0;
  local_c8 = 0;
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  local_140 = 0;
  FUN_0272d760(lVar13 + 8,&local_150,local_b8);
  if (((local_150 != (undefined *)0x0) && (*(int *)(local_150 + 0x2c) == 1)) &&
     (*(long *)(lVar13 + 0x30) != 0)) {
    local_e8 = local_150;
    local_e0 = local_148;
    local_d8 = local_140;
    local_d0 = local_138;
    local_c8 = local_130;
    local_c0 = *(long *)(lVar13 + 0x30);
  }
  lVar7 = FUN_027ebd68(&local_f0);
  local_150 = *(undefined **)(lVar7 + 8);
  local_148 = *(long *)(lVar7 + 0x10);
  iVar6 = FUN_0272e334(&local_150,0xf7f0a936);
  if (iVar6 == -1) {
    puVar9 = (undefined8 *)0x0;
  }
  else {
    lVar7 = (**(code **)(local_f0 + 0x18))(&local_f0);
    puVar9 = (undefined8 *)0x0;
    if (lVar7 != 0) {
      uVar8 = (**(code **)(local_f0 + 0x20))(&local_f0);
      puVar9 = (undefined8 *)FUN_0272e550(lVar7,uVar8,iVar6,0,0);
    }
  }
  puVar5 = PTR_DAT_04bc3858;
  uVar8 = DAT_0417b5fc;
  local_f8 = 0;
  local_118[0] = 2;
  local_110 = &local_108;
  local_108 = 0x9e6968f4;
  local_100 = DAT_0417b5fc;
  local_140 = 0;
  local_138 = 0;
  local_150 = PTR_DAT_04bc3858 + 0x10;
  local_130 = 0;
  local_128 = 0;
  local_120 = 0;
  local_90 = 0;
  local_148 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_0272d760(lVar12 + 8,&local_90,local_118);
  if (((local_90 != 0) && (*(int *)(local_90 + 0x2c) == 1)) && (*(long *)(lVar12 + 0x30) != 0)) {
    local_148 = local_90;
    local_140 = local_88;
    local_138 = uStack_80;
    local_130 = local_78;
    local_128 = uStack_70;
    local_120 = *(long *)(lVar12 + 0x30);
  }
  lVar7 = FUN_027ebd78(&local_150);
  local_90 = *(long *)(lVar7 + 8);
  local_88 = *(undefined8 *)(lVar7 + 0x10);
  iVar6 = FUN_0272e334(&local_90,0xf7f0a936);
  if (((iVar6 != -1) &&
      (puVar10 = (undefined8 *)FUN_0272e550(&local_148,local_120,iVar6,0,0),
      puVar9 != (undefined8 *)0x0)) && (puVar10 != (undefined8 *)0x0)) {
    *puVar10 = *puVar9;
    uVar1 = puVar9[1];
    uVar2 = puVar9[2];
    uVar3 = puVar9[4];
    puVar10[3] = puVar9[3];
    puVar10[4] = uVar3;
    puVar10[1] = uVar1;
    puVar10[2] = uVar2;
  }
  local_c0 = 0;
  local_a8 = 0xd23e4730;
  local_b8[0] = 2;
  local_b0 = &local_a8;
  local_f0 = puVar4 + 0x10;
  local_a0 = uVar11;
  local_98 = 0;
  local_150 = (undefined *)0x0;
  local_e8 = (undefined *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_138 = 0;
  local_130 = 0;
  local_148 = 0;
  local_140 = 0;
  FUN_0272d760(lVar13 + 8,&local_150,local_b8);
  if (((local_150 != (undefined *)0x0) && (*(int *)(local_150 + 0x2c) == 1)) &&
     (*(long *)(lVar13 + 0x30) != 0)) {
    local_e8 = local_150;
    local_e0 = local_148;
    local_d8 = local_140;
    local_d0 = local_138;
    local_c8 = local_130;
    local_c0 = *(long *)(lVar13 + 0x30);
  }
  lVar13 = FUN_027ebd68(&local_f0);
  local_150 = *(undefined **)(lVar13 + 8);
  local_148 = *(long *)(lVar13 + 0x10);
  iVar6 = FUN_0272e334(&local_150,0x84b5842);
  if (iVar6 != -1) {
    lVar13 = (**(code **)(local_f0 + 0x18))(&local_f0);
    if (lVar13 != 0) {
      uVar11 = (**(code **)(local_f0 + 0x20))(&local_f0);
      puVar9 = (undefined8 *)FUN_0272e550(lVar13,uVar11,iVar6,0,0);
      goto LAB_027606a8;
    }
  }
  puVar9 = (undefined8 *)0x0;
LAB_027606a8:
  local_120 = 0;
  local_108 = 0x9e6968f4;
  local_118[0] = 2;
  local_110 = &local_108;
  local_150 = puVar5 + 0x10;
  local_100 = uVar8;
  local_f8 = 0;
  local_90 = 0;
  local_148 = 0;
  local_140 = 0;
  local_138 = 0;
  local_130 = 0;
  local_128 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  FUN_0272d760(lVar12 + 8,&local_90,local_118);
  if (((local_90 != 0) && (*(int *)(local_90 + 0x2c) == 1)) && (*(long *)(lVar12 + 0x30) != 0)) {
    local_148 = local_90;
    local_140 = local_88;
    local_138 = uStack_80;
    local_130 = local_78;
    local_128 = uStack_70;
    local_120 = *(long *)(lVar12 + 0x30);
  }
  lVar12 = FUN_027ebd78(&local_150);
  local_90 = *(long *)(lVar12 + 8);
  local_88 = *(undefined8 *)(lVar12 + 0x10);
  iVar6 = FUN_0272e334(&local_90,0x84b5842);
  if (((iVar6 != -1) &&
      (puVar10 = (undefined8 *)FUN_0272e550(&local_148,local_120,iVar6,0,0),
      puVar9 != (undefined8 *)0x0)) && (puVar10 != (undefined8 *)0x0)) {
    *puVar10 = *puVar9;
  }
  return 1;
}

