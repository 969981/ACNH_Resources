
ulong FUN_0122b8ec(void)

{
  uint uVar1;
  
  uVar1 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar1 = uVar1 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar1 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  DAT_0514cb64 = uVar1;
  return (ulong)uVar1 * 100 >> 0x20;
}

