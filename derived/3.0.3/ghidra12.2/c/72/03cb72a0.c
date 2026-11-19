
void FUN_03cb72a0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *__ptr;
  
  puVar2 = PTR_DAT_04bb2698;
  if (param_1 != (undefined8 *)0x0) {
    iVar1 = *(int *)(param_1 + 2);
    while (iVar1 != 0) {
      if (0 < iVar1) {
        plVar4 = (long *)*param_1;
        if (*plVar4 != 0) {
          *(long *)(*plVar4 + 8) = plVar4[1];
        }
        if ((long *)plVar4[1] != (long *)0x0) {
          *(long *)plVar4[1] = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
        if ((plVar4 != (long *)0x0) &&
           (__ptr = (void *)((long)plVar4 - (long)*(int *)((long)param_1 + 0x14)),
           __ptr != (void *)0x0)) {
          lVar3 = *(long *)puVar2;
          if (lVar3 == 0) {
            free(__ptr);
          }
          else {
            plVar4 = (long *)FUN_038cb610(lVar3,__ptr);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
            }
          }
        }
      }
      iVar1 = *(int *)(param_1 + 2);
    }
    lVar3 = *(long *)puVar2;
    if (lVar3 == 0) {
      free(param_1);
      return;
    }
    plVar4 = (long *)FUN_038cb610(lVar3,param_1);
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03cb72f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
      return;
    }
  }
  return;
}

