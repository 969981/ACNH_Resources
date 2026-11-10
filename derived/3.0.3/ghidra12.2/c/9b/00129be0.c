
undefined8 FUN_00129be0(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  byte *pbVar4;
  
  if (-1 < *(char *)(param_3 + 0x18)) {
    return 0;
  }
  uVar2 = (*(uint *)(param_3 + 0x14) & 0xff00ff00) >> 8 |
          (*(uint *)(param_3 + 0x14) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (uVar2 != 0) {
    lVar3 = *(long *)(param_2 + 8);
    pbVar4 = (byte *)(param_3 + ((ulong)*(byte *)(lVar3 + 0x10) << 0x18 |
                                 (ulong)*(byte *)(lVar3 + 0x11) << 0x10 |
                                 (ulong)*(byte *)(lVar3 + 0x12) << 8 |
                                (ulong)*(byte *)(lVar3 + 0x13)) + 0x3c);
    do {
      bVar1 = *pbVar4;
      if (bVar1 != 0) {
        *pbVar4 = bVar1 & 0xc0 | bVar1 >> 1 & 0x1f;
      }
      pbVar4 = pbVar4 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(undefined1 *)(param_3 + 0x18) = 0;
  return 1;
}

