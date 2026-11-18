
void FUN_032b7400(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  param_1[0xcb] = 0;
  *param_1 = &PTR_FUN_04b1a4d8;
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (void *)param_1[0xca];
  if (__ptr != (void *)0x0) {
    FUN_032d0688(__ptr);
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(__ptr);
      plVar3 = (long *)param_1[0xc5];
      goto joined_r0x032b7464;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,__ptr);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
    }
  }
  plVar3 = (long *)param_1[0xc5];
joined_r0x032b7464:
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  FUN_032b7370(param_1 + 1);
  lVar2 = *(long *)puVar1;
  if (lVar2 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar2,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032b74a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

