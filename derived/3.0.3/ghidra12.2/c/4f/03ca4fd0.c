
void FUN_03ca4fd0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b89618;
  if (*(char *)(param_1 + 2) != '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    while (iVar1 != 0) {
      if (0 < iVar1) {
        plVar2 = (long *)param_1[10];
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        iVar1 = *(int *)(param_1 + 0xc) + -1;
        *(int *)(param_1 + 0xc) = iVar1;
        if ((plVar2 != (long *)0x0) &&
           (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 100)),
           plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 8))();
          iVar1 = *(int *)(param_1 + 0xc);
        }
      }
    }
    iVar1 = *(int *)(param_1 + 0xf);
    while (iVar1 != 0) {
      if (0 < iVar1) {
        plVar2 = (long *)param_1[0xd];
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        iVar1 = *(int *)(param_1 + 0xf) + -1;
        *(int *)(param_1 + 0xf) = iVar1;
        if ((plVar2 != (long *)0x0) &&
           (plVar2 = (long *)((long)plVar2 - (long)*(int *)((long)param_1 + 0x7c)),
           plVar2 != (long *)0x0)) {
          (**(code **)(*plVar2 + 8))();
          iVar1 = *(int *)(param_1 + 0xf);
        }
      }
    }
    lVar3 = param_1[1];
    param_1[9] = 0;
    if (*(long *)(lVar3 + 0x58) != 0) {
      *(undefined8 *)(lVar3 + 0x168) = 0;
      *(undefined8 *)(lVar3 + 0x170) = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (*(char *)((long)param_1 + 0x46) != '\0') {
    (**(code **)(param_1[6] + 0x18))(param_1 + 6);
    __ptr = (void *)param_1[7];
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
    *(undefined1 *)((long)param_1 + 0x46) = 0;
  }
  return;
}

