
bool FUN_02b62a50(long param_1,undefined4 param_2)

{
  bool bVar1;
  undefined **local_40;
  char *pcStack_38;
  long *local_30;
  undefined4 *puStack_28;
  char local_20 [4];
  undefined4 local_1c;
  long local_18;
  
  bVar1 = false;
  if (param_1 != 0) {
    local_20[0] = '\0';
    pcStack_38 = local_20;
    local_30 = &local_18;
    local_40 = &PTR_FUN_04aa4ce0;
    puStack_28 = &local_1c;
    local_1c = param_2;
    local_18 = param_1;
    FUN_02b2b1c0(&local_40);
    bVar1 = local_20[0] != '\0';
  }
  return bVar1;
}

