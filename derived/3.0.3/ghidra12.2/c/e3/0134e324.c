
void FUN_0134e324(undefined8 *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_FUN_049928b8;
  param_1[0xd7] = &PTR_FUN_04992b58;
  puVar1 = param_1 + 0x355d;
  uVar2 = (**(code **)(**(long **)(*(long *)PTR_DAT_04bb3058 + 0x330) + 0x88))
                    (*(long **)(*(long *)PTR_DAT_04bb3058 + 0x330),*puVar1);
  if (((uVar2 & 1) != 0) && (__ptr = (void *)*puVar1, __ptr != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  *puVar1 = 0;
  FUN_01341630(param_1);
  return;
}

