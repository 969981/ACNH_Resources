
void FUN_0311c5e0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  long lVar8;
  void *pvVar9;
  long lVar10;
  void *pvVar11;
  
  FUN_03c5cce8(param_1,param_2,0);
  puVar1 = PTR_DAT_04bd45f0;
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == 0) {
    bVar7 = false;
  }
  else {
    bVar7 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar7;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar9 = malloc(0x18);
  }
  else {
    lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar4 = (undefined8 *)(lVar10 + 8);
    if (lVar8 != 0) {
      puVar4 = (undefined8 *)(lVar8 + 0xa8);
    }
    pvVar9 = (void *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x18,8);
  }
  *(undefined4 *)((long)pvVar9 + 0x10) = 0;
  *(void **)pvVar9 = pvVar9;
  *(void **)((long)pvVar9 + 8) = pvVar9;
  param_1[0x3b] = (long)pvVar9;
  *(undefined4 *)((long)pvVar9 + 0x14) = 8;
  param_1[0x40] = 0;
  *param_1 = (long)&PTR_FUN_04b01d18;
  *(undefined4 *)(param_1 + 0x41) = 0;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x43) = 0;
  param_1[0x44] = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  memset(param_1 + 0x48,0,0xdd8);
  pvVar9 = (void *)((long)param_1 + 0x274);
  param_1[0x4a] = (long)&PTR_FUN_04b01e20;
  param_1[0x4d] = (long)pvVar9;
  *(undefined4 *)(param_1 + 0x4e) = 0x40;
  puVar5 = PTR_PTR_04bb2238;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  lVar10 = *(long *)PTR_PTR_04bb2238;
  param_1[0x4c] = (long)puVar1;
  (**(code **)(lVar10 + 0x18))(puVar5);
  pvVar11 = *(void **)(puVar5 + 8);
  if (pvVar9 != pvVar11) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar10) == '\0') goto LAB_0311c7a0;
      lVar8 = *(long *)(puVar5 + 8) + lVar10;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0311c7a0;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0311c7a0;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0311c7a0:
    iVar3 = (int)lVar10;
    if ((int)param_1[0x4e] <= (int)lVar10) {
      iVar3 = (int)param_1[0x4e] + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  puVar6 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x57) = 0xffffffff;
  param_1[0x4c] = (long)(puVar6 + 0x10);
  FUN_03463544(param_1 + 0x58,0);
  puVar2 = PTR_DAT_04bc8e10;
  param_1[0x82] = -1;
  param_1[0x86] = -1;
  *(undefined4 *)(param_1 + 0x83) = 0;
  pvVar9 = (void *)((long)param_1 + 0x46c);
  param_1[0x89] = (long)&PTR_FUN_04b01e20;
  lVar10 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x84) = 0;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x87) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x81] = (long)puVar2;
  param_1[0x85] = (long)puVar2;
  param_1[0x8a] = 0;
  param_1[0x8c] = (long)pvVar9;
  *(undefined4 *)(param_1 + 0x8d) = 0x40;
  *(undefined1 *)((long)param_1 + 0x4ab) = 0;
  param_1[0x8b] = (long)puVar1;
  (**(code **)(lVar10 + 0x18))(puVar5);
  pvVar11 = *(void **)(puVar5 + 8);
  if (pvVar9 != pvVar11) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar10) == '\0') goto LAB_0311c8b0;
      lVar8 = *(long *)(puVar5 + 8) + lVar10;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0311c8b0;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0311c8b0;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0311c8b0:
    iVar3 = (int)lVar10;
    if ((int)param_1[0x8d] <= (int)lVar10) {
      iVar3 = (int)param_1[0x8d] + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  param_1[0x8b] = (long)(puVar6 + 0x10);
  *(undefined4 *)(param_1 + 0x96) = 0xffffffff;
  FUN_03463544(param_1 + 0x97,0);
  param_1[0xc0] = (long)puVar2;
  param_1[0xc1] = -1;
  param_1[0xc5] = -1;
  pvVar9 = (void *)((long)param_1 + 0x664);
  param_1[200] = (long)&PTR_FUN_04b01e20;
  *(undefined4 *)(param_1 + 0xc2) = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  param_1[0xc4] = (long)puVar2;
  *(undefined4 *)(param_1 + 0xc6) = 0;
  *(undefined4 *)(param_1 + 199) = 0;
  param_1[0xc9] = 0;
  param_1[0xcb] = (long)pvVar9;
  *(undefined4 *)(param_1 + 0xcc) = 0x40;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  lVar10 = *(long *)puVar5;
  *(undefined1 *)((long)param_1 + 0x6a3) = 0;
  param_1[0xca] = (long)puVar1;
  (**(code **)(lVar10 + 0x18))(puVar5);
  pvVar11 = *(void **)(puVar5 + 8);
  if (pvVar9 != pvVar11) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar10) == '\0') goto LAB_0311c9bc;
      lVar8 = *(long *)(puVar5 + 8) + lVar10;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0311c9bc;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0311c9bc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0311c9bc:
    iVar3 = (int)lVar10;
    if ((int)param_1[0xcc] <= (int)lVar10) {
      iVar3 = (int)param_1[0xcc] + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  puVar6 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0xd5) = 0xffffffff;
  param_1[0xca] = (long)(puVar6 + 0x10);
  FUN_03463544(param_1 + 0xd6,0);
  param_1[0x100] = -1;
  puVar2 = PTR_DAT_04bc8e10;
  param_1[0x104] = -1;
  pvVar9 = (void *)((long)param_1 + 0x85c);
  param_1[0x107] = (long)&PTR_FUN_04b01e20;
  lVar10 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0x102) = 0;
  *(undefined4 *)(param_1 + 0x105) = 0;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x108] = 0;
  param_1[0x10a] = (long)pvVar9;
  *(undefined4 *)(param_1 + 0x10b) = 0x40;
  param_1[0xff] = (long)puVar2;
  param_1[0x103] = (long)puVar2;
  *(undefined1 *)((long)param_1 + 0x89b) = 0;
  param_1[0x109] = (long)puVar1;
  (**(code **)(lVar10 + 0x18))(puVar5);
  pvVar11 = *(void **)(puVar5 + 8);
  if (pvVar9 != pvVar11) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar10) == '\0') goto LAB_0311cacc;
      lVar8 = *(long *)(puVar5 + 8) + lVar10;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0311cacc;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0311cacc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0311cacc:
    iVar3 = (int)lVar10;
    if ((int)param_1[0x10b] <= (int)lVar10) {
      iVar3 = (int)param_1[0x10b] + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  param_1[0x109] = (long)(puVar6 + 0x10);
  *(undefined4 *)(param_1 + 0x114) = 0xffffffff;
  FUN_03463544(param_1 + 0x115,0);
  param_1[0x13e] = (long)puVar2;
  param_1[0x13f] = -1;
  param_1[0x143] = -1;
  pvVar9 = (void *)((long)param_1 + 0xa54);
  param_1[0x146] = (long)&PTR_FUN_04b01e20;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x141) = 0;
  param_1[0x142] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x145) = 0;
  param_1[0x147] = 0;
  param_1[0x149] = (long)pvVar9;
  *(undefined4 *)(param_1 + 0x14a) = 0x40;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  lVar10 = *(long *)puVar5;
  *(undefined1 *)((long)param_1 + 0xa93) = 0;
  param_1[0x148] = (long)puVar1;
  (**(code **)(lVar10 + 0x18))(puVar5);
  pvVar11 = *(void **)(puVar5 + 8);
  if (pvVar9 != pvVar11) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar10) == '\0') goto LAB_0311cbdc;
      lVar8 = *(long *)(puVar5 + 8) + lVar10;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0311cbdc;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0311cbdc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0311cbdc:
    iVar3 = (int)lVar10;
    if ((int)param_1[0x14a] <= (int)lVar10) {
      iVar3 = (int)param_1[0x14a] + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  puVar6 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x153) = 0xffffffff;
  param_1[0x148] = (long)(puVar6 + 0x10);
  FUN_03463544(param_1 + 0x154,0);
  param_1[0x17e] = -1;
  puVar2 = PTR_DAT_04bc8e10;
  param_1[0x182] = -1;
  pvVar9 = (void *)((long)param_1 + 0xc4c);
  param_1[0x185] = (long)&PTR_FUN_04b01e20;
  lVar10 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x17f) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x183) = 0;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x184) = 0;
  param_1[0x186] = 0;
  param_1[0x188] = (long)pvVar9;
  *(undefined4 *)(param_1 + 0x189) = 0x40;
  param_1[0x17d] = (long)puVar2;
  param_1[0x181] = (long)puVar2;
  *(undefined1 *)((long)param_1 + 0xc8b) = 0;
  param_1[0x187] = (long)puVar1;
  (**(code **)(lVar10 + 0x18))(puVar5);
  pvVar11 = *(void **)(puVar5 + 8);
  if (pvVar9 != pvVar11) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar10) == '\0') goto LAB_0311ccec;
      lVar8 = *(long *)(puVar5 + 8) + lVar10;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0311ccec;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0311ccec;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0311ccec:
    iVar3 = (int)lVar10;
    if ((int)param_1[0x189] <= (int)lVar10) {
      iVar3 = (int)param_1[0x189] + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  param_1[0x187] = (long)(puVar6 + 0x10);
  *(undefined4 *)(param_1 + 0x192) = 0xffffffff;
  FUN_03463544(param_1 + 0x193,0);
  param_1[0x1bc] = (long)puVar2;
  param_1[0x1bd] = -1;
  param_1[0x1c1] = -1;
  *(undefined4 *)(param_1 + 0x1be) = 0;
  pvVar9 = (void *)((long)param_1 + 0xe44);
  param_1[0x1c4] = (long)&PTR_FUN_04b01e20;
  *(undefined4 *)(param_1 + 0x1bf) = 0;
  param_1[0x1c0] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x1c2) = 0;
  *(undefined4 *)(param_1 + 0x1c3) = 0;
  param_1[0x1c5] = 0;
  param_1[0x1c7] = (long)pvVar9;
  *(undefined4 *)(param_1 + 0x1c8) = 0x40;
  lVar10 = *(long *)puVar5;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  *(undefined1 *)((long)param_1 + 0xe83) = 0;
  param_1[0x1c6] = (long)puVar1;
  (**(code **)(lVar10 + 0x18))(puVar5);
  pvVar11 = *(void **)(puVar5 + 8);
  if (pvVar9 != pvVar11) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar10 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar10) == '\0') goto LAB_0311cdfc;
      lVar8 = *(long *)(puVar5 + 8) + lVar10;
      if (*(char *)(lVar8 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_0311cdfc;
      }
      if (*(char *)(lVar8 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_0311cdfc;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_0311cdfc:
    iVar3 = (int)lVar10;
    if ((int)param_1[0x1c8] <= (int)lVar10) {
      iVar3 = (int)param_1[0x1c8] + -1;
    }
    memcpy(pvVar9,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar9 + (long)iVar3) = 0;
  }
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0x1d1) = 0xffffffff;
  param_1[0x1c6] = (long)(puVar1 + 0x10);
  FUN_03463544(param_1 + 0x1d2,0);
  param_1[0x1fc] = -1;
  puVar1 = PTR_DAT_04bc8e10;
  *(undefined4 *)(param_1 + 0x1fd) = 0;
  *(undefined4 *)(param_1 + 0x1fe) = 0;
  param_1[0x200] = -1;
  *(undefined4 *)(param_1 + 0x201) = 0;
  *(undefined4 *)(param_1 + 0x202) = 0;
  param_1[0x207] = 0;
  param_1[0x1fb] = (long)(puVar1 + 0x10);
  param_1[0x1ff] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bc6260 + 0x10;
  *(undefined8 *)((long)param_1 + 0x1064) = 0;
  *(undefined8 *)((long)param_1 + 0x106c) = 0;
  *(undefined8 *)((long)param_1 + 0x1071) = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x107c) = 8;
  param_1[0x206] = 0;
  param_1[0x205] = 0;
  param_1[0x204] = 0;
  param_1[0x203] = 0;
  param_1[0x208] = (long)puVar1;
  return;
}

