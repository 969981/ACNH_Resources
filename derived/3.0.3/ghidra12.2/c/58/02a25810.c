
void FUN_02a25810(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  void *pvVar14;
  long *plVar15;
  long *plVar16;
  undefined8 *puVar17;
  uint uVar18;
  undefined8 uVar19;
  long lVar20;
  long *plVar21;
  int *piVar22;
  ushort *puVar23;
  char cVar24;
  undefined1 uVar25;
  short sVar26;
  uint uVar27;
  long *plVar28;
  uint *puVar29;
  ulong uVar30;
  char cVar31;
  ulong uVar32;
  uint *puVar33;
  undefined8 *puVar34;
  uint *puVar35;
  undefined4 *puVar36;
  undefined **ppuVar37;
  undefined2 uVar38;
  AudioDeviceName *pAVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  uint uVar42;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined *local_128;
  undefined8 uStack_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined **local_100;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  undefined *local_e8;
  char *local_e0;
  undefined *puStack_d8;
  char *local_d0;
  undefined *puStack_c8;
  char *local_c0;
  long lStack_b8;
  undefined1 local_75;
  undefined4 local_70;
  
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  uVar19 = *(undefined8 *)(lVar11 + 0xa8);
  *(undefined8 *)(lVar11 + 0xa8) = 0;
  puVar1 = PTR_DAT_04bc3ee8;
  lVar11 = *(long *)PTR_DAT_04bc3ee8;
  if (lVar11 == 0) {
    puVar36 = (undefined4 *)0x0;
  }
  else {
    puVar36 = *(undefined4 **)(lVar11 + 0x10);
  }
  *(undefined8 *)(puVar36 + 8) = 0x42c8000041200000;
  puVar36[5] = 0x41f00000;
  puVar36[0xb] = ((float)puVar36[10] * 10.0) / 30.0;
  puVar36[7] = (float)puVar36[6] / 30.0;
  *(undefined1 *)(lVar11 + 0xc2) = 1;
  *PTR_DAT_04bc43e0 = 1;
  local_108._0_4_ = 0;
  *PTR_DAT_04bc43e8 = 1;
  FUN_03b41cfc(0,puVar36,*puVar36,0);
  puVar2 = PTR_DAT_04bd1e70;
  if (DAT_05aebc00 == '\0') {
    nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb720,1.0);
  }
  else {
    local_108._0_4_ = 0;
    pAVar39 = *(AudioDeviceName **)(*(long *)PTR_DAT_04bd1e70 + 0x160);
    nn::audio::SetAudioDeviceOutputVolume(pAVar39,1.0);
    *(undefined4 *)(pAVar39 + (long)(int)local_108 * 4 + 0x300) = 0x3f800000;
  }
  puVar36[0xf] = 0x3f800000;
  if (DAT_05aebc00 == '\0') {
    nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb920,1.0);
  }
  else {
    lVar11 = *(long *)(*(long *)puVar2 + 0x160);
    local_108._0_4_ = 1;
    nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)(lVar11 + 0x100),1.0);
    *(undefined4 *)(lVar11 + (long)(int)local_108 * 4 + 0x300) = 0x3f800000;
  }
  plVar16 = (long *)(param_1 + 0x19f8a0);
  puVar36[0x10] = 0x3f800000;
  if (DAT_05aebc00 == '\0') {
    nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)&DAT_05aeb820,1.0);
  }
  else {
    lVar11 = *(long *)(*(long *)puVar2 + 0x160);
    local_108._0_4_ = 2;
    nn::audio::SetAudioDeviceOutputVolume((AudioDeviceName *)(lVar11 + 0x200),1.0);
    *(undefined4 *)(lVar11 + (long)(int)local_108 * 4 + 0x300) = 0x3f800000;
  }
  puVar36[0x11] = 0x3f800000;
  FUN_03ba4850(*(undefined8 *)(*(long *)puVar1 + 0x18),*(undefined8 *)(param_1 + 0xb38a8));
  local_108 = (long *)((ulong)local_108._4_4_ << 0x20);
  *(undefined8 *)(param_1 + 0x19df14) = 0x4000000015555560;
  *(undefined8 *)(param_1 + 0x19df1c) = 0x2aaaaaa000000000;
  *(undefined4 *)(param_1 + 0x19df2c) = 0xeaaaaaa0;
  *(undefined8 *)(param_1 + 0x19df24) = 0xd5555540aaaaaaa0;
  lVar20 = *(long *)puVar1;
  *(undefined8 *)(param_1 + 0x19df30) = *(undefined8 *)(lVar20 + 0x38);
  lVar11 = *(long *)(*(long *)(lVar20 + 0x10) + 8);
  if (lVar11 == 0) {
LAB_02a25afc:
    lVar11 = *(long *)(lVar20 + 0x38);
    if (lVar11 != 0) {
      if (*(long *)(lVar11 + 0x38) != 0) {
        FUN_03bc7ff0();
      }
      FUN_03bc7350(lVar11);
    }
  }
  else {
    plVar28 = *(long **)(*(long *)(lVar11 + 0x18) + 0x10);
    if ((plVar28 != (long *)0x0) && (0 < *(int *)(*(long *)(lVar11 + 0x18) + 8))) {
      *plVar28 = param_1 + 0x19def0;
    }
    plVar28 = *(long **)(*(long *)(lVar11 + 0x10) + 0x10);
    if ((plVar28 != (long *)0x0) && (0 < *(int *)(*(long *)(lVar11 + 0x10) + 8))) {
      *plVar28 = param_1 + 0x19def0;
    }
    FUN_03bac100(0x40800000);
    lVar20 = *(long *)puVar1;
    if (lVar20 != 0) goto LAB_02a25afc;
  }
  (**(code **)(*(long *)(param_1 + 0x19f910) + 0x20))((long *)(param_1 + 0x19f910),&local_108);
  FUN_03845170(param_1);
  *(long *)(*(long *)PTR_DAT_04bb49b0 + 0x9b0) = param_1;
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x1d8);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a25bbc;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x1d8,8);
  }
LAB_02a25bbc:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  plVar28[2] = (long)puVar17;
  *plVar28 = (long)(puVar1 + 0x10);
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar8 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar8;
  *plVar28 = (long)&PTR_LAB_04a99d28;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a99d80;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a99da8;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  plVar28[0x37] = 0;
  puVar2 = PTR_DAT_04bb2bc0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bc4178;
  plVar28[0x3a] = 0;
  *puVar2 = 1;
  puVar2 = PTR_DAT_04bc4180;
  uVar41 = s_invalid_name_040e8f53._0_8_;
  local_f8._0_4_ = 0x80;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)(PTR_DAT_04bc4180 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  uVar8 = s_invalid_name_040e8f53._8_4_;
  uVar40 = *(undefined8 *)(param_1 + 0xb38a8);
  local_100 = (undefined **)(local_f8 + 4);
  local_f8._4_4_ = SUB84(uVar41,0);
  uVar4 = local_f8._4_4_;
  uStack_f0._0_4_ = SUB84(uVar41,4);
  uVar5 = (undefined4)uStack_f0;
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  local_108 = (long *)puVar1;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar40);
  }
  plVar21 = (long *)(param_1 + 0x19f800);
  *(long **)(param_1 + 0x19f790) = plVar28;
  iVar10 = (int)plVar28[0x38];
  if (iVar10 < 1) {
    if ((plVar28[0x16] != 0) && (piVar22 = *(int **)(plVar28[0x16] + 8), piVar22 != (int *)0x0)) {
      iVar10 = *piVar22;
      goto LAB_02a25d78;
    }
    uVar42 = 2;
LAB_02a25da4:
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar14 = malloc((long)(int)(uVar42 * 0x30));
    }
    else {
      plVar13 = *(long **)(param_1 + 0xb38a8);
      if (plVar13 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar11 + 8);
        if (lVar20 != 0) {
          plVar13 = (long *)(lVar20 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_02a25e8c;
      }
      pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,(long)(int)(uVar42 * 0x30),8);
    }
    if (pvVar14 != (void *)0x0) {
      uVar18 = uVar42 - 1;
      *(uint *)(param_1 + 0x19f81c) = uVar42;
      *(void **)(param_1 + 0x19f808) = pvVar14;
      if (1 < uVar42) {
        if (uVar18 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          plVar13 = (long *)((long)pvVar14 + 0x30);
          do {
            uVar12 = uVar12 + 2;
            plVar13[-6] = (long)plVar13;
            *plVar13 = (long)(plVar13 + 6);
            plVar13 = plVar13 + 0xc;
          } while (((ulong)uVar18 & 0xfffffffe) != uVar12);
        }
        if ((uVar18 & 1) != 0) {
          plVar13 = (long *)((long)pvVar14 + uVar12 * 0x30);
          *plVar13 = (long)(plVar13 + 6);
        }
      }
      *(undefined8 *)((long)pvVar14 + (long)(int)(uVar18 * 6) * 8) = 0;
      *(void **)(param_1 + 0x19f810) = pvVar14;
    }
  }
  else {
LAB_02a25d78:
    uVar42 = iVar10 + 2;
    if (0 < (int)uVar42) goto LAB_02a25da4;
  }
LAB_02a25e8c:
  uVar42 = *(uint *)(plVar28 + 0x38);
  if ((int)uVar42 < 1) {
    if ((plVar28[0x16] != 0) && (puVar35 = *(uint **)(plVar28[0x16] + 8), puVar35 != (uint *)0x0)) {
      uVar42 = *puVar35;
      goto LAB_02a25e98;
    }
    uVar42 = 0;
    uVar18 = 1;
  }
  else {
LAB_02a25e98:
    if (0x7ffffffe < uVar42) goto LAB_02a25fbc;
    uVar18 = uVar42 + 1;
  }
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar14 = malloc((long)(int)(uVar18 * 0x50));
  }
  else {
    plVar13 = *(long **)(param_1 + 0xb38a8);
    if (plVar13 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar13 = (long *)(lVar20 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
      if (plVar13 == (long *)0x0) goto LAB_02a25fbc;
    }
    pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,(long)(int)(uVar18 * 0x50),8);
  }
  if (pvVar14 != (void *)0x0) {
    *(uint *)(param_1 + 0x19f83c) = uVar18;
    *(void **)(param_1 + 0x19f828) = pvVar14;
    if (1 < uVar18) {
      if (uVar42 == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0;
        plVar13 = (long *)((long)pvVar14 + 0x50);
        do {
          uVar12 = uVar12 + 2;
          plVar13[-10] = (long)plVar13;
          *plVar13 = (long)(plVar13 + 10);
          plVar13 = plVar13 + 0x14;
        } while (((ulong)uVar42 & 0x7ffffffe) != uVar12);
      }
      if ((uVar42 & 1) != 0) {
        plVar13 = (long *)((long)pvVar14 + uVar12 * 0x50);
        *plVar13 = (long)(plVar13 + 10);
      }
    }
    *(undefined8 *)((long)pvVar14 + (ulong)(uVar42 * 10) * 8) = 0;
    *(void **)(param_1 + 0x19f830) = pvVar14;
  }
LAB_02a25fbc:
  if (*(int *)(param_1 + 0x19f818) < *(int *)(param_1 + 0x19f81c)) {
    puVar17 = *(undefined8 **)(param_1 + 0x19f808);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x19f808) = *puVar17;
    }
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(undefined4 *)((long)puVar17 + 0x24) = 0;
    *(undefined2 *)(puVar17 + 4) = 0;
    puVar17[5] = plVar21;
    *puVar17 = &DAT_04a99ec0;
    puVar17[1] = 0;
    *(int *)(param_1 + 0x19f818) = *(int *)(param_1 + 0x19f818) + 1;
    lVar11 = FUN_016c3b64(plVar21,*(undefined8 *)(param_1 + 0x19f800));
    *(long *)(param_1 + 0x19f800) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 1;
  }
  else {
    for (lVar11 = *plVar21; lVar11 != 0; lVar11 = *(long *)(lVar11 + 8)) {
      if (*(short *)(lVar11 + 0x20) == 0) {
        *(undefined4 *)(lVar11 + 0x24) = 0;
        break;
      }
    }
  }
  plVar13 = (long *)(param_1 + 0x19f820);
  uVar7 = FUN_0277d6c4(PTR_DAT_04bb37e0);
  if (*(int *)(param_1 + 0x19f818) < *(int *)(param_1 + 0x19f81c)) {
    puVar17 = *(undefined8 **)(param_1 + 0x19f808);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x19f808) = *puVar17;
    }
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(undefined4 *)((long)puVar17 + 0x24) = 0;
    *(ushort *)(puVar17 + 4) = uVar7;
    puVar17[5] = plVar21;
    *puVar17 = &DAT_04a99ec0;
    puVar17[1] = 0;
    *(int *)(param_1 + 0x19f818) = *(int *)(param_1 + 0x19f818) + 1;
    lVar11 = FUN_016c3b64(plVar21,*(undefined8 *)(param_1 + 0x19f800));
    *(long *)(param_1 + 0x19f800) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 1;
  }
  else {
    for (lVar11 = *plVar21; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      while (uVar7 < *(ushort *)(lVar11 + 0x20)) {
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) goto LAB_02a26100;
      }
      if (uVar7 <= *(ushort *)(lVar11 + 0x20)) {
        *(undefined4 *)(lVar11 + 0x24) = 0;
        break;
      }
    }
  }
LAB_02a26100:
  if (*(int *)(param_1 + 0x19f838) < *(int *)(param_1 + 0x19f83c)) {
    puVar17 = *(undefined8 **)(param_1 + 0x19f828);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x19f828) = *puVar17;
    }
    *(undefined1 *)(puVar17 + 6) = 0;
    *puVar17 = &PTR_LAB_04a99ee8;
    puVar17[1] = 0;
    *(undefined1 *)(puVar17 + 5) = 0x3c;
    *(undefined4 *)((long)puVar17 + 0x2c) = 0xfffe;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar17[9] = plVar13;
    *(undefined4 *)(puVar17 + 4) = 0;
    puVar17[7] = puVar1;
    puVar17[8] = "Silent";
    *(int *)(param_1 + 0x19f838) = *(int *)(param_1 + 0x19f838) + 1;
    lVar11 = FUN_029ce080(plVar13,*(undefined8 *)(param_1 + 0x19f820));
    *(long *)(param_1 + 0x19f820) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 1;
  }
  else {
    for (lVar11 = *plVar13; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      while (0 < *(int *)(lVar11 + 0x20)) {
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) goto LAB_02a26298;
      }
      if (-1 < *(int *)(lVar11 + 0x20)) {
        *(undefined1 *)(lVar11 + 0x30) = 0;
        *(undefined1 *)(lVar11 + 0x28) = 0x3c;
        *(undefined4 *)(lVar11 + 0x2c) = 0xfffe;
        *(undefined **)(lVar11 + 0x38) = PTR_DAT_04bb2020 + 0x10;
        *(char **)(lVar11 + 0x40) = "Silent";
        break;
      }
    }
  }
LAB_02a26298:
  uVar12 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_02a26300:
  if ((int)*(uint *)(plVar28 + 0x38) < 1) {
    lVar11 = plVar28[0x16];
    if (lVar11 == 0) goto LAB_02a26a70;
    uVar32 = 0;
    if (*(uint **)(lVar11 + 8) != (uint *)0x0) {
      uVar32 = (ulong)**(uint **)(lVar11 + 8);
    }
    if (uVar32 <= uVar12) goto LAB_02a26a70;
    if ((((lVar11 == 0) || (puVar35 = *(uint **)(lVar11 + 8), puVar35 == (uint *)0x0)) ||
        ((uVar12 < *(uint *)(plVar28 + 0x19) && (*(char *)(plVar28[0x1a] + uVar12) == '\0')))) ||
       (((*puVar35 <= uVar12 || (puVar35[1] == 0)) || ((ushort)puVar35[2] == 0)))) {
      puVar35 = (uint *)0x0;
    }
    else {
      iVar10 = 0xc;
      if (*(char *)((long)puVar35 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar35 = (uint *)((ulong)(puVar35[1] * (int)uVar12 + (uint)(ushort)puVar35[2] * 8 + iVar10) +
                        (long)puVar35);
    }
  }
  else {
    if (*(uint *)(plVar28 + 0x38) <= uVar12) goto LAB_02a26a70;
    uVar32 = uVar12 & 0xffffffff;
    if (*(uint *)(plVar28 + 0x36) <= uVar12) {
      uVar32 = 0;
    }
    puVar35 = *(uint **)(plVar28[0x37] + uVar32 * 8);
  }
  uVar7 = 0;
  if (*puVar35 != 0) {
    cVar24 = *PTR_DAT_04bc4178;
    do {
      if (cVar24 != '\0') {
        uVar42 = *(uint *)(puVar2 + 8);
        if (-1 < (int)uVar42) {
          uVar7 = 0;
          if ((ushort *)((ulong)uVar42 + (long)puVar35) != (ushort *)0x0) {
            uVar7 = *(ushort *)((ulong)uVar42 + (long)puVar35);
          }
          goto LAB_02a264a0;
        }
        if (uVar42 == 0xffffffff) goto LAB_02a263fc;
LAB_02a2647c:
        uVar7 = 0;
        uVar42 = *puVar35;
        uVar6 = 0;
        if (uVar42 == 0) goto LAB_02a26540;
LAB_02a264a8:
        uVar7 = uVar6;
        uVar32 = (ulong)*(uint *)(puVar2 + 4);
        goto LAB_02a264ac;
      }
      cVar24 = '\x01';
      *PTR_DAT_04bc4178 = 1;
      *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
LAB_02a263fc:
      puVar29 = (uint *)(ulong)*puVar35;
      uVar7 = 0;
      if ((*puVar35 == 0) || (puVar35 == puVar29)) {
LAB_02a264a0:
        uVar42 = *puVar35;
        uVar6 = uVar7;
        if (uVar42 != 0) goto LAB_02a264a8;
        goto LAB_02a26540;
      }
      lVar11 = 0xc;
      if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
      if (lVar11 == 0) goto LAB_02a2647c;
      uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
      *(undefined4 *)(puVar2 + 8) = 0xfffffffe;
      uVar7 = 0;
      if (uVar32 == 0) goto LAB_02a264a0;
      piVar22 = (int *)(lVar11 + 4);
      while (piVar22[-1] != 0x3637ebb9) {
        piVar22 = piVar22 + 2;
        uVar32 = uVar32 - 1;
        if (uVar32 == 0) {
          uVar7 = 0;
          goto LAB_02a264a0;
        }
      }
      iVar10 = 0;
      if (*piVar22 != -1) {
        iVar10 = *piVar22;
      }
      *(int *)(puVar2 + 8) = iVar10;
    } while (*puVar35 != 0);
    uVar7 = 0;
  }
LAB_02a26540:
  sVar26 = -1;
  goto LAB_02a26544;
LAB_02a2756c:
  if ((int)uVar32 < 0) {
    if ((uVar32 != 0xffffffff) || (lVar11 = (long)puVar35 - (ulong)uVar42, lVar11 == 0))
    goto LAB_02a27600;
    lVar20 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar20 = 0x1c;
    }
    if (lVar20 + lVar11 == 0) goto LAB_02a27600;
    uVar32 = (ulong)*(ushort *)(lVar11 + 8);
    *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
    if (uVar32 == 0) goto LAB_02a27600;
    puVar29 = (uint *)(lVar20 + lVar11 + 4);
    while (puVar29[-1] != 0x54706054) {
      puVar29 = puVar29 + 2;
      uVar32 = uVar32 - 1;
      if (uVar32 == 0) goto LAB_02a27600;
    }
    uVar32 = 0;
    if (*puVar29 != 0xffffffff) {
      uVar32 = (ulong)*puVar29;
    }
    *(int *)(puVar2 + 4) = (int)uVar32;
    uVar42 = *puVar35;
    if (uVar42 == 0) goto LAB_02a27600;
    goto LAB_02a2756c;
  }
  if ((undefined2 *)(uVar32 + (long)puVar35) != (undefined2 *)0x0) {
    uVar38 = *(undefined2 *)(uVar32 + (long)puVar35);
    goto LAB_02a27604;
  }
LAB_02a27600:
  uVar38 = 0;
LAB_02a27604:
  if (*(int *)(param_1 + 0x19f858) < *(int *)(param_1 + 0x19f85c)) {
    puVar17 = *(undefined8 **)(param_1 + 0x19f848);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x19f848) = *puVar17;
    }
    *(undefined2 *)(puVar17 + 6) = uVar38;
    *puVar17 = &PTR_LAB_04a9a290;
    puVar17[1] = 0;
    puVar17[7] = plVar21;
    puVar17[2] = 0;
    puVar17[3] = 0;
    puVar17[4] = puVar1;
    puVar17[5] = puVar34;
    *(int *)(param_1 + 0x19f858) = *(int *)(param_1 + 0x19f858) + 1;
    lVar11 = FUN_029caa84(plVar21,*(undefined8 *)(param_1 + 0x19f840));
    *(long *)(param_1 + 0x19f840) = lVar11;
    uVar12 = uVar12 + 1;
    *(undefined8 *)(lVar11 + 0x18) = 1;
  }
  else {
    local_108 = (long *)(PTR_DAT_04bb2020 + 0x10);
    local_100 = (undefined **)puVar34;
    for (lVar11 = *plVar21; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      while (iVar10 = FUN_029ca720(&local_108,lVar11 + 0x20), iVar10 < 0) {
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) goto LAB_02a273a8;
      }
      if (iVar10 == 0) {
        *(undefined2 *)(lVar11 + 0x30) = uVar38;
        break;
      }
    }
