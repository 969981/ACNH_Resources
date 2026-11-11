
int FUN_003c9078(undefined8 *param_1,uint param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 3) == '\0') {
    return 0;
  }
  iVar1 = FUN_003c9188(*param_1);
  return iVar1 + *(int *)(param_1[1] + (ulong)param_2 * 0xc + 8) + 8;
}

