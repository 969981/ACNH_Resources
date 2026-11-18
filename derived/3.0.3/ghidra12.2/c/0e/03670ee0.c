
void FUN_03670ee0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_LAB_04b429e8;
  if ((*(byte *)(param_1 + 0x2276) & 1) != 0) {
    (**(code **)(*DAT_05b059a0 + 0x18))(DAT_05b059a0,param_1[0x2278]);
  }
  *param_1 = &PTR_LAB_04bb1578;
  if ((*(byte *)(param_1 + 7) & 1) != 0) {
    (**(code **)(*(long *)param_1[8] + 0x18))((long *)param_1[8],param_1[9]);
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03670f80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

