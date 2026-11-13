
void FUN_00e3cbc0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)param_1[0x17];
  *param_1 = &PTR_LAB_049606b8;
  puVar1 = PTR_DAT_04bb2698;
  if (__ptr != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)*__ptr;
    if ((puVar4 != (undefined8 *)0x0) &&
       ((undefined8 *)*puVar4 != (undefined8 *)0x0 && (undefined8 *)*puVar4 == __ptr)) {
      *__ptr = 0;
      *puVar4 = 0;
    }
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(lVar2,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  lVar2 = *(long *)puVar1;
  param_1[0x17] = 0;
  if (lVar2 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar2,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00e3cc70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

