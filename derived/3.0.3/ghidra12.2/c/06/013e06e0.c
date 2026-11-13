
void FUN_013e06e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04996438;
  puVar3 = PTR_DAT_04bb33a8;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x30] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = puVar2 + 0x10;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0x24] = 0;
  param_1[0x25] = puVar3 + 0x10;
  param_1[0xd] = puVar2 + 0x10;
  puVar1 = puVar1 + 0x10;
  param_1[0x1e] = 0;
  param_1[0x1f] = puVar1;
  param_1[0x18] = 0;
  param_1[0x19] = puVar1;
  param_1[0x12] = 0;
  param_1[0x13] = puVar1;
  puVar1 = PTR_DAT_04bb3058;
  param_1[6] = PTR_DAT_04bb2fe8 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xc]);
  if (((uVar4 & 1) != 0) && (__ptr = (void *)param_1[0xc], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  param_1[0xc] = 0;
  return;
}

