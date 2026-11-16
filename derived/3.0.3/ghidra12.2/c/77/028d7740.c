
ulong FUN_028d7740(void)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_30;
  char *pcStack_28;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "IsVisitNpcTidyToday";
  local_30 = puVar1;
  uVar3 = FUN_0273ea30(&local_30);
  if ((int)uVar3 != 1) {
    pcStack_28 = "IsCallNpcTidy";
    local_30 = puVar1;
    iVar2 = FUN_0273ea30(&local_30);
    uVar3 = (ulong)(iVar2 == 1);
  }
  return uVar3;
}

