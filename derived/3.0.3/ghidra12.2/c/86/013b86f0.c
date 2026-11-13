
uint FUN_013b86f0(undefined8 param_1,float *param_2)

{
  uint uVar1;
  float fVar2;
  undefined **local_20;
  int local_18;
  int iStack_14;
  
  fVar2 = (float)(int)((int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0)) * 0.5;
  local_20 = &PTR_FUN_048f9730;
  uVar1 = 0;
  if (fVar2 != (float)(int)fVar2) {
    uVar1 = (uint)(fVar2 < 0.0);
  }
  local_18 = (int)fVar2 - uVar1;
  fVar2 = (float)(int)((int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0)) * 0.5;
  uVar1 = 0;
  if (fVar2 != (float)(int)fVar2) {
    uVar1 = (uint)(fVar2 < 0.0);
  }
  iStack_14 = (int)fVar2 - uVar1;
  uVar1 = FUN_01318220(&local_20);
  return (uVar1 ^ 0xffffffff) & 1;
}

