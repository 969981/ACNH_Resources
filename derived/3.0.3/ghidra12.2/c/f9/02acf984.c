
void FUN_02acf984(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_LAB_04a9eb78;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0xb] = 0;
  param_1[6] = puVar1 + 0x10;
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02acf9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

