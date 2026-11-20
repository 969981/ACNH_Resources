
void FUN_03eaaec0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  void *__ptr;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_04ba43b0;
  if (*(char *)(param_1 + 10) != '\0') {
    if ((long *)param_1[2] != (long *)0x0) {
      (**(code **)(*(long *)param_1[2] + 8))();
    }
    if ((long *)param_1[3] != (long *)0x0) {
      (**(code **)(*(long *)param_1[3] + 8))();
    }
    if ((long *)param_1[7] != (long *)0x0) {
      (**(code **)(*(long *)param_1[7] + 8))();
    }
    __ptr = (void *)param_1[8];
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
    for (puVar4 = (undefined8 *)param_1[5]; puVar4 != param_1 + 4; puVar4 = (undefined8 *)puVar4[1])
    {
      (**(code **)(*(long *)puVar4[2] + 0x118))();
    }
    iVar1 = *(int *)(param_1 + 6);
    while (0 < iVar1) {
      plVar2 = (long *)param_1[4];
      if (*plVar2 != 0) {
        *(long *)(*plVar2 + 8) = plVar2[1];
      }
      if ((long *)plVar2[1] != (long *)0x0) {
        *(long *)plVar2[1] = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + -1;
      plVar2[3] = 0;
      if ((long *)plVar2[2] != (long *)0x0) {
        (**(code **)(*(long *)plVar2[2] + 8))();
      }
      if (DAT_05ae7600 == 0) {
        free(plVar2);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,plVar2);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
        }
      }
      iVar1 = *(int *)(param_1 + 6);
    }
  }
  return;
}

