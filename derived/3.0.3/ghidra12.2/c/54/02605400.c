
void FUN_02605400(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04a86d20;
  puVar1 = PTR_DAT_04bb2698;
  if ((*(char *)(param_1 + 9) == '\0') && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    FUN_03f29b30(__ptr);
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
  if (lVar2 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar2,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0260545c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

