
undefined8 FUN_032f9fb0(short *param_1)

{
  int iVar1;
  short sVar2;
  ulong uVar3;
  ulong uVar4;
  
  iVar1 = *(int *)(param_1 + 8);
  uVar3 = (ulong)(iVar1 - 3U);
  if (iVar1 < 3) {
    return 6;
  }
  uVar4 = (ulong)(iVar1 - 2U);
  if (4 < iVar1 - 3U) {
    uVar3 = 0;
  }
  if (4 < iVar1 - 2U) {
    uVar4 = 0;
  }
  sVar2 = param_1[uVar3];
  if (sVar2 == param_1[uVar4]) {
    if (iVar1 == 4) {
      *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
    }
    param_1[uVar3] = *(short *)(&DAT_04102f30 + (long)*(int *)(param_1 + 0xe) * 2);
  }
  else {
    if ((sVar2 != 0x78) && (sVar2 != 0x6c)) {
      return 6;
    }
    if ((iVar1 == 4) && (*(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1, *param_1 == sVar2)) {
      uVar3 = FUN_032fa0c0(param_1);
      if ((uVar3 & 1) != 0) {
        *param_1 = *(short *)(&DAT_04102f30 + (long)*(int *)(param_1 + 0xe) * 2);
        goto LAB_032fa02c;
      }
    }
    else {
      uVar3 = FUN_032fa0c0(param_1);
      if ((uVar3 & 1) != 0) goto LAB_032fa02c;
    }
  }
  *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + 1;
  FUN_032fa0c0(param_1);
LAB_032fa02c:
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 6);
  return 7;
}

