
uint FUN_0028a680(uint param_1,int param_2)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  param_2 = param_2 + 1;
  do {
    param_2 = param_2 + -1;
    if (param_2 < 2) {
      uVar1 = param_1 - 1 & (param_1 ^ 0xffffffff);
      uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
      uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
      uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
      uVar1 = uVar1 + (uVar1 >> 8);
      return uVar1 + (uVar1 >> 0x10) & 0x3f;
    }
    param_1 = param_1 - 1 & param_1;
  } while (param_1 != 0);
  return 0xffffffff;
}

