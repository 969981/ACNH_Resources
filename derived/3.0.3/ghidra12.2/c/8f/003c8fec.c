
long FUN_003c8fec(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  if ((*(char *)(param_1 + 3) == '\0') || (*(uint *)param_1[1] <= param_2)) {
    return 0;
  }
  if (param_1[2] == 0) {
    uVar1 = ((uint *)param_1[1])[(ulong)param_2 * 3 + 2];
    lVar2 = FUN_003c9158(*param_1);
    return lVar2 + (ulong)uVar1 + 8;
  }
  return *(long *)(param_1[2] + (ulong)param_2 * 8);
}

