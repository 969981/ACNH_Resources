
void FUN_032a0ebc(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *__ptr;
  
  FUN_032c6840(*(undefined8 *)(param_1 + 0x68));
  __ptr = *(undefined8 **)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if (__ptr != (undefined8 *)0x0) {
    FUN_032c6840(__ptr);
    plVar3 = (long *)*__ptr;
    __ptr[4] = 0;
    __ptr[5] = 0;
    __ptr[3] = 0;
    if (plVar3 != (long *)0x0) {
      lVar1 = __ptr[1];
      lVar2 = __ptr[2];
      __ptr[2] = 0;
      *__ptr = 0;
      __ptr[1] = 0;
      if ((undefined8 *)*plVar3 == __ptr) {
        *plVar3 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x10) = lVar2;
      }
    }
    __ptr[1] = 0;
    __ptr[2] = 0;
    *__ptr = 0;
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      return;
    }
    plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032a0f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      return;
    }
  }
  return;
}

