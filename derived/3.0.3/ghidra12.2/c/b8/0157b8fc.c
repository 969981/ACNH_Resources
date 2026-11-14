
undefined8 FUN_0157b8fc(undefined8 param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined4 local_4;
  
  param_2 = (undefined8 *)*param_2;
  local_4 = 0;
  uVar1 = FUN_03eb43c0(param_2[2],0x82bfd,param_2[1],*param_2,*(undefined4 *)(param_2 + 3),
                       param_2[5],5,&local_4,0);
  param_2[4] = uVar1 & 0xffffffff;
  return 1;
}

