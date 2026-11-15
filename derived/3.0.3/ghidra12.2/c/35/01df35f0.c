
undefined8 FUN_01df35f0(long *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (((param_3 == 0) || (uVar1 = FUN_01df33d0(param_3,param_2,param_4), (uVar1 & 1) == 0)) ||
     (uVar1 = FUN_006f5580(param_1,param_3), (uVar1 & 1) == 0)) {
    (**(code **)(*param_1 + 0x38))(param_1);
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

