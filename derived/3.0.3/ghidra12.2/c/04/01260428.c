
void FUN_01260428(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04989228;
  puVar1 = PTR_DAT_04bb5a60;
  param_1[0x58] = 0;
  param_1[0x51] = 0;
  param_1[0x4a] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x43] = 0;
  param_1[0x52] = puVar1;
  param_1[0x4b] = puVar1;
  param_1[0x44] = puVar1;
  param_1[0x2f] = puVar1;
  param_1[0x3c] = 0;
  param_1[0x3d] = puVar1;
  param_1[0x35] = 0;
  param_1[0x36] = puVar1;
  puVar2 = PTR_DAT_04bb3058;
  param_1[0x28] = PTR_DAT_04bb2fe8 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar2 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar2 + 0x330),param_1[0x2e]);
  if (((uVar3 & 1) != 0) && (__ptr = (void *)param_1[0x2e], __ptr != (void *)0x0)) {
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
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x2e] = 0;
  param_1[0x27] = 0;
  param_1[6] = puVar1;
  param_1[0x20] = 0;
  param_1[0x21] = puVar1;
  param_1[0x19] = 0;
  param_1[0x1a] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = puVar1;
  param_1[0x13] = 0;
  param_1[0x14] = puVar2 + 0x10;
  return;
}

