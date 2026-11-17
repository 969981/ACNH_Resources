
void FUN_03183234(int *param_1,int param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if ((((*param_1 != param_2) && (param_1[1] != param_2)) && (param_1[2] != param_2)) &&
     (((param_1[3] != param_2 && (param_1[4] != param_2)) &&
      ((param_1[5] != param_2 && (param_1[6] != param_2)))))) {
    uVar1 = param_1[7];
    uVar2 = (ulong)uVar1;
    if (6 < uVar1) {
      uVar2 = 0;
    }
    param_1[7] = uVar1 + 1;
    param_1[uVar2] = param_2;
  }
  return;
}

