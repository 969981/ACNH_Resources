
void FUN_0154f570(long param_1,long param_2,uint *param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 < 0) {
    iVar3 = iVar3 + 1;
  }
  iVar1 = iVar3 >> 1;
  iVar5 = *(int *)(param_2 + 0xc);
  if ((*param_3 | 2) != 3) {
    iVar1 = *(int *)(param_2 + 0xc);
    iVar5 = iVar3 >> 1;
  }
  iVar4 = *(int *)(param_4 + 8);
  iVar3 = iVar4;
  if (*param_3 == 2) {
    iVar3 = iVar4 + iVar5;
  }
  iVar2 = *(int *)(param_4 + 0xc) + iVar1;
  if (*param_3 != 1) {
    iVar2 = *(int *)(param_4 + 0xc);
    iVar4 = iVar3;
  }
  *(int *)(param_1 + 0x10) = iVar4;
  *(int *)(param_1 + 0x14) = iVar2;
  *(int *)(param_1 + 0x20) = iVar5 + iVar4 + -1;
  *(int *)(param_1 + 0x24) = iVar1 + iVar2 + -1;
  return;
}

