
void FUN_01605478(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  void *pvVar8;
  
  *param_1 = &PTR_FUN_049b1ff8;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x58] = 0;
  param_1[0x52] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x53] = puVar1;
  param_1[0x4d] = puVar1;
  puVar4 = PTR_DAT_04bb3058;
  param_1[0x46] = PTR_DAT_04bb2fe8 + 0x10;
  plVar5 = *(long **)(*(long *)puVar4 + 0x330);
  uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1[0x4c]);
  puVar3 = PTR_DAT_04bb2698;
  if (((uVar6 & 1) != 0) && (pvVar8 = (void *)param_1[0x4c], pvVar8 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
  }
  param_1[0x4c] = 0;
  param_1[0x45] = 0;
  puVar2 = PTR_DAT_04bbd520 + 0x10;
  param_1[0x33] = puVar1;
  param_1[0x3f] = 0;
  param_1[0x40] = puVar1;
  param_1[0x38] = 0;
  param_1[0x39] = puVar2;
  param_1[0x2b] = PTR_DAT_04bb3550 + 0x10;
  plVar5 = *(long **)(*(long *)puVar4 + 0x330);
  uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1[0x32]);
  if (((uVar6 & 1) != 0) && (pvVar8 = (void *)param_1[0x32], pvVar8 != (void *)0x0)) {
    if (*(long *)puVar3 == 0) {
      free(pvVar8);
      lVar7 = *(long *)puVar3;
      goto joined_r0x016055f8;
    }
    plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
    }
  }
  lVar7 = *(long *)puVar3;
joined_r0x016055f8:
  if (lVar7 == 0) {
    free(param_1);
    return;
  }
  plVar5 = (long *)FUN_038cb610(lVar7,param_1);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016055d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  return;
}

