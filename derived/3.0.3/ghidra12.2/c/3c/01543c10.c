
void FUN_01543c10(float param_1,long param_2,long param_3)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  
  if (param_3 != 0) {
    fVar5 = *(float *)(param_2 + 8) + -2.5;
    fVar6 = *(float *)(param_2 + 0x10) + -2.5;
    uVar4 = (ulong)((float)(*(int *)(param_2 + 0x14) + 0x10000000U >> 0x1d) * 45.0 * 11930465.0);
    iVar2 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
    iVar3 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar4 >> 0x18 & 0xff) * 0x10);
    fVar5 = (float)((uint)uVar4 & 0xffffff) * 5.9604645e-08;
    fVar6 = ((float)iVar2 * 5.0 + (float)(iVar2 + 1) * 5.0 + 5.0) * 0.5 +
            (*pfVar1 + fVar5 * pfVar1[1]) * param_1 + -2.5;
    fVar5 = ((float)iVar3 * 5.0 + (float)(iVar3 + 1) * 5.0 + 5.0) * 0.5 +
            (pfVar1[2] + fVar5 * pfVar1[3]) * param_1 + -2.5;
    iVar2 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    iVar3 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
    *(int *)(param_3 + 0x10) = iVar2;
    *(int *)(param_3 + 0x14) = iVar3;
    *(int *)(param_3 + 0x20) = iVar2 + 1;
    *(int *)(param_3 + 0x24) = iVar3 + 1;
  }
  return;
}

