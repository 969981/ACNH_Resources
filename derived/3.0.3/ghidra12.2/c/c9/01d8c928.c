
void FUN_01d8c928(long param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *local_60;
  char *pcStack_58;
  
  lVar9 = param_1 + 8;
  FUN_03ebac90(lVar9,0x11,0,param_2,0);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "State::cIdle";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,0,&local_60);
  puVar8 = *(undefined8 **)(param_1 + 0x38);
  puVar8[2] = &LAB_01d8d188;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8d18c;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cGetId";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,1,&local_60);
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(1 < *(uint *)(param_1 + 0x30)) * 0x40)
  ;
  puVar8[2] = &LAB_01d8d190;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8d224;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cUpload";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,2,&local_60);
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + (ulong)(2 < *(uint *)(param_1 + 0x30)) * 0x80)
  ;
  puVar8[2] = &LAB_01d8d2cc;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8d338;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cUpdateMeta";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,3,&local_60);
  lVar4 = 0xc0;
  if (*(uint *)(param_1 + 0x30) < 4) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8d790;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8d7e0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cDownloadAutomaticList";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,4,&local_60);
  puVar8 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(4 < *(uint *)(param_1 + 0x30)) * 0x100);
  puVar8[2] = &LAB_01d8d83c;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8d910;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cSearchIslandName";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,5,&local_60);
  lVar4 = 0x140;
  if (*(uint *)(param_1 + 0x30) < 6) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8da60;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8dd40;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cDownloadMetaList";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,6,&local_60);
  lVar4 = 0x180;
  if (*(uint *)(param_1 + 0x30) < 7) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8dec0;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8e0a0;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cDownloadHeader";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,7,&local_60);
  lVar4 = 0x1c0;
  if (*(uint *)(param_1 + 0x30) < 8) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8e0cc;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8e150;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cDownloadMeta";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,8,&local_60);
  puVar8 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(8 < *(uint *)(param_1 + 0x30)) * 0x200);
  puVar8[2] = &LAB_01d8e1f4;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8e2dc;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cDownloadIsland";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,9,&local_60);
  lVar4 = 0x240;
  if (*(uint *)(param_1 + 0x30) < 10) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8e4b4;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8e64c;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cReflectSave";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,10,&local_60);
  lVar4 = 0x280;
  if (*(uint *)(param_1 + 0x30) < 0xb) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8e704;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8e708;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cLoadLandMap";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,0xb,&local_60);
  lVar4 = 0x2c0;
  if (*(uint *)(param_1 + 0x30) < 0xc) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8ebac;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8ecec;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cLoadPersonalMap";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,0xc,&local_60);
  lVar4 = 0x300;
  if (*(uint *)(param_1 + 0x30) < 0xd) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8eebc;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8efb4;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cConvertIsland";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,0xd,&local_60);
  lVar4 = 0x340;
  if (*(uint *)(param_1 + 0x30) < 0xe) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8f264;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8f6fc;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cDeleteDream";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,0xe,&local_60);
  lVar4 = 0x380;
  if (*(uint *)(param_1 + 0x30) < 0xf) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8f9b0;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8fa44;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cFeedback";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,0xf,&local_60);
  lVar4 = 0x3c0;
  if (*(uint *)(param_1 + 0x30) < 0x10) {
    lVar4 = 0;
  }
  puVar8 = (undefined8 *)(*(long *)(param_1 + 0x38) + lVar4);
  puVar8[2] = &LAB_01d8fadc;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[4] = &LAB_01d8fb20;
  puVar8[5] = 0;
  puVar8[6] = 0;
  puVar8[7] = 0;
  pcStack_58 = "State::cVisited";
  local_60 = puVar1;
  FUN_03ebaf40(lVar9,0x10,&local_60);
  puVar8 = (undefined8 *)
           (*(long *)(param_1 + 0x38) + (ulong)(0x10 < *(uint *)(param_1 + 0x30)) * 0x400);
  puVar8[2] = &LAB_01d8fb7c;
  puVar8[3] = 0;
  *puVar8 = &PTR_LAB_04a5ac50;
  puVar8[1] = param_1;
  puVar8[6] = 0;
  puVar8[7] = 0;
  puVar8[4] = &LAB_01d8fc10;
  puVar8[5] = 0;
  *(undefined1 *)(param_1 + 0x29) = 1;
  uVar2 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x14);
  *(uint *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (uVar2 != 0xffffffff) {
    if (*(uint *)(param_1 + 0x30) <= uVar2) {
      uVar2 = 0;
    }
    puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x38) + (long)(int)uVar2 * 0x40);
    if (puVar8 != (undefined8 *)0x0) {
      (*(code *)*puVar8)();
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0xb);
  puVar1 = local_60;
  local_60._0_4_ = 0xb;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) < 0xc) {
    local_60._0_4_ = 0;
  }
  *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)local_60 * 0x38 + 0x30) =
       0;
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  local_60 = puVar1;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x5b8);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_01d8cfcc;
      }
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,0x5b8,8);
  }
