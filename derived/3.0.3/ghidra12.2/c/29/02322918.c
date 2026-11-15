
undefined8 FUN_02322918(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_023281fc();
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_02324d54(param_1);
    return uVar2;
  }
  return 1;
}

