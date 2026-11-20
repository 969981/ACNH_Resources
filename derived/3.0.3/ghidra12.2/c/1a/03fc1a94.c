
void FUN_03fc1a94(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x2a6);
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  uVar2 = uVar1 & 0x200 | (ushort)((param_2 & 0xff) << 1);
  *(ushort *)(param_1 + 0x2a2) = uVar2;
  *(ushort *)(param_1 + 0x2a6) = uVar2;
  *(byte *)(param_1 + 0x2bd) = *(char *)(param_1 + 700) * (char)(param_2 >> 1) & 0x7f;
  *(ushort *)(param_1 + 0x2a4) = uVar2 & ((uVar1 >> 9 & 1) * 0x1e0 ^ 0xffff);
  *(undefined1 *)(param_1 + 0x245e) = 1;
  return;
}

