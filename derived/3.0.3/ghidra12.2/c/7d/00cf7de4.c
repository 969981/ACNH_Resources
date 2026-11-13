
bool FUN_00cf7de4(void)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  undefined *local_40;
  char *pcStack_38;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "MncMovetoBridge";
  local_30 = puVar1;
  iVar3 = FUN_02758850(&local_30);
  if (iVar3 == 0) {
    bVar2 = true;
  }
  else {
    pcStack_38 = "MncGenerateInOfficeTemp";
    local_40 = puVar1;
    iVar3 = FUN_02758850(&local_40);
    bVar2 = iVar3 != 0;
  }
  return bVar2;
}