LAB_02a273a8:
    uVar12 = uVar12 + 1;
  }
  goto LAB_02a273ac;
  while( true ) {
    if ((uVar32 != 0xffffffff) || (lVar11 = (long)puVar35 - (ulong)uVar42, lVar11 == 0))
    goto LAB_02a26540;
    lVar20 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar20 = 0x1c;
    }
    if (lVar20 + lVar11 == 0) goto LAB_02a26540;
    uVar32 = (ulong)*(ushort *)(lVar11 + 8);
    *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
    if (uVar32 == 0) goto LAB_02a26540;
    puVar29 = (uint *)(lVar20 + lVar11 + 4);
    while (puVar29[-1] != 0xd4892d19) {
      puVar29 = puVar29 + 2;
      uVar32 = uVar32 - 1;
      if (uVar32 == 0) goto LAB_02a26540;
    }
    uVar32 = 0;
    if (*puVar29 != 0xffffffff) {
      uVar32 = (ulong)*puVar29;
    }
    sVar26 = -1;
    *(int *)(puVar2 + 4) = (int)uVar32;
    uVar42 = *puVar35;
    if (uVar42 == 0) break;
LAB_02a264ac:
    if (-1 < (int)uVar32) {
      if ((short *)(uVar32 + (long)puVar35) == (short *)0x0) goto LAB_02a26540;
      sVar26 = *(short *)(uVar32 + (long)puVar35);
      break;
    }
  }
LAB_02a26544:
  if (*(int *)(param_1 + 0x19f818) < *(int *)(param_1 + 0x19f81c)) {
    puVar17 = *(undefined8 **)(param_1 + 0x19f808);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x19f808) = *puVar17;
    }
    puVar17[2] = 0;
    puVar17[3] = 0;
    *puVar17 = &DAT_04a99ec0;
    puVar17[1] = 0;
    *(int *)((long)puVar17 + 0x24) = (int)sVar26;
    *(ushort *)(puVar17 + 4) = uVar7;
    puVar17[5] = plVar21;
    *(int *)(param_1 + 0x19f818) = *(int *)(param_1 + 0x19f818) + 1;
    lVar11 = FUN_016c3b64(plVar21,*(undefined8 *)(param_1 + 0x19f800));
    *(long *)(param_1 + 0x19f800) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 1;
  }
  else {
    for (lVar11 = *plVar21; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      while (uVar7 < *(ushort *)(lVar11 + 0x20)) {
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) goto LAB_02a26600;
      }
      if (uVar7 <= *(ushort *)(lVar11 + 0x20)) {
        *(int *)(lVar11 + 0x24) = (int)sVar26;
        break;
      }
    }
  }
LAB_02a26600:
  uVar42 = *puVar35;
  uVar18 = 0;
  if ((uVar42 != 0) && (puVar35 != (uint *)(ulong)uVar42)) {
    puVar29 = (uint *)((long)puVar35 - (long)(ulong)uVar42);
    uVar18 = 0;
    if (*puVar29 != 0) {
      uVar42 = puVar29[1];
      if ((uVar42 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar29 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar29 + lVar11 + (ulong)(ushort)puVar29[2] * 8;
        if (lVar11 != 0) {
          uVar18 = 0;
          if ((ulong)uVar42 != 0) {
            uVar18 = (uint)((ulong)((long)puVar35 - lVar11) / (ulong)uVar42);
          }
          if (*puVar29 <= uVar18) {
            uVar18 = 0xffffffff;
          }
          if ((uVar18 < DAT_055f5f58) &&
             (uVar18 = (uint)*(ushort *)(DAT_055f5f60 + (long)(int)uVar18 * 2), uVar18 < 6))
          goto LAB_02a26684;
        }
      }
      uVar18 = 0;
    }
  }
LAB_02a26684:
  local_108 = (long *)CONCAT44(local_108._4_4_,uVar18);
  cVar24 = '\0';
  if (uVar18 < 5) {
    cVar24 = (char)uVar18 + '\x01';
  }
  if (*puVar35 != 0) {
    cVar31 = *PTR_DAT_04bc4178;
    do {
      if (cVar31 != '\0') {
        uVar42 = *(uint *)(puVar2 + 0x10);
        if ((int)uVar42 < 0) {
          if (uVar42 == 0xffffffff) goto LAB_02a266dc;
        }
        else if ((undefined1 *)((ulong)uVar42 + (long)puVar35) != (undefined1 *)0x0) {
          uVar25 = *(undefined1 *)((ulong)uVar42 + (long)puVar35);
          goto LAB_02a26780;
        }
        goto LAB_02a26790;
      }
      cVar31 = '\x01';
      *PTR_DAT_04bc4178 = 1;
      *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)puVar2 = 0xffffffffffffffff;
      *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
LAB_02a266dc:
      puVar29 = (uint *)(ulong)*puVar35;
      uVar25 = 0x3c;
      if ((*puVar35 == 0) || (puVar35 == puVar29)) {
LAB_02a26780:
        uVar42 = *puVar35;
        if (uVar42 == 0) {
          uVar18 = 0;
          goto LAB_02a268e4;
        }
LAB_02a2679c:
        uVar32 = (ulong)*(uint *)(puVar2 + 8);
        goto LAB_02a267a0;
      }
      lVar11 = 0xc;
      if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
      if (lVar11 == 0) {
LAB_02a26790:
        uVar25 = 0x3c;
        uVar42 = *puVar35;
        uVar18 = 0;
        if (uVar42 != 0) goto LAB_02a2679c;
        goto LAB_02a268e4;
      }
      uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
      *(undefined4 *)(puVar2 + 0x10) = 0xfffffffe;
      if (uVar32 == 0) goto LAB_02a26790;
      piVar22 = (int *)(lVar11 + 4);
      while (piVar22[-1] != 0x32bc8d59) {
        piVar22 = piVar22 + 2;
        uVar32 = uVar32 - 1;
        if (uVar32 == 0) goto LAB_02a26790;
      }
      iVar10 = 0;
      if (*piVar22 != -1) {
        iVar10 = *piVar22;
      }
      *(int *)(puVar2 + 0x10) = iVar10;
    } while (*puVar35 != 0);
  }
  uVar27 = 0;
  uVar25 = 0x3c;
LAB_02a268e8:
  sVar26 = -1;
  puVar34 = &DAT_0407ebb1;
LAB_02a269b4:
  iVar10 = (int)sVar26;
  if (*(int *)(param_1 + 0x19f838) < *(int *)(param_1 + 0x19f83c)) {
    puVar17 = *(undefined8 **)(param_1 + 0x19f828);
    if (puVar17 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x19f828) = *puVar17;
    }
    *(char *)(puVar17 + 6) = cVar24;
    *(undefined1 *)(puVar17 + 5) = uVar25;
    puVar17[2] = 0;
    puVar17[3] = 0;
    *(uint *)((long)puVar17 + 0x2c) = uVar27;
    *(int *)(puVar17 + 4) = iVar10;
    puVar17[9] = plVar13;
    *puVar17 = &PTR_LAB_04a99ee8;
    puVar17[1] = 0;
    puVar17[7] = puVar1;
    puVar17[8] = puVar34;
    *(int *)(param_1 + 0x19f838) = *(int *)(param_1 + 0x19f838) + 1;
    lVar11 = FUN_029ce080(plVar13,*(undefined8 *)(param_1 + 0x19f820));
    *(long *)(param_1 + 0x19f820) = lVar11;
    *(undefined8 *)(lVar11 + 0x18) = 1;
    uVar12 = uVar12 + 1;
  }
  else {
    for (lVar11 = *plVar13; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
      while (iVar10 < *(int *)(lVar11 + 0x20)) {
        lVar11 = *(long *)(lVar11 + 8);
        if (lVar11 == 0) goto LAB_02a262fc;
      }
      if (iVar10 <= *(int *)(lVar11 + 0x20)) {
        *(undefined1 *)(lVar11 + 0x28) = uVar25;
        *(uint *)(lVar11 + 0x2c) = uVar27;
        *(char *)(lVar11 + 0x30) = cVar24;
        *(undefined **)(lVar11 + 0x38) = PTR_DAT_04bb2020 + 0x10;
        *(undefined8 **)(lVar11 + 0x40) = puVar34;
        break;
      }
    }
LAB_02a262fc:
    uVar12 = uVar12 + 1;
  }
  goto LAB_02a26300;
LAB_02a267a0:
  if (-1 < (int)uVar32) {
    if ((ushort *)(uVar32 + (long)puVar35) == (ushort *)0x0) goto LAB_02a26840;
    uVar27 = (uint)*(ushort *)(uVar32 + (long)puVar35);
    uVar42 = *puVar35;
    uVar18 = uVar27;
    if (uVar42 == 0) goto LAB_02a268e4;
LAB_02a26848:
    uVar32 = (ulong)*(uint *)(puVar2 + 0x14);
    goto LAB_02a2684c;
  }
  if ((uVar32 == 0xffffffff) && (lVar11 = (long)puVar35 - (ulong)uVar42, lVar11 != 0)) {
    lVar20 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar20 = 0x1c;
    }
    if (lVar20 + lVar11 == 0) {
      uVar42 = *puVar35;
      goto joined_r0x02a268e0;
    }
    uVar32 = (ulong)*(ushort *)(lVar11 + 8);
    *(undefined4 *)(puVar2 + 8) = 0xfffffffe;
    if (uVar32 == 0) goto LAB_02a26840;
    puVar29 = (uint *)(lVar20 + lVar11 + 4);
    while (puVar29[-1] != 0x3637ebb9) {
      puVar29 = puVar29 + 2;
      uVar32 = uVar32 - 1;
      if (uVar32 == 0) goto LAB_02a26840;
    }
    uVar32 = 0;
    if (*puVar29 != 0xffffffff) {
      uVar32 = (ulong)*puVar29;
    }
    *(int *)(puVar2 + 8) = (int)uVar32;
    uVar42 = *puVar35;
    if (uVar42 == 0) goto code_r0x02a2681c;
    goto LAB_02a267a0;
  }
LAB_02a26840:
  uVar42 = *puVar35;
joined_r0x02a268e0:
  uVar27 = 0;
  uVar18 = 0;
  if (uVar42 != 0) goto LAB_02a26848;
LAB_02a268e4:
  uVar27 = uVar18;
  goto LAB_02a268e8;
code_r0x02a2681c:
  uVar27 = 0;
  goto LAB_02a268e8;
LAB_02a2684c:
  do {
    if (-1 < (int)uVar32) {
      puVar17 = (undefined8 *)(uVar32 + (long)puVar35);
LAB_02a26900:
      uVar42 = *puVar35;
      puVar34 = &DAT_0407ebb1;
      if (puVar17 != (undefined8 *)0x0) {
        puVar34 = puVar17;
      }
      if (uVar42 == 0) goto LAB_02a269b0;
      uVar32 = (ulong)*(uint *)(puVar2 + 4);
      goto LAB_02a2691c;
    }
    if (uVar32 != 0xffffffff) {
LAB_02a268d0:
      puVar17 = (undefined8 *)0x0;
      goto LAB_02a26900;
    }
    lVar11 = (long)puVar35 - (ulong)uVar42;
    puVar17 = (undefined8 *)0x0;
    if (lVar11 == 0) goto LAB_02a26900;
    lVar20 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar20 = 0x1c;
    }
    if (lVar20 + lVar11 == 0) goto LAB_02a268d0;
    uVar32 = (ulong)*(ushort *)(lVar11 + 8);
    *(undefined4 *)(puVar2 + 0x14) = 0xfffffffe;
    puVar17 = (undefined8 *)0x0;
    if (uVar32 == 0) goto LAB_02a26900;
    puVar29 = (uint *)(lVar20 + lVar11 + 4);
    while (puVar29[-1] != 0x87bf00e8) {
      puVar29 = puVar29 + 2;
      uVar32 = uVar32 - 1;
      if (uVar32 == 0) {
        puVar17 = (undefined8 *)0x0;
        goto LAB_02a26900;
      }
    }
    uVar32 = 0;
    if (*puVar29 != 0xffffffff) {
      uVar32 = (ulong)*puVar29;
    }
    *(int *)(puVar2 + 0x14) = (int)uVar32;
    uVar42 = *puVar35;
  } while (uVar42 != 0);
  goto LAB_02a268e8;
  while( true ) {
    if ((uVar32 != 0xffffffff) || (lVar11 = (long)puVar35 - (ulong)uVar42, lVar11 == 0))
    goto LAB_02a269b0;
    lVar20 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar20 = 0x1c;
    }
    if (lVar20 + lVar11 == 0) goto LAB_02a269b0;
    uVar32 = (ulong)*(ushort *)(lVar11 + 8);
    *(undefined4 *)(puVar2 + 4) = 0xfffffffe;
    if (uVar32 == 0) goto LAB_02a269b0;
    puVar29 = (uint *)(lVar20 + lVar11 + 4);
    while (puVar29[-1] != 0xd4892d19) {
      puVar29 = puVar29 + 2;
      uVar32 = uVar32 - 1;
      if (uVar32 == 0) goto LAB_02a269b0;
    }
    uVar32 = 0;
    if (*puVar29 != 0xffffffff) {
      uVar32 = (ulong)*puVar29;
    }
    sVar26 = -1;
    *(int *)(puVar2 + 4) = (int)uVar32;
    uVar42 = *puVar35;
    if (uVar42 == 0) break;
LAB_02a2691c:
    if (-1 < (int)uVar32) {
      if ((short *)(uVar32 + (long)puVar35) == (short *)0x0) {
LAB_02a269b0:
        sVar26 = -1;
      }
      else {
        sVar26 = *(short *)(uVar32 + (long)puVar35);
      }
      break;
    }
  }
  goto LAB_02a269b4;
LAB_02a26a70:
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x1d8);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a26ae0;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x1d8,8);
  }
LAB_02a26ae0:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  *plVar28 = (long)&PTR_LAB_04a99f10;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a99f68;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a99f90;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x3a] = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc4358 = 1;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)PTR_DAT_04bc4360 = 0xffffffffffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f798) = plVar28;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x1d8);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a26cd8;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x1d8,8);
  }
LAB_02a26cd8:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  *plVar28 = (long)&PTR_FUN_04a99fb8;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9a010;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9a038;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x3a] = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc4368 = 1;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)PTR_DAT_04bc4370 = 0xffffffffffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7a0) = plVar28;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x200);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a26ec0;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x200,8);
  }
LAB_02a26ec0:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9a110;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9a138;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bb94f8 = 1;
  puVar2 = PTR_DAT_04bb9500;
  plVar28[0x3a] = 0;
  *(undefined4 *)(plVar28 + 0x3b) = 0;
  plVar28[0x3e] = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *plVar28 = (long)&PTR_FUN_04a9a060;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)((long)plVar28 + 0x1f5) = 0;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  plVar28[0x3c] = 0;
  plVar28[0x3d] = (long)&LAB_02a2bbb0;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7a8) = plVar28;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x200);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a270c4;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x200,8);
  }
