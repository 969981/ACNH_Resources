
void FUN_00285dc0(undefined8 param_1)

{
  long *plVar1;
  
  plVar1 = (long *)FUN_0028a120(*(undefined8 *)PTR_DAT_04bcdc50,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00285df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

