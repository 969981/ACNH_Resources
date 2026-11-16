
ulong FUN_026b3780(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  
  uVar3 = 0;
  piVar4 = (int *)(param_1 + 0x2f84);
  do {
    if (piVar4[7] == 0 || *piVar4 == 0) {
      return uVar3;
    }
    uVar3 = uVar3 + 1;
    piVar4 = piVar4 + 0x56;
  } while (uVar3 != 0xa0);
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
  return (ulong)uVar2 * 0xa0 >> 0x20;
}

