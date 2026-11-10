
void FUN_0018d4c4(long *param_1,uint param_2)

{
  ulong uVar1;
  long local_18;
  
  if (param_2 == 0xffffffff) {
    *param_1 = 0;
    return;
  }
  uVar1 = (ulong)param_2;
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_18);
  }
  else {
    FUN_0018c9b0(&local_18,0);
  }
  *(long *)PTR_DAT_04bcbcb0 = local_18;
  if ((int)param_2 < 0) {
    uVar1 = -(ulong)-param_2;
  }
  *param_1 = local_18 + uVar1;
  return;
}

