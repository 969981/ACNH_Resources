
undefined4 FUN_003dba90(long param_1)

{
  short sVar1;
  long lVar2;
  short *psVar3;
  
  if (*(short *)(param_1 + 0x14) == 0x4000) {
    return *(undefined4 *)(param_1 + 0x1c);
  }
  lVar2 = 0;
  psVar3 = (short *)(param_1 + 0x20);
  do {
    sVar1 = *psVar3;
    lVar2 = lVar2 + 1;
    psVar3 = psVar3 + 6;
  } while (sVar1 != 0x4000);
  return *(undefined4 *)(param_1 + lVar2 * 0xc + 0x1c);
}

