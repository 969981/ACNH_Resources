
void FUN_01653444(undefined8 *param_1)

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
  
  puVar3 = PTR_DAT_04bb31d0;
  *param_1 = &PTR_FUN_049b8fa8;
  param_1[0xd7] = 0;
  param_1[0xd1] = 0;
  param_1[0xcb] = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0xc5] = 0;
  param_1[0xbf] = 0;
  param_1[0xb9] = 0;
  param_1[0xb3] = 0;
  param_1[0xad] = 0;
  param_1[0xa7] = 0;
  param_1[0xd2] = puVar1;
  param_1[0xcc] = puVar1;
  param_1[0xc6] = puVar1;
  param_1[0xc0] = puVar1;
  param_1[0xba] = puVar1;
  param_1[0xb4] = puVar1;
  param_1[0xae] = puVar1;
  param_1[0xa8] = puVar1;
  param_1[0xa2] = puVar1;
  param_1[0x9c] = puVar1;
  param_1[0xa1] = 0;
  puVar5 = PTR_DAT_04bb3550;
  puVar2 = PTR_DAT_04bb3550 + 0x10;
  param_1[0x96] = puVar1;
  param_1[0x9b] = 0;
  puVar4 = PTR_DAT_04bb3058;
  lVar8 = *(long *)PTR_DAT_04bb3058;
  param_1[0x90] = puVar1;
  param_1[0x95] = 0;
  param_1[0x8a] = puVar1;
  param_1[0x8f] = 0;
  param_1[0x82] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x89]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x89], pvVar9 != (void *)0x0)) {
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
  param_1[0x89] = 0;
  param_1[0x7c] = puVar1;
  param_1[0x81] = 0;
  param_1[0x74] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x7b]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x7b], pvVar9 != (void *)0x0)) {
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
  param_1[0x7b] = 0;
  param_1[0x6e] = puVar3 + 0x10;
  param_1[0x73] = 0;
  param_1[0x66] = puVar5 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x6d]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x6d], pvVar9 != (void *)0x0)) {
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
  param_1[0x6d] = 0;
  param_1[0x60] = puVar3 + 0x10;
  param_1[0x65] = 0;
  param_1[0x58] = puVar5 + 0x10;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x5f]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x5f], pvVar9 != (void *)0x0)) {
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
  puVar3 = puVar3 + 0x10;
  param_1[0x5f] = 0;
  param_1[0x52] = puVar3;
  param_1[0x57] = 0;
  param_1[0x4c] = puVar3;
  param_1[0x51] = 0;
  param_1[0x46] = puVar3;
  param_1[0x4b] = 0;
  param_1[0x40] = puVar3;
  param_1[0x45] = 0;
  puVar2 = PTR_DAT_04bb2fe8;
  lVar8 = *(long *)puVar4;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x39] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x3f]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x3f], pvVar9 != (void *)0x0)) {
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
  param_1[0x3f] = 0;
  param_1[0x32] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x38]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x38], pvVar9 != (void *)0x0)) {
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
  param_1[0x38] = 0;
  param_1[0x2b] = puVar2 + 0x10;
  uVar6 = (**(code **)(**(long **)(*(long *)puVar4 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar4 + 0x330),param_1[0x31]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x31], pvVar9 != (void *)0x0)) {
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
  param_1[0x31] = 0;
  return;
}

