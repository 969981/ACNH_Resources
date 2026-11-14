
/* WARNING: Removing unreachable block (ram,0x01c5d594) */
/* WARNING: Removing unreachable block (ram,0x01c5d514) */
/* WARNING: Removing unreachable block (ram,0x01c5d4a0) */
/* WARNING: Removing unreachable block (ram,0x01c5d440) */
/* WARNING: Removing unreachable block (ram,0x01c5d468) */
/* WARNING: Removing unreachable block (ram,0x01c5d4d4) */
/* WARNING: Removing unreachable block (ram,0x01c5d554) */
/* WARNING: Removing unreachable block (ram,0x01c5d5d8) */

uint FUN_01c5d250(undefined8 param_1,undefined1 *param_2)

{
  undefined **ppuVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  ulong uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  byte *pbVar19;
  byte bVar20;
  long lVar21;
  uint uVar22;
  int *piVar23;
  uint uVar24;
  char cVar25;
  uint *puVar26;
  char *pcVar27;
  undefined *puVar28;
  byte *pbVar29;
  long *plVar30;
  float fVar31;
  float fVar32;
  byte local_c8 [4];
  uint local_c4;
  undefined *local_c0;
  uint *local_b8;
  undefined *local_b0;
  uint local_a8;
  undefined **local_a0;
  char *local_98;
  undefined **local_90;
  undefined ***local_88;
  byte *local_80;
  byte local_68 [4];
  byte local_64 [4];
  
  plVar30 = (long *)PTR_DAT_04bb39b0;
  pbVar29 = PTR_DAT_04bb32e0;
  puVar28 = PTR_DAT_04bb2020;
  lVar21 = *(long *)PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  if (lVar21 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01c5d2ec;
LAB_01c5d358:
    local_68[0] = *pbVar19;
    if (7 < local_68[0]) {
      local_68[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar21 + 0x158);
    }
    if ((*pbVar19 < 8) ||
       (((*(int *)(lVar21 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar19 < 8)))) goto LAB_01c5d358;
LAB_01c5d2ec:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01c5d350:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_01c5d358;
    }
    lVar21 = **(long **)PTR_DAT_04bb27d0;
    bVar20 = *(byte *)(lVar21 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar15 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar15 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar15 & 8) != 0) {
        pbVar19 = (byte *)(lVar21 + 0x471);
      }
    }
    local_68[0] = *pbVar19;
    if (7 < local_68[0]) goto LAB_01c5d350;
  }
  ppuVar1 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_88 = (undefined ***)0x40d9b39;
  local_90 = ppuVar1;
  iVar11 = FUN_0274bce0(local_68,&local_90);
  local_88 = (undefined ***)0x40cf9c3;
  local_90 = ppuVar1;
  iVar12 = FUN_0274bce0(local_68,&local_90);
  if (iVar12 == 0) {
    bVar10 = false;
  }
  else {
    local_98 = "MuseumCafeEv_3_ConfirmedVisitingTown";
    local_a0 = ppuVar1;
    iVar12 = FUN_0274bce0(local_68,&local_a0);
    bVar10 = iVar12 == 0;
  }
  if ((iVar11 == 6) || (bVar10)) {
    uVar14 = 0;
    param_2[1] = bVar10;
    goto LAB_01c5e004;
  }
  local_90 = (undefined **)(puVar28 + 0x10);
  local_88 = (undefined ***)0x4081b53;
  iVar12 = FUN_0274bce0(local_68,&local_90);
  if (iVar12 == 0) goto LAB_01c5d780;
  local_90._0_4_ = 1;
  local_c8[0] = local_68[0];
  if (7 < local_68[0]) {
    local_c8[0] = 0xff;
  }
  iVar12 = FUN_0274bce0(local_c8,&DAT_0534f198);
  fVar31 = (float)iVar12;
  local_90._0_4_ = 2;
  if (fVar31 <= 0.0) {
    fVar31 = 0.0;
  }
  iVar12 = FUN_0274bce0(local_c8,0x534f1b0);
  local_90._0_4_ = 3;
  fVar32 = (float)iVar12;
  if ((float)iVar12 <= (float)(int)fVar31) {
    fVar32 = (float)(int)fVar31;
  }
  iVar12 = FUN_0274bce0(local_c8,0x534f1c8);
  local_90._0_4_ = 4;
  fVar31 = (float)iVar12;
  if ((float)iVar12 <= (float)(int)fVar32) {
    fVar31 = (float)(int)fVar32;
  }
  iVar12 = FUN_0274bce0(local_c8,0x534f1e0);
  local_c4 = 0;
  fVar32 = (float)iVar12;
  if ((float)iVar12 <= (float)(int)fVar31) {
    fVar32 = (float)(int)fVar31;
  }
  iVar12 = (int)fVar32;
  if (5 < iVar12) {
    local_90._0_4_ = 1;
    iVar13 = FUN_0274bce0(local_c8,&DAT_0534f198);
    uVar14 = 0;
    if ((iVar13 == iVar12) && (uVar14 = 1 << (ulong)((uint)local_90 & 0x1f), 4 < (uint)local_90)) {
      uVar14 = 0;
    }
    local_90._0_4_ = 2;
    iVar13 = FUN_0274bce0(local_c8,0x534f1b0);
    if ((iVar13 == iVar12) && ((uint)local_90 < 5)) {
      uVar14 = 1 << (ulong)((uint)local_90 & 0x1f) | uVar14;
    }
    local_90._0_4_ = 3;
    iVar13 = FUN_0274bce0(local_c8,0x534f1c8);
    if ((iVar13 == iVar12) && ((uint)local_90 < 5)) {
      uVar14 = 1 << (ulong)((uint)local_90 & 0x1f) | uVar14;
    }
    local_90 = (undefined **)CONCAT44(local_90._4_4_,4);
    iVar13 = FUN_0274bce0(local_c8,0x534f1e0);
    if ((iVar13 == iVar12) && ((uint)local_90 < 5)) {
      uVar14 = 1 << (ulong)((uint)local_90 & 0x1f) | uVar14;
    }
    puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = puVar15[3];
    uVar4 = uVar14 - (uVar14 >> 1 & 0x55555555);
    uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
    uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
    uVar4 = uVar4 + (uVar4 >> 8);
    uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
    uVar24 = *puVar15 ^ *puVar15 << 0xb;
    *puVar15 = puVar15[1];
    puVar15[1] = puVar15[2];
    uVar24 = uVar24 >> 8 ^ uVar3 >> 0x13 ^ uVar24 ^ uVar3;
    puVar15[2] = uVar3;
    puVar15[3] = uVar24;
    local_c4 = 0xffffffff;
    uVar24 = (uint)((ulong)uVar4 * (ulong)uVar24 >> 0x20);
    if ((uVar24 < uVar4) && (uVar14 != 0)) {
      iVar12 = uVar24 + 2;
      do {
        iVar12 = iVar12 + -1;
        if (iVar12 < 2) {
          uVar14 = uVar14 - 1 & (uVar14 ^ 0xffffffff);
          uVar14 = uVar14 - (uVar14 >> 1 & 0x55555555);
          uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
          uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
          uVar14 = uVar14 + (uVar14 >> 8);
          local_c4 = uVar14 + (uVar14 >> 0x10) & 0x3f;
          break;
        }
        uVar14 = uVar14 - 1 & uVar14;
      } while (uVar14 != 0);
    }
  }
  if (iVar11 == 5) goto LAB_01c5d6f4;
  if (local_c4 - 1 < 3) {
    uVar14 = local_c4;
    if (4 < local_c4) {
      uVar14 = 0;
    }
    uVar14 = (uint)(ushort)(&DAT_0534f190)[(ulong)uVar14 * 0xc];
    goto LAB_01c5e004;
  }
  if (local_c4 == 0) {
    local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
    local_80 = (byte *)((ulong)local_80 & 0xffffffff00000000);
    local_a0 = (undefined **)(PTR_DAT_04bc0e78 + 0x10);
    local_88 = &local_a0;
    local_90 = &PTR_LAB_04a42090;
    FUN_01c55e50(&local_90);
    FUN_01c5ed0c(&local_90,&local_98);
    FUN_01c5eea0(&local_b0,&local_98);
    uVar24 = local_a8;
    uVar9 = DAT_0534e320;
    lVar21 = DAT_0534e308;
    uVar4 = DAT_0534e300;
    puVar28 = PTR_DAT_04bc0e48;
    uVar14 = 0;
    if (local_a8 != (uint)local_88) {
      uVar14 = 0;
      cVar25 = *PTR_DAT_04bc0e40;
      do {
        uVar3 = ((uint)local_88 & 0xffff) - (uint)uVar9;
        if (((uVar3 < uVar4) &&
            (puVar15 = *(uint **)(lVar21 + (long)(int)uVar3 * 8), puVar15 != (uint *)0x0)) &&
           (uVar3 = *puVar15, uVar3 != 0)) {
          do {
            if (cVar25 == '\0') {
              cVar25 = '\x01';
              *PTR_DAT_04bc0e40 = 1;
              *(undefined8 *)puVar28 = 0xffffffffffffffff;
              *(undefined8 *)(puVar28 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar28 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar28 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar28 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar28 + 0x28) = 0xffffffffffffffff;
              uVar3 = *puVar15;
            }
            else {
              uVar22 = *(uint *)(puVar28 + 0x2c);
              if (-1 < (int)uVar22) {
                if ((byte *)((ulong)uVar22 + (long)puVar15) == (byte *)0x0) goto LAB_01c5dc70;
                uVar22 = (uint)*(byte *)((ulong)uVar22 + (long)puVar15);
                break;
              }
              if (uVar22 != 0xffffffff) goto LAB_01c5dc70;
            }
            puVar26 = (uint *)(ulong)uVar3;
            if ((puVar26 == (uint *)0x0) || (puVar15 == puVar26)) goto LAB_01c5dc70;
            lVar5 = 0xc;
            if (*(char *)((long)puVar15 + (10 - (long)puVar26)) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar15 + (lVar5 - (long)puVar26);
            uVar22 = 0;
            if (lVar5 == 0) break;
            uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar26));
            *(undefined4 *)(puVar28 + 0x2c) = 0xfffffffe;
            if (uVar16 == 0) goto LAB_01c5dc70;
            piVar23 = (int *)(lVar5 + 4);
            while (piVar23[-1] != -0x2765f250) {
              piVar23 = piVar23 + 2;
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) goto LAB_01c5dc70;
            }
            uVar22 = 0;
            iVar12 = 0;
            if (*piVar23 != -1) {
              iVar12 = *piVar23;
            }
            *(int *)(puVar28 + 0x2c) = iVar12;
            uVar3 = *puVar15;
          } while (uVar3 != 0);
        }
        else {
LAB_01c5dc70:
          uVar22 = 0;
        }
        uVar14 = uVar14 + uVar22;
        FUN_01c5e470(&local_90);
      } while (uVar24 != (uint)local_88);
    }
    puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar24 = puVar15[3];
    uVar4 = *puVar15 ^ *puVar15 << 0xb;
    *puVar15 = puVar15[1];
    puVar15[1] = puVar15[2];
    uVar4 = uVar4 >> 8 ^ uVar24 >> 0x13 ^ uVar4 ^ uVar24;
    puVar15[2] = uVar24;
    puVar15[3] = uVar4;
    puVar28 = PTR_DAT_04bb2020;
    plVar30 = (long *)PTR_DAT_04bb39b0;
    if ((uint)((ulong)uVar4 * 100 >> 0x20) < uVar14) {
      local_88 = &local_a0;
      local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
      local_80 = (byte *)((ulong)local_80 & 0xffffffff00000000);
      local_a0 = (undefined **)(PTR_DAT_04bc0e78 + 0x10);
      local_90 = &PTR_LAB_04a42090;
      FUN_01c55e50(&local_90);
      uVar14 = (uint)local_98 - ((uint)local_98 >> 1 & 0x55555555);
      uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
      uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
      uVar14 = uVar14 + (uVar14 >> 8);
      if ((uVar14 + (uVar14 >> 0x10) & 0x3f) != 0) {
        uVar14 = FUN_01c5e8b0(&local_a0);
        goto LAB_01c5e004;
      }
      goto LAB_01c5d780;
    }
  }
  else if (local_c4 != 4) {
LAB_01c5d780:
    uVar14 = 0;
    goto LAB_01c5e004;
  }
