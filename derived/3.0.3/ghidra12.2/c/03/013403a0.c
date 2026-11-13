
void FUN_013403a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_04bb6048;
  *param_1 = &PTR_LAB_04990c98;
  param_1[0x23] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x1d] = 0;
  param_1[0x1e] = puVar1;
  param_1[0x17] = 0;
  param_1[0x18] = puVar1;
  puVar2 = PTR_DAT_04bb3380;
  param_1[0x11] = 0;
  param_1[0x12] = puVar1;
  param_1[6] = puVar2 + 0x10;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0xb] = 0;
  param_1[0xc] = puVar2 + 0x10;
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0134041c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

