
void FUN_0031e020(long param_1,float *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  uVar1 = *(uint *)(param_1 + 0xac);
  iVar3 = *(int *)(*(long *)(param_1 + 0xa0) + 0x850);
  iVar2 = *(int *)(*(long *)(param_1 + 0xa0) + 0x854);
  *(uint *)(param_1 + 0xac) = uVar1 * 0x41c64e6d + 0x3039;
  fVar4 = (float)iVar3 + 1.0 + (float)(int)((ulong)uVar1 * (long)iVar2 >> 0x20);
  *param_2 = fVar4;
  fVar4 = *(float *)(param_1 + 0x60) * fVar4;
  *param_2 = fVar4;
  *param_2 = *(float *)(*(long *)(param_1 + 0x78) + 0x60) * fVar4;
  if (*(char *)(*(long *)(param_1 + 0xa0) + 0x795) == '\0') {
    return;
  }
  FUN_0031dc44();
  return;
}

