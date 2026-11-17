
void FUN_02e257b8(long param_1)

{
  ulong uVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(long *)(param_1 + 8) == 0) || (uVar1 = FUN_02e29f0c(), (uVar1 & 1) == 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e257f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(param_1 + 8) + 0xb0))();
  return;
}

