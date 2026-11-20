
void FUN_03fc1ae4(long param_1,uint param_2)

{
  ushort uVar1;
  ushort uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x2a6);
  *(byte *)(param_1 + 700) = (byte)(param_2 >> 7) & 1;
  *(undefined1 *)(param_1 + 0x2a0) = 0;
  uVar2 = uVar1 & 0x1fe | (ushort)((param_2 & 1) << 9);
  *(ushort *)(param_1 + 0x2a2) = uVar2;
  *(ushort *)(param_1 + 0x2a6) = uVar2;
  *(ushort *)(param_1 + 0x2a4) = uVar2 & (((ushort)param_2 & 1) * 0x1e0 ^ 0xffff);
  *(byte *)(param_1 + 0x2bd) = (byte)(uVar1 >> 2) & (byte)((uint)(int)(char)param_2 >> 7) & 0x7f;
  *(undefined1 *)(param_1 + 0x245e) = 1;
  return;
}

