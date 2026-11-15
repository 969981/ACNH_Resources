
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01deadf0(long param_1,uint param_2,ulong param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  byte bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  long *plVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  void *__dest;
  uint *puVar17;
  undefined2 *puVar18;
  char cVar19;
  undefined2 uVar20;
  ulong uVar21;
  byte bVar22;
  ulong uVar23;
  uint *puVar24;
  uint uVar25;
  int *piVar26;
  long lVar27;
  long *plVar28;
  byte *pbVar29;
  byte *pbVar30;
  long *plVar31;
  undefined8 *puVar32;
  int iVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  size_t __n;
  long lVar36;
  byte local_b4 [4];
  undefined *local_b0;
  undefined8 local_a8;
  void *local_a0;
  uint local_98;
  void *local_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  char *pcStack_70;
  
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  lVar27 = *(long *)PTR_DAT_04bb36f0;
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar8 = *(uint *)(param_1 + 0x4c);
    if (*(uint *)(lVar27 + 0x20) <= uVar8) {
      uVar8 = 0;
    }
    if (*(char *)(*(long *)(lVar27 + 0x28) + (long)(int)uVar8 * 0x38 + 0x2c) == '\0') {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,param_2);
  uVar8 = param_2;
  if (*(uint *)(lVar27 + 0x20) <= param_2) {
    uVar8 = 0;
  }
  if (*(char *)(*(long *)(lVar27 + 0x28) + (long)(int)uVar8 * 0x38 + 0x2c) == '\0') {
    return 0;
  }
  plVar28 = *(long **)PTR_DAT_04bb27d0;
  if (((plVar28 != (long *)0x0) && (plVar28[5] != 0)) && ((int)plVar28[0x10] == 1)) {
    *(undefined1 *)(param_1 + 0x50) = 1;
    return 1;
  }
  lVar27 = *(long *)PTR_DAT_04bb39b0;
  if (lVar27 == 0) {
    pbVar29 = PTR_DAT_04bb32e0;
LAB_01deaf50:
    pbVar30 = pbVar29;
    if (7 < *pbVar29) {
      pbVar30 = PTR_DAT_04bb5038;
    }
    if ((plVar28 == (long *)0x0) || (7 >= *pbVar29)) goto LAB_01deafcc;
LAB_01deaf70:
    lVar27 = *plVar28;
    bVar6 = *(byte *)(lVar27 + 0x473);
    pbVar29 = PTR_DAT_04bb5038;
    if ((long)(char)bVar6 != 0xffffffffffffffff) {
      puVar17 = (uint *)(lVar27 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
      if (7 < bVar6) {
        puVar17 = (uint *)(lVar27 + 0x48);
      }
      if ((*puVar17 & 8) != 0) {
        pbVar29 = (byte *)(lVar27 + 0x471);
      }
    }
    local_b4[0] = *pbVar29;
    if (7 < local_b4[0]) goto LAB_01deafc4;
  }
  else {
    pbVar30 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar27 + 0x15c) != 0) {
      pbVar30 = (byte *)(lVar27 + 0x158);
    }
    if (7 < *pbVar30) {
      if ((*(int *)(lVar27 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar29 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01deaf50;
      }
      if (plVar28 != (long *)0x0) goto LAB_01deaf70;
LAB_01deafc4:
      pbVar30 = PTR_DAT_04bb5038;
    }
LAB_01deafcc:
    local_b4[0] = *pbVar30;
    if (7 < local_b4[0]) {
      local_b4[0] = 0xff;
    }
  }
  lVar27 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_b4,1);
  puVar3 = PTR_DAT_04bb46f8;
  if (lVar27 == 0) {
    return 0;
  }
  uVar8 = FUN_01a568e0(*(undefined8 *)PTR_DAT_04bb46f8);
  if ((int)uVar8 < 1) {
    return 0;
  }
  local_a8 = (ulong)local_a8._4_4_ << 0x20;
  local_a0 = (void *)0x0;
  local_98 = 0;
  local_90 = (void *)0x0;
  plVar28 = *(long **)(*(long *)PTR_DAT_04bb47c8 + 8);
  lVar36 = *(long *)PTR_DAT_04bb2698;
  if (lVar36 == 0) {
    pvVar12 = malloc((ulong)uVar8 << 1);
LAB_01deb0ac:
    if (pvVar12 != (void *)0x0) {
      local_a8 = CONCAT44(local_a8._4_4_,uVar8);
      local_a0 = pvVar12;
    }
    lVar36 = *(long *)PTR_DAT_04bb2698;
    if (lVar36 == 0) goto LAB_01deb128;
    plVar11 = (long *)PTR_DAT_04bb2698;
    if (plVar28 != (long *)0x0) {
LAB_01deb10c:
      pvVar12 = (void *)(**(code **)(*plVar28 + 0x30))(plVar28,(ulong)uVar8,8);
      goto LAB_01deb130;
    }
LAB_01deb0e0:
    plVar11 = (long *)PTR_DAT_04bb2698;
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar32 = (undefined8 *)(lVar36 + 8);
    if (lVar10 != 0) {
      puVar32 = (undefined8 *)(lVar10 + 0xa8);
    }
    plVar28 = (long *)*puVar32;
    if (plVar28 != (long *)0x0) goto LAB_01deb10c;
  }
  else {
    plVar11 = plVar28;
    if (plVar28 != (long *)0x0) {
LAB_01deb08c:
      pvVar12 = (void *)(**(code **)(*plVar11 + 0x30))(plVar11,(ulong)uVar8 << 1,8);
      goto LAB_01deb0ac;
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar11 = (long *)(lVar36 + 8);
    if (lVar10 != 0) {
      plVar11 = (long *)(lVar10 + 0xa8);
    }
    plVar11 = (long *)*plVar11;
    if (plVar11 != (long *)0x0) goto LAB_01deb08c;
    lVar36 = *(long *)PTR_DAT_04bb2698;
    if (lVar36 != 0) goto LAB_01deb0e0;
LAB_01deb128:
    plVar11 = (long *)PTR_DAT_04bb2698;
    pvVar12 = malloc((ulong)uVar8);
LAB_01deb130:
    if (pvVar12 != (void *)0x0) {
      local_98 = uVar8;
      local_90 = pvVar12;
    }
  }
  puVar2 = PTR_DAT_04bb2020;
  local_b0 = (undefined *)0x220a002801;
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "BuiltTownOffice";
  bVar6 = FUN_0273f0a0(&local_78);
  puVar5 = PTR_DAT_04bbfe80;
  puVar4 = PTR_DAT_04bbfe78;
  lVar36 = *(long *)puVar3;
  if (*(int *)(lVar36 + 0x1e8) != 0) {
    uVar8 = 0;
    puVar32 = *(undefined8 **)(lVar36 + 0x1f0);
    puVar35 = puVar32 + *(int *)(lVar36 + 0x1e8);
LAB_01deb20c:
    uVar25 = *(uint *)*puVar32;
    if ((int)*(uint *)(lVar36 + 0x1c0) < 1) {
      if ((((*(long *)(lVar36 + 0xb0) == 0) ||
           (puVar17 = *(uint **)(*(long *)(lVar36 + 0xb0) + 8), puVar17 == (uint *)0x0)) ||
          ((uVar25 < *(uint *)(lVar36 + 200) &&
           (*(char *)(*(long *)(lVar36 + 0xd0) + (long)(int)uVar25) == '\0')))) ||
         (((*puVar17 <= uVar25 || (puVar17[1] == 0)) || ((ushort)puVar17[2] == 0))))
      goto LAB_01deb2c0;
      iVar9 = 0xc;
      if (*(char *)((long)puVar17 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar17 = (uint *)((ulong)(puVar17[1] * uVar25 + (uint)(ushort)puVar17[2] * 8 + iVar9) +
                        (long)puVar17);
      uVar25 = *puVar17;
    }
    else if (uVar25 < *(uint *)(lVar36 + 0x1c0)) {
      if (*(uint *)(lVar36 + 0x1b0) <= uVar25) {
        uVar25 = 0;
      }
      puVar17 = *(uint **)(*(long *)(lVar36 + 0x1b8) + (ulong)uVar25 * 8);
      uVar25 = *puVar17;
    }
    else {
LAB_01deb2c0:
      puVar17 = (uint *)0x0;
      uVar25 = uRam0000000000000000;
    }
    if (uVar25 != 0) {
      cVar19 = *puVar4;
      do {
        if (cVar19 == '\0') {
          cVar19 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *puVar4 = 1;
          uVar25 = *puVar17;
        }
        else {
          uVar1 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar1) {
            if (((byte *)((ulong)uVar1 + (long)puVar17) != (byte *)0x0) &&
               (bVar22 = *(byte *)((ulong)uVar1 + (long)puVar17), uVar25 = (uint)bVar22, bVar22 < 2)
               ) goto LAB_01deb398;
            break;
          }
          if (uVar1 != 0xffffffff) break;
        }
        puVar24 = (uint *)(ulong)uVar25;
        uVar25 = 0;
        if ((puVar24 == (uint *)0x0) || (uVar25 = 0, puVar17 == puVar24)) goto LAB_01deb398;
        lVar10 = 0xc;
        if (*(char *)((long)puVar17 + (10 - (long)puVar24)) != '\0') {
          lVar10 = 0x1c;
        }
        lVar10 = (long)puVar17 + (lVar10 - (long)puVar24);
        uVar25 = 0;
        if (lVar10 == 0) goto LAB_01deb398;
        uVar23 = (ulong)*(ushort *)((long)puVar17 + (8 - (long)puVar24));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar23 == 0) break;
        piVar26 = (int *)(lVar10 + 4);
        while (piVar26[-1] != 0x7a6965c5) {
          piVar26 = piVar26 + 2;
          uVar23 = uVar23 - 1;
          if (uVar23 == 0) goto LAB_01deb394;
        }
        iVar9 = 0;
        if (*piVar26 != -1) {
          iVar9 = *piVar26;
        }
        *(int *)(puVar5 + 8) = iVar9;
        uVar25 = *puVar17;
        if (uVar25 == 0) break;
      } while( true );
    }
LAB_01deb394:
    uVar25 = 0;
LAB_01deb398:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar25);
    if (uVar25 != 0) {
      uVar23 = (ulong)*puVar17;
      if (*puVar17 != 0) {
        cVar19 = *puVar4;
        do {
          if (cVar19 != '\0') {
            uVar25 = *(uint *)puVar5;
            if ((int)uVar25 < 0) {
              if ((uVar25 == 0xffffffff) && (uVar23 != 0)) goto LAB_01deb3ec;
            }
            else if (((short *)((ulong)uVar25 + (long)puVar17) != (short *)0x0) &&
                    (*(short *)((ulong)uVar25 + (long)puVar17) == 0x37b0)) {
              uVar21 = (ulong)*(uint *)(puVar5 + 4);
              goto LAB_01deb464;
            }
LAB_01deb4d4:
            uVar25 = *puVar17;
            if (uVar25 == 0) goto LAB_01deb578;
            uVar23 = (ulong)*(uint *)(puVar5 + 4);
            goto LAB_01deb4e0;
          }
          cVar19 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 8) = 0xffffffff;
          *puVar4 = 1;
          uVar23 = (ulong)*puVar17;
          if (uVar23 == 0) goto LAB_01deb4d4;
LAB_01deb3ec:
          lVar10 = (long)puVar17 - uVar23;
          if (lVar10 == 0) goto LAB_01deb4d4;
          lVar14 = 0xc;
          if (*(char *)(lVar10 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          if (lVar14 + lVar10 == 0) goto LAB_01deb4d4;
          uVar23 = (ulong)*(ushort *)(lVar10 + 8);
          *(undefined4 *)puVar5 = 0xfffffffe;
          if (uVar23 == 0) goto LAB_01deb4d4;
          piVar26 = (int *)(lVar14 + lVar10 + 4);
          while (piVar26[-1] != 0x20cb67bc) {
            piVar26 = piVar26 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) goto LAB_01deb4d4;
          }
          iVar9 = 0;
          if (*piVar26 != -1) {
            iVar9 = *piVar26;
          }
          *(int *)puVar5 = iVar9;
          uVar23 = (ulong)*puVar17;
        } while (*puVar17 != 0);
        uVar23 = 0;
      }
LAB_01deb1d0:
      uVar20 = 0;
      bVar22 = (byte)uVar23;
      goto LAB_01deb1d4;
    }
    goto LAB_01deb200;
  }
LAB_01deb59c:
  iVar9 = FUN_01d2ce30(&local_b0);
  plVar28 = *(long **)PTR_DAT_04bc1048;
  lVar36 = *(long *)PTR_DAT_04bb47c8;
  nn::os::LockMutex((MutexType *)(lVar36 + 0x160));
  lVar10 = *plVar11;
  if (lVar10 == 0) {
    puVar32 = malloc(0x28);
LAB_01deb628:
    if (puVar32 != (undefined8 *)0x0) {
      puVar32[3] = 0;
      puVar32[4] = 0;
      *puVar32 = 0;
      puVar32[1] = 0;
      puVar32[2] = 0;
      uVar15 = (**(code **)(*(long *)*plVar28 + 0x80))((long *)*plVar28,8);
      uVar16 = (**(code **)(*(long *)*plVar28 + 0x30))((long *)*plVar28,uVar15,8);
      FUN_0069aa80(&local_78,uVar16,uVar15);
      local_88 = puVar2 + 0x10;
      puStack_80 = &DAT_0407ebb1;
      uVar23 = FUN_01d2cc40(&local_88,&local_b0,&local_78);
      plVar11 = (long *)*plVar28;
      if ((uVar23 & 1) == 0) {
        (**(code **)(*plVar11 + 0x38))(plVar11,puVar32);
        (**(code **)(*(long *)*plVar28 + 0x38))((long *)*plVar28,uVar16);
        puVar32 = (undefined8 *)0x0;
      }
      else {
        uVar15 = FUN_0069bd38(&local_78);
        (**(code **)(*plVar11 + 0x48))(plVar11,uVar16,uVar15);
        *puVar32 = uVar16;
        uVar15 = FUN_0069bd38(&local_78);
        puVar32[1] = uVar15;
        plVar13 = plVar28 + 1;
        lVar10 = *plVar13;
        plVar11 = (long *)((long)*(int *)((long)plVar28 + 0x1c) + (long)puVar32);
        *plVar13 = (long)plVar11;
        *plVar11 = lVar10;
        plVar11[1] = (long)plVar13;
        if (lVar10 != 0) {
          *(long **)(lVar10 + 8) = plVar11;
        }
        *(int *)(plVar28 + 3) = (int)plVar28[3] + 1;
      }
      plVar11 = (long *)PTR_DAT_04bb2698;
    }
  }
  else {
    plVar13 = (long *)*plVar28;
    if (plVar13 != (long *)0x0) {
LAB_01deb608:
      puVar32 = (undefined8 *)(**(code **)(*plVar13 + 0x30))(plVar13,0x28,8);
      goto LAB_01deb628;
    }
    lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar13 = (long *)(lVar10 + 8);
    if (lVar14 != 0) {
      plVar13 = (long *)(lVar14 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 != (long *)0x0) goto LAB_01deb608;
    puVar32 = (undefined8 *)0x0;
  }
  nn::os::UnlockMutex((MutexType *)(lVar36 + 0x160));
  pvVar12 = local_a0;
  if (local_a0 != (void *)0x0) {
    if (*plVar11 == 0) {
      free(local_a0);
    }
    else {
      plVar28 = (long *)FUN_038cb610(*plVar11,local_a0);
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x38))(plVar28,pvVar12);
      }
    }
    local_a0 = (void *)0x0;
    local_a8 = local_a8 & 0xffffffff00000000;
  }
  pvVar12 = local_90;
  if (local_90 != (void *)0x0) {
    if (*plVar11 == 0) {
      free(local_90);
    }
    else {
      plVar28 = (long *)FUN_038cb610(*plVar11,local_90);
      if (plVar28 != (long *)0x0) {
        (**(code **)(*plVar28 + 0x38))(plVar28,pvVar12);
      }
    }
  }
  puVar35 = (undefined8 *)PTR_DAT_04bb36f0;
  if (puVar32 == (undefined8 *)0x0) {
    return 0;
  }
  lVar36 = *plVar11;
  plVar28 = *(long **)(*(long *)PTR_DAT_04bb47c8 + 8);
  if (lVar36 == 0) {
    plVar13 = malloc(0x20);
LAB_01deb83c:
  }
  else {
    plVar13 = plVar28;
    if (plVar28 != (long *)0x0) {
LAB_01deb80c:
      puVar35 = (undefined8 *)PTR_DAT_04bb36f0;
      plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x20,8);
      goto LAB_01deb83c;
    }
    lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar13 = (long *)(lVar36 + 8);
    if (lVar10 != 0) {
      plVar13 = (long *)(lVar10 + 0xa8);
    }
    plVar13 = (long *)*plVar13;
    if (plVar13 != (long *)0x0) goto LAB_01deb80c;
    plVar13 = (long *)0x0;
    puVar35 = (undefined8 *)PTR_DAT_04bb36f0;
  }
  puVar3 = PTR_DAT_04bb29b8;
  *(undefined4 *)(plVar13 + 1) = 0;
  plVar13[2] = 0;
  plVar13[3] = 0;
  *plVar13 = (long)(puVar3 + 0x10);
  *(long **)(param_1 + 0x78) = plVar13;
  lVar10 = *(long *)PTR_DAT_04bc1048;
  lVar36 = *(long *)(lVar10 + 0x10);
  if (lVar36 != lVar10 + 8) {
    do {
      if (lVar36 == (long)puVar32 + (long)*(int *)(lVar10 + 0x1c)) {
        iVar33 = (int)puVar32[1];
        if (iVar33 < 1) break;
        lVar36 = *plVar11;
        uVar23 = puVar32[1] & 0xffffffff;
        if (lVar36 == 0) {
          pvVar12 = malloc(uVar23);
        }
        else {
          if (plVar28 == (long *)0x0) {
            lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            puVar34 = (undefined8 *)(lVar36 + 8);
            if (lVar10 != 0) {
              puVar34 = (undefined8 *)(lVar10 + 0xa8);
            }
            plVar28 = (long *)*puVar34;
            if (plVar28 == (long *)0x0) break;
          }
          pvVar12 = (void *)(**(code **)(*plVar28 + 0x30))(plVar28,uVar23,8);
        }
        if (pvVar12 != (void *)0x0) {
          *(int *)(plVar13 + 1) = iVar33;
          plVar13[2] = (long)pvVar12;
        }
        break;
      }
      lVar36 = *(long *)(lVar36 + 8);
    } while (lVar36 != lVar10 + 8);
  }
  lVar36 = *(long *)(param_1 + 0x78);
  puVar34 = *(undefined8 **)PTR_DAT_04bc1048;
  plVar13 = (long *)puVar34[2];
  plVar28 = puVar34 + 1;
  plVar11 = (long *)((long)puVar32 + (long)*(int *)((long)puVar34 + 0x1c));
  if (plVar13 == plVar28) {
    pvVar12 = (void *)0x0;
    __n = 0;
  }
  else {
    plVar31 = plVar13;
    do {
      if (plVar31 == plVar11) {
        pvVar12 = (void *)*puVar32;
        goto LAB_01deb98c;
      }
      plVar31 = (long *)plVar31[1];
    } while (plVar31 != plVar28);
    pvVar12 = (void *)0x0;
LAB_01deb98c:
    plVar31 = plVar13;
    do {
      if (plVar31 == plVar11) {
        __n = puVar32[1];
        goto LAB_01deb9b0;
      }
      plVar31 = (long *)plVar31[1];
    } while (plVar31 != plVar28);
    __n = 0;
  }
