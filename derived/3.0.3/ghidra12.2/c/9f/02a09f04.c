
undefined8 FUN_02a09f04(long param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = (uint)uVar2;
  *(ulong *)(param_1 + 0x48) = uVar2;
  *(uint *)(param_1 + 8) = uVar1 & 0xf;
  *(uint *)(param_1 + 0xc) = uVar1 >> 4 & 0xf;
  *(uint *)(param_1 + 0x18) = uVar1 >> 0x10 & 0xf;
  *(uint *)(param_1 + 0x1c) = uVar1 >> 0x14 & 0xf;
  *(uint *)(param_1 + 0x10) = uVar1 >> 8 & 0xf;
  *(uint *)(param_1 + 0x14) = uVar1 >> 0xc & 0xf;
  *(uint *)(param_1 + 0x20) = uVar1 >> 0x18 & 0xf;
  *(uint *)(param_1 + 0x24) = (uint)(uVar2 >> 0x1c) & 0xf;
  uVar1 = (uint)(uVar2 >> 0x20);
  *(uint *)(param_1 + 0x28) = uVar1 & 0xf;
  *(uint *)(param_1 + 0x2c) = uVar1 >> 4 & 0xf;
  *(uint *)(param_1 + 0x30) = uVar1 >> 8 & 0xf;
  *(uint *)(param_1 + 0x34) = uVar1 >> 0xc & 0xf;
  *(uint *)(param_1 + 0x38) = (ushort)(uVar2 >> 0x30) & 0xf;
  *(uint *)(param_1 + 0x3c) = uVar1 >> 0x14 & 0xf;
  *(uint *)(param_1 + 0x40) = (byte)(uVar2 >> 0x38) & 0xf;
  *(uint *)(param_1 + 0x44) = uVar1 >> 0x1c;
  return 1;
}

