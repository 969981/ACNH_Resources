
undefined8 FUN_006bbcb0(void)

{
  ulong uVar1;
  
  uVar1 = fpsr;
  fpsr = uVar1 | 0x10;
  return 0;
}

