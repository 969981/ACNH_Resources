
void FUN_03ea8fcc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04ba4350;
  (*(code *)**(undefined8 **)param_1[9])();
  *param_1 = &PTR_FUN_04ba4318;
  if ((long *)param_1[7] != (long *)0x0) {
    (**(code **)(*(long *)param_1[7] + 8))();
  }
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)((long)param_1 + 0x36) != '\0') {
    (**(code **)(param_1[4] + 0x18))(param_1 + 4);
    __ptr = (void *)param_1[5];
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
    *(undefined1 *)((long)param_1 + 0x36) = 0;
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
                    /* WARNING: Could not recover jumptable at 0x03ea90a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

