
void FUN_0232998c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_04a7f520;
  if (*(char *)(param_1 + 0x455) != '\0') {
    *(undefined1 *)(param_1 + 0x455) = 0;
  }
  if (*(char *)((long)param_1 + 0x229c) != '\0') {
    *(char *)((long)param_1 + 0x229c) = '\0';
  }
  param_1[0x3b4] = &PTR_LAB_04983720;
  FUN_01bfff88(param_1 + 0x342);
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x1af] = puVar1;
  param_1[0x1a6] = puVar1;
  param_1[0x1a1] = puVar1;
  FUN_016de610(param_1);
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02329a34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

