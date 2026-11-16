
bool FUN_0277ff58(ushort *param_1)

{
  ushort uVar1;
  bool bVar2;
  uint uVar4;
  uint uVar3;
  
  uVar1 = *param_1;
  bVar2 = true;
  uVar3 = (uint)uVar1;
  uVar4 = (uint)uVar1;
  if (uVar1 < 0x3878) {
    if (uVar1 < 0x2fa9) {
      if (uVar4 == 0x16fc) {
        return bVar2;
      }
      if (uVar4 == 0x1a9d) {
        return bVar2;
      }
      if (uVar4 == 0x2244) {
        return bVar2;
      }
    }
    else if ((((uVar4 - 0x2fa9 < 0x1d) && ((1 << (ulong)(uVar4 - 0x2fa9 & 0x1f) & 0x10000301U) != 0)
              ) || (uVar4 == 0x3390)) || (uVar3 == 0x365b)) {
      return bVar2;
    }
  }
  else {
    if (uVar4 - 0x3878 < 4) {
      return bVar2;
    }
    if ((uVar4 - 0x39e2 < 0x11) && ((1 << (ulong)(uVar4 - 0x39e2 & 0x1f) & 0x18003U) != 0)) {
      return bVar2;
    }
    if (uVar3 == 0xecc4) {
      return bVar2;
    }
  }
  return uVar3 - 0x323b < 3;
}

