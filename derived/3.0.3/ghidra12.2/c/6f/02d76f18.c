
void FUN_02d76f18(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *local_98;
  undefined4 local_90;
  undefined2 local_8c;
  byte local_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [4];
  undefined8 local_6c;
  undefined *local_60;
  char *pcStack_58;
  
  puVar2 = PTR_DAT_04bb2718;
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  local_90 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_8c = 1;
  local_88 = 0xffffffff;
  local_98 = PTR_DAT_04bc5008 + 0x10;
  lVar4 = *(long *)(param_1 + 0x210);
  local_78 = (undefined4)lVar4;
  uStack_74 = (undefined4)((ulong)lVar4 >> 0x20);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "/L_ItemName_00";
  local_60 = puVar1;
  uVar3 = FUN_02bcb7b8(**(long **)(lVar4 + 0x3f8) + 0x38,&local_60);
  local_8a = *(byte *)(param_1 + 0x1f8);
  local_80 = (undefined4)uVar3;
  uStack_7c = (undefined4)((ulong)uVar3 >> 0x20);
  pcStack_58 = "NameWindowCtrlSeq";
  if (7 < local_8a) {
    local_8a = 0xff;
  }
  local_60 = puVar1;
  uVar3 = FUN_02bcffa8(uVar5,&local_60,param_1,&local_98);
  lVar4 = *(long *)puVar2;
  *(undefined8 *)(param_1 + 0x230) = uVar3;
  local_98 = PTR_DAT_04bc5bf0 + 0x10;
  local_90 = *(undefined4 *)(*(long *)(lVar4 + 0x418) + 0xc);
  local_8c = 1;
  local_88 = 0xffffffff;
  uStack_7c = 0;
  local_78 = 0;
  uStack_74 = 0;
  FUN_007ef010(auStack_70,PTR_DAT_04bb3170);
  pcStack_58 = "CloudIslandMyDesignListSeq";
  local_6c = 0x100ffffffff;
  uStack_84 = 1;
  local_80 = 1;
  local_8a = *(byte *)(param_1 + 0x1f8);
  if (7 < local_8a) {
    local_8a = 0xff;
  }
  local_60 = puVar1;
  uVar3 = FUN_02ca07f4(uVar5,&local_60,param_1,&local_98);
  *(undefined8 *)(param_1 + 0x298) = uVar3;
  return;
}

