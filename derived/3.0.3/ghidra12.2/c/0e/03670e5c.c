
void FUN_03670e5c(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04b429e8;
  if ((*(byte *)(param_1 + 0x2276) & 1) != 0) {
    (**(code **)(*DAT_05b059a0 + 0x18))(DAT_05b059a0,param_1[0x2278]);
  }
  *param_1 = &PTR_LAB_04bb1578;
  if ((*(byte *)(param_1 + 7) & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03670edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],param_1[9]);
  return;
}

