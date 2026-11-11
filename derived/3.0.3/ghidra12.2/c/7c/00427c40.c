
undefined8 FUN_00427c40(long *param_1)

{
  short sVar1;
  short sVar2;
  undefined8 *puVar3;
  short *psVar4;
  undefined8 *puVar5;
  uint uVar6;
  short *psVar7;
  
  puVar5 = (undefined8 *)param_1[3];
  if (puVar5 == (undefined8 *)param_1[2]) {
    return 0;
  }
  psVar4 = (short *)0x0;
  puVar3 = (undefined8 *)0x0;
  do {
    uVar6 = (uint)*puVar5;
    if (((uVar6 >> 0x17 & 1) != 0) &&
       (uVar6 = (uVar6 & 0x7fffff) - (uVar6 >> 1 & 0x155555),
       uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333),
       psVar7 = (short *)puVar5[(ulong)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18) + 2]
       , psVar7 != (short *)0x0)) {
      if ((int)psVar7[1] + (int)*psVar7 != 0) {
        psVar4 = psVar7;
        puVar3 = puVar5;
      }
    }
    puVar5 = (undefined8 *)puVar5[1];
  } while (puVar5 != (undefined8 *)param_1[2]);
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  sVar1 = *psVar4;
  sVar2 = psVar4[1];
  *param_1 = (long)(psVar4 + 4);
  param_1[1] = (long)(psVar4 + 4 + ((long)sVar2 + (long)sVar1) * 4);
  param_1[2] = (long)puVar3;
  return 1;
}

