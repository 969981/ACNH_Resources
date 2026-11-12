
void FUN_00a85fcc(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_FUN_0492ed78;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0x31] = 0;
  param_1[0x26] = puVar1 + 0x10;
  param_1[0x2b] = 0;
  param_1[0x2c] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x1e] = PTR_DAT_04bb3550 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x25]);
  if (((uVar2 & 1) != 0) && (__ptr = (void *)param_1[0x25], __ptr != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  param_1[0x25] = 0;
  param_1[0x18] = &PTR_LAB_04931cd8;
  param_1[0x1d] = 0;
  return;
}

