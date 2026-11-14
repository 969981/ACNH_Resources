
void FUN_01650660(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  
  puVar3 = PTR_DAT_04bb31d0;
  *param_1 = &PTR_FUN_049b84f0;
  param_1[0x5f] = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0x5a] = puVar1;
  puVar4 = PTR_DAT_04bb3058;
  puVar2 = PTR_DAT_04bb3550 + 0x10;
  lVar7 = *(long *)PTR_DAT_04bb3058;
  param_1[0x52] = puVar2;
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0x59]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x59], pvVar8 != (void *)0x0)) {
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
  param_1[0x59] = 0;
  param_1[0x4c] = puVar1;
  param_1[0x51] = 0;
  param_1[0x44] = puVar2;
  plVar6 = *(long **)(lVar7 + 0x330);
  uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_1[0x4b]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x4b], pvVar8 != (void *)0x0)) {
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
  puVar3 = puVar3 + 0x10;
  param_1[0x4b] = 0;
  param_1[0x43] = 0;
  param_1[0x32] = puVar3;
  param_1[0x3d] = 0;
  param_1[0x3e] = puVar3;
  param_1[0x37] = 0;
  param_1[0x38] = puVar3;
  param_1[0x2b] = PTR_DAT_04bb2fe8 + 0x10;
  plVar6 = *(long **)(*(long *)puVar4 + 0x330);
  uVar5 = (**(code **)(*plVar6 + 0x88))(plVar6,param_1[0x31]);
  if (((uVar5 & 1) != 0) && (pvVar8 = (void *)param_1[0x31], pvVar8 != (void *)0x0)) {
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
  param_1[0x31] = 0;
  return;
}

