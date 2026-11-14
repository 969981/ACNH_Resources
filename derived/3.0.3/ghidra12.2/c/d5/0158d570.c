
void FUN_0158d570(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_049acb60;
  param_1[0x44] = &PTR_LAB_049ad460;
  if (0 < *(int *)(param_1 + 0x4b)) {
    lVar5 = 0;
    do {
      puVar4 = *(undefined8 **)(param_1[0x4c] + lVar5 * 8);
      (**(code **)*puVar4)(puVar4);
      lVar5 = lVar5 + 1;
      *puVar4 = param_1[0x4d];
      param_1[0x4d] = puVar4;
    } while (lVar5 < *(int *)(param_1 + 0x4b));
  }
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *param_1 = &PTR_FUN_049acce0;
  if (param_1[0x42] != 0) {
    FUN_015efc70(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x88));
    param_1[0x42] = 0;
  }
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x31] = PTR_DAT_04bb3578 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x41]);
  if (((uVar2 & 1) != 0) && ((long *)param_1[0x41] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
  }
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0158d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

