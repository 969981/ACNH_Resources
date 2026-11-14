
void FUN_0163f444(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long *plVar4;
  void *__ptr;
  
  *param_1 = &PTR_FUN_049b8c88;
  puVar1 = PTR_DAT_04bb3380;
  param_1[100] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = puVar1 + 0x10;
  param_1[0x59] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x51] = PTR_DAT_04bb3550 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x58]);
  if (((uVar3 & 1) != 0) && (__ptr = (void *)param_1[0x58], __ptr != (void *)0x0)) {
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
  param_1[0x58] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x50] = 0;
  puVar2 = PTR_DAT_04bbd520;
  param_1[0x4a] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x43] = 0;
  param_1[0x4b] = puVar1;
  param_1[0x2b] = puVar1;
  param_1[0x36] = 0;
  param_1[0x37] = puVar1;
  param_1[0x44] = puVar2 + 0x10;
  param_1[0x3c] = 0;
  param_1[0x3d] = puVar2 + 0x10;
  param_1[0x30] = 0;
  param_1[0x31] = puVar1;
  return;
}

