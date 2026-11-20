
void FUN_03ea7860(long param_1)

{
  int iVar1;
  long *plVar2;
  void *pvVar3;
  void *__ptr;
  
  iVar1 = *(int *)(param_1 + 0x20);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = *(long **)(param_1 + 0x10);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      if ((plVar2 != (long *)0x0) &&
         (pvVar3 = (void *)((long)plVar2 - (long)*(int *)(param_1 + 0x24)), pvVar3 != (void *)0x0))
      {
        FUN_03ea6a7c(pvVar3);
        if (DAT_05ae7600 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x20);
  }
  iVar1 = *(int *)(param_1 + 0x68);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = *(long **)(param_1 + 0x58);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x68) + -1;
      *(int *)(param_1 + 0x68) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)(param_1 + 0x6c)), plVar2 != (long *)0x0))
      {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0x68);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x80);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = *(long **)(param_1 + 0x70);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x80) + -1;
      *(int *)(param_1 + 0x80) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)(param_1 + 0x84)), plVar2 != (long *)0x0))
      {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0x80);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x98);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = *(long **)(param_1 + 0x88);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      iVar1 = *(int *)(param_1 + 0x98) + -1;
      *(int *)(param_1 + 0x98) = iVar1;
      if ((plVar2 != (long *)0x0) &&
         (plVar2 = (long *)((long)plVar2 - (long)*(int *)(param_1 + 0x9c)), plVar2 != (long *)0x0))
      {
        (**(code **)(*plVar2 + 8))();
        iVar1 = *(int *)(param_1 + 0x98);
      }
    }
  }
  iVar1 = *(int *)(param_1 + 0x38);
  while (iVar1 != 0) {
    if (0 < iVar1) {
      plVar2 = *(long **)(param_1 + 0x28);
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + -1;
      if ((plVar2 != (long *)0x0) &&
         (pvVar3 = (void *)((long)plVar2 - (long)*(int *)(param_1 + 0x3c)), pvVar3 != (void *)0x0))
      {
        if (*(char *)((long)pvVar3 + 0x36) != '\0') {
          (**(code **)(*(long *)((long)pvVar3 + 0x20) + 0x18))((long *)((long)pvVar3 + 0x20));
          __ptr = *(void **)((long)pvVar3 + 0x28);
          if (__ptr != (void *)0x0) {
            if (DAT_05ae7600 == 0) {
              free(__ptr);
            }
            else {
              plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
              if (plVar2 != (long *)0x0) {
                (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
              }
            }
          }
          *(undefined1 *)((long)pvVar3 + 0x36) = 0;
        }
        if (DAT_05ae7600 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0x38);
  }
  return;
}

