
void FUN_03acc1d4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = (long)&PTR_FUN_04b71380;
  FUN_03ad1490(param_1 + 0x15);
  FUN_03ad1490(param_1 + 0x12);
  FUN_03ad1490(param_1 + 0xf);
  puVar1 = PTR_DAT_04bd1068;
  param_1[10] = (long)(PTR_DAT_04bbd578 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03acc268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

