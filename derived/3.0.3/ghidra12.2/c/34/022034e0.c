
bool FUN_022034e0(void)

{
  bool bVar1;
  int iVar2;
  undefined *local_28;
  char *pcStack_20;
  byte local_14 [4];
  
  FUN_0252d11c(local_14);
  if (local_14[0] < 8) {
    local_28 = PTR_DAT_04bb2020 + 0x10;
    pcStack_20 = "AlwJuneBrideDayCount";
    iVar2 = FUN_0274bce0(local_14,&local_28);
    bVar1 = 5 < iVar2;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

