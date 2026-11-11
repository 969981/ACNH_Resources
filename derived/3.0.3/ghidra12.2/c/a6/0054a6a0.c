
void FUN_0054a6a0(long param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 8);
  plVar4 = (long *)(lVar2 + (long)param_2 * 0x90 + (ulong)param_4 * 0x48);
  lVar5 = *plVar4;
  uVar3 = -(ulong)((uint)((int)param_3 >> 5) >> 0x1f) & 0xfffffffc00000000 |
          (ulong)(uint)((int)param_3 >> 5) << 2;
  uVar1 = 1 << (ulong)(param_3 & 0x1f);
  *(uint *)(lVar5 + uVar3) = *(uint *)(lVar5 + uVar3) | uVar1;
  if ((*(uint *)(plVar4[6] + uVar3) & uVar1) == 0) {
    lVar2 = *(long *)(lVar2 + (long)param_2 * 0x90 + (ulong)param_4 * 0x48 + 0x18);
    lVar5 = ((long)((ulong)param_3 << 0x20) >> 0x25) * 4;
    *(uint *)(lVar2 + lVar5) = *(uint *)(lVar2 + lVar5) | uVar1;
    return;
  }
  return;
}

