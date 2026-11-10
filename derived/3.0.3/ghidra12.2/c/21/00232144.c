
void FUN_00232144(undefined8 param_1,long param_2,int *param_3,int param_4)

{
  ulong uVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  if ((param_3 == (int *)0x0) || (*param_3 == 1)) {
LAB_00232168:
    local_34 = 0x10c07;
  }
  else {
    if (*(long *)(param_2 + 0x16e0) == 0) {
      if (*(int *)(param_2 + 0x16c8) != param_4) goto LAB_00232168;
      *(undefined8 *)(param_2 + 8) = 0xffffffffffffffff;
      FUN_0022d1f4();
      FUN_0022d308();
      uVar1 = FUN_0023d1d4();
      if ((uVar1 & 1) != 0) {
        *(int **)(param_2 + 0x16e0) = param_3;
        FUN_00220f78(param_3);
        local_34 = 0;
        goto LAB_00232190;
      }
    }
    local_34 = 0x10c08;
  }
LAB_00232190:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

