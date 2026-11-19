
void FUN_03b6b8b0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  char *pcVar4;
  
  *param_1 = &PTR_FUN_04b77c28;
  pcVar4 = (char *)(param_1 + 2);
  if (*(char *)(param_1 + 1) == '\0') {
    if (*pcVar4 == '\0') {
      return;
    }
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    pvVar3 = (void *)param_1[7];
    if (pvVar3 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
      param_1[7] = 0;
    }
    pvVar3 = (void *)param_1[4];
    if (pvVar3 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
      param_1[4] = 0;
    }
  }
  else {
    if (*pcVar4 != '\0') {
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 3) = 0;
      puVar1 = PTR_DAT_04bb2698;
      pvVar3 = (void *)param_1[7];
      if (pvVar3 != (void *)0x0) {
        if (*(long *)PTR_DAT_04bb2698 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
        param_1[7] = 0;
      }
      pvVar3 = (void *)param_1[4];
      if (pvVar3 != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
        param_1[4] = 0;
      }
      *pcVar4 = '\0';
    }
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    pcVar4 = (char *)(param_1 + 1);
  }
  *pcVar4 = '\0';
  return;
}

