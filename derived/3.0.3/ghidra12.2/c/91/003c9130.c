
undefined4 FUN_003c9130(long param_1)

{
  short *psVar1;
  short *psVar2;
  
  psVar2 = (short *)(param_1 + 0x20);
  if (*psVar2 != 0x6800) {
    psVar2 = (short *)0x0;
  }
  psVar1 = (short *)(param_1 + 0x14);
  if (*(short *)(param_1 + 0x14) != 0x6800) {
    psVar1 = psVar2;
  }
  return *(undefined4 *)(psVar1 + 2);
}

