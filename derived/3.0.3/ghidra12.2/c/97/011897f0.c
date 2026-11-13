
void FUN_011897f0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04bb2df8;
  *param_1 = &PTR_LAB_04983848;
  puVar1 = puVar1 + 0x10;
  param_1[0x185] = puVar1;
  param_1[0x161] = puVar1;
  param_1[0x13d] = puVar1;
  param_1[0x119] = puVar1;
  param_1[0xf5] = puVar1;
  param_1[0xd1] = puVar1;
  param_1[0xad] = puVar1;
  param_1[0x89] = puVar1;
  param_1[0x65] = puVar1;
  param_1[0x41] = puVar1;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01189870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

