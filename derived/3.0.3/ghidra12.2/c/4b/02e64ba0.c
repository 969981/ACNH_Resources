
void FUN_02e64ba0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  byte local_18c [4];
  undefined *local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  long local_178;
  byte local_16c [4];
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined2 local_d0;
  undefined **local_c8;
  char *pcStack_c0;
  int local_a4;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  long local_78;
  byte local_6c [12];
  
  puVar2 = PTR_DAT_04bb43c0;
  local_168 = *(undefined4 *)(param_1 + 0x57b88);
  local_164 = *(undefined4 *)(param_1 + 0x57b8c);
  if (*(short *)(param_1 + 0x57b88) == -2) {
    return;
  }
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_168);
  puVar3 = PTR_DAT_04bc0510;
  lVar12 = *(long *)puVar2;
  if (lVar12 == 0) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
  if (*(uint *)(lVar11 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_16c[0] = *(byte *)(param_1 + 0x1f8);
  local_178 = 0;
  if (7 < local_16c[0]) {
    local_16c[0] = 0xff;
  }
  local_180 = local_168;
  uStack_17c = local_164;
  local_188 = PTR_DAT_04bc0510 + 0x10;
  uVar4 = FUN_0277d6c4(&local_180);
  if (*(long *)puVar2 != 0) {
    lVar11 = *(long *)(lVar12 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_168);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), lVar11 != 0)) {
        local_178 = lVar11;
      }
    }
  }
  iVar5 = FUN_01aed730(&local_188);
  FUN_02776f7c(local_16c,iVar5 / 100);
  lVar11 = *(long *)PTR_DAT_04bb32e8;
  local_160 = (undefined **)CONCAT44(local_160._4_4_,*(undefined4 *)(lVar11 + 0x4060));
  nn::time::IsValidDate
            ((uint)*(ushort *)(lVar11 + 0x4060),(uint)*(byte *)(lVar11 + 0x4062),
             (uint)*(byte *)(lVar11 + 0x4063));
  FUN_01b4ac40(&local_168,&local_160,local_16c);
  local_18c[0] = local_16c[0];
  if (7 < local_16c[0]) {
    local_18c[0] = 0xff;
  }
  lVar11 = FUN_02583354(DAT_055021a0,local_18c,1);
  if (lVar11 == 0) goto LAB_02e64e90;
  plVar1 = (long *)(lVar11 + 0x18300);
  lVar12 = *(long *)(lVar11 + 0x18320);
  if (lVar12 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      lVar12 = *(long *)(lVar11 + 0x18320);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar12 == 0) goto LAB_02e64df8;
    }
    plVar8 = *(long **)(lVar12 + 0x20);
    if (plVar8 != (long *)0x0) {
      local_160 = (undefined **)*plVar1;
      local_158 = *(char **)(lVar11 + 0x18308);
      local_150 = 0x1000;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_160);
    }
  }
LAB_02e64df8:
  local_160 = &PTR_LAB_048f9770;
  local_158 = "HasBoughtFromHotelCatalog";
  iVar5 = FUN_0274bbb0(*(long *)(lVar11 + 0x18308) + *plVar1,&local_160);
  if (iVar5 == 0) {
    if ((*(long *)(lVar11 + 0x18320) != 0) &&
       (plVar8 = *(long **)(*(long *)(lVar11 + 0x18320) + 0x20), plVar8 != (long *)0x0)) {
      local_160 = (undefined **)*plVar1;
      local_158 = *(char **)(lVar11 + 0x18308);
      local_150 = 0x1000;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_160);
    }
    local_160 = &PTR_LAB_048f9770;
    local_158 = "HasBoughtFromHotelCatalog";
    FUN_0274c120(*(long *)(lVar11 + 0x18308) + *plVar1,&local_160,1,local_16c);
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar11 + 0x18320) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar11 + 0x18320) + 0x18), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
LAB_02e64e90:
  local_78 = 0;
  *(int *)(param_1 + 0x57bc4) = *(int *)(param_1 + 0x57bc4) + 1;
  local_88 = puVar3 + 0x10;
  lVar11 = *(long *)puVar2;
  local_80 = local_168;
  uStack_7c = local_164;
  uVar4 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar2 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_168);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), lVar11 != 0)) {
        local_78 = lVar11;
      }
    }
  }
  FUN_025d6bd4(&local_c8,(byte *)(param_1 + 0x1f8));
  local_160 = (undefined **)0x0;
  local_158 = (char *)0x0;
  FUN_00bdc3cc(&local_150);
  local_d0 = 0;
  local_160 = (undefined **)CONCAT44(local_160._4_4_,0x14);
  local_150 = CONCAT44(local_164,local_168);
  iVar5 = FUN_01aed730(&local_88);
  local_158 = (char *)CONCAT44(1,(undefined4)local_158);
  local_160._4_4_ = iVar5 / 100;
  FUN_025d74cc(&local_c8,&local_160);
  local_c8 = (undefined **)(PTR_DAT_04bc3410 + 0x10);
  iVar5 = FUN_025d79cc(&local_c8);
  if (((iVar5 == -1) || (local_160._0_4_ = (*(code *)local_c8[4])(&local_c8), 0xc < (int)local_160))
     && (local_a4 == 0)) {
    local_a4 = 1;
  }
  FUN_02601530(&local_c8);
  local_6c[0] = *(byte *)(param_1 + 0x1f8);
  local_160 = (undefined **)(puVar3 + 0x10);
  lVar11 = *(long *)puVar2;
  local_150 = 0;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  local_158 = (char *)CONCAT44(local_164,local_168);
  uVar4 = FUN_0277d6c4(&local_158);
  if (*(long *)puVar2 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar11 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(&local_168);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
         (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8), lVar11 != 0)) {
        local_150 = lVar11;
      }
    }
  }
  uVar10 = DAT_05335028;
  local_c8 = &PTR_LAB_048f9770;
  pcStack_c0 = "PE_HotelShop_Catalog_New";
  uVar6 = FUN_006bd550("PE_HotelShop_Catalog_New",0);
  local_88._0_4_ = uVar6;
  uVar10 = FUN_01b5b4b0(uVar10,&local_88);
  FUN_01b5e0b0(&local_c8,&local_168,uVar10,local_6c,0);
  uVar10 = DAT_05335028;
  local_c8 = &PTR_LAB_048f9770;
  pcStack_c0 = "PE_HotelShop_Catalog_HighPrice";
  uVar6 = FUN_006bd550("PE_HotelShop_Catalog_HighPrice",0);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar6);
  uVar10 = FUN_01b5b4b0(uVar10,&local_88);
  FUN_01b5e0b0(&local_c8,&local_168,uVar10,local_6c,0);
  iVar5 = FUN_01aed730(&local_160);
  FUN_01b67430(10,iVar5 / 100,local_6c);
  return;
}

