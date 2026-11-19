
ulong FUN_03c35820(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  
  uVar1 = FUN_03c32c90(param_1,param_4,param_5,param_6,param_7);
  if (uVar1 < 0xffffffffffffff89) {
    if (uVar1 <= param_5 && param_5 - uVar1 != 0) {
      uVar1 = FUN_03c32e00(param_2,param_3,param_4 + uVar1,param_5 - uVar1,param_1);
      return uVar1;
    }
    uVar1 = 0xffffffffffffffb8;
  }
  return uVar1;
}

