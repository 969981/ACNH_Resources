
undefined8 FUN_02649430(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0277d7b4(&DAT_0555ce20,param_1);
  if (((((uVar1 & 1) == 0) && (uVar1 = FUN_0277d7b4(&DAT_0555ce28,param_1), (uVar1 & 1) == 0)) &&
      (uVar1 = FUN_0277d7b4(&DAT_0555ce30,param_1), (uVar1 & 1) == 0)) &&
     (((uVar1 = FUN_0277d7b4(&DAT_0555ce38,param_1), (uVar1 & 1) == 0 &&
       (uVar1 = FUN_0277d7b4(&DAT_0555ce40,param_1), (uVar1 & 1) == 0)) &&
      ((uVar1 = FUN_0277d7b4(&DAT_0555ce48,param_1), (uVar1 & 1) == 0 &&
       (uVar1 = FUN_0277d7b4(&DAT_0555ce50,param_1), (uVar1 & 1) == 0)))))) {
    uVar2 = FUN_0277d7b4(&DAT_0555ce58,param_1);
    return uVar2;
  }
  return 1;
}

