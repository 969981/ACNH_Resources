
void FUN_0399d240(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04bd11b8;
  *param_1 = &PTR_FUN_04b69a70;
  param_1[0x10] = puVar1 + 0x10;
  FUN_0390d560();
  param_1[1] = puVar1 + 0x10;
  FUN_0390d560();
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0399d2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

