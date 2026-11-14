
undefined8 FUN_01b1f840(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "BuiltTownOffice";
  iVar2 = FUN_0273ec70(*(undefined8 *)(param_1 + 8),&local_30);
  if ((iVar2 != 0) && (uVar3 = FUN_0118c084(), (uVar3 & 1) != 0)) {
    pcStack_28 = "JoinedTodayRadioGymnastics";
    local_30 = puVar1 + 0x10;
    iVar2 = FUN_0274bbb0(*(undefined8 *)(param_1 + 0x10),&local_30);
    if (iVar2 == 0) {
      pcStack_28 = "JoinedPastRadioGymnasticsNum";
      local_30 = puVar1 + 0x10;
      iVar2 = FUN_0274bbb0(*(undefined8 *)(param_1 + 0x10),&local_30);
      if (0 < iVar2) {
        return 1;
      }
    }
  }
  return 0;
}

