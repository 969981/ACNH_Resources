
void FUN_003b0d50(long *param_1)

{
  byte *pbVar1;
  ushort uVar2;
  ulong uVar3;
  long lVar4;
  
  uVar2 = *(ushort *)(*param_1 + 0x9e);
  if ((ulong)uVar2 != 0) {
    uVar3 = 0;
    lVar4 = 0x10;
    do {
      pbVar1 = (byte *)(*(long *)(*param_1 + 0x50) + lVar4);
      if (uVar3 != *(ushort *)(pbVar1 + 10)) {
        *(ulong *)(param_1[9] + (ulong)*(ushort *)(pbVar1 + 2) + (ulong)*pbVar1 + 7 &
                  0xfffffffffffffff8) =
             param_1[9] +
             (ulong)*(ushort *)
                     (*(long *)(*param_1 + 0x50) + (ulong)*(ushort *)(pbVar1 + 10) * 0x20 + 0x12);
      }
      uVar3 = uVar3 + 1;
      lVar4 = lVar4 + 0x20;
    } while (uVar2 != uVar3);
  }
  return;
}

