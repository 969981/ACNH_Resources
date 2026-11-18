
void FUN_03373acc(long *param_1)

{
  ulong uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0xe8))();
  if ((uVar1 & 1) == 0) {
    (**(code **)(*(long *)param_1[0x42] + 0xb8))();
                    /* WARNING: Could not recover jumptable at 0x03373b1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x210))(param_1);
    return;
  }
  return;
}

