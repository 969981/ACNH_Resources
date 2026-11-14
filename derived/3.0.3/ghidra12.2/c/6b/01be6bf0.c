
void FUN_01be6bf0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_04a3d2a8;
  param_1[0x2ec] = &PTR_LAB_04a3d278;
  param_1[0x2d4] = &PTR_LAB_04a3d278;
  param_1[700] = &PTR_LAB_04a3d278;
  param_1[0x2a4] = &PTR_LAB_04a3d278;
  param_1[0x28c] = &PTR_LAB_04a3d278;
  param_1[0x274] = &PTR_LAB_04a3d278;
  param_1[0x25c] = &PTR_LAB_04a3d278;
  param_1[0x244] = &PTR_LAB_04a3d278;
  param_1[0x22c] = &PTR_LAB_04a3d278;
  param_1[0x214] = &PTR_LAB_04a3d278;
  param_1[0x1fc] = &PTR_LAB_04a3d278;
  param_1[0x1e4] = &PTR_LAB_04a3d278;
  param_1[0x1cc] = &PTR_LAB_04a3d278;
  param_1[0x1b4] = &PTR_LAB_04a3d278;
  param_1[0x19c] = &PTR_LAB_04a3d278;
  param_1[0x184] = &PTR_LAB_04a3d278;
  param_1[0x16c] = &PTR_LAB_04a3d278;
  param_1[0x154] = &PTR_LAB_04a3d278;
  param_1[0x13c] = &PTR_LAB_04a3d278;
  param_1[0x124] = &PTR_LAB_04a3d278;
  param_1[0x10c] = &PTR_LAB_04a3d278;
  param_1[0xf4] = &PTR_LAB_04a3d278;
  param_1[0xdc] = &PTR_LAB_04a3d278;
  param_1[0xc4] = &PTR_LAB_04a3d278;
  param_1[0xac] = &PTR_LAB_04a3d278;
  param_1[0x94] = &PTR_LAB_04a3d278;
  param_1[0x7c] = &PTR_LAB_04a3d278;
  param_1[100] = &PTR_LAB_04a3d278;
  param_1[0x4c] = &PTR_LAB_04a3d278;
  param_1[0x34] = &PTR_LAB_04a3d278;
  param_1[0x1c] = &PTR_LAB_04a3d278;
  param_1[4] = &PTR_LAB_04a3d278;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01be6cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

