
undefined8 FUN_029c2b90(long param_1,undefined8 *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_60;
  char *local_58;
  undefined2 local_50;
  undefined4 local_4c;
  undefined *local_48;
  undefined *puStack_40;
  undefined8 local_38;
  
  *(undefined4 *)(param_1 + 0x2dcc) = 8;
  puVar1 = PTR_DAT_04bb2020;
  local_4c = 0x44b1a91c;
  local_50 = 0x100;
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0x80);
  local_58 = (char *)*param_2;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  puStack_40 = &DAT_040e065c;
  local_38 = 0x3c23d70a;
  FUN_02a066f0(param_1 + 0x10,&local_60);
  FUN_02a066f0(param_1 + 0x16b0,&local_60);
  lVar3 = 0;
  if (DAT_05aebb78 != 0) {
    lVar3 = *(long *)(DAT_05aebb78 + 0x28);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      local_60 = puVar1 + 0x10;
      local_58 = "BGM_Pyontaro_Field";
      lVar2 = FUN_03baddf0(lVar3,&local_60);
      lVar3 = *(long *)(lVar3 + 0x88);
      if (lVar2 != 0) {
        lVar3 = lVar2;
      }
    }
  }
  *(long *)(param_1 + 0x2dd0) = lVar3;
  *(undefined8 *)(param_1 + 0x2e08) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x2de8) = 0;
  *(undefined8 *)(param_1 + 0x2df0) = 0;
  *(undefined8 *)(param_1 + 0x2df8) = 0;
  *(undefined8 *)(param_1 + 0x2e00) = 0;
  return 1;
}

