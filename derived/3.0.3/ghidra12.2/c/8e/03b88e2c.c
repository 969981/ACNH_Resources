
void FUN_03b88e2c(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_04b787b8;
  param_1[0x36] = &PTR_LAB_04b788d8;
  param_1[0x13] = &PTR_LAB_04b78888;
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)(param_1 + 0x43) == '\0') goto LAB_03b89350;
  pvVar3 = (void *)param_1[0x49];
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
    param_1[0x49] = 0;
  }
  pvVar3 = (void *)param_1[0x4a];
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
    param_1[0x4a] = 0;
  }
  pvVar3 = (void *)param_1[0x4b];
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
    param_1[0x4b] = 0;
  }
  pvVar3 = (void *)param_1[0x4c];
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
    param_1[0x4c] = 0;
  }
  pvVar3 = (void *)param_1[0x50];
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
    param_1[0x50] = 0;
  }
  pvVar3 = (void *)param_1[0x51];
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
    param_1[0x51] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x52];
  if (puVar4 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar4;
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
      puVar4 = (undefined8 *)param_1[0x52];
    }
    pvVar3 = (void *)puVar4[1];
    if (pvVar3 == (void *)0x0) {
LAB_03b89060:
      if (*(long *)puVar1 == 0) {
        free(puVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
        }
      }
    }
    else {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
        puVar4 = (undefined8 *)param_1[0x52];
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
        puVar4 = (undefined8 *)param_1[0x52];
      }
      if (puVar4 != (undefined8 *)0x0) goto LAB_03b89060;
    }
    param_1[0x52] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x53];
  if (puVar4 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar4;
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
      puVar4 = (undefined8 *)param_1[0x53];
    }
    pvVar3 = (void *)puVar4[1];
    if (pvVar3 == (void *)0x0) {
LAB_03b89120:
      if (*(long *)puVar1 == 0) {
        free(puVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
        }
      }
    }
    else {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
        puVar4 = (undefined8 *)param_1[0x53];
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
        puVar4 = (undefined8 *)param_1[0x53];
      }
      if (puVar4 != (undefined8 *)0x0) goto LAB_03b89120;
    }
    param_1[0x53] = 0;
  }
  pvVar3 = (void *)param_1[0x5a];
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
    param_1[0x5a] = 0;
  }
  pvVar3 = (void *)param_1[0x5b];
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
    param_1[0x5b] = 0;
  }
  puVar4 = (undefined8 *)param_1[100];
  if (puVar4 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar4;
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
      puVar4 = (undefined8 *)param_1[100];
    }
    pvVar3 = (void *)puVar4[1];
    if (pvVar3 == (void *)0x0) {
LAB_03b89258:
      if (*(long *)puVar1 == 0) {
        free(puVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
        }
      }
    }
    else {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
        puVar4 = (undefined8 *)param_1[100];
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
        puVar4 = (undefined8 *)param_1[100];
      }
      if (puVar4 != (undefined8 *)0x0) goto LAB_03b89258;
    }
    param_1[100] = 0;
  }
  puVar4 = (undefined8 *)param_1[0x65];
  if (puVar4 != (undefined8 *)0x0) {
    pvVar3 = (void *)*puVar4;
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
      puVar4 = (undefined8 *)param_1[0x65];
    }
    pvVar3 = (void *)puVar4[1];
    if (pvVar3 == (void *)0x0) {
LAB_03b89318:
      if (*(long *)puVar1 == 0) {
        free(puVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
        }
      }
    }
    else {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
        puVar4 = (undefined8 *)param_1[0x65];
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
        puVar4 = (undefined8 *)param_1[0x65];
      }
      if (puVar4 != (undefined8 *)0x0) goto LAB_03b89318;
    }
    param_1[0x65] = 0;
  }
  *(undefined1 *)(param_1 + 0x43) = 0;
LAB_03b89350:
  FUN_03ba0d98(param_1);
  return;
}

