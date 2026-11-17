
void FUN_02bb3090(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  byte bVar4;
  void *pvVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 *__dest;
  long lVar11;
  void *__src;
  undefined1 *puVar12;
  undefined *puVar13;
  long *plVar14;
  undefined *local_c0;
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_ac [7];
  undefined1 local_a5;
  undefined *local_a0;
  undefined2 local_98;
  undefined8 local_94;
  undefined1 local_8c;
  undefined *local_88;
  undefined1 *puStack_80;
  int local_78;
  undefined1 auStack_74 [7];
  undefined1 local_6d;
  undefined1 local_68;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar13 = PTR_DAT_04bd4738;
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
  param_1[0x35] = (long)(puVar13 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar4 = *(byte *)(param_3 + 0xe);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar4;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x44] = 0;
  *param_1 = (long)&PTR_LAB_04aa7388;
  param_1[0x43] = (long)"Player";
  puVar1 = PTR_DAT_04bb2020;
  *(undefined4 *)(param_1 + 0x45) = 0;
  param_1[0x46] = 0;
  param_1[0x42] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bc9ca8;
  param_1[0x3e] = -1;
  param_1[0x48] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bc9be0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  param_1[0x4c] = (long)(puVar1 + 0x10);
  memset(param_1 + 0x4d,0,0x1bf30);
  lVar11 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar14 = param_1;
  do {
    FUN_03463544(plVar14 + 0x4d,0);
    *(undefined4 *)(plVar14 + 0x78) = 0x40;
    lVar11 = lVar11 + -1;
    plVar14[0x77] = (long)plVar14 + 0x3c4;
    *(undefined1 *)((long)plVar14 + 0x403) = 0;
    *(undefined1 *)((long)plVar14 + 0x3c4) = 0;
    plVar14[0x76] = (long)puVar1;
    *(undefined4 *)(plVar14 + 0x81) = 0;
    puVar13 = PTR_DAT_04bc8e10;
    plVar14 = plVar14 + 0x35;
  } while (lVar11 != 0);
  *(undefined4 *)(param_1 + 0x3835) = 0;
  *(undefined4 *)(param_1 + 0x3836) = 0;
  *(undefined4 *)(param_1 + 0x3839) = 0;
  param_1[0x3837] = -0x100000000;
  param_1[0x3838] = 0;
  param_1[0x383a] = 0;
  lVar11 = 500;
  *(undefined4 *)(param_1 + 0x3840) = 0;
  param_1[0x3841] = 0;
  param_1[0x3833] = (long)(puVar13 + 0x10);
  param_1[0x3834] = -1;
  puVar13 = PTR_DAT_04bb3768;
  puVar12 = (undefined1 *)((long)param_1 + 0x1c2db);
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  *(undefined2 *)((long)param_1 + 0x1c29c) = 0;
  do {
    *(undefined4 *)(puVar12 + -0x2b) = 8;
    lVar11 = lVar11 + -2;
    puVar12[-0x27] = 0;
    *(undefined1 **)(puVar12 + -0x33) = puVar12 + -0x27;
    puVar12[-0x20] = 0;
    puVar12[-7] = 0;
    *(undefined **)(puVar12 + -0x3b) = puVar1;
    *(undefined1 **)(puVar12 + -0x13) = puVar12 + -7;
    *(undefined4 *)(puVar12 + -0xb) = 8;
    *puVar12 = 0;
    *(undefined **)(puVar12 + -0x1b) = puVar1;
    puVar12 = puVar12 + 0x40;
  } while (lVar11 != 0);
  *(undefined1 *)((long)param_1 + 0x2013b) = 0;
  pvVar5 = (void *)((long)param_1 + 0x20134);
  *(undefined4 *)(param_1 + 0x4026) = 8;
  puVar1 = PTR_PTR_04bb2238;
  param_1[0x4024] = (long)(PTR_DAT_04bb6a30 + 0x10);
  param_1[0x4025] = (long)pvVar5;
  (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
  __src = *(void **)(puVar1 + 8);
  if (pvVar5 != __src) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar11) == '\0') goto LAB_02bb3340;
      lVar7 = *(long *)(puVar1 + 8) + lVar11;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02bb3340;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02bb3340;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02bb3340:
    iVar3 = (int)lVar11;
    if ((int)param_1[0x4026] <= (int)lVar11) {
      iVar3 = (int)param_1[0x4026] + -1;
    }
    memcpy(pvVar5,__src,(long)iVar3);
    *(undefined1 *)((long)pvVar5 + (long)iVar3) = 0;
    puVar13 = PTR_DAT_04bb3768;
  }
  param_1[0x4024] = (long)(puVar13 + 0x10);
  *(undefined2 *)(param_1 + 0x4028) = 0x800;
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar11 = 0;
    if (cRam0000000000000078 == '\0') goto LAB_02bb33c4;
