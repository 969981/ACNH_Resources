
long FUN_00284178(long *param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long local_18;
  
  if ((char)param_1[1] == '\0') {
    return -1;
  }
  local_18 = 0;
  FUN_002282f0(&local_18);
  lVar3 = local_18 - *param_1;
  plVar2 = (long *)FUN_00228380();
  lVar1 = 0;
  if (*plVar2 != 0) {
    lVar1 = lVar3 / *plVar2;
  }
  return lVar1;
}

