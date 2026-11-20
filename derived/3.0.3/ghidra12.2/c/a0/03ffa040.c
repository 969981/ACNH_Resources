
void FUN_03ffa040(undefined8 *param_1)

{
  long *plVar1;
  
  param_1[3] = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0x200007d00;
  *param_1 = &PTR_FUN_04bb13a0;
  param_1[6] = 4;
  param_1[7] = 0x3f80000000000200;
  param_1[8] = 0x3f80a3d73f81eb85;
  param_1[9] = 0x3f7c28f63f7eb852;
  param_1[10] = 0x100000000800;
  *(undefined1 *)(param_1 + 4) = 0;
  memset(param_1 + 0xb,0,0x1032);
  *(undefined1 *)((long)param_1 + 0x108a) = 0;
  *(undefined1 *)((long)param_1 + 0x108b) = 0;
  *(undefined1 *)((long)param_1 + 0x108c) = 0;
  *(undefined1 *)((long)param_1 + 0x108d) = 0;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar1 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03ffa110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x38))(plVar1,param_1);
  return;
}

