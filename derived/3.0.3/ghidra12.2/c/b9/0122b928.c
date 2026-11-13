
ulong FUN_0122b928(void)

{
  uint uVar1;
  
  uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  DAT_05582b7c = uVar1;
  return (ulong)uVar1 * 100 >> 0x20;
}

