
void FUN_01a3aff0(long *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  undefined8 *puStack_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  undefined4 local_88;
  undefined *local_80;
  undefined8 local_78;
  
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b0 = "Actor";
  local_80 = local_b8;
  local_78 = param_2;
  FUN_00751ec0(param_1,&local_b8,&local_80,0);
  puVar2 = PTR_DAT_04bb31d0;
  *param_1 = (long)&PTR_FUN_049fd520;
  param_1[0x19] = (long)"mDIYScaleLimit";
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 8;
  param_1[0x18] = (long)(puVar2 + 0x10);
  plVar10 = param_1 + 5;
  lVar8 = *plVar10;
  if (*plVar10 != 0) {
    do {
      lVar7 = lVar8;
      lVar8 = *(long *)(lVar7 + 0x10);
    } while (lVar8 != 0);
    plVar10 = (long *)(lVar7 + 0x10);
  }
  *plVar10 = (long)(param_1 + 0x18);
  param_1[0x1b] = (long)param_1;
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x1c) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x18] + 0xf0))();
  *puVar5 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x1c);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x1d] = 0;
    uVar13 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x1d) = uVar13;
  }
  puVar2 = PTR_DAT_04bb60a0;
  *(uint *)(param_1 + 0x1c) = uVar4 & 0xfeffffff;
  puVar3 = (uint *)(param_1 + 0xcbf);
  plVar10 = param_1 + 0x1e;
  *plVar10 = (long)(puVar2 + 0x10);
  local_b8 = PTR_DAT_04bb2020;
  param_1[0x1f] = (long)"mDIYArray";
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  local_b8 = local_b8 + 0x10;
  pcStack_b0 = "mDIYArray";
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  *(undefined4 *)(param_1 + 0x22) = 8;
  local_88 = 8;
  local_a8 = local_b8;
  local_98 = local_b8;
  (**(code **)(*param_1 + 0x140))(param_1,plVar10);
  puVar1 = PTR_DAT_04bbfe30;
  param_1[0x43] = (long)(param_1 + 0x5d);
  param_1[0x5d] = (long)(param_1 + 0x77);
  param_1[0x24b] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = (long)(param_1 + 0x29);
  *plVar10 = (long)(puVar1 + 0x10);
  param_1[0x77] = (long)(param_1 + 0x91);
  param_1[0x91] = (long)(param_1 + 0xab);
  param_1[0xab] = (long)(param_1 + 0xc5);
  param_1[0xc5] = (long)(param_1 + 0xdf);
  param_1[0xdf] = (long)(param_1 + 0xf9);
  param_1[0xf9] = (long)(param_1 + 0x113);
  param_1[0x113] = (long)(param_1 + 0x12d);
  param_1[0x12d] = (long)(param_1 + 0x147);
  param_1[0x147] = (long)(param_1 + 0x161);
  param_1[0x161] = (long)(param_1 + 0x17b);
  param_1[0x17b] = (long)(param_1 + 0x195);
  param_1[0x195] = (long)(param_1 + 0x1af);
  param_1[0x1af] = (long)(param_1 + 0x1c9);
  param_1[0x1c9] = (long)(param_1 + 0x1e3);
  param_1[0x1e3] = (long)(param_1 + 0x1fd);
  param_1[0x1fd] = (long)(param_1 + 0x217);
  param_1[0x217] = (long)(param_1 + 0x231);
  param_1[0x28] = (long)(param_1 + 0x29);
  param_1[0x29] = (long)(param_1 + 0x43);
  param_1[0x231] = (long)(param_1 + 0x24b);
  if (param_1 + 0x265 != (long *)0x0) {
    param_1[0x25] = 0x1600000000;
    param_1[0x26] = (long)(param_1 + 0x265);
  }
  param_1[0x1e] = (long)&PTR_LAB_049fde30;
  iVar11 = 0x16;
  do {
    if ((int)param_1[0x25] < *(int *)((long)param_1 + 300)) {
      plVar9 = (long *)param_1[0x27];
      if (plVar9 != (long *)0x0) {
        param_1[0x27] = *plVar9;
      }
      FUN_01a3ae4c(plVar9,&local_b8);
      *plVar9 = (long)&PTR_LAB_049fdfb0;
      if ((int)param_1[0x25] < *(int *)((long)param_1 + 300)) {
        *(long **)(param_1[0x26] + (long)(int)param_1[0x25] * 8) = plVar9;
        *(int *)(param_1 + 0x25) = (int)param_1[0x25] + 1;
      }
    }
    else {
      plVar9 = (long *)0x0;
    }
    (**(code **)(*plVar9 + 0x38))(plVar9,plVar10);
    iVar11 = iVar11 + -1;
    *(uint *)(plVar9 + 4) = *(uint *)(plVar9 + 4) & 0xfffffffc;
  } while (iVar11 != 0);
  *(undefined2 *)(param_1 + 0x27b) = 0;
  param_1[0x27d] = (long)"mCatalogRotateSpeed";
  param_1[0x27e] = 0;
  param_1[0x27f] = 0;
  *(undefined4 *)(param_1 + 0x280) = 8;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  param_1[0x281] = 0;
  param_1[0x27c] = (long)puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x27c);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x280) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x27c] + 0xf0))(param_1 + 0x27c);
  *puVar5 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x280);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x281] = 0;
    uVar13 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x281) = uVar13;
  }
  *(uint *)(param_1 + 0x280) = uVar4 & 0xfeffffff;
  param_1[0x283] = (long)"mClampHeightThresh";
  param_1[0x284] = 0;
  param_1[0x285] = 0;
  *(undefined4 *)(param_1 + 0x286) = 8;
  param_1[0x282] = (long)puVar1;
  param_1[0x287] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x282);
  uVar13 = 0x42480000;
  if ((*(uint *)(param_1 + 0x286) & 0x800) != 0) {
    uVar13 = 0x3f5f66f3;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x282] + 0xf0))(param_1 + 0x282);
  *puVar5 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x286);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x287] = 0;
    uVar13 = 0x42480000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3f5f66f3;
    }
    *(undefined4 *)(param_1 + 0x287) = uVar13;
  }
  *(uint *)(param_1 + 0x286) = uVar4 & 0xfeffffff;
  local_b8 = PTR_DAT_04bb2020;
  param_1[0x289] = (long)"mCatalogFtrArray";
  param_1[0x28a] = 0;
  param_1[0x28b] = 0;
  *(undefined4 *)(param_1 + 0x28c) = 8;
  param_1[0x28d] = 0;
  local_b8 = local_b8 + 0x10;
  local_88 = 8;
  pcStack_b0 = "mCatalogFtrArray";
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  param_1[0x288] = (long)(puVar2 + 0x10);
  local_a8 = local_b8;
  local_98 = local_b8;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x288);
  param_1[0x290] = 0;
  param_1[0x28f] = 0;
  param_1[0x28e] = 0;
  param_1[0x291] = (long)(param_1 + 0x293);
  param_1[0x37d] = 0;
  param_1[0x293] = (long)(param_1 + 0x2ad);
  param_1[0x292] = (long)(param_1 + 0x293);
  param_1[0x2ad] = (long)(param_1 + 0x2c7);
  param_1[0x2c7] = (long)(param_1 + 0x2e1);
  param_1[0x2e1] = (long)(param_1 + 0x2fb);
  param_1[0x2fb] = (long)(param_1 + 0x315);
  param_1[0x315] = (long)(param_1 + 0x32f);
  param_1[0x32f] = (long)(param_1 + 0x349);
  param_1[0x349] = (long)(param_1 + 0x363);
  param_1[0x363] = (long)(param_1 + 0x37d);
  if (param_1 + 0x397 != (long *)0x0) {
    param_1[0x290] = (long)(param_1 + 0x397);
    *(undefined4 *)((long)param_1 + 0x147c) = 10;
  }
  param_1[0x288] = (long)&PTR_LAB_049fe140;
  iVar11 = 10;
  do {
    if ((int)param_1[0x28f] < *(int *)((long)param_1 + 0x147c)) {
      plVar10 = (long *)param_1[0x291];
      if (plVar10 != (long *)0x0) {
        param_1[0x291] = *plVar10;
      }
      FUN_01a3ae4c(plVar10,&local_b8);
      *plVar10 = (long)&PTR_LAB_049fe2c0;
      if ((int)param_1[0x28f] < *(int *)((long)param_1 + 0x147c)) {
        *(long **)(param_1[0x290] + (long)(int)param_1[0x28f] * 8) = plVar10;
        *(int *)(param_1 + 0x28f) = (int)param_1[0x28f] + 1;
      }
    }
    else {
      plVar10 = (long *)0x0;
    }
    (**(code **)(*plVar10 + 0x38))(plVar10,param_1 + 0x288);
    iVar11 = iVar11 + -1;
    *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) & 0xfffffffc;
  } while (iVar11 != 0);
  local_88 = 8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b0 = "mCatalogRugArray";
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  local_98 = puVar1;
  FUN_01a3c1f4(param_1 + 0x3a1,&local_b8,param_1);
  pcStack_b0 = "mCatalogFossilArray";
  local_88 = 8;
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  local_98 = puVar1;
  FUN_01a3c4d0(param_1 + 0x418,&local_b8,param_1);
  param_1[0x45b] = 0;
  pcStack_b0 = "mCatalogArray";
  param_1[0x45a] = (long)"mCatalogArray";
  param_1[0x459] = (long)(puVar2 + 0x10);
  param_1[0x45c] = 0;
  *(undefined4 *)(param_1 + 0x45d) = 8;
  param_1[0x45e] = 0;
  local_88 = 8;
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  local_98 = puVar1;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x459);
  puVar2 = PTR_DAT_04bbfe00;
  param_1[0x45f] = 0;
  param_1[0x464] = (long)(param_1 + 0x47e);
  param_1[0x460] = 0;
  param_1[0x461] = 0;
  param_1[0x47e] = (long)(param_1 + 0x498);
  param_1[0x6d4] = 0;
  param_1[0x459] = (long)(puVar2 + 0x10);
  param_1[0x498] = (long)(param_1 + 0x4b2);
  param_1[0x462] = (long)(param_1 + 0x464);
  param_1[0x463] = (long)(param_1 + 0x464);
  param_1[0x4b2] = (long)(param_1 + 0x4cc);
  param_1[0x4cc] = (long)(param_1 + 0x4e6);
  param_1[0x4e6] = (long)(param_1 + 0x500);
  param_1[0x500] = (long)(param_1 + 0x51a);
  param_1[0x51a] = (long)(param_1 + 0x534);
  param_1[0x534] = (long)(param_1 + 0x54e);
  param_1[0x54e] = (long)(param_1 + 0x568);
  param_1[0x568] = (long)(param_1 + 0x582);
  param_1[0x582] = (long)(param_1 + 0x59c);
  param_1[0x59c] = (long)(param_1 + 0x5b6);
  param_1[0x5b6] = (long)(param_1 + 0x5d0);
  param_1[0x5d0] = (long)(param_1 + 0x5ea);
  param_1[0x5ea] = (long)(param_1 + 0x604);
  param_1[0x604] = (long)(param_1 + 0x61e);
  param_1[0x61e] = (long)(param_1 + 0x638);
  param_1[0x638] = (long)(param_1 + 0x652);
  param_1[0x652] = (long)(param_1 + 0x66c);
  param_1[0x66c] = (long)(param_1 + 0x686);
  param_1[0x686] = (long)(param_1 + 0x6a0);
  param_1[0x6a0] = (long)(param_1 + 0x6ba);
  param_1[0x6ba] = (long)(param_1 + 0x6d4);
  if (param_1 + 0x6ee != (long *)0x0) {
    param_1[0x461] = (long)(param_1 + 0x6ee);
    param_1[0x460] = 0x1900000000;
  }
  param_1[0x459] = (long)&PTR_LAB_049fea28;
  iVar11 = 0x19;
  do {
    if ((int)param_1[0x460] < *(int *)((long)param_1 + 0x2304)) {
      plVar10 = (long *)param_1[0x462];
      if (plVar10 != (long *)0x0) {
        param_1[0x462] = *plVar10;
      }
      FUN_01a3ae4c(plVar10,&local_b8);
      *plVar10 = (long)&PTR_LAB_049feba8;
      if ((int)param_1[0x460] < *(int *)((long)param_1 + 0x2304)) {
        *(long **)(param_1[0x461] + (long)(int)param_1[0x460] * 8) = plVar10;
        *(int *)(param_1 + 0x460) = (int)param_1[0x460] + 1;
      }
    }
    else {
      plVar10 = (long *)0x0;
    }
    (**(code **)(*plVar10 + 0x38))(plVar10,param_1 + 0x459);
    iVar11 = iVar11 + -1;
    *(uint *)(plVar10 + 4) = *(uint *)(plVar10 + 4) & 0xfffffffc;
  } while (iVar11 != 0);
  param_1[0x709] = 0;
  param_1[0x708] = (long)"mMyDesignReverseRotate";
  param_1[0x70a] = 0;
  puVar2 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x70b) = 8;
  param_1[0x70c] = 0;
  param_1[0x707] = (long)(puVar2 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x707);
  puVar6 = (undefined1 *)(**(code **)(param_1[0x707] + 0xf0))(param_1 + 0x707);
  *puVar6 = 0;
  if ((*(uint *)(param_1 + 0x70b) >> 7 & 1) == 0) {
    param_1[0x70c] = 0;
    *(undefined1 *)(param_1 + 0x70c) = 0;
  }
  param_1[0x70f] = 0;
  *(uint *)(param_1 + 0x70b) = *(uint *)(param_1 + 0x70b) & 0xfeffffff;
  param_1[0x710] = 0;
  param_1[0x70e] = (long)"mMyDesignRotateSpeed";
  *(undefined4 *)(param_1 + 0x711) = 8;
  puVar2 = PTR_DAT_04bb31d0 + 0x10;
  param_1[0x712] = 0;
  param_1[0x70d] = (long)puVar2;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x70d);
  uVar13 = 0x3f800000;
  if ((*(uint *)(param_1 + 0x711) & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0x70d] + 0xf0))(param_1 + 0x70d);
  *puVar5 = uVar13;
  uVar4 = *(uint *)(param_1 + 0x711);
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0x712] = 0;
    uVar13 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0x712) = uVar13;
  }
  *(uint *)(param_1 + 0x711) = uVar4 & 0xfeffffff;
  local_88 = 8;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_b0 = "mMyDesignEditArray";
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  local_98 = puVar1;
  FUN_01a3c6b0(param_1 + 0x713,&local_b8,param_1);
  pcStack_b0 = "mMyDesignExchangeArray";
  local_88 = 8;
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  local_98 = puVar1;
  FUN_01a3c6b0(param_1 + 0x98b,&local_b8,param_1);
  pcStack_b0 = "mBridgeSlopeArray";
  local_88 = 8;
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  local_98 = puVar1;
  FUN_01a3c4d0(param_1 + 0xc03,&local_b8,param_1);
  pcStack_b0 = "mCArray";
  local_88 = 8;
  puStack_a0 = &DAT_0407ebb1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar1;
  local_a8 = puVar1;
  local_98 = puVar1;
  FUN_01a3c1f4(param_1 + 0xc44,&local_b8,param_1);
  param_1[0xcbc] = (long)"mCookingHeightThresh";
  param_1[0xcbd] = 0;
  param_1[0xcbe] = 0;
  *puVar3 = 8;
  param_1[0xcbb] = (long)puVar2;
  param_1[0xcc0] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xcbb);
  uVar13 = 0x3f800000;
  if ((*puVar3 & 0x800) != 0) {
    uVar13 = 0x3c8efa35;
  }
  puVar5 = (undefined4 *)(**(code **)(param_1[0xcbb] + 0xf0))(param_1 + 0xcbb);
  *puVar5 = uVar13;
  uVar4 = *puVar3;
  if ((uVar4 >> 7 & 1) == 0) {
    param_1[0xcc0] = 0;
    uVar13 = 0x3f800000;
    if ((uVar4 & 0x800) != 0) {
      uVar13 = 0x3c8efa35;
    }
    *(undefined4 *)(param_1 + 0xcc0) = uVar13;
  }
  *puVar3 = uVar4 & 0xfeffffff;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x800000;
  iVar11 = 0;
  do {
    iVar12 = 0x16;
    if (iVar11 < 0x16) {
      iVar12 = iVar11 + 1;
    }
    lVar8 = *(long *)(param_1[0x26] + (long)iVar11 * 8);
    *(uint *)(lVar8 + 0x50) = *(uint *)(lVar8 + 0x50) & 0xffffff9f;
    lVar8 = *(long *)(param_1[0x26] + (long)iVar11 * 8);
    *(uint *)(lVar8 + 0x88) = *(uint *)(lVar8 + 0x88) & 0xffffff9f;
    lVar8 = *(long *)(param_1[0x26] + (long)iVar11 * 8);
    *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) & 0xffffff9f;
    iVar11 = iVar12;
  } while (iVar12 != 0x16);
  *(uint *)(*(long *)param_1[0x26] + 0x50) = *(uint *)(*(long *)param_1[0x26] + 0x50) | 0x60;
  *(uint *)(*(long *)param_1[0x26] + 0x88) = *(uint *)(*(long *)param_1[0x26] + 0x88) | 0x60;
  *(uint *)(*(long *)param_1[0x26] + 0xb8) = *(uint *)(*(long *)param_1[0x26] + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x18) + 0x50) =
       *(uint *)(*(long *)(param_1[0x26] + 0x18) + 0x50) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x18) + 0x88) =
       *(uint *)(*(long *)(param_1[0x26] + 0x18) + 0x88) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x18) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x26] + 0x18) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x48) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x26] + 0x48) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x50) + 0x88) =
       *(uint *)(*(long *)(param_1[0x26] + 0x50) + 0x88) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x50) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x26] + 0x50) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x58) + 0x88) =
       *(uint *)(*(long *)(param_1[0x26] + 0x58) + 0x88) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x58) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x26] + 0x58) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x90) + 0x50) =
       *(uint *)(*(long *)(param_1[0x26] + 0x90) + 0x50) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x90) + 0x88) =
       *(uint *)(*(long *)(param_1[0x26] + 0x90) + 0x88) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0x90) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x26] + 0x90) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x26] + 0xa0) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x26] + 0xa0) + 0xb8) | 0x60;
  *(uint *)(*(long *)param_1[0x290] + 0x50) = *(uint *)(*(long *)param_1[0x290] + 0x50) & 0xffffff9f
  ;
  *(uint *)(*(long *)param_1[0x290] + 0x88) = *(uint *)(*(long *)param_1[0x290] + 0x88) & 0xffffff9f
  ;
  *(uint *)(*(long *)param_1[0x290] + 0xb8) = *(uint *)(*(long *)param_1[0x290] + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 8) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 8) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 8) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 8) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 8) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 8) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 0x10) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 0x10) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x10) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 0x10) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x10) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 0x10) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 0x18) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 0x18) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x18) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 0x18) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x18) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 0x18) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 0x20) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 0x20) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x20) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 0x20) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x20) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 0x20) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 0x28) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 0x28) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x28) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 0x28) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x28) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 0x28) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 0x30) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 0x30) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x30) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 0x30) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x30) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 0x30) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 0x38) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 0x38) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x38) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 0x38) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x38) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 0x38) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 0x40) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 0x40) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x40) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 0x40) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x40) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 0x40) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x290] + 0x48) + 0x50) =
       *(uint *)(*(long *)(param_1[0x290] + 0x48) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x48) + 0x88) =
       *(uint *)(*(long *)(param_1[0x290] + 0x48) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x290] + 0x48) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x290] + 0x48) + 0xb8) | 0x60;
  *(uint *)(*(long *)param_1[0x3a9] + 0x50) = *(uint *)(*(long *)param_1[0x3a9] + 0x50) & 0xffffff9f
  ;
  *(uint *)(*(long *)param_1[0x3a9] + 0x88) = *(uint *)(*(long *)param_1[0x3a9] + 0x88) & 0xffffff9f
  ;
  *(uint *)(*(long *)param_1[0x3a9] + 0xb8) = *(uint *)(*(long *)param_1[0x3a9] + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x3a9] + 8) + 0x50) =
       *(uint *)(*(long *)(param_1[0x3a9] + 8) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x3a9] + 8) + 0x88) =
       *(uint *)(*(long *)(param_1[0x3a9] + 8) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x3a9] + 8) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x3a9] + 8) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x3a9] + 0x10) + 0x50) =
       *(uint *)(*(long *)(param_1[0x3a9] + 0x10) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x3a9] + 0x10) + 0x88) =
       *(uint *)(*(long *)(param_1[0x3a9] + 0x10) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x3a9] + 0x10) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x3a9] + 0x10) + 0xb8) | 0x60;
  *(uint *)(*(long *)(param_1[0x3a9] + 0x18) + 0x50) =
       *(uint *)(*(long *)(param_1[0x3a9] + 0x18) + 0x50) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x3a9] + 0x18) + 0x88) =
       *(uint *)(*(long *)(param_1[0x3a9] + 0x18) + 0x88) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x3a9] + 0x18) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x3a9] + 0x18) + 0xb8) | 0x60;
  iVar11 = 0;
  do {
    iVar12 = 0x19;
    if (iVar11 < 0x19) {
      iVar12 = iVar11 + 1;
    }
    lVar8 = *(long *)(param_1[0x461] + (long)iVar11 * 8);
    *(uint *)(lVar8 + 0x50) = *(uint *)(lVar8 + 0x50) & 0xffffff9f;
    lVar8 = *(long *)(param_1[0x461] + (long)iVar11 * 8);
    *(uint *)(lVar8 + 0x88) = *(uint *)(lVar8 + 0x88) & 0xffffff9f;
    lVar8 = *(long *)(param_1[0x461] + (long)iVar11 * 8);
    *(uint *)(lVar8 + 0xb8) = *(uint *)(lVar8 + 0xb8) | 0x60;
    iVar11 = iVar12;
  } while (iVar12 != 0x19);
  *(uint *)(*(long *)param_1[0x461] + 0x50) = *(uint *)(*(long *)param_1[0x461] + 0x50) | 0x60;
  *(uint *)(*(long *)param_1[0x461] + 0x88) = *(uint *)(*(long *)param_1[0x461] + 0x88) | 0x60;
  *(uint *)(*(long *)(param_1[0x461] + 8) + 0x50) =
       *(uint *)(*(long *)(param_1[0x461] + 8) + 0x50) | 0x60;
  *(uint *)(*(long *)(param_1[0x461] + 8) + 0x88) =
       *(uint *)(*(long *)(param_1[0x461] + 8) + 0x88) | 0x60;
  *(uint *)(*(long *)(param_1[0x461] + 0x20) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x461] + 0x20) + 0xb8) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x461] + 0x28) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x461] + 0x28) + 0xb8) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x461] + 0x30) + 0x50) =
       *(uint *)(*(long *)(param_1[0x461] + 0x30) + 0x50) | 0x60;
  *(uint *)(*(long *)(param_1[0x461] + 0x30) + 0x88) =
       *(uint *)(*(long *)(param_1[0x461] + 0x30) + 0x88) | 0x60;
  *(uint *)(*(long *)(param_1[0x461] + 0x40) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x461] + 0x40) + 0xb8) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x461] + 0x48) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x461] + 0x48) + 0xb8) & 0xffffff9f;
  *(uint *)(*(long *)(param_1[0x461] + 0xa0) + 0x50) =
       *(uint *)(*(long *)(param_1[0x461] + 0xa0) + 0x50) | 0x60;
  *(uint *)(*(long *)(param_1[0x461] + 0xa0) + 0x88) =
       *(uint *)(*(long *)(param_1[0x461] + 0xa0) + 0x88) | 0x60;
  *(uint *)(*(long *)(param_1[0x461] + 0xa8) + 0xb8) =
       *(uint *)(*(long *)(param_1[0x461] + 0xa8) + 0xb8) & 0xffffff9f;
  return;
}

