
byte FUN_02442458(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  short *psVar4;
  
  if (*(char *)(param_1 + 0x2264) != '\0') {
    return 0;
  }
  uVar2 = FUN_00a90040(*(undefined8 *)PTR_DAT_04bb30a0);
  if ((uVar2 & 1) == 0) {
    bVar1 = 0;
  }
  else {
    bVar1 = FUN_016f7738(&DAT_04c9a0c8);
    if (*(long *)(param_1 + 0x298) == 0) {
      psVar4 = &DAT_05586008;
    }
    else {
      lVar3 = *(long *)(*(long *)(param_1 + 0x298) + 0x1480);
      psVar4 = (short *)(lVar3 + ((ulong)*(uint *)(lVar3 + 0x10) & 1) * 0x20 + 0x14);
    }
    bVar1 = bVar1 & *psVar4 == -2;
  }
  return bVar1;
}

