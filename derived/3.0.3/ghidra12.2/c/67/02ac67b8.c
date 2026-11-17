
undefined8 FUN_02ac67b8(long param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  undefined4 *puVar12;
  float *pfVar13;
  byte *pbVar14;
  byte bVar15;
  uint *puVar16;
  uint *puVar17;
  char cVar18;
  int *piVar19;
  long lVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 local_b0;
  undefined4 uStack_ac;
  uint *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  int local_88;
  uint local_84;
  
  puVar6 = PTR_DAT_04bb43c0;
  lVar21 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(param_2);
  puVar7 = PTR_DAT_04bc0510;
  lVar20 = *(long *)puVar6;
  if (lVar20 == 0) {
    return 0;
  }
  lVar21 = *(long *)(lVar21 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
  if (*(uint *)(lVar21 + 0x1d8) <= uVar9) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return 0;
  }
  local_a8 = (uint *)0x0;
  local_b0 = *param_2;
  uStack_ac = param_2[1];
  uVar9 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar6 == 0) {
LAB_02ac6978:
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x77);
    local_84 = 0xbc;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar9) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) == 0)) goto LAB_02ac6978;
    lVar20 = *(long *)PTR_DAT_04bc0428;
    uVar9 = FUN_0277d6c4(param_2);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar9) ||
       (puVar16 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8),
       puVar16 == (uint *)0x0)) goto LAB_02ac6978;
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,0x77);
    local_84 = 0;
    uVar9 = *puVar16;
    local_a8 = puVar16;
    if ((uVar9 != 0) && (puVar16 != (uint *)(ulong)uVar9)) {
      puVar17 = (uint *)((long)puVar16 - (long)(ulong)uVar9);
      local_84 = 0;
      if (*puVar17 != 0) {
        uVar9 = puVar17[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar17[2] != 0)) {
          lVar20 = 0xc;
          if (*(char *)((long)puVar17 + 10) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar17 + lVar20 + (ulong)(ushort)puVar17[2] * 8;
          if (lVar20 != 0) {
            uVar2 = 0;
            if ((ulong)uVar9 != 0) {
              uVar2 = (uint)((ulong)((long)puVar16 - lVar20) / (ulong)uVar9);
            }
            if (*puVar17 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (local_84 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2)
               , local_84 < 0xbd)) goto LAB_02ac697c;
          }
        }
        local_84 = 0;
      }
    }
  }
