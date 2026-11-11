
uint FUN_003c3180(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                 undefined8 param_9)

{
  uint uVar1;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined1 local_70;
  
  FUN_003c2fec(&local_88);
  local_88 = param_2;
  uStack_84 = param_3;
  local_80 = param_4;
  uStack_7c = param_5;
  local_70 = param_6;
  uVar1 = FUN_003c3210(param_1,&local_88,param_8,param_9,0);
  return uVar1 & 1;
}

