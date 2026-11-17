
void FUN_02c1934c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  byte *pbVar6;
  void *__ptr;
  
  if ((long *)param_1[0x1de] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1de] + 8))();
  }
  param_1[0x1de] = 0;
  puVar1 = PTR_DAT_04bb2698;
  pvVar5 = (void *)param_1[0x1e3];
  if (pvVar5 == (void *)0x0) goto LAB_02c19400;
  __ptr = *(void **)((long)pvVar5 + 0xafc98);
  if (__ptr == (void *)0x0) {
LAB_02c193c0:
    lVar4 = *(long *)puVar1;
  }
  else {
    if (*(long *)PTR_DAT_04bb2698 != 0) {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
      goto LAB_02c193c0;
    }
    free(__ptr);
    lVar4 = *(long *)puVar1;
  }
  if (lVar4 == 0) {
    free(pvVar5);
  }
  else {
    plVar3 = (long *)FUN_038cb610(lVar4,pvVar5);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
    }
  }
LAB_02c19400:
  pvVar5 = (void *)param_1[0x1eb];
  param_1[0x1e3] = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[0x1ec];
  param_1[0x1eb] = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  pbVar6 = (byte *)param_1[0x1ed];
  param_1[0x1ec] = 0;
  if (pbVar6 != (byte *)0x0) {
    *pbVar6 = *pbVar6 & 0xfd;
    FUN_03f45838(pbVar6 + 0x10);
    puVar2 = PTR_DAT_04bcb3d8;
    if (*(long *)(pbVar6 + 8) != 0) {
      *pbVar6 = *pbVar6 & 0xfe;
      FUN_0383b748();
      FUN_03839fd0(*(undefined8 *)puVar2,*(undefined8 *)(pbVar6 + 8),0);
      pbVar6[8] = 0;
      pbVar6[9] = 0;
      pbVar6[10] = 0;
      pbVar6[0xb] = 0;
      pbVar6[0xc] = 0;
      pbVar6[0xd] = 0;
      pbVar6[0xe] = 0;
      pbVar6[0xf] = 0;
    }
    pbVar6 = (byte *)param_1[0x1ed];
    if (pbVar6 != (byte *)0x0) {
      *pbVar6 = *pbVar6 & 0xfd;
      FUN_03f45838(pbVar6 + 0x10);
      if (*(long *)(pbVar6 + 8) != 0) {
        *pbVar6 = *pbVar6 & 0xfe;
        FUN_0383b748();
        FUN_03839fd0(*(undefined8 *)puVar2,*(undefined8 *)(pbVar6 + 8),0);
        pbVar6[8] = 0;
        pbVar6[9] = 0;
        pbVar6[10] = 0;
        pbVar6[0xb] = 0;
        pbVar6[0xc] = 0;
        pbVar6[0xd] = 0;
        pbVar6[0xe] = 0;
        pbVar6[0xf] = 0;
      }
      FUN_03f457c4(pbVar6 + 0x10);
      if (*(long *)puVar1 == 0) {
        free(pbVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pbVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pbVar6);
        }
      }
    }
    param_1[0x1ed] = 0;
  }
  pvVar5 = (void *)param_1[0x1ee];
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  pvVar5 = (void *)param_1[499];
  param_1[0x1ee] = 0;
  if (pvVar5 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  param_1[499] = 0;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

