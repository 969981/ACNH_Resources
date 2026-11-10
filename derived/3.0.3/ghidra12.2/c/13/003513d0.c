
undefined4 FUN_003513d0(ushort param_1)

{
  undefined4 uVar1;
  
  if (0x400 < param_1) {
    return 0;
  }
  if (0x200 < param_1) {
    return 10;
  }
  if (0x100 < param_1) {
    return 9;
  }
  if (0x80 < param_1) {
    return 8;
  }
  if (0x40 < param_1) {
    return 7;
  }
  if (0x20 < param_1) {
    return 6;
  }
  uVar1 = 4;
  if (0x10 < param_1) {
    uVar1 = 5;
  }
  return uVar1;
}

