
void FUN_032d3fec(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[0x1b];
  *param_1 = &PTR_FUN_04b1b898;
  puVar1 = PTR_DAT_04bb2698;
  if (lVar3 != 0) {
    plVar2 = (long *)FUN_038cb610(*(undefined8 *)PTR_DAT_04bb2698,lVar3);
    (**(code **)(*plVar2 + 0x38))(plVar2,lVar3);
  }
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  FUN_0037bb6c(param_1);
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032d4074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

