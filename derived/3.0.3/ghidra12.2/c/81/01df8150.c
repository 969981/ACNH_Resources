
byte FUN_01df8150(undefined8 param_1)

{
  bool bVar1;
  long local_a8 [2];
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined6 local_6c;
  undefined2 uStack_66;
  undefined6 uStack_64;
  undefined4 local_5e;
  undefined1 local_5a;
  undefined2 local_58;
  undefined4 local_56;
  undefined1 local_52;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined2 local_3e;
  undefined2 local_3c;
  byte local_3a;
  undefined1 auStack_38 [24];
  
  FUN_02645730(auStack_38);
  local_98 = 0;
  local_80 = 2;
  local_8c = 0;
  local_84 = 0;
  uStack_94 = 0;
  uStack_90 = 0;
  local_7c = 0;
  local_74 = 0;
  local_6c = 0;
  uStack_66 = 0;
  uStack_64 = 0;
  local_5e = 0x101;
  local_5a = 0;
  local_58 = 0;
  local_56 = 0x101;
  local_52 = 0;
  local_40 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_3e = *(undefined2 *)PTR_DAT_04bb3170;
  local_3c = 0;
  local_3a = 0;
  local_a8[0] = 0;
  local_a8[1] = 0;
  FUN_02645a90(auStack_38,local_a8,param_1);
  bVar1 = false;
  if (local_a8[0] != 0) {
    bVar1 = (int)local_7c != 0 && local_98 != 0;
  }
  return bVar1 & local_3a;
}

