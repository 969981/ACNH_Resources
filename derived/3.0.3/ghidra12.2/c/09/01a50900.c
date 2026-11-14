
void FUN_01a50900(undefined8 *param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_0498d548;
  param_1[1] = &DAT_048f9750;
  param_1[3] = &DAT_048f9750;
  param_1[4] = 0;
  FUN_0277f02c(param_2,param_1);
  iVar1 = *(int *)(param_3 + 8);
  iVar2 = *(int *)(param_3 + 0xc);
  *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + iVar1;
  *(int *)((long)param_1 + 0x14) = *(int *)((long)param_1 + 0x14) + iVar2;
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + iVar1;
  *(int *)((long)param_1 + 0x24) = *(int *)((long)param_1 + 0x24) + iVar2;
  return;
}

