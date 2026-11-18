
void FUN_0364a770(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + param_2;
  *(ulong *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + (ulong)param_2;
                    /* WARNING: Could not recover jumptable at 0x0364a800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0364a804 + (ulong)(byte)(&DAT_041972f4)[*(uint *)(param_1 + 0x1c)] * 4))();
  return;
}

