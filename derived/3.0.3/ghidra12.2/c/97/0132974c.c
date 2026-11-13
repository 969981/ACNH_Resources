
void FUN_0132974c(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bb3058;
  *param_1 = &PTR_FUN_0498e5c0;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xfc6]);
  if (((uVar2 & 1) != 0) && (__ptr = (void *)param_1[0xfc6], __ptr != (void *)0x0)) {
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
  param_1[0xfc6] = 0;
  return;
}

