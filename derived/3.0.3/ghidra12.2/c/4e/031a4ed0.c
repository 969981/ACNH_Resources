
void FUN_031a4ed0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04bb2698;
  plVar7 = (long *)param_1[0x4b];
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x20))(plVar7);
    pvVar6 = (void *)plVar7[2];
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
      plVar7[1] = 0;
      plVar7[2] = 0;
    }
    if ((long *)param_1[0x4b] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x4b] + 8))();
    }
    param_1[0x4b] = 0;
  }
  pvVar6 = (void *)param_1[0x48];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar6);
      }
    }
    param_1[0x48] = 0;
  }
  puVar8 = (undefined8 *)param_1[0x52];
  if (puVar8 != (undefined8 *)0x0) {
    pvVar6 = (void *)*puVar8;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar6);
        }
      }
      *(undefined4 *)(puVar8 + 2) = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
    }
    if ((long *)puVar8[3] != (long *)0x0) {
      (**(code **)(*(long *)puVar8[3] + 8))();
      puVar8[3] = 0;
    }
    pvVar6 = (void *)param_1[0x52];
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,pvVar6);
        }
      }
    }
    param_1[0x52] = 0;
  }
  if ((param_1[0x56] != 0) && ((long *)param_1[0x57] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x57] + 8))();
  }
  plVar3 = (long *)param_1[0x54];
  plVar7 = param_1 + 0x53;
  if ((int)param_1[0x53] != 0) {
    lVar9 = (long)(int)param_1[0x53] << 3;
    do {
      lVar5 = *plVar3;
      if ((lVar5 != 0) && (*(long *)(lVar5 + 8) != 0 && *(long **)(lVar5 + 0x10) != (long *)0x0)) {
        (**(code **)(**(long **)(lVar5 + 0x10) + 8))();
      }
      plVar3 = plVar3 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
    iVar1 = (int)*plVar7;
    while (0 < iVar1) {
      plVar3 = (long *)param_1[0x54];
      *(uint *)(param_1 + 0x53) = iVar1 - 1U;
      pvVar6 = (void *)plVar3[iVar1 - 1U];
      if (pvVar6 == (void *)0x0) goto LAB_031a50b4;
      FUN_038fd0e0((long)pvVar6 + 0x50);
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
      iVar1 = (int)*plVar7;
    }
    plVar3 = (long *)param_1[0x54];
  }
LAB_031a50b4:
  if (plVar3 != (long *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(plVar3);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,plVar3);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar3);
      }
    }
    *plVar7 = 0;
    param_1[0x54] = 0;
  }
  pvVar6 = (void *)param_1[0x8e];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar6);
      }
    }
    param_1[0x8e] = 0;
    *(undefined4 *)(param_1 + 0x8d) = 0;
  }
  pvVar6 = (void *)param_1[0x44];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar6);
      }
    }
    param_1[0x44] = 0;
    *(undefined4 *)(param_1 + 0x43) = 0;
  }
  if (param_1[0x3889] != 0) {
    pvVar6 = (void *)(param_1[0x3889] + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar6);
      }
    }
    param_1[0x3889] = 0;
    *(undefined4 *)(param_1 + 0x3888) = 0;
  }
  FUN_034129e0(param_1 + 0x98);
  FUN_031356e0(param_1 + 0x69);
  FUN_038fd0e0(param_1 + 0x5f);
  puVar8 = (undefined8 *)param_1[0x4e];
  if (((puVar8 != (undefined8 *)0x0) && ((long *)*puVar8 != (long *)0x0)) &&
     ((long *)*puVar8 == param_1 + 0x4e)) {
    param_1[0x4e] = 0;
    *puVar8 = 0;
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

