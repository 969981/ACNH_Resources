
void FUN_01717350(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  
  puVar1 = PTR_DAT_04bb3380;
  *param_1 = &PTR_FUN_049bd748;
  param_1[0x20] = 0;
  param_1[0x1b] = puVar1 + 0x10;
  puVar4 = PTR_DAT_04bb3058;
  puVar3 = PTR_DAT_04bb2fe8;
  lVar7 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x14] = puVar1;
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x1a]);
  puVar2 = PTR_DAT_04bb2698;
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x1a], pvVar8 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
  }
  lVar7 = *(long *)puVar4;
  param_1[0x1a] = 0;
  param_1[0xd] = puVar1;
  plVar6 = *(long **)(lVar7 + 0x330);
  uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_1[0x13]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x13], pvVar8 != (void *)0x0)) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
  }
  param_1[0x13] = 0;
  param_1[6] = puVar3 + 0x10;
  plVar6 = *(long **)(*(long *)puVar4 + 0x330);
  uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_1[0xc]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0xc], pvVar8 != (void *)0x0)) {
    if (*(long *)puVar2 == 0) {
      free(pvVar8);
      lVar7 = *(long *)puVar2;
      goto joined_r0x01717500;
    }
    plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar8);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
    }
  }
  lVar7 = *(long *)puVar2;
joined_r0x01717500:
  if (lVar7 == 0) {
    free(param_1);
    return;
  }
  plVar6 = (long *)FUN_038cb610(lVar7,param_1);
  if (plVar6 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x017174dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x38))(plVar6,param_1);
  return;
}

