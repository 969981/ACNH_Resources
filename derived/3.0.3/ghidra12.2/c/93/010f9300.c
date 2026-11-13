
void FUN_010f9300(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0x21];
  *param_1 = &PTR_FUN_0497aa40;
  if (pvVar4 != (void *)0x0) {
    plVar2 = (long *)param_1[0x1e];
    if ((long *)param_1[0x1e] == param_1 + 0x1d) {
LAB_010f93a8:
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    else {
      do {
        plVar1 = (long *)plVar2[1];
        plVar3 = plVar1;
        if (*plVar2 != 0) {
          *(long **)(*plVar2 + 8) = plVar1;
          plVar3 = (long *)plVar2[1];
        }
        if (plVar3 != (long *)0x0) {
          *plVar3 = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(param_1 + 0x1f) = *(int *)(param_1 + 0x1f) + -1;
        plVar2 = plVar2 + -0xb;
        (**(code **)*plVar2)(plVar2);
        *plVar2 = param_1[0x20];
        param_1[0x20] = plVar2;
        plVar2 = plVar1;
      } while (plVar1 != param_1 + 0x1d);
      pvVar4 = (void *)param_1[0x21];
      if (pvVar4 != (void *)0x0) goto LAB_010f93a8;
    }
    *(undefined4 *)(param_1 + 0x22) = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
  }
  pvVar4 = (void *)param_1[0x27];
  if (pvVar4 == (void *)0x0) {
    return;
  }
  plVar2 = (long *)param_1[0x24];
  if ((long *)param_1[0x24] != param_1 + 0x23) {
    do {
      plVar1 = (long *)plVar2[1];
      plVar3 = plVar1;
      if (*plVar2 != 0) {
        *(long **)(*plVar2 + 8) = plVar1;
        plVar3 = (long *)plVar2[1];
      }
      if (plVar3 != (long *)0x0) {
        *plVar3 = *plVar2;
      }
      *plVar2 = 0;
      plVar2[1] = 0;
      *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + -1;
      plVar2 = plVar2 + -4;
      (**(code **)*plVar2)(plVar2);
      *plVar2 = param_1[0x26];
      param_1[0x26] = plVar2;
      plVar2 = plVar1;
    } while (plVar1 != param_1 + 0x23);
    pvVar4 = (void *)param_1[0x27];
    if (pvVar4 == (void *)0x0) goto LAB_010f94ac;
  }
  if (DAT_05ae7600 == 0) {
    free(pvVar4);
  }
  else {
    plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
    }
  }
LAB_010f94ac:
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return;
}

