
void FUN_00438a10(long *param_1,long param_2)

{
  if (param_2 == 0) {
    return;
  }
  *(undefined8 *)(param_2 + -0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00438a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))
            (param_1,param_2 - *(int *)(param_2 + -4),(long)*(int *)(param_2 + -8) + 0x10);
  return;
}

