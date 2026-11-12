
void FUN_007ca010(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  
  *param_1 = &PTR_FUN_04914330;
  FUN_038e1a84(param_1 + 0x10);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[5] = &PTR_LAB_04b5e7a0;
  param_1[6] = 0;
  lVar1 = DAT_05ae7600;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (lVar1 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(lVar1,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007ca084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

