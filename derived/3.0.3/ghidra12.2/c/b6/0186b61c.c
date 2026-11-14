
void FUN_0186b61c(long param_1)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0x1e;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  pfVar1 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 0x1e8) + 0xf0))
                              (*(long *)(param_1 + 0x4b8) + 0x1e8);
  fVar3 = *pfVar1;
  *(undefined4 *)(param_1 + 0x4e0) = 0;
  uVar2 = (uint)(fVar3 * 30.0);
  *(byte *)(param_1 + 0x4ec) = (byte)(uVar2 >> 0x1f);
  *(uint *)(param_1 + 0x4e4) = uVar2 & (int)uVar2 >> 0x1f;
  *(uint *)(param_1 + 0x4e8) = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  *(undefined4 *)(param_1 + 0x4fc) = 1;
  return;
}

