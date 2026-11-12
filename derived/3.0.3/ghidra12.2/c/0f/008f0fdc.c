
void FUN_008f0fdc(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  
  *param_1 = &PTR_LAB_04924fd8;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0xb2] = &PTR_LAB_04926178;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xbe]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0xbe] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xbe] + 8))();
  }
  param_1[0xbe] = 0;
  FUN_008ed254(param_1);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x008f1078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