LAB_02ac697c:
  if ((local_84 != (uint)local_a0) || (uVar11 = FUN_02ac6f0c(param_1,param_2), (uVar11 & 1) == 0)) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x3c0) = *(undefined2 *)param_2;
  *(undefined1 *)(param_1 + 0x3c2) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)(param_1 + 0x3c3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x3c4) = param_2[1];
  *(undefined4 *)(param_1 + 0x3cc) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x4b0) = 1;
  puVar12 = (undefined4 *)FUN_0252d9bc(0);
  if (puVar12 == (undefined4 *)0x0) {
    return 0;
  }
  uVar25 = *puVar12;
  fVar27 = (float)puVar12[1];
  uVar26 = puVar12[2];
  lVar20 = FUN_02aecb38(0x2b);
  lVar21 = *(long *)(param_1 + 0x68);
  fVar28 = *(float *)(lVar21 + 0x278);
  fVar29 = *(float *)(lVar21 + 0x27c);
  fVar30 = *(float *)(lVar21 + 0x280);
  pfVar13 = (float *)(**(code **)(*(long *)(lVar20 + 200) + 0xf0))();
  fVar31 = *pfVar13;
  pfVar13 = (float *)(**(code **)(*(long *)(lVar20 + 0xf8) + 0xf0))();
  puVar8 = PTR_DAT_04bc4648;
  puVar5 = PTR_DAT_04bc4640;
  lVar21 = *(long *)PTR_DAT_04bb5008;
  uVar9 = (uint)*(ushort *)(param_1 + 0x2ac) - (uint)*(ushort *)(lVar21 + 0xdf0);
  if (*(uint *)(lVar21 + 0xdd0) <= uVar9) {
    return 0;
  }
  puVar16 = *(uint **)(*(long *)(lVar21 + 0xdd8) + (long)(int)uVar9 * 8);
  if (puVar16 == (uint *)0x0) {
    return 0;
  }
  fVar22 = *pfVar13;
  uVar9 = *puVar16;
  fVar23 = 0.0;
  if (uVar9 != 0) {
    cVar18 = *PTR_DAT_04bc4640;
    do {
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined4 *)(puVar8 + 0x28) = 0xffffffff;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        uVar9 = *puVar16;
      }
      else {
        uVar2 = *(uint *)puVar8;
        if (-1 < (int)uVar2) {
          if ((float *)((ulong)uVar2 + (long)puVar16) != (float *)0x0) {
            fVar23 = *(float *)((ulong)uVar2 + (long)puVar16);
          }
          break;
        }
        if (uVar2 != 0xffffffff) break;
      }
      puVar17 = (uint *)(ulong)uVar9;
      if ((puVar17 == (uint *)0x0) || (puVar16 == puVar17)) break;
      lVar21 = 0xc;
      if (*(char *)((long)puVar16 + (10 - (long)puVar17)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar16 + (lVar21 - (long)puVar17);
      if (lVar21 == 0) break;
      uVar11 = (ulong)*(ushort *)((long)puVar16 + (8 - (long)puVar17));
      *(undefined4 *)puVar8 = 0xfffffffe;
      if (uVar11 == 0) break;
      piVar19 = (int *)(lVar21 + 4);
      while (piVar19[-1] != -0x49e645a4) {
        piVar19 = piVar19 + 2;
        uVar11 = uVar11 - 1;
        if (uVar11 == 0) goto LAB_02ac6b68;
      }
      iVar10 = 0;
      if (*piVar19 != -1) {
        iVar10 = *piVar19;
      }
      *(int *)puVar8 = iVar10;
      uVar9 = *puVar16;
      if (uVar9 == 0) break;
    } while( true );
  }
