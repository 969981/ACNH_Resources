
uint FUN_01a1cb20(float *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 *local_40;
  int local_38;
  int iStack_34;
  undefined8 local_30;
  undefined4 local_28;
  
  local_40 = &DAT_048f9750;
  local_38 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_34 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  if (param_2 == (undefined8 *)0x0) {
    uVar1 = 0;
  }
  else {
    local_28 = 0;
    local_30 = 0;
    uVar1 = FUN_01a1c950(&local_40,&local_30);
    if ((uVar1 & 1) != 0) {
      *param_2 = local_30;
      *(undefined4 *)(param_2 + 1) = local_28;
      uVar2 = FUN_015cb8d4(&local_30,1);
      *(undefined4 *)((long)param_2 + 4) = uVar2;
    }
  }
  return uVar1 & 1;
}