LAB_02a270c4:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9a228;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9a250;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x3a] = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bb94e0 = 1;
  puVar2 = PTR_DAT_04bb94e8;
  *(undefined4 *)(plVar28 + 0x3b) = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *plVar28 = (long)&PTR_FUN_04a9a178;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)((long)plVar28 + 0x1f5) = 0;
  plVar28[0x3e] = 0;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  plVar28[0x3c] = 0;
  plVar28[0x3d] = (long)&LAB_02a2bcb0;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7b0) = plVar28;
  plVar21 = (long *)(param_1 + 0x19f840);
  uVar42 = *(uint *)(plVar28 + 0x38);
  if ((0 < (int)uVar42) ||
     (((plVar28[0x16] != 0 && (puVar35 = *(uint **)(plVar28[0x16] + 8), puVar35 != (uint *)0x0)) &&
      (uVar42 = *puVar35, 0 < (int)uVar42)))) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar14 = malloc((long)(int)(uVar42 << 6));
    }
    else {
      plVar13 = *(long **)(param_1 + 0xb38a8);
      if (plVar13 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar13 = (long *)(lVar11 + 8);
        if (lVar20 != 0) {
          plVar13 = (long *)(lVar20 + 0xa8);
        }
        plVar13 = (long *)*plVar13;
        if (plVar13 == (long *)0x0) goto LAB_02a27374;
      }
      pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,(long)(int)(uVar42 << 6),8);
    }
    if (pvVar14 != (void *)0x0) {
      uVar18 = uVar42 - 1;
      *(uint *)(param_1 + 0x19f85c) = uVar42;
      *(void **)(param_1 + 0x19f848) = pvVar14;
      if (1 < uVar42) {
        if (uVar18 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          plVar13 = (long *)((long)pvVar14 + 0x40);
          do {
            uVar12 = uVar12 + 2;
            plVar13[-8] = (long)plVar13;
            *plVar13 = (long)(plVar13 + 8);
            plVar13 = plVar13 + 0x10;
          } while (((ulong)uVar18 & 0xfffffffe) != uVar12);
        }
        if ((uVar18 & 1) != 0) {
          plVar13 = (long *)((long)pvVar14 + uVar12 * 0x40);
          *plVar13 = (long)(plVar13 + 8);
        }
      }
      *(undefined8 *)((long)pvVar14 + (long)(int)(uVar18 * 8) * 8) = 0;
      *(void **)(param_1 + 0x19f850) = pvVar14;
    }
  }
LAB_02a27374:
  uVar12 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_02a273ac:
  if ((int)*(uint *)(plVar28 + 0x38) < 1) {
    lVar11 = plVar28[0x16];
    if (lVar11 != 0) {
      uVar32 = 0;
      if (*(uint **)(lVar11 + 8) != (uint *)0x0) {
        uVar32 = (ulong)**(uint **)(lVar11 + 8);
      }
      if (uVar12 < uVar32) {
        if ((((lVar11 != 0) && (puVar35 = *(uint **)(lVar11 + 8), puVar35 != (uint *)0x0)) &&
            ((*(uint *)(plVar28 + 0x19) <= uVar12 || (*(char *)(plVar28[0x1a] + uVar12) != '\0'))))
           && (((uVar12 < *puVar35 && (puVar35[1] != 0)) && ((ushort)puVar35[2] != 0)))) {
          iVar10 = 0xc;
          if (*(char *)((long)puVar35 + 10) != '\0') {
            iVar10 = 0x1c;
          }
          puVar35 = (uint *)((ulong)(puVar35[1] * (int)uVar12 + (uint)(ushort)puVar35[2] * 8 +
                                    iVar10) + (long)puVar35);
          if (puVar35 != (uint *)0x0) goto LAB_02a273dc;
        }
        goto LAB_02a273a8;
      }
    }
  }
  else if (uVar12 < *(uint *)(plVar28 + 0x38)) {
    uVar32 = uVar12 & 0xffffffff;
    if (*(uint *)(plVar28 + 0x36) <= uVar12) {
      uVar32 = 0;
    }
    puVar35 = *(uint **)(plVar28[0x37] + uVar32 * 8);
    if (puVar35 == (uint *)0x0) goto LAB_02a273a8;
LAB_02a273dc:
    if (*puVar35 != 0) {
      cVar24 = *PTR_DAT_04bb94e0;
      do {
        if (cVar24 != '\0') {
          uVar42 = *(uint *)(puVar2 + 0xc);
          if ((int)uVar42 < 0) {
            if (uVar42 == 0xffffffff) goto LAB_02a27428;
LAB_02a27544:
            puVar17 = (undefined8 *)0x0;
          }
          else {
            puVar17 = (undefined8 *)((ulong)uVar42 + (long)puVar35);
          }
LAB_02a27550:
          uVar42 = *puVar35;
          puVar34 = &DAT_0407ebb1;
          if (puVar17 != (undefined8 *)0x0) {
            puVar34 = puVar17;
          }
          if (uVar42 == 0) goto LAB_02a27600;
          uVar32 = (ulong)*(uint *)(puVar2 + 4);
          goto LAB_02a2756c;
        }
        cVar24 = '\x01';
        *PTR_DAT_04bb94e0 = 1;
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
LAB_02a27428:
        puVar29 = (uint *)(ulong)*puVar35;
        puVar17 = (undefined8 *)0x0;
        if ((*puVar35 == 0) || (puVar35 == puVar29)) goto LAB_02a27550;
        lVar11 = 0xc;
        if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
        if (lVar11 == 0) goto LAB_02a27544;
        uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
        *(undefined4 *)(puVar2 + 0xc) = 0xfffffffe;
        puVar17 = (undefined8 *)0x0;
        if (uVar32 == 0) goto LAB_02a27550;
        piVar22 = (int *)(lVar11 + 4);
        while (piVar22[-1] != -0x7a30e9eb) {
          piVar22 = piVar22 + 2;
          uVar32 = uVar32 - 1;
          if (uVar32 == 0) {
            puVar17 = (undefined8 *)0x0;
            goto LAB_02a27550;
          }
        }
        iVar10 = 0;
        if (*piVar22 != -1) {
          iVar10 = *piVar22;
        }
        *(int *)(puVar2 + 0xc) = iVar10;
      } while (*puVar35 != 0);
    }
    uVar38 = 0;
    puVar34 = &DAT_0407ebb1;
    goto LAB_02a27604;
  }
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x200);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a27730;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x200,8);
  }
LAB_02a27730:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9a368;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9a390;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc3ef8 = 1;
  puVar2 = PTR_DAT_04bc3f00;
  plVar28[0x3a] = 0;
  *(undefined4 *)(plVar28 + 0x3b) = 0;
  plVar28[0x3e] = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *plVar28 = (long)&PTR_LAB_04a9a2b8;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)((long)plVar28 + 0x1f5) = 0;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  plVar28[0x3c] = 0;
  plVar28[0x3d] = (long)&LAB_02a2bdb0;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7b8) = plVar28;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x200);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a27944;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x200,8);
  }
LAB_02a27944:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9a480;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9a4a8;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc3f08 = 1;
  puVar2 = PTR_DAT_04bc3f10;
  plVar28[0x3a] = 0;
  *(undefined4 *)(plVar28 + 0x3b) = 0;
  plVar28[0x3e] = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *plVar28 = (long)&PTR_FUN_04a9a3d0;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)((long)plVar28 + 0x1f5) = 0;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  plVar28[0x3c] = 0;
  plVar28[0x3d] = (long)&LAB_02a2beb0;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7c0) = plVar28;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x200);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a27b48;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x200,8);
  }
LAB_02a27b48:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9a598;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9a5c0;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc3f18 = 1;
  puVar2 = PTR_DAT_04bc3f20;
  plVar28[0x3a] = 0;
  *(undefined4 *)(plVar28 + 0x3b) = 0;
  plVar28[0x3e] = 0;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *plVar28 = (long)&PTR_FUN_04a9a4e8;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)((long)plVar28 + 0x1f5) = 0;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  plVar28[0x3c] = 0;
  plVar28[0x3d] = (long)&LAB_02a2bfb0;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7c8) = plVar28;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x1d8);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a27d4c;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x1d8,8);
  }
LAB_02a27d4c:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  *plVar28 = (long)&PTR_FUN_04a9a600;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9a658;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9a680;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bc4378;
  plVar28[0x3a] = 0;
  *puVar2 = 1;
  puVar2 = PTR_DAT_04bc4380;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)PTR_DAT_04bc4380 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7d0) = plVar28;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x1d8);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a27f34;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x1d8,8);
  }
LAB_02a27f34:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  *plVar28 = (long)&PTR_FUN_04a9a7a8;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9a800;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9a828;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x3a] = 0;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  DAT_055f5f68 = 1;
  DAT_055f5f7c = 0xffffffff;
  local_75 = 0;
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  DAT_055f5f6c = 0xffffffffffffffff;
  DAT_055f5f74 = 0xffffffffffffffff;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7d8) = plVar28;
  uVar42 = *(uint *)(plVar28 + 0x38);
  if ((0 < (int)uVar42) ||
     (((plVar28[0x16] != 0 && (puVar35 = *(uint **)(plVar28[0x16] + 8), puVar35 != (uint *)0x0)) &&
      (uVar42 = *puVar35, 0 < (int)uVar42)))) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar14 = malloc((long)(int)(uVar42 * 0x30));
    }
    else {
      plVar21 = *(long **)(param_1 + 0xb38a8);
      if (plVar21 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar21 = (long *)(lVar11 + 8);
        if (lVar20 != 0) {
          plVar21 = (long *)(lVar20 + 0xa8);
        }
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) goto LAB_02a281dc;
      }
      pvVar14 = (void *)(**(code **)(*plVar21 + 0x30))(plVar21,(long)(int)(uVar42 * 0x30),8);
    }
    if (pvVar14 != (void *)0x0) {
      uVar18 = uVar42 - 1;
      *(uint *)(param_1 + 0x19f87c) = uVar42;
      *(void **)(param_1 + 0x19f868) = pvVar14;
      if (1 < uVar42) {
        if (uVar18 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          plVar21 = (long *)((long)pvVar14 + 0x30);
          do {
            uVar12 = uVar12 + 2;
            plVar21[-6] = (long)plVar21;
            *plVar21 = (long)(plVar21 + 6);
            plVar21 = plVar21 + 0xc;
          } while (((ulong)uVar18 & 0xfffffffe) != uVar12);
        }
        if ((uVar18 & 1) != 0) {
          plVar21 = (long *)((long)pvVar14 + uVar12 * 0x30);
          *plVar21 = (long)(plVar21 + 6);
        }
      }
      *(undefined8 *)((long)pvVar14 + (long)(int)(uVar18 * 6) * 8) = 0;
      *(void **)(param_1 + 0x19f870) = pvVar14;
    }
  }
LAB_02a281dc:
  uVar42 = *(uint *)(plVar28 + 0x38);
  if ((0 < (int)uVar42) ||
     (((plVar28[0x16] != 0 && (puVar35 = *(uint **)(plVar28[0x16] + 8), puVar35 != (uint *)0x0)) &&
      (uVar42 = *puVar35, 0 < (int)uVar42)))) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar14 = malloc((long)(int)(uVar42 * 0x30));
    }
    else {
      plVar21 = *(long **)(param_1 + 0xb38a8);
      if (plVar21 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar21 = (long *)(lVar11 + 8);
        if (lVar20 != 0) {
          plVar21 = (long *)(lVar20 + 0xa8);
        }
        plVar21 = (long *)*plVar21;
        if (plVar21 == (long *)0x0) goto LAB_02a282fc;
      }
      pvVar14 = (void *)(**(code **)(*plVar21 + 0x30))(plVar21,(long)(int)(uVar42 * 0x30),8);
    }
    if (pvVar14 != (void *)0x0) {
      uVar18 = uVar42 - 1;
      *(uint *)(param_1 + 0x19f89c) = uVar42;
      *(void **)(param_1 + 0x19f888) = pvVar14;
      if (1 < uVar42) {
        if (uVar18 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          plVar21 = (long *)((long)pvVar14 + 0x30);
          do {
            uVar12 = uVar12 + 2;
            plVar21[-6] = (long)plVar21;
            *plVar21 = (long)(plVar21 + 6);
            plVar21 = plVar21 + 0xc;
          } while (((ulong)uVar18 & 0xfffffffe) != uVar12);
        }
        if ((uVar18 & 1) != 0) {
          plVar21 = (long *)((long)pvVar14 + uVar12 * 0x30);
          *plVar21 = (long)(plVar21 + 6);
        }
      }
      *(undefined8 *)((long)pvVar14 + (long)(int)(uVar18 * 6) * 8) = 0;
      *(void **)(param_1 + 0x19f890) = pvVar14;
    }
  }
LAB_02a282fc:
  uVar42 = *(uint *)(plVar28 + 0x38);
  plVar21 = (long *)(param_1 + 0x19f860);
  plVar13 = (long *)(param_1 + 0x19f880);
  if ((0 < (int)uVar42) ||
     (((plVar28[0x16] != 0 && (puVar35 = *(uint **)(plVar28[0x16] + 8), puVar35 != (uint *)0x0)) &&
      (uVar42 = *puVar35, 0 < (int)uVar42)))) {
    lVar11 = *(long *)PTR_DAT_04bb2698;
    if (lVar11 == 0) {
      pvVar14 = malloc((long)(int)(uVar42 * 0x30));
    }
    else {
      plVar15 = *(long **)(param_1 + 0xb38a8);
      if (plVar15 == (long *)0x0) {
        lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar11 + 8);
        if (lVar20 != 0) {
          plVar15 = (long *)(lVar20 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_02a2842c;
      }
      pvVar14 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,(long)(int)(uVar42 * 0x30),8);
    }
    if (pvVar14 != (void *)0x0) {
      uVar18 = uVar42 - 1;
      *(uint *)(param_1 + 0x19f8bc) = uVar42;
      *(void **)(param_1 + 0x19f8a8) = pvVar14;
      if (1 < uVar42) {
        if (uVar18 == 1) {
          uVar12 = 0;
        }
        else {
          uVar12 = 0;
          plVar15 = (long *)((long)pvVar14 + 0x30);
          do {
            uVar12 = uVar12 + 2;
            plVar15[-6] = (long)plVar15;
            *plVar15 = (long)(plVar15 + 6);
            plVar15 = plVar15 + 0xc;
          } while (((ulong)uVar18 & 0xfffffffe) != uVar12);
        }
        if ((uVar18 & 1) != 0) {
          plVar15 = (long *)((long)pvVar14 + uVar12 * 0x30);
          *plVar15 = (long)(plVar15 + 6);
        }
      }
      *(undefined8 *)((long)pvVar14 + (long)(int)(uVar18 * 6) * 8) = 0;
      *(void **)(param_1 + 0x19f8b0) = pvVar14;
    }
  }
LAB_02a2842c:
  uVar12 = 0;
  uVar42 = 0xffffffff;
LAB_02a28448:
  if (0 < (int)*(uint *)(plVar28 + 0x38)) {
    if (*(uint *)(plVar28 + 0x38) <= uVar12) goto LAB_02a28dd0;
    uVar32 = uVar12 & 0xffffffff;
    if (*(uint *)(plVar28 + 0x36) <= uVar12) {
      uVar32 = 0;
    }
    puVar35 = *(uint **)(plVar28[0x37] + uVar32 * 8);
    if (puVar35 == (uint *)0x0) goto LAB_02a28444;
LAB_02a28478:
    puVar29 = (uint *)(ulong)*puVar35;
    uVar7 = 0;
    if (*puVar35 == 0) {
LAB_02a28610:
      puVar29 = (uint *)0x0;
    }
    else {
      if ((DAT_055f5f68 & 1) == 0) {
        DAT_055f5f68 = 1;
        uVar32 = 0xffffffff;
        DAT_055f5f6c = 0xffffffffffffffff;
        DAT_055f5f74 = 0xffffffffffffffff;
        DAT_055f5f7c = 0xffffffff;
LAB_02a28540:
        if (puVar35 == puVar29) {
LAB_02a28548:
          uVar7 = 0;
        }
        else {
          do {
            if (uVar32 != 0xffffffff) goto LAB_02a28548;
            lVar11 = 0xc;
            if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
            if (lVar11 == 0) goto LAB_02a28548;
            uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
            DAT_055f5f6c = CONCAT44(0xfffffffe,(undefined4)DAT_055f5f6c);
            if (uVar32 == 0) goto LAB_02a28548;
            puVar33 = (uint *)(lVar11 + 4);
            while (puVar33[-1] != 0x3637ebb9) {
              puVar33 = puVar33 + 2;
              uVar32 = uVar32 - 1;
              if (uVar32 == 0) goto LAB_02a28548;
            }
            uVar32 = (ulong)*puVar33;
            uVar30 = 0;
            if (*puVar33 != 0xffffffff) {
              uVar30 = uVar32;
            }
            DAT_055f5f6c = CONCAT44((int)uVar30,(undefined4)DAT_055f5f6c);
          } while ((int)uVar30 < 0);
          puVar23 = (ushort *)(uVar30 + (long)puVar35);
          if (puVar23 != (ushort *)0x0) goto LAB_02a2849c;
          uVar7 = 0;
        }
      }
      else {
        uVar32 = DAT_055f5f6c >> 0x20;
        if ((long)DAT_055f5f6c < 0) goto LAB_02a28540;
        puVar23 = (ushort *)(uVar32 + (long)puVar35);
        uVar7 = 0;
        if (puVar23 != (ushort *)0x0) {
LAB_02a2849c:
          uVar7 = *puVar23;
        }
      }
      puVar29 = (uint *)(ulong)*puVar35;
      if (*puVar35 != 0) {
        uVar32 = DAT_055f5f74 & 0xffffffff;
        if ((int)DAT_055f5f74 < 0) {
          if (puVar35 == puVar29) goto LAB_02a28610;
          do {
            if (uVar32 != 0xffffffff) goto LAB_02a28610;
            lVar11 = 0xc;
            if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
            if (lVar11 == 0) goto LAB_02a28610;
            uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
            DAT_055f5f74 = CONCAT44(DAT_055f5f74._4_4_,0xfffffffe);
            if (uVar32 == 0) goto LAB_02a28610;
            puVar33 = (uint *)(lVar11 + 4);
            while (puVar33[-1] != 0x54706054) {
              puVar33 = puVar33 + 2;
              uVar32 = uVar32 - 1;
              if (uVar32 == 0) goto LAB_02a28610;
            }
            uVar32 = (ulong)*puVar33;
            uVar30 = 0;
            if (*puVar33 != 0xffffffff) {
              uVar30 = uVar32;
            }
            DAT_055f5f74 = CONCAT44(DAT_055f5f74._4_4_,(int)uVar30);
          } while ((int)uVar30 < 0);
        }
        else {
          uVar30 = uVar32;
        }
        puVar29 = (uint *)0x0;
        if ((ushort *)(uVar30 + (long)puVar35) != (ushort *)0x0) {
          puVar29 = (uint *)(ulong)*(ushort *)(uVar30 + (long)puVar35);
        }
      }
    }
    if (*(int *)(param_1 + 0x19f878) < *(int *)(param_1 + 0x19f87c)) {
      puVar17 = *(undefined8 **)(param_1 + 0x19f868);
      if (puVar17 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x19f868) = *puVar17;
      }
      puVar17[2] = 0;
      puVar17[3] = 0;
      *(short *)((long)puVar17 + 0x22) = (short)puVar29;
      *(ushort *)(puVar17 + 4) = uVar7;
      puVar17[5] = plVar21;
      *puVar17 = &DAT_04a9a850;
      puVar17[1] = 0;
      *(int *)(param_1 + 0x19f878) = *(int *)(param_1 + 0x19f878) + 1;
      lVar11 = FUN_016c3b64(plVar21,*(undefined8 *)(param_1 + 0x19f860));
      *(long *)(param_1 + 0x19f860) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 1;
      uVar18 = *puVar35;
      if (uVar18 != 0) goto LAB_02a286c8;
      uVar7 = 0;
LAB_02a28860:
      puVar29 = (uint *)0x0;
    }
    else {
      for (lVar11 = *plVar21; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
        while (uVar7 < *(ushort *)(lVar11 + 0x20)) {
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 == 0) goto LAB_02a286c0;
        }
        if (uVar7 <= *(ushort *)(lVar11 + 0x20)) {
          *(short *)(lVar11 + 0x22) = (short)puVar29;
          uVar18 = *puVar35;
          goto joined_r0x02a28854;
        }
      }
