
ulong FUN_001877d0(void)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = FUN_001874a4();
  uVar1 = 0x15fde20;
  if (-1 < iVar2) {
    uVar1 = iVar2 + 0x15fde20;
  }
  return (ulong)uVar1 / 10000 | (ulong)(uVar1 % 10000) << 0x20;
}

