
void FUN_036803b0(long param_1)

{
  long *plVar1;
  undefined8 *__ptr;
  
  __ptr = *(undefined8 **)(param_1 + 0x1f8);
  *(undefined8 *)(param_1 + 0x1f8) = 0;
  if (__ptr != (undefined8 *)0x0) {
    (**(code **)(*(long *)__ptr[2] + 0x38))((long *)__ptr[2],*__ptr);
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
  FUN_03f2d448(param_1 + 0x1b0);
  if (*(char *)(param_1 + 0x1a8) != '\0') {
    FUN_03f2a9b0(param_1 + 0x98);
    FUN_038e1a84(param_1 + 0x108);
    *(undefined1 *)(param_1 + 0x1a8) = 0;
  }
  return;
}

