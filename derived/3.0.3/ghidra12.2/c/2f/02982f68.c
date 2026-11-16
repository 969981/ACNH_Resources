
void FUN_02982f68(long *param_1)

{
  long *plVar1;
  void *__ptr;
  undefined **local_50;
  long *plStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfd;
  FUN_03f45838(param_1 + 10);
  if (param_1[9] != 0) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,param_1[9],0);
    param_1[9] = 0;
  }
  __ptr = (void *)param_1[6];
  if (__ptr == (void *)0x0) goto LAB_02983060;
  plStack_48 = param_1 + 4;
  local_40 = &LAB_02985a1c;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04a97438;
  if (*plStack_48 == 0) {
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[4] = 0;
LAB_02983020:
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
  else {
    FUN_02985a30(*plStack_48,&local_50);
    __ptr = (void *)param_1[6];
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[4] = 0;
    if (__ptr != (void *)0x0) goto LAB_02983020;
  }
  *(undefined4 *)((long)param_1 + 0x3c) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
LAB_02983060:
  if ((long *)*param_1 != (long *)0x0) {
    (**(code **)(*(long *)*param_1 + 0x18))();
  }
  *param_1 = 0;
  *(undefined1 *)((long)param_1 + 0x94) = 0;
  return;
}

