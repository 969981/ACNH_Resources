
bool FUN_0069be70(long param_1,byte *param_2)

{
  ulong uVar1;
  byte bVar2;
  bool bVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  bVar3 = false;
  uVar4 = 0;
  while( true ) {
    bVar2 = *param_2;
    uVar5 = bVar2 - 0x30;
    if (9 < uVar5) {
      uVar5 = (uint)bVar2;
      if (bVar2 - 0x61 < 6) {
        uVar5 = uVar5 - 0x57;
      }
      else {
        if (5 < uVar5 - 0x41) {
          return bVar3;
        }
        uVar5 = uVar5 - 0x37;
      }
    }
    if (uVar5 == 0xffffffff) {
      return bVar3;
    }
    bVar2 = param_2[1];
    uVar6 = bVar2 - 0x30;
    if (9 < uVar6) {
      uVar6 = (uint)bVar2;
      if (bVar2 - 0x61 < 6) {
        uVar6 = uVar6 - 0x57;
      }
      else {
        if (5 < uVar6 - 0x41) {
          return bVar3;
        }
        uVar6 = uVar6 - 0x37;
      }
    }
    if (uVar6 == 0xffffffff) break;
    param_2 = param_2 + 2;
    *(byte *)(param_1 + uVar4) = (byte)uVar6 | (byte)(uVar5 << 4);
    uVar1 = uVar4 + 1;
    bVar3 = 0x12 < uVar4;
    uVar4 = uVar1;
    if (uVar1 == 0x14) {
      return bVar3;
    }
  }
  return bVar3;
}

