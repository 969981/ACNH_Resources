
void FUN_011bd91c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_049869e0;
  param_1[0x124] = PTR_DAT_04bbbaa0 + 0x10;
  FUN_011b705c(param_1 + 0x13a);
  FUN_009391e0(param_1 + 0x125);
  FUN_0118ecfc(param_1 + 0x13);
  puVar1 = PTR_DAT_04bbb988 + 0x10;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0xe] = puVar2;
  param_1[2] = puVar1;
  param_1[3] = puVar2;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011bd9b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

