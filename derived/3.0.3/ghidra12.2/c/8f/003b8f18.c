
undefined4 FUN_003b8f18(long param_1)

{
  short *psVar1;
  
  psVar1 = (short *)(param_1 + 0x14);
  if (((*psVar1 != 0x2002) && (psVar1 = (short *)(param_1 + 0x20), *psVar1 != 0x2002)) &&
     (psVar1 = (short *)(param_1 + 0x2c), *psVar1 != 0x2002)) {
    psVar1 = (short *)0x0;
  }
  return *(undefined4 *)(psVar1 + 2);
}

