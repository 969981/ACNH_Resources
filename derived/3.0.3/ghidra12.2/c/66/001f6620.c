
void thunk_FUN_001f4e60(void *param_1)

{
  if (DAT_04c5ea50 == (code *)0x0) {
    free(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f4e6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04c5ea50)();
  return;
}

