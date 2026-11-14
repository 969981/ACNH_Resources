
bool FUN_01b1f7e0(long param_1)

{
  int iVar1;
  undefined *local_20;
  char *pcStack_18;
  
  if (*(int *)(param_1 + 0x4c) < 2) {
    return false;
  }
  local_20 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = "MainmenuCall";
  iVar1 = FUN_0274bbb0(*(undefined8 *)(param_1 + 0x10),&local_20);
  return 0 < iVar1;
}

