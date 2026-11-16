
void FUN_027fa50c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined **local_78;
  long local_70;
  undefined *local_68;
  undefined8 uStack_60;
  int local_54;
  undefined *local_50;
  char *pcStack_48;
  
  local_78 = (undefined **)0x94d;
  FUN_0277d4ac(&local_78);
  iVar3 = FUN_027f9e60(param_1,&local_78);
  local_70 = param_1 + 0xb8;
  local_78 = &PTR_LAB_04a91620;
  uVar5 = *(uint *)(param_1 + 0x158);
  local_68 = PTR_LAB_04bc3870;
  uStack_60 = 0;
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  FUN_0277ba50(uVar5,param_2,&local_78);
  local_78 = (undefined **)(PTR_DAT_04bc3868 + 0x10);
  local_68 = PTR_LAB_04bc3860;
  uStack_60 = 0;
  uVar5 = *(uint *)(param_1 + 0xa0);
  if (0x13 < uVar5) {
    uVar5 = 0x14;
  }
  local_70 = param_1;
  FUN_0277ba50(uVar5,param_2,&local_78);
  local_78 = (undefined **)0x94d;
  FUN_0277d4ac(&local_78);
  iVar4 = FUN_027f9e60(param_1,&local_78);
  if (iVar3 == iVar4) {
    return;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "visitor_johnny_broken_parts";
  local_50 = puVar1;
  FUN_026012f4(&local_78,&local_50,param_2);
  ppuVar2 = (undefined **)(PTR_DAT_04bc34c8 + 0x10);
  local_50 = (undefined *)0x94d;
  local_78 = ppuVar2;
  FUN_0277d4ac(&local_50);
  iVar4 = FUN_027f9e60(param_1,&local_50);
  FUN_02602950(&local_78,0x3e);
  pcStack_48 = "BrokenPartsNum";
  local_50 = puVar1;
  if (local_70 != 0) {
    FUN_026054d0(local_70,&local_50,(long)(iVar3 - iVar4));
  }
  local_78 = ppuVar2;
  iVar3 = FUN_025ee790(&local_78);
  if (iVar3 != -1) {
    iVar3 = (*(code *)local_78[4])(&local_78);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar3);
    if (iVar3 < 0xd) goto LAB_027fa6a4;
  }
  if (local_54 == 0) {
    local_54 = 1;
  }
LAB_027fa6a4:
  FUN_02601530(&local_78);
  return;
}

