
bool FUN_021c3a3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "InducedNpcNum";
  iVar1 = FUN_0274bce0(param_3,&local_30);
  return *(int *)(param_1 + 0x38) <= iVar1;
}

