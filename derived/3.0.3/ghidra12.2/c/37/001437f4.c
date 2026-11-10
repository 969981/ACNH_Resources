
undefined8 FUN_001437f4(long param_1)

{
  if (DAT_04c57b08 == 0) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortNoMessageImpl();
  }
  nnosLockMutex(&DAT_04c57b40);
  FUN_00143a90(DAT_04c57b60,*(undefined8 *)(DAT_04c57b60 + 8),param_1,param_1 + 0x1d8);
  nnosUnlockMutex(&DAT_04c57b40);
  return 0;
}

