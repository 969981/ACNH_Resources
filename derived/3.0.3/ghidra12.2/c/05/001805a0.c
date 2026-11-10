
int FUN_001805a0(long param_1)

{
  long lVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  
  iVar3 = FUN_00180a50();
  if (iVar3 == 0) {
    lVar4 = *(long *)(param_1 + 0x38);
    *(ulong *)(lVar4 + 0x68) = (ulong)*(uint *)(lVar4 + 0x50) << 1;
    *(undefined2 *)(*(long *)(lVar4 + 0x78) + (ulong)(*(int *)(lVar4 + 0x84) - 1) * 2) = 0;
    memset(*(void **)(lVar4 + 0x78),0,(ulong)(*(int *)(lVar4 + 0x84) - 1) << 1);
    lVar1 = (long)*(int *)(lVar4 + 0xc4) * 0x10;
    *(uint *)(lVar4 + 0xc0) = (uint)*(ushort *)(&DAT_048388ca + lVar1);
    *(uint *)(lVar4 + 0xcc) = (uint)*(ushort *)(&DAT_048388c8 + lVar1);
    *(uint *)(lVar4 + 0xd0) = (uint)*(ushort *)(&DAT_048388cc + lVar1);
    uVar2 = *(ushort *)(&DAT_048388ce + lVar1);
    *(undefined8 *)(lVar4 + 0xb4) = 0x200000000;
    *(undefined8 *)(lVar4 + 0x98) = 0;
    *(undefined4 *)(lVar4 + 0x172c) = 0;
    *(undefined8 *)(lVar4 + 0xa8) = 0;
    *(undefined4 *)(lVar4 + 0x80) = 0;
    *(undefined4 *)(lVar4 + 0xa0) = 2;
    *(uint *)(lVar4 + 0xbc) = (uint)uVar2;
    return 0;
  }
  return iVar3;
}

