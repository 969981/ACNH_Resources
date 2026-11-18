
void FUN_035a12f8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  
  *param_1 = &PTR_FUN_04b3e590;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x25] = PTR_DAT_04bb35a8 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x2f]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x2f] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x2f] + 8))();
  }
  param_1[0x2f] = 0;
  puVar2 = PTR_DAT_04bb3380;
  param_1[0x24] = 0;
  param_1[0x1f] = puVar2 + 0x10;
  param_1[6] = PTR_DAT_04bb58c8 + 0x10;
  plVar3 = *(long **)(*(long *)puVar1 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x1e]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x1e] != (long *)0x0)) {
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
                    /* WARNING: Could not recover jumptable at 0x035a13e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

