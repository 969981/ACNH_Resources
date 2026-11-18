
undefined8 FUN_032f9ed4(short *param_1)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 8) == 4) {
    sVar1 = *param_1;
    if ((((sVar1 != 0x78) && (sVar1 != 0x6c)) || (param_1[1] != 0x74)) ||
       ((param_1[2] != 0x73 || (param_1[3] != 0x75)))) {
      uVar2 = FUN_032fa1fc(param_1);
      if ((uVar2 & 1) == 0) {
        return 5;
      }
      if (sVar1 == param_1[1]) {
        *param_1 = *(short *)(&DAT_04102f30 + (long)*(int *)(param_1 + 0xe) * 2);
        iVar3 = *(int *)(param_1 + 6);
      }
      else {
        uVar2 = FUN_032fa0c0(param_1);
        iVar3 = *(int *)(param_1 + 6);
        if ((uVar2 & 1) != 0) goto LAB_032f9f9c;
      }
      *(int *)(param_1 + 6) = iVar3 + 1;
    }
  }
  else if ((*(int *)(param_1 + 8) < 3) || (uVar2 = FUN_032fa1fc(param_1), (uVar2 & 1) == 0)) {
    return 5;
  }
  FUN_032fa0c0(param_1);
  iVar3 = *(int *)(param_1 + 6);
LAB_032f9f9c:
  *(int *)(param_1 + 8) = iVar3;
  return 7;
}

