
int FUN_01e37a70(long param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  iVar3 = *(int *)(param_1 + 0x48);
  if (iVar3 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 0;
    iVar4 = *(int *)(param_1 + 0x44);
    do {
      iVar1 = 0;
      if (*(int *)(param_1 + 0x40) <= iVar4) {
        iVar1 = *(int *)(param_1 + 0x40);
      }
      lVar5 = *(long *)(param_1 + 0x38) + (long)(iVar4 - iVar1) * 0x14;
      if ((*(char *)(lVar5 + 0x11) != '\0') && (*(int *)(lVar5 + 8) == *param_2)) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + -1;
      iVar4 = iVar4 + 1;
    } while (iVar3 != 0);
  }
  return iVar2;
}

