
void FUN_017171c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  puVar1 = PTR_DAT_04bb3380;
  *param_1 = &PTR_FUN_049bd748;
  param_1[0x20] = 0;
  param_1[0x1b] = puVar1 + 0x10;
  puVar3 = PTR_DAT_04bb3058;
  puVar2 = PTR_DAT_04bb2fe8;
  lVar6 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x14] = puVar1;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x1a]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x1a], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  lVar6 = *(long *)puVar3;
  param_1[0x1a] = 0;
  param_1[0xd] = puVar1;
  plVar5 = *(long **)(lVar6 + 0x330);
  uVar4 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1[0x13]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x13], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  param_1[0x13] = 0;
  param_1[6] = puVar2 + 0x10;
  plVar5 = *(long **)(*(long *)puVar3 + 0x330);
  uVar4 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1[0xc]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0xc], pvVar7 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
  }
  param_1[0xc] = 0;
  return;
}

