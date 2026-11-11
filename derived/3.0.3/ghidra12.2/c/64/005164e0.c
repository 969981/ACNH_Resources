
void FUN_005164e0(long param_1,int param_2,uint param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x128 + (ulong)param_4 * 0x18);
  uVar2 = -(ulong)((uint)((int)param_3 >> 5) >> 0x1f) & 0xfffffffc00000000 |
          (ulong)(uint)((int)param_3 >> 5) << 2;
  *(uint *)(lVar1 + uVar2) = *(uint *)(lVar1 + uVar2) | 1 << (ulong)(param_3 & 0x1f);
  return;
}

