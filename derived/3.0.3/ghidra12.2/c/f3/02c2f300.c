
void FUN_02c2f300(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined **local_60;
  long *plStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  if (param_1[0x54] != 0 && (long *)param_1[0x55] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x55] + 8))();
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = (void *)param_1[0x51];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x51] = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  pvVar4 = (void *)param_1[0x68];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x68] = 0;
    *(undefined4 *)(param_1 + 0x67) = 0;
  }
  plVar2 = (long *)param_1[0x52];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x20))(plVar2);
    pvVar4 = (void *)plVar2[2];
    if (pvVar4 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
        }
      }
      plVar2[1] = 0;
      plVar2[2] = 0;
    }
    if ((long *)param_1[0x52] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x52] + 8))();
    }
    param_1[0x52] = 0;
  }
  pvVar4 = (void *)param_1[0x69];
  if (pvVar4 != (void *)0x0) {
    FUN_0340f290(pvVar4);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    param_1[0x69] = 0;
  }
  pvVar4 = (void *)param_1[0x6d];
  if (pvVar4 != (void *)0x0) {
    FUN_0340cc60(pvVar4);
    FUN_03ebae78((long)pvVar4 + 0x1a8);
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
      plVar2 = (long *)param_1[0x6b];
      goto joined_r0x02c2f4b8;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
    }
  }
  plVar2 = (long *)param_1[0x6b];
joined_r0x02c2f4b8:
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
  }
  lVar5 = param_1[0x49];
  lVar7 = param_1[0x48];
  if ((int)lVar7 != 0) {
    iVar6 = 0;
    do {
      FUN_03ebae78(lVar5 + (long)iVar6 * 0x90 + 0x30);
      iVar6 = iVar6 + 1;
    } while ((int)lVar7 != iVar6);
    lVar5 = param_1[0x49];
  }
  if (lVar5 != 0) {
    plVar2 = (long *)(lVar5 + -8);
    if (*plVar2 != 0) {
      lVar7 = *plVar2 * 0x90;
      do {
        *(undefined ***)(lVar5 + lVar7 + -0x90) = &PTR_LAB_04b29d40;
        FUN_03ebae78(lVar5 + lVar7 + -0x60);
        lVar7 = lVar7 + -0x90;
      } while (lVar7 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar2);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
      }
    }
    param_1[0x49] = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  plStack_58 = param_1 + 0x76;
  local_50 = &LAB_02c3623c;
  uStack_48 = 0;
  local_60 = &PTR_LAB_04aaf340;
  if (param_1[0x76] != 0) {
    FUN_02c36240(param_1[0x76],&local_60);
  }
  FUN_038fd0e0(param_1 + 0x5d);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

