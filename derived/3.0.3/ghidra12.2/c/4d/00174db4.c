
undefined8 FUN_00174db4(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  FUN_00143300(*param_1);
  *param_1 = 0;
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = FUN_00143320(param_2);
    if (lVar1 == 0) {
      uVar2 = 0x1b;
    }
    else {
      uVar2 = 0;
      *param_1 = lVar1;
    }
  }
  return uVar2;
}

