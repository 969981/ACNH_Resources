
int FUN_032c5934(undefined8 param_1,undefined8 param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_032c5718(param_2);
  switch(uVar1) {
  case 0:
    iVar2 = *param_3;
    if (iVar2 == 2) {
      return 1;
    }
    if (iVar2 == 6) {
      return 5;
    }
    goto LAB_032c59d4;
  case 1:
    iVar2 = *param_3;
    if (iVar2 == 2) {
      return 1;
    }
    if (iVar2 == 6) {
      return 5;
    }
    if (iVar2 == 4) {
      return 3;
    }
    return iVar2;
  case 2:
  case 3:
    iVar2 = *param_3;
    if (iVar2 == 1) {
      return 2;
    }
    break;
  case 4:
    iVar2 = *param_3;
    if (iVar2 == 2) {
      return 1;
    }
    break;
  default:
    return *param_3;
  }
  if (iVar2 == 5) {
    return 6;
  }
LAB_032c59d4:
  if (iVar2 == 3) {
    iVar2 = 4;
  }
  return iVar2;
}

