
void FUN_003be5b0(long param_1,uint param_2)

{
  if (*(char *)(param_1 + 10) == '\0' && param_2 < 4) {
                    /* WARNING: Could not recover jumptable at 0x003be5f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_003be5f8 + (ulong)(byte)(&DAT_0413841d)[param_2] * 4))(0);
    return;
  }
  return;
}

