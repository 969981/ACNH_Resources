
void FUN_00702480(long *param_1,undefined4 *param_2)

{
  (**(code **)(*param_1 + 0x108))(*param_2);
  (**(code **)(*param_1 + 0x110))(param_2[1],param_1);
                    /* WARNING: Could not recover jumptable at 0x007024d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x118))(param_2[2],param_1);
  return;
}

