
undefined8 FUN_00172448(long *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0x100;
  lVar1 = FUN_00168a1c(param_2,0x100,8);
  *param_1 = lVar1;
  if (lVar1 == 0) {
    uVar2 = 0xfffffc7b;
  }
  else {
    uVar2 = 0;
    param_1[2] = 0;
  }
  return uVar2;
}