LAB_01c5d6f4:
  puVar7 = PTR_DAT_04bc0e78;
  lVar21 = *plVar30;
  pbVar19 = pbVar29;
  if (lVar21 == 0) {
    if (7 < *pbVar29) goto LAB_01c5d798;
LAB_01c5d804:
    local_64[0] = *pbVar19;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar21 + 0x158);
    }
    if ((*pbVar19 < 8) ||
       (((*(int *)(lVar21 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar19 < 8)))) goto LAB_01c5d804;
LAB_01c5d798:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01c5d7fc:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_01c5d804;
    }
    lVar21 = **(long **)PTR_DAT_04bb27d0;
    bVar20 = *(byte *)(lVar21 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar15 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar15 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar15 & 8) != 0) {
        pbVar19 = (byte *)(lVar21 + 0x471);
      }
    }
    local_64[0] = *pbVar19;
    if (7 < local_64[0]) goto LAB_01c5d7fc;
  }
  local_a8 = 0;
  local_b0 = PTR_DAT_04bc0e78 + 0x10;
  local_90 = &PTR_LAB_04a42090;
  local_80 = (byte *)CONCAT44(local_80._4_4_,1);
  local_88 = (undefined ***)&local_b0;
  FUN_01c55e50(&local_90);
  local_90 = &PTR_LAB_04a420b8;
  local_80 = local_64;
  local_88 = (undefined ***)&local_b0;
  FUN_01c55e50(&local_90);
  uVar14 = FUN_01c5e8b0(&local_b0);
  local_c0 = PTR_DAT_04bc0e38 + 0x10;
  uVar4 = (uVar14 & 0xffff) - (uint)DAT_0534e320;
  if (uVar4 < DAT_0534e300) {
    puVar15 = *(uint **)(DAT_0534e308 + (long)(int)uVar4 * 8);
  }
  else {
    puVar15 = (uint *)0x0;
  }
  local_b8 = puVar15;
  local_90 = (undefined **)FUN_01c65c60(local_64);
  if (((ulong)local_90 & 0xffff) != 0) {
    lVar21 = *(long *)PTR_DAT_04bb32e8;
    uVar4 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
    if (1 < uVar4) {
      uVar4 = 0;
    }
    if (uVar4 == 1) {
      uVar16 = FUN_01c55c80(&local_c0);
      puVar8 = PTR_DAT_04bc0e48;
      puVar6 = PTR_DAT_04bc0e40;
      if ((uVar16 & 1) != 0) {
        if ((puVar15 == (uint *)0x0) || (uVar4 = *puVar15, uVar4 == 0)) {
LAB_01c5dd68:
          uVar17 = 0;
          goto LAB_01c5dd6c;
        }
        cVar25 = *PTR_DAT_04bc0e40;
        do {
          if (cVar25 != '\0') {
            uVar24 = *(uint *)(puVar8 + 0x24);
            if ((int)uVar24 < 0) {
              if (uVar24 == 0xffffffff) goto LAB_01c5da70;
            }
            else if ((undefined1 *)((ulong)uVar24 + (long)puVar15) != (undefined1 *)0x0) {
              uVar17 = *(undefined1 *)((ulong)uVar24 + (long)puVar15);
              goto LAB_01c5e234;
            }
            goto LAB_01c5e230;
          }
          cVar25 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          uVar4 = *puVar15;
LAB_01c5da70:
          puVar26 = (uint *)(ulong)uVar4;
          uVar17 = 0;
          if ((puVar26 == (uint *)0x0) || (puVar15 == puVar26)) {
LAB_01c5e234:
            uVar4 = *puVar15;
            if (uVar4 == 0) goto LAB_01c5dd6c;
            uVar24 = *(uint *)(puVar8 + 0x18);
            goto LAB_01c5e254;
          }
          lVar5 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar26)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar15 + (lVar5 - (long)puVar26);
          if (lVar5 == 0) {
LAB_01c5e230:
            uVar17 = 0;
            goto LAB_01c5e234;
          }
          uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar26));
          *(undefined4 *)(puVar8 + 0x24) = 0xfffffffe;
          if (uVar16 == 0) goto LAB_01c5e230;
          piVar23 = (int *)(lVar5 + 4);
          while (piVar23[-1] != -0x728bec5) {
            piVar23 = piVar23 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_01c5e230;
          }
          uVar17 = 0;
          uVar18 = 0;
          iVar12 = 0;
          if (*piVar23 != -1) {
            iVar12 = *piVar23;
          }
          *(int *)(puVar8 + 0x24) = iVar12;
          uVar4 = *puVar15;
        } while (uVar4 != 0);
        goto LAB_01c5dd70;
      }
    }
    else if (uVar4 == 0) {
      uVar16 = FUN_01c55ab0(&local_c0);
      puVar8 = PTR_DAT_04bc0e48;
      puVar6 = PTR_DAT_04bc0e40;
      if ((uVar16 & 1) != 0) {
        if ((puVar15 == (uint *)0x0) || (uVar4 = *puVar15, uVar4 == 0)) goto LAB_01c5dd68;
        cVar25 = *PTR_DAT_04bc0e40;
        do {
          if (cVar25 != '\0') {
            uVar24 = *(uint *)(puVar8 + 0x20);
            if ((int)uVar24 < 0) {
              if (uVar24 == 0xffffffff) goto LAB_01c5d984;
            }
            else if ((undefined1 *)((ulong)uVar24 + (long)puVar15) != (undefined1 *)0x0) {
              uVar17 = *(undefined1 *)((ulong)uVar24 + (long)puVar15);
              goto LAB_01c5e190;
            }
            goto LAB_01c5e18c;
          }
          cVar25 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          uVar4 = *puVar15;
LAB_01c5d984:
          puVar26 = (uint *)(ulong)uVar4;
          uVar17 = 0;
          if ((puVar26 == (uint *)0x0) || (puVar15 == puVar26)) {
LAB_01c5e190:
            uVar4 = *puVar15;
            if (uVar4 == 0) goto LAB_01c5dd6c;
            uVar24 = *(uint *)(puVar8 + 0x14);
            goto LAB_01c5e1b0;
          }
          lVar5 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar26)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar15 + (lVar5 - (long)puVar26);
          if (lVar5 == 0) {
LAB_01c5e18c:
            uVar17 = 0;
            goto LAB_01c5e190;
          }
          uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar26));
          *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
          if (uVar16 == 0) goto LAB_01c5e18c;
          piVar23 = (int *)(lVar5 + 4);
          while (piVar23[-1] != 0x26c5579) {
            piVar23 = piVar23 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_01c5e18c;
          }
          uVar17 = 0;
          uVar18 = 0;
          iVar12 = 0;
          if (*piVar23 != -1) {
            iVar12 = *piVar23;
          }
          *(int *)(puVar8 + 0x20) = iVar12;
          uVar4 = *puVar15;
        } while (uVar4 != 0);
        goto LAB_01c5dd70;
      }
    }
  }
  goto LAB_01c5dff8;
