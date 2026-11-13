
void FUN_0137d59c(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  
  *param_1 = (long)(PTR_DAT_04bb2018 + 0x10);
  param_1[1] = 0;
  fVar4 = (float)*(int *)(param_2 + 8) * 0.5;
  uVar1 = 0;
  if (fVar4 != (float)(int)fVar4) {
    uVar1 = (uint)(fVar4 < 0.0);
  }
  fVar3 = (float)*(int *)(param_2 + 0xc) * 0.5;
  uVar2 = 0;
  if (fVar3 != (float)(int)fVar3) {
    uVar2 = (uint)(fVar3 < 0.0);
  }
  *(uint *)(param_1 + 1) = (int)fVar4 - uVar1;
  *(uint *)((long)param_1 + 0xc) = (int)fVar3 - uVar2;
  return;
}

