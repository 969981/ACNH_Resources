
void FUN_00325b84(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 4) = 0x101;
  *(undefined8 *)((long)param_1 + 0x24) = 0x417fd70a;
  uVar1 = (**(code **)(*param_3 + 0x20))(param_3,param_1 + 3);
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 8) = 0x202;
  *(undefined8 *)((long)param_1 + 0x44) = 0x417fd70a;
  uVar1 = (**(code **)(*param_3 + 0x20))(param_3,param_1 + 7);
  param_1[2] = uVar1;
  return;
}