LAB_01c5e254:
  if (-1 < (int)uVar24) goto LAB_01c5e2c4;
  if ((uVar24 != 0xffffffff) || (lVar5 = (long)puVar15 - (ulong)uVar4, lVar5 == 0))
  goto LAB_01c5dd6c;
  lVar2 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar5 == 0) goto LAB_01c5dd6c;
  uVar16 = (ulong)*(ushort *)(lVar5 + 8);
  *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
  if (uVar16 == 0) goto LAB_01c5dd6c;
  puVar26 = (uint *)(lVar2 + lVar5 + 4);
  while (puVar26[-1] != 0x224c7f34) {
    puVar26 = puVar26 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_01c5dd6c;
  }
  uVar24 = 0;
  if (*puVar26 != 0xffffffff) {
    uVar24 = *puVar26;
  }
  *(uint *)(puVar8 + 0x18) = uVar24;
  uVar4 = *puVar15;
  if (uVar4 == 0) goto LAB_01c5dd6c;
  goto LAB_01c5e254;
LAB_01c5e1b0:
  if (-1 < (int)uVar24) goto LAB_01c5e2c4;
  if ((uVar24 != 0xffffffff) || (lVar5 = (long)puVar15 - (ulong)uVar4, lVar5 == 0))
  goto LAB_01c5dd6c;
  lVar2 = 0xc;
  if (*(char *)(lVar5 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar5 == 0) goto LAB_01c5dd6c;
  uVar16 = (ulong)*(ushort *)(lVar5 + 8);
  *(undefined4 *)(puVar8 + 0x14) = 0xfffffffe;
  if (uVar16 == 0) goto LAB_01c5dd6c;
  puVar26 = (uint *)(lVar2 + lVar5 + 4);
  while (puVar26[-1] != 0xd8f76b76) {
    puVar26 = puVar26 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_01c5dd6c;
  }
  uVar24 = 0;
  if (*puVar26 != 0xffffffff) {
    uVar24 = *puVar26;
  }
  *(uint *)(puVar8 + 0x14) = uVar24;
  uVar4 = *puVar15;
  if (uVar4 == 0) goto LAB_01c5dd6c;
  goto LAB_01c5e1b0;
LAB_01c5e2c4:
  if ((undefined1 *)((long)puVar15 + (ulong)uVar24) == (undefined1 *)0x0) {
LAB_01c5dd6c:
    uVar18 = 0;
  }
  else {
    uVar18 = *(undefined1 *)((long)puVar15 + (ulong)uVar24);
  }
LAB_01c5dd70:
  uVar16 = FUN_01c5ec28(&local_90,lVar21 + 0x4060,uVar17,uVar18);
  puVar8 = PTR_DAT_04bc0e48;
  puVar6 = PTR_DAT_04bc0e40;
  if ((uVar16 & 1) == 0) {
    if (puVar15 == (uint *)0x0) {
      local_88 = *(undefined ****)PTR_PTR_04bc0e68;
    }
    else {
      uVar14 = *puVar15;
      if (uVar14 != 0) {
        cVar25 = *PTR_DAT_04bc0e40;
        do {
          if (cVar25 == '\0') {
            cVar25 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            uVar14 = *puVar15;
          }
          else {
            uVar4 = *(uint *)(puVar8 + 0x28);
            if (-1 < (int)uVar4) {
              pcVar27 = (char *)((ulong)uVar4 + (long)puVar15);
              goto LAB_01c5de60;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar26 = (uint *)(ulong)uVar14;
          pcVar27 = (char *)0x0;
          if ((puVar26 == (uint *)0x0) || (puVar15 == puVar26)) goto LAB_01c5de60;
          lVar21 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar26)) != '\0') {
            lVar21 = 0x1c;
          }
          lVar21 = (long)puVar15 + (lVar21 - (long)puVar26);
          pcVar27 = (char *)0x0;
          if (lVar21 == 0) goto LAB_01c5de60;
          uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar26));
          *(undefined4 *)(puVar8 + 0x28) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar23 = (int *)(lVar21 + 4);
          while (piVar23[-1] != -0x7742f63e) {
            piVar23 = piVar23 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_01c5de5c;
          }
          iVar12 = 0;
          if (*piVar23 != -1) {
            iVar12 = *piVar23;
          }
          *(int *)(puVar8 + 0x28) = iVar12;
          uVar14 = *puVar15;
          if (uVar14 == 0) break;
        } while( true );
      }
