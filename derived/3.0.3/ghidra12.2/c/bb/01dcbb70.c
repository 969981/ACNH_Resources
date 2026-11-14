
void FUN_01dcbb70(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *local_50;
  char *pcStack_48;
  
  FUN_03ebac90(param_1,0x15,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "State::cIdle";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0,&local_50);
  puVar4 = *(undefined8 **)(param_1 + 0x30);
  puVar4[2] = &LAB_01dcc340;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcc538;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetId";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,1,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(1 < *(uint *)(param_1 + 0x28)) * 0x40)
  ;
  puVar4[2] = &LAB_01dcc53c;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcc6e8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cPostMyDesign";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,2,&local_50);
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + (ulong)(2 < *(uint *)(param_1 + 0x28)) * 0x80)
  ;
  puVar4[2] = &LAB_01dcc790;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcc940;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cUpdateMeta";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,3,&local_50);
  lVar5 = 0xc0;
  if (*(uint *)(param_1 + 0x28) < 4) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dccb20;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dccc40;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cDelete";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,4,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(4 < *(uint *)(param_1 + 0x28)) * 0x100);
  puVar4[2] = &LAB_01dccfc8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcd13c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cSendFeedback";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,5,&local_50);
  lVar5 = 0x140;
  if (*(uint *)(param_1 + 0x28) < 6) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcd1c8;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcd344;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cDownloadId";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,7,&local_50);
  lVar5 = 0x1c0;
  if (*(uint *)(param_1 + 0x28) < 8) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcd3dc;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcd4a8;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cCancelWait";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,6,&local_50);
  lVar5 = 0x180;
  if (*(uint *)(param_1 + 0x28) < 7) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcd530;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcd614;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetHeaderSingle";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,8,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(8 < *(uint *)(param_1 + 0x28)) * 0x200);
  puVar4[2] = &LAB_01dcd678;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcd714;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetHeaderDesignerNormal";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,9,&local_50);
  lVar5 = 0x240;
  if (*(uint *)(param_1 + 0x28) < 10) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcd790;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcd858;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetHeaderDesignerPro";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,10,&local_50);
  lVar5 = 0x280;
  if (*(uint *)(param_1 + 0x28) < 0xb) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcd8d4;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcd9a0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetMetaBodySingle";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xe,&local_50);
  lVar5 = 0x380;
  if (*(uint *)(param_1 + 0x28) < 0xf) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcda20;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcdc90;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetHeaderNormalAll";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xf,&local_50);
  lVar5 = 0x3c0;
  if (*(uint *)(param_1 + 0x28) < 0x10) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcdea0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcdf28;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetHeaderCustomNormal";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xb,&local_50);
  lVar5 = 0x2c0;
  if (*(uint *)(param_1 + 0x28) < 0xc) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcdfb0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dce248;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetHeaderCustomPro";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xc,&local_50);
  lVar5 = 0x300;
  if (*(uint *)(param_1 + 0x28) < 0xd) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dce2d0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dce56c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetHeaderUsage";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0xd,&local_50);
  lVar5 = 0x340;
  if (*(uint *)(param_1 + 0x28) < 0xe) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dce5f0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dce89c;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetHeaderProAll";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x10,&local_50);
  puVar4 = (undefined8 *)
           (*(long *)(param_1 + 0x30) + (ulong)(0x10 < *(uint *)(param_1 + 0x28)) * 0x400);
  puVar4[2] = &LAB_01dce918;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dce9a4;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetMetaAll";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x11,&local_50);
  lVar5 = 0x440;
  if (*(uint *)(param_1 + 0x28) < 0x12) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcea20;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcea40;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetBodyAll";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x12,&local_50);
  lVar5 = 0x480;
  if (*(uint *)(param_1 + 0x28) < 0x13) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcec10;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[4] = &LAB_01dcec30;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  pcStack_48 = "State::cGetMetaPage";
  local_50 = puVar1;
  FUN_03ebaf40(param_1,0x13,&local_50);
  lVar5 = 0x4c0;
  if (*(uint *)(param_1 + 0x28) < 0x14) {
    lVar5 = 0;
  }
  puVar4 = (undefined8 *)(*(long *)(param_1 + 0x30) + lVar5);
  puVar4[2] = &LAB_01dcee04;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04a5b640;
  puVar4[1] = param_1;
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = &LAB_01dcee48;
  puVar4[5] = 0;
  *(undefined1 *)(param_1 + 0x21) = 1;
  uVar2 = *(uint *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0xc);
  *(uint *)(param_1 + 8) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x28) <= uVar2) {
      uVar2 = 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x30) + (long)(int)uVar2 * 0x40);
    if (puVar4 != (undefined8 *)0x0) {
      (*(code *)*puVar4)();
    }
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x40);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    puVar4 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x40,8);
  }
  puVar4[6] = 0;
  puVar4[7] = 0;
  puVar4[4] = 0;
  puVar4[5] = 0;
  puVar4[2] = 0;
  puVar4[3] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  *(undefined8 **)(param_1 + 0x68) = puVar4;
  local_50._0_4_ = 10;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) < 0xb) {
    local_50._0_4_ = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)local_50 * 0x38 + 0x30) =
       1;
  *(undefined4 *)(param_1 + 0x4c) = 0x28;
  return;
}

