
undefined1 FUN_03fc1d08(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  ushort uVar4;
  ushort uVar5;
  
  uVar4 = *(ushort *)(param_1 + 0x41f7a);
  uVar1 = uVar4 + 1;
  uVar5 = (ushort)uVar1 & 0x3ff;
  uVar2 = uVar4 & 0x1f | 0x200;
  if (uVar4 < 0x200) {
    uVar2 = (uint)uVar4;
  }
  uVar3 = *(undefined1 *)(param_1 + (ulong)uVar2 + 0x41cd8);
  *(ushort *)(param_1 + 0x41f7a) = uVar5;
  *(ushort *)(param_1 + 0x41f7c) = uVar5 & (((ushort)(uVar1 >> 9) & 1) * 0x1e0 ^ 0xffff);
  *(byte *)(param_1 + 0x41f95) = *(char *)(param_1 + 0x41f94) * (char)(uVar1 >> 2) & 0x7f;
  *(undefined1 *)(param_1 + 0x44136) = 1;
  return uVar3;
}

