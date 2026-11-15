
void FUN_0217dea0(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 *__src;
  long *plVar5;
  uint uVar6;
  byte bVar7;
  short sVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  ulong uVar15;
  byte bVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  byte *pbVar20;
  undefined8 *puVar21;
  long lVar22;
  byte bVar23;
  byte bVar24;
  ulong uVar25;
  uint *puVar26;
  long lVar27;
  uint *puVar28;
  uint *puVar29;
  char *pcVar30;
  long *plVar31;
  uint uVar32;
  char *pcVar33;
  void *pvVar34;
  undefined8 *__dest;
  ulong uVar35;
  void *pvVar36;
  uint uVar37;
  int local_104;
  ulong local_100;
  undefined *local_e0;
  char *local_d8;
  undefined4 local_d0;
  char local_cc [31];
  undefined1 local_ad;
  int local_a4;
  undefined *local_a0;
  char *local_98;
  int local_90;
  char local_8c [31];
  undefined1 local_6d;
  
  *(undefined1 *)(param_1 + 0xb60) = 0;
  puVar10 = PTR_DAT_04bb2a08;
  plVar31 = (long *)PTR_PTR_04bb2238;
  local_90 = 0x20;
  local_6d = 0;
  plVar1 = (long *)(param_1 + 0x620);
  puVar2 = PTR_DAT_04bb2a08 + 0x10;
  local_a0 = puVar2;
  local_98 = local_8c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pcVar30 = *(char **)((long)plVar31 + 8);
  if (local_8c != pcVar30) {
    (**(code **)(*plVar31 + 0x18))(plVar31);
    lVar18 = 0;
    do {
      if (*(char *)(*(long *)((long)plVar31 + 8) + lVar18) == '\0') goto LAB_0217df70;
      lVar19 = *(long *)((long)plVar31 + 8) + lVar18;
      if (*(char *)(lVar19 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0217df70;
      }
      if (*(char *)(lVar19 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0217df70;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0217df70:
    iVar17 = (int)lVar18;
    if (local_90 <= (int)lVar18) {
      iVar17 = local_90 + -1;
    }
    memcpy(local_8c,pcVar30,(long)iVar17);
    local_8c[iVar17] = '\0';
    plVar31 = (long *)PTR_PTR_04bb2238;
  }
  puVar3 = PTR_DAT_04bb2028 + 0x10;
  local_a0 = puVar3;
  FUN_0217f760(plVar1,&local_a0);
  plVar4 = (long *)(param_1 + 0x7e0);
  local_6d = 0;
  local_90 = 0x20;
  local_a0 = puVar2;
  local_98 = local_8c;
  (**(code **)(*plVar31 + 0x18))(plVar31);
  pcVar30 = (char *)plVar31[1];
  if (local_8c != pcVar30) {
    (**(code **)(*plVar31 + 0x18))(plVar31);
    lVar18 = 0;
    do {
      if (*(char *)(plVar31[1] + lVar18) == '\0') goto LAB_0217e04c;
      lVar19 = plVar31[1] + lVar18;
      if (*(char *)(lVar19 + 1) == '\0') {
        lVar18 = lVar18 + 1;
        goto LAB_0217e04c;
      }
      if (*(char *)(lVar19 + 2) == '\0') {
        lVar18 = lVar18 + 2;
        goto LAB_0217e04c;
      }
      lVar18 = lVar18 + 3;
    } while (lVar18 != 0x80001);
    lVar18 = 0;
LAB_0217e04c:
    iVar17 = (int)lVar18;
    if (local_90 <= (int)lVar18) {
      iVar17 = local_90 + -1;
    }
    memcpy(local_8c,pcVar30,(long)iVar17);
    local_8c[iVar17] = '\0';
    plVar31 = (long *)PTR_PTR_04bb2238;
  }
  local_a0 = puVar3;
  FUN_0217f760(plVar4,&local_a0);
  local_6d = 0;
  local_90 = 0x20;
  local_a0 = puVar10 + 0x10;
  lVar18 = param_1 + 0x9a0;
  local_98 = local_8c;
  (**(code **)(*plVar31 + 0x18))(plVar31);
  puVar2 = PTR_PTR_04bb2238;
  pcVar30 = (char *)plVar31[1];
  if (local_8c != pcVar30) {
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    lVar19 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar19) == '\0') goto LAB_0217e12c;
      lVar22 = *(long *)(puVar2 + 8) + lVar19;
      if (*(char *)(lVar22 + 1) == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_0217e12c;
      }
      if (*(char *)(lVar22 + 2) == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_0217e12c;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    lVar19 = 0;
LAB_0217e12c:
    iVar17 = (int)lVar19;
    if (local_90 <= (int)lVar19) {
      iVar17 = local_90 + -1;
    }
    memcpy(local_8c,pcVar30,(long)iVar17);
    local_8c[iVar17] = '\0';
  }
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  FUN_0217f760(lVar18,&local_a0);
  local_a4 = 0;
  uVar15 = FUN_0180bc80();
  puVar2 = PTR_DAT_04bb2720;
  if ((uVar15 & 1) != 0) {
    local_a4 = 1;
    goto LAB_0217e3a8;
  }
  lVar19 = *(long *)PTR_DAT_04bb2720;
  iVar17 = 0;
  if (lVar19 != 0) {
    if (*(long *)(lVar19 + 0x330) == 0) {
      iVar17 = 0;
    }
    else {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
      iVar13 = FUN_006bd550(*puVar21,0);
      iVar17 = 0;
      if (iVar13 == 0x758f7eaf) {
        iVar17 = 0;
        if (*(long *)puVar2 != 0) {
          lVar19 = *(long *)(*(long *)puVar2 + 0x330);
          iVar17 = 0;
          if (lVar19 != 0) {
            iVar17 = *(int *)(lVar19 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xa0) == iVar17) {
    local_a4 = 2;
    goto LAB_0217e3a8;
  }
  sVar8 = *(short *)PTR_DAT_04bb6298;
  if (sVar8 != -1) {
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x17);
    puVar29 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
    if (0xff < (uint)(int)sVar8) {
      puVar29 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar29 >> 0x17 & 1) != 0) {
      lVar19 = *(long *)PTR_DAT_04bb39b0;
      pbVar20 = PTR_DAT_04bb32e0;
      if (lVar19 == 0) {
LAB_0217e2bc:
        if (*pbVar20 < 8) goto LAB_0217e334;
LAB_0217e2c8:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0217e32c:
          pbVar20 = PTR_DAT_04bb5038;
          goto LAB_0217e334;
        }
        lVar19 = **(long **)PTR_DAT_04bb27d0;
        bVar23 = *(byte *)(lVar19 + 0x473);
        pbVar20 = PTR_DAT_04bb5038;
        if ((long)(char)bVar23 != 0xffffffffffffffff) {
          puVar29 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
          if (7 < bVar23) {
            puVar29 = (uint *)(lVar19 + 0x48);
          }
          if ((*puVar29 & 8) != 0) {
            pbVar20 = (byte *)(lVar19 + 0x471);
          }
        }
        bVar23 = *pbVar20;
        bVar12 = 7 < bVar23;
        if (bVar12) {
          bVar23 = 0xff;
        }
        local_e0 = (undefined *)CONCAT71(local_e0._1_7_,bVar23);
        if (bVar12) goto LAB_0217e32c;
      }
      else {
        if (*(int *)(lVar19 + 0x15c) != 0) {
          pbVar20 = (byte *)(lVar19 + 0x158);
        }
        if (7 < *pbVar20) {
          if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_0217e2bc;
          }
          goto LAB_0217e2c8;
        }
LAB_0217e334:
        bVar23 = *pbVar20;
        if (7 < bVar23) {
          bVar23 = 0xff;
        }
        local_e0 = (undefined *)CONCAT71(local_e0._1_7_,bVar23);
      }
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      local_98 = "SpnCheckPlace";
      local_a0 = puVar2;
      iVar17 = FUN_02753180(&local_e0,&local_a0);
      local_98 = "PooCheckPlace";
      local_a0 = puVar2;
      iVar13 = FUN_02753180(&local_e0,&local_a0);
      if ((iVar17 == 2) && (iVar13 == 2)) {
        local_a4 = 3;
      }
    }
  }
  if (local_a4 == 0) {
    return;
  }
LAB_0217e3a8:
  uVar14 = nn::os::GetSystemTick();
  uVar32 = *(uint *)(param_1 + 0x3e0);
  if (((int)uVar32 < 1) &&
     (((*(long *)(param_1 + 0x2d0) == 0 ||
       (puVar29 = *(uint **)(*(long *)(param_1 + 0x2d0) + 8), puVar29 == (uint *)0x0)) ||
      (uVar32 = *puVar29, uVar32 == 0)))) {
    bVar23 = 0;
LAB_0217e490:
    *(byte *)(param_1 + 0xb60) = bVar23;
    return;
  }
  uVar9 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
  local_104 = 0;
  local_100 = 0;
  bVar23 = 0;
  uVar6 = uVar9 ^ uVar9 * 0x800;
  uVar14 = 0;
  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
  uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
LAB_0217e50c:
  if (0 < (int)*(uint *)(param_1 + 0x3e0)) {
    if (*(uint *)(param_1 + 0x3e0) <= uVar14) goto LAB_0217e500;
    uVar37 = uVar14;
    if (*(uint *)(param_1 + 0x3d0) <= uVar14) {
      uVar37 = 0;
    }
    puVar29 = *(uint **)(*(long *)(param_1 + 0x3d8) + (ulong)uVar37 * 8);
    if (puVar29 == (uint *)0x0) goto LAB_0217e500;
LAB_0217e538:
    puVar26 = (uint *)(ulong)*puVar29;
    if (*puVar29 == 0) {
LAB_0217e600:
      pcVar30 = (char *)0x0;
    }
    else {
      if ((DAT_053fafe0 & 1) == 0) {
        DAT_053fafe0 = 1;
        DAT_053faff4 = 0xffffffffffffffff;
        DAT_053fafe4 = 0xffffffffffffffff;
        DAT_053fafec = 0xffffffffffffffff;
        uVar15 = 0xffffffff;
        DAT_053faffc = 0xffffffff;
LAB_0217e5f4:
        if (puVar29 == puVar26) goto LAB_0217e600;
        do {
          if (uVar15 != 0xffffffff) goto LAB_0217e600;
          lVar19 = 0xc;
          if (*(char *)((long)puVar29 + (10 - (long)puVar26)) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar29 + (lVar19 - (long)puVar26);
          if (lVar19 == 0) goto LAB_0217e600;
          uVar15 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar26));
          DAT_053fafec = CONCAT44(0xfffffffe,(int)DAT_053fafec);
          if (uVar15 == 0) goto LAB_0217e600;
          puVar28 = (uint *)(lVar19 + 4);
          while (puVar28[-1] != 0xfac8973) {
            puVar28 = puVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_0217e600;
          }
          uVar15 = (ulong)*puVar28;
          uVar35 = 0;
          if (*puVar28 != 0xffffffff) {
            uVar35 = uVar15;
          }
          DAT_053fafec = CONCAT44((int)uVar35,(int)DAT_053fafec);
        } while ((int)uVar35 < 0);
      }
      else {
        uVar35 = DAT_053fafec >> 0x20;
        uVar15 = uVar35;
        if ((long)DAT_053fafec < 0) goto LAB_0217e5f4;
      }
      pcVar30 = (char *)(uVar35 + (long)puVar29);
    }
    local_6d = 0;
    local_90 = 0x20;
    pcVar33 = "";
    if (pcVar30 != (char *)0x0) {
      pcVar33 = pcVar30;
    }
    local_98 = local_8c;
    if (local_8c != pcVar33) {
      lVar19 = 0;
      do {
        if (pcVar33[lVar19] == '\0') {
LAB_0217e6e4:
          iVar17 = (int)lVar19;
joined_r0x0217e6e8:
          if (0x1f < iVar17) {
            iVar17 = 0x1f;
          }
          goto LAB_0217e6f0;
        }
        if (pcVar33[lVar19 + 1] == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_0217e6e4;
        }
        if (pcVar33[lVar19 + 2] == '\0') {
          iVar17 = (int)lVar19 + 2;
          goto joined_r0x0217e6e8;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      iVar17 = 0;
LAB_0217e6f0:
      local_a0 = puVar10 + 0x10;
      memcpy(local_8c,pcVar33,(long)iVar17);
      local_8c[iVar17] = '\0';
    }
    if (local_a4 == 3) {
      if (*local_98 == 'p') {
        if (local_98[1] == 'o') {
LAB_0217e7e8:
          if (local_98[2] == 'o') goto LAB_0217e828;
        }
      }
      else if ((*local_98 == 's') && (local_98[1] == 'p')) {
LAB_0217e80c:
        if (local_98[2] == 'n') goto LAB_0217e828;
      }
      goto LAB_0217e500;
    }
    if (local_a4 != 2) {
      if (local_a4 == 1) {
        if (*local_98 == 's') {
          if ((local_98[1] == 'z') && (local_98[2] == 'a')) goto LAB_0217e828;
        }
        else if ((*local_98 == 'r') && (local_98[1] == 'c')) goto LAB_0217e7e8;
      }
      goto LAB_0217e500;
    }
    if (*local_98 == 'm') {
      if (local_98[1] == 'n') {
        if (local_98[2] == 'c') goto LAB_0217e828;
      }
      else if (local_98[1] == 'a') goto LAB_0217e80c;
      goto LAB_0217e500;
    }
    if (((*local_98 != 'o') || (local_98[1] != 't')) || (local_98[2] != 'g')) goto LAB_0217e500;
LAB_0217e828:
    puVar26 = (uint *)(ulong)*puVar29;
    bVar16 = 0;
    if (*puVar29 == 0) {
LAB_0217e974:
      bVar24 = 0;
      bVar7 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
LAB_0217e98c:
      if (bVar24 <= bVar7 && bVar7 < bVar16) goto LAB_0217e500;
    }
    else {
      if ((DAT_053fafe0 & 1) == 0) {
        DAT_053fafe0 = 1;
        DAT_053faff4 = 0xffffffffffffffff;
        DAT_053fafe4 = 0xffffffffffffffff;
        DAT_053fafec = 0xffffffffffffffff;
        uVar15 = 0xffffffff;
        DAT_053faffc = 0xffffffff;
LAB_0217e878:
        if (puVar29 == puVar26) {
LAB_0217e880:
          bVar16 = 0;
        }
        else {
          do {
            if (uVar15 != 0xffffffff) goto LAB_0217e880;
            lVar19 = 0xc;
            if (*(char *)((long)puVar29 + (10 - (long)puVar26)) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar29 + (lVar19 - (long)puVar26);
            if (lVar19 == 0) goto LAB_0217e880;
            uVar15 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar26));
            DAT_053faffc = 0xfffffffe;
            if (uVar15 == 0) goto LAB_0217e880;
            puVar28 = (uint *)(lVar19 + 4);
            while (puVar28[-1] != 0x8ae48661) {
              puVar28 = puVar28 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_0217e880;
            }
            uVar15 = (ulong)*puVar28;
            uVar35 = 0;
            if (*puVar28 != 0xffffffff) {
              uVar35 = uVar15;
            }
            DAT_053faffc = (uint)uVar35;
          } while ((int)DAT_053faffc < 0);
          pbVar20 = (byte *)(uVar35 + (long)puVar29);
          if (pbVar20 != (byte *)0x0) goto LAB_0217e84c;
          bVar16 = 0;
        }
      }
      else {
        uVar15 = (ulong)DAT_053faffc;
        if ((int)DAT_053faffc < 0) goto LAB_0217e878;
        pbVar20 = (byte *)(uVar15 + (long)puVar29);
        bVar16 = 0;
        if (pbVar20 != (byte *)0x0) {
LAB_0217e84c:
          bVar16 = *pbVar20;
        }
      }
      puVar26 = (uint *)(ulong)*puVar29;
      if (*puVar29 == 0) goto LAB_0217e974;
      uVar15 = DAT_053fafec & 0xffffffff;
      if ((int)DAT_053fafec < 0) {
        if (puVar29 == puVar26) goto LAB_0217e974;
        do {
          if (uVar15 != 0xffffffff) goto LAB_0217e974;
          lVar19 = 0xc;
          if (*(char *)((long)puVar29 + (10 - (long)puVar26)) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar29 + (lVar19 - (long)puVar26);
          if (lVar19 == 0) goto LAB_0217e974;
          uVar15 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar26));
          DAT_053fafec = CONCAT44(DAT_053fafec._4_4_,0xfffffffe);
          if (uVar15 == 0) goto LAB_0217e974;
          puVar28 = (uint *)(lVar19 + 4);
          while (puVar28[-1] != 0x675ca211) {
            puVar28 = puVar28 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) goto LAB_0217e974;
          }
          uVar15 = (ulong)*puVar28;
          uVar35 = 0;
          if (*puVar28 != 0xffffffff) {
            uVar35 = uVar15;
          }
          DAT_053fafec = CONCAT44(DAT_053fafec._4_4_,(int)uVar35);
        } while ((int)uVar35 < 0);
      }
      else {
        uVar35 = uVar15;
      }
      if ((byte *)(uVar35 + (long)puVar29) == (byte *)0x0) goto LAB_0217e974;
      bVar24 = *(byte *)(uVar35 + (long)puVar29);
      bVar7 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
      if (bVar24 <= bVar16) goto LAB_0217e98c;
      if (bVar7 < bVar16 || bVar24 <= bVar7) goto LAB_0217e500;
    }
    puVar26 = (uint *)(ulong)*puVar29;
    uVar37 = 0;
    if (*puVar29 != 0) {
      if ((DAT_053fafe0 & 1) == 0) {
        DAT_053fafe0 = 1;
        DAT_053faff4 = 0xffffffffffffffff;
        DAT_053fafe4 = 0xffffffffffffffff;
        DAT_053fafec = 0xffffffffffffffff;
        uVar15 = 0xffffffff;
        DAT_053faffc = 0xffffffff;
LAB_0217e9e8:
        if (puVar29 == puVar26) {
LAB_0217e9f0:
          uVar37 = 0;
        }
        else {
          do {
            if (uVar15 != 0xffffffff) goto LAB_0217e9f0;
            lVar19 = 0xc;
            if (*(char *)((long)puVar29 + (10 - (long)puVar26)) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar29 + (lVar19 - (long)puVar26);
            if (lVar19 == 0) goto LAB_0217e9f0;
            uVar15 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar26));
            DAT_053faff4 = CONCAT44(0xfffffffe,(int)DAT_053faff4);
            if (uVar15 == 0) goto LAB_0217e9f0;
            puVar28 = (uint *)(lVar19 + 4);
            while (puVar28[-1] != 0x1e7ef977) {
              puVar28 = puVar28 + 2;
              uVar15 = uVar15 - 1;
              if (uVar15 == 0) goto LAB_0217e9f0;
            }
            uVar15 = (ulong)*puVar28;
            uVar35 = 0;
            if (*puVar28 != 0xffffffff) {
              uVar35 = uVar15;
            }
            DAT_053faff4 = CONCAT44((int)uVar35,(int)DAT_053faff4);
          } while ((int)uVar35 < 0);
          pbVar20 = (byte *)(uVar35 + (long)puVar29);
          if (pbVar20 != (byte *)0x0) goto LAB_0217e9bc;
          uVar37 = 0;
        }
      }
      else {
        uVar15 = DAT_053faff4 >> 0x20;
        if ((long)DAT_053faff4 < 0) goto LAB_0217e9e8;
        pbVar20 = (byte *)(uVar15 + (long)puVar29);
        uVar37 = 0;
        if (pbVar20 == (byte *)0x0) goto LAB_0217e9f4;
LAB_0217e9bc:
        uVar37 = (uint)*pbVar20;
      }
    }
LAB_0217e9f4:
    local_104 = local_104 + uVar37;
    if ((bool)(bVar23 | local_104 <=
                        (int)((ulong)(uVar6 >> 8 ^ uVar9 >> 0x13 ^ uVar6 ^ uVar9) * 100 >> 0x20)))
    goto LAB_0217e500;
    uVar15 = local_100 & 0xff;
    puVar26 = (uint *)(ulong)*puVar29;
    plVar31 = plVar1 + uVar15 * 7;
    if ((local_100 & 0xf8) != 0) {
      plVar31 = plVar1;
    }
    if (*puVar29 == 0) {
LAB_0217eb28:
      puVar21 = (undefined8 *)0x0;
    }
    else {
      if ((DAT_053fafe0 & 1) == 0) {
        DAT_053fafe0 = 1;
        DAT_053faff4 = 0xffffffffffffffff;
        DAT_053fafe4 = 0xffffffffffffffff;
        DAT_053fafec = 0xffffffffffffffff;
        uVar35 = 0xffffffff;
        DAT_053faffc = 0xffffffff;
LAB_0217eb1c:
        if (puVar29 == puVar26) goto LAB_0217eb28;
        do {
          if (uVar35 != 0xffffffff) goto LAB_0217eb28;
          lVar19 = 0xc;
          if (*(char *)((long)puVar29 + (10 - (long)puVar26)) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar29 + (lVar19 - (long)puVar26);
          if (lVar19 == 0) goto LAB_0217eb28;
          uVar35 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar26));
          DAT_053fafe4 = CONCAT44(0xfffffffe,(undefined4)DAT_053fafe4);
          if (uVar35 == 0) goto LAB_0217eb28;
          puVar28 = (uint *)(lVar19 + 4);
          while (puVar28[-1] != 0x9bee16d1) {
            puVar28 = puVar28 + 2;
            uVar35 = uVar35 - 1;
            if (uVar35 == 0) goto LAB_0217eb28;
          }
          uVar35 = (ulong)*puVar28;
          uVar25 = 0;
          if (*puVar28 != 0xffffffff) {
            uVar25 = uVar35;
          }
          DAT_053fafe4 = CONCAT44((int)uVar25,(undefined4)DAT_053fafe4);
        } while ((int)uVar25 < 0);
      }
      else {
        uVar25 = DAT_053fafe4 >> 0x20;
        uVar35 = uVar25;
        if ((long)DAT_053fafe4 < 0) goto LAB_0217eb1c;
      }
      puVar21 = (undefined8 *)(uVar25 + (long)puVar29);
    }
    __dest = (undefined8 *)plVar31[1];
    __src = &DAT_0407ebb1;
    if (puVar21 != (undefined8 *)0x0) {
      __src = puVar21;
    }
    if (__dest != __src) {
      lVar19 = 0;
      do {
        if (*(char *)((long)__src + lVar19) == '\0') goto LAB_0217eca0;
        if (*(char *)((long)__src + lVar19 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_0217eca0;
        }
        if (*(char *)((long)__src + lVar19 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_0217eca0;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_0217eca0:
      iVar17 = (int)lVar19;
      if ((int)plVar31[2] <= (int)lVar19) {
        iVar17 = (int)plVar31[2] + -1;
      }
      local_a0 = puVar2;
      memcpy(__dest,__src,(long)iVar17);
      *(undefined1 *)((long)__dest + (long)iVar17) = 0;
    }
    local_98 = "@";
    local_a0 = puVar3;
    (**(code **)(*plVar31 + 0x18))(plVar31);
    uVar35 = 0;
    do {
      if (*(char *)(plVar31[1] + uVar35) == '\0') goto LAB_0217ed3c;
      lVar19 = plVar31[1] + uVar35;
      if (*(char *)(lVar19 + 1) == '\0') {
        uVar35 = uVar35 + 1;
        goto LAB_0217ed3c;
      }
      if (*(char *)(lVar19 + 2) == '\0') {
        uVar35 = uVar35 + 2;
        goto LAB_0217ed3c;
      }
      uVar35 = uVar35 + 3;
    } while (uVar35 != 0x80001);
    uVar35 = 0;
LAB_0217ed3c:
    (**(code **)(local_a0 + 0x18))(&local_a0);
    lVar19 = 0;
    do {
      iVar17 = (int)uVar35;
      if (local_98[lVar19] == '\0') {
LAB_0217ed94:
        uVar37 = iVar17 - (int)lVar19;
        if ((int)uVar37 < 0) goto LAB_0217f120;
LAB_0217edac:
        uVar35 = (ulong)uVar37;
        if (0 < (int)lVar19) goto LAB_0217edbc;
        goto LAB_0217ee38;
      }
      if (local_98[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_0217ed94;
      }
      if (local_98[lVar19 + 2] == '\0') {
        lVar19 = lVar19 + 2;
        uVar37 = iVar17 - (int)lVar19;
        if (-1 < (int)uVar37) goto LAB_0217edac;
        goto LAB_0217f120;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    if (-1 < iVar17) {
LAB_0217ee38:
      (**(code **)(local_a0 + 0x18))(&local_a0);
LAB_0217ee48:
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      local_98 = "@";
      (**(code **)(*plVar31 + 0x18))(plVar31);
      lVar19 = 0;
      do {
        if (*(char *)(plVar31[1] + lVar19) == '\0') goto LAB_0217eebc;
        lVar22 = plVar31[1] + lVar19;
        if (*(char *)(lVar22 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_0217eebc;
        }
        if (*(char *)(lVar22 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_0217eebc;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_0217eebc:
      (**(code **)(local_a0 + 0x18))(&local_a0);
      lVar22 = 0;
      do {
        iVar17 = (int)lVar19;
        if (local_98[lVar22] == '\0') {
LAB_0217ef18:
          iVar13 = (int)lVar22;
          uVar37 = 0xffffffff;
          if (iVar17 < iVar13) goto LAB_0217efd4;
          if (iVar13 < 1) goto LAB_0217efb4;
          uVar25 = 0;
          goto LAB_0217ef3c;
        }
        if (local_98[lVar22 + 1] == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_0217ef18;
        }
        if (local_98[lVar22 + 2] == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_0217ef18;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      if (iVar17 < 0) {
        uVar37 = 0xffffffff;
      }
      else {
LAB_0217efb4:
        (**(code **)(local_a0 + 0x18))(&local_a0);
        uVar37 = 0;
      }
      goto LAB_0217efd4;
    }
    goto LAB_0217f120;
  }
  if (((((*(long *)(param_1 + 0x2d0) != 0) &&
        (puVar29 = *(uint **)(*(long *)(param_1 + 0x2d0) + 8), puVar29 != (uint *)0x0)) &&
       ((*(uint *)(param_1 + 0x2e8) <= uVar14 ||
        (*(char *)(*(long *)(param_1 + 0x2f0) + (long)(int)uVar14) != '\0')))) &&
      ((uVar14 < *puVar29 && (puVar29[1] != 0)))) && ((ushort)puVar29[2] != 0)) {
    iVar17 = 0xc;
    if (*(char *)((long)puVar29 + 10) != '\0') {
      iVar17 = 0x1c;
    }
    puVar29 = (uint *)((ulong)(puVar29[1] * uVar14 + (uint)(ushort)puVar29[2] * 8 + iVar17) +
                      (long)puVar29);
    if (puVar29 != (uint *)0x0) goto LAB_0217e538;
  }
  goto LAB_0217e500;
  while( true ) {
    pcVar30 = local_98;
    lVar27 = lVar19;
    while( true ) {
      lVar27 = lVar27 + -1;
      if (*(char *)(lVar22 + uVar35) != *pcVar30) break;
      if (*(char *)(lVar22 + uVar35) == '\0') goto LAB_0217ee2c;
      lVar22 = lVar22 + 1;
      pcVar30 = pcVar30 + 1;
      if (lVar27 == 0) goto LAB_0217ee2c;
    }
    uVar35 = uVar35 - 1;
    if (iVar17 < 1) break;
LAB_0217edbc:
    lVar22 = plVar31[1];
    (**(code **)(local_a0 + 0x18))(&local_a0);
    iVar17 = (int)uVar35;
    if ((char *)(lVar22 + uVar35) == local_98) {
LAB_0217ee2c:
      if (-1 < iVar17) goto LAB_0217ee48;
      break;
    }
  }
LAB_0217f120:
  uVar37 = *puVar29;
  if (uVar37 != 0) goto LAB_0217f128;
LAB_0217f214:
  pcVar30 = (char *)0x0;
  goto LAB_0217f220;
  while( true ) {
    pcVar30 = local_98;
    lVar27 = lVar22;
    while( true ) {
      lVar27 = lVar27 + -1;
      if (*(char *)(lVar19 + uVar25) != *pcVar30) break;
      if (*(char *)(lVar19 + uVar25) == '\0') goto LAB_0217efcc;
      lVar19 = lVar19 + 1;
      pcVar30 = pcVar30 + 1;
      if (lVar27 == 0) goto LAB_0217efcc;
    }
    uVar25 = uVar25 + 1;
    uVar37 = 0xffffffff;
    if (uVar25 == (iVar17 - iVar13) + 1) break;
LAB_0217ef3c:
    lVar19 = plVar31[1];
    (**(code **)(local_a0 + 0x18))(&local_a0);
    if ((char *)(lVar19 + uVar25) == local_98) {
LAB_0217efcc:
      uVar37 = (uint)uVar25;
      break;
    }
  }
LAB_0217efd4:
  plVar5 = plVar4 + uVar15 * 7;
  if ((local_100 & 0xf8) != 0) {
    plVar5 = plVar4;
  }
  iVar17 = (int)uVar35;
  (**(code **)(*plVar31 + 0x18))(plVar31);
  lVar22 = plVar31[1];
  lVar19 = 0;
  do {
    if (*(char *)(lVar22 + lVar19) == '\0') goto LAB_0217f05c;
    if (*(char *)(lVar22 + lVar19 + 1) == '\0') {
      lVar19 = lVar19 + 1;
      goto LAB_0217f05c;
    }
    if (*(char *)(lVar22 + lVar19 + 2) == '\0') {
      lVar19 = lVar19 + 2;
      goto LAB_0217f05c;
    }
    lVar19 = lVar19 + 3;
  } while (lVar19 != 0x80001);
  lVar19 = 0;
LAB_0217f05c:
  pvVar36 = (void *)plVar5[1];
  pvVar34 = *(void **)(PTR_PTR_04bb2238 + 8);
  if (iVar17 < (int)lVar19 && -2 < iVar17) {
    pvVar34 = (void *)(lVar22 + (ulong)(iVar17 + 1));
  }
  if (pvVar36 != pvVar34) {
    lVar19 = 0;
    do {
      if (*(char *)((long)pvVar34 + lVar19) == '\0') goto LAB_0217f0dc;
      if (*(char *)((long)pvVar34 + lVar19 + 1) == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_0217f0dc;
      }
      if (*(char *)((long)pvVar34 + lVar19 + 2) == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_0217f0dc;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    lVar19 = 0;
LAB_0217f0dc:
    iVar17 = (int)lVar19;
    if ((int)plVar5[2] <= (int)lVar19) {
      iVar17 = (int)plVar5[2] + -1;
    }
    memcpy(pvVar36,pvVar34,(long)iVar17);
    *(undefined1 *)((long)pvVar36 + (long)iVar17) = 0;
  }
  if ((int)uVar37 < (int)plVar31[2]) {
    *(undefined1 *)(plVar31[1] + (ulong)(uVar37 & ((int)uVar37 >> 0x1f ^ 0xffffffffU))) = 0;
    goto LAB_0217f120;
  }
  (**(code **)(*plVar31 + 0x18))();
  uVar37 = *puVar29;
  if (uVar37 == 0) goto LAB_0217f214;
LAB_0217f128:
  puVar26 = (uint *)(ulong)uVar37;
  if ((DAT_053fafe0 & 1) == 0) {
    DAT_053fafe0 = 1;
    DAT_053faff4 = 0xffffffffffffffff;
    DAT_053fafe4 = 0xffffffffffffffff;
    DAT_053fafec = 0xffffffffffffffff;
    uVar35 = 0xffffffff;
    DAT_053faffc = 0xffffffff;
LAB_0217f170:
    if (puVar29 == puVar26) {
LAB_0217f17c:
      pcVar30 = (char *)0x0;
      goto LAB_0217f220;
    }
    do {
      if (uVar35 != 0xffffffff) goto LAB_0217f17c;
      lVar19 = 0xc;
      if (*(char *)((long)puVar29 + (10 - (long)puVar26)) != '\0') {
        lVar19 = 0x1c;
      }
      lVar19 = (long)puVar29 + (lVar19 - (long)puVar26);
      if (lVar19 == 0) goto LAB_0217f17c;
      uVar35 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar26));
      DAT_053fafec = CONCAT44(0xfffffffe,(int)DAT_053fafec);
      if (uVar35 == 0) goto LAB_0217f17c;
      puVar28 = (uint *)(lVar19 + 4);
      while (puVar28[-1] != 0xfac8973) {
        puVar28 = puVar28 + 2;
        uVar35 = uVar35 - 1;
        if (uVar35 == 0) goto LAB_0217f17c;
      }
      uVar35 = (ulong)*puVar28;
      uVar25 = 0;
      if (*puVar28 != 0xffffffff) {
        uVar25 = uVar35;
      }
      DAT_053fafec = CONCAT44((int)uVar25,(int)DAT_053fafec);
    } while ((int)uVar25 < 0);
  }
  else {
    uVar25 = DAT_053fafec >> 0x20;
    uVar35 = uVar25;
    if ((long)DAT_053fafec < 0) goto LAB_0217f170;
  }
  pcVar30 = (char *)(uVar25 + (long)puVar29);
LAB_0217f220:
  puVar11 = PTR_DAT_04bb2a08;
  local_6d = 0;
  local_90 = 0x20;
  pcVar33 = "";
  if (pcVar30 != (char *)0x0) {
    pcVar33 = pcVar30;
  }
  local_a0 = PTR_DAT_04bb2a08 + 0x10;
  local_98 = local_8c;
  if (local_8c != pcVar33) {
    lVar19 = 0;
    do {
      if (pcVar33[lVar19] == '\0') {
LAB_0217f28c:
        iVar17 = (int)lVar19;
        if (0x1f < iVar17) {
          iVar17 = 0x1f;
        }
        goto LAB_0217f298;
      }
      if (pcVar33[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_0217f28c;
      }
      if (pcVar33[lVar19 + 2] == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_0217f28c;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    iVar17 = 0;
LAB_0217f298:
    memcpy(local_8c,pcVar33,(long)iVar17);
    local_8c[iVar17] = '\0';
  }
  local_a0 = PTR_DAT_04bb2028 + 0x10;
  puVar26 = (uint *)(ulong)*puVar29;
  if (*puVar29 == 0) {
LAB_0217f324:
    pcVar30 = (char *)0x0;
  }
  else {
    if ((DAT_053fafe0 & 1) == 0) {
      DAT_053fafe0 = 1;
      DAT_053faff4 = 0xffffffffffffffff;
      DAT_053fafe4 = 0xffffffffffffffff;
      DAT_053fafec = 0xffffffffffffffff;
      uVar35 = 0xffffffff;
      DAT_053faffc = 0xffffffff;
LAB_0217f318:
      if (puVar29 == puVar26) goto LAB_0217f324;
      do {
        if (uVar35 != 0xffffffff) goto LAB_0217f324;
        lVar19 = 0xc;
        if (*(char *)((long)puVar29 + (10 - (long)puVar26)) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar29 + (lVar19 - (long)puVar26);
        if (lVar19 == 0) goto LAB_0217f324;
        uVar35 = (ulong)*(ushort *)((long)puVar29 + (8 - (long)puVar26));
        DAT_053faff4 = CONCAT44(DAT_053faff4._4_4_,0xfffffffe);
        if (uVar35 == 0) goto LAB_0217f324;
        puVar28 = (uint *)(lVar19 + 4);
        while (puVar28[-1] != 0x6d0f4a8) {
          puVar28 = puVar28 + 2;
          uVar35 = uVar35 - 1;
          if (uVar35 == 0) goto LAB_0217f324;
        }
        uVar35 = (ulong)*puVar28;
        uVar25 = 0;
        if (*puVar28 != 0xffffffff) {
          uVar25 = uVar35;
        }
        DAT_053faff4 = CONCAT44(DAT_053faff4._4_4_,(int)uVar25);
      } while ((int)uVar25 < 0);
    }
    else {
      uVar25 = DAT_053faff4 & 0xffffffff;
      uVar35 = uVar25;
      if ((int)DAT_053faff4 < 0) goto LAB_0217f318;
    }
    pcVar30 = (char *)(uVar25 + (long)puVar29);
  }
  local_ad = 0;
  local_d0 = 0x20;
  pcVar33 = "";
  if (pcVar30 != (char *)0x0) {
    pcVar33 = pcVar30;
  }
  local_e0 = puVar11 + 0x10;
  local_d8 = local_cc;
  if (local_cc != pcVar33) {
    lVar19 = 0;
    do {
      if (pcVar33[lVar19] == '\0') {
LAB_0217f418:
        iVar17 = (int)lVar19;
        if (0x1f < iVar17) {
          iVar17 = 0x1f;
        }
        goto LAB_0217f424;
      }
      if (pcVar33[lVar19 + 1] == '\0') {
        lVar19 = lVar19 + 1;
        goto LAB_0217f418;
      }
      if (pcVar33[lVar19 + 2] == '\0') {
        lVar19 = lVar19 + 2;
        goto LAB_0217f418;
      }
      lVar19 = lVar19 + 3;
    } while (lVar19 != 0x80001);
    iVar17 = 0;
LAB_0217f424:
    memcpy(local_cc,pcVar33,(long)iVar17);
    local_cc[iVar17] = '\0';
  }
  pcVar30 = local_98;
  local_e0 = PTR_DAT_04bb2028 + 0x10;
  lVar19 = lVar18 + uVar15 * 0x38;
  if ((local_100 & 0xf8) != 0) {
    lVar19 = lVar18;
  }
  pcVar33 = *(char **)(lVar19 + 8);
  local_98[(long)local_90 + -1] = '\0';
  if (pcVar33 != local_98) {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    lVar22 = 0;
    do {
      if (local_98[lVar22] == '\0') goto LAB_0217f4dc;
      if (local_98[lVar22 + 1] == '\0') {
        lVar22 = lVar22 + 1;
        goto LAB_0217f4dc;
      }
      if (local_98[lVar22 + 2] == '\0') {
        lVar22 = lVar22 + 2;
        goto LAB_0217f4dc;
      }
      lVar22 = lVar22 + 3;
    } while (lVar22 != 0x80001);
    lVar22 = 0;
LAB_0217f4dc:
    iVar17 = (int)lVar22;
    if (*(int *)(lVar19 + 0x10) <= (int)lVar22) {
      iVar17 = *(int *)(lVar19 + 0x10) + -1;
    }
    memcpy(pcVar33,pcVar30,(long)iVar17);
    pcVar33[iVar17] = '\0';
  }
  if (*local_d8 != '\0') {
    local_100._0_4_ = (uint)local_100 + 1;
    uVar15 = (ulong)(uint)local_100 & 0xff;
    uVar37 = ((uint)local_100 & 0xff) - 1;
    plVar31 = plVar1 + uVar15 * 7;
    if (((uint)local_100 & 0xf8) != 0) {
      plVar31 = plVar1;
    }
    plVar5 = plVar1 + (ulong)uVar37 * 7;
    if (7 < uVar37) {
      plVar5 = plVar1;
    }
    pvVar34 = (void *)plVar31[1];
    (**(code **)(*plVar5 + 0x18))(plVar5);
    pvVar36 = (void *)plVar5[1];
    if (pvVar34 != pvVar36) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar19 = 0;
      do {
        if (*(char *)(plVar5[1] + lVar19) == '\0') goto LAB_0217f5cc;
        lVar22 = plVar5[1] + lVar19;
        if (*(char *)(lVar22 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_0217f5cc;
        }
        if (*(char *)(lVar22 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_0217f5cc;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_0217f5cc:
      iVar17 = (int)lVar19;
      if ((int)plVar31[2] <= (int)lVar19) {
        iVar17 = (int)plVar31[2] + -1;
      }
      memcpy(pvVar34,pvVar36,(long)iVar17);
      *(undefined1 *)((long)pvVar34 + (long)iVar17) = 0;
    }
    plVar31 = plVar4 + uVar15 * 7;
    if (((uint)local_100 & 0xf8) != 0) {
      plVar31 = plVar4;
    }
    pvVar34 = (void *)plVar31[1];
    plVar5 = plVar4 + (ulong)uVar37 * 7;
    if (7 < uVar37) {
      plVar5 = plVar4;
    }
    (**(code **)(*plVar5 + 0x18))(plVar5);
    pvVar36 = (void *)plVar5[1];
    if (pvVar34 != pvVar36) {
      (**(code **)(*plVar5 + 0x18))(plVar5);
      lVar19 = 0;
      do {
        if (*(char *)(plVar5[1] + lVar19) == '\0') goto LAB_0217f69c;
        lVar22 = plVar5[1] + lVar19;
        if (*(char *)(lVar22 + 1) == '\0') {
          lVar19 = lVar19 + 1;
          goto LAB_0217f69c;
        }
        if (*(char *)(lVar22 + 2) == '\0') {
          lVar19 = lVar19 + 2;
          goto LAB_0217f69c;
        }
        lVar19 = lVar19 + 3;
      } while (lVar19 != 0x80001);
      lVar19 = 0;
LAB_0217f69c:
      iVar17 = (int)lVar19;
      if ((int)plVar31[2] <= (int)lVar19) {
        iVar17 = (int)plVar31[2] + -1;
      }
      memcpy(pvVar34,pvVar36,(long)iVar17);
      *(undefined1 *)((long)pvVar34 + (long)iVar17) = 0;
    }
    lVar19 = lVar18 + uVar15 * 0x38;
    if (((uint)local_100 & 0xf8) != 0) {
      lVar19 = lVar18;
    }
    pcVar33 = *(char **)(lVar19 + 8);
    (**(code **)(local_e0 + 0x18))(&local_e0);
    pcVar30 = local_d8;
    if (pcVar33 != local_d8) {
      (**(code **)(local_e0 + 0x18))(&local_e0);
      lVar22 = 0;
      do {
        if (local_d8[lVar22] == '\0') goto LAB_0217e4bc;
        if (local_d8[lVar22 + 1] == '\0') {
          lVar22 = lVar22 + 1;
          goto LAB_0217e4bc;
        }
        if (local_d8[lVar22 + 2] == '\0') {
          lVar22 = lVar22 + 2;
          goto LAB_0217e4bc;
        }
        lVar22 = lVar22 + 3;
      } while (lVar22 != 0x80001);
      lVar22 = 0;
LAB_0217e4bc:
      iVar17 = (int)lVar22;
      if (*(int *)(lVar19 + 0x10) <= (int)lVar22) {
        iVar17 = *(int *)(lVar19 + 0x10) + -1;
      }
      memcpy(pcVar33,pcVar30,(long)iVar17);
      pcVar33[iVar17] = '\0';
    }
  }
  bVar23 = 1;
  local_100 = (ulong)((uint)local_100 + 1);
LAB_0217e500:
  uVar14 = uVar14 + 1;
  if (uVar14 == uVar32) goto LAB_0217e490;
  goto LAB_0217e50c;
}

