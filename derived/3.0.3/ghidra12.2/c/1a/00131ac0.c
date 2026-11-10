
undefined8 FUN_00131ac0(long param_1,short *param_2)

{
  short *psVar1;
  short sVar2;
  short *psVar3;
  short sVar4;
  
  psVar1 = (short *)(param_1 + 0x658dc);
  sVar2 = *psVar1;
  if (0x31 < sVar2) {
    return 0x9460;
  }
  if (0 < sVar2) {
    sVar4 = 0;
    psVar3 = (short *)(param_1 + 0x6428c);
    do {
      if (*psVar3 == *param_2) {
        sVar2 = FUN_00100410(psVar3,param_2);
        if (sVar2 == 0) {
          return 1;
        }
        sVar2 = *psVar1;
      }
      sVar4 = sVar4 + 1;
      psVar3 = psVar3 + 0x38;
    } while (sVar4 < sVar2);
  }
  FUN_00100350((short *)(param_1 + 0x6428c) + (long)sVar2 * 0x38,param_2);
  *psVar1 = *psVar1 + 1;
  return 0;
}

