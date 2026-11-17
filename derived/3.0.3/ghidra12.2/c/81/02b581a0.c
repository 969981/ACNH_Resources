
float FUN_02b581a0(int param_1,int *param_2,long param_3)

{
  int iVar1;
  float fVar2;
  
  fVar2 = ((float)*(int *)(param_3 + 0x10) * 5.0 + (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0) *
          0.5;
  if (param_1 == 4) {
    return fVar2;
  }
  iVar1 = *param_2;
  if (iVar1 == 0x40000000) {
    fVar2 = fVar2 + 2.5;
  }
  else {
    if (iVar1 != 0) {
      if (iVar1 == -0x80000000) {
        return fVar2 + 2.5;
      }
      return fVar2 + -2.5;
    }
    fVar2 = fVar2 + -2.5;
  }
  return fVar2;
}

