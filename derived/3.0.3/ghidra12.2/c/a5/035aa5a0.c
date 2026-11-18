
undefined8 FUN_035aa5a0(int param_1,int param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_035aa210(param_1 + -1,param_2 + -1);
  if (((((uVar1 & 1) == 0) || (uVar1 = FUN_035aa210(param_1 + -1,param_2,param_3), (uVar1 & 1) == 0)
       ) || (uVar1 = FUN_035aa210(param_1,param_2 + -1,param_3), (uVar1 & 1) == 0)) ||
     (uVar1 = FUN_035aa210(param_1,param_2,param_3), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

