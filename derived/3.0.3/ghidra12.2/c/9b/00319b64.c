
uint FUN_00319b64(long param_1,undefined8 param_2,undefined4 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined1 local_8 [4];
  undefined4 local_4;
  
  local_8[0] = param_4;
  local_4 = param_3;
  uVar1 = FUN_00319b8c(param_1 + 0x20,param_2,&local_4,local_8);
  return uVar1 & 1;
}

