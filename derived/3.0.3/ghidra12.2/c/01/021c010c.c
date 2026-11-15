
undefined8 FUN_021c010c(long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  lVar1 = 0x55e60;
  if ((param_3 & 1) == 0) {
    lVar1 = 0x55eb0;
  }
  param_1 = param_1 + lVar1;
  uVar2 = FUN_0277d7b4(param_1);
  if (((((((uVar2 & 1) == 0) && (uVar2 = FUN_0277d7b4(param_1 + 8,param_2), (uVar2 & 1) == 0)) &&
        (uVar2 = FUN_0277d7b4(param_1 + 0x10,param_2), (uVar2 & 1) == 0)) &&
       ((uVar2 = FUN_0277d7b4(param_1 + 0x18,param_2), (uVar2 & 1) == 0 &&
        (uVar2 = FUN_0277d7b4(param_1 + 0x20,param_2), (uVar2 & 1) == 0)))) &&
      ((uVar2 = FUN_0277d7b4(param_1 + 0x28,param_2), (uVar2 & 1) == 0 &&
       ((uVar2 = FUN_0277d7b4(param_1 + 0x30,param_2), (uVar2 & 1) == 0 &&
        (uVar2 = FUN_0277d7b4(param_1 + 0x38,param_2), (uVar2 & 1) == 0)))))) &&
     (uVar2 = FUN_0277d7b4(param_1 + 0x40,param_2), (uVar2 & 1) == 0)) {
    uVar3 = FUN_0277d7b4(param_1 + 0x48,param_2);
    return uVar3;
  }
  return 1;
}

