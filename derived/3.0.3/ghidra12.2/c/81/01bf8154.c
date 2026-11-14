
undefined1 FUN_01bf8154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  undefined8 local_71b8;
  undefined1 auStack_71b0 [8];
  undefined *local_71a8;
  undefined8 *puStack_71a0;
  undefined *local_7198;
  undefined8 uStack_7190;
  undefined *local_7178;
  undefined1 auStack_7160 [6192];
  undefined *local_5930;
  undefined1 auStack_5918 [6200];
  undefined8 local_40e0;
  undefined8 *local_40d8;
  undefined1 *local_40d0;
  undefined1 uStack_40c8;
  undefined8 local_40c0;
  undefined8 local_40b8;
  undefined4 local_40b0;
  undefined *local_40a8;
  undefined1 *local_40a0;
  undefined4 local_4098;
  undefined1 local_4094 [63];
  undefined1 local_4055;
  undefined1 auStack_4050 [16384];
  
  memset(auStack_4050,0,0x4000);
  local_40b0 = 0;
  local_40b8 = 0xffffffff;
  local_40c0 = 0xffffffff00000000;
  local_40a0 = local_4094;
  local_4098 = 0x40;
  local_4055 = 0;
  local_4094[0] = 0;
  local_40a8 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_01bd9080(&local_40c0,param_3);
  local_71b8 = param_1;
  FUN_01bf1db8(auStack_71b0,param_1);
  uStack_40c8 = 0;
  local_71a8 = PTR_DAT_04bc0c20 + 0x10;
  local_7198 = PTR_FUN_04bc0c18;
  uStack_7190 = 0;
  puStack_71a0 = &local_71b8;
  local_40e0 = param_2;
  local_40d8 = &local_40c0;
  local_40d0 = auStack_4050;
  FUN_01bf1510(&local_71b8);
  uVar2 = uStack_40c8;
  puVar1 = PTR_DAT_04bc0be0 + 0x10;
  local_5930 = puVar1;
  FUN_01be6b58(auStack_5918);
  local_7178 = puVar1;
  FUN_01be6b58(auStack_7160);
  return uVar2;
}

