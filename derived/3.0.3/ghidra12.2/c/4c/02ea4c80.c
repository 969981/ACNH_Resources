
void FUN_02ea4c80(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  void *__dest;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  byte bVar6;
  long lVar7;
  undefined1 *puVar8;
  void *__src;
  undefined1 *puVar9;
  long *plVar10;
  undefined *local_80;
  undefined1 *local_78;
  int local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar2 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar2 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar6 = *(byte *)(param_3 + 0xe);
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar6;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  puVar2 = PTR_DAT_04bc9ca8;
  *(undefined4 *)(param_1 + 0x43) = 0;
  puVar1 = PTR_DAT_04bc9be0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x3e] = -1;
  *param_1 = (long)&PTR_LAB_04adbca8;
  param_1[0x46] = (long)(puVar2 + 0x10);
  param_1[0x4a] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4b,0,0x1bf30);
  lVar7 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar10 = param_1;
  do {
    FUN_03463544(plVar10 + 0x4b,0);
    *(undefined4 *)(plVar10 + 0x76) = 0x40;
    lVar7 = lVar7 + -1;
    plVar10[0x75] = (long)plVar10 + 0x3b4;
    *(undefined1 *)((long)plVar10 + 0x3f3) = 0;
    *(undefined1 *)((long)plVar10 + 0x3b4) = 0;
    plVar10[0x74] = (long)puVar1;
    *(undefined4 *)(plVar10 + 0x7f) = 0;
    plVar10 = plVar10 + 0x35;
  } while (lVar7 != 0);
  *(undefined4 *)(param_1 + 0x3833) = 0;
  *(undefined1 *)((long)param_1 + 0x1c1c4) = 0;
  *(undefined4 *)(param_1 + 0x3834) = 0;
  puVar2 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x3838) = 8;
  param_1[0x3837] = (long)param_1 + 0x1c1c4;
  puVar1 = PTR_DAT_04bb3768;
  *(undefined1 *)((long)param_1 + 0x1c1cb) = 0;
  *(undefined4 *)(param_1 + 0x383c) = 8;
  param_1[0x3831] = (long)(puVar2 + 0x10);
  param_1[0x3832] = -1;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)((long)param_1 + 0x1c1eb) = 0;
  *(undefined4 *)(param_1 + 0x3840) = 8;
  *(undefined1 *)((long)param_1 + 0x1c1e4) = 0;
  *(undefined1 *)((long)param_1 + 0x1c20b) = 0;
  *(undefined1 *)((long)param_1 + 0x1c204) = 0;
  *(undefined4 *)(param_1 + 0x3854) = 8;
  *(undefined1 *)((long)param_1 + 0x1c2ab) = 0;
  param_1[0x383a] = (long)puVar1;
  param_1[0x383b] = (long)param_1 + 0x1c1e4;
  param_1[0x383f] = (long)param_1 + 0x1c204;
  *(undefined1 *)((long)param_1 + 0x1c264) = 0;
  param_1[0x383e] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x3844) = 8;
  *(undefined1 *)((long)param_1 + 0x1c224) = 0;
  param_1[0x3843] = (long)param_1 + 0x1c224;
  *(undefined1 *)((long)param_1 + 0x1c22b) = 0;
  *(undefined1 *)((long)param_1 + 0x1c244) = 0;
  param_1[0x3847] = (long)param_1 + 0x1c244;
  param_1[0x384f] = (long)param_1 + 0x1c284;
  param_1[0x3842] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x3848) = 8;
  *(undefined1 *)((long)param_1 + 0x1c24b) = 0;
  param_1[0x3846] = (long)puVar1;
  param_1[0x384b] = (long)param_1 + 0x1c264;
  *(undefined4 *)(param_1 + 0x384c) = 8;
  *(undefined1 *)((long)param_1 + 0x1c26b) = 0;
  param_1[0x384a] = (long)puVar1;
  *(undefined4 *)(param_1 + 0x3850) = 8;
  *(undefined1 *)((long)param_1 + 0x1c28b) = 0;
  *(undefined1 *)((long)param_1 + 0x1c284) = 0;
  *(undefined1 *)((long)param_1 + 0x1c2a4) = 0;
  param_1[0x384e] = (long)puVar1;
  __dest = (void *)((long)param_1 + 0x1c2c4);
  param_1[0x3835] = -0x100000000;
  param_1[0x3836] = (long)puVar1;
  param_1[0x3852] = (long)puVar1;
  param_1[0x3853] = (long)param_1 + 0x1c2a4;
  puVar2 = PTR_DAT_04bb6a30 + 0x10;
  *(undefined4 *)(param_1 + 0x3858) = 8;
  puVar5 = PTR_PTR_04bb2238;
  *(undefined1 *)((long)param_1 + 0x1c2cb) = 0;
  param_1[0x3856] = (long)puVar2;
  param_1[0x3857] = (long)__dest;
  (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
  __src = *(void **)(puVar5 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar7) == '\0') goto LAB_02ea4f5c;
      lVar3 = *(long *)(puVar5 + 8) + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea4f5c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea4f5c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea4f5c:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x3858] <= (int)lVar7) {
      iVar4 = (int)param_1[0x3858] + -1;
    }
    memcpy(__dest,__src,(long)iVar4);
    *(undefined1 *)((long)__dest + (long)iVar4) = 0;
  }
  param_1[0x3856] = (long)puVar1;
  *(undefined2 *)(param_1 + 0x385e) = 0;
  local_65 = 0;
  local_70 = 8;
  local_80 = puVar2;
  local_78 = local_6c;
  (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
  puVar9 = *(undefined1 **)(puVar5 + 8);
  if (local_6c != puVar9) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar7) == '\0') goto LAB_02ea501c;
      lVar3 = *(long *)(puVar5 + 8) + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea501c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea501c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea501c:
    iVar4 = (int)lVar7;
    if (local_70 <= (int)lVar7) {
      iVar4 = local_70 + -1;
    }
    memcpy(local_6c,puVar9,(long)iVar4);
    local_6c[iVar4] = 0;
  }
  puVar9 = local_78;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  puVar8 = (undefined1 *)param_1[0x3837];
  local_78[(long)local_70 + -1] = 0;
  if (puVar8 != local_78) {
    (**(code **)(PTR_DAT_04bb3768 + 0x28))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_02ea50cc;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea50cc;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea50cc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea50cc:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x3838] <= (int)lVar7) {
      iVar4 = (int)param_1[0x3838] + -1;
    }
    memcpy(puVar8,puVar9,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  puVar8 = (undefined1 *)param_1[0x383b];
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar9 = local_78;
  if (puVar8 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_02ea516c;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea516c;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea516c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea516c:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x383c] <= (int)lVar7) {
      iVar4 = (int)param_1[0x383c] + -1;
    }
    memcpy(puVar8,puVar9,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  puVar8 = (undefined1 *)param_1[0x383f];
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar9 = local_78;
  if (puVar8 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_02ea520c;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea520c;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea520c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea520c:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x3840] <= (int)lVar7) {
      iVar4 = (int)param_1[0x3840] + -1;
    }
    memcpy(puVar8,puVar9,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  puVar8 = (undefined1 *)param_1[0x3843];
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar9 = local_78;
  if (puVar8 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_02ea52ac;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea52ac;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea52ac;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea52ac:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x3844] <= (int)lVar7) {
      iVar4 = (int)param_1[0x3844] + -1;
    }
    memcpy(puVar8,puVar9,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  puVar8 = (undefined1 *)param_1[0x3847];
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar9 = local_78;
  if (puVar8 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_02ea534c;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea534c;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea534c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea534c:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x3848] <= (int)lVar7) {
      iVar4 = (int)param_1[0x3848] + -1;
    }
    memcpy(puVar8,puVar9,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  puVar8 = (undefined1 *)param_1[0x384b];
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar9 = local_78;
  if (puVar8 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_02ea53ec;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea53ec;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea53ec;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea53ec:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x384c] <= (int)lVar7) {
      iVar4 = (int)param_1[0x384c] + -1;
    }
    memcpy(puVar8,puVar9,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  puVar8 = (undefined1 *)param_1[0x384f];
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar9 = local_78;
  if (puVar8 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_02ea548c;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea548c;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea548c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea548c:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x3850] <= (int)lVar7) {
      iVar4 = (int)param_1[0x3850] + -1;
    }
    memcpy(puVar8,puVar9,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  puVar8 = (undefined1 *)param_1[0x3853];
  (**(code **)(local_80 + 0x18))(&local_80);
  puVar9 = local_78;
  if (puVar8 != local_78) {
    (**(code **)(local_80 + 0x18))(&local_80);
    lVar7 = 0;
    do {
      if (local_78[lVar7] == '\0') goto LAB_02ea552c;
      if (local_78[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02ea552c;
      }
      if (local_78[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02ea552c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02ea552c:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x3854] <= (int)lVar7) {
      iVar4 = (int)param_1[0x3854] + -1;
    }
    memcpy(puVar8,puVar9,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  param_1[0x385c] = -1;
  param_1[0x385d] = -1;
  param_1[0x385a] = -1;
  param_1[0x385b] = -1;
  return;
}

