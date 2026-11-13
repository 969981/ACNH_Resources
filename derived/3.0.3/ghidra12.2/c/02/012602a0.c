
void FUN_012602a0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *__ptr;
  long lVar8;
  
  *param_1 = &PTR_FUN_04989388;
  param_1[0x7d] = &PTR_LAB_049894f8;
  if (0 < *(int *)(param_1 + 0x84)) {
    lVar8 = 0;
    do {
      puVar7 = *(undefined8 **)(param_1[0x85] + lVar8 * 8);
      (**(code **)*puVar7)(puVar7);
      lVar8 = lVar8 + 1;
      *puVar7 = param_1[0x86];
      param_1[0x86] = puVar7;
    } while (lVar8 < *(int *)(param_1 + 0x84));
  }
  puVar4 = PTR_DAT_04bb33a8;
  *(undefined4 *)(param_1 + 0x84) = 0;
  param_1[0x7c] = 0;
  param_1[0x77] = puVar4 + 0x10;
  param_1[0x1e] = &PTR_FUN_04989228;
  puVar1 = PTR_DAT_04bb5a60;
  param_1[0x76] = 0;
  param_1[0x6f] = 0;
  param_1[0x68] = 0;
  param_1[0x61] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x5a] = 0;
  param_1[0x70] = puVar1;
  param_1[0x69] = puVar1;
  param_1[0x62] = puVar1;
  param_1[0x5b] = puVar1;
  param_1[0x54] = puVar1;
  param_1[0x4d] = puVar1;
  puVar2 = PTR_DAT_04bb2fe8 + 0x10;
  param_1[0x53] = 0;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0x46] = puVar2;
  uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x4c]);
  if (((uVar5 & 1) != 0) && (__ptr = (void *)param_1[0x4c], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
  }
  param_1[0x4c] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x45] = 0;
  param_1[0x24] = puVar1;
  param_1[0x3e] = 0;
  param_1[0x3f] = puVar1;
  param_1[0x18] = puVar4 + 0x10;
  param_1[0x1d] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = puVar1;
  param_1[0x2a] = 0;
  param_1[0x2b] = puVar1;
  param_1[0x31] = 0;
  param_1[0x32] = puVar2 + 0x10;
  return;
}

