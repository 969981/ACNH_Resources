
void FUN_00143928(void)

{
  if (DAT_04c57b08 == 0) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortNoMessageImpl();
  }
  nnosLockMutex(&DAT_04c57b40);
  DAT_04c57b0c = DAT_04c57b0c + -1;
  nnosUnlockMutex(&DAT_04c57b40);
  nnosSignalEvent(&DAT_04c57b18);
  nnosWaitThread(DAT_04c57b10);
  if (DAT_04c57b68 != 0) {
    FUN_00143b8c(DAT_04c57b68,0);
    FUN_00143300(DAT_04c57b68);
    DAT_04c57b68 = 0;
  }
  if (DAT_04c57b60 != 0) {
    FUN_00143b8c(DAT_04c57b60,0);
    FUN_00143300(DAT_04c57b60);
    DAT_04c57b60 = 0;
  }
  nnosFinalizeMutex(&DAT_04c57b40);
  nnosFinalizeEvent(&DAT_04c57b18);
  if (DAT_04c57b10 != 0) {
    FUN_00143598();
    DAT_04c57b10 = 0;
  }
  DAT_04c57b08 = 0;
  memset(&DAT_04c57b18,0,0x58);
  return;
}

