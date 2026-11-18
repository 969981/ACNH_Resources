
void FUN_032a0244(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 *__ptr;
  
  puVar1 = (undefined *)0x0;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar1 = PTR_LAB_04bc8ef8;
  }
  if (puVar1 != (undefined *)0x0) {
    FUN_032c6840();
    __ptr = *(undefined8 **)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x68) = 0;
    if (__ptr != (undefined8 *)0x0) {
      FUN_032c6840(__ptr);
      plVar4 = (long *)*__ptr;
      __ptr[4] = 0;
      __ptr[5] = 0;
      __ptr[3] = 0;
      if (plVar4 != (long *)0x0) {
        lVar2 = __ptr[1];
        lVar3 = __ptr[2];
        __ptr[2] = 0;
        *__ptr = 0;
        __ptr[1] = 0;
        if ((undefined8 *)*plVar4 == __ptr) {
          *plVar4 = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar2;
        }
        if (lVar2 != 0) {
          *(long *)(lVar2 + 0x10) = lVar3;
        }
      }
      __ptr[1] = 0;
      __ptr[2] = 0;
      *__ptr = 0;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
        return;
      }
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032a02f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
        return;
      }
    }
  }
  return;
}

