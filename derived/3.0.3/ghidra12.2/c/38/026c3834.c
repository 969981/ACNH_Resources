
bool FUN_026c3834(void)

{
  int iVar1;
  
  if (DAT_0556aa70 == 0) {
    return false;
  }
  iVar1 = *(int *)(DAT_0556aa70 + 0x10);
  if (iVar1 == 0) {
    return false;
  }
  if ((((iVar1 == 3) || (iVar1 == 9)) || (iVar1 == 0x11)) || ((iVar1 == 0x15 || (iVar1 == 0x18)))) {
    return false;
  }
  return iVar1 != 0x1d;
}

