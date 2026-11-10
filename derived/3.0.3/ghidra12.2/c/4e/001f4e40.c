
void FUN_001f4e40(size_t param_1)

{
  if (DAT_04c5ea48 == (code *)0x0) {
    malloc(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001f4e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_04c5ea48)();
  return;
}

