
void FUN_03ca0140(undefined8 *param_1)

{
  (**(code **)*param_1)();
                    /* WARNING: Could not recover jumptable at 0x03ca0174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[8] + 0x38))((long *)param_1[8],param_1);
  return;
}

