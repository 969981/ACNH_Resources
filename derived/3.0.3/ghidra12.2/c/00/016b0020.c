
void FUN_016b0020(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  void *pvVar9;
  char *__dest;
  undefined *local_60;
  undefined1 *puStack_58;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar7 = malloc(0x438);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x438,8);
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  puStack_58 = &DAT_04066c7f;
  FUN_006fc0d0(pvVar7,&local_60,PTR_DAT_04bb2f80);
  FUN_006f9fc0(param_1,pvVar7,0xffffffff);
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    plVar6 = malloc(0x2e0);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_016b0140;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2e0,8);
  }
LAB_016b0140:
  FUN_00705c50(plVar6);
  plVar6[0x4f] = 0;
  puVar4 = PTR_DAT_04bb3300;
  plVar6[0x50] = 0;
  plVar6[0x53] = -0x100000000;
  plVar6[0x52] = (long)(plVar6 + 0x51);
  plVar6[0x51] = (long)(plVar6 + 0x51);
  *plVar6 = (long)(puVar4 + 0x10);
  FUN_038e18e4(plVar6 + 0x54);
  __dest = (char *)plVar6[0xc];
  if (__dest != "Family") {
    iVar1 = 6;
    if ((int)plVar6[0xd] < 7) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(__dest,"Family",(long)iVar1);
    __dest[iVar1] = '\0';
  }
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar6 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) {
    pvVar7 = malloc(0x11f0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_3 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        param_3 = (long *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x11f0,8);
  }
  FUN_00739870(pvVar7,0,0,1);
  FUN_006f9fc0(param_1,pvVar7,0xffffffff);
  lVar8 = *(long *)(param_1 + 0x60);
  pvVar9 = *(void **)(lVar8 + 0x280);
  (**(code **)(DAT_05238988 + 0x18))(&DAT_05238988);
  pvVar7 = DAT_05238990;
  if (pvVar9 != DAT_05238990) {
    (**(code **)(DAT_05238988 + 0x18))(&DAT_05238988);
    lVar5 = 0;
    do {
      if (*(char *)((long)DAT_05238990 + lVar5) == '\0') goto LAB_016b02ec;
      if (*(char *)((long)DAT_05238990 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_016b02ec;
      }
      if (*(char *)((long)DAT_05238990 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_016b02ec;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_016b02ec:
    iVar1 = (int)lVar5;
    if (*(int *)(lVar8 + 0x288) <= (int)lVar5) {
      iVar1 = *(int *)(lVar8 + 0x288) + -1;
    }
    memcpy(pvVar9,pvVar7,(long)iVar1);
    *(undefined1 *)((long)pvVar9 + (long)iVar1) = 0;
  }
  *(undefined4 *)(lVar8 + 0x10d8) = 0;
  lVar8 = *(long *)(param_1 + 0x60);
  pvVar9 = *(void **)(lVar8 + 0xf90);
  (**(code **)(DAT_05238988 + 0x18))(&DAT_05238988);
  pvVar7 = DAT_05238990;
  if (pvVar9 != DAT_05238990) {
    (**(code **)(DAT_05238988 + 0x18))(&DAT_05238988);
    lVar5 = 0;
    do {
      if (*(char *)((long)DAT_05238990 + lVar5) == '\0') goto LAB_016b0390;
      if (*(char *)((long)DAT_05238990 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_016b0390;
      }
      if (*(char *)((long)DAT_05238990 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_016b0390;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_016b0390:
    iVar2 = *(int *)(lVar8 + 0xf98);
    iVar1 = (int)lVar5;
    if (iVar2 <= (int)lVar5) {
      iVar1 = iVar2 + -1;
    }
    memcpy(pvVar9,pvVar7,(long)iVar1);
    *(undefined1 *)((long)pvVar9 + (long)iVar1) = 0;
  }
  return;
}

