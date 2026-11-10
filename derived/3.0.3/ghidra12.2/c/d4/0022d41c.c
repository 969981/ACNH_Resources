
void FUN_0022d41c(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcd0a8 + 0x10);
  FUN_0022cd1c(param_1 + 1);
  FUN_00242804(param_1 + 0x39);
  FUN_00242804(param_1 + 0x86);
  *(undefined4 *)(param_1 + 0xd3) = 0;
  FUN_0022cde8(param_1 + 1);
  (**(code **)(param_1[0x39] + 0x18))(param_1 + 0x39);
                    /* WARNING: Could not recover jumptable at 0x0022d494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1[0x86] + 0x18))(param_1 + 0x86);
  return;
}

