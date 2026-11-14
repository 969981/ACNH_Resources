
void FUN_01575a80(undefined8 *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_FUN_049ab880;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[199] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = puVar1 + 0x10;
  param_1[0xbc] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0xb5] = PTR_DAT_04bb2fe8 + 0x10;
  uVar2 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xbb]);
  if (((uVar2 & 1) != 0) && (__ptr = (void *)param_1[0xbb], __ptr != (void *)0x0)) {
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
  param_1[0xbb] = 0;
  FUN_015731ec(param_1);
  return;
}

