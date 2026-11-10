
undefined8 FUN_0025a244(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0021fea0(param_1 + 0x2c8);
  if ((uVar1 & 1) != 0) {
    uVar1 = FUN_0021fea0(param_1 + 0x2a8);
    if ((uVar1 & 1) != 0) {
      uVar2 = FUN_002200e4(param_1 + 0x2a8,param_1 + 0x2c8);
      return uVar2;
    }
  }
  return 0;
}

