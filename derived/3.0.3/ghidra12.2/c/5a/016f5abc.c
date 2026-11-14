
undefined8 FUN_016f5abc(undefined4 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_016eb1a0(param_2,1);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_016eb1a0(param_1,param_2,0);
    return uVar2;
  }
  return 1;
}

