
ulong FUN_0018774c(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_001872e0();
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x15fde20;
    if (-1 < iVar2) {
      uVar1 = 0x1600530;
      if ((*param_1 & 0x7ff0000) != 0x720000) {
        uVar1 = uVar3;
      }
      uVar3 = uVar1 + iVar2;
    }
  }
  return (ulong)uVar3 / 10000 | (ulong)(uVar3 % 10000) << 0x20;
}

