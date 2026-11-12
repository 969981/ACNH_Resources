
void FUN_006f5f8c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_FUN_048fc868;
  puVar1 = PTR_DAT_04bb2698;
  if (param_1[0x1c] != 0) {
    param_1[1] = 0;
    param_1[3] = 0xffffffff;
    param_1[4] = 0xffffffff00000000;
    *(undefined4 *)(param_1 + 5) = 0xffffffff;
    *(undefined4 *)(param_1 + 2) = 0;
    *(undefined1 *)((long)param_1 + 0x14) = 0;
    *(undefined1 *)param_1[7] = 0;
    *(undefined1 *)param_1[0x12] = 0;
    __ptr = (void *)param_1[0x1c];
    if (__ptr != (void *)0x0) {
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
    param_1[0x1c] = 0;
  }
  *param_1 = &PTR_LAB_048fc7e8;
  lVar2 = *(long *)puVar1;
  if (lVar2 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar2,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x006f605c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

