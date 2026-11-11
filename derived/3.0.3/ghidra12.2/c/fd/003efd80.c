
uint FUN_003efd80(long param_1,undefined8 param_2,undefined2 param_3,undefined1 param_4)

{
  uint uVar1;
  undefined1 local_8 [4];
  undefined2 local_4 [2];
  
  local_8[0] = param_4;
  local_4[0] = param_3;
  uVar1 = FUN_003efb78(param_1 + 8,param_2,local_4,local_8);
  return uVar1 & 1;
}

