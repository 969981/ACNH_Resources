
void FUN_03f5a118(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 0x20) + 0x51);
  uVar3 = (ulong)bVar1 & 0xe;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x560) = 0x14;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x561) = 0x40;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x580) = 0xe7;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x581) = 0;
  uVar3 = (ulong)(bVar1 + 2 & 0xe);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x560) = 0x17;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x561) = 0x40;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x580) = 0x6b;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x581) = 1;
  uVar3 = (ulong)(bVar1 + 4 & 0xe);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x560) = 0x1c;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x561) = 0x40;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x580) = 0xef;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x581) = 1;
  uVar2 = (uint)bVar1;
  uVar3 = (ulong)(uVar2 + 6 & 0xe);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x560) = 0x1f;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x561) = 0x40;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x580) = 0x73;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x581) = 2;
  uVar3 = (ulong)(uVar2 + 8 & 0xe);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x560) = 0x1f;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x561) = 0x4c;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x580) = 0xf7;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x581) = 2;
  uVar3 = (ulong)(uVar2 + 10 & 0xe);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x560) = 0x1f;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x561) = 0x5c;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x580) = 0x7b;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x581) = 3;
  uVar4 = (ulong)(uVar2 + 0xc & 0xe);
  uVar3 = (ulong)((bVar1 & 0xe) - 2 & 0xe);
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar4 + 0x560) = 0x1f;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar4 + 0x561) = 0x78;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar4 + 0x580) = 0xff;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar4 + 0x581) = 3;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x560) = 0x1f;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x561) = 0x79;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x580) = 0xfe;
  *(undefined1 *)(*(long *)(param_1 + 0x20) + uVar3 + 0x581) = 0x4f;
  return;
}

