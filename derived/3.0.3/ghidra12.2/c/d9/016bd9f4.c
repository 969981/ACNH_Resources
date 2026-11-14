
bool FUN_016bd9f4(long param_1)

{
  int iVar1;
  undefined *local_28;
  char *pcStack_20;
  undefined1 uStack_11;
  
  if (*(int *)(param_1 + 0x98) == 0) {
    return false;
  }
  FUN_0252d11c(&uStack_11);
  local_28 = PTR_DAT_04bb2020 + 0x10;
  pcStack_20 = "IsHotelEditTutorial";
  iVar1 = FUN_02753180(&uStack_11,&local_28);
  return iVar1 != 0;
}

