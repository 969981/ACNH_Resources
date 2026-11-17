
void FUN_02b0d750(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar2 = PTR_DAT_04bbc310;
  puVar1 = PTR_DAT_04bbc2c8;
  *param_1 = &PTR_FUN_04aa18b8;
  param_1[0x16] = puVar2 + 0x10;
  param_1[0x52] = puVar1 + 0x10;
  FUN_03f457c4(param_1 + 0x6d);
  param_1[0x4d] = PTR_DAT_04bbc5d8 + 0x10;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02b0d7d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

