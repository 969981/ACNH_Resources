
void FUN_016c4b24(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  
  *param_1 = &PTR_FUN_049bc0d0;
  puVar3 = PTR_DAT_04bb3058;
  puVar2 = PTR_DAT_04bb2fe8;
  lVar6 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0xb2] = puVar1;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0xb8]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0xb8], pvVar7 != (void *)0x0)) {
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
  param_1[0xb8] = 0;
  param_1[0xab] = puVar1;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0xb1]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0xb1], pvVar7 != (void *)0x0)) {
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
  param_1[0xb1] = 0;
  param_1[0xa4] = puVar2 + 0x10;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0xaa]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0xaa], pvVar7 != (void *)0x0)) {
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
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0xaa] = 0;
  param_1[0xa3] = 0;
  param_1[0x9d] = 0;
  param_1[0x91] = puVar2 + 0x10;
  param_1[0x9e] = puVar1 + 0x10;
  param_1[0x98] = puVar1 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x97]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x97], pvVar7 != (void *)0x0)) {
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
  param_1[0x97] = 0;
  param_1[0x8a] = puVar2 + 0x10;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x90]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x90], pvVar7 != (void *)0x0)) {
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
  param_1[0x90] = 0;
  param_1[0x83] = puVar2 + 0x10;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x89]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x89], pvVar7 != (void *)0x0)) {
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
  param_1[0x89] = 0;
  param_1[0x7c] = puVar2 + 0x10;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x82]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x82], pvVar7 != (void *)0x0)) {
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
  param_1[0x82] = 0;
  param_1[0x75] = puVar2 + 0x10;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x7b]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x7b], pvVar7 != (void *)0x0)) {
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
  param_1[0x7b] = 0;
  param_1[0x6f] = puVar1 + 0x10;
  param_1[0x74] = 0;
  param_1[0x68] = puVar2 + 0x10;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x6e]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x6e], pvVar7 != (void *)0x0)) {
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
  param_1[0x6e] = 0;
  param_1[0x62] = puVar1 + 0x10;
  param_1[0x67] = 0;
  param_1[0x5b] = puVar2 + 0x10;
  uVar4 = (**(code **)(**(long **)(lVar6 + 0x330) + 0x88))(*(long **)(lVar6 + 0x330),param_1[0x61]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x61], pvVar7 != (void *)0x0)) {
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
  param_1[0x61] = 0;
  param_1[0x54] = puVar2 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x5a]);
  if (((uVar4 & 1) != 0) && (pvVar7 = (void *)param_1[0x5a], pvVar7 != (void *)0x0)) {
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
  param_1[0x5a] = 0;
  param_1[0x53] = 0;
  param_1[0x4e] = puVar1 + 0x10;
  param_1[0x48] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0x4d] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = puVar1;
  param_1[0x18] = puVar1;
  param_1[0x3b] = 0;
  param_1[0x3c] = puVar1;
  param_1[0x35] = 0;
  param_1[0x36] = puVar1;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar1;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar1;
  param_1[0x23] = 0;
  param_1[0x24] = puVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = puVar1;
  return;
}

