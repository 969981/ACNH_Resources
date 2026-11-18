
undefined8 FUN_03633010(long param_1)

{
  uint uVar1;
  byte bVar2;
  
  FUN_0363885c();
  uVar1 = (uint)*(byte *)(param_1 + 0x10c1) - (uint)*(byte *)(param_1 + 0x10c6);
  bVar2 = 0x40;
  if (uVar1 == 0) {
    bVar2 = 0xc0;
  }
  *(byte *)(param_1 + 0x10c0) =
       (byte)(uVar1 >> 4) & 0x10 | bVar2 |
       (byte)((((*(byte *)(param_1 + 0x10c6) ^ *(byte *)(param_1 + 0x10c1)) ^ uVar1) & 0x10) << 1);
  return 0;
}

