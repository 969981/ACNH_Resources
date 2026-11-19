
void FUN_03947ac0(undefined8 *param_1)

{
  byte bVar1;
  undefined *puVar2;
  bool bVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04b67978;
  puVar2 = PTR_DAT_04bb2698;
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + -8);
    if (*plVar6 != 0) {
      lVar8 = *plVar6 * 0xe0;
      do {
        FUN_03966bc4(lVar5 + -0xe0 + lVar8);
        lVar8 = lVar8 + -0xe0;
      } while (lVar8 != 0);
    }
    if (*(long *)puVar2 == 0) {
      free(plVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,plVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar6);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x29c) = 0;
  if (param_1[6] != 0) {
    if ((long *)param_1[7] != (long *)0x0) {
      (**(code **)(*(long *)param_1[7] + 8))();
    }
    param_1[7] = 0;
    param_1[8] = 0;
    bVar1 = *(byte *)(param_1 + 0x4f);
    pvVar7 = (void *)param_1[0x52];
    param_1[0x50] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    bVar3 = *(int *)((long)param_1 + 0x26c) != 0;
    *(undefined4 *)(param_1 + 0x51) = 0;
    *(byte *)(param_1 + 0x4f) = bVar1 & 0xfc | bVar3;
    if (pvVar7 != (void *)0x0) {
      lVar5 = *(long *)puVar2;
      *(byte *)(param_1 + 0x4f) = bVar1 & 0xf4 | bVar3;
      param_1[0xb] = param_1 + 0xc;
      param_1[0x4d] = 0x200;
      if (lVar5 == 0) {
        free(pvVar7);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar5,pvVar7);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
        }
      }
      param_1[0x52] = 0;
    }
  }
  lVar5 = param_1[0x55];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + -8);
    if (*plVar6 != 0) {
      lVar8 = *plVar6 * 0xe0;
      do {
        FUN_03966bc4(lVar5 + -0xe0 + lVar8);
        lVar8 = lVar8 + -0xe0;
      } while (lVar8 != 0);
    }
    if (*(long *)puVar2 == 0) {
      free(plVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,plVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar6);
      }
    }
    param_1[0x55] = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x52c) = 1;
  if (param_1[0x58] != 0) {
    if ((long *)param_1[0x59] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0x59] + 8))();
    }
    param_1[0x5a] = 0;
    param_1[0x59] = 0;
    bVar1 = *(byte *)(param_1 + 0xa1);
    pvVar7 = (void *)param_1[0xa4];
    param_1[0x58] = 0;
    param_1[0x57] = 0;
    bVar3 = *(int *)((long)param_1 + 0x4fc) != 0;
    param_1[0xa2] = 0;
    *(undefined4 *)(param_1 + 0xa3) = 0;
    *(byte *)(param_1 + 0xa1) = bVar1 & 0xfc | bVar3;
    if (pvVar7 != (void *)0x0) {
      lVar5 = *(long *)puVar2;
      *(byte *)(param_1 + 0xa1) = bVar1 & 0xf4 | bVar3;
      param_1[0x5d] = param_1 + 0x5e;
      param_1[0x9f] = 0x200;
      if (lVar5 == 0) {
        free(pvVar7);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar5,pvVar7);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
        }
      }
      param_1[0xa4] = 0;
    }
  }
  lVar5 = param_1[0xa7];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + -8);
    if (*plVar6 != 0) {
      lVar8 = *plVar6 * 0xe0;
      do {
        FUN_03966bc4(lVar5 + -0xe0 + lVar8);
        lVar8 = lVar8 + -0xe0;
      } while (lVar8 != 0);
    }
    if (*(long *)puVar2 == 0) {
      free(plVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,plVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar6);
      }
    }
    param_1[0xa7] = 0;
    *(undefined4 *)(param_1 + 0xa6) = 0;
  }
  *(undefined1 *)((long)param_1 + 0x7bc) = 2;
  if (param_1[0xaa] != 0) {
    if ((long *)param_1[0xab] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xab] + 8))();
    }
    param_1[0xac] = 0;
    param_1[0xab] = 0;
    bVar1 = *(byte *)(param_1 + 0xf3);
    pvVar7 = (void *)param_1[0xf6];
    param_1[0xaa] = 0;
    param_1[0xa9] = 0;
    bVar3 = *(int *)((long)param_1 + 0x78c) != 0;
    param_1[0xf4] = 0;
    *(undefined4 *)(param_1 + 0xf5) = 0;
    *(byte *)(param_1 + 0xf3) = bVar1 & 0xfc | bVar3;
    if (pvVar7 != (void *)0x0) {
      lVar5 = *(long *)puVar2;
      *(byte *)(param_1 + 0xf3) = bVar1 & 0xf4 | bVar3;
      param_1[0xaf] = param_1 + 0xb0;
      param_1[0xf1] = 0x200;
      if (lVar5 == 0) {
        free(pvVar7);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar5,pvVar7);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
        }
      }
      param_1[0xf6] = 0;
    }
  }
  lVar5 = param_1[0xf9];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + -8);
    if (*plVar6 != 0) {
      lVar8 = *plVar6 * 0xe0;
      do {
        FUN_03966bc4(lVar5 + -0xe0 + lVar8);
        lVar8 = lVar8 + -0xe0;
      } while (lVar8 != 0);
    }
    if (*(long *)puVar2 == 0) {
      free(plVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,plVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar6);
      }
    }
    param_1[0xf9] = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
  }
  *(undefined1 *)((long)param_1 + 0xa4c) = 3;
  if (param_1[0xfc] != 0) {
    if ((long *)param_1[0xfd] != (long *)0x0) {
      (**(code **)(*(long *)param_1[0xfd] + 8))();
    }
    param_1[0xfe] = 0;
    param_1[0xfd] = 0;
    bVar1 = *(byte *)(param_1 + 0x145);
    pvVar7 = (void *)param_1[0x148];
    param_1[0xfc] = 0;
    param_1[0xfb] = 0;
    bVar3 = *(int *)((long)param_1 + 0xa1c) != 0;
    param_1[0x146] = 0;
    *(undefined4 *)(param_1 + 0x147) = 0;
    *(byte *)(param_1 + 0x145) = bVar1 & 0xfc | bVar3;
    if (pvVar7 != (void *)0x0) {
      lVar5 = *(long *)puVar2;
      *(byte *)(param_1 + 0x145) = bVar1 & 0xf4 | bVar3;
      param_1[0x101] = param_1 + 0x102;
      param_1[0x143] = 0x200;
      if (lVar5 == 0) {
        free(pvVar7);
      }
      else {
        plVar6 = (long *)FUN_038cb610(lVar5,pvVar7);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
        }
      }
      param_1[0x148] = 0;
    }
  }
  lVar5 = param_1[0x14b];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + -8);
    if (*plVar6 != 0) {
      lVar8 = *plVar6 * 0x150;
      do {
        FUN_038fd0e0(lVar5 + -0x100 + lVar8);
        lVar8 = lVar8 + -0x150;
      } while (lVar8 != 0);
    }
    if (*(long *)puVar2 == 0) {
      free(plVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,plVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar6);
      }
    }
    param_1[0x14b] = 0;
    *(undefined4 *)(param_1 + 0x14a) = 0;
  }
  if (param_1[0x163] != 0) {
    pvVar7 = (void *)(param_1[0x163] + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x163] = 0;
    *(undefined4 *)(param_1 + 0x162) = 0;
  }
  FUN_038e1a84(param_1 + 0x154);
  FUN_038e1a84(param_1 + 0x14c);
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  param_1[0xfd] = 0;
  param_1[0xfe] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xfa] = &PTR_LAB_04b65c30;
  param_1[0xa8] = &PTR_LAB_04b65c30;
  *(byte *)(param_1 + 0x145) =
       *(byte *)(param_1 + 0x145) & 0xfc | *(int *)((long)param_1 + 0xa1c) != 0;
  param_1[0x56] = &PTR_LAB_04b65c30;
  param_1[4] = &PTR_LAB_04b65c30;
  param_1[5] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  *(byte *)(param_1 + 0xf3) =
       *(byte *)(param_1 + 0xf3) & 0xfc | *(int *)((long)param_1 + 0x78c) != 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 0xa1) =
       *(byte *)(param_1 + 0xa1) & 0xfc | *(int *)((long)param_1 + 0x4fc) != 0;
  *(byte *)(param_1 + 0x4f) =
       *(byte *)(param_1 + 0x4f) & 0xfc | *(int *)((long)param_1 + 0x26c) != 0;
  return;
}

