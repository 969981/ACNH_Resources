
bool FUN_002afc10(long param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  
  uVar5 = *(ushort *)(param_1 + 0x32);
  if (uVar5 == 0) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
    uVar3 = *(uint *)(param_1 + 0x28);
    uVar4 = *(uint *)(param_1 + 0x2c);
    uVar1 = 0;
    if (uVar3 <= uVar4) {
      uVar1 = uVar3;
    }
    if (*(short *)(*(long *)(param_1 + 0x20) + (ulong)(uVar4 - uVar1) * 0x5d0 + 0x24) != param_2) {
      uVar1 = 1;
      do {
        uVar7 = uVar1;
        if (uVar5 == uVar7) break;
        uVar2 = 0;
        if (uVar3 <= uVar4 + uVar7) {
          uVar2 = uVar3;
        }
        uVar1 = uVar7 + 1;
      } while (*(short *)(*(long *)(param_1 + 0x20) + (ulong)((uVar4 + uVar7) - uVar2) * 0x5d0 +
                         0x24) != param_2);
      return uVar5 <= uVar7;
    }
  }
  return bVar6;
}

