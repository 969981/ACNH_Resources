
void FUN_0155789c(long *param_1)

{
  long *plVar1;
  long lVar2;
  void *__ptr;
  undefined8 local_88;
  undefined **local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined2 local_68;
  undefined1 local_66;
  undefined8 local_60;
  undefined8 local_58;
  long *plStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined *local_30;
  char *local_28;
  
  *param_1 = (long)&PTR_FUN_049a88c0;
  lVar2 = param_1[7];
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x20) != 0) {
      local_68 = 0;
      local_70 = PTR_DAT_04bb5070 + 0x10;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      local_60 = 0;
      local_88 = 0;
      local_66 = 1;
      plStack_50 = param_1 + 9;
      local_58 = *(undefined8 *)(lVar2 + 8);
      local_48 = 0;
      uStack_40 = 0;
      local_38 = 0;
      local_28 = "MyDesignWaitExit";
      local_80 = &local_70;
      uStack_78 = 0;
      FUN_03f45184(*(long *)(lVar2 + 0x20),&local_88);
      lVar2 = param_1[7];
    }
    FUN_03f421e0(*(undefined8 *)(lVar2 + 8));
    __ptr = (void *)param_1[7];
    if (__ptr != (void *)0x0) {
      FUN_0082c640(__ptr);
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar1 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
        }
      }
    }
    param_1[7] = 0;
  }
  *param_1 = (long)(PTR_DAT_04bbdcd0 + 0x10);
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

