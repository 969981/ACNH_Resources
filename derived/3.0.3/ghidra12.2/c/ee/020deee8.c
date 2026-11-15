
undefined8 FUN_020deee8(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x4c) == param_2[7]) &&
     ((*(long *)(param_2 + 8) == *(long *)(param_1 + 0x50) &&
      *(long *)(param_2 + 10) == *(long *)(param_1 + 0x58)) &&
      param_2[0xc] == *(int *)(param_1 + 0x60))) {
    if ((*(short *)(param_1 + 0x34) == 0) || ((short)param_2[1] == 0)) {
      if (*(int *)(param_1 + 0x30) == *param_2) {
        return 7;
      }
    }
    else if ((*(int *)(param_1 + 0x30) == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x34) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x3c)) &&
             param_2[5] == *(int *)(param_1 + 0x44))) {
      return 7;
    }
  }
  if (*(short *)(param_1 + 0x34) == 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *param_2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x30);
    iVar2 = *param_2;
    if ((short)param_2[1] != 0) {
      if (iVar1 != iVar2) {
        return 9;
      }
      if ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x34) &&
          *(long *)(param_2 + 3) == *(long *)(param_1 + 0x3c)) &&
          param_2[5] == *(int *)(param_1 + 0x44)) {
        return 8;
      }
      return 9;
    }
  }
  if (iVar1 == iVar2) {
    return 8;
  }
  return 9;
}

