
void FUN_039051d8(undefined8 *param_1)

{
  long *plVar1;
  byte bVar2;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b65e20;
  FUN_03905290();
  if (*(short *)((long)param_1 + 0x1e) == 0) {
    __ptr = (void *)param_1[1];
    if (__ptr != (void *)0x0) {
      FUN_03907d20((long)__ptr + 0x10);
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
    param_1[1] = 0;
    bVar2 = *(byte *)((long)param_1 + 0x1c);
  }
  else {
    bVar2 = *(byte *)((long)param_1 + 0x1c);
  }
  if ((bVar2 & 1) != 0) {
    (**(code **)PTR_DAT_04bcf5e0)(param_1 + 0x18);
    bVar2 = *(byte *)((long)param_1 + 0x1c);
  }
  *(byte *)((long)param_1 + 0x1c) = bVar2 & 0xfe;
  return;
}

