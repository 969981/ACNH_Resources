
ulong FUN_027d2ef0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (DAT_05594b4c == '\x01') {
    uVar2 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
    DAT_05582b70 = DAT_05582b74;
    DAT_05582b74 = DAT_05582b78;
    uVar2 = uVar2 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar2 ^ DAT_05582b7c;
    DAT_05582b78 = DAT_05582b7c;
    DAT_05582b7c = uVar2;
  }
  else {
    uVar2 = nn::os::GetSystemTick();
    uVar1 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 1;
    uVar2 = uVar1 ^ uVar1 * 0x800;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 2;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
    uVar1 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 4;
    uVar2 = uVar2 >> 8 ^ uVar1 >> 0x13 ^ uVar2 ^ uVar1;
  }
  return (ulong)uVar2 * (ulong)param_1 >> 0x20;
}

