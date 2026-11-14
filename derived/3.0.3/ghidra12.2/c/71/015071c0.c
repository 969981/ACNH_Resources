
undefined8 FUN_015071c0(undefined8 param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01507210();
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_01505780(param_1,param_2 + 0x10), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

