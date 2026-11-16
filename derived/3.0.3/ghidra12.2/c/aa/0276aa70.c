
ulong FUN_0276aa70(ulong param_1)

{
  uint uVar1;
  
  uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
  DAT_05582b78 = DAT_05582b7c;
  DAT_05582b7c = uVar1;
  return (ulong)uVar1 * (param_1 & 0xffffffff) >> 0x20;
}

