
void FUN_02950b40(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined ***)(param_1 + 0xb58) = &PTR_LAB_04a94e08;
  puVar2 = PTR_DAT_04bb2698;
  DAT_055d6918 = 1;
  DAT_055d691c = 0xffffffffffffffff;
  DAT_055d6924 = 0xffffffff;
  pvVar6 = *(void **)(param_1 + 0xc28);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0xc28) = 0;
    *(undefined4 *)(param_1 + 0xc20) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0xd10);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0xd10) = 0;
    *(undefined4 *)(param_1 + 0xd08) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0xd28);
  *(undefined4 *)(param_1 + 0xd18) = 0xffffffff;
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0xd28) = 0;
    *(undefined4 *)(param_1 + 0xd20) = 0;
  }
  puVar3 = PTR_DAT_04bcb440;
  puVar7 = *(undefined8 **)(param_1 + 0xb68);
  *(undefined **)(param_1 + 0xb58) = PTR_DAT_04bcb440 + 0x10;
  if (puVar7 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0xb70) < 1) {
      iVar1 = *(int *)(param_1 + 0xb70) + -1;
    }
    memset(puVar7,0,(long)iVar1);
    *(undefined1 *)((long)puVar7 + (long)iVar1) = 0;
  }
  (**(code **)(*(long *)(param_1 + 0xb60) + 0x18))(param_1 + 0xb60);
  uVar4 = FUN_006bd550(*(undefined8 *)(param_1 + 0xb68),0);
  pvVar6 = *(void **)(param_1 + 0xb38);
  *(undefined4 *)(param_1 + 0xbf8) = uVar4;
  *(undefined8 *)(param_1 + 0xc00) = 0;
  *(undefined8 *)(param_1 + 0xc08) = 0;
  *(undefined8 *)(param_1 + 0xc10) = 0;
  *(undefined ***)(param_1 + 0x958) = &PTR_FUN_04a94e60;
  if (pvVar6 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0xb38) = 0;
    *(undefined4 *)(param_1 + 0xb30) = 0;
  }
  *(undefined4 *)(param_1 + 0xb50) = 0;
  *(undefined1 *)(param_1 + 0xb54) = 0;
  FUN_0295a728(param_1 + 0x958);
  *(undefined ***)(param_1 + 0x958) = &PTR_LAB_04a94eb8;
  FUN_0295a728(param_1 + 0x958);
  puVar7 = *(undefined8 **)(param_1 + 0x968);
  *(undefined **)(param_1 + 0x958) = puVar3 + 0x10;
  if (puVar7 != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x970) < 1) {
      iVar1 = *(int *)(param_1 + 0x970) + -1;
    }
    memset(puVar7,0,(long)iVar1);
    *(undefined1 *)((long)puVar7 + (long)iVar1) = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x960) + 0x18))(param_1 + 0x960);
  uVar4 = FUN_006bd550(*(undefined8 *)(param_1 + 0x968),0);
  *(undefined8 *)(param_1 + 0xa00) = 0;
  *(undefined4 *)(param_1 + 0x9f8) = uVar4;
  *(undefined8 *)(param_1 + 0xa08) = 0;
  *(undefined8 *)(param_1 + 0xa10) = 0;
  FUN_009931e0(param_1);
  return;
}

