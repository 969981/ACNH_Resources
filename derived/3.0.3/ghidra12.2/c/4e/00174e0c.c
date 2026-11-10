
undefined8 FUN_00174e0c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_d0 [128];
  
  if (param_1 == 0) {
    uVar1 = 0x2b;
  }
  else {
    uVar1 = FUN_00174e80(param_1,param_2,auStack_d0 + 0x80);
  }
  return uVar1;
}

