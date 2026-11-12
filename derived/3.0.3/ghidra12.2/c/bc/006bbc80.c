
undefined4 FUN_006bbc80(void)

{
  ulong uVar1;
  
  uVar1 = fpcr;
  uVar1 = (uVar1 >> 0x16 & 3) - 1;
  if (uVar1 < 3) {
    return *(undefined4 *)(&DAT_0414d648 + uVar1 * 4);
  }
  return 0;
}

