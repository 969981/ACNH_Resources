
void FUN_011b04d8(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = (long)&PTR_LAB_04985640;
  FUN_016101cc(param_1 + 0x7e);
  param_1[0x61] = (long)(PTR_DAT_04bbb868 + 0x10);
  puVar1 = PTR_DAT_04bbc1a0;
  *param_1 = (long)(PTR_DAT_04bbb9b0 + 0x10);
  param_1[0x51] = (long)(puVar1 + 0x10);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x011b055c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

