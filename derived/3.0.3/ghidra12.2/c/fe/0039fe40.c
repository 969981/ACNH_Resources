
void FUN_0039fe40(long param_1,void *param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  bVar2 = *(byte *)(param_1 + 0xea);
  uVar4 = (uint)bVar2;
  if (*(int *)(param_1 + 0xe0) == -1) {
    if (uVar4 != 0) {
      memset(param_2,0,(ulong)bVar2 << 2);
    }
    uVar3 = *(ushort *)(param_1 + 0xe4);
    if ((ulong)uVar3 != 0) {
      lVar5 = 0;
      do {
        lVar1 = *(long *)(param_1 + 8) + lVar5;
        lVar5 = lVar5 + 0x28;
        lVar6 = (ulong)*(byte *)(lVar1 + 0x1e) * 4;
        *(uint *)((long)param_2 + lVar6) =
             (uint)*(byte *)(lVar1 + 0x19) << (ulong)(*(byte *)(lVar1 + 0x1f) & 0x1f) |
             *(uint *)((long)param_2 + lVar6) & (*(uint *)(lVar1 + 0x20) ^ 0xffffffff);
      } while ((ulong)uVar3 * 0x28 != lVar5);
    }
  }
  else if (uVar4 != 0) {
    memmove(param_2,(void *)(*(long *)(param_1 + 0x90) +
                            (long)(int)(*(int *)(param_1 + 0xe0) *
                                        (*(byte *)(param_1 + 0xeb) + uVar4) * 4)),(ulong)bVar2 << 2)
    ;
    return;
  }
  return;
}

