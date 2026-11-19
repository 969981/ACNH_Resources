
void FUN_03bca624(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b7ad40;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    FUN_03bcae60(*(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x78),param_1 + 6);
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 0x18))();
    param_1[0x14] = 0;
  }
  if ((*(char *)((long)param_1 + 0x21) != '\0') && ((long *)param_1[3] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[3] + 8))();
    param_1[3] = 0;
  }
  __ptr = (void *)param_1[5];
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[5] = 0;
  }
  return;
}

