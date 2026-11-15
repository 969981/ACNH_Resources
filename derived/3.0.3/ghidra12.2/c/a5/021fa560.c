
void FUN_021fa560(float param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar3 = *(int *)(param_6 + 0x10);
  iVar5 = *(int *)(param_6 + 0x14);
  iVar4 = *(int *)(param_6 + 0x20);
  iVar6 = *(int *)(param_6 + 0x24);
  iVar1 = iVar4 + iVar3;
  if (iVar1 < 0 != SCARRY4(iVar4,iVar3)) {
    iVar1 = iVar1 + 1;
  }
  iVar1 = (iVar1 >> 1) + 1;
  iVar2 = iVar6 + iVar5;
  if (iVar2 < 0 != SCARRY4(iVar6,iVar5)) {
    iVar2 = iVar2 + 1;
  }
  iVar2 = (iVar2 >> 1) + 1;
  if (param_2 != 0) {
    *(int *)(param_2 + 8) = iVar1;
    *(int *)(param_2 + 0xc) = (int)((float)(iVar6 + 2) + param_1);
  }
  if (param_3 != 0) {
    *(int *)(param_3 + 8) = (int)((float)(iVar4 + 2) + param_1);
    *(int *)(param_3 + 0xc) = iVar2;
  }
  if (param_4 != 0) {
    *(int *)(param_4 + 8) = iVar1;
    *(int *)(param_4 + 0xc) = (int)((float)(iVar5 + -1) - param_1);
  }
  if (param_5 != 0) {
    *(int *)(param_5 + 8) = (int)((float)(iVar3 + -1) - param_1);
    *(int *)(param_5 + 0xc) = iVar2;
  }
  return;
}

