
undefined8 FUN_029bb1e0(long *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  void *pvVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  int iVar15;
  float fVar16;
  undefined *local_108;
  undefined *puStack_100;
  undefined *local_f8;
  undefined *puStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  byte *local_c0;
  undefined8 uStack_b8;
  undefined **local_b0;
  undefined *local_a8;
  char *local_a0;
  undefined *puStack_98;
  undefined8 *local_90;
  undefined *puStack_88;
  char *local_80;
  long *plStack_78;
  
  puVar5 = PTR_DAT_04bb2020;
  pbVar13 = (byte *)(param_1 + 0xd3ce);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_c0 = (byte *)0x409d2fb;
  local_c8 = puVar1;
  lVar8 = FUN_038c9744(0,&local_c8,*param_2,8,1,0);
  *param_1 = lVar8;
  FUN_029b72f8(param_1 + 1,&local_c8);
  local_c8 = (undefined *)0x0;
  FUN_029b2000(param_1 + 6,&local_c8);
  *(long **)PTR_DAT_04bc3ec8 = param_1;
  *(long **)PTR_DAT_04bc3ed0 = param_1 + 1;
  puVar7 = PTR_DAT_04bcb3d8;
  puVar6 = PTR_DAT_04bb2120;
  local_f8 = PTR_DAT_04bb2120;
  local_e8 = PTR_DAT_04bb2120;
  uStack_e0 = 0;
  local_d0 = 0;
  local_108 = PTR_DAT_04bb3cd8 + 0x10;
  local_d8 = 1;
  puStack_100 = puVar1;
  puStack_f0 = puVar1;
  if ((*pbVar13 >> 1 & 1) == 0) {
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    *pbVar13 = *pbVar13 | 2;
    local_b0 = &local_108;
    local_a0 = "Doubutsugo_Aneki";
    plStack_78 = param_1 + 0xd3d0;
    uStack_b8 = 0;
    local_90 = &DAT_0407ebb1;
    local_80 = "SimpleObject";
    local_c0 = pbVar13;
    local_a8 = puVar1;
    puStack_98 = puVar1;
    puStack_88 = puVar1;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
  }
  pbVar13 = (byte *)(param_1 + 0xd3d4);
  if ((*pbVar13 >> 1 & 1) == 0) {
    uStack_b8 = 0;
    *pbVar13 = *pbVar13 | 2;
    local_b0 = &local_108;
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    local_a8 = puVar5 + 0x10;
    local_a0 = "Doubutsugo_Bonyari";
    plStack_78 = param_1 + 0xd3d6;
    local_90 = &DAT_0407ebb1;
    local_80 = "SimpleObject";
    local_c0 = pbVar13;
    puStack_98 = local_a8;
    puStack_88 = local_a8;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
  }
  pbVar13 = (byte *)(param_1 + 0xd3da);
  if ((*pbVar13 >> 1 & 1) == 0) {
    uStack_b8 = 0;
    *pbVar13 = *pbVar13 | 2;
    local_b0 = &local_108;
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    local_a8 = puVar5 + 0x10;
    local_a0 = "Doubutsugo_Futsu";
    plStack_78 = param_1 + 0xd3dc;
    local_90 = &DAT_0407ebb1;
    local_80 = "SimpleObject";
    local_c0 = pbVar13;
    puStack_98 = local_a8;
    puStack_88 = local_a8;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
  }
  pbVar13 = (byte *)(param_1 + 0xd3e0);
  if ((*pbVar13 >> 1 & 1) == 0) {
    uStack_b8 = 0;
    *pbVar13 = *pbVar13 | 2;
    local_b0 = &local_108;
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    local_a8 = puVar5 + 0x10;
    local_a0 = "Doubutsugo_Genki";
    plStack_78 = param_1 + 0xd3e2;
    local_90 = &DAT_0407ebb1;
    local_80 = "SimpleObject";
    local_c0 = pbVar13;
    puStack_98 = local_a8;
    puStack_88 = local_a8;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
  }
  pbVar13 = (byte *)(param_1 + 0xd3f2);
  pbVar14 = (byte *)(param_1 + 0xd3e6);
  if ((*pbVar14 >> 1 & 1) == 0) {
    uStack_b8 = 0;
    *pbVar14 = *pbVar14 | 2;
    local_b0 = &local_108;
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    local_a8 = puVar5 + 0x10;
    local_a0 = "Doubutsugo_Hakihaki";
    plStack_78 = param_1 + 0xd3e8;
    local_90 = &DAT_0407ebb1;
    local_80 = "SimpleObject";
    local_c0 = pbVar14;
    puStack_98 = local_a8;
    puStack_88 = local_a8;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
    bVar4 = *(byte *)(param_1 + 0xd3ec);
  }
  else {
    bVar4 = *(byte *)(param_1 + 0xd3ec);
  }
  if ((bVar4 >> 1 & 1) == 0) {
    local_c0 = (byte *)(param_1 + 0xd3ec);
    local_b0 = &local_108;
    *local_c0 = bVar4 | 2;
    local_c8._2_6_ = (undefined6)((ulong)local_c8 >> 0x10);
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    local_a8 = puVar5 + 0x10;
    local_a0 = "Doubutsugo_Kiza";
    local_90 = &DAT_0407ebb1;
    plStack_78 = param_1 + 0xd3ee;
    uStack_b8 = 0;
    local_80 = "SimpleObject";
    puStack_98 = local_a8;
    puStack_88 = local_a8;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
    bVar4 = *pbVar13;
  }
  else {
    bVar4 = *pbVar13;
  }
  if ((bVar4 >> 1 & 1) == 0) {
    *pbVar13 = bVar4 | 2;
    local_a8 = puVar5 + 0x10;
    local_c8._2_6_ = (undefined6)((ulong)local_c8 >> 0x10);
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    local_b0 = &local_108;
    local_a0 = "Doubutsugo_Kowai";
    plStack_78 = param_1 + 0xd3f4;
    uStack_b8 = 0;
    local_80 = "SimpleObject";
    local_90 = &DAT_0407ebb1;
    local_c0 = pbVar13;
    puStack_98 = local_a8;
    puStack_88 = local_a8;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
  }
  pbVar13 = (byte *)(param_1 + 0xd3f8);
  if ((*pbVar13 >> 1 & 1) == 0) {
    uStack_b8 = 0;
    *pbVar13 = *pbVar13 | 2;
    local_b0 = &local_108;
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    local_a8 = puVar5 + 0x10;
    local_a0 = "Doubutsugo_Otona";
    plStack_78 = param_1 + 0xd3fa;
    local_90 = &DAT_0407ebb1;
    local_80 = "SimpleObject";
    local_c0 = pbVar13;
    puStack_98 = local_a8;
    puStack_88 = local_a8;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
  }
  pbVar13 = (byte *)(param_1 + 0xd3fe);
  if ((*pbVar13 >> 1 & 1) == 0) {
    *pbVar13 = *pbVar13 | 2;
    local_a8 = puVar5 + 0x10;
    local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
    local_b0 = &local_108;
    local_a0 = "Doubutsugo_Ghost";
    local_90 = &DAT_0407ebb1;
    plStack_78 = param_1 + 0xd400;
    uStack_b8 = 0;
    local_80 = "SimpleObject";
    local_c0 = pbVar13;
    puStack_98 = local_a8;
    puStack_88 = local_a8;
    FUN_03839ca0(*(undefined8 *)puVar7,&local_c8,0);
  }
  puVar7 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  if (0 < (int)param_1[0x36d]) {
    iVar15 = 0;
    do {
      lVar8 = *(long *)puVar1;
      if (lVar8 == 0) {
        pvVar11 = malloc(2);
      }
      else {
        plVar9 = (long *)*param_1;
        if (plVar9 == (long *)0x0) {
          lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
          plVar9 = (long *)(lVar8 + 8);
          if (lVar10 != 0) {
            plVar9 = (long *)(lVar10 + 0xa8);
          }
          plVar9 = (long *)*plVar9;
          pvVar11 = (void *)0x0;
          if (plVar9 == (long *)0x0) goto LAB_029bb5b8;
        }
        pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,2,8);
      }
LAB_029bb5b8:
      iVar2 = (int)param_1[0x36e];
      iVar12 = (int)param_1[0x36d];
      if (iVar2 < iVar12) {
        *(int *)(param_1 + 0x36e) = iVar2 + 1;
        iVar2 = *(int *)((long)param_1 + 0x1b6c) + iVar2;
        iVar3 = 0;
        if (iVar12 <= iVar2) {
          iVar3 = iVar12;
        }
        *(void **)(param_1[0x36c] + (long)(iVar2 - iVar3) * 8) = pvVar11;
        iVar12 = (int)param_1[0x36d];
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < iVar12);
  }
  lVar8 = 0xf21;
  *(undefined4 *)(param_1 + 0x78c) = 1;
  param_1[0x78d] = 2;
  param_1[0xb9c] = (long)param_1;
  param_1[0xb9d] = 0;
  do {
    fVar16 = cosf(((float)((int)lVar8 + -0xf21) * 6.2831855) / 2047.0);
    *(float *)((long)param_1 + lVar8 * 4) = fVar16 * -0.5 + 0.5;
    lVar8 = lVar8 + 1;
  } while (lVar8 != 0x1721);
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    pvVar11 = malloc(0xd78);
  }
  else {
    plVar9 = (long *)*param_1;
    if (plVar9 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar8 + 8);
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0xd78,8);
  }
  FUN_029bd8e0();
  local_c8 = (undefined *)*param_1;
  param_1[0x36b] = (long)pvVar11;
  FUN_029bdbf0(pvVar11,&local_c8);
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    pvVar11 = malloc(0x188);
  }
  else {
    plVar9 = (long *)*param_1;
    if (plVar9 == (long *)0x0) {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar9 = (long *)(lVar8 + 8);
      if (lVar10 != 0) {
        plVar9 = (long *)(lVar10 + 0xa8);
      }
      plVar9 = (long *)*plVar9;
    }
    pvVar11 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,0x188,8);
  }
  local_c0 = (byte *)0x408dbc9;
  local_c8 = puVar5 + 0x10;
  FUN_03f433b0(pvVar11,&local_c8,*param_1,0x11,0,0x7fffffff,0x50000,0x20);
  local_c0 = (byte *)*param_1;
  local_a0 = puVar6;
  param_1[0x76f] = (long)pvVar11;
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,0xffffffff);
  local_c8 = (undefined *)CONCAT44(1,(undefined4)local_c8);
  local_c8 = (undefined *)CONCAT62(local_c8._2_6_,1);
  uStack_b8 = 0;
  local_a8 = puVar5 + 0x10;
  FUN_03f4388c(pvVar11,&local_c8);
  lVar8 = param_1[0x76f];
  local_108 = (undefined *)CONCAT44(local_108._4_4_,2);
  *(undefined4 *)(lVar8 + 0xd0) = 4;
  nn::os::GetThreadAvailableCoreMask();
  nn::os::SetThreadCoreMask(*(ThreadType **)(lVar8 + 0xe8),-1,4);
  (**(code **)(*(long *)param_1[0x76f] + 0x30))();
  (**(code **)(*(long *)*param_1 + 0x28))();
  param_1[0x784] = (long)param_1;
  param_1[0x785] = (long)&LAB_029bb8e0;
  param_1[0x786] = 0;
  param_1[0x788] = (long)param_1;
  param_1[0x789] = (long)&LAB_029bc9b8;
  param_1[0x78a] = 0;
  return 1;
}

