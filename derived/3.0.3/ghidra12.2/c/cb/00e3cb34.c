
void FUN_00e3cb34(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)param_1[0x17];
  *param_1 = &PTR_LAB_049606b8;
  if (__ptr != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*__ptr;
    if ((puVar2 != (undefined8 *)0x0) &&
       ((undefined8 *)*puVar2 != (undefined8 *)0x0 && (undefined8 *)*puVar2 == __ptr)) {
      *__ptr = 0;
      *puVar2 = 0;
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
  }
  param_1[0x17] = 0;
  return;
}

