
bool FUN_016e9008(undefined4 param_1,undefined8 *param_2,undefined4 param_3,byte param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 local_2c;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_2c = *param_2;
  local_14 = (uint)param_4;
  local_24 = *(undefined4 *)(param_2 + 1);
  local_1c = 0x3f800000;
  uStack_20 = param_1;
  local_18 = param_3;
  iVar1 = FUN_016ed290(&local_2c,param_5,param_6,param_7);
  return iVar1 != 0;
}

