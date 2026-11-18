
void FUN_032c4f54(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  
  __ptr = (void *)param_1[1];
  *param_1 = &PTR_FUN_04b1af70;
  puVar1 = PTR_DAT_04bb2698;
  if (__ptr != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
      lVar3 = *(long *)puVar1;
      goto joined_r0x032c4fe4;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
    }
  }
  lVar3 = *(long *)puVar1;
joined_r0x032c4fe4:
  if (lVar3 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(lVar3,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032c4fd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

