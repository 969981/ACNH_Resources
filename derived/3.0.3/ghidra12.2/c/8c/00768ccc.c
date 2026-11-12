
void FUN_00768ccc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  
  *param_1 = &PTR_FUN_04909538;
  puVar2 = PTR_DAT_04bb3058;
  param_1[0x3e] = &PTR_LAB_049096a0;
  plVar4 = *(long **)(*(long *)puVar2 + 0x330);
  uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,param_1[0x45]);
  puVar1 = PTR_DAT_04bb2698;
  if (((uVar5 & 1) != 0) && (pvVar7 = (void *)param_1[0x45], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
  }
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x45] = 0;
  param_1[0x3d] = 0;
  param_1[0x32] = PTR_DAT_04bb3380 + 0x10;
  param_1[0x37] = 0;
  param_1[0x38] = puVar3 + 0x10;
  param_1[0x2b] = PTR_DAT_04bb2fe8 + 0x10;
  plVar4 = *(long **)(*(long *)puVar2 + 0x330);
  uVar5 = (**(code **)(*plVar4 + 0x88))(plVar4,param_1[0x31]);
  if (((uVar5 & 1) != 0) && (pvVar7 = (void *)param_1[0x31], pvVar7 != (void *)0x0)) {
    if (*(long *)puVar1 == 0) {
      free(pvVar7);
      lVar6 = *(long *)puVar1;
      goto joined_r0x00768e28;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar7);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
    }
  }
  lVar6 = *(long *)puVar1;
joined_r0x00768e28:
  if (lVar6 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(lVar6,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00768e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

