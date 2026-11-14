
bool FUN_0180e4c0(void)

{
  ulong uVar1;
  
  if (DAT_05292338 != 0) {
    uVar1 = FUN_017f8ef0(DAT_05292338 + 0xda0);
    if ((uVar1 & 1) != 0) {
      if (DAT_05292338 == 0) {
        return true;
      }
      return (*(byte *)(DAT_05292338 + 0xedc) & 0x40) == 0;
    }
    if (DAT_05292338 != 0) {
      return (bool)(*(byte *)(DAT_05292338 + 0xedc) >> 6 & 1);
    }
  }
  return false;
}

