
void FUN_02f033e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte *param_4)

{
  undefined *local_78;
  char *pcStack_70;
  undefined *local_68;
  undefined4 local_60;
  undefined2 local_5c;
  byte local_5a;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined2 local_38;
  undefined1 local_36;
  undefined4 local_34;
  
  local_68 = PTR_DAT_04bc5040 + 0x10;
  local_60 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_5c = 1;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_4c = 0;
  local_44 = 0;
  FUN_007ef010(auStack_40,PTR_DAT_04bb3170);
  local_5a = *param_4;
  local_3c = 0xffffffff;
  local_36 = 1;
  local_34 = 0;
  local_38 = 0x101;
  if (7 < local_5a) {
    local_5a = 0xff;
  }
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "MyDesignListSeq";
  FUN_02e9b8ec(param_2,&local_78,&local_68);
  return;
}

