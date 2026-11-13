
void FUN_0147a868(undefined8 *param_1)

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
  
  puVar4 = PTR_DAT_04bb33a8;
  *param_1 = &PTR_FUN_049a4d40;
  param_1[0xf5] = 0;
  param_1[0xd6] = &PTR_FUN_049a4eb0;
  param_1[0xf0] = puVar4 + 0x10;
  puVar5 = PTR_DAT_04bb3058;
  puVar2 = PTR_DAT_04bb2fe8;
  lVar8 = *(long *)PTR_DAT_04bb3058;
  puVar1 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0xe9] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0xef]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0xef], pvVar9 != (void *)0x0)) {
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
  param_1[0xef] = 0;
  param_1[0xd6] = &PTR_LAB_049a5010;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0xe8] = 0;
  param_1[0xdc] = puVar1;
  param_1[0xe3] = puVar3 + 0x10;
  uVar6 = (**(code **)(**(long **)(*(long *)puVar5 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar5 + 0x330),param_1[0xe2]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0xe2], pvVar9 != (void *)0x0)) {
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
  lVar8 = *(long *)puVar5;
  puVar1 = puVar2 + 0x10;
  param_1[0xe2] = 0;
  param_1[0xbc] = &PTR_FUN_049a4eb0;
  param_1[0xcf] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0xd5]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0xd5], pvVar9 != (void *)0x0)) {
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
  param_1[0xd5] = 0;
  param_1[0xc9] = puVar3 + 0x10;
  lVar8 = *(long *)puVar5;
  param_1[0xbc] = &PTR_LAB_049a5010;
  param_1[0xce] = 0;
  param_1[0xc2] = puVar1;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[200]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[200], pvVar9 != (void *)0x0)) {
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
  lVar8 = *(long *)puVar5;
  puVar2 = puVar2 + 0x10;
  param_1[200] = 0;
  param_1[0xa2] = &PTR_FUN_049a4eb0;
  param_1[0xb5] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0xbb]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0xbb], pvVar9 != (void *)0x0)) {
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
  lVar8 = *(long *)puVar5;
  puVar3 = puVar3 + 0x10;
  param_1[0xbb] = 0;
  param_1[0xa2] = &PTR_LAB_049a5010;
  param_1[0xaf] = puVar3;
  param_1[0xb4] = 0;
  param_1[0xa8] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0xae]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0xae], pvVar9 != (void *)0x0)) {
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
  puVar4 = puVar4 + 0x10;
  param_1[0xae] = 0;
  param_1[0x9c] = puVar3;
  param_1[0xa1] = 0;
  param_1[0x96] = puVar3;
  param_1[0x9b] = 0;
  param_1[0x90] = puVar4;
  param_1[0x95] = 0;
  param_1[0x8a] = puVar4;
  param_1[0x8f] = 0;
  param_1[0x84] = puVar3;
  param_1[0x89] = 0;
  param_1[0x7e] = puVar4;
  param_1[0x83] = 0;
  param_1[0x78] = puVar4;
  param_1[0x7d] = 0;
  param_1[0x72] = puVar3;
  param_1[0x77] = 0;
  param_1[0x6c] = puVar4;
  param_1[0x71] = 0;
  param_1[0x66] = puVar4;
  param_1[0x6b] = 0;
  param_1[0x60] = puVar3;
  param_1[0x65] = 0;
  param_1[0x5a] = puVar4;
  param_1[0x5f] = 0;
  param_1[0x54] = puVar4;
  param_1[0x59] = 0;
  param_1[0x4e] = puVar3;
  param_1[0x53] = 0;
  param_1[0x48] = puVar3;
  param_1[0x4d] = 0;
  param_1[0x42] = puVar3;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x18] = puVar4;
  param_1[0x3b] = 0;
  param_1[0x3c] = puVar4;
  param_1[0x35] = 0;
  param_1[0x36] = puVar4;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar3;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar3;
  param_1[0x23] = 0;
  param_1[0x24] = puVar3;
  param_1[0x1d] = 0;
  param_1[0x1e] = puVar3;
  return;
}

