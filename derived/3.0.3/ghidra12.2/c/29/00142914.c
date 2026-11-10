
undefined8
FUN_00142914(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  undefined8 uVar1;
  
  uVar1 = 2;
  if ((((param_2 != 0) && (param_3 != 0)) && (param_4 != 0)) && ((param_5 != 0 && (param_6 != 0))))
  {
    if (DAT_04c57ad8 == 0) {
      FUN_001432b8(param_2,param_3,param_4,param_5,param_6);
      uVar1 = FUN_00142894(param_1,0);
      return uVar1;
    }
    uVar1 = 0;
    DAT_04c57ad8 = DAT_04c57ad8 + 1;
  }
  return uVar1;
}

