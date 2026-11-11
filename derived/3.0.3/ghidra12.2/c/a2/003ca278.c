
void FUN_003ca278(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  byte bVar1;
  char *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined8 local_50;
  long lStack_48;
  
  *(undefined4 *)(param_1 + 0x3d8) = param_6;
  FUN_003cb0ac(&local_78);
  local_78 = "nn::atk::detail::driver::SoundThread";
  local_50 = 0;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_5;
  uStack_5c = param_6;
  local_58 = param_2;
  lStack_48 = param_1;
  bVar1 = FUN_003cb0d8(param_1 + 8,&local_78);
  *(byte *)(param_1 + 0x3dc) = bVar1 & 1;
  return;
}

