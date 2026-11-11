
void FUN_0038f330(float param_1,float param_2,long *param_3)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(*param_3 + 0x70))();
  if (iVar1 == 1) {
    fVar2 = 1.0 - param_2;
    param_2 = 1.0 - param_1;
    *(float *)(param_3 + 1) = fVar2;
  }
  else {
    if (iVar1 != 0) {
      return;
    }
    *(float *)(param_3 + 1) = param_1;
  }
  *(float *)((long)param_3 + 0xc) = param_2;
  return;
}

