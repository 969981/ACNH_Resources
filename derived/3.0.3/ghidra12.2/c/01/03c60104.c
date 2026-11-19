
void FUN_03c60104(undefined8 param_1,void *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_2 != (void *)0x0) {
    if (*(char *)((long)param_2 + 0x26) != '\0') {
      (**(code **)(*(long *)((long)param_2 + 0x10) + 0x18))((long *)((long)param_2 + 0x10));
      __ptr = *(void **)((long)param_2 + 0x18);
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
      *(undefined1 *)((long)param_2 + 0x26) = 0;
    }
    lVar2 = *(long *)puVar1;
    if (lVar2 == 0) {
      free(param_2);
      return;
    }
    plVar3 = (long *)FUN_038cb610(lVar2,param_2);
    if (plVar3 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03c601a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x38))(plVar3,param_2);
      return;
    }
  }
  return;
}

