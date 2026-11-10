
bool FUN_002b73bc(long param_1,long param_2,char param_3)

{
  int local_30 [4];
  byte local_14 [4];
  
  if (((param_2 == 0) || (param_3 == -1)) ||
     (FUN_002ba1c4(local_30,*(undefined8 *)PTR_DAT_04bc1510,local_14,param_2), local_30[0] != 0)) {
    return false;
  }
  return *(char *)(param_1 + (ulong)local_14[0] + 0x94) == param_3;
}

