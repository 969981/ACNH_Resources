
void FUN_03299770(long *param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *__ptr;
  void *__ptr_00;
  
  (**(code **)(*param_1 + 0x20))();
  puVar1 = (undefined1 *)0x0;
  if (param_1[3] != 0) {
    puVar1 = &LAB_0328ba70;
  }
  if (puVar1 != (undefined1 *)0x0) {
    FUN_032c6840();
    __ptr = (undefined8 *)param_1[3];
    param_1[3] = 0;
    if (__ptr != (undefined8 *)0x0) {
      FUN_032c6840(__ptr);
      plVar4 = (long *)*__ptr;
      __ptr[4] = 0;
      __ptr[5] = 0;
      __ptr[3] = 0;
      if (plVar4 != (long *)0x0) {
        lVar3 = __ptr[1];
        lVar2 = __ptr[2];
        __ptr[2] = 0;
        *__ptr = 0;
        __ptr[1] = 0;
        if ((undefined8 *)*plVar4 == __ptr) {
          *plVar4 = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 8) = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar2;
        }
      }
      __ptr[1] = 0;
      __ptr[2] = 0;
      *__ptr = 0;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
        lVar3 = param_1[1];
        goto joined_r0x03299830;
      }
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  lVar3 = param_1[1];
joined_r0x03299830:
  if (lVar3 != 0) {
    FUN_032d1384();
    __ptr_00 = (void *)param_1[1];
    param_1[1] = 0;
    if (__ptr_00 != (void *)0x0) {
      FUN_032d0688(__ptr_00);
      if (DAT_05ae7600 == 0) {
        free(__ptr_00);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr_00);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,__ptr_00);
        }
      }
    }
  }
  param_1[2] = 0;
  return;
}

