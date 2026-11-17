
void FUN_02e3d98c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  *param_1 = &PTR_FUN_04ad4c40;
  FUN_03ebae78(param_1 + 1);
  puVar3 = param_1 + 0xb;
  puVar2 = (undefined8 *)*puVar3;
  if ((puVar2 != (undefined8 *)0x0) &&
     ((undefined8 *)*puVar2 != (undefined8 *)0x0 && (undefined8 *)*puVar2 == puVar3)) {
    *puVar3 = 0;
    *puVar2 = 0;
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02e3da00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

