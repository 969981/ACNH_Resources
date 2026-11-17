
void FUN_030e9710(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  byte *pbVar4;
  void *__ptr;
  
  pbVar4 = (byte *)param_1[0x6d];
  if (pbVar4 != (byte *)0x0) {
    *pbVar4 = *pbVar4 & 0xfd;
    FUN_03f45838(pbVar4 + 0x10);
    if (*(long *)(pbVar4 + 8) != 0) {
      *pbVar4 = *pbVar4 & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)PTR_DAT_04bcb3d8,*(undefined8 *)(pbVar4 + 8),0);
      pbVar4[8] = 0;
      pbVar4[9] = 0;
      pbVar4[10] = 0;
      pbVar4[0xb] = 0;
      pbVar4[0xc] = 0;
      pbVar4[0xd] = 0;
      pbVar4[0xe] = 0;
      pbVar4[0xf] = 0;
    }
  }
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (void *)param_1[0x43];
  if (__ptr == (void *)0x0) {
LAB_030e97a8:
    plVar2 = (long *)param_1[0x65];
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
      }
      goto LAB_030e97a8;
    }
    free(__ptr);
    plVar2 = (long *)param_1[0x65];
  }
  if (plVar2 != (long *)0x0) {
    if ((long *)*plVar2 == (long *)0x0) {
LAB_030e97d0:
      if (*(long *)puVar1 == 0) {
        free(plVar2);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
        }
      }
    }
    else {
      (**(code **)(*(long *)*plVar2 + 8))();
      *plVar2 = 0;
      plVar2 = (long *)param_1[0x65];
      if (plVar2 != (long *)0x0) goto LAB_030e97d0;
    }
    param_1[0x65] = 0;
  }
  plVar2 = (long *)param_1[0x5f];
  if (plVar2 != (long *)0x0) {
    if ((long *)*plVar2 == (long *)0x0) {
LAB_030e9840:
      if (*(long *)puVar1 == 0) {
        free(plVar2);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
        }
      }
    }
    else {
      (**(code **)(*(long *)*plVar2 + 8))();
      *plVar2 = 0;
      plVar2 = (long *)param_1[0x5f];
      if (plVar2 != (long *)0x0) goto LAB_030e9840;
    }
    param_1[0x5f] = 0;
  }
  plVar2 = (long *)param_1[0x59];
  if (plVar2 != (long *)0x0) {
    if ((long *)*plVar2 == (long *)0x0) {
LAB_030e989c:
      if (*(long *)puVar1 == 0) {
        free(plVar2);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
        }
      }
    }
    else {
      (**(code **)(*(long *)*plVar2 + 8))();
      *plVar2 = 0;
      plVar2 = (long *)param_1[0x59];
      if (plVar2 != (long *)0x0) goto LAB_030e989c;
    }
    param_1[0x59] = 0;
  }
  plVar2 = (long *)param_1[0x53];
  if (plVar2 != (long *)0x0) {
    if ((long *)*plVar2 == (long *)0x0) {
LAB_030e98f8:
      if (*(long *)puVar1 == 0) {
        free(plVar2);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
        }
      }
    }
    else {
      (**(code **)(*(long *)*plVar2 + 8))();
      *plVar2 = 0;
      plVar2 = (long *)param_1[0x53];
      if (plVar2 != (long *)0x0) goto LAB_030e98f8;
    }
    param_1[0x53] = 0;
  }
  plVar2 = (long *)param_1[0x4d];
  if (plVar2 != (long *)0x0) {
    if ((long *)*plVar2 == (long *)0x0) {
LAB_030e9954:
      if (*(long *)puVar1 == 0) {
        free(plVar2);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
        }
      }
    }
    else {
      (**(code **)(*(long *)*plVar2 + 8))();
      *plVar2 = 0;
      plVar2 = (long *)param_1[0x4d];
      if (plVar2 != (long *)0x0) goto LAB_030e9954;
    }
    param_1[0x4d] = 0;
  }
  plVar2 = (long *)param_1[0x47];
  if (plVar2 == (long *)0x0) goto LAB_030e99e4;
  if ((long *)*plVar2 == (long *)0x0) {
LAB_030e99b0:
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
  }
  else {
    (**(code **)(*(long *)*plVar2 + 8))();
    *plVar2 = 0;
    plVar2 = (long *)param_1[0x47];
    if (plVar2 != (long *)0x0) goto LAB_030e99b0;
  }
  param_1[0x47] = 0;
LAB_030e99e4:
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

