
undefined8 FUN_02e6b0e8(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  short local_18 [4];
  
  uVar1 = FUN_02cd9040(param_3);
  if ((((uVar1 & 0xfffffffe) == 4) && (FUN_02e6ad48(local_18,param_1), local_18[0] != -2)) &&
     (uVar1 = FUN_0277d7b4(param_3,local_18), (uVar1 & 1) != 0)) {
    *param_2 = 7;
    return 0;
  }
  return 1;
}

