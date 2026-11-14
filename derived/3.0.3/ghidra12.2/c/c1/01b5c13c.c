
undefined4 FUN_01b5c13c(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *param_2;
  iVar4 = *param_1;
  if (iVar1 == 8) {
    iVar1 = 1;
  }
  if (iVar4 == 8) {
    iVar4 = 1;
  }
  if (iVar4 == iVar1) {
    if (param_3 == 0) {
      return 0;
    }
    iVar4 = 1;
  }
  else {
    iVar4 = 0;
  }
  iVar2 = param_1[1];
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  if (iVar2 == iVar1) {
    if (iVar4 == param_3) {
      return 1;
    }
    iVar4 = iVar4 + 1;
  }
  iVar2 = param_1[2];
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  if (iVar2 == iVar1) {
    if (iVar4 == param_3) {
      return 2;
    }
    iVar4 = iVar4 + 1;
  }
  iVar2 = param_1[3];
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  uVar3 = 3;
  if (iVar4 != param_3 || iVar2 != iVar1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

