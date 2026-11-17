
void FUN_02afdf6c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04aa0d48;
  puVar2 = PTR_DAT_04bb5a88;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x31] = 0;
  param_1[0x20] = puVar1 + 0x10;
  param_1[0x2b] = 0;
  param_1[0x2c] = puVar2 + 0x10;
  param_1[0x25] = 0;
  param_1[0x26] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x18] = PTR_DAT_04bb3550 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x1f]);
  if (((uVar3 & 1) != 0) && (__ptr = (void *)param_1[0x1f], __ptr != (void *)0x0)) {
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
  param_1[0x1f] = 0;
  return;
}