LAB_02a286c0:
      uVar18 = *puVar35;
joined_r0x02a28854:
      uVar7 = 0;
      if (uVar18 == 0) goto LAB_02a28860;
LAB_02a286c8:
      puVar29 = (uint *)(ulong)uVar18;
      if ((DAT_055f5f68 & 1) == 0) {
        DAT_055f5f68 = 1;
        uVar32 = 0xffffffff;
        DAT_055f5f6c = 0xffffffffffffffff;
        DAT_055f5f74 = 0xffffffffffffffff;
        DAT_055f5f7c = 0xffffffff;
LAB_02a28700:
        if (puVar35 == puVar29) {
LAB_02a28708:
          uVar7 = 0;
        }
        else {
          do {
            if (uVar32 != 0xffffffff) goto LAB_02a28708;
            lVar11 = 0xc;
            if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
            if (lVar11 == 0) goto LAB_02a28708;
            uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
            DAT_055f5f74 = CONCAT44(DAT_055f5f74._4_4_,0xfffffffe);
            if (uVar32 == 0) goto LAB_02a28708;
            puVar33 = (uint *)(lVar11 + 4);
            while (puVar33[-1] != 0x54706054) {
              puVar33 = puVar33 + 2;
              uVar32 = uVar32 - 1;
              if (uVar32 == 0) goto LAB_02a28708;
            }
            uVar32 = (ulong)*puVar33;
            uVar30 = 0;
            if (*puVar33 != 0xffffffff) {
              uVar30 = uVar32;
            }
            DAT_055f5f74 = CONCAT44(DAT_055f5f74._4_4_,(int)uVar30);
          } while ((int)uVar30 < 0);
          puVar23 = (ushort *)(uVar30 + (long)puVar35);
          if (puVar23 != (ushort *)0x0) goto LAB_02a286e4;
          uVar7 = 0;
        }
      }
      else {
        uVar32 = DAT_055f5f74 & 0xffffffff;
        if ((int)DAT_055f5f74 < 0) goto LAB_02a28700;
        puVar23 = (ushort *)(uVar32 + (long)puVar35);
        uVar7 = 0;
        if (puVar23 != (ushort *)0x0) {
LAB_02a286e4:
          uVar7 = *puVar23;
        }
      }
      puVar29 = (uint *)(ulong)*puVar35;
      if (*puVar35 != 0) {
        uVar32 = DAT_055f5f6c >> 0x20;
        if ((long)DAT_055f5f6c < 0) {
          if (puVar35 == puVar29) goto LAB_02a28860;
          do {
            if (uVar32 != 0xffffffff) goto LAB_02a28860;
            lVar11 = 0xc;
            if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
              lVar11 = 0x1c;
            }
            lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
            if (lVar11 == 0) goto LAB_02a28860;
            uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
            DAT_055f5f6c = CONCAT44(0xfffffffe,(undefined4)DAT_055f5f6c);
            if (uVar32 == 0) goto LAB_02a28860;
            puVar33 = (uint *)(lVar11 + 4);
            while (puVar33[-1] != 0x3637ebb9) {
              puVar33 = puVar33 + 2;
              uVar32 = uVar32 - 1;
              if (uVar32 == 0) goto LAB_02a28860;
            }
            uVar32 = (ulong)*puVar33;
            uVar30 = 0;
            if (*puVar33 != 0xffffffff) {
              uVar30 = uVar32;
            }
            DAT_055f5f6c = CONCAT44((int)uVar30,(undefined4)DAT_055f5f6c);
          } while ((int)uVar30 < 0);
        }
        else {
          uVar30 = uVar32;
        }
        puVar29 = (uint *)0x0;
        if ((ushort *)(uVar30 + (long)puVar35) != (ushort *)0x0) {
          puVar29 = (uint *)(ulong)*(ushort *)(uVar30 + (long)puVar35);
        }
      }
    }
    if (*(int *)(param_1 + 0x19f898) < *(int *)(param_1 + 0x19f89c)) {
      puVar17 = *(undefined8 **)(param_1 + 0x19f888);
      if (puVar17 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x19f888) = *puVar17;
      }
      puVar17[2] = 0;
      puVar17[3] = 0;
      *(short *)((long)puVar17 + 0x22) = (short)puVar29;
      *(ushort *)(puVar17 + 4) = uVar7;
      puVar17[5] = plVar13;
      *puVar17 = &DAT_04a9a850;
      puVar17[1] = 0;
      *(int *)(param_1 + 0x19f898) = *(int *)(param_1 + 0x19f898) + 1;
      lVar11 = FUN_016c3b64(plVar13,*(undefined8 *)(param_1 + 0x19f880));
      *(long *)(param_1 + 0x19f880) = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 1;
      puVar29 = (uint *)(ulong)*puVar35;
      if (*puVar35 != 0) goto LAB_02a28918;
      uVar7 = 0;
    }
    else {
      for (lVar11 = *plVar13; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
        while (uVar7 < *(ushort *)(lVar11 + 0x20)) {
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 == 0) goto LAB_02a28910;
        }
        if (uVar7 <= *(ushort *)(lVar11 + 0x20)) {
          *(short *)(lVar11 + 0x22) = (short)puVar29;
          puVar29 = (uint *)(ulong)*puVar35;
          if (*puVar35 != 0) goto LAB_02a28918;
          uVar7 = 0;
          goto LAB_02a2895c;
        }
      }
LAB_02a28910:
      puVar29 = (uint *)(ulong)*puVar35;
      uVar7 = 0;
      if (*puVar35 != 0) {
LAB_02a28918:
        if ((DAT_055f5f68 & 1) == 0) {
          DAT_055f5f68 = 1;
          uVar32 = 0xffffffff;
          DAT_055f5f6c = 0xffffffffffffffff;
          DAT_055f5f74 = 0xffffffffffffffff;
          DAT_055f5f7c = 0xffffffff;
LAB_02a28950:
          if (puVar35 == puVar29) {
LAB_02a28958:
            uVar7 = 0;
          }
          else {
            do {
              if (uVar32 != 0xffffffff) goto LAB_02a28958;
              lVar11 = 0xc;
              if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
              if (lVar11 == 0) goto LAB_02a28958;
              uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
              DAT_055f5f6c = CONCAT44(0xfffffffe,(undefined4)DAT_055f5f6c);
              if (uVar32 == 0) goto LAB_02a28958;
              puVar33 = (uint *)(lVar11 + 4);
              while (puVar33[-1] != 0x3637ebb9) {
                puVar33 = puVar33 + 2;
                uVar32 = uVar32 - 1;
                if (uVar32 == 0) goto LAB_02a28958;
              }
              uVar32 = (ulong)*puVar33;
              uVar30 = 0;
              if (*puVar33 != 0xffffffff) {
                uVar30 = uVar32;
              }
              DAT_055f5f6c = CONCAT44((int)uVar30,(undefined4)DAT_055f5f6c);
            } while ((int)uVar30 < 0);
            puVar23 = (ushort *)(uVar30 + (long)puVar35);
            if (puVar23 != (ushort *)0x0) goto LAB_02a28934;
            uVar7 = 0;
          }
        }
        else {
          uVar32 = DAT_055f5f6c >> 0x20;
          if ((long)DAT_055f5f6c < 0) goto LAB_02a28950;
          puVar23 = (ushort *)(uVar32 + (long)puVar35);
          uVar7 = 0;
          if (puVar23 == (ushort *)0x0) goto LAB_02a2895c;
LAB_02a28934:
          uVar7 = *puVar23;
        }
      }
    }
