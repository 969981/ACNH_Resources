
void FUN_0193b6cc(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  
  param_1[0x77] = 0;
  *param_1 = &PTR_FUN_049df7a0;
  param_1[0x72] = &PTR_LAB_049df928;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x61] = PTR_DAT_04bb3578 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x71]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x71] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x71] + 8))();
  }
  param_1[0x71] = 0;
  FUN_019094b0(param_1);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0193b77c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