LAB_01deb9b0:
  __dest = *(void **)(lVar36 + 0x10);
  if (__dest != (void *)0x0) {
    if (*(uint *)(lVar36 + 8) < __n) {
      memcpy(__dest,pvVar12,(ulong)*(uint *)(lVar36 + 8));
      __n = (size_t)*(uint *)(lVar36 + 8);
    }
    else {
      memcpy(__dest,pvVar12,__n);
    }
    *(size_t *)(lVar36 + 0x18) = __n;
    puVar34 = *(undefined8 **)PTR_DAT_04bc1048;
    plVar13 = (long *)puVar34[2];
    plVar11 = (long *)((long)puVar32 + (long)*(int *)((long)puVar34 + 0x1c));
  }
  for (; plVar13 != puVar34 + 1; plVar13 = (long *)plVar13[1]) {
    if (plVar13 == plVar11) {
      if (*plVar11 != 0) {
        *(long *)(*plVar11 + 8) = plVar11[1];
      }
      if ((long *)plVar11[1] != (long *)0x0) {
        *(long *)plVar11[1] = *plVar11;
      }
      *plVar11 = 0;
      plVar11[1] = 0;
      *(int *)(puVar34 + 3) = *(int *)(puVar34 + 3) + -1;
      if (*(char *)(puVar32 + 2) == '\0') {
        (**(code **)(*(long *)*puVar34 + 0x38))((long *)*puVar34,*puVar32);
      }
      (**(code **)(*(long *)*puVar34 + 0x38))((long *)*puVar34,puVar32);
      break;
    }
  }
  if ((param_3 & 1) == 0) {
    lVar36 = lVar27 + 0x194b0;
    if (*(long *)(lVar27 + 0x194b8) == 0) {
      lVar36 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    local_a8 = lVar36 + 0x2acb0;
    uVar23 = (ulong)local_a0 >> 8;
    local_a0 = (void *)CONCAT71((int7)uVar23,1);
    if (*(long **)(lVar36 + 0x2acd8) == (long *)0x0) {
      uVar7 = 0;
    }
    else {
      puVar32 = (undefined8 *)**(long **)(lVar36 + 0x2acd8);
      uVar7 = 0;
      if (puVar32 != (undefined8 *)0x0) {
        uVar7 = (**(code **)*puVar32)();
      }
    }
    local_a0 = (void *)(CONCAT62(local_a0._2_6_,CONCAT11(uVar7,local_a0._0_1_)) & 0xffffffffffff01ff
                       );
    local_b0 = PTR_DAT_04bc1158 + 0x10;
    iVar33 = *(int *)(*(long *)(lVar36 + 0x2acc0) + *(long *)(lVar36 + 0x2acb8) + 0xc);
    FUN_02640184(&local_b0);
    if ((iVar33 != 0) && (iVar33 == iVar9)) {
      uVar15 = 1;
      *(undefined1 *)(param_1 + 0x50) = 1;
      goto LAB_01debb9c;
    }
  }
  local_a0 = (void *)CONCAT44(local_a0._4_4_,0xffffffff);
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,2);
  local_a8 = *(long *)(param_1 + 0x78);
  uVar23 = FUN_006ea184(*(undefined8 *)(*(long *)PTR_DAT_04bb21c8 + 0x250),&local_b0);
  if ((uVar23 & 1) != 0) {
    uVar15 = *puVar35;
    *(long *)(param_1 + 0x68) = param_1;
    *(undefined8 *)(param_1 + 0x58) = &PTR_LAB_04a5bce0;
    *(int *)(param_1 + 0x60) = iVar9;
    FUN_01c9a8a8(uVar15,(undefined8 *)(param_1 + 0x58),1,param_2);
    *(uint *)(param_1 + 0x4c) = param_2;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  }
  uVar15 = 0;