LAB_02a2895c:
    uVar18 = *puVar35;
    uVar27 = 0;
    if ((uVar18 != 0) && (puVar35 != (uint *)(ulong)uVar18)) {
      puVar29 = (uint *)((long)puVar35 - (long)(ulong)uVar18);
      uVar27 = 0;
      if (*puVar29 != 0) {
        uVar18 = puVar29[1];
        if ((uVar18 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
          lVar11 = 0xc;
          if (*(char *)((long)puVar29 + 10) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar29 + lVar11 + (ulong)(ushort)puVar29[2] * 8;
          if (lVar11 != 0) {
            uVar27 = 0;
            if ((ulong)uVar18 != 0) {
              uVar27 = (uint)((ulong)((long)puVar35 - lVar11) / (ulong)uVar18);
            }
            if (*puVar29 <= uVar27) {
              uVar27 = 0xffffffff;
            }
            if ((uVar27 < DAT_055f5f80) &&
               (uVar27 = (uint)*(ushort *)(DAT_055f5f88 + (long)(int)uVar27 * 2), uVar27 < 4))
            goto LAB_02a289e8;
          }
        }
        uVar27 = 0;
      }
    }
LAB_02a289e8:
    if (*(int *)(param_1 + 0x19f8b8) < *(int *)(param_1 + 0x19f8bc)) {
      puVar17 = *(undefined8 **)(param_1 + 0x19f8a8);
      if (puVar17 != (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x19f8a8) = *puVar17;
      }
      *(uint *)((long)puVar17 + 0x24) = uVar27;
      puVar17[2] = 0;
      puVar17[3] = 0;
      puVar17[5] = plVar16;
      *(ushort *)(puVar17 + 4) = uVar7;
      *puVar17 = &DAT_04a9a878;
      puVar17[1] = 0;
      *(int *)(param_1 + 0x19f8b8) = *(int *)(param_1 + 0x19f8b8) + 1;
      lVar11 = FUN_016c3b64(plVar16,*plVar16);
      *plVar16 = lVar11;
      *(undefined8 *)(lVar11 + 0x18) = 1;
      puVar29 = (uint *)(ulong)*puVar35;
      if (*puVar35 != 0) goto LAB_02a28a98;
      uVar18 = 0;
    }
    else {
      for (lVar11 = *plVar16; lVar11 != 0; lVar11 = *(long *)(lVar11 + 0x10)) {
        while (uVar7 < *(ushort *)(lVar11 + 0x20)) {
          lVar11 = *(long *)(lVar11 + 8);
          if (lVar11 == 0) goto LAB_02a28a90;
        }
        if (uVar7 <= *(ushort *)(lVar11 + 0x20)) {
          *(uint *)(lVar11 + 0x24) = uVar27;
          puVar29 = (uint *)(ulong)*puVar35;
          if (*puVar35 != 0) goto LAB_02a28a98;
          uVar18 = 0;
          goto LAB_02a28adc;
        }
      }
LAB_02a28a90:
      puVar29 = (uint *)(ulong)*puVar35;
      uVar18 = 0;
      if (*puVar35 != 0) {
LAB_02a28a98:
        if ((DAT_055f5f68 & 1) == 0) {
          DAT_055f5f68 = 1;
          uVar32 = 0xffffffff;
          DAT_055f5f6c = 0xffffffffffffffff;
          DAT_055f5f74 = 0xffffffffffffffff;
          DAT_055f5f7c = 0xffffffff;
LAB_02a28ad0:
          if (puVar35 == puVar29) {
LAB_02a28ad8:
            uVar18 = 0;
          }
          else {
            do {
              if (uVar32 != 0xffffffff) goto LAB_02a28ad8;
              lVar11 = 0xc;
              if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
              if (lVar11 == 0) goto LAB_02a28ad8;
              uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
              DAT_055f5f74 = CONCAT44(DAT_055f5f74._4_4_,0xfffffffe);
              if (uVar32 == 0) goto LAB_02a28ad8;
              puVar33 = (uint *)(lVar11 + 4);
              while (puVar33[-1] != 0x54706054) {
                puVar33 = puVar33 + 2;
                uVar32 = uVar32 - 1;
                if (uVar32 == 0) goto LAB_02a28ad8;
              }
              uVar32 = (ulong)*puVar33;
              uVar30 = 0;
              if (*puVar33 != 0xffffffff) {
                uVar30 = uVar32;
              }
              DAT_055f5f74 = CONCAT44(DAT_055f5f74._4_4_,(int)uVar30);
            } while ((int)uVar30 < 0);
            puVar23 = (ushort *)((long)puVar35 + uVar30);
            if (puVar23 != (ushort *)0x0) goto LAB_02a28ab4;
            uVar18 = 0;
          }
        }
        else {
          uVar32 = DAT_055f5f74 & 0xffffffff;
          if ((int)DAT_055f5f74 < 0) goto LAB_02a28ad0;
          puVar23 = (ushort *)((long)puVar35 + uVar32);
          uVar18 = 0;
          if (puVar23 == (ushort *)0x0) goto LAB_02a28adc;
LAB_02a28ab4:
          uVar18 = (uint)*puVar23;
        }
      }
    }
LAB_02a28adc:
    if ((int)uVar18 <= (int)uVar42) goto LAB_02a28444;
    puVar29 = (uint *)(ulong)*puVar35;
    if (*puVar35 == 0) {
      uVar42 = 0;
      uVar12 = uVar12 + 1;
    }
    else {
      if ((DAT_055f5f68 & 1) == 0) {
        DAT_055f5f68 = 1;
        uVar30 = 0xffffffff;
        DAT_055f5f6c = 0xffffffffffffffff;
        DAT_055f5f74 = 0xffffffffffffffff;
        DAT_055f5f7c = 0xffffffff;
LAB_02a28c58:
        if (puVar35 == puVar29) {
          uVar42 = 0;
          uVar12 = uVar12 + 1;
          goto LAB_02a28448;
        }
        do {
          if (uVar30 != 0xffffffff) {
            uVar42 = 0;
            uVar12 = uVar12 + 1;
            goto LAB_02a28448;
          }
          lVar11 = 0xc;
          if (*(char *)((long)puVar35 + (10 - (long)puVar29)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar35 + (lVar11 - (long)puVar29);
          if (lVar11 == 0) {
            uVar42 = 0;
            uVar12 = uVar12 + 1;
            goto LAB_02a28448;
          }
          uVar32 = (ulong)*(ushort *)((long)puVar35 + (8 - (long)puVar29));
          DAT_055f5f74 = CONCAT44(DAT_055f5f74._4_4_,0xfffffffe);
          if (uVar32 == 0) {
            uVar42 = 0;
            uVar12 = uVar12 + 1;
            goto LAB_02a28448;
          }
          puVar33 = (uint *)(lVar11 + 4);
          while (puVar33[-1] != 0x54706054) {
            puVar33 = puVar33 + 2;
            uVar32 = uVar32 - 1;
            if (uVar32 == 0) {
              uVar42 = 0;
              uVar12 = uVar12 + 1;
              goto LAB_02a28448;
            }
          }
          uVar30 = (ulong)*puVar33;
          uVar32 = 0;
          if (*puVar33 != 0xffffffff) {
            uVar32 = uVar30;
          }
          DAT_055f5f74 = CONCAT44(DAT_055f5f74._4_4_,(int)uVar32);
        } while ((int)uVar32 < 0);
      }
      else {
        uVar30 = DAT_055f5f74 & 0xffffffff;
        uVar32 = uVar30;
        if ((int)DAT_055f5f74 < 0) goto LAB_02a28c58;
      }
      if ((ushort *)((long)puVar35 + uVar32) != (ushort *)0x0) {
        uVar42 = (uint)*(ushort *)((long)puVar35 + uVar32);
        goto LAB_02a28444;
      }
      uVar42 = 0;
      uVar12 = uVar12 + 1;
    }
    goto LAB_02a28448;
  }
  lVar11 = plVar28[0x16];
  if (lVar11 != 0) {
    uVar32 = 0;
    if (*(uint **)(lVar11 + 8) != (uint *)0x0) {
      uVar32 = (ulong)**(uint **)(lVar11 + 8);
    }
    if (uVar32 <= uVar12) goto LAB_02a28dd0;
    if (((lVar11 != 0) && (puVar35 = *(uint **)(lVar11 + 8), puVar35 != (uint *)0x0)) &&
       (((*(uint *)(plVar28 + 0x19) <= uVar12 || (*(char *)(plVar28[0x1a] + uVar12) != '\0')) &&
        (((uVar12 < *puVar35 && (puVar35[1] != 0)) && ((ushort)puVar35[2] != 0)))))) {
      iVar10 = 0xc;
      if (*(char *)((long)puVar35 + 10) != '\0') {
        iVar10 = 0x1c;
      }
      puVar35 = (uint *)((ulong)(puVar35[1] * (int)uVar12 + (uint)(ushort)puVar35[2] * 8 + iVar10) +
                        (long)puVar35);
      if (puVar35 != (uint *)0x0) goto LAB_02a28478;
    }
LAB_02a28444:
    uVar12 = uVar12 + 1;
    goto LAB_02a28448;
  }
LAB_02a28dd0:
  *(uint *)(param_1 + 0x19f8c0) = uVar42 + 1;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar16 = malloc(0x1d8);
  }
  else {
    plVar16 = *(long **)(param_1 + 0xb38a8);
    if (plVar16 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar16 = (long *)(lVar20 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
        goto LAB_02a28e48;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x1d8,8);
  }
LAB_02a28e48:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar16 + 3) = 0x80;
  *(undefined1 *)((long)plVar16 + 0x9b) = 0;
  *plVar16 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar16 + 0x1c);
  plVar16[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar16[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar16 + 0x14) = uVar9;
  *plVar16 = (long)&PTR_LAB_04a9a8a0;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = (long)&PTR_LAB_04a9a8f8;
  plVar16[0x17] = 0;
  *(undefined8 *)((long)plVar16 + 0xbd) = 0;
  *(undefined4 *)(plVar16 + 0x19) = 0;
  plVar16[0x1f] = (long)&PTR_LAB_04a9a920;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar16 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar16 + 0x18b) = 0;
  plVar16[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar16 + 0x14c);
  plVar16[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar16 + 0x32) = 0xffffffff;
  plVar16[0x37] = 0;
  plVar16[0x33] = 0;
  plVar16[0x34] = 0;
  plVar16[0x35] = 0;
  *(undefined4 *)(plVar16 + 0x36) = 0;
  *(undefined4 *)(plVar16 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar16 + 0x39) = 0;
  plVar16[0x3a] = 0;
  plVar16[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc4148 = 1;
  puVar2 = PTR_DAT_04bc4150;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)(PTR_DAT_04bc4150 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar16,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7e0) = plVar16;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar16 = malloc(0x1d8);
  }
  else {
    plVar16 = *(long **)(param_1 + 0xb38a8);
    if (plVar16 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar16 = (long *)(lVar20 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
        goto LAB_02a29048;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x1d8,8);
  }
LAB_02a29048:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar16 + 3) = 0x80;
  *(undefined1 *)((long)plVar16 + 0x9b) = 0;
  *plVar16 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar16 + 0x1c);
  plVar16[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar16[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar16 + 0x14) = uVar9;
  *plVar16 = (long)&PTR_FUN_04a9a948;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = (long)&PTR_LAB_04a9a9a0;
  plVar16[0x17] = 0;
  *(undefined8 *)((long)plVar16 + 0xbd) = 0;
  *(undefined4 *)(plVar16 + 0x19) = 0;
  plVar16[0x1f] = (long)&PTR_LAB_04a9a9c8;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar16 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar16 + 0x18b) = 0;
  plVar16[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar16 + 0x14c);
  plVar16[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar16 + 0x32) = 0xffffffff;
  plVar16[0x37] = 0;
  plVar16[0x33] = 0;
  plVar16[0x34] = 0;
  plVar16[0x35] = 0;
  *(undefined4 *)(plVar16 + 0x36) = 0;
  *(undefined4 *)(plVar16 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar16 + 0x39) = 0;
  plVar16[0x3a] = 0;
  plVar16[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc4160 = 1;
  puVar2 = PTR_DAT_04bc4168;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)(PTR_DAT_04bc4168 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar16,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7e8) = plVar16;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar16 = malloc(0x1d8);
  }
  else {
    plVar16 = *(long **)(param_1 + 0xb38a8);
    if (plVar16 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar16 = (long *)(lVar20 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
        goto LAB_02a29238;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x1d8,8);
  }
LAB_02a29238:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar16 + 3) = 0x80;
  *(undefined1 *)((long)plVar16 + 0x9b) = 0;
  *plVar16 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar16 + 0x1c);
  plVar16[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar16[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar16 + 0x14) = uVar9;
  *plVar16 = (long)&PTR_FUN_04a9a9f0;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = (long)&PTR_LAB_04a9aa48;
  plVar16[0x17] = 0;
  *(undefined8 *)((long)plVar16 + 0xbd) = 0;
  *(undefined4 *)(plVar16 + 0x19) = 0;
  plVar16[0x1f] = (long)&PTR_LAB_04a9aa70;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar16 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar16 + 0x18b) = 0;
  plVar16[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar16 + 0x14c);
  plVar16[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar16 + 0x32) = 0xffffffff;
  plVar16[0x37] = 0;
  plVar16[0x33] = 0;
  plVar16[0x34] = 0;
  plVar16[0x35] = 0;
  *(undefined4 *)(plVar16 + 0x36) = 0;
  *(undefined4 *)(plVar16 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar16 + 0x39) = 0;
  plVar16[0x3a] = 0;
  plVar16[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc43b0 = 1;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)PTR_DAT_04bc43b8 = 0xffffffffffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar16,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7f0) = plVar16;
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar16 = malloc(0x1d8);
  }
  else {
    plVar16 = *(long **)(param_1 + 0xb38a8);
    if (plVar16 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar16 = (long *)(lVar20 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
        goto LAB_02a29420;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x1d8,8);
  }
LAB_02a29420:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar16 + 3) = 0x80;
  *(undefined1 *)((long)plVar16 + 0x9b) = 0;
  *plVar16 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar16 + 0x1c);
  plVar16[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar16[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar16 + 0x14) = uVar9;
  *plVar16 = (long)&PTR_FUN_04a9aa98;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = (long)&PTR_LAB_04a9aaf0;
  plVar16[0x17] = 0;
  *(undefined8 *)((long)plVar16 + 0xbd) = 0;
  *(undefined4 *)(plVar16 + 0x19) = 0;
  plVar16[0x1f] = (long)&PTR_LAB_04a9ab18;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar16 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar16 + 0x18b) = 0;
  plVar16[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar16 + 0x14c);
  plVar16[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  plVar16[0x37] = 0;
  plVar16[0x35] = 0;
  *(undefined4 *)(plVar16 + 0x32) = 0xffffffff;
  plVar16[0x33] = 0;
  plVar16[0x34] = 0;
  *(undefined4 *)(plVar16 + 0x36) = 0;
  *(undefined4 *)(plVar16 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar16 + 0x39) = 0;
  plVar16[0x27] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bc43c0;
  plVar16[0x3a] = 0;
  *puVar2 = 1;
  puVar2 = PTR_DAT_04bc43c8;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)PTR_DAT_04bc43c8 = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 8) = 0xffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar16,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_108,uVar41);
  }
  *(long **)(param_1 + 0x19f7f8) = plVar16;
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  FUN_02a1fe50(param_1 + 0xb38e8,*(undefined8 *)(param_1 + 0xb38a8));
  *(undefined8 **)PTR_DAT_04bc43f0 = &DAT_055f5f30;
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  uVar41 = 0;
  if (*(long *)PTR_DAT_04bc3ee8 != 0) {
    uVar41 = *(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0xa0);
  }
  *(undefined8 *)(param_1 + 0xb3b28) = uVar41;
  plVar16 = *(long **)(param_1 + 0xb3b80);
  while (plVar16 != (long *)(param_1 + 0xb3b78)) {
    plVar28 = (long *)plVar16[1];
    plVar21 = plVar28;
    if (*plVar16 != 0) {
      *(long **)(*plVar16 + 8) = plVar28;
      plVar21 = (long *)plVar16[1];
    }
    if (plVar21 != (long *)0x0) {
      *plVar21 = *plVar16;
    }
    *plVar16 = 0;
    plVar16[1] = 0;
    *(int *)(param_1 + 0xb3b88) = *(int *)(param_1 + 0xb3b88) + -1;
    plVar16[-2] = *(long *)(param_1 + 0xb3b90);
    *(long **)(param_1 + 0xb3b90) = plVar16 + -2;
    plVar16 = plVar28;
  }
  *(undefined8 *)(param_1 + 0xb44a0) = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0xb44a8) = 0;
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  local_108 = *(long **)(param_1 + 0xb38a8);
  local_f8._0_4_ = 0x406363e;
  local_f8._4_4_ = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_100 = (undefined **)puVar1;
  FUN_02a54764(param_1 + 0xb44b8,&local_108);
  DAT_055f5eb8 = *(undefined8 *)(param_1 + 0xb4518);
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  *(undefined8 *)(param_1 + 0x19d120) = 0x3ea8f5c341200000;
  *(undefined8 *)(param_1 + 0x19d110) = 0x4200000042000000;
  *(undefined8 *)(param_1 + 0x19d118) = 0x412000003f800000;
  *(undefined4 *)(param_1 + 0x19d150) = 0x41200000;
  *(undefined8 **)(param_1 + 0x19d210) = (undefined8 *)(param_1 + 0x19d220);
  *(undefined8 *)(param_1 + 0x19d170) = 0x3eb3333300000000;
  *(undefined2 *)(param_1 + 0x19d16a) = 0x2626;
  *(undefined8 **)(param_1 + 0x19d160) = (undefined8 *)(param_1 + 0x19d170);
  *(undefined4 *)(param_1 + 0x19d2c0) = 0x41200000;
  *(undefined8 *)(FUN_0019d174 + param_1 + 4) = 0x3eb333333e4ccccd;
  *(undefined8 *)(param_1 + 0x19d180) = 0x3ea7a0523e800000;
  *(undefined8 *)(param_1 + 0x19d188) = 0x3ea187583e8ccccd;
  *(undefined8 *)(FUN_0019d18c + param_1 + 4) = 0x3e9b31163e99999a;
  *(undefined8 *)(param_1 + 0x19d198) = 0x3e9495b53ea66666;
  *(undefined8 *)(param_1 + 0x19d1a0) = 0x3e8dab883eb33333;
  *(undefined8 *)(param_1 + 0x19d1a8) = 0x3e8666673ec00000;
  *(undefined8 *)(param_1 + 0x19d1b0) = 0x3e7d6d543ecccccd;
  *(undefined8 *)(param_1 + 0x19d1b8) = 0x3e6d0f2f3ed9999a;
  *(undefined8 *)(param_1 + 0x19d1c0) = 0x3e5b796c3ee66666;
  *(undefined8 *)(param_1 + 0x19d1c8) = 0x3e485a0b3ef33333;
  *(undefined8 *)(param_1 + 0x19d1d0) = 0x3e3333343f000000;
  *(undefined8 *)(param_1 + 0x19d1d8) = 0x3e1b311a3f066666;
  *(undefined8 *)(param_1 + 0x19d1e0) = 0x3dfd6d543f0ccccd;
  *(undefined8 *)(param_1 + 0x19d1e8) = 0x3db333393f133333;
  *(undefined8 *)(param_1 + 0x19d1f0) = 0x3d8139173f1645a2;
  *(undefined1 *)(param_1 + 0x19d2d8) = 6;
  *(undefined1 *)(param_1 + 0x19d168) = 6;
  *(undefined1 *)(param_1 + 0x19d218) = 6;
  *(undefined8 *)(param_1 + 0x19d1f8) = 0x3d3da5ce3f17ced9;
  *(undefined8 *)(param_1 + 0x19d200) = 0x3f19999a;
  *(undefined8 *)(param_1 + 0x19d230) = 0x3d2f94523e52f1aa;
  *(undefined8 *)(param_1 + 0x19d238) = 0x3d8139123e5a1cac;
  *(undefined8 *)(param_1 + 0x19d240) = 0x3db333303e666666;
  *(undefined8 *)(param_1 + 0x19d248) = 0x3dfd6d533e800000;
  *(undefined8 *)(param_1 + 0x19d250) = 0x3e1b31163e8ccccd;
  *(undefined8 *)(param_1 + 0x19d258) = 0x3e3333333e99999a;
  *(undefined8 *)(param_1 + 0x19d260) = 0x3e485a073ea66666;
  *(undefined8 *)(param_1 + 0x19d268) = 0x3e5b79693eb33333;
  *(undefined1 *)(param_1 + 0x19d2da) = 0x26;
  *(undefined1 *)(param_1 + 0x19d21a) = 0x26;
  *(undefined1 *)(param_1 + 0x19d21b) = 0x26;
  *(undefined4 *)(param_1 + 0x19d430) = 0x41200000;
  *(undefined1 *)(param_1 + 0x19d448) = 6;
  *(undefined1 *)(param_1 + 0x19d44a) = 0x26;
  *(undefined8 *)(param_1 + 0x19d270) = 0x3e6d0f2f3ec00000;
  *(undefined8 *)(param_1 + 0x19d278) = 0x3e7d6d543ecccccd;
  *(undefined8 *)(param_1 + 0x19d280) = 0x3e8666663ed9999a;
  *(undefined8 *)(param_1 + 0x19d288) = 0x3e8dab873ee66666;
  *(undefined8 *)(param_1 + 0x19d290) = 0x3e9495b43ef33333;
  *(undefined8 *)(param_1 + 0x19d298) = 0x3e9b31163f000000;
  *(undefined8 *)(param_1 + 0x19d2a0) = 0x3ea187583f066666;
  *(undefined8 *)(param_1 + 0x19d2a8) = 0x3ea7a0523f0ccccd;
  *(undefined8 *)(param_1 + 0x19d220) = 0;
  *(undefined8 *)(param_1 + 0x19d228) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x19d390) = 0;
  *(undefined8 *)(param_1 + 0x19d398) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x19d2b0) = 0x3eb333333f19999a;
  *(undefined8 *)(param_1 + 0x19d2e0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x19d2e8) = 0x3f8000003e4ccccd;
  *(undefined8 *)(&DAT_0019d2f0 + param_1) = 0x3f6f77513e800000;
  *(undefined8 **)(param_1 + 0x19d380) = (undefined8 *)(param_1 + 0x19d390);
  *(undefined8 **)(param_1 + 0x19d2d0) = (undefined8 *)(param_1 + 0x19d2e0);
  *(undefined1 *)(param_1 + 0x19d2db) = 0x26;
  *(undefined1 *)(param_1 + 0x19d388) = 6;
  *(undefined1 *)(param_1 + 0x19d38a) = 0x26;
  *(undefined1 *)(param_1 + 0x19d38b) = 0x26;
  *(undefined8 *)(&DAT_0019d2f8 + param_1) = 0x3f66c15a3e8ccccd;
  *(undefined8 *)(&DAT_0019d300 + param_1) = 0x3f5db3d73e99999a;
  *(undefined8 *)(param_1 + 0x19d308) = 0x3f5443953ea66666;
  *(undefined8 *)(param_1 + 0x19d310) = 0x3f4a62c23eb33333;
  *(undefined8 *)(param_1 + 0x19d318) = 0x3f4000013ec00000;
  *(undefined8 *)(param_1 + 0x19d320) = 0x3f3504f33ecccccd;
  *(undefined8 *)(param_1 + 0x19d328) = 0x3f2953fd3ed9999a;
  *(undefined8 *)(param_1 + 0x19d330) = 0x3f1cc4723ee66666;
  *(undefined8 *)(param_1 + 0x19d338) = 0x3f0f1bbf3ef33333;
  *(undefined8 *)(param_1 + 0x19d340) = 0x3f0000013f000000;
  *(undefined8 *)(param_1 + 0x19d348) = 0x3eddb3dc3f066666;
  *(undefined8 *)(param_1 + 0x19d350) = 0x3eb504f33f0ccccd;
  *(undefined8 *)(param_1 + 0x19d358) = 0x3e8000043f133333;
  *(undefined8 *)(param_1 + 0x19d360) = 0x3e389ab43f1645a2;
  *(undefined8 *)(param_1 + 0x19d368) = 0x3e07766f3f17ced9;
  *(undefined8 *)(param_1 + 0x19d370) = 0x3f19999a;
  *(undefined8 *)(param_1 + 0x19d3a0) = 0x3dfad3e33e52f1aa;
  *(undefined8 *)(&DAT_0019d3a8 + param_1) = 0x3e389aac3e5a1cac;
  *(undefined8 *)(param_1 + 0x19d3b0) = 0x3e7ffffc3e666666;
  *(undefined8 *)(param_1 + 0x19d3b8) = 0x3eb504f23e800000;
  *(undefined8 *)(param_1 + 0x19d3c0) = 0x3eddb3d73e8ccccd;
  *(undefined8 *)(param_1 + 0x19d3c8) = 0x3f0000003e99999a;
  *(undefined8 *)(param_1 + 0x19d3d0) = 0x3f0f1bbc3ea66666;
  *(undefined8 *)(param_1 + 0x19d3d8) = 0x3f1cc4703eb33333;
  *(undefined8 *)(param_1 + 0x19d3e0) = 0x3f2953fd3ec00000;
  *(undefined8 *)(param_1 + 0x19d3e8) = 0x3f3504f33ecccccd;
  *(undefined8 *)(param_1 + 0x19d3f0) = 0x3f4000003ed9999a;
  *(undefined8 *)(param_1 + 0x19d3f8) = 0x3f4a62c13ee66666;
  *(undefined8 *)(param_1 + 0x19d400) = 0x3f5443933ef33333;
  *(undefined8 *)(param_1 + 0x19d408) = 0x3f5db3d73f000000;
  *(undefined8 *)(param_1 + 0x19d410) = 0x3f66c1593f066666;
  *(undefined8 *)(param_1 + 0x19d418) = 0x3f6f77513f0ccccd;
  *(undefined8 *)(param_1 + 0x19d420) = 0x3f8000003f19999a;
  *(undefined8 *)(param_1 + 0x19d450) = 0x3eb3333300000000;
  *(undefined8 *)(param_1 + 0x19d458) = 0x3eb333333e4ccccd;
  *(undefined8 *)(param_1 + 0x19d460) = 0x3ead69c33e800000;
  *(undefined8 **)(param_1 + 0x19d440) = (undefined8 *)(param_1 + 0x19d450);
  *(undefined1 *)(param_1 + 0x19d44b) = 0x26;
  (&LAB_0019d4f8)[param_1] = 6;
  *(undefined1 *)(param_1 + 0x19d4fa) = 0x26;
  *(undefined1 *)(param_1 + 0x19d4fb) = 0x26;
  *(undefined8 *)(param_1 + 0x19d468) = 0x3eaa5d463e8ccccd;
  *(undefined8 *)(param_1 + 0x19d470) = 0x3ea732253e99999a;
  *(undefined8 *)(param_1 + 0x19d478) = 0x3ea3e4743ea66666;
  *(undefined8 *)(param_1 + 0x19d480) = 0x3ea06f5d3eb33333;
  *(undefined8 *)(param_1 + 0x19d488) = 0x3e9ccccd3ec00000;
  *(undefined8 *)(param_1 + 0x19d490) = 0x3e98f4ee3ecccccd;
  *(undefined8 *)(param_1 + 0x19d498) = 0x3e94dd653ed9999a;
  *(undefined8 *)(param_1 + 0x19d4a0) = 0x3e9077f53ee66666;
  *(undefined8 *)(param_1 + 0x19d4a8) = 0x3e8bb01c3ef33333;
  *(undefined8 *)(param_1 + 0x19d4b0) = 0x3e8666673f000000;
  *(undefined8 *)(param_1 + 0x19d4b8) = 0x3e8065e03f066666;
  *(undefined8 *)(param_1 + 0x19d4c0) = 0x3e728e883f0ccccd;
  *(undefined8 *)(&DAT_0019d4c8 + param_1) = 0x3e6000013f133333;
  *(undefined8 *)(&DAT_0019d4d0 + param_1) = 0x3e5381793f1645a2;
  *(undefined8 *)(&LAB_0019d4d8 + param_1) = 0x3e4ae7ed3f17ced9;
  *(undefined8 *)(&LAB_0019d4e0 + param_1) = 0x3e3333333f19999a;
  *(undefined1 **)(&LAB_0019d4f0 + param_1) = &LAB_0019d500 + param_1;
  *(undefined8 *)(param_1 + 0x19d590) = 0x3eb333333f19999a;
  *(undefined4 *)(param_1 + 0x19d5a0) = 0x41200000;
  *(undefined1 *)(param_1 + 0x19d5b8) = 6;
  *(undefined1 *)(param_1 + 0x19d5ba) = 0x26;
  *(undefined8 *)(&LAB_0019d500 + param_1) = 0x3e33333300000000;
  *(undefined8 *)(&LAB_0019d508 + param_1) = 0x3e3333333e4ccccd;
  *(undefined8 *)(&LAB_0019d510 + param_1) = 0x3e4925bd3e52f1aa;
  *(undefined8 *)(FUN_0019d518 + param_1) = 0x3e5381773e5a1cac;
  *(undefined8 *)(param_1 + 0x19d520) = 0x3e5fffff3e666666;
  *(undefined8 *)(param_1 + 0x19d528) = 0x3e728e883e800000;
  *(undefined8 *)(FUN_0019d530 + param_1) = 0x3e8065df3e8ccccd;
  *(undefined8 *)(param_1 + 0x19d538) = 0x3e8666663e99999a;
  *(undefined8 *)(param_1 + 0x19d540) = 0x3e8bb01b3ea66666;
  *(undefined8 *)(&DAT_0019d548 + param_1) = 0x3e9077f43eb33333;
  *(undefined8 *)(FUN_0019d550 + param_1) = 0x3e94dd653ec00000;
  *(undefined8 *)(param_1 + 0x19d558) = 0x3e98f4ee3ecccccd;
  *(undefined8 *)(param_1 + 0x19d560) = 0x3e9ccccd3ed9999a;
  *(undefined8 *)(param_1 + 0x19d568) = 0x3ea06f5d3ee66666;
  *(undefined8 *)(param_1 + 0x19d570) = 0x3ea3e4733ef33333;
  *(undefined8 *)(param_1 + 0x19d578) = 0x3ea732253f000000;
  *(undefined8 *)(param_1 + 0x19d580) = 0x3eaa5d453f066666;
  *(undefined8 *)(param_1 + 0x19d588) = 0x3ead69c33f0ccccd;
  *(undefined8 *)(param_1 + 0x19d5c0) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x19d5c8) = 0x3f8000003e4ccccd;
  *(undefined8 *)(param_1 + 0x19d5d0) = 0x3f77bba83e800000;
  *(undefined8 **)(param_1 + 0x19d5b0) = (undefined8 *)(param_1 + 0x19d5c0);
  *(undefined1 *)(param_1 + 0x19d5bb) = 0x26;
  *(undefined1 *)(param_1 + 0x19d668) = 6;
  *(undefined1 *)(param_1 + 0x19d66a) = 0x26;
  *(undefined1 *)(param_1 + 0x19d66b) = 0x26;
  *(undefined8 *)(param_1 + 0x19d5d8) = 0x3f7360ad3e8ccccd;
  *(undefined8 *)(param_1 + 0x19d5e0) = 0x3f6ed9ec3e99999a;
  *(undefined8 *)(param_1 + 0x19d5e8) = 0x3f6a21ca3ea66666;
  *(undefined8 *)(param_1 + 0x19d5f0) = 0x3f6531613eb33333;
  *(undefined8 *)(&DAT_0019d5f8 + param_1) = 0x3f6000003ec00000;
  *(undefined8 *)(FUN_0019d600 + param_1) = 0x3f5a827a3ecccccd;
  *(undefined8 *)(param_1 + 0x19d608) = 0x3f54a9fe3ed9999a;
  *(undefined8 *)(param_1 + 0x19d610) = 0x3f4e62393ee66666;
  *(undefined8 *)(param_1 + 0x19d618) = 0x3f478de03ef33333;
  *(undefined8 *)(param_1 + 0x19d620) = 0x3f4000003f000000;
  *(undefined8 *)(param_1 + 0x19d628) = 0x3f376cf73f066666;
  *(undefined8 *)(param_1 + 0x19d630) = 0x3f2d413d3f0ccccd;
  *(undefined8 *)(param_1 + 0x19d638) = 0x3f2000013f133333;
  *(undefined8 *)(param_1 + 0x19d640) = 0x3f1713563f1645a2;
  *(undefined8 *)(param_1 + 0x19d648) = 0x3f10eece3f17ced9;
  *(undefined8 *)(param_1 + 0x19d650) = 0x3f0000003f19999a;
  *(undefined8 **)(param_1 + 0x19d660) = (undefined8 *)(param_1 + 0x19d670);
  *(undefined8 *)(param_1 + 0x19d700) = 0x3f8000003f19999a;
  *(undefined4 *)(param_1 + 0x19d710) = 0x41200000;
  *(undefined1 *)(param_1 + 0x19d728) = 6;
  *(undefined1 *)(param_1 + 0x19d72a) = 0x26;
  *(undefined8 *)(param_1 + 0x19d670) = 0x3f00000000000000;
  *(undefined8 *)(param_1 + 0x19d678) = 0x3f0000003e4ccccd;
  *(undefined8 *)(param_1 + 0x19d680) = 0x3f0fad3e3e52f1aa;
  *(undefined8 *)(param_1 + 0x19d688) = 0x3f1713563e5a1cac;
  *(undefined8 *)(param_1 + 0x19d690) = 0x3f2000003e666666;
  *(undefined8 *)(param_1 + 0x19d698) = 0x3f2d413c3e800000;
  *(undefined8 *)(param_1 + 0x19d6a0) = 0x3f376cf63e8ccccd;
  *(undefined8 *)(param_1 + 0x19d6a8) = 0x3f4000003e99999a;
  *(undefined8 *)(param_1 + 0x19d6b0) = 0x3f478dde3ea66666;
  *(undefined8 *)(param_1 + 0x19d6b8) = 0x3f4e62383eb33333;
  *(undefined8 *)(param_1 + 0x19d6c0) = 0x3f54a9fe3ec00000;
  *(undefined8 *)(param_1 + 0x19d6c8) = 0x3f5a827a3ecccccd;
  *(undefined8 *)(FUN_0019d6cc + param_1 + 4) = 0x3f6000003ed9999a;
  *(undefined8 *)(param_1 + 0x19d6d8) = 0x3f6531603ee66666;
  *(undefined8 *)(FUN_0019d6e0 + param_1) = 0x3f6a21ca3ef33333;
  *(undefined8 *)(FUN_0019d6e8 + param_1) = 0x3f6ed9ec3f000000;
  *(undefined8 *)(param_1 + 0x19d6f0) = 0x3f7360ac3f066666;
  *(undefined8 *)(param_1 + 0x19d6f8) = 0x3f77bba83f0ccccd;
  *(undefined8 *)(param_1 + 0x19d730) = 0x3e33333300000000;
  *(undefined8 *)(param_1 + 0x19d738) = 0x3e3333333e4ccccd;
  *(undefined8 *)(param_1 + 0x19d740) = 0x3e27a0523e800000;
  *(undefined8 **)(param_1 + 0x19d720) = (undefined8 *)(param_1 + 0x19d730);
  *(undefined1 *)(param_1 + 0x19d72b) = 0x26;
  *(undefined8 *)(param_1 + 0x19d778) = 0x3ded0f2f3ed9999a;
  *(undefined8 *)(param_1 + 0x19d780) = 0x3ddb796c3ee66666;
  *(undefined8 *)(param_1 + 0x19d788) = 0x3dc85a0b3ef33333;
  *(undefined8 *)(param_1 + 0x19d790) = 0x3db333343f000000;
  *(undefined1 *)(param_1 + 0x19d7d8) = 6;
  *(undefined1 *)(param_1 + 0x19d7da) = 0x26;
  *(undefined1 *)(param_1 + 0x19d7db) = 0x26;
  *(undefined8 *)(param_1 + 0x19d748) = 0x3e2187583e8ccccd;
  *(undefined8 *)(param_1 + 0x19d750) = 0x3e1b31163e99999a;
  *(undefined8 *)(param_1 + 0x19d758) = 0x3e1495b53ea66666;
  *(undefined8 *)(param_1 + 0x19d760) = 0x3e0dab883eb33333;
  *(undefined8 *)(param_1 + 0x19d768) = 0x3e0666673ec00000;
  *(undefined8 *)(param_1 + 0x19d770) = 0x3dfd6d543ecccccd;
  *(undefined8 *)(param_1 + 0x19d7a8) = 0x3d3333393f133333;
  *(undefined8 *)(FUN_0019d7b0 + param_1) = 0x3d0139173f1645a2;
  *(undefined8 *)(param_1 + 0x19d7b8) = 0x3cbda5ce3f17ced9;
  *(undefined8 *)(param_1 + 0x19d7c0) = 0x3f19999a;
  *(undefined8 **)(param_1 + 0x19d7d0) = (undefined8 *)(param_1 + 0x19d7e0);
  *(undefined4 *)(param_1 + 0x19d880) = 0x41200000;
  *(undefined8 *)(param_1 + 0x19d7e0) = 0;
  *(undefined8 *)(param_1 + 0x19d7e8) = 0x3e4ccccd;
  FUN_0019d894[param_1 + 4] = (code)0x6;
  *(undefined8 *)(FUN_0019d7fc + param_1 + 4) = 0x3d3333303e666666;
  *(undefined8 *)(param_1 + 0x19d808) = 0x3d7d6d533e800000;
  FUN_0019d894[param_1 + 6] = (code)0x26;
  *(undefined8 *)(param_1 + 0x19d810) = 0x3d9b31163e8ccccd;
  *(undefined8 *)(param_1 + 0x19d818) = 0x3db333333e99999a;
  *(undefined8 *)(param_1 + 0x19d820) = 0x3dc85a073ea66666;
  *(undefined8 *)(param_1 + 0x19d828) = 0x3ddb79693eb33333;
  *(undefined8 *)(param_1 + 0x19d830) = 0x3ded0f2f3ec00000;
  *(undefined8 *)(param_1 + 0x19d838) = 0x3dfd6d543ecccccd;
  *(undefined8 *)(param_1 + 0x19d798) = 0x3d9b311a3f066666;
  *(undefined8 *)(param_1 + 0x19d7a0) = 0x3d7d6d543f0ccccd;
  *(undefined8 *)(param_1 + 0x19d840) = 0x3e0666663ed9999a;
  *(undefined8 *)(param_1 + 0x19d848) = 0x3e0dab873ee66666;
  *(undefined8 *)(param_1 + 0x19d850) = 0x3e1495b43ef33333;
  *(undefined8 *)(param_1 + 0x19d858) = 0x3e1b31163f000000;
  *(undefined8 *)(param_1 + 0x19d860) = 0x3e2187583f066666;
  *(undefined8 *)(param_1 + 0x19d868) = 0x3e27a0523f0ccccd;
  *(undefined8 *)(param_1 + 0x19d7f0) = 0x3caf94523e52f1aa;
  *(undefined8 *)(param_1 + 0x19d7f8) = 0x3d0139123e5a1cac;
  *(undefined8 *)(param_1 + 0x19d870) = 0x3e3333333f19999a;
  *(undefined8 *)(param_1 + 0x19d8a0) = 0x3e33333300000000;
  *(undefined8 *)(param_1 + 0x19d908) = 0x3d9b311a3f066666;
  *(undefined8 *)(param_1 + 0x19d910) = 0x3d7d6d543f0ccccd;
  *(undefined8 *)(param_1 + 0x19d9d8) = 0x3e27a0523f0ccccd;
  *(undefined8 *)(param_1 + 0x19d9e0) = 0x3e3333333f19999a;
  *(undefined8 *)(param_1 + 0x19d950) = 0;
  *(undefined8 *)(param_1 + 0x19d958) = 0x3e4ccccd;
  *(undefined8 *)(param_1 + 0x19d960) = 0x3caf94523e52f1aa;
  *(undefined8 **)(param_1 + 0x19d940) = (undefined8 *)(param_1 + 0x19d950);
  *(undefined8 *)(param_1 + 0x19d968) = 0x3d0139123e5a1cac;
  *(undefined8 *)(param_1 + 0x19d970) = 0x3d3333303e666666;
  *(undefined4 *)(param_1 + 0x19d9f0) = 0x41200000;
  *(undefined8 *)(param_1 + 0x19d978) = 0x3d7d6d533e800000;
  *(undefined8 *)(param_1 + 0x19d980) = 0x3d9b31163e8ccccd;
  *(undefined1 *)(param_1 + 0x19da08) = 6;
  *(undefined8 *)(param_1 + 0x19d988) = 0x3db333333e99999a;
  *(undefined8 *)(param_1 + 0x19d990) = 0x3dc85a073ea66666;
  *(undefined1 *)(param_1 + 0x19da0a) = 0x26;
  *(undefined8 *)(FUN_0019d994 + param_1 + 4) = 0x3ddb79693eb33333;
  *(undefined8 *)(param_1 + 0x19d9a0) = 0x3ded0f2f3ec00000;
  *(undefined8 **)(param_1 + 0x19d890) = (undefined8 *)(param_1 + 0x19d8a0);
  *(undefined8 *)(param_1 + 0x19d9a8) = 0x3dfd6d543ecccccd;
  *(undefined8 *)(param_1 + 0x19d9b0) = 0x3e0666663ed9999a;
  FUN_0019d894[param_1 + 7] = (code)0x26;
  *(undefined8 *)(param_1 + 0x19d9b8) = 0x3e0dab873ee66666;
  *(undefined8 *)(param_1 + 0x19d9c0) = 0x3e1495b43ef33333;
  *(undefined1 *)(param_1 + 0x19d948) = 6;
  *(undefined8 *)(param_1 + 0x19d9c8) = 0x3e1b31163f000000;
  *(undefined8 *)(param_1 + 0x19d9d0) = 0x3e2187583f066666;
  *(undefined1 *)(param_1 + 0x19d94a) = 0x26;
  *(undefined8 *)(param_1 + 0x19d8e8) = 0x3ded0f2f3ed9999a;
  *(undefined8 *)(param_1 + 0x19d8f0) = 0x3ddb796c3ee66666;
  *(undefined1 *)(param_1 + 0x19d94b) = 0x26;
  *(undefined8 *)(param_1 + 0x19d8f8) = 0x3dc85a0b3ef33333;
  *(undefined8 *)(param_1 + 0x19d900) = 0x3db333343f000000;
  *(undefined1 *)(param_1 + 0x19dcd8) = 6;
  *(undefined1 *)(param_1 + 0x19dcda) = 0x26;
  *(undefined1 *)(param_1 + 0x19de38) = 6;
  *(undefined1 *)(param_1 + 0x19de3a) = 0x26;
  *(undefined8 *)(param_1 + 0x19d8b0) = 0x3e27a0523e800000;
  *(undefined8 *)(param_1 + 0x19d8b8) = 0x3e2187583e8ccccd;
  *(undefined8 *)(param_1 + 0x19d8c0) = 0x3e1b31163e99999a;
  *(undefined8 *)(param_1 + 0x19d8c8) = 0x3e1495b53ea66666;
  *(undefined8 *)(param_1 + 0x19d8d0) = 0x3e0dab883eb33333;
  *(undefined8 *)(param_1 + 0x19d8d8) = 0x3e0666673ec00000;
  *(undefined8 *)(param_1 + 0x19d8e0) = 0x3dfd6d543ecccccd;
  *(undefined8 *)(&DAT_0019ddb0 + param_1) = 0x3f5db3d73e800000;
  *(undefined8 *)(param_1 + 0x19ddb8) = 0x3f562f5a3e99999a;
  *(undefined8 *)(param_1 + 0x19ddc0) = 0x3f4e64d03eb33333;
  *(undefined8 *)(param_1 + 0x19ddc8) = 0x3f464bf83ecccccd;
  *(undefined8 *)(param_1 + 0x19dde0) = 0x3f2bbae23f0ccccd;
  *(undefined8 *)(param_1 + 0x19dde8) = 0x3f21e89b3f19999a;
  *(undefined8 *)(param_1 + 0x19ddf0) = 0x3f17739f3f266666;
  *(undefined8 *)(param_1 + 0x19ddf8) = 0x3f0c378c3f333333;
  *(undefined8 *)(param_1 + 0x19de00) = 0x3f0000003f400000;
  *(undefined8 *)(param_1 + 0x19de08) = 0x3ee4f92e3f4ccccd;
  *(undefined8 *)(param_1 + 0x19de10) = 0x3ec64bf73f59999a;
  *(undefined8 *)(param_1 + 0x19de18) = 0x3ea1e89c3f666666;
  *(undefined8 *)(param_1 + 0x19de20) = 0x3f800000;
  *(undefined8 *)(param_1 + 0x19da10) = 0x3eb3333300000000;
  *(undefined8 **)(param_1 + 0x19da00) = (undefined8 *)(param_1 + 0x19da10);
  *(undefined1 *)(param_1 + 0x19da0b) = 0x26;
  *(undefined1 *)(param_1 + 0x19dab8) = 6;
  *(undefined1 *)(param_1 + 0x19daba) = 0x26;
  *(undefined1 *)(param_1 + 0x19dabb) = 0x26;
  *(undefined8 *)(param_1 + 0x19d918) = 0x3d3333393f133333;
  *(undefined8 *)(param_1 + 0x19d920) = 0x3d0139173f1645a2;
  *(undefined8 *)(param_1 + 0x19d928) = 0x3cbda5ce3f17ced9;
  *(undefined8 *)(param_1 + 0x19d930) = 0x3f19999a;
  *(undefined8 *)(param_1 + 0x19d8a8) = 0x3e3333333e4ccccd;
  *(undefined8 *)(param_1 + 0x19da18) = 0x3eb333333e4ccccd;
  *(undefined8 *)(param_1 + 0x19da20) = 0x3ead69c33e800000;
  *(undefined8 *)(FUN_0019da24 + param_1 + 4) = 0x3eaa5d463e8ccccd;
  *(undefined8 *)(param_1 + 0x19da30) = 0x3ea732253e99999a;
  *(undefined8 *)(param_1 + 0x19da38) = 0x3ea3e4743ea66666;
  *(undefined8 *)(FUN_0019da3c + param_1 + 4) = 0x3ea06f5d3eb33333;
  *(undefined8 *)(param_1 + 0x19da58) = 0x3e94dd653ed9999a;
  *(undefined8 *)(param_1 + 0x19da60) = 0x3e9077f53ee66666;
  *(undefined8 *)(param_1 + 0x19da68) = 0x3e8bb01c3ef33333;
  *(undefined8 *)(param_1 + 0x19da70) = 0x3e8666673f000000;
  *(undefined8 *)(param_1 + 0x19da78) = 0x3e8065e03f066666;
  *(undefined8 *)(param_1 + 0x19da80) = 0x3e728e883f0ccccd;
  *(undefined8 *)(param_1 + 0x19da88) = 0x3e6000013f133333;
  *(undefined8 *)(param_1 + 0x19da90) = 0x3e5381793f1645a2;
  *(undefined8 *)(&DAT_0019da98 + param_1) = 0x3e4ae7ed3f17ced9;
  *(undefined8 *)(param_1 + 0x19daa0) = 0x3e3333333f19999a;
  *(undefined4 *)(param_1 + 0x19db60) = 0x41200000;
  *(undefined8 **)(param_1 + 0x19dab0) = (undefined8 *)(param_1 + 0x19dac0);
  *(undefined1 *)(param_1 + 0x19db78) = 6;
  *(undefined1 *)(param_1 + 0x19db7a) = 0x26;
  *(undefined8 *)(param_1 + 0x19dac0) = 0x3e33333300000000;
  *(undefined8 *)(param_1 + 0x19dac8) = 0x3e3333333e4ccccd;
  *(undefined8 *)(param_1 + 0x19dad0) = 0x3e4925bd3e52f1aa;
  *(undefined8 *)(param_1 + 0x19dad8) = 0x3e5381773e5a1cac;
  *(undefined8 *)(param_1 + 0x19dae0) = 0x3e5fffff3e666666;
  *(undefined8 *)(param_1 + 0x19dae8) = 0x3e728e883e800000;
  *(undefined8 *)(param_1 + 0x19daf0) = 0x3e8065df3e8ccccd;
  *(undefined8 *)(param_1 + 0x19daf8) = 0x3e8666663e99999a;
  *(undefined8 *)(param_1 + 0x19db00) = 0x3e8bb01b3ea66666;
  *(undefined8 *)(param_1 + 0x19db08) = 0x3e9077f43eb33333;
  *(undefined8 *)(param_1 + 0x19db10) = 0x3e94dd653ec00000;
  *(undefined8 *)(param_1 + 0x19da48) = 0x3e9ccccd3ec00000;
  *(undefined8 *)(FUN_0019da50 + param_1) = 0x3e98f4ee3ecccccd;
  *(undefined8 *)(param_1 + 0x19db18) = 0x3e98f4ee3ecccccd;
  *(undefined8 *)(param_1 + 0x19db20) = 0x3e9ccccd3ed9999a;
  *(undefined8 *)(param_1 + 0x19db28) = 0x3ea06f5d3ee66666;
  *(undefined8 *)(param_1 + 0x19db30) = 0x3ea3e4733ef33333;
  *(undefined8 *)(param_1 + 0x19db38) = 0x3ea732253f000000;
  *(undefined8 *)(param_1 + 0x19db40) = 0x3eaa5d453f066666;
  *(undefined8 *)(param_1 + 0x19db48) = 0x3ead69c33f0ccccd;
  *(undefined8 *)(param_1 + 0x19db50) = 0x3eb333333f19999a;
  *(undefined8 *)(param_1 + 0x19dc38) = 0x3f0000003e4ccccd;
  *(undefined8 *)(param_1 + 0x19dc40) = 0x3f0fad3e3e52f1aa;
  *(undefined8 *)(param_1 + 0x19dc48) = 0x3f1713563e5a1cac;
  *(undefined8 *)(param_1 + 0x19dc50) = 0x3f2000003e666666;
  *(undefined8 *)(param_1 + 0x19dc58) = 0x3f2d413c3e800000;
  *(undefined8 *)(param_1 + 0x19dc60) = 0x3f376cf63e8ccccd;
  *(undefined8 *)(param_1 + 0x19dc68) = 0x3f4000003e99999a;
  *(undefined8 *)(param_1 + 0x19dc70) = 0x3f478dde3ea66666;
  *(undefined8 *)(param_1 + 0x19dc78) = 0x3f4e62383eb33333;
  *(undefined8 *)(param_1 + 0x19db80) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x19db88) = 0x3f8000003e4ccccd;
  *(undefined8 **)(param_1 + 0x19db70) = (undefined8 *)(param_1 + 0x19db80);
  *(undefined1 *)(param_1 + 0x19db7b) = 0x26;
  *(undefined1 *)(param_1 + 0x19dc28) = 6;
  *(undefined8 **)(param_1 + 0x19dc20) = (undefined8 *)(param_1 + 0x19dc30);
  *(undefined1 *)(param_1 + 0x19dc2a) = 0x26;
  *(undefined1 *)(param_1 + 0x19dc2b) = 0x26;
  *(undefined8 *)(param_1 + 0x19db90) = 0x3f77bba83e800000;
  *(undefined8 *)(param_1 + 0x19db98) = 0x3f7360ad3e8ccccd;
  *(undefined8 *)(param_1 + 0x19dba0) = 0x3f6ed9ec3e99999a;
  *(undefined8 *)(FUN_0019dba8 + param_1) = 0x3f6a21ca3ea66666;
  *(undefined8 *)(param_1 + 0x19dbb0) = 0x3f6531613eb33333;
  *(undefined8 *)(param_1 + 0x19dbc8) = 0x3f54a9fe3ed9999a;
  *(undefined8 *)(param_1 + 0x19dbd0) = 0x3f4e62393ee66666;
  *(undefined8 *)(param_1 + 0x19dbd8) = 0x3f478de03ef33333;
  *(undefined8 *)(param_1 + 0x19dbe0) = 0x3f4000003f000000;
  *(undefined8 *)(param_1 + 0x19dbe8) = 0x3f376cf73f066666;
  *(undefined8 *)(param_1 + 0x19dbf0) = 0x3f2d413d3f0ccccd;
  *(undefined8 *)(param_1 + 0x19dbf8) = 0x3f2000013f133333;
  *(undefined8 *)(param_1 + 0x19dc00) = 0x3f1713563f1645a2;
  *(undefined8 *)(param_1 + 0x19dc08) = 0x3f10eece3f17ced9;
  *(undefined8 *)(param_1 + 0x19dc10) = 0x3f0000003f19999a;
  *(undefined8 *)(param_1 + 0x19dc30) = 0x3f00000000000000;
  *(undefined8 *)(param_1 + 0x19dbb8) = 0x3f6000003ec00000;
  *(undefined8 *)(param_1 + 0x19dbc0) = 0x3f5a827a3ecccccd;
  *(undefined8 *)(param_1 + 0x19dc80) = 0x3f54a9fe3ec00000;
  *(undefined8 *)(param_1 + 0x19dc88) = 0x3f5a827a3ecccccd;
  *(undefined8 *)(param_1 + 0x19dc90) = 0x3f6000003ed9999a;
  *(undefined8 *)(param_1 + 0x19dc98) = 0x3f6531603ee66666;
  *(undefined8 *)(param_1 + 0x19dca0) = 0x3f6a21ca3ef33333;
  *(undefined8 *)(param_1 + 0x19dca8) = 0x3f6ed9ec3f000000;
  *(undefined8 *)(param_1 + 0x19dcb0) = 0x3f7360ac3f066666;
  *(undefined8 *)(&DAT_0019dcb8 + param_1) = 0x3f77bba83f0ccccd;
  *(undefined8 *)(FUN_0019dcc0 + param_1) = 0x3f8000003f19999a;
  *(undefined8 *)(param_1 + 0x19dce0) = 0;
  *(undefined8 *)(param_1 + 0x19dce8) = 0x3ea1e89b3dcccccd;
  *(undefined8 *)(param_1 + 0x19dcf0) = 0x3ec64bf83e19999a;
  *(undefined **)(param_1 + 0x19dd80) = &DAT_0019dd90 + param_1;
  *(undefined8 *)(param_1 + 0x19dd68) = 0x3f72dce83f666666;
  *(undefined1 **)(param_1 + 0x19dd70) = &DAT_3f8000003f800000;
  *(undefined1 *)(param_1 + 0x19dd88) = 6;
  *(undefined8 **)(param_1 + 0x19dcd0) = (undefined8 *)(param_1 + 0x19dce0);
  *(undefined1 *)(param_1 + 0x19dcdb) = 0x26;
  *(undefined1 *)(param_1 + 0x19dd8a) = 0x26;
  *(undefined1 *)(param_1 + 0x19dd8b) = 0x26;
  *(undefined8 *)(param_1 + 0x19dcf8) = 0x3ee4f92e3e4ccccd;
  *(undefined8 *)(param_1 + 0x19dd00) = 0x3f0000003e800000;
  *(undefined8 *)(param_1 + 0x19dd08) = 0x3f0c378c3e99999a;
  *(undefined8 *)(param_1 + 0x19dd10) = 0x3f17739f3eb33333;
  *(undefined8 *)(param_1 + 0x19dd18) = 0x3f21e89b3ecccccd;
  *(undefined8 *)(param_1 + 0x19dd20) = 0x3f2bbae23ee66666;
  *(undefined8 *)(param_1 + 0x19dd30) = 0x3f3ddacd3f0ccccd;
  *(undefined8 *)(param_1 + 0x19dd38) = 0x3f464bf83f19999a;
  *(undefined8 *)(param_1 + 0x19dd40) = 0x3f4e64d03f266666;
  *(undefined8 *)(param_1 + 0x19dd48) = 0x3f562f5a3f333333;
  *(undefined8 *)(param_1 + 0x19dd50) = 0x3f5db3d73f400000;
  *(undefined8 *)(param_1 + 0x19dd58) = 0x3f64f92e3f4ccccd;
  *(undefined8 *)(param_1 + 0x19dd60) = 0x3f6c05353f59999a;
  *(undefined8 *)(&DAT_0019dd90 + param_1) = 0x3f80000000000000;
  *(undefined8 *)(&DAT_0019dd98 + param_1) = 0x3f72dce83dcccccd;
  *(undefined8 *)(param_1 + 0x19ddd0) = 0x3f3ddacd3ee66666;
  *(undefined8 *)(param_1 + 0x19ddd8) = 0x3f3504f33f000000;
  *(undefined8 *)(param_1 + 0x19dd28) = 0x3f3504f33f000000;
  *(undefined8 *)(&DAT_0019dda0 + param_1) = 0x3f6c05353e19999a;
  *(undefined8 *)(&DAT_0019dda8 + param_1) = 0x3f64f92e3e4ccccd;
  *(undefined8 *)(param_1 + 0x19de40) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x19de98) = 0x3f21e89b3f19999a;
  *(undefined8 *)(&DAT_0019dea0 + param_1) = 0x3f17739f3f266666;
  plVar16 = *(long **)(param_1 + 0xb38a8);
  *(undefined1 *)(param_1 + 0x19de3b) = 0x26;
  *(undefined8 *)(param_1 + 0x19de48) = 0x3f72dce83dcccccd;
  *(undefined8 *)(param_1 + 0x19de50) = 0x3f6c05353e19999a;
  *(undefined8 *)(param_1 + 0x19de58) = 0x3f64f92e3e4ccccd;
  *(undefined8 *)(param_1 + 0x19de60) = 0x3f5db3d73e800000;
  *(undefined8 **)(param_1 + 0x19de30) = (undefined8 *)(param_1 + 0x19de40);
  *(undefined8 *)(param_1 + 0x19de68) = 0x3f562f5a3e99999a;
  *(undefined8 *)(param_1 + 0x19de70) = 0x3f4e64d03eb33333;
  *(undefined8 *)(param_1 + 0x19de78) = 0x3f464bf83ecccccd;
  *(undefined8 *)(param_1 + 0x19de80) = 0x3f3ddacd3ee66666;
  *(undefined8 *)(param_1 + 0x19de88) = 0x3f3504f33f000000;
  *(undefined8 *)(param_1 + 0x19de90) = 0x3f2bbae23f0ccccd;
  *(undefined8 *)(&DAT_0019dea8 + param_1) = 0x3f0c378c3f333333;
  *(undefined8 *)(param_1 + 0x19deb0) = 0x3f0000003f400000;
  *(undefined8 *)(param_1 + 0x19deb8) = 0x3ee4f92e3f4ccccd;
  *(undefined8 *)(param_1 + 0x19dec0) = 0x3ec64bf73f59999a;
  *(undefined8 *)(param_1 + 0x19dec8) = 0x3ea1e89c3f666666;
  *(undefined8 *)(param_1 + 0x19ded0) = 0x3f800000;
  (**(code **)(*plVar16 + 0x78))();
  local_108 = *(long **)(param_1 + 0xb38a8);
  local_100 = (undefined **)0x0;
  FUN_0382aa34(param_1 + 0x146628,&local_108);
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  local_108 = *(long **)(param_1 + 0xb38a8);
  local_100 = (undefined **)0x0;
  FUN_029bb1e0(param_1 + 0xb4568,&local_108);
  uVar41 = 0;
  if (*(long *)(param_1 + 0xb80e0) != 0) {
    uVar41 = *(undefined8 *)(*(long *)(param_1 + 0xb80e0) + 0x180);
  }
  *(undefined8 *)(param_1 + 0x19f908) = uVar41;
  nn::os::ClearLightEvent((LightEventType *)(param_1 + 0x19f8f8));
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  local_108 = *(long **)(param_1 + 0xb38a8);
  local_100 = (undefined **)0x0;
  FUN_029f9200(param_1 + 0x11e588,&local_108);
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  local_108 = *(long **)(param_1 + 0xb38a8);
  local_100 = (undefined **)0x0;
  FUN_02a0f1e0(param_1 + 0x8b928,&local_108);
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  local_108 = *(long **)(param_1 + 0xb38a8);
  local_100 = (undefined **)0x0;
  FUN_0299d950(param_1 + 0x6d8,&local_108);
  *(undefined4 *)(param_1 + 0x19e178) = *(undefined4 *)(DAT_055f6860 + 0x30);
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  local_108 = *(long **)(param_1 + 0xb38a8);
  FUN_029c8a40(param_1 + 0x63810,&local_108);
  puVar2 = PTR_DAT_04bc3e68;
  lVar11 = param_1 + 0x11f938;
  *(long *)PTR_DAT_04bc4280 = lVar11;
  puVar3 = PTR_DAT_04bc4270;
  *(long *)puVar2 = lVar11;
  local_100 = (undefined **)0x0;
  *(long *)puVar3 = lVar11;
  uVar42 = nn::os::GetSystemTick();
  uVar42 = (uVar42 ^ uVar42 >> 0x1e) * 0x6c078965 + 1;
  uVar18 = (uVar42 ^ uVar42 >> 0x1e) * 0x6c078965 + 2;
  uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
  local_108 = (long *)(&DAT_04057c60)
                      [((uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4 ^ uVar42 * 0x800 ^ uVar42) >>
                       0x1e];
  FUN_02a09f04(lVar11,&local_108);
  puVar2 = PTR_DAT_04bb2120;
  local_138 = PTR_DAT_04bb2120;
  local_108 = (long *)((ulong)local_108 & 0xffffffffffff0000);
  local_128 = PTR_DAT_04bb2120;
  uStack_120 = 0;
  local_148 = PTR_DAT_04bc3e80 + 0x10;
  puStack_110 = &DAT_0408db89;
  local_e0 = PTR_DAT_04bb2120;
  local_d0 = PTR_DAT_04bb2120;
  uStack_f0._0_4_ = 0x405de64;
  uStack_f0._4_4_ = 0;
  local_c0 = "ChimeObject";
  lStack_b8 = 0;
  puStack_140 = puVar1;
  puStack_130 = puVar1;
  local_118 = puVar1;
  local_100 = &local_148;
  local_e8 = puVar1;
  puStack_d8 = puVar1;
  puStack_c8 = puVar1;
  local_f8 = (undefined1  [8])puVar1;
  FUN_038387b8(param_1 + 0x11f9d8,&local_108);
  puVar3 = PTR_DAT_04bb32e8;
  *(undefined8 *)(param_1 + 0x11fa50) = 0xffffffffffffffff;
  local_148 = PTR_DAT_04bb3c08 + 0x10;
  uVar41 = *(undefined8 *)(*(long *)puVar3 + 0x4060);
  *(undefined **)(param_1 + 0x11fa30) = PTR_DAT_04bc3e98 + 0x10;
  *(long *)(param_1 + 0x11fa38) = param_1 + 0x11f9d8;
  puVar3 = PTR_LAB_04bc3e78;
  *(undefined4 *)(param_1 + 0x11fa70) = 0;
  local_138 = puVar2;
  *(undefined2 *)(param_1 + 0x11fa75) = 0;
  local_128 = puVar2;
  uStack_120 = 0;
  local_108 = (long *)((ulong)local_108 & 0xffffffffffff0000);
  local_e0 = puVar2;
  *(undefined8 *)(param_1 + 0x11fa58) = uVar41;
  local_d0 = puVar2;
  puStack_110 = &DAT_040e5c7f;
  *(undefined **)(param_1 + 0x11fa40) = puVar3;
  *(undefined8 *)(param_1 + 0x11fa48) = 0;
  local_c0 = "DoorBell";
  lStack_b8 = 0;
  uStack_f0._0_4_ = 0x407d621;
  uStack_f0._4_4_ = 0;
  puStack_140 = puVar1;
  puStack_130 = puVar1;
  local_118 = puVar1;
  local_100 = &local_148;
  local_e8 = puVar1;
  puStack_d8 = puVar1;
  puStack_c8 = puVar1;
  local_f8 = (undefined1  [8])puVar1;
  FUN_038387b8(param_1 + 0x11fa78,&local_108);
  *(undefined4 *)(param_1 + 0x11faa8) = 0;
  *(undefined2 *)(param_1 + 0x11fab4) = 0;
  *(undefined4 *)(param_1 + 0x120ec0) = 1;
  *(undefined2 *)(param_1 + 0x120f87) = 0xc712;
  *(undefined8 *)(param_1 + 0x120f7c) = 0;
  *(undefined1 *)(param_1 + 0x120f89) = 0x12;
  *(undefined8 *)(param_1 + 0x120f60) = 0x12dffffffffffff;
  *(undefined4 *)(param_1 + 0x120f68) = 0x12d00c9;
  *(undefined2 *)(param_1 + 0x120f6c) = 0xc9;
  *(undefined8 *)(param_1 + 0x120f70) = 0x1e001490a6e0000;
  *(undefined4 *)(param_1 + 0x120f78) = 0x1e00149;
  *(undefined **)(param_1 + 0x120f40) = PTR_DAT_04bc4188 + 0x10;
  *(long *)(param_1 + 0x120f48) = param_1 + 0x11fbe8;
  *(undefined **)(param_1 + 0x120f50) = PTR_FUN_04bc4170;
  *(undefined8 *)(param_1 + 0x120f58) = 0;
  FUN_029d0da4(param_1 + 0x120f98,&local_108);
  *(long *)PTR_DAT_04bc3fd8 = param_1 + 0x121100;
  *(undefined8 *)(param_1 + 0x121148) = 1;
  *(undefined8 *)(param_1 + 0x121150) = 0;
  *(undefined8 *)(param_1 + 0x121158) = 1;
  *(undefined8 *)(param_1 + 0x121160) = 0;
  *(undefined **)(param_1 + 0x121178) = PTR_DAT_04bc3fd0 + 0x10;
  *(long *)(param_1 + 0x121180) = param_1 + 0x121100;
  puVar1 = PTR_FUN_04bc3fc8;
  *(undefined2 *)(param_1 + 0x1211a8) = 0;
  *(undefined1 *)(param_1 + 0x1211aa) = 0;
  *(undefined **)(param_1 + 0x121188) = puVar1;
  *(undefined8 *)(param_1 + 0x121190) = 0;
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  plVar16 = *(long **)(param_1 + 0xb38a8);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar14 = malloc(0x3320);
  }
  else {
    plVar28 = plVar16;
    if (plVar16 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar17 = (undefined8 *)(lVar11 + 8);
      if (lVar20 != 0) {
        puVar17 = (undefined8 *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*puVar17;
    }
    pvVar14 = (void *)(**(code **)(*plVar28 + 0x30))(plVar28,0x3320,8);
  }
  FUN_029f5e20();
  *(void **)(param_1 + 0x1211b8) = pvVar14;
  local_108 = plVar16;
  FUN_029f5f50(pvVar14,&local_108);
  puVar1 = PTR_DAT_04bc4230;
  *(long *)PTR_DAT_04bc41c8 = param_1 + 0x1211b8;
  lVar11 = param_1 + 0x1211c8;
  *(long *)puVar1 = lVar11;
  *(undefined4 *)(param_1 + 0x122904) = 0;
  FUN_02a02420(lVar11);
  local_128 = puVar2;
  uStack_120 = 0;
  local_148 = PTR_DAT_04bc4220 + 0x10;
  ppuVar37 = (undefined **)(param_1 + 0x1211d8);
  puStack_140 = PTR_DAT_04bb2020 + 0x10;
  local_118 = (undefined *)(param_1 + 0x121210);
  local_138 = puVar2;
  puStack_130 = puStack_140;
  puStack_110 = (undefined *)(param_1 + 0x1228f0);
  if ((*(byte *)ppuVar37 >> 1 & 1) == 0) {
    local_108 = (long *)((ulong)local_108 & 0xffffffffffff0000);
    *(byte *)ppuVar37 = *(byte *)ppuVar37 | 2;
    uStack_f0 = &local_148;
    local_f8._0_4_ = 0;
    local_f8._4_4_ = 0;
    local_e0 = "TV_Normal";
    local_d0 = "TV_Normal";
    lStack_b8 = param_1 + 0x1211e8;
    local_c0 = "TVObject";
    local_100 = ppuVar37;
    local_e8 = puStack_140;
    puStack_d8 = puStack_140;
    puStack_c8 = puStack_140;
    FUN_03839ca0(*(undefined8 *)PTR_DAT_04bcb3d8,&local_108,0);
  }
  puVar1 = PTR_DAT_04bc4228 + 0x10;
  *(undefined **)(param_1 + 0x122970) = PTR_LAB_04bc4218;
  *(undefined8 *)(param_1 + 0x122978) = 0;
  local_108 = *(long **)(param_1 + 0xb38a8);
  *(undefined **)(param_1 + 0x122960) = puVar1;
  *(long *)(param_1 + 0x122968) = lVar11;
  FUN_02983090(param_1 + 0x122a40,&local_108);
  local_100 = *(undefined ***)(param_1 + 0xb38a8);
  local_108 = (long *)0x0;
  FUN_029ff290(param_1 + 0x122ad8,&local_108);
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar16 = malloc(0x1d8);
  }
  else {
    plVar16 = *(long **)(param_1 + 0xb38a8);
    if (plVar16 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar16 = (long *)(lVar20 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
        goto LAB_02a2b280;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x1d8,8);
  }
LAB_02a2b280:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar16 + 3) = 0x80;
  *(undefined1 *)((long)plVar16 + 0x9b) = 0;
  *plVar16 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar16 + 0x1c);
  plVar16[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar16[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar16 + 0x14) = uVar9;
  *plVar16 = (long)&PTR_FUN_04a9ab40;
  plVar16[0x1a] = 0;
  plVar16[0x1b] = (long)&PTR_LAB_04a9ab98;
  plVar16[0x17] = 0;
  *(undefined8 *)((long)plVar16 + 0xbd) = 0;
  *(undefined4 *)(plVar16 + 0x19) = 0;
  plVar16[0x1f] = (long)&PTR_LAB_04a9abc0;
  plVar16[0x15] = 0;
  plVar16[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar16 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar16 + 0x18b) = 0;
  plVar16[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar16 + 0x14c);
  plVar16[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar16 + 0x32) = 0xffffffff;
  plVar16[0x37] = 0;
  plVar16[0x33] = 0;
  plVar16[0x34] = 0;
  plVar16[0x35] = 0;
  *(undefined4 *)(plVar16 + 0x36) = 0;
  *(undefined4 *)(plVar16 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar16 + 0x39) = 0;
  plVar16[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc3f80 = 1;
  puVar2 = PTR_DAT_04bc3f88;
  plVar16[0x3a] = 0;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar16,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_108,uVar41);
  }
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar28 = malloc(0x1d8);
  }
  else {
    plVar28 = *(long **)(param_1 + 0xb38a8);
    if (plVar28 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar28 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar28 = (long *)(lVar20 + 0xa8);
      }
      plVar28 = (long *)*plVar28;
      if (plVar28 == (long *)0x0) {
        plVar28 = (long *)0x0;
        goto LAB_02a2b480;
      }
    }
    plVar28 = (long *)(**(code **)(*plVar28 + 0x30))(plVar28,0x1d8,8);
  }
