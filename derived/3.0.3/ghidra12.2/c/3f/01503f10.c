
undefined8 FUN_01503f10(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_01503f54();
  if (((uVar1 & 1) == 0) || (uVar1 = FUN_01505780(param_1,param_2), (uVar1 & 1) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

