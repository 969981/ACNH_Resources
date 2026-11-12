
uint FUN_00694a80(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  long local_50 [4];
  undefined1 local_14 [4];
  
  if (param_3 == 0) {
    return 0;
  }
  local_50[2] = 0;
  local_50[3] = 0;
  local_50[0] = 0;
  local_50[1] = 0;
  FUN_00695e1c(local_50);
  FUN_00695e34(local_50,param_2,param_3);
  *(undefined8 *)(param_1 + 0x218) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  FUN_00693df8(param_1 + 8);
  uVar2 = FUN_00694b3c(param_1,local_50);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  local_14[0] = 0;
  uVar1 = (**(code **)(local_50[0] + 0x10))(local_50,local_14,1);
  return (uVar1 ^ 1) & 1;
}

