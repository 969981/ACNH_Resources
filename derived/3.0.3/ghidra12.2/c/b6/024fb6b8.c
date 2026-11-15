
void FUN_024fb6b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *local_100;
  char *pcStack_f8;
  undefined4 local_f0;
  char local_ec [8];
  char local_e4 [4];
  undefined1 local_e0;
  undefined1 local_6d;
  undefined4 local_68;
  
  local_100 = PTR_DAT_04bb2020 + 0x10;
  pcStack_f8 = "PlayerInitialOutfitParamSet";
  uVar9 = FUN_038c9744(0,&local_100,param_2,8,1,0);
  *param_1 = uVar9;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb2698;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar2 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  plVar11[2] = (long)puVar1;
  *plVar11 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(PTR_DAT_04bb2d88 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_04a81c18;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04a81c40;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar2;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  plVar11[0x37] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  DAT_054ecc78 = 1;
  DAT_054ecc9c = 0xffffffff;
  DAT_054ecc7c = 0xffffffffffffffff;
  DAT_054ecc84 = 0xffffffffffffffff;
  DAT_054ecc8c = 0xffffffffffffffff;
  DAT_054ecc94 = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_LAB_04a81b68;
  lVar13 = *(long *)puVar4;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_024fbf00;
  param_1[1] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar3 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar3 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(PTR_DAT_04bb2d88 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_04a81d30;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04a81d58;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  plVar11[0x37] = 0;
  DAT_054ecca0 = 1;
  DAT_054eccc4 = 0xffffffff;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  DAT_054ecca4 = 0xffffffffffffffff;
  DAT_054eccac = 0xffffffffffffffff;
  DAT_054eccb4 = 0xffffffffffffffff;
  DAT_054eccbc = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04a81c80;
  lVar13 = *(long *)puVar4;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_024fbff0;
  param_1[2] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar3 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar3 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar11[1] = (long)(PTR_DAT_04bb2d88 + 0x10);
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_04a81e48;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04a81e70;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  plVar11[0x37] = 0;
  DAT_054eccc8 = 1;
  DAT_054eccec = 0xffffffff;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  DAT_054ecccc = 0xffffffffffffffff;
  DAT_054eccd4 = 0xffffffffffffffff;
  DAT_054eccdc = 0xffffffffffffffff;
  DAT_054ecce4 = 0xffffffffffffffff;
  *plVar11 = (long)&PTR_FUN_04a81d98;
  lVar13 = *(long *)puVar4;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_024fc0e0;
  param_1[3] = plVar11;
  if (lVar13 == 0) {
    plVar11 = malloc(0x200);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar11 = (long *)(lVar13 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
      plVar11 = (long *)0x0;
    }
    else {
      plVar11 = (long *)(**(code **)(*plVar11 + 0x30))(plVar11,0x200,8);
    }
  }
  puVar4 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar11 + 3) = 0x80;
  *(undefined1 *)((long)plVar11 + 0x9b) = 0;
  *plVar11 = (long)(puVar4 + 0x10);
  puVar1 = (undefined8 *)((long)plVar11 + 0x1c);
  plVar11[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar4 = PTR_DAT_04bb2d88 + 0x10;
  plVar11[1] = (long)puVar4;
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar11 + 0x14) = uVar8;
  plVar11[0x1a] = 0;
  plVar11[0x1b] = (long)&PTR_LAB_04a81f60;
  plVar11[0x17] = 0;
  *(undefined8 *)((long)plVar11 + 0xbd) = 0;
  *(undefined4 *)(plVar11 + 0x19) = 0;
  plVar11[0x1f] = (long)&PTR_LAB_04a81f88;
  plVar11[0x15] = 0;
  plVar11[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar11 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar11 + 0x18b) = 0;
  plVar11[0x23] = (long)puVar5;
  puVar1 = (undefined8 *)((long)plVar11 + 0x14c);
  plVar11[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(plVar11 + 0x32) = 0xffffffff;
  plVar11[0x27] = (long)(puVar2 + 0x10);
  uVar8 = s_invalid_name_040e8f53._8_4_;
  uVar6 = s_invalid_name_040e8f53._0_8_;
  DAT_054eccf0 = 1;
  DAT_054eccf4 = 0xffffffffffffffff;
  DAT_054eccfc = 0xffffffffffffffff;
  DAT_054ecd04 = 0xffffffffffffffff;
  DAT_054ecd0c = 0xffffffffffffffff;
  DAT_054ecd14 = 0xffffffff;
  *plVar11 = (long)&PTR_FUN_04a81eb0;
  plVar11[0x37] = 0;
  plVar11[0x35] = 0;
  *(undefined4 *)(plVar11 + 0x36) = 0;
  *(undefined4 *)(plVar11 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar11 + 0x39) = 0;
  plVar11[0x3a] = 0;
  *(undefined4 *)(plVar11 + 0x3b) = 0;
  *(undefined8 *)((long)plVar11 + 0x1f5) = 0;
  plVar11[0x3e] = 0;
  uVar7 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar6;
  s_invalid_name_040e8f53[1] = SUB81(uVar6,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar6,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar6,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar6,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar6,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar6,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar6,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar7;
  plVar11[0x33] = 0;
  plVar11[0x34] = 0;
  plVar11[0x3c] = 0;
  plVar11[0x3d] = (long)&LAB_024fc1d0;
  param_1[4] = plVar11;
  uVar9 = *param_1;
  plVar11 = (long *)param_1[1];
  local_100 = puVar4;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar9);
  }
  uVar7 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  local_f0 = 0x80;
  plVar11 = (long *)param_1[2];
  local_6d = 0;
  uVar14 = *param_1;
  s_invalid_name_040e8f53[0] = (char)uVar6;
  s_invalid_name_040e8f53[1] = SUB81(uVar6,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar6,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar6,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar6,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar6,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar6,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar6,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  puVar4 = PTR_DAT_04bb2d88 + 0x10;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar7;
  local_100 = puVar4;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar7 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  plVar11 = (long *)param_1[3];
  uVar14 = *param_1;
  local_f0 = 0x80;
  local_6d = 0;
  s_invalid_name_040e8f53[0] = (char)uVar6;
  s_invalid_name_040e8f53[1] = SUB81(uVar6,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar6,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar6,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar6,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar6,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar6,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar6,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar7;
  local_100 = puVar4;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  uVar7 = s_invalid_name_040e8f53._8_4_;
  uVar9 = s_invalid_name_040e8f53._0_8_;
  local_f0 = 0x80;
  plVar11 = (long *)param_1[4];
  local_6d = 0;
  uVar14 = *param_1;
  s_invalid_name_040e8f53[0] = (char)uVar6;
  s_invalid_name_040e8f53[1] = SUB81(uVar6,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar6,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar6,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar6,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar6,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar6,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar6,7);
  local_ec[0] = s_invalid_name_040e8f53[0];
  local_ec[1] = s_invalid_name_040e8f53[1];
  local_ec[2] = s_invalid_name_040e8f53[2];
  local_ec[3] = s_invalid_name_040e8f53[3];
  local_ec[4] = s_invalid_name_040e8f53[4];
  local_ec[5] = s_invalid_name_040e8f53[5];
  local_ec[6] = s_invalid_name_040e8f53[6];
  local_ec[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  local_e4[0] = s_invalid_name_040e8f53[8];
  local_e4[1] = s_invalid_name_040e8f53[9];
  local_e4[2] = s_invalid_name_040e8f53[10];
  local_e4[3] = s_invalid_name_040e8f53[0xb];
  local_e0 = 0;
  local_100 = PTR_DAT_04bb2d88 + 0x10;
  s_invalid_name_040e8f53._0_8_ = uVar9;
  s_invalid_name_040e8f53._8_4_ = uVar7;
  pcStack_f8 = local_ec;
  local_68 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar11,&local_100);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar11 + 0x20))(plVar11,&local_100,uVar14);
  }
  (**(code **)(*(long *)*param_1 + 0x28))();
  return;
}

