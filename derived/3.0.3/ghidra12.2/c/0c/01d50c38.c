
void FUN_01d50c38(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = (long)(PTR_DAT_04bc1420 + 0x10);
  puVar1 = PTR_DAT_04bc1060;
  FUN_01c82cb0(*(undefined8 *)PTR_DAT_04bc1060,param_1);
  *param_1 = (long)(PTR_DAT_04bc1058 + 0x10);
  if (*(long *)puVar1 != 0) {
    FUN_01c82cb0(*(long *)puVar1,param_1);
  }
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01d50cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