LAB_01debb9c:
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 8))();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return uVar15;
LAB_01deb464:
  bVar22 = bVar6 & 1;
  if ((int)uVar21 < 0) {
    if ((uVar21 != 0xffffffff) || (lVar10 = (long)puVar17 - uVar23, lVar10 == 0)) goto LAB_01deb594;
    lVar14 = 0xc;
    if (*(char *)(lVar10 + 10) != '\0') {
      lVar14 = 0x1c;
    }
    if (lVar14 + lVar10 == 0) goto LAB_01deb594;
    uVar23 = (ulong)*(ushort *)(lVar10 + 8);
    *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
    if (uVar23 == 0) goto LAB_01deb594;
    puVar24 = (uint *)(lVar14 + lVar10 + 4);
    while (puVar24[-1] != 0x54706054) {
      puVar24 = puVar24 + 2;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) goto LAB_01deb594;
    }
    uVar21 = 0;
    if (*puVar24 != 0xffffffff) {
      uVar21 = (ulong)*puVar24;
    }
    *(int *)(puVar5 + 4) = (int)uVar21;
    uVar23 = (ulong)*puVar17;
    if (*puVar17 == 0) goto LAB_01deb594;
    goto LAB_01deb464;
  }
  puVar18 = (undefined2 *)(uVar21 + (long)puVar17);
  if (puVar18 != (undefined2 *)0x0) goto LAB_01deb56c;
