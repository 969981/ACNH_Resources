
void FUN_01e32d80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  undefined *puVar8;
  char *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  long lVar12;
  uint *puVar13;
  long lVar14;
  undefined *puVar15;
  int iVar16;
  char cVar17;
  ulong uVar18;
  uint *puVar19;
  int *piVar20;
  long *plVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined4 local_134;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  uint local_104;
  undefined1 auStack_100 [8];
  char *local_f8;
  int local_f0;
  
  puVar2 = PTR_DAT_04bc1568;
  puVar1 = PTR_DAT_04bc1560;
  lVar12 = *(long *)PTR_DAT_04bb3968;
  if (lVar12 != 0) {
    uVar7 = *(uint *)(param_1 + 0x420);
    if ((int)*(uint *)(lVar12 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar12 + 0x169b8) != 0) &&
           (puVar13 = *(uint **)(*(long *)(lVar12 + 0x169b8) + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(lVar12 + 0x169d0) <= uVar7 ||
           (*(char *)(*(long *)(lVar12 + 0x169d8) + (long)(int)uVar7) != '\0')))) &&
         (((uVar7 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar16 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar16 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * uVar7 + (uint)(ushort)puVar13[2] * 8 + iVar16) +
                          (long)puVar13);
        goto joined_r0x01e32e70;
      }
    }
    else if (uVar7 < *(uint *)(lVar12 + 0x16ac8)) {
      if (*(uint *)(lVar12 + 0x16ab8) <= uVar7) {
        uVar7 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar12 + 0x16ac0) + (ulong)uVar7 * 8);
joined_r0x01e32e70:
      if (puVar13 != (uint *)0x0) {
        uVar7 = *puVar13;
        goto joined_r0x01e32e80;
      }
    }
  }
  uVar7 = *(uint *)PTR_DAT_04bc2828;
  puVar13 = (uint *)PTR_DAT_04bc2828;
joined_r0x01e32e80:
  if (uVar7 == 0) {
LAB_01e32f94:
    local_104 = 0;
  }
  else {
    cVar17 = *PTR_DAT_04bc1560;
    do {
      if (cVar17 == '\0') {
        cVar17 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar1 = 1;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(uint *)(puVar2 + 0x18);
        if (-1 < (int)uVar7) {
          if (((byte *)((ulong)uVar7 + (long)puVar13) == (byte *)0x0) ||
             (bVar6 = *(byte *)((ulong)uVar7 + (long)puVar13), local_104 = (uint)bVar6, 7 < bVar6))
          goto LAB_01e32f94;
          goto LAB_01e32f98;
        }
        if (uVar7 != 0xffffffff) goto LAB_01e32f94;
      }
      puVar19 = (uint *)(ulong)*puVar13;
      local_104 = 0;
      if ((*puVar13 == 0) || (puVar13 == puVar19)) goto LAB_01e32f98;
      lVar12 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar19)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar13 + (lVar12 - (long)puVar19);
      if (lVar12 == 0) goto LAB_01e32f94;
      uVar18 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar19));
      *(undefined4 *)(puVar2 + 0x18) = 0xfffffffe;
      local_104 = 0;
      if (uVar18 == 0) goto LAB_01e32f98;
      piVar20 = (int *)(lVar12 + 4);
      while (piVar20[-1] != -0x422b23f1) {
        piVar20 = piVar20 + 2;
        uVar18 = uVar18 - 1;
        if (uVar18 == 0) {
          local_104 = 0;
          goto LAB_01e32f98;
        }
      }
      iVar16 = 0;
      if (*piVar20 != -1) {
        iVar16 = *piVar20;
      }
      *(int *)(puVar2 + 0x18) = iVar16;
    } while (*puVar13 != 0);
    local_104 = 0;
  }
