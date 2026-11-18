
void FUN_032bf210(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  undefined8 *__ptr_00;
  
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = PTR_DAT_04bb2698;
  __ptr_00 = (undefined8 *)param_1[1];
  param_1[2] = 0;
  param_1[3] = 0;
  if (__ptr_00 != (undefined8 *)0x0) {
    FUN_032c6840(__ptr_00);
    plVar4 = (long *)*__ptr_00;
    __ptr_00[4] = 0;
    __ptr_00[5] = 0;
    __ptr_00[3] = 0;
    if (plVar4 != (long *)0x0) {
      lVar3 = __ptr_00[1];
      lVar1 = __ptr_00[2];
      __ptr_00[2] = 0;
      *__ptr_00 = 0;
      __ptr_00[1] = 0;
      if ((undefined8 *)*plVar4 == __ptr_00) {
        *plVar4 = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar1;
      }
    }
    __ptr_00[1] = 0;
    __ptr_00[2] = 0;
    *__ptr_00 = 0;
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(__ptr_00);
      __ptr = (void *)*param_1;
      goto joined_r0x032bf30c;
    }
    plVar4 = (long *)FUN_038cb610(lVar3,__ptr_00);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,__ptr_00);
    }
  }
  __ptr = (void *)*param_1;
joined_r0x032bf30c:
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(__ptr);
      return;
    }
    plVar4 = (long *)FUN_038cb610(lVar3,__ptr);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032bf2fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      return;
    }
  }
  return;
}

