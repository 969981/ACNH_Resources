
uint FUN_01fa4150(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  
  uVar1 = *(uint *)(param_2 + 8);
  uVar5 = 0;
  uVar3 = *(ushort *)(param_1 + 0x188);
  if (((uint)uVar3 <= (uVar1 & 0xffff)) &&
     ((uVar1 & 0xffff) <= (((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x194)) - 1 & 0xffff))) {
    uVar2 = *(uint *)(param_2 + 0xc);
    uVar5 = 0;
    uVar4 = *(ushort *)(param_1 + 0x18a);
    if (((uint)uVar4 <= (uVar2 & 0xffff)) &&
       ((uVar2 & 0xffff) <= (((uint)uVar4 + (uint)*(ushort *)(param_1 + 0x198)) - 1 & 0xffff))) {
      uVar5 = (uVar1 - uVar3) + *(int *)(*(long *)(param_1 + 0x1c8) + 0x1c) * (uVar2 - uVar4);
      uVar5 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1c8) + 0x10) + (long)((int)uVar5 >> 5) * 4)
              >> (ulong)(uVar5 & 0x1f) & 1;
    }
  }
  return uVar5;
}

