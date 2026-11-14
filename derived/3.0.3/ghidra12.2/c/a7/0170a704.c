
undefined8 FUN_0170a704(long *param_1,undefined4 param_2)

{
  undefined4 local_30 [4];
  
  if ((param_1[0x227] == 0) || (local_30[0] = 1, (*(uint *)(param_1 + 0x2d3) >> 1 & 1) == 0)) {
    (**(code **)(*param_1 + 0x228))(local_30,param_1);
    FUN_017029bc(param_1,local_30,param_2,0,0);
  }
  else {
    FUN_01707f58(param_1,param_2,1,0);
  }
  return 1;
}

