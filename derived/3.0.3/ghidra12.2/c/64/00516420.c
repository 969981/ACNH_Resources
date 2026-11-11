
void FUN_00516420(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  uVar1 = *(uint *)(*(long *)(param_1 + 8) + (long)param_2 * 0x128 + (ulong)param_3 * 0x18 + 0xd0);
  if (0 < (int)uVar1) {
    plVar4 = (long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x128 + (ulong)param_3 * 0x18);
    uVar3 = 0;
    do {
      lVar5 = (uVar3 >> 5) * 4;
      uVar2 = 1 << (ulong)((uint)uVar3 & 0x1f);
      *(uint *)(plVar4[0x18] + lVar5) = *(uint *)(plVar4[0x18] + lVar5) | uVar2;
      if ((*(uint *)(*plVar4 + lVar5) & uVar2) != 0) {
        *(uint *)(plVar4[0xc] + lVar5) = *(uint *)(plVar4[0xc] + lVar5) | uVar2;
      }
      uVar2 = (uint)uVar3 + 1;
      uVar3 = (ulong)uVar2;
    } while (uVar1 != uVar2);
  }
  return;
}

