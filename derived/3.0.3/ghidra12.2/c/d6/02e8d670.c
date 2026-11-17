
void FUN_02e8d670(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  
  puVar3 = PTR_DAT_04bb2698;
  if (param_1[0x39a9] != 0) {
    pvVar8 = (void *)(param_1[0x39a9] + -8);
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[0x39a9] = 0;
    *(undefined4 *)(param_1 + 0x39a8) = 0;
  }
  if (param_1[0x47] != 0) {
    lVar6 = *(long *)puVar3;
    pvVar8 = (void *)(param_1[0x47] + -8);
    if (lVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar6,pvVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
      }
    }
    param_1[0x47] = 0;
    *(undefined4 *)(param_1 + 0x46) = 0;
  }
  FUN_03f45838(param_1 + 0x21297);
  FUN_03f45838(param_1 + 0x21297);
  plVar5 = (long *)param_1[0x2129a];
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x20))(plVar5);
    iVar1 = *(int *)((long)param_1 + 0x1094c4);
    iVar2 = iVar1 + -1;
    if (((iVar1 < 1) || (*(int *)((long)param_1 + 0x1094c4) = iVar2, iVar2 == 0)) &&
       (param_1[0x21299] != 0)) {
      FUN_03f44508();
      param_1[0x21299] = 0;
    }
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  puVar4 = PTR_DAT_04bcb4d0;
  param_1[0x3dca] = (long)(PTR_DAT_04bc6308 + 0x10);
  param_1[0x3871] = (long)(puVar4 + 0x10);
  if (param_1[0x3873] != 0) {
    if (0 < (int)param_1[0x3872]) {
      lVar6 = 0;
      plVar5 = (long *)param_1[0x3874];
      do {
        plVar7 = *(long **)(param_1[0x3873] + lVar6 * 8);
        lVar6 = lVar6 + 1;
        *plVar7 = (long)plVar5;
        param_1[0x3874] = (long)plVar7;
        plVar5 = plVar7;
      } while (lVar6 < (int)param_1[0x3872]);
    }
    pvVar8 = (void *)param_1[0x3875];
    *(undefined4 *)(param_1 + 0x3872) = 0;
    if (pvVar8 != (void *)0x0) {
      lVar6 = *(long *)puVar3;
      if (lVar6 == 0) {
        free(pvVar8);
      }
      else {
        plVar5 = (long *)FUN_038cb610(lVar6,pvVar8);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar8);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x1c3ac) = 0;
    *(undefined8 *)((long)param_1 + 0x1c3a4) = 0;
    *(undefined8 *)((long)param_1 + 0x1c39c) = 0;
    *(undefined8 *)((long)param_1 + 0x1c394) = 0;
  }
  FUN_03ebae78(param_1 + 0x385f);
  FUN_031356e0(param_1 + 0x3839);
  FUN_034129e0(param_1 + 0x4d);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

