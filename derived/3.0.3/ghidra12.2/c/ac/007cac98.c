
void FUN_007cac98(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *__s;
  
  param_1[0x16c] = 0;
  *param_1 = &PTR_FUN_04916420;
  param_1[0x156] = &PTR_LAB_04916480;
  puVar2 = PTR_DAT_04bb2698;
  DAT_04cad390 = 1;
  DAT_04cad394 = 0xffffffffffffffff;
  DAT_04cad39c = 0xffffffffffffffff;
  pvVar6 = (void *)param_1[0x170];
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
    param_1[0x170] = 0;
    *(undefined4 *)(param_1 + 0x16f) = 0;
  }
  pvVar6 = (void *)param_1[0x18d];
  if (pvVar6 != (void *)0x0) {
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar5,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[0x18d] = 0;
    *(undefined4 *)(param_1 + 0x18c) = 0;
  }
  pvVar6 = (void *)param_1[400];
  *(undefined4 *)(param_1 + 0x18e) = 0xffffffff;
  if (pvVar6 != (void *)0x0) {
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar5,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    param_1[400] = 0;
    *(undefined4 *)(param_1 + 399) = 0;
  }
  __s = (undefined8 *)param_1[0x158];
  param_1[0x156] = &PTR_FUN_04b5e7f8;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x159) < 1) {
      iVar1 = *(int *)(param_1 + 0x159) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x157] + 0x18))(param_1 + 0x157);
  uVar3 = FUN_006bd550(param_1[0x158],0);
  *(undefined4 *)(param_1 + 0x16a) = uVar3;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0x16d] = 0;
  FUN_03f2d448(param_1 + 0x14e);
  FUN_03f2a9b0(param_1 + 300);
  FUN_038e1a84(param_1 + 0x13a);
  return;
}

