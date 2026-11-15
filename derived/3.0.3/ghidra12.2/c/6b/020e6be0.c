
uint FUN_020e6be0(uint *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  if ((uVar2 != 0) &&
     (uVar1 = uVar2 - (uVar2 >> 1 & 0x55555555),
     uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333),
     uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f, uVar1 = uVar1 + (uVar1 >> 8),
     param_2 <= (int)(uVar1 + (uVar1 >> 0x10) & 0x3f))) {
    param_2 = param_2 + 1;
    do {
      param_2 = param_2 + -1;
      if (param_2 < 2) {
        uVar2 = uVar2 - 1 & (uVar2 ^ 0xffffffff);
        uVar2 = uVar2 - (uVar2 >> 1 & 0x55555555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        return uVar2 + (uVar2 >> 0x10) & 0x3f;
      }
      uVar2 = uVar2 - 1 & uVar2;
    } while (uVar2 != 0);
  }
  return 0xffffffff;
}

