
void FUN_039c4114(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  *param_1 = (long)&PTR_FUN_04b6ac78;
  FUN_039c3f70();
  FUN_038e31ec(param_1 + 0x82);
  FUN_038e31ec(param_1 + 0x78);
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x6b] = (long)puVar1;
  param_1[0x66] = (long)puVar1;
  param_1[0x61] = (long)puVar1;
  puVar2 = PTR_DAT_04bd1068;
  param_1[0x55] = (long)puVar1;
  param_1[0x51] = (long)puVar1;
  param_1[0x4d] = (long)puVar1;
  param_1[0x49] = (long)puVar1;
  param_1[0x45] = (long)puVar1;
  param_1[0x41] = (long)puVar1;
  *param_1 = (long)(PTR_DAT_04bd1070 + 0x10);
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x5b] = (long)(puVar2 + 0x10);
  param_1[0x3b] = (long)(puVar2 + 0x10);
  if (*(long *)puVar1 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)puVar1,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x039c41c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

