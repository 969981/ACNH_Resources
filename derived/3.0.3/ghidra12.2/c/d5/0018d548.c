
int FUN_0018d548(ulong *param_1)

{
  int iVar1;
  ulong local_18;
  
  if (*param_1 == 0) {
    return -1;
  }
  if (*PTR_DAT_04bcbca8 == '\0') {
    FUN_0018cb8c(&local_18);
  }
  else {
    FUN_0018c9b0(&local_18,0);
  }
  DAT_04c589a0 = local_18;
  iVar1 = (int)*param_1 - (int)local_18;
  if (*param_1 <= local_18) {
    iVar1 = 0;
  }
  return iVar1;
}

