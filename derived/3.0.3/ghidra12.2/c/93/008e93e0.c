
void FUN_008e93e0(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_1 = &PTR_FUN_049219d0;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0x24] = 0;
  param_1[0x1f] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[6] = &PTR_LAB_049267f8;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x1e]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x1e] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
  }
  param_1[0x1e] = 0;
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008e9488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

