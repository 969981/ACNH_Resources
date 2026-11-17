
void FUN_02e19ed4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined *local_98;
  undefined4 local_90;
  undefined1 local_8c [4];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined8 local_6c;
  undefined4 local_64;
  undefined *local_60;
  char *pcStack_58;
  
  puVar5 = PTR_DAT_04bb2718;
  puVar4 = PTR_DAT_04bb2020;
  uVar9 = *(undefined8 *)(param_1 + 0x98);
  local_90 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_8c._0_3_ = 0xff0001;
  local_88 = 0xffffffff;
  local_98 = PTR_DAT_04bc5008 + 0x10;
  lVar7 = *(long *)(param_1 + 0x220);
  local_78 = (undefined4)lVar7;
  uStack_74 = (undefined4)((ulong)lVar7 >> 0x20);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "/L_ItemName_00";
  local_60 = puVar1;
  uVar6 = FUN_02bcb7b8(**(long **)(lVar7 + 0x3f8) + 0x38,&local_60);
  local_80 = (undefined4)uVar6;
  uStack_7c = (undefined4)((ulong)uVar6 >> 0x20);
  pcStack_58 = "NameWindowCtrlSeq";
  local_60 = puVar1;
  uVar6 = FUN_02bcffa8(uVar9,&local_60,param_1,&local_98);
  puVar2 = PTR_DAT_04bb6298;
  *(undefined8 *)(param_1 + 0x250) = uVar6;
  sVar3 = *(short *)puVar2;
  if (sVar3 != -1) {
    puVar2 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
    if (0xff < (uint)(int)sVar3) {
      puVar2 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar2 + 4) & 1) != 0) {
      local_98 = PTR_DAT_04bc5bf0 + 0x10;
      local_90 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0x418) + 0xc);
      local_8c._0_2_ = 1;
      local_88 = 0xffffffff;
      uStack_7c = 0;
      local_78 = 0;
      uStack_74 = 0;
      FUN_007ef010(auStack_70,PTR_DAT_04bb3170);
      uStack_84 = 1;
      local_80 = 1;
      local_6c = 0x100ffffffff;
      bVar8 = *(byte *)(param_1 + 0x1f8);
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      local_60 = puVar4 + 0x10;
      local_8c[2] = bVar8;
      pcStack_58 = "CloudIslandMyDesignListSeq";
      uVar6 = FUN_02ca07f4(uVar9,&local_60,param_1,&local_98);
      *(undefined8 *)(param_1 + 0x230) = uVar6;
      return;
    }
  }
  local_98 = PTR_DAT_04bc5040 + 0x10;
  local_90 = *(undefined4 *)(*(long *)(*(long *)puVar5 + 0x418) + 0xc);
  local_8c._0_2_ = 1;
  local_88 = 0xffffffff;
  uStack_7c = 0;
  local_78 = 0;
  uStack_74 = 0;
  FUN_007ef010(auStack_70,PTR_DAT_04bb3170);
  uStack_84 = 1;
  local_80 = 1;
  bVar8 = *(byte *)(param_1 + 0x1f8);
  local_6c = CONCAT17(local_6c._7_1_,0x10100ffffffff);
  local_64 = 0;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_8c[2] = bVar8;
  pcStack_58 = "MyDesignListSeq";
  local_60 = puVar1;
  uVar6 = FUN_02bd043c(uVar9,&local_60,param_1,&local_98);
  *(undefined8 *)(param_1 + 0x228) = uVar6;
  return;
}