LAB_02bb339c:
    bVar4 = (**(code **)(*(long *)(lVar11 + 0x70) + 0x18))((long *)(lVar11 + 0x70));
    *(undefined1 *)(lVar11 + 0x78) = 0;
  }
  else {
    lVar11 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    if (*(char *)(lVar11 + 0x78) != '\0') goto LAB_02bb339c;
LAB_02bb33c4:
    bVar4 = 1;
  }
  local_78 = 8;
  plVar14 = (long *)(lVar11 + 0x88);
  *(byte *)(lVar11 + 0x79) = bVar4 & 1;
  local_94 = *(undefined8 *)(lVar11 + 0x7c);
  local_98 = *(undefined2 *)(lVar11 + 0x78);
  local_a0 = PTR_DAT_04bb7400 + 0x10;
  local_6d = 0;
  local_8c = *(undefined1 *)(lVar11 + 0x84);
  local_88 = PTR_DAT_04bb6a30 + 0x10;
  puStack_80 = auStack_74;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  puVar12 = *(undefined1 **)(lVar11 + 0x90);
  if (auStack_74 != puVar12) {
    (**(code **)(*(long *)(lVar11 + 0x88) + 0x18))(plVar14);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(lVar11 + 0x90) + lVar7) == '\0') goto LAB_02bb3490;
      lVar2 = *(long *)(lVar11 + 0x90) + lVar7;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_02bb3490;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_02bb3490;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_02bb3490:
    iVar3 = (int)lVar7;
    if (local_78 <= (int)lVar7) {
      iVar3 = local_78 + -1;
    }
    memcpy(auStack_74,puVar12,(long)iVar3);
    auStack_74[iVar3] = 0;
  }
  puVar13 = PTR_DAT_04bb3768;
  local_88 = PTR_DAT_04bb3768 + 0x10;
  local_68 = *(undefined1 *)(lVar11 + 0xa8);
  *(undefined4 *)(param_1 + 0x3838) = (undefined4)local_94;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar5 = malloc(0x20);
    if (pvVar5 == (void *)0x0) goto LAB_02bb3548;
LAB_02bb352c:
    uVar6 = 8;
    param_1[0x383a] = (long)pvVar5;
    *(undefined4 *)(param_1 + 0x3839) = 8;
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar14 = (long *)(lVar11 + 8);
    if (lVar7 != 0) {
      plVar14 = (long *)(lVar7 + 0xa8);
    }
    plVar14 = (long *)*plVar14;
    if ((plVar14 != (long *)0x0) &&
       (pvVar5 = (void *)(**(code **)(*plVar14 + 0x30))(plVar14,0x20,8), pvVar5 != (void *)0x0))
    goto LAB_02bb352c;
LAB_02bb3548:
    uVar6 = *(uint *)(param_1 + 0x3839);
    if ((int)uVar6 < 1) goto LAB_02bb35d8;
  }
  uVar10 = (ulong)uVar6;
  uVar8 = uVar10 & 3;
  if (uVar10 - 1 < 3) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0;
    do {
      lVar11 = uVar9 * 4;
      uVar9 = uVar9 + 4;
      *(undefined4 *)(param_1[0x383a] + lVar11) = 0xffffffff;
      *(undefined4 *)(param_1[0x383a] + lVar11 + 4) = 0xffffffff;
      *(undefined4 *)(param_1[0x383a] + lVar11 + 8) = 0xffffffff;
      *(undefined4 *)(param_1[0x383a] + lVar11 + 0xc) = 0xffffffff;
    } while ((uVar10 & 0xfffffffc) != uVar9);
  }
  if ((uVar6 & 3) != 0) {
    lVar11 = uVar9 << 2;
    do {
      uVar8 = uVar8 - 1;
      *(undefined4 *)(param_1[0x383a] + lVar11) = 0xffffffff;
      lVar11 = lVar11 + 4;
    } while (uVar8 != 0);
  }
LAB_02bb35d8:
  local_a5 = 0;
  param_1[0x383b] = -1;
  param_1[0x383e] = -1;
  param_1[0x383f] = -1;
  param_1[0x3852] = 0;
  *(undefined4 *)(param_1 + 0x3853) = 0;
  param_1[0x383c] = -1;
  param_1[0x383d] = -1;
  local_b0 = 8;
  param_1[0x3842] = 0;
  param_1[0x3843] = 0;
  param_1[0x3844] = 0;
  param_1[0x3845] = 0;
  param_1[0x3846] = 0;
  param_1[0x3847] = 0;
  param_1[0x3848] = 0;
  param_1[0x3849] = 0;
  param_1[0x384a] = 0;
  param_1[0x384b] = 0;
  param_1[0x384c] = 0;
  param_1[0x384d] = 0;
  param_1[0x384e] = 0;
  param_1[0x384f] = 0;
  param_1[0x3850] = 0;
  param_1[0x3851] = 0;
  local_c0 = PTR_DAT_04bb6a30 + 0x10;
  local_b8 = local_ac;
  (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
  puVar12 = *(undefined1 **)(puVar1 + 8);
  if (local_ac != puVar12) {
    (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar1 + 8) + lVar11) == '\0') goto LAB_02bb36bc;
      lVar7 = *(long *)(puVar1 + 8) + lVar11;
      if (*(char *)(lVar7 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_02bb36bc;
      }
      if (*(char *)(lVar7 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_02bb36bc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_02bb36bc:
    iVar3 = (int)lVar11;
    if (local_b0 <= (int)lVar11) {
      iVar3 = local_b0 + -1;
    }
    memcpy(local_ac,puVar12,(long)iVar3);
    local_ac[iVar3] = 0;
  }
  lVar11 = 0;
  local_c0 = puVar13 + 0x10;
  do {
    __dest = (undefined1 *)param_1[lVar11 * 4 + 0x3855];
    (**(code **)(local_c0 + 0x18))(&local_c0);
    puVar12 = local_b8;
    if (__dest != local_b8) {
      (**(code **)(local_c0 + 0x18))(&local_c0);
      lVar7 = 0;
      do {
        if (local_b8[lVar7] == '\0') goto LAB_02bb36f8;
        if (local_b8[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_02bb36f8;
        }
        if (local_b8[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_02bb36f8;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_02bb36f8:
      iVar3 = (int)lVar7;
      if ((int)param_1[lVar11 * 4 + 0x3856] <= (int)lVar7) {
        iVar3 = (int)param_1[lVar11 * 4 + 0x3856] + -1;
      }
      memcpy(__dest,puVar12,(long)iVar3);
      __dest[iVar3] = 0;
    }
    lVar11 = lVar11 + 1;
    if (lVar11 == 500) {
      return;
    }
  } while( true );
}

