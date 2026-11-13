
void FUN_0137d9f4(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 0xc) = (uint)*(byte *)(param_2 + 0x10) << 0x16;
  *(short *)(param_1 + 8) = (short)*(undefined4 *)(param_2 + 8);
  *(short *)(param_1 + 10) = (short)*(undefined4 *)(param_2 + 0xc);
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x30) = 0;
  fVar4 = (float)iVar2 * 10.0 + 2.5;
  fVar3 = (float)iVar1 * 10.0 + 2.5;
  *(ushort *)(param_1 + 0x34) = (short)(int)((float)(int)fVar3 / 5.0) - (ushort)(fVar3 < 0.0);
  *(ushort *)(param_1 + 0x36) = (short)(int)((float)(int)fVar4 / 5.0) - (ushort)(fVar4 < 0.0);
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x40) = 0;
  fVar4 = (float)iVar2 * 10.0 + 2.5;
  fVar3 = (float)iVar1 * 10.0 + 10.0 + -2.5;
  *(ushort *)(param_1 + 0x46) = (short)(int)((float)(int)fVar4 / 5.0) - (ushort)(fVar4 < 0.0);
  *(ushort *)(param_1 + 0x44) = (short)(int)((float)(int)fVar3 / 5.0) - (ushort)(fVar3 < 0.0);
  iVar2 = *(int *)(param_2 + 8);
  iVar1 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x50) = 0;
  fVar4 = (float)iVar2 * 10.0 + 2.5;
  fVar3 = (float)iVar1 * 10.0 + 10.0 + -2.5;
  *(ushort *)(param_1 + 0x54) = (short)(int)((float)(int)fVar4 / 5.0) - (ushort)(fVar4 < 0.0);
  *(ushort *)(param_1 + 0x56) = (short)(int)((float)(int)fVar3 / 5.0) - (ushort)(fVar3 < 0.0);
  iVar1 = *(int *)(param_2 + 8);
  iVar2 = *(int *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x60) = 0;
  fVar4 = (float)iVar1 * 10.0 + 10.0 + -2.5;
  fVar3 = (float)iVar2 * 10.0 + 10.0 + -2.5;
  *(ushort *)(param_1 + 100) = (short)(int)((float)(int)fVar4 / 5.0) - (ushort)(fVar4 < 0.0);
  *(ushort *)(param_1 + 0x66) = (short)(int)((float)(int)fVar3 / 5.0) - (ushort)(fVar3 < 0.0);
  return;
}

