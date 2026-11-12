
bool FUN_008827e0(void)

{
  undefined *puVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  undefined *local_20;
  char *pcStack_18;
  
  lVar5 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar5 == 0) || (*(long *)(lVar5 + 0x28) == 0)) || (*(int *)(lVar5 + 0x80) != 1)) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
      if (0xff < (uint)(int)sVar2) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) goto LAB_00882860;
    }
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "TodayGlobalEventId";
    iVar4 = FUN_0273ea30(&local_20);
    bVar3 = iVar4 != 0xffff;
  }
  else {
LAB_00882860:
    bVar3 = false;
  }
  return bVar3;
}

