
void FUN_0263fe7c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1 = param_1 + 8;
  iVar1 = FUN_0277d6c4(param_1);
  if ((iVar1 - 0xf619U < 4) || (iVar1 = FUN_0277d6c4(param_1), iVar1 == 0xf61d)) {
LAB_0263ff18:
    iVar3 = DAT_04c896fc;
    iVar1 = DAT_04c896f8;
    if (0 < DAT_04c896f8) {
      iVar1 = 1;
    }
    iVar2 = DAT_04c896f8;
    if (DAT_04c896f8 < 2) {
      iVar2 = 1;
    }
    *(int *)(param_2 + 0x20) = iVar2;
    iVar2 = iVar3;
    if (0 < iVar3) {
      iVar2 = 1;
    }
    if (iVar3 < 2) {
      iVar3 = 1;
    }
    *(int *)(param_2 + 0x10) = iVar1;
    *(int *)(param_2 + 0x14) = iVar2;
  }
  else {
    iVar2 = FUN_0277d6c4(param_1);
    iVar3 = DAT_0517afd4;
    iVar1 = DAT_0517afd0;
    if (iVar2 == 0xf61e) {
      *(int *)(param_2 + 0x10) = DAT_0517afd0;
      *(int *)(param_2 + 0x14) = iVar3;
    }
    else {
      iVar2 = FUN_0277d6c4(param_1);
      iVar3 = DAT_0517afd4;
      iVar1 = DAT_0517afd0;
      if (iVar2 != 0xf61f) goto LAB_0263ff18;
      *(int *)(param_2 + 0x10) = DAT_0517afd0;
      *(int *)(param_2 + 0x14) = iVar3;
      iVar1 = iVar1 + 2;
    }
    iVar3 = iVar3 + 1;
    *(int *)(param_2 + 0x20) = iVar1;
  }
  *(int *)(param_2 + 0x24) = iVar3;
  return;
}

