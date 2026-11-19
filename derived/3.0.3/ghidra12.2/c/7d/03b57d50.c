
void FUN_03b57d50(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  char *pcVar3;
  
  *param_1 = &PTR_FUN_04b76c50;
  pcVar3 = (char *)(param_1 + 1);
  if (*(char *)(param_1 + 8) == '\0') {
    if (*pcVar3 == '\0') goto LAB_03b57da8;
    pvVar2 = (void *)param_1[2];
    if (pvVar2 != (void *)0x0) {
      if (*(char *)((long)param_1 + 9) == '\0') {
        if (DAT_05ae7600 == 0) {
          free(pvVar2);
        }
        else {
          plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
          if (plVar1 != (long *)0x0) {
            (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
          }
        }
      }
      param_1[2] = 0;
    }
  }
  else {
    if (*pcVar3 != '\0') {
      pvVar2 = (void *)param_1[2];
      if (pvVar2 != (void *)0x0) {
        if (*(char *)((long)param_1 + 9) == '\0') {
          if (DAT_05ae7600 == 0) {
            free(pvVar2);
          }
          else {
            plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
            if (plVar1 != (long *)0x0) {
              (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
            }
          }
        }
        param_1[2] = 0;
      }
      *pcVar3 = '\0';
    }
    pcVar3 = (char *)(param_1 + 8);
  }
  *pcVar3 = '\0';
LAB_03b57da8:
  *(undefined4 *)(param_1 + 3) = 0;
  pvVar2 = (void *)param_1[6];
  if (pvVar2 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
      }
    }
    param_1[6] = 0;
  }
  return;
}

