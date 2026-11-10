
void FUN_00231efc(undefined8 param_1,long *param_2,int *param_3,int param_4)

{
  ulong uVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 != (int *)0x0) && (*param_3 != 1)) {
    if (param_2[0x2db] != 0) {
LAB_00231f38:
      local_34 = 0x10c08;
      goto LAB_00231f48;
    }
    if ((int)param_2[0x2d9] == param_4) {
      if ((char)param_2[2] == '\0') {
        FUN_0022d1f4();
        FUN_0022d308();
        uVar1 = FUN_0023d364();
        if ((uVar1 & 1) == 0) goto LAB_00231f38;
      }
      else {
        (**(code **)(*param_2 + 0x110))(param_2);
      }
      param_2[0x2db] = (long)param_3;
      FUN_00220f78(param_3);
      local_34 = 0;
      goto LAB_00231f48;
    }
  }
  local_34 = 0x10c07;
LAB_00231f48:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

