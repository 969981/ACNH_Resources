
bool FUN_002a5c40(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint uVar6;
  
  uVar5 = *(ushort *)(param_1 + 0x32);
  if (uVar5 == 0) {
    return true;
  }
  uVar3 = *(uint *)(param_1 + 0x28);
  uVar4 = *(uint *)(param_1 + 0x2c);
  uVar1 = 0;
  if (uVar3 <= uVar4) {
    uVar1 = uVar3;
  }
  if ((param_2 - (uint)*(ushort *)
                        (*(long *)(param_1 + 0x20) + (ulong)(uVar4 - uVar1) * 0x5d0 + 0x24) >> 0xf &
      1) == 0) {
    return false;
  }
  uVar1 = 1;
  do {
    uVar6 = uVar1;
    if (uVar5 == uVar6) break;
    uVar2 = 0;
    if (uVar3 <= uVar4 + uVar6) {
      uVar2 = uVar3;
    }
    uVar1 = uVar6 + 1;
  } while ((param_2 - (uint)*(ushort *)
                             (*(long *)(param_1 + 0x20) + (ulong)((uVar4 + uVar6) - uVar2) * 0x5d0 +
                             0x24) >> 0xf & 1) != 0);
  return uVar5 <= uVar6;
}

