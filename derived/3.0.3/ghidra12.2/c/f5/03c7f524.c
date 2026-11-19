
void FUN_03c7f524(long *param_1)

{
  if (((*(byte *)(DAT_05af83f0 + 0x504) & 1) == 0) ||
     (*(int *)(*(long *)(param_1[2] + 0x50) + 0x48) - 8U < 0xfffffffc)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03c7f55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))();
  return;
}

