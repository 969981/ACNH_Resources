
undefined8 FUN_02b8c9b0(long param_1,long param_2,int param_3)

{
  int iVar1;
  long lVar2;
  int *piVar3;
  
  lVar2 = *(long *)(param_1 + 8);
  if (*(int *)(param_2 + 0xc) == 0) {
    return 1;
  }
  if (((*(int *)(param_2 + 0xc) == 0) || (*(int *)(param_2 + 0xc) != 0x1a)) ||
     ((*(byte *)(param_2 + 8) & 1) != 0)) {
    if (*(int *)(param_2 + 0xc) == 0) {
      return 1;
    }
    if (*(int *)(param_2 + 0xc) != 0x1b) {
      return 1;
    }
    if ((*(byte *)(param_2 + 8) & 1) != 0) {
      return 1;
    }
    piVar3 = (int *)(lVar2 + 0x18);
    if (*piVar3 == -1) goto LAB_02b8ca64;
    if (*(int *)(lVar2 + 0x1c) == -1) goto LAB_02b8ca6c;
    if (*(int *)(lVar2 + 0x20) == -1) goto LAB_02b8ca74;
    iVar1 = *(int *)(lVar2 + 0x24);
  }
  else {
    piVar3 = (int *)(lVar2 + 8);
    if (*piVar3 == -1) {
LAB_02b8ca64:
      lVar2 = 0;
      goto LAB_02b8ca78;
    }
    if (*(int *)(lVar2 + 0xc) == -1) {
LAB_02b8ca6c:
      lVar2 = 1;
      goto LAB_02b8ca78;
    }
    if (*(int *)(lVar2 + 0x10) == -1) {
LAB_02b8ca74:
      lVar2 = 2;
      goto LAB_02b8ca78;
    }
    iVar1 = *(int *)(lVar2 + 0x14);
  }
  if (iVar1 != -1) {
    return 1;
  }
  lVar2 = 3;
LAB_02b8ca78:
  piVar3[lVar2] = param_3;
  return 1;
}

