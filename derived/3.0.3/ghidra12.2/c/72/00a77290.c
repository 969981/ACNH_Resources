
undefined8 FUN_00a77290(byte *param_1)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  
  if (DAT_04da4ab8 == 0) {
    return 0;
  }
  bVar3 = *param_1;
  uVar2 = 0;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  do {
    pbVar1 = (byte *)(DAT_04da4ab8 + 0x10 + ((long)((ulong)uVar2 << 0x20) >> 0x1b));
    bVar4 = *pbVar1;
    if (*(int *)(pbVar1 + 0x10) < 0x13) {
      if (7 < bVar4) {
        bVar4 = 0xff;
      }
      if (bVar4 == bVar3 && pbVar1[0x18] == 3) {
        return 1;
      }
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 0x20) {
      return 0;
    }
  } while( true );
}

