
void FUN_0147ac30(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  *param_1 = &PTR_FUN_049a4eb0;
  puVar2 = PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  lVar6 = *(long *)PTR_DAT_04bb3058;
  param_1[0x13] = puVar1;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x19]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x19], pvVar7 != (void *)0x0)) {
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
  param_1[0x19] = 0;
  *param_1 = &PTR_LAB_049a5010;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0x12] = 0;
  param_1[6] = puVar1;
  param_1[0xd] = puVar3 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar2 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar2 + 0x330),param_1[0xc]);
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

