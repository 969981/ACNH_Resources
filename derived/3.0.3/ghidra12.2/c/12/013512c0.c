
void FUN_013512c0(undefined8 *param_1)

{
  ulong uVar1;
  long *plVar2;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04992cf0;
  param_1[0xd7] = &PTR_FUN_04992f90;
  uVar1 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                    (*(long **)(DAT_05aed538 + 0x330),param_1[0x109d]);
  if (((uVar1 & 1) != 0) && (__ptr = (void *)param_1[0x109d], __ptr != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
    }
  }
  param_1[0x109d] = 0;
  FUN_01341630(param_1);
  return;
}

