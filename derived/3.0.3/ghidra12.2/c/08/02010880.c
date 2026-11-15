
void FUN_02010880(undefined8 *param_1,undefined8 param_2,long *param_3,undefined4 *param_4,
                 undefined2 *param_5)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  void *__src;
  undefined4 local_44;
  
  FUN_016fcf10();
  param_1[0xbe8] = param_2;
  *param_1 = &PTR_LAB_04a6e1f0;
  puVar8 = PTR_DAT_04bb6a30;
  plVar1 = param_1 + 0xbe9;
  *(int *)(param_1 + 0xbeb) = 8;
  *(undefined1 *)((long)param_1 + 0x5f63) = 0;
  pvVar12 = (void *)((long)param_1 + 0x5f5c);
  *plVar1 = (long)(puVar8 + 0x10);
  param_1[0xbea] = pvVar12;
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (pvVar12 != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar11 = 0;
    do {
      if (*(char *)(param_3[1] + lVar11) == '\0') goto LAB_02010970;
      lVar10 = param_3[1] + lVar11;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02010970;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02010970;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02010970:
    iVar6 = *(int *)(param_1 + 0xbeb);
    iVar2 = (int)lVar11;
    if (iVar6 <= (int)lVar11) {
      iVar2 = iVar6 + -1;
    }
    memcpy(pvVar12,__src,(long)iVar2);
    *(undefined1 *)((long)pvVar12 + (long)iVar2) = 0;
  }
  puVar8 = PTR_DAT_04bb3768;
  *(undefined1 *)((long)param_1 + 0x5f7c) = 0;
  *(undefined4 *)(param_1 + 0xbef) = 8;
  *(undefined1 *)((long)param_1 + 0x5f83) = 0;
  param_1[0xbee] = (undefined1 *)((long)param_1 + 0x5f7c);
  param_1[0xbe9] = puVar8 + 0x10;
  param_1[0xbed] = puVar8 + 0x10;
  puVar8 = PTR_DAT_04bb2028;
  uVar7 = *param_4;
  param_1[0xbf9] = 0;
  param_1[0xbfa] = 0;
  param_1[0xbfb] = 0;
  param_1[0xbfc] = 0;
  *(undefined1 *)((long)param_1 + 0x5fa4) = 0;
  param_1[0xbf3] = (undefined1 *)((long)param_1 + 0x5fa4);
  *(undefined4 *)(param_1 + 0xbf4) = 0x20;
  *(undefined1 *)((long)param_1 + 0x5fc3) = 0;
  *(undefined4 *)(param_1 + 0xbf1) = uVar7;
  param_1[0xbfd] = 0;
  param_1[0xbfe] = 0;
  param_1[0xbf2] = puVar8 + 0x10;
  param_1[0xbff] = 0;
  param_1[0xc00] = 0;
  param_1[0xc01] = 0;
  param_1[0xc02] = 0;
  param_1[0xc03] = 0;
  param_1[0xc04] = 0;
  param_1[0xc05] = 0;
  param_1[0xc06] = 0;
  param_1[0xc07] = 0;
  param_1[0xc08] = 0;
  puVar9 = PTR_DAT_04bb2f80;
  *(undefined4 *)(param_1 + 0xc0c) = 0x3f800000;
  param_1[0xc09] = 0;
  uVar4 = *(undefined8 *)(puVar9 + 0x10);
  uVar5 = *(undefined8 *)(puVar9 + 0x18);
  param_1[0xc0a] = 0;
  *(undefined8 *)((long)param_1 + 0x6074) = uVar4;
  *(undefined8 *)((long)param_1 + 0x607c) = uVar5;
  uVar4 = *(undefined8 *)(puVar9 + 0x28);
  *(undefined8 *)((long)param_1 + 0x6084) = *(undefined8 *)(puVar9 + 0x20);
  *(undefined8 *)((long)param_1 + 0x608c) = uVar4;
  puVar8 = PTR_DAT_04bb2698;
  uVar4 = *(undefined8 *)(puVar9 + 8);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  *(undefined8 *)((long)param_1 + 0x6064) = *(undefined8 *)puVar9;
  *(undefined8 *)((long)param_1 + 0x606c) = uVar4;
  puVar9 = PTR_DAT_04bb3350;
  param_1[0xc0b] = 0;
  if (lVar11 == 0) {
    pvVar12 = malloc(0x208);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)(lVar10 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar12,1,0);
  param_1[0xc13] = pvVar12;
  lVar11 = *(long *)puVar8;
  if (lVar11 == 0) {
    pvVar12 = malloc(0x208);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)(lVar10 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar12,1,0);
  param_1[0xc14] = pvVar12;
  lVar11 = *(long *)puVar8;
  if (lVar11 == 0) {
    pvVar12 = malloc(0x208);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)(lVar10 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar12,1,0);
  param_1[0xc15] = pvVar12;
  lVar11 = *(long *)puVar8;
  if (lVar11 == 0) {
    pvVar12 = malloc(0x208);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)(lVar10 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar12,0,0);
  param_1[0xc16] = pvVar12;
  lVar11 = *(long *)puVar8;
  if (lVar11 == 0) {
    pvVar12 = malloc(0x208);
  }
  else {
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar3 = (undefined8 *)(lVar11 + 8);
    if (lVar10 != 0) {
      puVar3 = (undefined8 *)(lVar10 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar3 + 0x30))((long *)*puVar3,0x208,8);
  }
  FUN_0173198c(pvVar12,0,0);
  param_1[0xc17] = pvVar12;
  *(undefined4 *)(param_1 + 0xc18) = 0;
  *(undefined2 *)((long)param_1 + 0x60c4) = *param_5;
  *(undefined1 *)((long)param_1 + 0x60c6) = *(undefined1 *)(param_5 + 1);
  *(undefined1 *)((long)param_1 + 0x60c7) = *(undefined1 *)((long)param_5 + 3);
  *(undefined4 *)(param_1 + 0xc19) = *(undefined4 *)(param_5 + 2);
  *(undefined2 *)((long)param_1 + 0x60cc) = param_5[4];
  *(undefined1 *)((long)param_1 + 0x60ce) = *(undefined1 *)(param_5 + 5);
  *(undefined1 *)((long)param_1 + 0x60cf) = *(undefined1 *)((long)param_5 + 0xb);
  *(undefined4 *)(param_1 + 0xc1a) = *(undefined4 *)(param_5 + 6);
  *(undefined2 *)((long)param_1 + 0x60d4) = param_5[8];
  *(undefined1 *)((long)param_1 + 0x60d6) = *(undefined1 *)(param_5 + 9);
  *(undefined1 *)((long)param_1 + 0x60d7) = *(undefined1 *)((long)param_5 + 0x13);
  *(undefined4 *)(param_1 + 0xc1b) = *(undefined4 *)(param_5 + 10);
  *(undefined2 *)((long)param_1 + 0x60dc) = param_5[0xc];
  *(undefined1 *)((long)param_1 + 0x60de) = *(undefined1 *)(param_5 + 0xd);
  *(undefined1 *)((long)param_1 + 0x60df) = *(undefined1 *)((long)param_5 + 0x1b);
  *(undefined4 *)(param_1 + 0xc1c) = *(undefined4 *)(param_5 + 0xe);
  *(undefined2 *)((long)param_1 + 0x60e4) = param_5[0x10];
  *(undefined1 *)((long)param_1 + 0x60e6) = *(undefined1 *)(param_5 + 0x11);
  *(undefined1 *)((long)param_1 + 0x60e7) = *(undefined1 *)((long)param_5 + 0x23);
  *(undefined4 *)(param_1 + 0xc1d) = *(undefined4 *)(param_5 + 0x12);
  *(undefined2 *)((long)param_1 + 0x60ec) = param_5[0x14];
  *(undefined1 *)((long)param_1 + 0x60ee) = *(undefined1 *)(param_5 + 0x15);
  *(undefined1 *)((long)param_1 + 0x60ef) = *(undefined1 *)((long)param_5 + 0x2b);
  *(undefined4 *)(param_1 + 0xc1e) = *(undefined4 *)(param_5 + 0x16);
  *(undefined2 *)((long)param_1 + 0x60f4) = param_5[0x18];
  *(undefined1 *)((long)param_1 + 0x60f6) = *(undefined1 *)(param_5 + 0x19);
  *(undefined1 *)((long)param_1 + 0x60f7) = *(undefined1 *)((long)param_5 + 0x33);
  *(undefined4 *)(param_1 + 0xc1f) = *(undefined4 *)(param_5 + 0x1a);
  *(undefined8 *)((long)param_1 + 0x60fc) = 0;
  *(undefined8 *)((long)param_1 + 0x6104) = 0;
  *(undefined1 *)((long)param_1 + 0x611c) = 0;
  *(undefined8 *)((long)param_1 + 0x610c) = 0;
  *(undefined8 *)((long)param_1 + 0x6114) = 0;
  *(undefined4 *)(param_1 + 0xc18) = 0xffffffff;
  lVar11 = *(long *)PTR_DAT_04bb4138;
  if (lVar11 != 0) {
    (**(code **)(param_1[0xbe9] + 0x18))(plVar1);
    local_44 = FUN_006bd550(param_1[0xbea],0);
    FUN_0079e770(lVar11,&local_44);
  }
  pvVar12 = (void *)param_1[0xbee];
  (**(code **)(param_1[0xbe9] + 0x18))(plVar1);
  if (pvVar12 != (void *)param_1[0xbea]) {
    iVar2 = 3;
    if (*(int *)(param_1 + 0xbef) < 4) {
      iVar2 = *(int *)(param_1 + 0xbef) + -1;
    }
    memcpy(pvVar12,(void *)param_1[0xbea],(long)iVar2);
    *(undefined1 *)((long)pvVar12 + (long)iVar2) = 0;
  }
  *(uint *)((long)param_1 + 0x15f4) = *(uint *)((long)param_1 + 0x15f4) | 0x40;
  return;
}

