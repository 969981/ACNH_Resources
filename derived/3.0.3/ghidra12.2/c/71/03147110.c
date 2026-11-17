
void FUN_03147110(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  pvVar7 = (void *)param_1[0xbd];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
      pvVar7 = (void *)param_1[0xbc];
      goto joined_r0x0314715c;
    }
    plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
    if (plVar4 != (long *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
    }
  }
  pvVar7 = (void *)param_1[0xbc];
joined_r0x0314715c:
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
  }
  *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xfd;
  FUN_03f45838(param_1 + 0x54);
  puVar3 = PTR_DAT_04bcb3d8;
  if (param_1[0x53] != 0) {
    *(byte *)(param_1 + 0x52) = *(byte *)(param_1 + 0x52) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar3,param_1[0x53],0);
    param_1[0x53] = 0;
  }
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfd;
  FUN_03f45838(param_1 + 0xb8);
  if (param_1[0xb7] != 0) {
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xfe;
    FUN_0383b748();
    FUN_03839fd0(*(undefined8 *)puVar3,param_1[0xb7],0);
    param_1[0xb7] = 0;
  }
  pvVar7 = (void *)param_1[0x61];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
    param_1[0x61] = 0;
  }
  if ((long *)param_1[0x62] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x62] + 0x20))();
  }
  pvVar7 = (void *)param_1[0x6a];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
    param_1[0x6a] = 0;
  }
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x118) != 0) {
    *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x118) + 0xdc) = 0;
  }
  FUN_033ba5e4(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),0x14);
  pvVar7 = (void *)param_1[0x76];
  if (pvVar7 != (void *)0x0) {
    FUN_0340cc60(pvVar7);
    FUN_03ebae78((long)pvVar7 + 0x1a8);
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
  }
  FUN_03838610(param_1 + 0xb6);
  param_1[0x78] = (long)&PTR_LAB_04b5eb40;
  if (param_1[0x7a] != 0) {
    if (0 < (int)param_1[0x79]) {
      lVar5 = 0;
      plVar4 = (long *)param_1[0x7b];
      do {
        plVar6 = *(long **)(param_1[0x7a] + lVar5 * 8);
        lVar5 = lVar5 + 1;
        *plVar6 = (long)plVar4;
        param_1[0x7b] = (long)plVar6;
        plVar4 = plVar6;
      } while (lVar5 < (int)param_1[0x79]);
    }
    pvVar7 = (void *)param_1[0x7c];
    *(undefined4 *)(param_1 + 0x79) = 0;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar7);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x3e4) = 0;
    *(undefined8 *)((long)param_1 + 0x3dc) = 0;
    *(undefined8 *)((long)param_1 + 0x3d4) = 0;
    *(undefined8 *)((long)param_1 + 0x3cc) = 0;
  }
  FUN_03f45838(param_1 + 0x5d);
  plVar4 = (long *)param_1[0x60];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar1 = *(int *)((long)param_1 + 0x2f4) + -1;
    if (((*(int *)((long)param_1 + 0x2f4) < 1) ||
        (*(int *)((long)param_1 + 0x2f4) = iVar1, iVar1 == 0)) && (param_1[0x5f] != 0)) {
      FUN_03f44508();
      param_1[0x5f] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  FUN_03838610(param_1 + 0x52);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

