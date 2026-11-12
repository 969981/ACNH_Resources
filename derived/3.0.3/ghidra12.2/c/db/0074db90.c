
void FUN_0074db90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  void *pvVar9;
  
  *param_1 = &PTR_FUN_04903fc8;
  puVar5 = PTR_DAT_04bb33a8;
  param_1[0xb1] = 0;
  param_1[0xac] = puVar5 + 0x10;
  puVar4 = PTR_DAT_04bb3058;
  param_1[0xa1] = &PTR_FUN_04904af8;
  uVar6 = (**(code **)(**(long **)(*(long *)puVar4 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar4 + 0x330),param_1[0xab]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0xab] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xab] + 8))();
  }
  param_1[0xab] = 0;
  param_1[0x9b] = &PTR_LAB_04904988;
  param_1[0x95] = &PTR_LAB_04904848;
  param_1[0x84] = &PTR_LAB_04904708;
  lVar8 = *(long *)puVar4;
  param_1[0xa0] = 0;
  param_1[0x9a] = 0;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x94]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x94] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x94] + 8))();
  }
  param_1[0x94] = 0;
  param_1[0x7e] = puVar5 + 0x10;
  param_1[0x83] = 0;
  param_1[0x78] = puVar5 + 0x10;
  puVar2 = PTR_DAT_04bb31d0;
  puVar1 = PTR_DAT_04bb31d0 + 0x10;
  param_1[0x7d] = 0;
  param_1[0x77] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = puVar1;
  param_1[0x6c] = puVar1;
  puVar3 = PTR_DAT_04bb2fe8;
  param_1[0x65] = PTR_DAT_04bb2fe8 + 0x10;
  uVar6 = (**(code **)(**(long **)(*(long *)puVar4 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar4 + 0x330),param_1[0x6b]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x6b], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  lVar8 = *(long *)puVar4;
  param_1[0x5f] = puVar1;
  param_1[0x59] = puVar1;
  param_1[0x53] = puVar1;
  param_1[0x4d] = puVar1;
  param_1[0x47] = puVar1;
  param_1[0x6b] = 0;
  param_1[100] = 0;
  param_1[0x5e] = 0;
  param_1[0x58] = 0;
  param_1[0x52] = 0;
  param_1[0x4c] = 0;
  param_1[0x3f] = &PTR_LAB_049045c8;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x46]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x46], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  puVar2 = puVar2 + 0x10;
  param_1[0x46] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = puVar5 + 0x10;
  param_1[0x3e] = 0;
  param_1[0x21] = puVar2;
  param_1[0x32] = 0;
  param_1[0x33] = puVar5 + 0x10;
  param_1[0x1a] = puVar3 + 0x10;
  lVar8 = *(long *)puVar4;
  param_1[0x2c] = 0;
  param_1[0x2d] = puVar2;
  param_1[0x26] = 0;
  param_1[0x27] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x20]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x20], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  lVar8 = *(long *)puVar4;
  param_1[0x20] = 0;
  param_1[0x12] = &PTR_LAB_049045c8;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x19]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x19], pvVar9 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
  }
  param_1[0x19] = 0;
  param_1[0x11] = 0;
  param_1[6] = &PTR_LAB_04904438;
  param_1[0xb] = 0;
  param_1[0xc] = puVar5 + 0x10;
  return;
}

