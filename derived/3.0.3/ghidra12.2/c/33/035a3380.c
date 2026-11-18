
bool FUN_035a3380(void)

{
  bool bVar1;
  int iVar2;
  undefined *local_20;
  char *pcStack_18;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x7a57de51) {
    return false;
  }
  local_20 = PTR_DAT_04bb2020 + 0x10;
  pcStack_18 = "TapIndoorSelectCloudIsland";
  iVar2 = FUN_02743000(&local_20);
  if (iVar2 == 0) {
    bVar1 = *(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

