
void FUN_028b70ac(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04a91ff8;
  if (param_1[6] != 0) {
    (**(code **)(*(long *)param_1[5] + 0x38))();
  }
  if (param_1[2] == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x028b70fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x38))();
  return;
}

