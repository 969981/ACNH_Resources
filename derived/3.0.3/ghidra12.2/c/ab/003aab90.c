
void FUN_003aab90(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = *(ushort *)(param_1 + 100);
  if ((ulong)uVar4 != 0) {
    lVar8 = *(long *)(param_2 + 0x38);
    lVar7 = 0;
    do {
      uVar2 = *(uint *)(*(long *)(param_1 + 0x58) + lVar7);
      if (-1 < (int)uVar2) {
        uVar5 = 1 << (ulong)(uVar2 & 0x1f);
        lVar6 = (((ulong)uVar2 & 0x7fff) >> 5) * 4;
        uVar3 = *(uint *)(*(long *)(param_2 + 8) + lVar6);
        uVar1 = *(uint *)(*(long *)(lVar8 + 0x10) + ((ulong)uVar2 & 0x7fff) * 0x60 + 0x34);
        *(uint *)(*(long *)(param_2 + 8) + lVar6) =
             uVar3 & (uVar5 ^ 0xffffffff) | (uVar1 & 1) << (ulong)(uVar2 & 0x1f);
        if ((*(code **)(param_2 + 0x78) != (code *)0x0) &&
           (((uVar1 ^ (uVar3 & uVar5) != 0) & 1) != 0)) {
          (**(code **)(param_2 + 0x78))(param_2);
        }
      }
      lVar7 = lVar7 + 4;
    } while ((ulong)uVar4 * 4 != lVar7);
  }
  return;
}

