
void FUN_00194970(long param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 5;
  if (*(code **)(param_1 + 0x28) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00194984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(param_1,param_1 + 0x30);
  return;
}