LAB_02a2b480:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar28 + 3) = 0x80;
  *(undefined1 *)((long)plVar28 + 0x9b) = 0;
  *plVar28 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar28 + 0x1c);
  plVar28[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar28[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar28 + 0x14) = uVar9;
  *plVar28 = (long)&PTR_FUN_04a9abe8;
  plVar28[0x1a] = 0;
  plVar28[0x1b] = (long)&PTR_LAB_04a9ac40;
  plVar28[0x17] = 0;
  *(undefined8 *)((long)plVar28 + 0xbd) = 0;
  *(undefined4 *)(plVar28 + 0x19) = 0;
  plVar28[0x1f] = (long)&PTR_LAB_04a9ac68;
  plVar28[0x15] = 0;
  plVar28[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar28 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar28 + 0x18b) = 0;
  plVar28[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar28 + 0x14c);
  plVar28[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar28 + 0x32) = 0xffffffff;
  plVar28[0x37] = 0;
  plVar28[0x33] = 0;
  plVar28[0x34] = 0;
  plVar28[0x35] = 0;
  *(undefined4 *)(plVar28 + 0x36) = 0;
  *(undefined4 *)(plVar28 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar28 + 0x39) = 0;
  plVar28[0x27] = (long)(puVar2 + 0x10);
  puVar2 = PTR_DAT_04bc3f90;
  plVar28[0x3a] = 0;
  *puVar2 = 1;
  puVar2 = PTR_DAT_04bc3f98;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)PTR_DAT_04bc3f98 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar28,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar28 + 0x20))(plVar28,&local_108,uVar41);
  }
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar21 = malloc(0x1d8);
  }
  else {
    plVar21 = *(long **)(param_1 + 0xb38a8);
    if (plVar21 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar21 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar21 = (long *)(lVar20 + 0xa8);
      }
      plVar21 = (long *)*plVar21;
      if (plVar21 == (long *)0x0) {
        plVar21 = (long *)0x0;
        goto LAB_02a2b674;
      }
    }
    plVar21 = (long *)(**(code **)(*plVar21 + 0x30))(plVar21,0x1d8,8);
  }
