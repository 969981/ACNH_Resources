
void FUN_038a44c0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b624c8;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  if ((long *)param_1[2] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x038a4508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[2] + 0x18))();
  return;
}