LAB_01c5de5c:
      pcVar27 = (char *)0x0;
LAB_01c5de60:
      local_88 = (undefined ***)*(char **)PTR_PTR_04bc0e60;
      if (pcVar27 != (char *)0x0) {
        local_88 = (undefined ***)pcVar27;
      }
    }
    local_90 = (undefined **)(puVar28 + 0x10);
    if (*(char *)local_88 != '\0') {
      lVar21 = *plVar30;
      if (lVar21 == 0) {
LAB_01c5dee0:
        if (*pbVar29 < 8) goto LAB_01c5df58;
LAB_01c5deec:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01c5df50:
          pbVar29 = PTR_DAT_04bb5038;
          goto LAB_01c5df58;
        }
        lVar21 = **(long **)PTR_DAT_04bb27d0;
        bVar20 = *(byte *)(lVar21 + 0x473);
        pbVar19 = PTR_DAT_04bb5038;
        if ((long)(char)bVar20 != 0xffffffffffffffff) {
          puVar15 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
          if (7 < bVar20) {
            puVar15 = (uint *)(lVar21 + 0x48);
          }
          if ((*puVar15 & 8) != 0) {
            pbVar19 = (byte *)(lVar21 + 0x471);
          }
        }
        bVar20 = *pbVar19;
        bVar10 = 7 < bVar20;
        if (bVar10) {
          bVar20 = 0xff;
        }
        local_a0 = (undefined **)CONCAT71(local_a0._1_7_,bVar20);
        if (bVar10) goto LAB_01c5df50;
      }
      else {
        if (*(int *)(lVar21 + 0x15c) != 0) {
          pbVar29 = (byte *)(lVar21 + 0x158);
        }
        if (7 < *pbVar29) {
          if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar29 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01c5dee0;
          }
          goto LAB_01c5deec;
        }
