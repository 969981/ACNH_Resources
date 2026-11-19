
void FUN_03bcbb40(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined8 *puVar9;
  void *pvVar10;
  
  puVar7 = param_1 + 1;
  *puVar7 = &PTR_LAB_04b7ae88;
  puVar1 = PTR_DAT_04bd2340;
  *param_1 = &PTR_LAB_04b7ae00;
  puVar9 = *(undefined8 **)(*(long *)puVar1 + 8);
  if (((*PTR_DAT_04bd2308 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bd2308), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bd2300 = PTR_DAT_04bd2310 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd2308);
  }
  uVar3 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bd2300);
  if ((uVar3 & 1) == 0) {
    puVar9 = (undefined8 *)0x0;
  }
  if ((*(char *)(puVar9 + 0x33) != '\0') && (iVar2 = *(int *)(param_1 + 9), iVar2 != 0)) {
    iVar8 = 0x4000000;
    do {
      uVar4 = FUN_003baf0c(puVar7,iVar8);
      FUN_003cdf50(uVar4,0);
      iVar2 = iVar2 + -1;
      iVar8 = iVar8 + 1;
    } while (iVar2 != 0);
  }
  puVar1 = PTR_DAT_04bb2698;
  pvVar10 = (void *)param_1[99];
  if (pvVar10 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
    }
    param_1[99] = 0;
  }
  pvVar10 = (void *)param_1[0x65];
  if (pvVar10 != (void *)0x0) {
    lVar6 = *(long *)puVar1;
    if (lVar6 == 0) {
      free(pvVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar6,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
    }
    param_1[0x65] = 0;
  }
  pvVar10 = (void *)param_1[0x67];
  if (pvVar10 != (void *)0x0) {
    lVar6 = *(long *)puVar1;
    if (lVar6 == 0) {
      free(pvVar10);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar6,pvVar10);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar10);
      }
    }
    param_1[0x67] = 0;
  }
  if ((long *)param_1[0x6a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x6a] + 8))();
    param_1[0x6a] = 0;
  }
  if ((long *)param_1[0x69] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x69] + 8))();
    param_1[0x69] = 0;
  }
  FUN_038e1a84(param_1 + 0x6c);
  FUN_003ba4d4(puVar7);
  return;
}

