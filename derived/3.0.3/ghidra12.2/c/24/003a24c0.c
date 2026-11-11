
void FUN_003a24c0(long *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  
  uVar2 = *(ushort *)(*param_1 + 0xe4);
  if ((ulong)uVar2 != 0) {
    uVar4 = 0;
    lVar5 = 0x1c;
    do {
      pbVar1 = (byte *)(*(long *)(*param_1 + 8) + lVar5);
      if ((*pbVar1 & 1) == 0) {
        FUN_0039fcd4(pbVar1 + -0x1c,param_1[2],pbVar1[-3]);
      }
      else {
        FUN_0039fcd4(pbVar1 + -0x1c,param_1[3],pbVar1[-3]);
        if (*(short *)(pbVar1 + -2) != 0) {
          lVar3 = (uVar4 >> 5 & 0x7ffffff) * 4;
          *(uint *)(param_1[0xb] + lVar3) =
               *(uint *)(param_1[0xb] + lVar3) | 1 << (ulong)((uint)uVar4 & 0x1f);
          *(byte *)((long)param_1 + 0x74) = *(byte *)((long)param_1 + 0x74) | 1;
        }
      }
      uVar4 = uVar4 + 1;
      lVar5 = lVar5 + 0x28;
    } while (uVar2 != uVar4);
  }
  return;
}

