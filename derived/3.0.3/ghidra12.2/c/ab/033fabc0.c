
bool FUN_033fabc0(void)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *local_20;
  char *pcStack_18;
  
  uVar3 = FUN_033faa90();
  if ((uVar3 & 1) == 0) {
    bVar1 = false;
  }
  else {
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "SeqHousePhotoTutorialDone";
    iVar2 = FUN_02758850(&local_20);
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