LAB_01e32f98:
  uVar7 = *(int *)(param_1 + 0x420) - 0x23;
  if (uVar7 < 6) {
    local_134 = *(undefined4 *)(&DAT_04178d7c + (long)(int)uVar7 * 4);
  }
  else {
    local_134 = 0;
  }
  lVar12 = *(long *)(param_1 + 0x440);
  if (lVar12 != param_1 + 0x438) {
    iVar16 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    plVar21 = (long *)PTR_DAT_04bb5c90;
    do {
      puVar15 = &DAT_053fe348 + (ulong)*(uint *)(lVar12 + -8) * 0xba0;
      if (9 < *(uint *)(lVar12 + -8)) {
        puVar15 = &DAT_053fe348;
      }
      if (puVar15[0xaf9] == '\0') goto LAB_01e330c4;
      switch(local_104) {
      case 1:
        lVar14 = *plVar21;
        fVar23 = -25.0;
        if (iVar16 != 1) {
          fVar23 = -10.0;
        }
        fVar22 = -40.0;
        if (iVar16 != 0) {
          fVar22 = fVar23;
        }
        fVar24 = *(float *)(lVar14 + 0x48);
        fVar23 = -35.0;
        if (iVar16 != 0) {
          fVar23 = -20.0;
        }
        fVar26 = *(float *)(lVar14 + 0x40);
        fVar25 = *(float *)(lVar14 + 0x44);
        if (*(int *)(param_1 + 0x42c) < 3) {
          fVar22 = fVar23;
        }
        *(undefined4 *)(puVar15 + 0x810) = local_134;
        *(float *)(puVar15 + 2000) = fVar25 + 0.0;
        *(float *)(puVar15 + 0x7cc) = fVar26 + fVar22;
        *(float *)(puVar15 + 0x7d4) = fVar24 + 15.0;
        break;
      case 2:
        lVar14 = *plVar21;
        fVar22 = *(float *)(lVar14 + 0x40);
        fVar24 = *(float *)(lVar14 + 0x44) + 0.0;
        fVar25 = *(float *)(lVar14 + 0x48) + 5.0;
        fVar26 = *(float *)(lVar14 + 0x48) + 20.0;
        *(float *)(puVar15 + 2000) = fVar24;
        fVar23 = fVar22 + -5.0;
        if (iVar16 == 1) {
          fVar23 = fVar22 + -25.0;
        }
        fVar28 = fVar22 + -15.0;
        fVar27 = fVar25;
        if (iVar16 != 0) {
          fVar28 = fVar23;
          fVar27 = fVar26;
        }
        *(float *)(puVar15 + 0x7d4) = fVar27;
        *(float *)(puVar15 + 0x7cc) = fVar28;
        *(float *)(puVar15 + 0x7dc) = (fVar24 + fVar24 + fVar24) * 0.33333334;
        *(float *)(puVar15 + 0x7d8) = (fVar22 + -5.0 + fVar22 + -15.0 + fVar22 + -25.0) * 0.33333334
        ;
        *(float *)(puVar15 + 0x7e0) = (fVar26 + fVar25 + fVar26) * 0.33333334;
        break;
      case 3:
        local_120 = 0;
        puVar11 = &DAT_0407ebb1;
        local_110 = 0;
        uVar7 = *(uint *)(param_1 + 0x420);
        local_130 = puVar1;
        puStack_128 = puVar2;
        local_118 = puVar2;
        if (uVar7 < 0x34) {
          if (uVar7 != 0x31) {
            puVar11 = *(undefined8 **)(PTR_s_Walking_04bbbab8 + (ulong)uVar7 * 8 + 0x2b0);
            goto LAB_01e333fc;
          }
          iVar10 = FUN_0118be74();
          if (iVar10 != 0x7e3d1e46) {
            FUN_0118ad90(&local_130,iVar10);
          }
        }
        else {
LAB_01e333fc:
          FUN_0071b954(auStack_100,"N_%s_Ftr_%d",puVar11,0);
          pcVar9 = local_f8;
          if ((*(int *)(param_1 + 0x418) == 1) && (local_f8 != "P_EventNone_Ftr_11")) {
            iVar10 = 0x12;
            if (local_f0 < 0x13) {
              iVar10 = local_f0 + -1;
            }
            memcpy(local_f8,"P_EventNone_Ftr_11",(long)iVar10);
            pcVar9[iVar10] = '\0';
            plVar21 = (long *)PTR_DAT_04bb5c90;
          }
          FUN_0118ac30(&local_130,auStack_100);
        }
        puVar8 = PTR_DAT_04bb2d00;
        lVar14 = 0x20;
        if (iVar16 == 1) {
          lVar14 = 0x40;
        }
        fVar23 = (float)(((int)local_110 - (int)local_120) + 1) * 0.5 * 5.0 + 5.0;
        fVar22 = fVar23;
        if (iVar16 == 1) {
          fVar22 = (float)((local_110._4_4_ - local_120._4_4_) + 1) * 0.5 * 5.0 + 5.0;
        }
        lVar4 = 0x60;
        if (iVar16 != 0) {
          lVar4 = lVar14;
        }
        *(undefined4 *)(puVar15 + 0x7dc) = 0;
        *(int *)(puVar15 + 0x7f8) = (int)local_120;
        *(int *)(puVar15 + 0x7fc) = local_120._4_4_;
        if (iVar16 != 0) {
          fVar23 = fVar22;
        }
        pfVar3 = (float *)(puVar8 + lVar4 * 0x10);
        fVar24 = *pfVar3 + pfVar3[1] * 0.0;
        fVar26 = pfVar3[2] + pfVar3[3] * 0.0;
        fVar22 = fVar24 * 0.0;
        fVar26 = fVar26 + fVar26;
        fVar28 = fVar24 * (fVar24 + fVar24);
        fVar27 = (fVar24 + fVar24) * fVar22;
        fVar29 = fVar22 * (fVar22 + fVar22);
        fVar25 = fVar22 * fVar26;
        fVar26 = fVar24 * fVar26;
        fVar24 = fVar24 * (fVar22 + fVar22);
        fVar22 = ((float)(int)local_120 * 5.0 + (float)(int)local_110 * 5.0 + 5.0) * 0.5;
        *(float *)(puVar15 + 0x7d8) = fVar22;
        *(float *)(puVar15 + 0x7cc) =
             fVar22 + fVar23 * (fVar29 + fVar26 +
                               (fVar24 - fVar25) * 0.0 + ((1.0 - fVar28) - fVar29) * 0.0);
        fVar22 = ((float)local_120._4_4_ * 5.0 + (float)local_110._4_4_ * 5.0 + 5.0) * 0.5;
        *(float *)(puVar15 + 0x7e0) = fVar22;
        *(float *)(puVar15 + 0x7d4) =
             fVar22 + fVar23 * (((1.0 - fVar29) - fVar28) +
                               (fVar27 + fVar25) * 0.0 + (fVar29 - fVar26) * 0.0);
        *(float *)(puVar15 + 2000) =
             fVar23 * ((fVar27 - fVar25) + ((1.0 - fVar29) - fVar29) * 0.0 + (fVar24 + fVar25) * 0.0
                      ) + 0.0;
        goto LAB_01e330b8;
      case 4:
        local_120 = 0;
        puVar11 = &DAT_0407ebb1;
        local_130 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_128 = PTR_DAT_04bb2010 + 0x10;
        local_110 = 0;
        uVar7 = *(uint *)(param_1 + 0x420);
        local_118 = puStack_128;
        if (uVar7 < 0x34) {
          if (uVar7 != 0x31) {
            puVar11 = *(undefined8 **)(PTR_s_Walking_04bbbab8 + (ulong)uVar7 * 8 + 0x2b0);
            goto LAB_01e335e4;
          }
          iVar10 = FUN_0118be74();
          if (iVar10 != 0x7e3d1e46) {
            FUN_0118ad90(&local_130,iVar10);
          }
        }
        else {
LAB_01e335e4:
          FUN_0071b954(auStack_100,"N_%s_Ftr_%d",puVar11,iVar16);
          pcVar9 = local_f8;
          if ((*(int *)(param_1 + 0x418) == 1) && (local_f8 != "P_EventNone_Ftr_11")) {
            iVar10 = 0x12;
            if (local_f0 < 0x13) {
              iVar10 = local_f0 + -1;
            }
            memcpy(local_f8,"P_EventNone_Ftr_11",(long)iVar10);
            pcVar9[iVar10] = '\0';
            plVar21 = (long *)PTR_DAT_04bb5c90;
          }
          FUN_0118ac30(&local_130,auStack_100);
        }
        *(undefined4 *)(puVar15 + 2000) = 0;
        *(undefined4 *)(puVar15 + 0x7dc) = 0;
        *(int *)(puVar15 + 0x7f8) = (int)local_120;
        fVar23 = ((float)(int)local_120 * 5.0 + (float)(int)local_110 * 5.0 + 5.0) * 0.5;
        fVar24 = ((float)local_120._4_4_ * 5.0 + (float)local_110._4_4_ * 5.0 + 5.0) * 0.5;
        *(float *)(puVar15 + 0x7d8) = fVar23;
        *(float *)(puVar15 + 0x7e0) = fVar24;
        *(float *)(puVar15 + 0x7cc) = fVar23 + 0.0;
        fVar24 = fVar24 + 10.0;
        goto LAB_01e330b0;
      case 5:
        local_120 = 0;
        puVar11 = &DAT_0407ebb1;
        local_130 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_128 = PTR_DAT_04bb2010 + 0x10;
        local_110 = 0;
        uVar7 = *(uint *)(param_1 + 0x420);
        local_118 = puStack_128;
        if (uVar7 < 0x34) {
          if (uVar7 != 0x31) {
            puVar11 = *(undefined8 **)(PTR_s_Walking_04bbbab8 + (ulong)uVar7 * 8 + 0x2b0);
            goto LAB_01e336d4;
          }
          iVar10 = FUN_0118be74();
          if (iVar10 != 0x7e3d1e46) {
            FUN_0118ad90(&local_130,iVar10);
          }
        }
        else {
LAB_01e336d4:
          FUN_0071b954(auStack_100,"N_%s_Ftr_%d",puVar11,0);
          pcVar9 = local_f8;
          if ((*(int *)(param_1 + 0x418) == 1) && (local_f8 != "P_EventNone_Ftr_11")) {
            iVar10 = 0x12;
            if (local_f0 < 0x13) {
              iVar10 = local_f0 + -1;
            }
            memcpy(local_f8,"P_EventNone_Ftr_11",(long)iVar10);
            pcVar9[iVar10] = '\0';
            plVar21 = (long *)PTR_DAT_04bb5c90;
          }
          FUN_0118ac30(&local_130,auStack_100);
        }
        *(undefined4 *)(puVar15 + 0x7dc) = 0;
        *(int *)(puVar15 + 0x7f8) = (int)local_120;
        fVar23 = -5.0;
        if (iVar16 != 0) {
          fVar23 = 5.0;
        }
        fVar22 = ((float)(int)local_120 * 5.0 + (float)(int)local_110 * 5.0 + 5.0) * 0.5;
        fVar24 = ((float)local_120._4_4_ * 5.0 + (float)local_110._4_4_ * 5.0 + 5.0) * 0.5;
        *(float *)(puVar15 + 0x7d8) = fVar22;
        *(float *)(puVar15 + 0x7e0) = fVar24;
        *(float *)(puVar15 + 2000) = fVar23 * 0.0 + 0.0;
        *(float *)(puVar15 + 0x7cc) = fVar23 + fVar22;
        fVar24 = fVar23 * 0.0 + fVar24;
        goto LAB_01e330b0;
      case 6:
        local_120 = 0;
        puVar11 = &DAT_0407ebb1;
        local_130 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_128 = PTR_DAT_04bb2010 + 0x10;
        local_110 = 0;
        uVar7 = *(uint *)(param_1 + 0x420);
        local_118 = puStack_128;
        if (uVar7 < 0x34) {
          if (uVar7 != 0x31) {
            puVar11 = *(undefined8 **)(PTR_s_Walking_04bbbab8 + (ulong)uVar7 * 8 + 0x2b0);
            goto LAB_01e337d0;
          }
          iVar10 = FUN_0118be74();
          if (iVar10 != 0x7e3d1e46) {
            FUN_0118ad90(&local_130,iVar10);
          }
        }
        else {
LAB_01e337d0:
          FUN_0071b954(auStack_100,"N_%s_Ftr_%d",puVar11,iVar16);
          pcVar9 = local_f8;
          if ((*(int *)(param_1 + 0x418) == 1) && (local_f8 != "P_EventNone_Ftr_11")) {
            iVar10 = 0x12;
            if (local_f0 < 0x13) {
              iVar10 = local_f0 + -1;
            }
            memcpy(local_f8,"P_EventNone_Ftr_11",(long)iVar10);
            pcVar9[iVar10] = '\0';
            plVar21 = (long *)PTR_DAT_04bb5c90;
          }
          FUN_0118ac30(&local_130,auStack_100);
        }
        fVar26 = ((float)local_120._4_4_ * 5.0 + (float)local_110._4_4_ * 5.0 + 5.0) * 0.5;
        fVar24 = ((float)(int)local_120 * 5.0 + (float)(int)local_110 * 5.0 + 5.0) * 0.5;
        puVar13 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar5 = puVar13[3];
        uVar7 = *puVar13 ^ *puVar13 << 0xb;
        *puVar13 = puVar13[1];
        puVar13[1] = puVar13[2];
        uVar7 = uVar7 >> 8 ^ uVar5 >> 0x13 ^ uVar7 ^ uVar5;
        puVar13[2] = uVar5;
        puVar13[3] = uVar7;
        *(float *)(puVar15 + 0x7d8) = fVar24;
        *(undefined4 *)(puVar15 + 0x7dc) = 0;
        *(float *)(puVar15 + 0x7e0) = fVar26;
        *(int *)(puVar15 + 0x7f8) = (int)local_120;
        fVar23 = (float)(int)((uVar7 & 2) - 1);
        *(int *)(puVar15 + 0x7fc) = local_120._4_4_;
        *(int *)(puVar15 + 0x808) = (int)local_110;
        *(int *)(puVar15 + 0x80c) = local_110._4_4_;
        fVar22 = fVar23 * 0.0 * 10.0;
        *(float *)(puVar15 + 0x7cc) = fVar24 + fVar23 * 10.0;
        *(float *)(puVar15 + 2000) = fVar22 + 0.0;
        *(float *)(puVar15 + 0x7d4) = fVar26 + fVar22;
        break;
      case 7:
        local_120 = 0;
        puVar11 = &DAT_0407ebb1;
        local_130 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_128 = PTR_DAT_04bb2010 + 0x10;
        local_110 = 0;
        uVar7 = *(uint *)(param_1 + 0x420);
        local_118 = puStack_128;
        if (uVar7 < 0x34) {
          if (uVar7 != 0x31) {
            puVar11 = *(undefined8 **)(PTR_s_Walking_04bbbab8 + (ulong)uVar7 * 8 + 0x2b0);
            goto LAB_01e33948;
          }
          iVar10 = FUN_0118be74();
          if (iVar10 != 0x7e3d1e46) {
            FUN_0118ad90(&local_130,iVar10);
          }
        }
        else {
LAB_01e33948:
          FUN_0071b954(auStack_100,"N_%s_Ftr_%d",puVar11,0);
          pcVar9 = local_f8;
          if ((*(int *)(param_1 + 0x418) == 1) && (local_f8 != "P_EventNone_Ftr_11")) {
            iVar10 = 0x12;
            if (local_f0 < 0x13) {
              iVar10 = local_f0 + -1;
            }
            memcpy(local_f8,"P_EventNone_Ftr_11",(long)iVar10);
            pcVar9[iVar10] = '\0';
            plVar21 = (long *)PTR_DAT_04bb5c90;
          }
          FUN_0118ac30(&local_130,auStack_100);
        }
        *(undefined4 *)(puVar15 + 2000) = 0;
        *(undefined4 *)(puVar15 + 0x7dc) = 0;
        *(int *)(puVar15 + 0x7f8) = (int)local_120;
        fVar23 = -10.0;
        if (iVar16 != 0) {
          fVar23 = 10.0;
        }
        fVar22 = ((float)(int)local_120 * 5.0 + (float)(int)local_110 * 5.0 + 5.0) * 0.5;
        fVar24 = ((float)local_120._4_4_ * 5.0 + (float)local_110._4_4_ * 5.0 + 5.0) * 0.5;
        *(float *)(puVar15 + 0x7d8) = fVar22;
        *(float *)(puVar15 + 0x7e0) = fVar24;
        *(float *)(puVar15 + 0x7cc) = fVar23 + fVar22;
        fVar24 = fVar24 + 15.0;
LAB_01e330b0:
        *(float *)(puVar15 + 0x7d4) = fVar24;
        *(int *)(puVar15 + 0x7fc) = local_120._4_4_;
LAB_01e330b8:
        *(int *)(puVar15 + 0x808) = (int)local_110;
        *(int *)(puVar15 + 0x80c) = local_110._4_4_;
      }
      iVar16 = iVar16 + 1;
LAB_01e330c4:
      lVar12 = *(long *)(lVar12 + 8);
    } while (lVar12 + -8 != param_1 + 0x430);
  }
  return;
}

