
void FUN_03c5e480(undefined8 *param_1)

{
  undefined8 *__ptr;
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  iVar2 = *(int *)(param_1 + 2);
  if (iVar2 != 0) {
    do {
      if (iVar2 < 1) {
        plVar3 = (long *)0x0;
      }
      else {
        plVar3 = (long *)*param_1;
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        *(int *)(param_1 + 2) = *(int *)(param_1 + 2) + -1;
      }
      __ptr = (undefined8 *)0x0;
      if (plVar3 != (long *)0x0) {
        __ptr = (undefined8 *)((long)plVar3 - (long)*(int *)((long)param_1 + 0x14));
      }
      if (__ptr != param_1 + 3 && __ptr != (undefined8 *)0x0) {
        FUN_03c5eee0(__ptr);
        if (*(long *)puVar1 == 0) {
          free(__ptr);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar1,__ptr);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
          }
        }
      }
      iVar2 = *(int *)(param_1 + 2);
    } while (iVar2 != 0);
  }
  FUN_03c5eee0(param_1 + 3);
  return;
}