LAB_01deb594:
  uVar20 = 0;
  goto LAB_01deb1d4;
LAB_01deb4e0:
  if ((int)uVar23 < 0) {
    if ((uVar23 == 0xffffffff) && (lVar10 = (long)puVar17 - (ulong)uVar25, lVar10 != 0)) {
      lVar14 = 0xc;
      if (*(char *)(lVar10 + 10) != '\0') {
        lVar14 = 0x1c;
      }
      uVar23 = 0;
      if (lVar14 + lVar10 != 0) {
        uVar23 = (ulong)*(ushort *)(lVar10 + 8);
        *(undefined4 *)(puVar5 + 4) = 0xfffffffe;
        if (uVar23 != 0) goto code_r0x01deb514;
        goto LAB_01deb578;
      }
      goto LAB_01deb1d0;
    }
  }
  else {
    puVar18 = (undefined2 *)(uVar23 + (long)puVar17);
    if (puVar18 != (undefined2 *)0x0) {
      bVar22 = 0;
LAB_01deb56c:
      uVar20 = *puVar18;
      goto LAB_01deb1d4;
    }
  }
LAB_01deb578:
  uVar20 = 0;
  bVar22 = 0;
LAB_01deb1d4:
  uVar25 = uVar8;
  if ((uint)local_a8 <= uVar8) {
    uVar25 = 0;
  }
  *(undefined2 *)((long)local_a0 + (long)(int)uVar25 * 2) = uVar20;
  uVar25 = uVar8;
  if (local_98 <= uVar8) {
    uVar25 = 0;
  }
  uVar8 = uVar8 + 1;
  *(byte *)((long)local_90 + (long)(int)uVar25) = bVar22;
LAB_01deb200:
  puVar32 = puVar32 + 1;
  if (puVar32 == puVar35) goto LAB_01deb59c;
  goto LAB_01deb20c;
code_r0x01deb514:
  puVar24 = (uint *)(lVar14 + lVar10 + 4);
  while (puVar24[-1] != 0x54706054) {
    puVar24 = puVar24 + 2;
    uVar23 = uVar23 - 1;
    if (uVar23 == 0) goto LAB_01deb578;
  }
  uVar20 = 0;
  bVar22 = 0;
  uVar23 = 0;
  if (*puVar24 != 0xffffffff) {
    uVar23 = (ulong)*puVar24;
  }
  *(int *)(puVar5 + 4) = (int)uVar23;
  uVar25 = *puVar17;
  if (uVar25 == 0) goto LAB_01deb1d4;
  goto LAB_01deb4e0;
}

