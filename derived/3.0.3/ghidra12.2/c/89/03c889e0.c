
void FUN_03c889e0(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  void *__ptr;
  
  puVar2 = PTR_DAT_04bb2698;
  iVar1 = *(int *)(param_1 + 0x60);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar3 = *(long **)(param_1 + 0x50);
      if (*plVar3 != 0) {
        *(long *)(*plVar3 + 8) = plVar3[1];
      }
      if ((long *)plVar3[1] != (long *)0x0) {
        *(long *)plVar3[1] = *plVar3;
      }
      *plVar3 = 0;
      plVar3[1] = 0;
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + -1;
      if ((plVar3 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar3 - (long)*(int *)(param_1 + 100)), pvVar4 != (void *)0x0)) {
        if (*(char *)((long)pvVar4 + 0x26) != '\0') {
          (**(code **)(*(long *)((long)pvVar4 + 0x10) + 0x18))((long *)((long)pvVar4 + 0x10));
          __ptr = *(void **)((long)pvVar4 + 0x18);
          if (__ptr != (void *)0x0) {
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
          *(undefined1 *)((long)pvVar4 + 0x26) = 0;
        }
        if (*(long *)puVar2 == 0) {
          free(pvVar4);
        }
        else {
          plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x60);
  }
  if (*(char *)(param_1 + 0x3e) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))((long *)(param_1 + 0x28));
    pvVar4 = *(void **)(param_1 + 0x30);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  if (*(char *)(param_1 + 0x26) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))((long *)(param_1 + 0x10));
    pvVar4 = *(void **)(param_1 + 0x18);
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x26) = 0;
  }
  return;
}

