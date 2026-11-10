
void FUN_00143398(long param_1)

{
  if (DAT_04c57ae8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    nndetailDiagAbortNoMessageImpl();
  }
                    /* WARNING: Could not recover jumptable at 0x001433ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04c57ae8)(*(undefined8 *)(param_1 + -8));
  return;
}

