
void FUN_02ccb94c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined **local_a8;
  undefined4 local_a0;
  undefined2 local_9c;
  byte local_9a;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 uStack_80;
  undefined2 uStack_78;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined4 local_74;
  undefined *local_70;
  char *pcStack_68;
  
  lVar10 = param_1[0x13];
  uVar8 = (**(code **)(*param_1 + 0x270))();
  puVar5 = PTR_DAT_04bb2718;
  local_a0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_a8 = (undefined **)(PTR_DAT_04bc5008 + 0x10);
  local_88 = (undefined4)uVar8;
  uVar6 = local_88;
  uStack_84 = (undefined4)((ulong)uVar8 >> 0x20);
  uVar7 = uStack_84;
  local_9c = 1;
  local_98 = 0xffffffff;
  uVar8 = (**(code **)(*param_1 + 0x280))(param_1);
  puVar4 = PTR_DAT_04bb2020;
  local_9a = *(byte *)(param_1 + 0x3f);
  local_90 = (undefined4)uVar8;
  uStack_8c = (undefined4)((ulong)uVar8 >> 0x20);
  if (7 < local_9a) {
    local_9a = 0xff;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "NameWindowCtrlSeq";
  local_70 = puVar1;
  lVar9 = FUN_02bcffa8(lVar10,&local_70,param_1,&local_a8);
  param_1[0x3854] = lVar9;
  local_a8 = &PTR_LAB_04ab7928;
  local_9a = *(byte *)(param_1 + 0x3f);
  if (7 < local_9a) {
    local_9a = 0xff;
  }
  local_a0 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0x418) + 0xc);
  local_9c = 1;
  local_98 = 0xffffffff;
  uStack_78 = 0;
  local_90 = uVar6;
  uStack_8c = uVar7;
  uVar8 = (**(code **)(*param_1 + 0x288))(param_1);
  uStack_80 = param_1 + 0x67;
  local_88 = (undefined4)uVar8;
  uStack_84 = (undefined4)((ulong)uVar8 >> 0x20);
  pcStack_68 = "OutfitSelectCtrlSeq";
  local_70 = puVar1;
  lVar9 = FUN_02ccbc34(lVar10,&local_70,param_1,&local_a8);
  puVar2 = PTR_DAT_04bb6298;
  param_1[0x3855] = lVar9;
  sVar3 = *(short *)puVar2;
  if (sVar3 != -1) {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      local_a8 = (undefined **)(PTR_DAT_04bc5bf0 + 0x10);
      local_a0 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0x418) + 0xc);
      local_9c = 1;
      local_98 = 0xffffffff;
      uStack_8c = 0;
      local_88 = 0;
      uStack_84 = 0;
      FUN_007ef010(&uStack_80,PTR_DAT_04bb3170);
      uStack_94 = 1;
      local_90 = 1;
      uStack_80._4_4_ = 0xffffffff;
      uStack_78 = 0x101;
      uStack_76 = 0;
      uStack_75 = 0;
      local_9a = *(byte *)(param_1 + 0x3f);
      if (7 < local_9a) {
        local_9a = 0xff;
      }
      local_70 = puVar4 + 0x10;
      pcStack_68 = "cCloudIslandMyDesignList";
      lVar10 = FUN_02ca07f4(lVar10,&local_70,param_1,&local_a8);
      param_1[0x3857] = lVar10;
      return;
    }
  }
  local_a8 = (undefined **)(PTR_DAT_04bc5040 + 0x10);
  local_a0 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0x418) + 0xc);
  local_9c = 1;
  local_98 = 0xffffffff;
  uStack_8c = 0;
  local_88 = 0;
  uStack_84 = 0;
  FUN_007ef010(&uStack_80,PTR_DAT_04bb3170);
  local_9a = *(byte *)(param_1 + 0x3f);
  uStack_80._4_4_ = 0xffffffff;
  uStack_76 = 1;
  local_74 = 0;
  uStack_94 = 1;
  local_90 = 0;
  uStack_78 = 0x101;
  if (7 < local_9a) {
    local_9a = 0xff;
  }
  pcStack_68 = "cMyDesignList";
  local_70 = puVar1;
  lVar10 = FUN_02bd043c(lVar10,&local_70,param_1,&local_a8);
  param_1[0x3856] = lVar10;
  return;
}

