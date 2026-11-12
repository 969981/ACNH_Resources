
void FUN_00a92360(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  *param_1 = &PTR_LAB_0492eee8;
  param_1[0x18] = &PTR_LAB_0492f058;
  if (0 < *(int *)(param_1 + 0x1f)) {
    lVar3 = 0;
    do {
      puVar2 = *(undefined8 **)(param_1[0x20] + lVar3 * 8);
      (**(code **)*puVar2)(puVar2);
      lVar3 = lVar3 + 1;
      *puVar2 = param_1[0x21];
      param_1[0x21] = puVar2;
    } while (lVar3 < *(int *)(param_1 + 0x1f));
  }
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00a92408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

