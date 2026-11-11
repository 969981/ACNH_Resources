
void FUN_004224f0(undefined4 param_1,ulong param_2)

{
  (**(code **)(*DAT_04c6f378 + 0x28))(DAT_04c6f378,param_1,param_2 & 1);
                    /* WARNING: Could not recover jumptable at 0x00422548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_04c6f258 + 0x28))(DAT_04c6f258,param_1,param_2 & 1);
  return;
}

