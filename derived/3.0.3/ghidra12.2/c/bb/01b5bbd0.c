
undefined4 FUN_01b5bbd0(int *param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  iVar2 = *param_1;
  uVar6 = 1;
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  if ((param_3 & 1) == 0) {
    iVar3 = param_1[1];
    if (iVar3 == 8) {
      iVar3 = 1;
    }
    iVar4 = param_1[2];
    uVar5 = (uint)(iVar2 == 1);
    if (iVar3 == 1) {
      uVar5 = uVar5 + 1;
    }
    if (iVar4 == 8) {
      iVar4 = 1;
    }
    iVar2 = param_1[3];
    if (iVar4 == 1) {
      uVar5 = uVar5 + 1;
    }
    if (iVar2 == 8) {
      iVar2 = 1;
    }
    if (iVar2 == 1) {
      uVar5 = uVar5 + 1;
    }
    goto LAB_01b5bd24;
  }
  uVar5 = 1;
  if (iVar2 != 1) {
    uVar5 = 0;
    uVar6 = 0;
    if (*param_1 != 0) goto LAB_01b5bd24;
  }
  iVar2 = param_1[1];
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  if (iVar2 == 1) {
    uVar5 = uVar5 + 1;
LAB_01b5bcb0:
    iVar2 = param_1[2];
    if (iVar2 == 8) {
      iVar2 = 1;
    }
    if (iVar2 == 1) {
      uVar5 = uVar5 + 1;
    }
    else if (param_1[2] != 0) goto LAB_01b5bd18;
    iVar2 = param_1[3];
    if (iVar2 == 8) {
      iVar2 = 1;
    }
    if (iVar2 == 1) {
      uVar5 = uVar5 + 1;
    }
    else if (param_1[3] != 0) goto LAB_01b5bd18;
    uVar6 = 1;
  }
  else {
    if (param_1[1] == 0) goto LAB_01b5bcb0;
LAB_01b5bd18:
    uVar6 = 0;
  }
LAB_01b5bd24:
  uVar1 = 0;
  if (uVar5 == param_2) {
    uVar1 = uVar6;
  }
  return uVar1;
}

