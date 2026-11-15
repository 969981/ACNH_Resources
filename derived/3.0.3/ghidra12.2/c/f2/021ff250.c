
void FUN_021ff250(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0498d548;
  param_1[1] = &DAT_048f9750;
  param_1[3] = &DAT_048f9750;
  param_1[4] = 0;
  FUN_0118ad90(param_1,0xc73bed0b);
  iVar1 = *(int *)(param_1 + 2);
  iVar2 = *(int *)((long)param_1 + 0x14);
  iVar3 = iVar1 + -3;
  *(int *)(param_1 + 2) = iVar3;
  *(int *)((long)param_1 + 0x14) = iVar2 + 7;
  *(int *)(param_1 + 4) = (*(int *)(param_1 + 4) - iVar1) + iVar3 + 6;
  *(int *)((long)param_1 + 0x24) = iVar2 + 0xc;
  return;
}

