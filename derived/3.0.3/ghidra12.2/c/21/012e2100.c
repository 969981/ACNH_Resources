
bool FUN_012e2100(long param_1,float *param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = *param_2;
  fVar2 = (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0;
  bVar1 = false;
  if (((float)*(int *)(param_1 + 0x10) * 5.0 <= fVar3) &&
     (bVar1 = false, !NAN(fVar3) && !NAN(fVar2))) {
    bVar1 = fVar3 < fVar2;
  }
  if (!bVar1) {
    return false;
  }
  if (param_2[2] < (float)*(int *)(param_1 + 0x14) * 5.0) {
    return false;
  }
  return param_2[2] < (float)*(int *)(param_1 + 0x24) * 5.0 + 5.0;
}

