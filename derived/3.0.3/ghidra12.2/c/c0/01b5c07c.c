
undefined4 FUN_01b5c07c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *param_2;
  iVar2 = *param_1;
  if (iVar1 == 8) {
    iVar1 = 1;
  }
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  if (iVar2 == iVar1) {
    return 0;
  }
  iVar2 = param_1[1];
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  if (iVar2 == iVar1) {
    return 1;
  }
  iVar2 = param_1[2];
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  if (iVar2 == iVar1) {
    return 2;
  }
  iVar2 = param_1[3];
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  uVar3 = 3;
  if (iVar2 != iVar1) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

