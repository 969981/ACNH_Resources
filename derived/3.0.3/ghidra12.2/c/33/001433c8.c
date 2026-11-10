
int FUN_001433c8(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_04c57b08 == 0) {
    iVar2 = -1;
  }
  else {
    nnosLockMutex(&DAT_04c57b40);
    iVar1 = FUN_00143bd0(DAT_04c57b60);
    iVar2 = FUN_00143bd0(DAT_04c57b68);
    iVar2 = iVar2 + iVar1;
    nnosUnlockMutex(&DAT_04c57b40);
  }
  return iVar2;
}

