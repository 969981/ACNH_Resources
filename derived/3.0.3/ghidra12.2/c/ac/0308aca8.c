
bool FUN_0308aca8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  undefined *local_40;
  char *local_38;
  
  puVar2 = PTR_DAT_04bb2020;
  lVar1 = param_1 + 0x1f8;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  local_38 = "Mobile1stBoot_MydesignShowcase";
  iVar3 = FUN_0274bce0(lVar1,&local_40);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x23fc) == 0) {
      local_40 = puVar2 + 0x10;
      local_38 = "Mobile1stBoot_MydesignShowcase";
      iVar3 = FUN_0274bce0(lVar1,&local_40);
      if (iVar3 == 0) goto LAB_0308ad60;
    }
  }
  else if ((*(int *)(param_1 + 0x23fc) == 0) && (iVar3 = FUN_033fc390(lVar1), iVar3 != 1)) {
LAB_0308ad60:
    local_40 = puVar2 + 0x10;
    local_38 = "MainmenuMydesignShowcase";
    iVar3 = FUN_0274bce0(lVar1,&local_40);
    return iVar3 != 0;
  }
  return false;
}

