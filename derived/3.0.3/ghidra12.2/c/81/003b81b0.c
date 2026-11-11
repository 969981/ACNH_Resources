
ulong FUN_003b81b0(ulong param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 != 2) {
        return 0;
      }
      uVar1 = param_1 / 0xe << 3;
      if (param_1 % 0xe == 0) {
        return uVar1;
      }
      return (uVar1 | 1) + (param_1 % 0xe + 1 >> 1);
    }
    param_1 = param_1 << 1;
  }
  return param_1;
}

