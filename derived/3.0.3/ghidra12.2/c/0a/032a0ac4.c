
void FUN_032a0ac4(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 *__ptr;
  void *__ptr_00;
  
  puVar2 = PTR_DAT_04bb2698;
  __ptr = (undefined8 *)param_1[0xd];
  if (__ptr != (undefined8 *)0x0) {
    FUN_032c6840(__ptr);
    plVar4 = (long *)*__ptr;
    __ptr[4] = 0;
    __ptr[5] = 0;
    __ptr[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar3 = __ptr[1];
      lVar1 = __ptr[2];
      __ptr[2] = 0;
      *__ptr = 0;
      __ptr[1] = 0;
      if ((undefined8 *)*plVar4 == __ptr) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar1;
      }
    }
    __ptr[1] = 0;
    __ptr[2] = 0;
    *__ptr = 0;
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar3,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  *param_1 = &PTR_LAB_04b18c60;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  __ptr_00 = (void *)param_1[3];
  param_1[4] = 0;
  param_1[5] = 0;
  if (__ptr_00 != (void *)0x0) {
    FUN_032d0688(__ptr_00);
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(__ptr_00);
      return;
    }
    plVar4 = (long *)FUN_038cb610(lVar3,__ptr_00);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032a0bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,__ptr_00);
      return;
    }
  }
  return;
}

