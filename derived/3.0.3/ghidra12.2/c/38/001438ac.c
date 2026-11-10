
undefined8 FUN_001438ac(long param_1)

{
  int iVar1;
  
  if (DAT_04c57b08 != 0) {
    nnosLockMutex(&DAT_04c57b40);
    iVar1 = FUN_00143858(DAT_04c57b60,param_1);
    if (iVar1 == 0) {
      FUN_00143a90(DAT_04c57b68,*(undefined8 *)(DAT_04c57b68 + 8),param_1,param_1 + 0x1d8);
      nnosSignalEvent(&DAT_04c57b18);
      nnosUnlockMutex(&DAT_04c57b40);
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  nndetailDiagAbortNoMessageImpl();
}

