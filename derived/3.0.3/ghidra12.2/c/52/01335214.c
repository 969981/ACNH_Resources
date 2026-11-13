
void FUN_01335214(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  puVar1 = PTR_DAT_04bb5a88;
  puVar2 = PTR_DAT_04bb3380;
  *param_1 = &PTR_LAB_0498f9d0;
  puVar3 = PTR_DAT_04bb6ca0;
  param_1[0x24] = 0;
  param_1[6] = puVar3 + 0x10;
  param_1[0x1e] = 0;
  param_1[0x1f] = puVar1 + 0x10;
  param_1[0x18] = 0;
  param_1[0x19] = puVar2 + 0x10;
  param_1[0xc] = PTR_DAT_04bb6ca8 + 0x10;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x12] = 0;
  param_1[0x13] = puVar2 + 0x10;
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x013352a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

