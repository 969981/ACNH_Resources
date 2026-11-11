
void FUN_003b10b0(long *param_1)

{
  ushort uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(*param_1 + 0x9e);
  if (0 < (int)*(uint *)((long)param_1 + 0x24)) {
    memset((void *)param_1[2],0,(ulong)*(uint *)((long)param_1 + 0x24) << 2);
  }
  *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) & 0xfe;
  if (uVar1 != 0) {
    uVar2 = 0;
    lVar3 = 0x14;
    do {
      if (-1 < *(int *)(*(long *)(*param_1 + 0x50) + lVar3)) {
        lVar4 = (uVar2 >> 5 & 0x7ffffff) * 4;
        *(uint *)(param_1[2] + lVar4) =
             *(uint *)(param_1[2] + lVar4) | 1 << (ulong)((uint)uVar2 & 0x1f);
        *(byte *)((long)param_1 + 0x2c) = *(byte *)((long)param_1 + 0x2c) | 1;
      }
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x20;
    } while (uVar1 != uVar2);
  }
  return;
}

