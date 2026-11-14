
void FUN_01a5a3e8(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  void *__s;
  long lVar16;
  undefined8 uVar17;
  long lVar18;
  long *plVar19;
  undefined *local_108;
  char *pcStack_100;
  undefined4 local_f8;
  char local_f4 [8];
  char local_ec [4];
  undefined1 local_e8;
  undefined1 local_75;
  undefined4 local_70;
  
  nn::os::GetSystemTick();
  nn::os::GetSystemTick();
  puVar5 = PTR_DAT_04bb3350;
  lVar18 = *(long *)(param_1 + 8);
  if (lVar18 == 0) {
    lVar16 = 1;
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar16 = *(long *)(lVar13 + 0xa8);
    *(long *)(lVar13 + 0xa8) = lVar18;
  }
  uVar17 = *(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x538);
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x200);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x200,8);
    }
  }
  puVar2 = PTR_DAT_04bcb440;
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  plVar14[2] = (long)puVar1;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *plVar14 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar9 = PTR_DAT_04bb2d88;
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  plVar14[1] = (long)puVar2;
  uVar10 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar10;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a001a8;
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a001d0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar3 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar3;
  puVar1 = (undefined8 *)((long)plVar14 + 0x14c);
  plVar14[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[0x37] = 0;
  puVar3 = PTR_DAT_04bb2bc0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar3 + 0x10);
  puVar3 = PTR_DAT_04bbfe88;
  plVar14[0x3a] = 0;
  *puVar3 = 1;
  memset(PTR_DAT_04bbfe90,0xff,0x1ac);
  plVar14[0x3e] = 0;
  uVar10 = s_invalid_name_040e8f53._8_4_;
  uVar7 = s_invalid_name_040e8f53._0_8_;
  *plVar14 = (long)&PTR_LAB_04a000f8;
  *(undefined8 *)((long)plVar14 + 0x1f5) = 0;
  plVar14[0x3c] = 0;
  plVar14[0x3d] = (long)&LAB_01a5f360;
  pcStack_100 = local_f4;
  *(undefined4 *)(plVar14 + 0x3b) = 0;
  *(long **)(param_1 + 0x57e58) = plVar14;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_f8 = 0x80;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  local_108 = puVar2;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar14,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_FUN_04a324d0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a32528;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a32550;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbfe98 = 1;
  puVar5 = PTR_DAT_04bbfea0;
  *(long **)(param_1 + 0x57e60) = plVar14;
  plVar14[0x33] = (long)&LAB_01a5f4a0;
  plVar14[0x34] = 0;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemSize") {
    iVar6 = 9;
    if ((int)plVar14[0x29] < 10) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemSize",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57e60);
  }
  puVar5 = PTR_DAT_04bbbf88;
  *(undefined4 *)(plVar14 + 0x32) = 0x1c;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(puVar5 + 0x10);
  plVar14[0x24] = (long)&LAB_01a91c40;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a32578;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a325d0;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a325f8;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  puVar5 = PTR_DAT_04bbfeb0;
  plVar14[0x3a] = 0;
  *puVar5 = 1;
  puVar5 = PTR_DAT_04bbfeb8;
  *(long **)(param_1 + 0x57e68) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a5f5a0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemKind") {
    iVar6 = 9;
    if ((int)plVar14[0x29] < 10) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemKind",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57e68);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0xbd;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01a982a0;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a330c8;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33120;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a33148;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbfec0 = 1;
  puVar5 = PTR_DAT_04bbfec8;
  *(long **)(param_1 + 0x57e70) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a5f6c0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemFrom") {
    iVar6 = 9;
    if ((int)plVar14[0x29] < 10) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemFrom",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57e70);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x13e;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01a99d60;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a33170;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a331c8;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a331f0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbfed0 = 1;
  puVar5 = PTR_DAT_04bbfed8;
  plVar14[0x3a] = 0;
  *(long **)(param_1 + 0x57e88) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a5f7c0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemMenu") {
    iVar6 = 9;
    if ((int)plVar14[0x29] < 10) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemMenu",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57e88);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x26a;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01a9b810;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a33218;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33270;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a33298;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  puVar2 = PTR_DAT_04bbfee8;
  puVar5 = PTR_DAT_04bbfee0;
  *(long **)(param_1 + 0x57e80) = plVar14;
  *puVar5 = 1;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a5f8c0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemUnitIcon") {
    iVar6 = 0xd;
    if ((int)plVar14[0x29] < 0xe) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemUnitIcon",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57e80);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0xda;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01a9d2d0;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a332c0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33318;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a33340;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbfef0 = 1;
  puVar5 = PTR_DAT_04bbfef8;
  plVar14[0x3a] = 0;
  *(long **)(param_1 + 0x57e78) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
  plVar14[0x33] = (long)&LAB_01a5f9c0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemAct") {
    iVar6 = 8;
    if ((int)plVar14[0x29] < 9) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemAct",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57e78);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x52;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01aa11e0;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a33728;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33780;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a337a8;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbff00 = 1;
  puVar5 = PTR_DAT_04bbff08;
  *(long **)(param_1 + 0x57e90) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x40) = 0xffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a5fac0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemOutfitInfo") {
    iVar6 = 0xf;
    if ((int)plVar14[0x29] < 0x10) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemOutfitInfo",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57e90);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0xa2;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01aa2f70;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a337d0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33828;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a33850;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  puVar5 = PTR_DAT_04bbe220;
  *PTR_DAT_04bbe218 = 1;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  *(long **)(param_1 + 0x57e98) = plVar14;
  plVar14[0x33] = (long)&LAB_01a5fbd0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemOutfitCategory") {
    iVar6 = 0x13;
    if ((int)plVar14[0x29] < 0x14) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemOutfitCategory",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57e98);
  }
  puVar5 = PTR_FUN_04bbdec0;
  *(undefined4 *)(plVar14 + 0x32) = 0x75;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)puVar5;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_FUN_04a33878;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a338d0;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a338f8;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  puVar5 = PTR_DAT_04bbff18;
  plVar14[0x3a] = 0;
  *puVar5 = 1;
  puVar5 = PTR_DAT_04bbff20;
  *(long **)(param_1 + 0x57ea0) = plVar14;
  plVar14[0x33] = (long)&LAB_01a5fcd0;
  plVar14[0x34] = 0;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemOutfitHangerInfo") {
    iVar6 = 0x15;
    if ((int)plVar14[0x29] < 0x16) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemOutfitHangerInfo",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ea0);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0xe;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)FUN_01aa68b0;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a33a98;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33af0;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a33b18;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbff28 = 1;
  puVar5 = PTR_DAT_04bbff30;
  *(long **)(param_1 + 0x57eb0) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x28) = 0xffffffff;
  plVar14[0x33] = (long)&LAB_01a5fdd0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemPlayerTopsBottomsForm") {
    iVar6 = 0x1a;
    if ((int)plVar14[0x29] < 0x1b) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemPlayerTopsBottomsForm",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57eb0);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x6b;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01aa8900;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a33b40;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33b98;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a33bc0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  puVar5 = PTR_DAT_04bbff38;
  plVar14[0x3a] = 0;
  *puVar5 = 1;
  puVar5 = PTR_DAT_04bbff40;
  *(long **)(param_1 + 0x57ea8) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a5fed0;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemNpcOutfitInfo") {
    iVar6 = 0x12;
    if ((int)plVar14[0x29] < 0x13) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemNpcOutfitInfo",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ea8);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x15;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01aaa3c0;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x200);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x200,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33c98;
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a33cc0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  puVar1 = (undefined8 *)((long)plVar14 + 0x14c);
  plVar14[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar5 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar14 + 0x32) = 0xffffffff;
  plVar14[0x37] = 0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *PTR_DAT_04bbff48 = 1;
  puVar5 = PTR_DAT_04bbff50;
  plVar14[0x3e] = 0;
  *(undefined4 *)(plVar14 + 0x3b) = 0;
  *(undefined8 *)(puVar5 + 0xe0) = 0xffffffffffffffff;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0xa0) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0xa8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0xb0) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0xb8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0xc0) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 200) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0xd0) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0xd8) = 0xffffffffffffffff;
  *plVar14 = (long)&PTR_LAB_04a33be8;
  *(undefined8 *)((long)plVar14 + 0x1f5) = 0;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  pcStack_100 = local_f4;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x3c] = 0;
  plVar14[0x3d] = (long)&LAB_01a5ffd0;
  *(long **)(param_1 + 0x57eb8) = plVar14;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar14,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_FUN_04a33d00;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a33d58;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a33d80;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  puVar5 = PTR_DAT_04bbff58;
  plVar14[0x3a] = 0;
  *puVar5 = 1;
  puVar5 = PTR_DAT_04bbff60;
  *(long **)(param_1 + 0x57ec0) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
  plVar14[0x33] = (long)&LAB_01a60100;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemRemakeCommonPatternType") {
    iVar6 = 0x1c;
    if ((int)plVar14[0x29] < 0x1d) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemRemakeCommonPatternType",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ec0);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0xdc;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)FUN_01ab1280;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a34958;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a349b0;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a349d8;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *PTR_DAT_04bbff68 = 1;
  puVar5 = PTR_DAT_04bbff70;
  plVar14[0x3a] = 0;
  *(long **)(param_1 + 0x57ec8) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 8) = 0xffffffff;
  plVar14[0x33] = (long)&LAB_01a60200;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemRemakeCommonPatternCategory") {
    iVar6 = 0x20;
    if ((int)plVar14[0x29] < 0x21) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemRemakeCommonPatternCategory",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ec8);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0xc;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01ab3280;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a34a00;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a34a58;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a34a80;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbff78 = 1;
  puVar5 = PTR_DAT_04bbff80;
  *(long **)(param_1 + 0x57ed0) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a60310;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemUIContextMenuMessage") {
    iVar6 = 0x19;
    if ((int)plVar14[0x29] < 0x1a) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemUIContextMenuMessage",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ed0);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x42;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01ab4d40;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a34fa0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a34ff8;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35020;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  puVar5 = PTR_DAT_04bbff88;
  plVar14[0x3a] = 0;
  *puVar5 = 1;
  puVar5 = PTR_DAT_04bbff90;
  *(long **)(param_1 + 0x57ed8) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a60410;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemClothGroup") {
    iVar6 = 0xf;
    if ((int)plVar14[0x29] < 0x10) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemClothGroup",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ed8);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x5b6;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01ab7330;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a35048;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a350a0;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a350c8;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(long **)(param_1 + 0x57ee0) = plVar14;
  DAT_05300738 = 1;
  DAT_0530073c = 0xffffffff;
  plVar14[0x33] = (long)&LAB_01a60520;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemColor") {
    iVar6 = 10;
    if ((int)plVar14[0x29] < 0xb) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemColor",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ee0);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0xf;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01ab8da0;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a350f0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a35148;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35170;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(long **)(param_1 + 0x57ee8) = plVar14;
  DAT_05300740 = 1;
  DAT_05300744 = 0xffffffffffffffff;
  DAT_0530074c = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a60610;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemMailAttachCategoryGroup") {
    iVar6 = 0x1c;
    if ((int)plVar14[0x29] < 0x1d) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemMailAttachCategoryGroup",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ee8);
  }
  *(undefined4 *)(plVar14 + 0x32) = 3;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01abb430;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a351d0;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a35228;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35250;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbff98 = 1;
  puVar5 = PTR_DAT_04bbffa0;
  plVar14[0x3a] = 0;
  *(long **)(param_1 + 0x57ef0) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a60700;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemNpcRoomReplaceCategory") {
    iVar6 = 0x1b;
    if ((int)plVar14[0x29] < 0x1c) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemNpcRoomReplaceCategory",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57ef0);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x15;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01abd540;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x200);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x200,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a35328;
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35350;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  puVar1 = (undefined8 *)((long)plVar14 + 0x14c);
  plVar14[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar5 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar14 + 0x32) = 0xffffffff;
  plVar14[0x37] = 0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *PTR_DAT_04bbffa8 = 1;
  puVar5 = PTR_DAT_04bbffb0;
  plVar14[0x3e] = 0;
  *(undefined4 *)(plVar14 + 0x3b) = 0;
  *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined4 *)(puVar5 + 0x38) = 0xffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  *plVar14 = (long)&PTR_LAB_04a35278;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  *(undefined8 *)((long)plVar14 + 0x1f5) = 0;
  pcStack_100 = local_f4;
  plVar14[0x3c] = 0;
  plVar14[0x3d] = (long)&LAB_01a60800;
  *(long **)(param_1 + 0x57ef8) = plVar14;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar14,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_FUN_04a35390;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a353e8;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35410;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbffb8 = 1;
  puVar5 = PTR_DAT_04bbffc0;
  *(long **)(param_1 + 0x57f00) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a60910;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemNpcFtrActionType") {
    iVar6 = 0x15;
    if ((int)plVar14[0x29] < 0x16) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemNpcFtrActionType",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57f00);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x13;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01ac4750;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x200);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x200,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a356d8;
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35700;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  puVar1 = (undefined8 *)((long)plVar14 + 0x14c);
  plVar14[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar5 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar14 + 0x32) = 0xffffffff;
  plVar14[0x37] = 0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *PTR_DAT_04bbffc8 = 1;
  puVar5 = PTR_DAT_04bbffd0;
  plVar14[0x3e] = 0;
  plVar14[0x3a] = 0;
  *(undefined4 *)(plVar14 + 0x3b) = 0;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *plVar14 = (long)&PTR_LAB_04a35628;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  *(undefined8 *)((long)plVar14 + 0x1f5) = 0;
  pcStack_100 = local_f4;
  plVar14[0x3c] = 0;
  plVar14[0x3d] = (long)&LAB_01a60a10;
  *(long **)(param_1 + 0x57f08) = plVar14;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar14,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x200);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x200,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a357f0;
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35818;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  puVar1 = (undefined8 *)((long)plVar14 + 0x14c);
  plVar14[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar5 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar14 + 0x32) = 0xffffffff;
  plVar14[0x37] = 0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *PTR_DAT_04bbffd8 = 1;
  puVar5 = PTR_DAT_04bbffe0;
  *(undefined4 *)(plVar14 + 0x3b) = 0;
  *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *plVar14 = (long)&PTR_FUN_04a35740;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  *(undefined8 *)((long)plVar14 + 0x1f5) = 0;
  pcStack_100 = local_f4;
  plVar14[0x3e] = 0;
  plVar14[0x3c] = 0;
  plVar14[0x3d] = (long)&LAB_01a60b10;
  *(long **)(param_1 + 0x57f10) = plVar14;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar14,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_FUN_04a35858;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a358b0;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a358d8;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(long **)(param_1 + 0x57f28) = plVar14;
  DAT_05300754 = 1;
  DAT_05300758 = 0xffffffffffffffff;
  DAT_05300760 = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a60c10;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_AITagBitEnum") {
    iVar6 = 0xd;
    if ((int)plVar14[0x29] < 0xe) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_AITagBitEnum",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57f28);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x33;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01acb930;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a35c88;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a35ce0;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35d08;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *PTR_DAT_04bbffe8 = 1;
  puVar5 = PTR_DAT_04bbfff0;
  *(long **)(param_1 + 0x57f18) = plVar14;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a60d00;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemNpcWherearenFtrActionType") {
    iVar6 = 0x1e;
    if ((int)plVar14[0x29] < 0x1f) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemNpcWherearenFtrActionType",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57f18);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x54;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  local_f8 = 0x80;
  pcStack_100 = local_f4;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)&LAB_01ace590;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x770);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x770,8);
    }
  }
  *plVar14 = (long)(PTR_DAT_04bbfe60 + 0x10);
  memset(plVar14 + 1,0,0x754);
  uVar12 = nn::os::GetSystemTick();
  uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 1;
  *(uint *)((long)plVar14 + 0x75c) = uVar12;
  uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 2;
  *(uint *)(plVar14 + 0xec) = uVar12;
  uVar12 = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)((long)plVar14 + 0x764) = uVar12;
  *(uint *)(plVar14 + 0xed) = (uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(*plVar14 + 0x18))(plVar14);
  memset(__s,0,0x754);
  *(long **)(param_1 + 0xdc328) = plVar14;
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x1d8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x1d8,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  *plVar14 = (long)&PTR_LAB_04a35d30;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a35d88;
  pcVar4 = (char *)((long)plVar14 + 0x14c);
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a35db0;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  plVar14[0x28] = (long)pcVar4;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  if (pcVar4 != "") {
    *pcVar4 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar14[0x37] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x3a] = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(long **)(param_1 + 0x57f20) = plVar14;
  DAT_05300768 = 1;
  DAT_0530076c = 0xffffffffffffffff;
  DAT_05300774 = 0xffffffffffffffff;
  plVar14[0x33] = (long)&LAB_01a60e00;
  plVar14[0x34] = 0;
  plVar19 = plVar14;
  if (pcVar4 != "_ItemUIFurnitureCategory") {
    iVar6 = 0x18;
    if ((int)plVar14[0x29] < 0x19) {
      iVar6 = (int)plVar14[0x29] + -1;
    }
    memcpy(pcVar4,"_ItemUIFurnitureCategory",(long)iVar6);
    pcVar4[iVar6] = '\0';
    plVar19 = *(long **)(param_1 + 0x57f20);
  }
  *(undefined4 *)(plVar14 + 0x32) = 0x100;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  plVar14[0x23] = (long)(PTR_DAT_04bbbf88 + 0x10);
  plVar14[0x24] = (long)FUN_01ad0d30;
  pcStack_100 = local_f4;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar19,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar19 + 0x20))(plVar19,&local_108,uVar17);
  }
  lVar18 = *(long *)PTR_DAT_04bb2698;
  if (lVar18 == 0) {
    plVar14 = malloc(0x200);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar18 + 8);
    if (lVar13 != 0) {
      plVar14 = (long *)(lVar13 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if (plVar14 == (long *)0x0) {
      plVar14 = (long *)0x0;
    }
    else {
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x200,8);
    }
  }
  puVar5 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar14 + 3) = 0x80;
  *(undefined1 *)((long)plVar14 + 0x9b) = 0;
  *plVar14 = (long)(puVar5 + 0x10);
  puVar1 = (undefined8 *)((long)plVar14 + 0x1c);
  plVar14[2] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar14[1] = (long)(puVar9 + 0x10);
  uVar11 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar14 + 0x14) = uVar11;
  plVar14[0x1a] = 0;
  plVar14[0x1b] = (long)&PTR_LAB_04a36808;
  plVar14[0x17] = 0;
  *(undefined8 *)((long)plVar14 + 0xbd) = 0;
  *(undefined4 *)(plVar14 + 0x19) = 0;
  plVar14[0x1f] = (long)&PTR_LAB_04a36830;
  plVar14[0x15] = 0;
  plVar14[0x16] = 0;
  puVar5 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar14 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar14 + 0x18b) = 0;
  plVar14[0x23] = (long)puVar5;
  puVar1 = (undefined8 *)((long)plVar14 + 0x14c);
  plVar14[0x28] = (long)puVar1;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  puVar5 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar14 + 0x32) = 0xffffffff;
  plVar14[0x37] = 0;
  plVar14[0x33] = 0;
  plVar14[0x34] = 0;
  plVar14[0x35] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0;
  *(undefined4 *)(plVar14 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar14 + 0x39) = 0;
  plVar14[0x27] = (long)(puVar5 + 0x10);
  puVar5 = PTR_DAT_04bbfff8;
  plVar14[0x3a] = 0;
  *puVar5 = 1;
  puVar5 = PTR_DAT_04bc0000;
  *(undefined4 *)(plVar14 + 0x3b) = 0;
  *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
  *(undefined8 *)puVar5 = 0xffffffffffffffff;
  *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
  *plVar14 = (long)&PTR_FUN_04a36758;
  uVar11 = s_invalid_name_040e8f53._8_4_;
  uVar8 = s_invalid_name_040e8f53._0_8_;
  local_75 = 0;
  s_invalid_name_040e8f53[0] = (char)uVar7;
  s_invalid_name_040e8f53[1] = SUB81(uVar7,1);
  s_invalid_name_040e8f53[2] = SUB81(uVar7,2);
  s_invalid_name_040e8f53[3] = SUB81(uVar7,3);
  s_invalid_name_040e8f53[4] = SUB81(uVar7,4);
  s_invalid_name_040e8f53[5] = SUB81(uVar7,5);
  s_invalid_name_040e8f53[6] = SUB81(uVar7,6);
  s_invalid_name_040e8f53[7] = SUB81(uVar7,7);
  local_f4[0] = s_invalid_name_040e8f53[0];
  local_f4[1] = s_invalid_name_040e8f53[1];
  local_f4[2] = s_invalid_name_040e8f53[2];
  local_f4[3] = s_invalid_name_040e8f53[3];
  local_f4[4] = s_invalid_name_040e8f53[4];
  local_f4[5] = s_invalid_name_040e8f53[5];
  local_f4[6] = s_invalid_name_040e8f53[6];
  local_f4[7] = s_invalid_name_040e8f53[7];
  s_invalid_name_040e8f53[8] = (char)uVar10;
  s_invalid_name_040e8f53[9] = SUB41(uVar10,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar10,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar10,3);
  local_ec[0] = s_invalid_name_040e8f53[8];
  local_ec[1] = s_invalid_name_040e8f53[9];
  local_ec[2] = s_invalid_name_040e8f53[10];
  local_ec[3] = s_invalid_name_040e8f53[0xb];
  local_e8 = 0;
  s_invalid_name_040e8f53._0_8_ = uVar8;
  s_invalid_name_040e8f53._8_4_ = uVar11;
  *(undefined8 *)((long)plVar14 + 0x1f5) = 0;
  pcStack_100 = local_f4;
  plVar14[0x3e] = 0;
  plVar14[0x3c] = 0;
  plVar14[0x3d] = (long)&LAB_01a60ef0;
  *(long **)(param_1 + 0x5c058) = plVar14;
  local_f8 = 0x80;
  local_108 = puVar9 + 0x10;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar15 = FUN_03853d00(plVar14,&local_108);
  if ((uVar15 & 1) != 0) {
    (**(code **)(*plVar14 + 0x20))(plVar14,&local_108,uVar17);
  }
  if (lVar16 != 1) {
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar18 + 0xa8) = lVar16;
  }
  return;
}