LAB_02a2b674:
  puVar1 = PTR_DAT_04bcb440;
  *(undefined4 *)(plVar21 + 3) = 0x80;
  *(undefined1 *)((long)plVar21 + 0x9b) = 0;
  *plVar21 = (long)(puVar1 + 0x10);
  puVar17 = (undefined8 *)((long)plVar21 + 0x1c);
  plVar21[2] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  plVar21[1] = (long)puVar1;
  uVar9 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(plVar21 + 0x14) = uVar9;
  *plVar21 = (long)&PTR_FUN_04a9ac90;
  plVar21[0x1a] = 0;
  plVar21[0x1b] = (long)&PTR_LAB_04a9ace8;
  plVar21[0x17] = 0;
  *(undefined8 *)((long)plVar21 + 0xbd) = 0;
  *(undefined4 *)(plVar21 + 0x19) = 0;
  plVar21[0x1f] = (long)&PTR_LAB_04a9ad10;
  plVar21[0x15] = 0;
  plVar21[0x16] = 0;
  puVar2 = PTR_DAT_04bb4a78 + 0x10;
  *(undefined4 *)(plVar21 + 0x29) = 0x40;
  *(undefined1 *)((long)plVar21 + 0x18b) = 0;
  plVar21[0x23] = (long)puVar2;
  puVar17 = (undefined8 *)((long)plVar21 + 0x14c);
  plVar21[0x28] = (long)puVar17;
  if (puVar17 != &DAT_0407ebb1) {
    *(undefined1 *)puVar17 = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar21 + 0x32) = 0xffffffff;
  plVar21[0x37] = 0;
  plVar21[0x33] = 0;
  plVar21[0x34] = 0;
  plVar21[0x35] = 0;
  *(undefined4 *)(plVar21 + 0x36) = 0;
  *(undefined4 *)(plVar21 + 0x38) = 0xffffffff;
  *(undefined4 *)(plVar21 + 0x39) = 0;
  plVar21[0x3a] = 0;
  plVar21[0x27] = (long)(puVar2 + 0x10);
  *PTR_DAT_04bc3fa0 = 1;
  puVar2 = PTR_DAT_04bc3fa8;
  local_75 = 0;
  local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
  *(undefined8 *)(PTR_DAT_04bc3fa8 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)puVar2 = 0xffffffffffffffff;
  *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
  *(undefined4 *)(puVar2 + 0x18) = 0xffffffff;
  uVar9 = s_invalid_name_040e8f53._8_4_;
  uVar41 = *(undefined8 *)(param_1 + 0xb38a8);
  local_f8._0_4_ = 0x80;
  local_100 = (undefined **)(local_f8 + 4);
  s_invalid_name_040e8f53[8] = (char)uVar8;
  s_invalid_name_040e8f53[9] = SUB41(uVar8,1);
  s_invalid_name_040e8f53[10] = SUB41(uVar8,2);
  s_invalid_name_040e8f53[0xb] = SUB41(uVar8,3);
  uStack_f0._4_1_ = s_invalid_name_040e8f53[8];
  uStack_f0._5_1_ = s_invalid_name_040e8f53[9];
  uStack_f0._6_1_ = s_invalid_name_040e8f53[10];
  uStack_f0._7_1_ = s_invalid_name_040e8f53[0xb];
  s_invalid_name_040e8f53._8_4_ = uVar9;
  local_108 = (long *)puVar1;
  local_f8._4_4_ = uVar4;
  uStack_f0._0_4_ = uVar5;
  local_70 = FUN_006bd550("invalid_name",0);
  uVar12 = FUN_03853d00(plVar21,&local_108);
  if ((uVar12 & 1) != 0) {
    (**(code **)(*plVar21 + 0x20))(plVar21,&local_108,uVar41);
  }
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    pvVar14 = malloc(0x1c6a0);
  }
  else {
    plVar13 = *(long **)(param_1 + 0xb38a8);
    if (plVar13 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar13 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar13 = (long *)(lVar20 + 0xa8);
      }
      plVar13 = (long *)*plVar13;
    }
    pvVar14 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,0x1c6a0,8);
  }
  FUN_029cb040();
  uStack_f0._0_4_ = SUB84(plVar21,0);
  uStack_f0._4_4_ = (undefined4)((ulong)plVar21 >> 0x20);
  local_e8 = (undefined *)0x0;
  local_f8._0_4_ = SUB84(plVar28,0);
  local_f8._4_4_ = SUB84((ulong)plVar28 >> 0x20,0);
  local_108 = *(long **)(param_1 + 0xb38a8);
  *(void **)(param_1 + 0x6c0) = pvVar14;
  local_100 = (undefined **)plVar16;
  FUN_029cb2b0(pvVar14,&local_108);
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar16 = malloc(0x88);
  }
  else {
    plVar16 = *(long **)(param_1 + 0xb38a8);
    if (plVar16 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar16 = (long *)(lVar20 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        plVar16 = (long *)0x0;
        goto LAB_02a2b914;
      }
    }
    plVar16 = (long *)(**(code **)(*plVar16 + 0x30))(plVar16,0x88,8);
  }
