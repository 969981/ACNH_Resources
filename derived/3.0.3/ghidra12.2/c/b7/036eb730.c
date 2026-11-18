
void FUN_036eb730(void)

{
  int iVar1;
  long lVar2;
  undefined *local_30;
  char *pcStack_28;
  
  local_30 = PTR_DAT_04bb2020;
  *PTR_DAT_04bbe508 = 1;
  local_30 = local_30 + 0x10;
  pcStack_28 = "RoomSketchPaste";
  iVar1 = FUN_02758850(&local_30);
  if (iVar1 == 0) {
    lVar2 = *(long *)PTR_DAT_04bb27f8;
    if (lVar2 != 0) {
      iVar1 = FUN_018118e0();
      *(int *)(lVar2 + 0x3a4) = *(int *)(lVar2 + 0x3a4) + iVar1;
    }
  }
  return;
}

