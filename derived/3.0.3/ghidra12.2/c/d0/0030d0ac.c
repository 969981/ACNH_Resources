
undefined8 FUN_0030d0ac(long *param_1)

{
  ulong uVar1;
  
  if (((int)param_1[0xc5] == 0) &&
     (uVar1 = (**(code **)(*param_1 + 0x38))(param_1,1), (uVar1 & 1) != 0)) {
    return 1;
  }
  return 0;
}

