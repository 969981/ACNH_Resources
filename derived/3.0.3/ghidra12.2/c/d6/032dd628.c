
void FUN_032dd628(long param_1)

{
  long *plVar1;
  
  if (param_1 == 0) {
    return;
  }
  plVar1 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,param_1);
                    /* WARNING: Could not recover jumptable at 0x032dd664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

