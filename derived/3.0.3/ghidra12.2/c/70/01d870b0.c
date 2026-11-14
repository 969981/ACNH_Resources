
void FUN_01d870b0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
    lVar4 = (long)*(int *)(param_1 + 0x24);
    __ptr = (void *)(*(long *)(param_1 + 0x18) - lVar4);
    do {
      lVar5 = *(long *)((long)__ptr + lVar4 + 8);
      if ((*(byte *)((long)__ptr + 0x98) >> 2 & 1) == 0) {
        plVar3 = (long *)((long)__ptr + (long)*(int *)(param_1 + 0x24));
        if (*plVar3 != 0) {
          *(long *)(*plVar3 + 8) = plVar3[1];
        }
        if ((long *)plVar3[1] != (long *)0x0) {
          *(long *)plVar3[1] = *plVar3;
        }
        *plVar3 = 0;
        plVar3[1] = 0;
        lVar2 = *(long *)puVar1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
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
      __ptr = (void *)(lVar5 - lVar4);
    } while (__ptr != (void *)((param_1 + 0x10) - lVar4));
  }
  FUN_01d871b0(param_1);
  FUN_01d87ff0(param_1);
  FUN_01d88510(param_1);
  return;
}

