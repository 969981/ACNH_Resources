
void FUN_00195a48(long param_1,undefined1 param_2)

{
  (**(code **)(*(long *)(param_1 + 0x250) + 0x10))(param_1 + 0x250);
  *(undefined1 *)(param_1 + 0x24a) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00195a84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x250) + 0x20))(param_1 + 0x250);
  return;
}

