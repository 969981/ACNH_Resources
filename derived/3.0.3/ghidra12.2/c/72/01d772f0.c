
void FUN_01d772f0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  
  puVar2 = PTR_DAT_04bb2698;
  iVar1 = *(int *)(param_1 + 0x10);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar3 = *(long **)(param_1 + 8);
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      if ((plVar3 != (long *)0x0) &&
         (__ptr = (void *)((long)plVar3 - (long)*(int *)(param_1 + 0x14)), __ptr != (void *)0x0)) {
        if (*(long *)puVar2 == 0) {
          free(__ptr);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,__ptr);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x10);
  }
  return;
}

