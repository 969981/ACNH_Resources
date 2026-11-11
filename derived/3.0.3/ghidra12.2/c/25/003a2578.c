
void FUN_003a2578(long *param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(*param_1 + 8) + (long)(int)param_2 * 0x28;
  if ((*(byte *)(lVar2 + 0x1c) & 1) == 0) {
    FUN_0039fcd4(lVar2,param_1[2]);
    return;
  }
  FUN_0039fcd4(lVar2,param_1[3]);
  if (*(short *)(lVar2 + 0x1a) != 0) {
    uVar1 = -(ulong)((uint)((int)param_2 >> 5) >> 0x1f) & 0xfffffffc00000000 |
            (ulong)(uint)((int)param_2 >> 5) << 2;
    *(uint *)(param_1[0xb] + uVar1) = *(uint *)(param_1[0xb] + uVar1) | 1 << (ulong)(param_2 & 0x1f)
    ;
    *(byte *)((long)param_1 + 0x74) = *(byte *)((long)param_1 + 0x74) | 1;
  }
  return;
}

