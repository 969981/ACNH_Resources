
void FUN_020772d8(int *param_1,undefined4 *param_2,int *param_3,int *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  if ((param_1[7] == param_4[7]) &&
     ((*(long *)(param_4 + 8) == *(long *)(param_1 + 8) &&
      *(long *)(param_4 + 10) == *(long *)(param_1 + 10)) && param_4[0xc] == param_1[0xc])) {
    if (((short)param_1[1] == 0) || ((short)param_4[1] == 0)) {
      if (*param_1 != *param_4) goto LAB_0207730c;
    }
    else if ((*param_1 != *param_4) ||
            ((*(long *)(param_4 + 1) != *(long *)(param_1 + 1) ||
             *(long *)(param_4 + 3) != *(long *)(param_1 + 3)) || param_4[5] != param_1[5]))
    goto LAB_0207730c;
    uVar1 = 0x14;
    goto LAB_02077370;
  }
LAB_0207730c:
  if ((short)param_1[1] == 0) {
    iVar2 = *param_1;
LAB_02077360:
    if (iVar2 == *param_3) {
LAB_0207736c:
      uVar1 = 0x15;
      goto LAB_02077370;
    }
  }
  else {
    iVar2 = *param_1;
    if ((short)param_3[1] == 0) goto LAB_02077360;
    if ((iVar2 == *param_3) &&
       ((*(long *)(param_3 + 1) == *(long *)(param_1 + 1) &&
        *(long *)(param_3 + 3) == *(long *)(param_1 + 3)) && param_3[5] == param_1[5]))
    goto LAB_0207736c;
  }
  uVar1 = 0x16;
LAB_02077370:
  *param_2 = uVar1;
  return;
}

