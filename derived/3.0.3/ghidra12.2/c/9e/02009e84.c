
bool FUN_02009e84(void)

{
  bool bVar1;
  uint uVar2;
  
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    if (DAT_04cea100 != 0) {
      uVar2 = FUN_00883550();
      if (uVar2 < 2) goto LAB_02009ec8;
      if (DAT_04cea100 != 0) {
        uVar2 = FUN_00883068();
        return 1 < uVar2;
      }
    }
    bVar1 = true;
  }
  else {
LAB_02009ec8:
    bVar1 = false;
  }
  return bVar1;
}

