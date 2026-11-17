
void FUN_02f792b4(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  pvVar6 = (void *)param_1[0x52];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x52] = 0;
  }
  if ((long *)param_1[0x53] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x53] + 0x20))();
  }
  lVar5 = param_1[0x22d];
  if (lVar5 != 0) {
    if ((*(long *)(lVar5 + 8) != 0) && (*(long **)(lVar5 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar5 + 0x10) + 8))();
    }
    param_1[0x22d] = 0;
    *(undefined1 *)(param_1 + 0x233) = 0;
  }
  if ((long *)param_1[0x22e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x22e] + 0x58))();
    (**(code **)(*(long *)param_1[0x22e] + 0x20))();
    param_1[0x22e] = 0;
  }
  lVar5 = param_1[0x234];
  if (lVar5 != 0) {
    if ((*(long *)(lVar5 + 8) != 0) && (*(long **)(lVar5 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar5 + 0x10) + 8))();
    }
    param_1[0x234] = 0;
    *(undefined1 *)(param_1 + 0x23a) = 0;
  }
  if ((long *)param_1[0x235] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x235] + 0x58))();
    (**(code **)(*(long *)param_1[0x235] + 0x20))();
    param_1[0x235] = 0;
  }
  lVar5 = param_1[0x23b];
  if (lVar5 != 0) {
    if ((*(long *)(lVar5 + 8) != 0) && (*(long **)(lVar5 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar5 + 0x10) + 8))();
    }
    param_1[0x23b] = 0;
    *(undefined1 *)(param_1 + 0x241) = 0;
  }
  if ((long *)param_1[0x23c] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x23c] + 0x58))();
    (**(code **)(*(long *)param_1[0x23c] + 0x20))();
    param_1[0x23c] = 0;
  }
  lVar5 = param_1[0x242];
  if (lVar5 != 0) {
    if ((*(long *)(lVar5 + 8) != 0) && (*(long **)(lVar5 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar5 + 0x10) + 8))();
    }
    param_1[0x242] = 0;
    *(undefined1 *)(param_1 + 0x248) = 0;
  }
  if ((long *)param_1[0x243] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x243] + 0x58))();
    (**(code **)(*(long *)param_1[0x243] + 0x20))();
    param_1[0x243] = 0;
  }
  lVar5 = param_1[0x249];
  if (lVar5 != 0) {
    if ((*(long *)(lVar5 + 8) != 0) && (*(long **)(lVar5 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)(lVar5 + 0x10) + 8))();
    }
    param_1[0x249] = 0;
    *(undefined1 *)(param_1 + 0x24f) = 0;
  }
  if ((long *)param_1[0x24a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24a] + 0x58))();
    (**(code **)(*(long *)param_1[0x24a] + 0x20))();
    param_1[0x24a] = 0;
  }
  pvVar6 = (void *)param_1[0x250];
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x250] = 0;
  }
  FUN_03f45838(param_1 + 0x227);
  FUN_03f45838(param_1 + 0x227);
  plVar4 = (long *)param_1[0x22a];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0x1144) + -1;
    if (((*(int *)((long)param_1 + 0x1144) < 1) ||
        (*(int *)((long)param_1 + 0x1144) = iVar2, iVar2 == 0)) && (param_1[0x229] != 0)) {
      FUN_03f44508();
      param_1[0x229] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  puVar3 = PTR_DAT_04bb2df8;
  puVar1 = PTR_DAT_04bb2df8 + 0x10;
  param_1[0x1f9] = (long)puVar1;
  FUN_03f45838(param_1 + 0x1ed);
  FUN_03f45838(param_1 + 0x1ed);
  plVar4 = (long *)param_1[0x1f0];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0xf74) + -1;
    if (((*(int *)((long)param_1 + 0xf74) < 1) ||
        (*(int *)((long)param_1 + 0xf74) = iVar2, iVar2 == 0)) && (param_1[0x1ef] != 0)) {
      FUN_03f44508();
      param_1[0x1ef] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  param_1[0x1bf] = (long)puVar1;
  FUN_03f45838(param_1 + 0x1b3);
  FUN_03f45838(param_1 + 0x1b3);
  plVar4 = (long *)param_1[0x1b6];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0xda4) + -1;
    if (((*(int *)((long)param_1 + 0xda4) < 1) ||
        (*(int *)((long)param_1 + 0xda4) = iVar2, iVar2 == 0)) && (param_1[0x1b5] != 0)) {
      FUN_03f44508();
      param_1[0x1b5] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  param_1[0x185] = (long)(puVar3 + 0x10);
  FUN_03f45838(param_1 + 0x179);
  FUN_03f45838(param_1 + 0x179);
  plVar4 = (long *)param_1[0x17c];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0xbd4) + -1;
    if (((*(int *)((long)param_1 + 0xbd4) < 1) ||
        (*(int *)((long)param_1 + 0xbd4) = iVar2, iVar2 == 0)) && (param_1[0x17b] != 0)) {
      FUN_03f44508();
      param_1[0x17b] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  param_1[0x14b] = (long)(puVar3 + 0x10);
  FUN_03f45838(param_1 + 0x13f);
  FUN_03f45838(param_1 + 0x13f);
  plVar4 = (long *)param_1[0x142];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0xa04) + -1;
    if (((*(int *)((long)param_1 + 0xa04) < 1) ||
        (*(int *)((long)param_1 + 0xa04) = iVar2, iVar2 == 0)) && (param_1[0x141] != 0)) {
      FUN_03f44508();
      param_1[0x141] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  param_1[0x111] = (long)(puVar3 + 0x10);
  FUN_03f45838(param_1 + 0x105);
  FUN_03f45838(param_1 + 0x105);
  plVar4 = (long *)param_1[0x108];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0x834) + -1;
    if (((*(int *)((long)param_1 + 0x834) < 1) ||
        (*(int *)((long)param_1 + 0x834) = iVar2, iVar2 == 0)) && (param_1[0x107] != 0)) {
      FUN_03f44508();
      param_1[0x107] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  param_1[0xd7] = (long)(puVar3 + 0x10);
  FUN_03f45838(param_1 + 0xcb);
  FUN_03f45838(param_1 + 0xcb);
  plVar4 = (long *)param_1[0xce];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0x664) + -1;
    if (((*(int *)((long)param_1 + 0x664) < 1) ||
        (*(int *)((long)param_1 + 0x664) = iVar2, iVar2 == 0)) && (param_1[0xcd] != 0)) {
      FUN_03f44508();
      param_1[0xcd] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  param_1[0x9d] = (long)(puVar3 + 0x10);
  FUN_03f45838(param_1 + 0x91);
  FUN_03f45838(param_1 + 0x91);
  plVar4 = (long *)param_1[0x94];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0x494) + -1;
    if (((*(int *)((long)param_1 + 0x494) < 1) ||
        (*(int *)((long)param_1 + 0x494) = iVar2, iVar2 == 0)) && (param_1[0x93] != 0)) {
      FUN_03f44508();
      param_1[0x93] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  param_1[99] = (long)(puVar3 + 0x10);
  FUN_03f45838(param_1 + 0x4e);
  plVar4 = (long *)param_1[0x51];
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    iVar2 = *(int *)((long)param_1 + 0x27c) + -1;
    if (((*(int *)((long)param_1 + 0x27c) < 1) ||
        (*(int *)((long)param_1 + 0x27c) = iVar2, iVar2 == 0)) && (param_1[0x50] != 0)) {
      FUN_03f44508();
      param_1[0x50] = 0;
    }
    (**(code **)(*plVar4 + 0x28))(plVar4);
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

