
int FUN_001623cc(undefined8 param_1,undefined8 *param_2,int *param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_3;
  if (iVar1 == 4) {
    FUN_00143300(*param_2);
    *param_2 = 0;
    iVar1 = *param_3;
  }
  if (iVar1 != 0) {
    iVar1 = FUN_0017ea30(param_2);
    if ((param_4 == 0) && (iVar1 != 0)) {
      FUN_00162138(param_1,param_2);
      param_4 = 0x3d;
    }
    *param_3 = 0;
  }
  return param_4;
}

