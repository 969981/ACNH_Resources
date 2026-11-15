
uint FUN_01fd7d98(undefined8 param_1,float *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *local_30;
  int local_28;
  int iStack_24;
  
  local_30 = &DAT_048f9750;
  local_28 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_24 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  uVar2 = FUN_01fabae0(param_1,&local_30);
  if ((uVar2 & 1) == 0) {
    uVar1 = FUN_01fadef8(param_1,&local_30);
  }
  else {
    uVar1 = 0;
  }
  return uVar1 & 1;
}