LAB_01c5df58:
        bVar20 = *pbVar29;
        if (7 < bVar20) {
          bVar20 = 0xff;
        }
        local_a0 = (undefined **)CONCAT71(local_a0._1_7_,bVar20);
      }
      FUN_0274bfe8(&local_a0,&local_90,1);
    }
    if (iVar11 == 5) {
      uVar14 = 2;
    }
    else {
      local_a0 = (undefined **)(puVar7 + 0x10);
      local_88 = &local_a0;
      local_98 = (char *)((ulong)local_98 & 0xffffffff00000000);
      local_80 = (byte *)((ulong)local_80 & 0xffffffff00000000);
      local_90 = &PTR_LAB_04a42090;
      FUN_01c55e50(&local_90);
      uVar14 = (uint)local_98 - ((uint)local_98 >> 1 & 0x55555555);
      uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
      uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
      uVar14 = uVar14 + (uVar14 >> 8);
      if ((uVar14 + (uVar14 >> 0x10) & 0x3f) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = FUN_01c5e8b0(&local_a0);
      }
    }
  }
LAB_01c5dff8:
  *param_2 = 1;
LAB_01c5e004:
  puVar6 = PTR_DAT_04bc0e48;
  puVar7 = PTR_DAT_04bc0e40;
  uVar4 = (uVar14 & 0xffff) - (uint)DAT_0534e320;
  if ((uVar4 < DAT_0534e300) &&
     (puVar15 = *(uint **)(DAT_0534e308 + (long)(int)uVar4 * 8), puVar15 != (uint *)0x0)) {
    uVar4 = *puVar15;
    if (uVar4 != 0) {
      cVar25 = *PTR_DAT_04bc0e40;
      do {
        if (cVar25 == '\0') {
          cVar25 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
          uVar4 = *puVar15;
        }
        else {
          uVar24 = *(uint *)(puVar6 + 0x28);
          if (-1 < (int)uVar24) {
            pcVar27 = (char *)((ulong)uVar24 + (long)puVar15);
            goto LAB_01c5e108;
          }
          if (uVar24 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar4;
        pcVar27 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (pcVar27 = (char *)0x0, puVar15 == puVar26))
        goto LAB_01c5e108;
        lVar21 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar26)) != '\0') {
          lVar21 = 0x1c;
        }
        lVar21 = (long)puVar15 + (lVar21 - (long)puVar26);
        pcVar27 = (char *)0x0;
        if (lVar21 == 0) goto LAB_01c5e108;
        uVar16 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar26));
        *(undefined4 *)(puVar6 + 0x28) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar23 = (int *)(lVar21 + 4);
        while (piVar23[-1] != -0x7742f63e) {
          piVar23 = piVar23 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01c5e104;
        }
        iVar11 = 0;
        if (*piVar23 != -1) {
          iVar11 = *piVar23;
        }
        *(int *)(puVar6 + 0x28) = iVar11;
        uVar4 = *puVar15;
        if (uVar4 == 0) break;
      } while( true );
    }
LAB_01c5e104:
    pcVar27 = (char *)0x0;
LAB_01c5e108:
    local_88 = (undefined ***)*(char **)PTR_PTR_04bc0e60;
    if (pcVar27 != (char *)0x0) {
      local_88 = (undefined ***)pcVar27;
    }
  }
  else {
    local_88 = *(undefined ****)PTR_PTR_04bc0e68;
  }
  local_90 = (undefined **)(puVar28 + 0x10);
  if (*(char *)local_88 != '\0') {
    FUN_0274bfe8(local_68,&local_90,1);
  }
  return uVar14;
}

