
int FUN_00282aec(long param_1)

{
  ushort uVar1;
  uint uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x3c);
  uVar2 = (uint)uVar1 * (uint)*(byte *)(param_1 + 0x3f) * (uint)uVar1;
  if ((uVar2 & 7) != 0) {
    uVar2 = (uVar2 & 0x7ffffff8) + 8;
  }
  return (uint)uVar1 * 4 + (uVar2 >> 3) + 4;
}

