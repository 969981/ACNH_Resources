
void FUN_02e3f220(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  puVar1 = PTR_DAT_04bc6c78;
  param_1[0x35] = (long)(PTR_DAT_04bb2df8 + 0x10);
  *param_1 = (long)(puVar1 + 0x10);
  FUN_03ebae78(param_1 + 1);
  plVar2 = param_1 + 0xb;
  puVar3 = (undefined8 *)*plVar2;
  if ((puVar3 != (undefined8 *)0x0) && ((long *)*puVar3 != (long *)0x0 && (long *)*puVar3 == plVar2)
     ) {
    *plVar2 = 0;
    *puVar3 = 0;
  }
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e3f2a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

