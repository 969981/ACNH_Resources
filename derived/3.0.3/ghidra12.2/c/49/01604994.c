
void FUN_01604994(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  void *pvVar7;
  
  *param_1 = &PTR_FUN_049b1d28;
  param_1[0x5c] = &PTR_FUN_049b1ff8;
  puVar4 = PTR_DAT_04bb31d0;
  param_1[0xb4] = 0;
  param_1[0xae] = 0;
  puVar1 = puVar4 + 0x10;
  param_1[0xaf] = puVar1;
  param_1[0xa9] = puVar1;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0xa2] = PTR_DAT_04bb2fe8 + 0x10;
  plVar5 = *(long **)(*(long *)puVar3 + 0x330);
  uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1[0xa8]);
  if (((uVar6 & 1) != 0) && (pvVar7 = (void *)param_1[0xa8], pvVar7 != (void *)0x0)) {
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
  param_1[0xa8] = 0;
  param_1[0x9c] = puVar1;
  puVar2 = PTR_DAT_04bbd520 + 0x10;
  param_1[0xa1] = 0;
  param_1[0x9b] = 0;
  param_1[0x8f] = puVar1;
  param_1[0x94] = 0;
  param_1[0x95] = puVar2;
  param_1[0x87] = PTR_DAT_04bb3550 + 0x10;
  plVar5 = *(long **)(*(long *)puVar3 + 0x330);
  uVar6 = (**(code **)(*plVar5 + 0x88))(plVar5,param_1[0x8e]);
  if (((uVar6 & 1) != 0) && (pvVar7 = (void *)param_1[0x8e], pvVar7 != (void *)0x0)) {
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
  param_1[0x8e] = 0;
  param_1[0x2b] = &PTR_LAB_049b1e90;
  param_1[0x56] = puVar4 + 0x10;
  param_1[0x5b] = 0;
  return;
}

