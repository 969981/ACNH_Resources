
void FUN_03911df8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b65f78;
  puVar1 = PTR_DAT_04bb2698;
  if ((*(char *)(param_1 + 0x17) != '\0') && (__ptr = (void *)param_1[2], __ptr != (void *)0x0)) {
    FUN_0391bcc8(__ptr);
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
    param_1[2] = 0;
  }
  FUN_038fd0e0(param_1 + 0xd);
  lVar2 = *(long *)puVar1;
  if (lVar2 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar2,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03911ea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

