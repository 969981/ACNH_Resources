
uint FUN_018b36bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  float local_1c [3];
  
  local_1c[1] = 0.0;
  local_1c[0] = (float)*(int *)(param_3 + 8) * 5.0 + 5.0;
  local_1c[2] = (float)*(int *)(param_3 + 0xc) * 5.0 + 5.0;
  uVar1 = FUN_018b3710(param_1,local_1c,0);
  return uVar1 & 1;
}

