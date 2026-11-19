
void FUN_0396b870(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  void *pvVar10;
  
  *param_1 = &PTR_FUN_04b68448;
  uVar5 = DAT_05ae90c0;
  if ((*(byte *)(param_1 + 0xd6) >> 2 & 1) != 0) {
    if (param_1[0xf] != 0) {
      FUN_039499cc(DAT_05ae90c0);
      param_1[0xf] = 0;
    }
    if (param_1[0x10] != 0) {
      FUN_039499cc(uVar5);
      param_1[0x10] = 0;
    }
    if (param_1[0x9a] != 0) {
      FUN_039499cc(uVar5);
      param_1[0x9a] = 0;
    }
    *(uint *)(param_1 + 0xd6) = *(uint *)(param_1 + 0xd6) & 0xfffffffb;
  }
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  puVar3 = PTR_DAT_04bb2698;
  pvVar10 = (void *)param_1[0xd8];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
      }
    }
    param_1[0xd7] = 0;
    param_1[0xd8] = 0;
  }
  if (param_1[0xda] != 0) {
    pvVar10 = (void *)(param_1[0xda] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
      }
    }
    param_1[0xda] = 0;
    *(undefined4 *)(param_1 + 0xd9) = 0;
  }
  pvVar10 = (void *)param_1[0x17a];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
      }
    }
    param_1[0x17a] = 0;
    *(undefined4 *)(param_1 + 0x179) = 0;
    *(undefined4 *)((long)param_1 + 0xbcc) = 0;
  }
  puVar4 = PTR_DAT_04bd1150;
  lVar8 = param_1[0x17c];
  if (lVar8 != 0) {
    plVar6 = (long *)(lVar8 + -8);
    if (*plVar6 != 0) {
      lVar9 = *plVar6 * 0x398;
      puVar1 = PTR_DAT_04bd1150 + 0x10;
      do {
        lVar2 = lVar8 + lVar9;
        *(undefined **)(lVar2 + -0x398) = puVar1;
        *(undefined8 *)(lVar2 + -0x390) = 0;
        *(undefined8 *)(lVar2 + -0x388) = 0;
        *(undefined8 *)(lVar2 + -0x380) = 0;
        *(undefined8 *)(lVar2 + -0x378) = 0;
        lVar9 = lVar9 + -0x398;
        *(byte *)(lVar2 + -0x140) = *(byte *)(lVar2 + -0x140) & 0xfc | *(int *)(lVar2 + -0x14c) != 0
        ;
      } while (lVar9 != 0);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar6);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar3,plVar6);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,plVar6);
      }
    }
    param_1[0x17c] = 0;
    *(undefined4 *)(param_1 + 0x17b) = 0;
  }
  pvVar10 = (void *)param_1[0x17e];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
      }
    }
    param_1[0x17e] = 0;
    *(undefined4 *)(param_1 + 0x17d) = 0;
    *(undefined4 *)((long)param_1 + 0xbec) = 0;
  }
  if ((param_1[0xe3] != 0) && ((long *)param_1[0xe4] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xe4] + 8))();
  }
  if (((*(byte *)(param_1 + 300) >> 3 & 1) != 0) &&
     (pvVar10 = (void *)param_1[0xe8], pvVar10 != (void *)0x0)) {
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
      lVar8 = param_1[0x12f];
      goto joined_r0x0396bb04;
    }
    plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
    }
  }
  lVar8 = param_1[0x12f];
joined_r0x0396bb04:
  if ((lVar8 != 0) && ((long *)param_1[0x130] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x130] + 8))();
  }
  if (((*(byte *)(param_1 + 0x178) >> 3 & 1) != 0) &&
     (pvVar10 = (void *)param_1[0x134], pvVar10 != (void *)0x0)) {
    if (*(long *)puVar3 == 0) {
      free(pvVar10);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar3,pvVar10);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar10);
      }
    }
  }
  param_1[0x12e] = 0;
  param_1[0x12d] = puVar4 + 0x10;
  param_1[0xe1] = puVar4 + 0x10;
  param_1[0x12f] = 0;
  param_1[0x130] = 0;
  param_1[0x131] = 0;
  param_1[0xe2] = 0;
  *(byte *)(param_1 + 0x178) =
       *(byte *)(param_1 + 0x178) & 0xfc | *(int *)((long)param_1 + 0xbb4) != 0;
  param_1[0xe3] = 0;
  param_1[0xe4] = 0;
  param_1[0xe5] = 0;
  *(byte *)(param_1 + 300) = *(byte *)(param_1 + 300) & 0xfc | *(int *)((long)param_1 + 0x954) != 0;
  param_1[0xaf] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0xba);
  FUN_038fd0e0(param_1 + 0xa5);
  param_1[0x71] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x7c);
  param_1[0x55] = PTR_DAT_04bbd500 + 0x10;
  FUN_038fd0e0(param_1 + 0x60);
  param_1[0x39] = &PTR_LAB_049a8af0;
  FUN_038fd0e0(param_1 + 0x44);
  FUN_038fd0e0(param_1 + 0x2f);
  FUN_038fd0e0(param_1 + 0x1b);
  return;
}

