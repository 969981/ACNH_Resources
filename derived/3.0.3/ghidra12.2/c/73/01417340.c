
void FUN_01417340(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bb31d0;
  *param_1 = &PTR_FUN_049980f8;
  param_1[0x24] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x1f] = puVar1;
  puVar2 = PTR_DAT_04bb3058;
  param_1[0x18] = PTR_DAT_04bb2fe8 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar2 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar2 + 0x330),param_1[0x1e]);
  if (((uVar3 & 1) != 0) && (__ptr = (void *)param_1[0x1e], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  param_1[0x1e] = 0;
  param_1[0x17] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = puVar1;
  puVar2 = PTR_DAT_04bb6048 + 0x10;
  param_1[0xb] = 0;
  param_1[0xc] = puVar1;
  param_1[6] = puVar2;
  return;
}

