
ulong FUN_036d4a88(int param_1)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_1 == 0) {
    uVar1 = 1;
  }
  else if (param_1 == 2) {
    uVar1 = FUN_02b8ec50(0x23);
    uVar1 = uVar1 ^ 1;
  }
  else {
    if (param_1 == 1) {
      uVar2 = FUN_02b8ec50(0x23);
      return uVar2;
    }
    uVar1 = 0;
  }
  return (ulong)(uVar1 & 1);
}

