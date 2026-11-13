
void FUN_0137d60c(long param_1,long param_2)

{
  float fVar1;
  float fVar2;
  
  if (param_2 != 0) {
    fVar2 = (float)*(int *)(param_1 + 0xc) * 10.0 + 2.5;
    fVar1 = (float)*(int *)(param_1 + 8) * 10.0 + 2.5;
    *(uint *)(param_2 + 8) = (int)((float)(int)fVar1 / 5.0) - (uint)(fVar1 < 0.0);
    *(uint *)(param_2 + 0xc) = (int)((float)(int)fVar2 / 5.0) - (uint)(fVar2 < 0.0);
  }
  return;
}

