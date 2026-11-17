
undefined8 FUN_02a1c124(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_70;
  char *local_68;
  undefined2 local_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined *puStack_50;
  undefined8 local_48;
  
  local_70 = (undefined *)*param_2;
  FUN_0298cc58(param_1 + 8,&local_70);
  *(long *)PTR_DAT_04bc3dc0 = param_1 + 8;
  local_70 = (undefined *)*param_2;
  FUN_029e56ec(param_1 + 0x7448,&local_70);
  local_60 = 0x100;
  *(long *)PTR_DAT_04bc4058 = param_1 + 0x7448;
  puVar1 = PTR_DAT_04bb2020;
  local_5c = 0x44b1a91c;
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0x80);
  local_68 = (char *)*param_2;
  *(undefined4 *)(param_1 + 0xa2c4) = 0;
  local_58 = puVar1 + 0x10;
  puStack_50 = &DAT_040c6364;
  local_48 = 0x3c23d70a;
  FUN_02a066f0(param_1 + 0x8ba8,&local_70);
  lVar3 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    lVar3 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      local_70 = puVar1 + 0x10;
      local_68 = "AudioFtr_M";
      lVar2 = FUN_03baddf0(lVar3,&local_70);
      lVar3 = *(long *)(lVar3 + 0x88);
      if (lVar2 != 0) {
        lVar3 = lVar2;
      }
    }
  }
  puVar1 = PTR_DAT_04bc4198;
  *(long *)(param_1 + 0xa2c8) = lVar3;
  *(long *)puVar1 = param_1 + 0x8b90;
  local_70 = (undefined *)*param_2;
  FUN_029c2b90(param_1 + 0xa2d0,&local_70);
  *(long *)PTR_DAT_04bc3f28 = param_1 + 0xa2d0;
  local_70 = (undefined *)*param_2;
  FUN_029ae378(param_1 + 0xd0e0,&local_70);
  *(long *)PTR_DAT_04bc3e58 = param_1 + 0xd0e0;
  local_70 = (undefined *)*param_2;
  FUN_029dd560(param_1 + 0xfef0,&local_70);
  *(long *)PTR_DAT_04bc4038 = param_1 + 0xfef0;
  return 1;
}