LAB_01d8cfcc:
  *(undefined8 *)((long)pvVar6 + 0x1f) = 0;
  *(undefined8 *)((long)pvVar6 + 0x2a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x101) = 0;
  *(undefined8 *)((long)pvVar6 + 0x121) = 0;
  *(undefined8 *)((long)pvVar6 + 0x10a) = 0;
  *(undefined8 *)((long)pvVar6 + 8) = 0;
  *(undefined8 *)((long)pvVar6 + 0x32) = 0;
  *(undefined8 *)((long)pvVar6 + 0x3a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x41) = 0;
  *(undefined8 *)((long)pvVar6 + 0x4a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x52) = 0;
  *(undefined8 *)((long)pvVar6 + 0x5a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x61) = 0;
  *(undefined8 *)((long)pvVar6 + 0x6a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x72) = 0;
  *(undefined8 *)((long)pvVar6 + 0x7a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x81) = 0;
  *(undefined8 *)((long)pvVar6 + 0xa1) = 0;
  *(undefined8 *)((long)pvVar6 + 0x9a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x92) = 0;
  *(undefined8 *)((long)pvVar6 + 0x8a) = 0;
  *(undefined8 *)((long)pvVar6 + 0xc1) = 0;
  *(undefined8 *)((long)pvVar6 + 0xba) = 0;
  *(undefined8 *)((long)pvVar6 + 0xb2) = 0;
  *(undefined8 *)((long)pvVar6 + 0xaa) = 0;
  *(undefined8 *)((long)pvVar6 + 0xe1) = 0;
  *(undefined8 *)((long)pvVar6 + 0xda) = 0;
  *(undefined8 *)((long)pvVar6 + 0xd2) = 0;
  *(undefined8 *)((long)pvVar6 + 0xca) = 0;
  *(undefined8 *)((long)pvVar6 + 0xfa) = 0;
  *(undefined8 *)((long)pvVar6 + 0xf2) = 0;
  *(undefined8 *)((long)pvVar6 + 0xea) = 0;
  *(undefined8 *)((long)pvVar6 + 0x112) = 0;
  *(undefined8 *)((long)pvVar6 + 0x11a) = 0;
  *(undefined4 *)((long)pvVar6 + 0x18a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x10) = 0;
  *(undefined8 *)((long)pvVar6 + 0x18) = 0;
  *(undefined8 *)((long)pvVar6 + 0x17a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x182) = 0;
  *(undefined8 *)((long)pvVar6 + 0x16a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x172) = 0;
  *(undefined8 *)((long)pvVar6 + 0x15a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x162) = 0;
  *(undefined8 *)((long)pvVar6 + 0x14a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x152) = 0;
  *(undefined8 *)((long)pvVar6 + 0x13a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x142) = 0;
  *(undefined8 *)((long)pvVar6 + 0x12a) = 0;
  *(undefined8 *)((long)pvVar6 + 0x132) = 0;
  memset((void *)((long)pvVar6 + 0x1aa),0,0x408);
  *(void **)(param_1 + 0xb0) = pvVar6;
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    pvVar6 = malloc(0x1cb8);
    *(void **)(param_1 + 200) = pvVar6;
LAB_01d8d0fc:
    pvVar6 = malloc(0x800);
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 != (long *)0x0) goto LAB_01d8d0c8;
      lVar9 = *(long *)puVar3;
      *(undefined8 *)(param_1 + 200) = 0;
      if (lVar9 == 0) goto LAB_01d8d0fc;
LAB_01d8d11c:
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar8 = (undefined8 *)(lVar9 + 8);
      if (lVar4 != 0) {
        puVar8 = (undefined8 *)(lVar4 + 0xa8);
      }
      param_2 = (long *)*puVar8;
      if (param_2 == (long *)0x0) {
        pvVar6 = (void *)0x0;
        goto LAB_01d8d160;
      }
    }
    else {
LAB_01d8d0c8:
      uVar7 = (**(code **)(*plVar5 + 0x30))(plVar5,0x1cb8,8);
      lVar9 = *(long *)puVar3;
      *(undefined8 *)(param_1 + 200) = uVar7;
      if (lVar9 == 0) goto LAB_01d8d0fc;
      if (param_2 == (long *)0x0) goto LAB_01d8d11c;
    }
    pvVar6 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x800,8);
  }
LAB_01d8d160:
  *(void **)(param_1 + 0x220) = pvVar6;
  return;
}

