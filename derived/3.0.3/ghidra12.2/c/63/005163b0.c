
void FUN_005163b0(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_1 + 8);
  uVar2 = *(uint *)(lVar5 + (long)param_2 * 0x128 + (ulong)param_3 * 0x18 + 0x10);
  if (0 < (int)uVar2) {
    uVar4 = 0;
    do {
      lVar6 = *(long *)(lVar5 + (long)param_2 * 0x128 + (ulong)param_3 * 0x18);
      lVar7 = (uVar4 >> 5) * 4;
      uVar3 = (uint)uVar4;
      uVar1 = uVar3 + 1;
      uVar4 = (ulong)uVar1;
      *(uint *)(lVar6 + lVar7) = *(uint *)(lVar6 + lVar7) | 1 << (ulong)(uVar3 & 0x1f);
    } while (uVar2 != uVar1);
  }
  return;
}

