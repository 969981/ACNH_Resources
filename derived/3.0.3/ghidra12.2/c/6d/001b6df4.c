
void FUN_001b6df4(long *param_1,undefined8 param_2)

{
  FUN_00194940(param_1 + 8);
  FUN_001953d0(*(undefined8 *)param_1[1],param_2);
  FUN_001953d0(*(undefined8 *)param_1[4],param_2);
                    /* WARNING: Could not recover jumptable at 0x001b6e40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))(param_1);
  return;
}

