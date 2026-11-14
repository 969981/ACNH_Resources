
void FUN_01a59500(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint *puVar16;
  char cVar17;
  undefined8 *puVar18;
  long lVar19;
  uint *puVar20;
  int *piVar21;
  int iVar22;
  long *plVar23;
  undefined *local_a40;
  char *pcStack_a38;
  undefined *local_a30;
  char *pcStack_a28;
  undefined *local_a20;
  undefined8 *puStack_a18;
  undefined4 local_a10;
  undefined *local_a08;
  char *pcStack_a00;
  undefined *local_9f8;
  char *pcStack_9f0;
  undefined *local_9e8;
  undefined8 *puStack_9e0;
  undefined4 local_9d8;
  undefined *local_9d0;
  char *pcStack_9c8;
  undefined *local_9c0;
  char *pcStack_9b8;
  undefined *local_9b0;
  undefined8 *puStack_9a8;
  undefined4 local_9a0;
  undefined *local_998;
  char *pcStack_990;
  undefined *local_988;
  char *pcStack_980;
  undefined *local_978;
  undefined8 *puStack_970;
  undefined4 local_968;
  undefined *local_960;
  char *pcStack_958;
  undefined *local_950;
  char *pcStack_948;
  undefined *local_940;
  undefined8 *puStack_938;
  undefined4 local_930;
  undefined *local_928;
  char *pcStack_920;
  undefined *local_918;
  char *pcStack_910;
  undefined *local_908;
  undefined8 *puStack_900;
  undefined4 local_8f8;
  undefined *local_8f0;
  undefined1 auStack_8e8 [1876];
  uint local_194;
  uint local_190;
  uint local_18c;
  int local_188;
  undefined **local_180;
  undefined **local_178;
  undefined4 local_170;
  undefined1 local_16c [255];
  undefined1 local_6d;
  
  nn::os::GetSystemTick();
  nn::os::GetSystemTick();
  if ((param_2 != 0) && (*(long *)(param_1 + 8) == 0)) {
    uVar11 = FUN_038c6d48(0x200000,&DAT_05300728,param_2,8,1,0);
    *(undefined8 *)(param_1 + 8) = uVar11;
  }
  FUN_01a5a3e8(param_1);
  lVar19 = DAT_053274a0;
  puVar9 = PTR_DAT_04bc0430;
  *(undefined8 *)PTR_DAT_04bc0428 = *(undefined8 *)(DAT_053274a0 + 0x57e58);
  puVar6 = PTR_DAT_04bc0438;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57e60);
  puVar9 = PTR_DAT_04bc0440;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57e68);
  puVar7 = PTR_DAT_04bc0458;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57e70);
  puVar6 = PTR_DAT_04bc0450;
  *(undefined8 *)puVar7 = *(undefined8 *)(lVar19 + 0x57e88);
  puVar9 = PTR_DAT_04bc0448;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57e80);
  puVar6 = PTR_DAT_04bc0460;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57e78);
  puVar9 = PTR_DAT_04bc0468;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57e90);
  puVar6 = PTR_DAT_04bc0470;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57e98);
  puVar9 = PTR_DAT_04bc0478;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57ea0);
  puVar6 = PTR_DAT_04bc0480;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57ea8);
  puVar9 = PTR_DAT_04bc0488;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57eb0);
  puVar6 = PTR_DAT_04bc0490;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57eb8);
  puVar9 = PTR_DAT_04bc0498;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57ec0);
  puVar6 = PTR_DAT_04bc04a0;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57ec8);
  puVar9 = PTR_DAT_04bc04a8;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57ed0);
  puVar6 = PTR_DAT_04bc04b0;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57ed8);
  puVar9 = PTR_DAT_04bc04b8;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57ee8);
  puVar6 = PTR_DAT_04bc04c0;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57ef0);
  puVar9 = PTR_DAT_04bc04c8;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57ef8);
  puVar6 = PTR_DAT_04bc04d0;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57f00);
  puVar9 = PTR_DAT_04bc04d8;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57f08);
  puVar6 = PTR_DAT_04bc04e0;
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57f10);
  puVar9 = PTR_DAT_04bc04e8;
  *(undefined8 *)puVar6 = *(undefined8 *)(lVar19 + 0x57f18);
  *(undefined8 *)puVar9 = *(undefined8 *)(lVar19 + 0x57f20);
  *(long *)PTR_DAT_04bc04f8 = lVar19 + 0x18;
  *(long *)PTR_DAT_04bc0500 = lVar19 + 0x57f30;
  *(long *)PTR_DAT_04bc0508 = lVar19 + 0x596d0;
  *(undefined8 *)PTR_DAT_04bc04f0 = *(undefined8 *)(lVar19 + 0x5c058);
  FUN_01a44810();
  FUN_01a5e3b0(param_1);
  FUN_01a5e690(param_1);
  puVar9 = PTR_DAT_04bbfeb8;
  if (*(long *)(param_1 + 0x57e68) != 0) {
    uVar10 = 0;
    do {
      lVar19 = *(long *)(param_1 + 0x57e68);
      if ((int)*(uint *)(lVar19 + 0x1c0) < 1) {
        if ((((*(long *)(lVar19 + 0xb0) != 0) &&
             (puVar16 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar16 != (uint *)0x0)) &&
            ((*(uint *)(lVar19 + 200) <= uVar10 ||
             (*(char *)(*(long *)(lVar19 + 0xd0) + (long)(int)uVar10) != '\0')))) &&
           (((uVar10 < *puVar16 && (puVar16[1] != 0)) && ((ushort)puVar16[2] != 0)))) {
          iVar22 = 0xc;
          if (*(char *)((long)puVar16 + 10) != '\0') {
            iVar22 = 0x1c;
          }
          puVar16 = (uint *)((ulong)(puVar16[1] * uVar10 + (uint)(ushort)puVar16[2] * 8 + iVar22) +
                            (long)puVar16);
          goto joined_r0x01a59960;
        }
      }
      else if (uVar10 < *(uint *)(lVar19 + 0x1c0)) {
        uVar1 = uVar10;
        if (*(uint *)(lVar19 + 0x1b0) <= uVar10) {
          uVar1 = 0;
        }
        puVar16 = *(uint **)(*(long *)(lVar19 + 0x1b8) + (ulong)uVar1 * 8);
joined_r0x01a59960:
        if (puVar16 != (uint *)0x0) {
          if (*puVar16 != 0) {
            cVar17 = *PTR_DAT_04bbfeb0;
            do {
              puVar6 = PTR_DAT_04bbfeb0;
              if (cVar17 == '\0') {
                cVar17 = '\x01';
                *(undefined8 *)puVar9 = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                *(undefined4 *)(puVar9 + 0x78) = 0xffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
              }
              else {
                uVar1 = *(uint *)(puVar9 + 0x70);
                if (-1 < (int)uVar1) {
                  lVar19 = (ulong)uVar1 + (long)puVar16;
                  goto LAB_01a597bc;
                }
                if (uVar1 != 0xffffffff) break;
              }
              puVar20 = (uint *)(ulong)*puVar16;
              lVar19 = 0;
              if ((*puVar16 == 0) || (puVar16 == puVar20)) goto LAB_01a597bc;
              lVar19 = 0xc;
              if (*(char *)((long)puVar16 + (10 - (long)puVar20)) != '\0') {
                lVar19 = 0x1c;
              }
              lVar13 = (long)puVar16 + (lVar19 - (long)puVar20);
              if (lVar13 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar20));
              *(undefined4 *)(puVar9 + 0x70) = 0xfffffffe;
              lVar19 = 0;
              if (uVar14 == 0) goto LAB_01a597bc;
              piVar21 = (int *)(lVar13 + 4);
              while (piVar21[-1] != -0x7840ff18) {
                piVar21 = piVar21 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  lVar19 = 0;
                  goto LAB_01a597bc;
                }
              }
              iVar22 = 0;
              if (*piVar21 != -1) {
                iVar22 = *piVar21;
              }
              *(int *)(puVar9 + 0x70) = iVar22;
            } while (*puVar16 != 0);
          }
          lVar19 = 0;
LAB_01a597bc:
          lVar13 = *(long *)PTR_PTR_04bbfea8;
          if (lVar19 != 0) {
            lVar13 = lVar19;
          }
          FUN_038d1270(param_1 + 0x596d0 + (long)(int)uVar10 * 0x38,"FtrSLink%s",lVar13);
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0xbd);
  }
  local_8f0 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_8e8,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_194 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_190 = (local_194 ^ local_194 >> 0x1e) * 0x6c078965 + 2;
  local_18c = (local_190 ^ local_190 >> 0x1e) * 0x6c078965 + 3;
  local_188 = (local_18c ^ local_18c >> 0x1e) * 0x6c078965 + 4;
  pvVar12 = (void *)FUN_01a451fc(&local_8f0);
  memset(pvVar12,0,0x754);
  local_928 = (undefined *)CONCAT44(local_928._4_4_,0x69);
  local_178 = &local_928;
  local_180 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_8f0,&local_180);
  puVar9 = PTR_DAT_04bb3350;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar12 = malloc(0x3aaa8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar15 = (undefined8 *)(lVar19 + 8);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x3aaa8,8);
  }
  puVar6 = PTR_DAT_04bb2020;
  local_8f8 = 0;
  local_928 = PTR_DAT_04bb2020 + 0x10;
  pcStack_920 = "InsectBook";
  pcStack_910 = "InsectBook";
  puStack_900 = &DAT_0407ebb1;
  local_918 = local_928;
  local_908 = local_928;
  FUN_01a61090(pvVar12,&local_928,"Item/PictureBook","ItemInsectBookData",&local_8f0);
  *(void **)(param_1 + 0x5c028) = pvVar12;
  puVar8 = PTR_DAT_04bb21f8;
  puVar7 = PTR_DAT_04bb2118;
  local_6d = 0;
  plVar23 = (long *)((long)pvVar12 + 0x20);
  local_170 = 0x100;
  local_16c[0] = 0;
  uVar11 = *(undefined8 *)(*(long *)PTR_DAT_04bb2118 + 0x540);
  local_178 = (undefined **)local_16c;
  local_180 = (undefined **)(PTR_DAT_04bb21f8 + 0x10);
  uVar14 = (**(code **)(*plVar23 + 0xf0))(plVar23,&local_180,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar23,&local_180,uVar11);
  }
  pvVar12 = (void *)(**(code **)(local_8f0 + 0x18))(&local_8f0);
  memset(pvVar12,0,0x754);
  local_960 = (undefined *)CONCAT44(local_960._4_4_,0x6a);
  local_178 = &local_960;
  local_180 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_8f0,&local_180);
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar12 = malloc(0x3aaa8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar15 = (undefined8 *)(lVar19 + 8);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x3aaa8,8);
  }
  local_960 = puVar6 + 0x10;
  local_930 = 0;
  pcStack_958 = "FishBook";
  pcStack_948 = "FishBook";
  puStack_938 = &DAT_0407ebb1;
  local_950 = local_960;
  local_940 = local_960;
  FUN_01a61090(pvVar12,&local_960,"Item/PictureBook","ItemFishBookData",&local_8f0);
  *(void **)(param_1 + 0x5c030) = pvVar12;
  local_6d = 0;
  local_178 = (undefined **)local_16c;
  local_170 = 0x100;
  local_180 = (undefined **)(puVar8 + 0x10);
  local_16c[0] = 0;
  uVar11 = *(undefined8 *)(*(long *)puVar7 + 0x540);
  plVar23 = (long *)((long)pvVar12 + 0x20);
  uVar14 = (**(code **)(*plVar23 + 0xf0))(plVar23,&local_180,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar23,&local_180,uVar11);
  }
  pvVar12 = (void *)(**(code **)(local_8f0 + 0x18))(&local_8f0);
  memset(pvVar12,0,0x754);
  local_998 = (undefined *)CONCAT44(local_998._4_4_,0x6b);
  local_178 = &local_998;
  local_180 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_8f0,&local_180);
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar12 = malloc(0x3aaa8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar15 = (undefined8 *)(lVar19 + 8);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x3aaa8,8);
  }
  local_998 = puVar6 + 0x10;
  local_968 = 0;
  pcStack_990 = "SeafoodBook";
  pcStack_980 = "SeafoodBook";
  puStack_970 = &DAT_0407ebb1;
  local_988 = local_998;
  local_978 = local_998;
  FUN_01a61090(pvVar12,&local_998,"Item/PictureBook","ItemSeafoodBookData",&local_8f0);
  *(void **)(param_1 + 0x5c038) = pvVar12;
  local_6d = 0;
  local_178 = (undefined **)local_16c;
  local_170 = 0x100;
  local_180 = (undefined **)(puVar8 + 0x10);
  local_16c[0] = 0;
  uVar11 = *(undefined8 *)(*(long *)puVar7 + 0x540);
  plVar23 = (long *)((long)pvVar12 + 0x20);
  uVar14 = (**(code **)(*plVar23 + 0xf0))(plVar23,&local_180,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar23,&local_180,uVar11);
  }
  pvVar12 = (void *)(**(code **)(local_8f0 + 0x18))(&local_8f0);
  memset(pvVar12,0,0x754);
  local_9d0._0_4_ = 0x37;
  local_180 = &PTR_FUN_049ff560;
  local_178 = &local_9d0;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff560;
  local_9d0._0_4_ = 0x38;
  local_178 = &local_9d0;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff560;
  local_9d0._0_4_ = 0x39;
  local_178 = &local_9d0;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff560;
  local_9d0._0_4_ = 0x3a;
  local_178 = &local_9d0;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff560;
  local_9d0 = (undefined *)CONCAT44(local_9d0._4_4_,0x3b);
  local_178 = &local_9d0;
  FUN_008a1ba0(&local_8f0,&local_180);
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar12 = malloc(0x3aaa8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar15 = (undefined8 *)(lVar19 + 8);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x3aaa8,8);
  }
  local_9d0 = puVar6 + 0x10;
  local_9a0 = 0;
  pcStack_9c8 = "MailboxCatalog";
  pcStack_9b8 = "MailboxCatalog";
  puStack_9a8 = &DAT_0407ebb1;
  local_9c0 = local_9d0;
  local_9b0 = local_9d0;
  FUN_01a61090(pvVar12,&local_9d0,"Item/MailboxCatalog","ItemMailboxCatalogData",&local_8f0);
  *(void **)(param_1 + 0x5c040) = pvVar12;
  local_6d = 0;
  local_178 = (undefined **)local_16c;
  local_170 = 0x100;
  local_180 = (undefined **)(puVar8 + 0x10);
  local_16c[0] = 0;
  uVar11 = *(undefined8 *)(*(long *)puVar7 + 0x540);
  plVar23 = (long *)((long)pvVar12 + 0x20);
  uVar14 = (**(code **)(*plVar23 + 0xf0))(plVar23,&local_180,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar23,&local_180,uVar11);
  }
  pvVar12 = (void *)(**(code **)(local_8f0 + 0x18))(&local_8f0);
  memset(pvVar12,0,0x754);
  local_a08 = (undefined *)CONCAT44(local_a08._4_4_,0x77);
  local_178 = &local_a08;
  local_180 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_8f0,&local_180);
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar12 = malloc(0x3aaa8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar15 = (undefined8 *)(lVar19 + 8);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x3aaa8,8);
  }
  local_a08 = puVar6 + 0x10;
  local_9d8 = 0;
  pcStack_a00 = "DoorDecoCatalog";
  pcStack_9f0 = "DoorDecoCatalog";
  puStack_9e0 = &DAT_0407ebb1;
  local_9f8 = local_a08;
  local_9e8 = local_a08;
  FUN_01a61090(pvVar12,&local_a08,"Item/DoorDecoCatalog","ItemDoorDecoCatalogData",&local_8f0);
  *(void **)(param_1 + 0x5c048) = pvVar12;
  local_6d = 0;
  local_178 = (undefined **)local_16c;
  local_170 = 0x100;
  local_180 = (undefined **)(puVar8 + 0x10);
  local_16c[0] = 0;
  uVar11 = *(undefined8 *)(*(long *)puVar7 + 0x540);
  plVar23 = (long *)((long)pvVar12 + 0x20);
  uVar14 = (**(code **)(*plVar23 + 0xf0))(plVar23,&local_180,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar23,&local_180,uVar11);
  }
  pvVar12 = (void *)(**(code **)(local_8f0 + 0x18))(&local_8f0);
  memset(pvVar12,0,0x754);
  local_a40._0_4_ = 0x16;
  local_180 = &PTR_FUN_049ff448;
  local_178 = &local_a40;
  FUN_008a1ba0(&local_8f0,&local_180);
  local_180 = &PTR_FUN_049ff448;
  local_a40 = (undefined *)CONCAT44(local_a40._4_4_,0x17);
  local_178 = &local_a40;
  FUN_008a1ba0(&local_8f0,&local_180);
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    pvVar12 = malloc(0x3aaa8);
  }
  else {
    lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
    puVar15 = (undefined8 *)(lVar19 + 8);
    if (lVar13 != 0) {
      puVar15 = (undefined8 *)(lVar13 + 0xa8);
    }
    pvVar12 = (void *)(**(code **)(*(long *)*puVar15 + 0x30))((long *)*puVar15,0x3aaa8,8);
  }
  local_a40 = puVar6 + 0x10;
  local_a10 = 0;
  pcStack_a38 = "CounterPillarStorage";
  pcStack_a28 = "CounterPillarStorage";
  puStack_a18 = &DAT_0407ebb1;
  local_a30 = local_a40;
  local_a20 = local_a40;
  FUN_01a61090(pvVar12,&local_a40,"Item/WallStorage","ItemCounterPillarStorageData",&local_8f0);
  *(void **)(param_1 + 0x5c050) = pvVar12;
  local_6d = 0;
  local_178 = (undefined **)local_16c;
  local_170 = 0x100;
  local_180 = (undefined **)(puVar8 + 0x10);
  local_16c[0] = 0;
  uVar11 = *(undefined8 *)(*(long *)puVar7 + 0x540);
  plVar23 = (long *)((long)pvVar12 + 0x20);
  uVar14 = (**(code **)(*plVar23 + 0xf0))(plVar23,&local_180,1);
  if ((uVar14 & 1) != 0) {
    FUN_03c27e60(plVar23,&local_180,uVar11);
  }
  FUN_01a5ec80(param_1);
  lVar19 = DAT_053274a0;
  puVar8 = PTR_DAT_04bb43b0;
  puVar7 = PTR_DAT_04bb43a8;
  puVar6 = PTR_DAT_04bb43a0;
  *(undefined4 *)PTR_DAT_04bb43b0 = 0;
  *(undefined4 *)(puVar8 + 3) = 0;
  uVar11 = *(undefined8 *)(lVar19 + 0x57f28);
  *(long *)puVar7 = lVar19 + 0x5c060;
  *(undefined8 *)puVar6 = uVar11;
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    puVar15 = malloc(0x59a50);
  }
  else {
    plVar23 = *(long **)(param_1 + 8);
    if (plVar23 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar9 + 0x68));
      plVar23 = (long *)(lVar19 + 8);
      if (lVar13 != 0) {
        plVar23 = (long *)(lVar13 + 0xa8);
      }
      plVar23 = (long *)*plVar23;
    }
    puVar15 = (undefined8 *)(**(code **)(*plVar23 + 0x30))(plVar23,0x59a50,8);
  }
  *puVar15 = &PTR_LAB_04a00068;
  puVar15[1] = &PTR_LAB_04a000c0;
  memset(puVar15 + 2,0,72000);
  lVar19 = 0;
  do {
    *(undefined8 *)((long)puVar15 + lVar19 + 0x10) = 0xfffe;
    FUN_0277d4ac();
    lVar19 = lVar19 + 8;
  } while (lVar19 != 72000);
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  lVar19 = 0;
  do {
    lVar13 = lVar19 + 8;
    *(undefined2 *)((long)puVar15 + lVar19 + 0x10) = uVar5;
    *(undefined1 *)((long)puVar15 + lVar19 + 0x12) = uVar3;
    *(undefined1 *)((long)puVar15 + lVar19 + 0x13) = uVar4;
    *(undefined4 *)((long)puVar15 + lVar19 + 0x14) = uVar2;
    lVar19 = lVar13;
  } while (lVar13 != 72000);
  lVar19 = 0;
  do {
    lVar13 = lVar19 + 8;
    *(undefined2 *)((long)puVar15 + lVar19 + 0x10) = uVar5;
    *(undefined1 *)((long)puVar15 + lVar19 + 0x12) = uVar3;
    *(undefined1 *)((long)puVar15 + lVar19 + 0x13) = uVar4;
    *(undefined4 *)((long)puVar15 + lVar19 + 0x14) = uVar2;
    lVar19 = lVar13;
  } while (lVar13 != 72000);
  *(undefined4 *)(puVar15 + 0x232a) = 0x50;
  memset((void *)((long)puVar15 + 0x11954),0,0x468);
  puVar15[0x23b8] = 0;
  puVar15[0x23b9] = 0;
  puVar18 = puVar15 + 0x23c0;
  puVar15[0x23ba] = puVar15 + 0x23bc;
  for (lVar19 = 0x2326; puVar18[-4] = puVar18 + -2, lVar19 != 0; lVar19 = lVar19 + -2) {
    puVar18[-2] = puVar18;
    puVar18 = puVar18 + 4;
  }
  puVar15[0x23bb] = puVar15 + 0x23bc;
  puVar15[0x6a0a] = 0;
  if (puVar15 + 0x6a0c != (undefined8 *)0x0) {
    puVar15[0x23b8] = 0x232800000000;
    puVar15[0x23b9] = puVar15 + 0x6a0c;
  }
  memset(puVar15 + 0x8d34,0,78000);
  *(undefined8 **)(param_1 + 0xdc330) = puVar15;
  return;
}

