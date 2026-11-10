
undefined4 FUN_0025975c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_002200e4(param_1 + 0xb8);
  if ((uVar1 & 1) != 0) {
    return 0;
  }
  uVar1 = FUN_002200e4(param_1 + 0xf8,param_2);
  if ((uVar1 & 1) != 0) {
    return 1;
  }
  uVar1 = FUN_002200e4(param_1 + 0x138,param_2);
  if ((uVar1 & 1) != 0) {
    return 2;
  }
  uVar1 = FUN_002200e4(param_1 + 0x178,param_2);
  if ((uVar1 & 1) != 0) {
    return 3;
  }
  uVar1 = FUN_002200e4(param_1 + 0x1b8,param_2);
  if ((uVar1 & 1) != 0) {
    return 4;
  }
  uVar1 = FUN_002200e4(param_1 + 0x1f8,param_2);
  if ((uVar1 & 1) != 0) {
    return 5;
  }
  uVar1 = FUN_002200e4(param_1 + 0x238,param_2);
  if ((uVar1 & 1) != 0) {
    return 6;
  }
  uVar1 = FUN_002200e4(param_1 + 0x278,param_2);
  uVar2 = 7;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

