
void FUN_008ed254(undefined8 *param_1)

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
  
  param_1[0xb1] = 0;
  param_1[0xab] = 0;
  puVar3 = PTR_DAT_04bb33a8;
  param_1[0xa5] = 0;
  puVar4 = PTR_DAT_04bb31d0;
  *param_1 = &PTR_FUN_049210e8;
  param_1[0x9f] = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0x99] = 0;
  puVar2 = puVar4 + 0x10;
  param_1[0xac] = puVar1;
  param_1[0xa6] = puVar1;
  param_1[0x94] = puVar1;
  param_1[0xa0] = puVar2;
  param_1[0x9a] = puVar2;
  param_1[0x8e] = puVar1;
  param_1[0x93] = 0;
  param_1[0x88] = puVar2;
  param_1[0x8d] = 0;
  param_1[0x82] = puVar2;
  param_1[0x87] = 0;
  param_1[0x7b] = &PTR_LAB_049262b8;
  param_1[0x81] = 0;
  param_1[0x75] = puVar1;
  param_1[0x7a] = 0;
  param_1[0x6f] = puVar1;
  param_1[0x74] = 0;
  param_1[0x69] = puVar2;
  param_1[0x6e] = 0;
  param_1[99] = puVar2;
  param_1[0x68] = 0;
  param_1[0x5d] = puVar2;
  param_1[0x62] = 0;
  param_1[0x56] = &PTR_LAB_049262b8;
  param_1[0x5c] = 0;
  param_1[0x50] = puVar1;
  param_1[0x55] = 0;
  puVar2 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x4a] = puVar1;
  param_1[0x4f] = 0;
  puVar5 = PTR_DAT_04bb3058;
  lVar8 = *(long *)PTR_DAT_04bb3058;
  param_1[0x44] = puVar1;
  param_1[0x49] = 0;
  param_1[0x3e] = puVar1;
  param_1[0x43] = 0;
  param_1[0x37] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x3d]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x3d], pvVar9 != (void *)0x0)) {
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
  param_1[0x3d] = 0;
  param_1[0x30] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x36]);
  if (((uVar6 & 1) != 0) && (pvVar9 = (void *)param_1[0x36], pvVar9 != (void *)0x0)) {
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
  puVar4 = puVar4 + 0x10;
  param_1[0x36] = 0;
  param_1[0x2f] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar3;
  param_1[6] = puVar3;
  param_1[0x23] = 0;
  param_1[0x24] = puVar3;
  param_1[0x1d] = 0;
  param_1[0x1e] = puVar4;
  param_1[0x17] = 0;
  param_1[0x18] = puVar4;
  param_1[0x11] = 0;
  param_1[0x12] = puVar4;
  param_1[0xb] = 0;
  param_1[0xc] = puVar3;
  return;
}