LAB_02ac6b68:
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar20 + 0x188) + 0xf0))(lVar20 + 0x188);
  uVar32 = *puVar12;
  puVar12 = (undefined4 *)(**(code **)(*(long *)(lVar20 + 0x128) + 0xf0))(lVar20 + 0x128);
  iVar10 = DAT_05610120;
  uVar24 = *puVar12;
  lVar20 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar20 == 0) {
LAB_02ac6bf4:
    if (*pbVar14 < 8) goto LAB_02ac6c60;
LAB_02ac6c00:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02ac6c58:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_02ac6c60;
    }
    lVar20 = **(long **)PTR_DAT_04bb27d0;
    bVar15 = *(byte *)(lVar20 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar16 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar16 = (uint *)(lVar20 + 0x48);
      }
      if ((*puVar16 & 8) != 0) {
        pbVar14 = (byte *)(lVar20 + 0x471);
      }
    }
    bVar15 = *pbVar14;
    if (7 < bVar15) goto LAB_02ac6c58;
  }
  else {
    if (*(int *)(lVar20 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar20 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar20 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02ac6bf4;
      }
      goto LAB_02ac6c00;
    }
LAB_02ac6c60:
    bVar15 = *pbVar14;
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
  }
  bVar1 = 0xff;
  if (bVar15 < 8) {
    bVar1 = bVar15;
  }
  if (DAT_05610120 == 0) {
    return 1;
  }
  if (7 < bVar15) {
    return 1;
  }
  if (*(int *)(param_1 + 0x500) != 0) {
    *(int *)(param_1 + 0x504) = DAT_05610120;
    return 1;
  }
  *(int *)(param_1 + 0x500) = DAT_05610120;
  *(int *)(param_1 + 0x504) = iVar10;
  puVar5 = PTR_DAT_04bb37e0;
  if (*(short *)(param_1 + 0x4c0) != -2) {
    return 1;
  }
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  lVar21 = *(long *)puVar6;
  uVar3 = *(undefined4 *)puVar5;
  uVar4 = *(undefined4 *)(puVar5 + 4);
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined4 *)(param_1 + 0x4f8) = 0;
  *(undefined1 *)(param_1 + 0x4fc) = 0xff;
  *(undefined4 *)(param_1 + 0x4c0) = uVar3;
  *(undefined4 *)(param_1 + 0x4c4) = uVar4;
  *(undefined2 *)(param_1 + 0x4c0) = *(undefined2 *)param_2;
  *(undefined1 *)(param_1 + 0x4c2) = *(undefined1 *)((long)param_2 + 2);
  *(undefined1 *)(param_1 + 0x4c3) = *(undefined1 *)((long)param_2 + 3);
  uVar3 = param_2[1];
  *(undefined4 *)(param_1 + 0x4c8) = uVar25;
  *(float *)(param_1 + 0x4cc) = fVar27 + 5.0;
  *(undefined4 *)(param_1 + 0x4d0) = uVar26;
  *(float *)(param_1 + 0x4d4) = fVar28 + fVar31;
  *(float *)(param_1 + 0x4d8) = fVar29 + fVar22;
  *(float *)(param_1 + 0x4dc) = fVar30 + fVar23;
  *(undefined4 *)(param_1 + 0x4ec) = uVar32;
  *(undefined4 *)(param_1 + 0x4f0) = uVar24;
  *(byte *)(param_1 + 0x4fc) = bVar1;
  *(undefined4 *)(param_1 + 0x4c4) = uVar3;
  uVar9 = FUN_0277d6c4(param_1 + 0x4c0);
  lVar20 = *(long *)puVar6;
  if (lVar20 != 0) {
    lVar21 = *(long *)(lVar21 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar21 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      local_a0 = puVar7 + 0x10;
      uStack_94 = *(undefined4 *)(param_1 + 0x4c4);
      local_90 = 0;
      local_98 = *(undefined4 *)(param_1 + 0x4c0);
      uVar9 = FUN_0277d6c4(&local_98);
      if (*(long *)puVar6 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar20 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar20 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_1 + 0x4c0);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if (uVar9 < *(uint *)(lVar20 + 0x1d8)) {
            lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar9 * 8);
            if (lVar20 != 0) {
              local_90 = lVar20;
            }
          }
        }
      }
      local_84 = 10;
      local_88 = FUN_01ae7550(&local_a0);
      if (local_88 != local_84) {
        local_84 = 0xb;
        local_88 = FUN_01ae7550(&local_a0);
        if (local_88 != local_84) {
          local_84 = 0xc;
          iVar10 = FUN_01ae7550(&local_a0);
          if (iVar10 != local_84) goto LAB_02ac6ea8;
        }
      }
      *(float *)(param_1 + 0x4d8) = *(float *)(param_1 + 0x4d8) + -3.0;
    }
  }
LAB_02ac6ea8:
  fVar27 = *(float *)(param_1 + 0x4f0);
  *(float *)(param_1 + 0x4e0) =
       (*(float *)(param_1 + 0x4d4) - *(float *)(param_1 + 0x4c8)) * (1.0 / fVar27);
  *(float *)(param_1 + 0x4e8) =
       (*(float *)(param_1 + 0x4dc) - *(float *)(param_1 + 0x4d0)) * (1.0 / fVar27);
  *(float *)(param_1 + 0x4e4) =
       (*(float *)(param_1 + 0x4d8) - *(float *)(param_1 + 0x4cc)) / fVar27 +
       fVar27 * *(float *)(param_1 + 0x4ec) * 0.5;
  return 1;
}

