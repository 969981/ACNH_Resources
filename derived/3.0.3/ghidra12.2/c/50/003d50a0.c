
long FUN_003d50a0(uint *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)((long)param_1 + (ulong)*param_1);
  if (param_2 < *piVar1) {
    return (long)piVar1 + (ulong)(uint)piVar1[(long)param_2 + 1];
  }
  return 0;
}

