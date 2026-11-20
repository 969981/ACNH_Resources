
void FUN_03f188e0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  
  *param_1 = &PTR_FUN_04ba8068;
  iVar1 = *(int *)(param_1 + 0x1a);
  plVar4 = (long *)PTR_DAT_04bb2698;
  while (PTR_DAT_04bb2698 = (undefined *)plVar4, iVar1 != 0) {
    lVar3 = param_1[0x19];
    if (iVar1 < 1) {
      lVar3 = 0;
    }
    puVar6 = (undefined8 *)0x0;
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar3 - *(int *)((long)param_1 + 0xd4));
    }
    plVar4 = (long *)((long)puVar6 + (long)*(int *)((long)param_1 + 0xd4));
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    lVar3 = param_1[1];
    *(int *)(param_1 + 0x1a) = *(int *)(param_1 + 0x1a) + -1;
    if (puVar6[0x32] != 0) {
      *(undefined8 *)(puVar6[0x32] + 8) = puVar6[0x33];
    }
    if ((undefined8 *)puVar6[0x33] != (undefined8 *)0x0) {
      *(undefined8 *)puVar6[0x33] = puVar6[0x32];
    }
    puVar6[0x32] = 0;
    puVar6[0x33] = 0;
    *(int *)(lVar3 + 0x188) = *(int *)(lVar3 + 0x188) + -1;
    (**(code **)*puVar6)(puVar6);
    *puVar6 = *(undefined8 *)(lVar3 + 400);
    *(undefined8 **)(lVar3 + 400) = puVar6;
    plVar4 = (long *)PTR_DAT_04bb2698;
    iVar1 = *(int *)(param_1 + 0x1a);
  }
  plVar5 = (long *)param_1[0x15];
  if (plVar5 != (long *)0x0) {
    FUN_03f236b0(plVar5);
    *plVar5 = (long)(PTR_DAT_04bdf040 + 0x10);
    FUN_03f236b0(plVar5);
    if (*plVar4 == 0) {
      free(plVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*plVar4,plVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar5);
      }
    }
    param_1[0x15] = 0;
  }
  puVar6 = (undefined8 *)param_1[6];
  if (puVar6 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar6;
    if (pvVar7 != (void *)0x0) {
      if (*plVar4 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*plVar4,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      *puVar6 = 0;
    }
    if (*plVar4 == 0) {
      free(puVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*plVar4,puVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar6);
      }
    }
    param_1[6] = 0;
  }
  puVar6 = (undefined8 *)param_1[5];
  if (puVar6 != (undefined8 *)0x0) {
    pvVar7 = (void *)*puVar6;
    if (pvVar7 != (void *)0x0) {
      if (*plVar4 == 0) {
        free(pvVar7);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*plVar4,pvVar7);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
        }
      }
      *puVar6 = 0;
    }
    if (*plVar4 == 0) {
      free(puVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*plVar4,puVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,puVar6);
      }
    }
    param_1[5] = 0;
  }
  pvVar7 = (void *)param_1[0x14];
  if (pvVar7 != (void *)0x0) {
    lVar3 = *plVar4;
    *(undefined4 *)(param_1 + 0x13) = 0;
    param_1[0x14] = 0;
    if (lVar3 == 0) {
      free(pvVar7);
      pvVar7 = (void *)param_1[0xb];
      goto joined_r0x03f18b44;
    }
    plVar5 = (long *)FUN_038cb610(lVar3,pvVar7);
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
    }
  }
  pvVar7 = (void *)param_1[0xb];
joined_r0x03f18b44:
  if (pvVar7 != (void *)0x0) {
    if (*plVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*plVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[0xb] = 0;
    *(undefined4 *)(param_1 + 10) = 0;
  }
  pvVar7 = (void *)param_1[0xd];
  if (pvVar7 != (void *)0x0) {
    if (*plVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*plVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[0xd] = 0;
  }
  pvVar7 = (void *)param_1[0xe];
  if (pvVar7 != (void *)0x0) {
    if (*plVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*plVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[0xe] = 0;
  }
  pvVar7 = (void *)param_1[0xf];
  if (pvVar7 != (void *)0x0) {
    if (*plVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*plVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[0xf] = 0;
  }
  pvVar7 = (void *)param_1[0x10];
  if (pvVar7 != (void *)0x0) {
    if (*plVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*plVar4,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[0x10] = 0;
  }
  if (param_1[0x12] != 0) {
    pvVar7 = (void *)(param_1[0x12] + -8);
    if (*plVar4 == 0) {
      free(pvVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*plVar4,pvVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
      }
    }
    param_1[0x12] = 0;
    *(undefined4 *)(param_1 + 0x11) = 0;
  }
  return;
}

