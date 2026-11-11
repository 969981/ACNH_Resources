
void FUN_003accc0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = (ulong)*(ushort *)(*(long *)(param_1 + 0x38) + 0x50);
  if (uVar6 != 0) {
    uVar5 = 0;
    lVar7 = 0x34;
    do {
      uVar3 = 1 << (ulong)((uint)uVar5 & 0x1f);
      lVar4 = (uVar5 >> 5 & 0x7ffffff) * 4;
      uVar1 = *(uint *)(*(long *)(param_1 + 8) + lVar4);
      uVar2 = *(uint *)(*(long *)(*(long *)(param_1 + 0x38) + 0x10) + lVar7);
      *(uint *)(*(long *)(param_1 + 8) + lVar4) =
           uVar1 & (uVar3 ^ 0xffffffff) | (uVar2 & 1) << (ulong)((uint)uVar5 & 0x1f);
      if ((*(code **)(param_1 + 0x78) != (code *)0x0) && (((uVar2 ^ (uVar1 & uVar3) != 0) & 1) != 0)
         ) {
        (**(code **)(param_1 + 0x78))(param_1,uVar5 & 0xffffffff);
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 0x60;
    } while (uVar6 != uVar5);
  }
  return;
}

