
void FUN_0028d564(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0x6c078967;
  iVar2 = 1;
  if ((param_3 != 0 || param_2 != 0) || (param_4 != 0 || param_5 != 0)) {
    iVar1 = param_3;
    iVar2 = param_2;
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  iVar1 = 0x48077044;
  iVar2 = 0x714acb41;
  if ((param_3 != 0 || param_2 != 0) || (param_4 != 0 || param_5 != 0)) {
    iVar1 = param_5;
    iVar2 = param_4;
  }
  param_1[2] = iVar2;
  param_1[3] = iVar1;
  return;
}

