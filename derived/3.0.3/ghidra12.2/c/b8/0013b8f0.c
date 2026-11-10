
undefined8 FUN_0013b8f0(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (-1 < *(char *)(param_3 + 0x18)) {
    return 0;
  }
  uVar2 = (*(uint *)(param_3 + 0x14) & 0xff00ff00) >> 8 |
          (*(uint *)(param_3 + 0x14) & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if (uVar2 != 0) {
    pbVar3 = (byte *)(param_3 + ((ulong)*(byte *)(param_2 + 0x10) << 0x18 |
                                 (ulong)*(byte *)(param_2 + 0x11) << 0x10 |
                                 (ulong)*(byte *)(param_2 + 0x12) << 8 |
                                (ulong)*(byte *)(param_2 + 0x13)) + 0x3c);
    do {
      bVar1 = *pbVar3;
      if (bVar1 != 0) {
        *pbVar3 = bVar1 & 0xc0 | bVar1 >> 1 & 0x1f;
      }
      pbVar3 = pbVar3 + 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  *(undefined1 *)(param_3 + 0x18) = 0;
  return 1;
}

