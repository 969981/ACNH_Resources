
bool FUN_033febf0(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_20;
  char *pcStack_18;
  
  lVar4 = *(long *)PTR_DAT_04bb27f8;
  if ((((lVar4 == 0) ||
       ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0 && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)
        ))) || ((*(int *)(lVar4 + 0x14) != 4 && (*(int *)(lVar4 + 0x14) != 5)))) &&
     (uVar3 = FUN_03688e2c(0), (uVar3 & 1) != 0)) {
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "IsParty";
    iVar2 = FUN_02758850(&local_20);
    bVar1 = iVar2 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

