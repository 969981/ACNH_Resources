
undefined8 FUN_026b07f0(long param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10684);
  if (iVar1 != 0) {
    if (*(short *)(param_1 + 0x10688) == 0 || (short)param_2[1] == 0) {
      if (iVar1 == *param_2) {
        return 1;
      }
    }
    else if ((iVar1 == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x10688) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x10690)) &&
             param_2[5] == *(int *)(param_1 + 0x10698))) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x106a0);
  if (iVar1 != 0) {
    if ((*(short *)(param_1 + 0x106a4) == 0) || ((short)param_2[1] == 0)) {
      if (iVar1 == *param_2) {
        return 1;
      }
    }
    else if ((iVar1 == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x106a4) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x106ac)) &&
             param_2[5] == *(int *)(param_1 + 0x106b4))) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x106bc);
  if (iVar1 != 0) {
    if ((*(short *)(param_1 + 0x106c0) == 0) || ((short)param_2[1] == 0)) {
      if (iVar1 == *param_2) {
        return 1;
      }
    }
    else if ((iVar1 == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x106c0) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x106c8)) &&
             param_2[5] == *(int *)(param_1 + 0x106d0))) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x106d8);
  if (iVar1 != 0) {
    if ((*(short *)(param_1 + 0x106dc) == 0) || ((short)param_2[1] == 0)) {
      if (iVar1 == *param_2) {
        return 1;
      }
    }
    else if ((iVar1 == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x106dc) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x106e4)) &&
             param_2[5] == *(int *)(param_1 + 0x106ec))) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x106f4);
  if (iVar1 != 0) {
    if ((*(short *)(param_1 + 0x106f8) == 0) || ((short)param_2[1] == 0)) {
      if (iVar1 == *param_2) {
        return 1;
      }
    }
    else if ((iVar1 == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x106f8) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x10700)) &&
             param_2[5] == *(int *)(param_1 + 0x10708))) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x10710);
  if (iVar1 != 0) {
    if ((*(short *)(param_1 + 0x10714) == 0) || ((short)param_2[1] == 0)) {
      if (iVar1 == *param_2) {
        return 1;
      }
    }
    else if ((iVar1 == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x10714) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x1071c)) &&
             param_2[5] == *(int *)(param_1 + 0x10724))) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x1072c);
  if (iVar1 != 0) {
    if ((*(short *)(param_1 + 0x10730) == 0) || ((short)param_2[1] == 0)) {
      if (iVar1 == *param_2) {
        return 1;
      }
    }
    else if ((iVar1 == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x10730) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x10738)) &&
             param_2[5] == *(int *)(param_1 + 0x10740))) {
      return 1;
    }
  }
  iVar1 = *(int *)(param_1 + 0x10748);
  if (iVar1 != 0) {
    if ((*(short *)(param_1 + 0x1074c) == 0) || ((short)param_2[1] == 0)) {
      if (iVar1 == *param_2) {
        return 1;
      }
    }
    else if ((iVar1 == *param_2) &&
            ((*(long *)(param_2 + 1) == *(long *)(param_1 + 0x1074c) &&
             *(long *)(param_2 + 3) == *(long *)(param_1 + 0x10754)) &&
             param_2[5] == *(int *)(param_1 + 0x1075c))) {
      return 1;
    }
  }
  return 0;
}

