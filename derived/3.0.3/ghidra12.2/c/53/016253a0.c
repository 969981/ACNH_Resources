
void FUN_016253a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  
  *param_1 = &PTR_FUN_049b4948;
  param_1[0x46] = PTR_DAT_04bb33a8 + 0x10;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x4b] = 0;
  param_1[0x45] = 0;
  param_1[0x40] = puVar1 + 0x10;
  puVar2 = PTR_DAT_04bb3058;
  param_1[0x38] = PTR_DAT_04bb3550 + 0x10;
  plVar3 = *(long **)(*(long *)puVar2 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x3f]);
  puVar1 = PTR_DAT_04bb2698;
  if (((uVar4 & 1) != 0) && (pvVar6 = (void *)param_1[0x3f], pvVar6 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
      }
    }
  }
  param_1[0x3f] = 0;
  param_1[0x31] = PTR_DAT_04bb2fe8 + 0x10;
  plVar3 = *(long **)(*(long *)puVar2 + 0x330);
  uVar4 = (**(code **)(*plVar3 + 0x88))(plVar3,param_1[0x37]);
  if (((uVar4 & 1) != 0) && (pvVar6 = (void *)param_1[0x37], pvVar6 != (void *)0x0)) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
      lVar5 = *(long *)puVar1;
      goto joined_r0x01625504;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
    }
  }
  lVar5 = *(long *)puVar1;
joined_r0x01625504:
  if (lVar5 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar5,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016254e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

