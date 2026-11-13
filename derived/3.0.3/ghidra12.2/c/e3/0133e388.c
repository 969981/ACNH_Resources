
void FUN_0133e388(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  puVar1 = PTR_DAT_04bb3380;
  *param_1 = &PTR_LAB_04990278;
  param_1[0x11] = 0;
  param_1[6] = puVar1 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = puVar1 + 0x10;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0133e3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

