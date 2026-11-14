
void FUN_01628274(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_LAB_049b4c90;
  if ((long *)param_1[2] != (long *)0x0) {
    (**(code **)(*(long *)param_1[2] + 8))();
  }
  puVar2 = PTR_DAT_04bbdaa8;
  puVar1 = PTR_DAT_04bb3048;
  param_1[2] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)(puVar1 + 0x10);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016282f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