LAB_02a2b914:
  puVar2 = PTR_DAT_04bb5838;
  puVar1 = PTR_DAT_04bb5830;
  *(undefined4 *)(plVar16 + 1) = 0xffffffff;
  *plVar16 = (long)(puVar1 + 0x10);
  plVar16[2] = (long)(puVar2 + 0x10);
  FUN_038e18e4(plVar16 + 6);
  *(undefined4 *)((long)plVar16 + 0x7f) = 0;
  plVar16[0xe] = 0;
  plVar16[0xf] = 0;
  *(long **)(param_1 + 0x6c8) = plVar16;
  puVar1 = PTR_DAT_04bc41a8 + 0x10;
  plVar16[4] = (long)PTR_FUN_04bc41a0;
  plVar16[5] = 0;
  plVar16[2] = (long)puVar1;
  plVar16[3] = (long)plVar16;
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    puVar35 = malloc(0x18);
  }
  else {
    plVar16 = *(long **)(param_1 + 0xb38a8);
    if (plVar16 == (long *)0x0) {
      lVar20 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar16 = (long *)(lVar11 + 8);
      if (lVar20 != 0) {
        plVar16 = (long *)(lVar20 + 0xa8);
      }
      plVar16 = (long *)*plVar16;
      if (plVar16 == (long *)0x0) {
        puVar35 = (uint *)0x0;
        goto LAB_02a2b9e8;
      }
    }
    puVar35 = (uint *)(**(code **)(*plVar16 + 0x30))(plVar16,0x18,8);
  }
LAB_02a2b9e8:
  uVar42 = nn::os::GetSystemTick();
  uVar42 = (uVar42 ^ uVar42 >> 0x1e) * 0x6c078965 + 1;
  uVar18 = (uVar42 ^ uVar42 >> 0x1e) * 0x6c078965 + 2;
  *puVar35 = uVar42;
  puVar35[1] = uVar18;
  uVar42 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
  puVar35[2] = uVar42;
  puVar35[3] = (uVar42 ^ uVar42 >> 0x1e) * 0x6c078965 + 4;
  *(uint **)(param_1 + 0x6d0) = puVar35;
  uVar18 = puVar35[3];
  uVar42 = *puVar35 ^ *puVar35 << 0xb;
  *puVar35 = puVar35[1];
  puVar35[1] = puVar35[2];
  puVar35[2] = uVar18;
  uVar42 = uVar42 >> 8 ^ uVar18 >> 0x13 ^ uVar42 ^ uVar18;
  puVar35[3] = uVar42;
  puVar35[4] = 0;
  *(char *)(puVar35 + 5) = (char)((ulong)uVar42 + (ulong)uVar42 * 4 >> 0x20) + '\x01';
  (**(code **)(**(long **)(param_1 + 0xb38a8) + 0x78))();
  local_108 = *(long **)(param_1 + 0xb38a8);
  local_100 = (undefined **)0x0;
  FUN_029d8b0c(param_1 + 0x89730,&local_108);
  *(undefined8 *)(param_1 + 0x19dfa0) = 0x3f00000000000000;
  *(undefined8 *)(param_1 + 0x19df78) = 0;
  *(undefined8 *)(param_1 + 0x19df98) = 0x42f00000c0866666;
  *(undefined8 *)(param_1 + 0x19df84) = 0x3f0000003e99999a;
  *(undefined4 *)(param_1 + 0x19df80) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x19df94) = 0x42f00000;
  *(undefined4 *)(param_1 + 0x19df8c) = 0x3ecccccd;
  *(uint *)(param_1 + 0xb389c) = *(uint *)(param_1 + 0xb389c) | 2;
  lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  *(undefined8 *)(lVar11 + 0xa8) = uVar19;
  return;
}

