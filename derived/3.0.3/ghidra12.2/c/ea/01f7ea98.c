
void FUN_01f7ea98(long param_1)

{
  char cVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  float *pfVar11;
  long *plVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined4 uVar18;
  int *piVar19;
  long lVar20;
  byte *pbVar21;
  undefined4 uVar22;
  uint *puVar23;
  undefined4 uVar24;
  long lVar25;
  undefined4 uVar26;
  long lVar27;
  char *pcVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  undefined8 local_b8;
  char *local_b0;
  ulong local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  char *local_90;
  long local_88;
  undefined1 local_80;
  byte local_7f;
  uint local_78;
  undefined4 local_74;
  undefined4 local_48;
  byte local_44 [4];
  
  puVar6 = PTR_DAT_04bb39b0;
  puVar5 = PTR_DAT_04bb27d0;
  if (1 < *(uint *)(*(long **)PTR_DAT_04bb27d0 + 0x10)) {
    return;
  }
  lVar25 = *(long *)PTR_DAT_04bb39b0;
  if (lVar25 == 0) {
    local_44[0] = *PTR_DAT_04bb32e0;
    if (7 < local_44[0]) goto LAB_01f7eb4c;
LAB_01f7ebac:
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  else {
    pbVar21 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar25 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar25 + 0x158);
    }
    local_44[0] = *pbVar21;
    if ((local_44[0] < 8) ||
       (((*(int *)(lVar25 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (local_44[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), local_44[0] < 8))))
    goto LAB_01f7ebac;
LAB_01f7eb4c:
    lVar25 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar25 + 0x473);
    pbVar21 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar23 = (uint *)(lVar25 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar23 = (uint *)(lVar25 + 0x48);
      }
      if ((*puVar23 & 8) != 0) {
        pbVar21 = (byte *)(lVar25 + 0x471);
      }
    }
    local_44[0] = *pbVar21;
    if (7 < local_44[0]) {
      local_44[0] = *PTR_DAT_04bb5038;
      goto LAB_01f7ebac;
    }
  }
  iVar10 = FUN_00a74b78(local_44);
  puVar3 = PTR_DAT_04bb2020;
  if (iVar10 == 7) {
    return;
  }
  if (*(char *)(param_1 + 0xb138) != '\0') {
    lVar25 = *(long *)(param_1 + 0x10);
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xc);
    if (((*(int *)(lVar25 + 0x360) == 0xc) && (*(int *)(lVar25 + 0x4b8) != 0)) &&
       (*(int *)(lVar25 + 0x378) == 0x23)) {
      if (*(int *)(*(long *)(param_1 + 8) + 0x548) == 1) {
        return;
      }
      FUN_01e5aacc(lVar25,6);
      *(undefined1 *)(param_1 + 0xb138) = 0;
      return;
    }
  }
  lVar25 = param_1 + 0x8998;
  if (*(char *)(param_1 + 0xb139) == '\0') {
    pfVar11 = (float *)FUN_0251b3b0(local_44,0);
    if (pfVar11 != (float *)0x0) {
      if (((*(long *)PTR_DAT_04bb27c8 != 0) &&
          (lVar20 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar20 != 0)) &&
         ((uVar17 = (int)((float)(int)*pfVar11 / 5.0) - (uint)(*pfVar11 < 0.0), -1 < (int)uVar17 &&
          ((uVar2 = (int)((float)(int)pfVar11[2] / 5.0) - (uint)(pfVar11[2] < 0.0), -1 < (int)uVar2
           && (uVar17 < *(uint *)(lVar20 + 0x38) && uVar2 < *(uint *)(lVar20 + 0x3c))))))) {
        uVar17 = uVar17 + *(uint *)(lVar20 + 0x38) * uVar2;
        if ((uVar17 < *(uint *)(lVar20 + 0x68) && *(long *)(lVar20 + 0x70) != 0) &&
           ((*(uint *)(*(long *)(lVar20 + 0x70) + (long)(int)uVar17 * 4) >> 7 & 1) != 0)) {
          local_b8 = puVar3 + 0x10;
          local_b0 = "ShopMoveEnable";
          FUN_02743234(&local_b8,0);
          if (*(int *)(param_1 + 0xaa00) != 3) {
            FUN_020d0f98(lVar25);
            FUN_01e5aacc(*(undefined8 *)(param_1 + 0x10),6);
          }
          goto LAB_01f7ec68;
        }
      }
      if (*(char *)(param_1 + 0xb138) == '\0') {
        uVar16 = 1;
        goto LAB_01f7ec60;
      }
    }
  }
  else {
    uVar16 = 0;
LAB_01f7ec60:
    local_b8 = puVar3 + 0x10;
    local_b0 = "ShopMoveEnable";
    FUN_02743234(&local_b8,uVar16);
  }
LAB_01f7ec68:
  pcVar28 = *(char **)(*(long *)(param_1 + 8) + 400);
  local_b8 = puVar3 + 0x10;
  local_b0 = "ShopMoveEnable";
  iVar10 = FUN_02743000(&local_b8);
  puVar4 = PTR_DAT_04bb27c0;
  if (iVar10 != 0) {
    if (*(char *)(param_1 + 0xb106) == '\0') {
      if ((*(byte *)(param_1 + 0xaa44) >> 2 & 1) != 0) {
        piVar19 = *(int **)PTR_DAT_04bb47d0;
        if (((piVar19 != (int *)0x0) && (*piVar19 != 0 || piVar19[2] != 0)) &&
           (*piVar19 == *(int *)(param_1 + 0x89a0))) {
          *(undefined1 *)(piVar19 + 0x2c) = 1;
        }
        uVar22 = DAT_053e0cf8;
        uVar16 = DAT_053e0cec;
        *(undefined8 *)(param_1 + 0xaa04) = DAT_053e0ce4;
        *(undefined8 *)(param_1 + 0xaa0c) = uVar16;
        uVar18 = DAT_053e0cf4;
        *(undefined4 *)(param_1 + 0xaa18) = uVar22;
        uVar22 = DAT_053e0cfc;
        *(undefined8 *)(param_1 + 0xa9f8) = 0;
        *(undefined8 *)(param_1 + 0xa9f0) = 0;
        *(undefined4 *)(param_1 + 0xaa14) = uVar18;
        *(undefined4 *)(param_1 + 0xaa1c) = uVar22;
        uVar18 = DAT_053e0d00;
        *(undefined1 *)(param_1 + 0xaa44) = 0;
        *(undefined4 *)(param_1 + 0xaa00) = 3;
        *(undefined4 *)(param_1 + 0xaa20) = uVar18;
        goto LAB_01f7f5d8;
      }
    }
    else {
      piVar19 = *(int **)PTR_DAT_04bb47d0;
      if (((piVar19 != (int *)0x0) && (*piVar19 != 0 || piVar19[2] != 0)) &&
         (*piVar19 == *(int *)(param_1 + 0x89a0))) {
        *(undefined1 *)(piVar19 + 0x2c) = 1;
      }
      uVar18 = DAT_053e0cf4;
      uVar7 = DAT_053e0cec;
      uVar16 = DAT_053e0ce4;
      *(undefined4 *)(param_1 + 0xaa18) = DAT_053e0cf8;
      *(undefined8 *)(param_1 + 0xaa04) = uVar16;
      *(undefined8 *)(param_1 + 0xaa0c) = uVar7;
      uVar22 = DAT_053e0cfc;
      *(undefined8 *)(param_1 + 0xa9f8) = 0;
      *(undefined8 *)(param_1 + 0xa9f0) = 0;
      *(undefined4 *)(param_1 + 0xaa14) = uVar18;
      *(undefined4 *)(param_1 + 0xaa1c) = uVar22;
      uVar18 = DAT_053e0d00;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined4 *)(param_1 + 0xaa00) = 3;
      *(undefined2 *)(param_1 + 0xb106) = 0x100;
      *(undefined4 *)(param_1 + 0xaa20) = uVar18;
    }
    lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar31 = *(float *)(lVar20 + 0x278);
    fVar32 = *(float *)(lVar20 + 0x280);
    pfVar11 = (float *)FUN_0251b3b0(local_44,0);
    if (pfVar11 == (float *)0x0) goto LAB_01f7f5d8;
    fVar29 = *pfVar11;
    fVar30 = pfVar11[2];
    if ((((int)((float)(int)fVar31 / 10.0) - (uint)(fVar31 < 0.0) ==
          (int)((float)(int)fVar29 / 10.0) - (uint)(fVar29 < 0.0)) &&
        ((int)((float)(int)fVar32 / 10.0) - (uint)(fVar32 < 0.0) ==
         (int)((float)(int)fVar30 / 10.0) - (uint)(fVar30 < 0.0))) ||
       (SQRT((fVar30 - fVar32) * (fVar30 - fVar32) + (fVar29 - fVar31) * (fVar29 - fVar31)) < 4.5))
    goto LAB_01f7f5d8;
    if ((*(int *)(param_1 + 0xaa00) == 3) && (*(int *)(param_1 + 0xb108) == 1)) {
      if (((ulong)local_44[0] < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        puVar13 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)local_44[0] * 4 + 0xde8);
      }
      else {
        puVar13 = (undefined4 *)PTR_DAT_04bb3238;
      }
      local_48 = *puVar13;
      local_b8 = *(undefined **)PTR_DAT_04bc2310;
      local_b0 = *(char **)(PTR_DAT_04bc2310 + 8);
      local_a8 = *(ulong *)(PTR_DAT_04bc2310 + 0x10);
      pcStack_a0 = *(char **)(PTR_DAT_04bc2310 + 0x18);
      FUN_020d0e38(lVar25,&local_48,&local_b8);
      if ((*pcVar28 != 'r') ||
         (((pcVar28[1] != 'c' || (pcVar28[2] != 't')) &&
          ((pcVar28[1] != 'c' || (pcVar28[2] != 'm')))))) goto LAB_01f7f5d8;
      lVar20 = FUN_0264d510();
      local_88 = lVar20 + 0x1a0b48;
      local_80 = 1;
      if (*(long **)(lVar20 + 0x1a0b70) == (long *)0x0) {
        local_7f = 0;
      }
      else {
        puVar14 = (undefined8 *)**(long **)(lVar20 + 0x1a0b70);
        local_7f = 0;
        if (puVar14 != (undefined8 *)0x0) {
          local_7f = (**(code **)*puVar14)();
        }
      }
      local_7f = local_7f & 1;
      local_90 = PTR_DAT_04bb64b8 + 0x10;
      uVar17 = *(uint *)(*(long *)(lVar20 + 0x1a0b58) + *(long *)(lVar20 + 0x1a0b50));
      if (3 < uVar17) {
        uVar17 = 0;
      }
      local_78 = uVar17;
      FUN_02640184(&local_90);
      if (uVar17 == 2) {
        uVar18 = 0x1f;
        uVar22 = 0x1d;
        uVar24 = 0x1a;
        uVar26 = 0x1c;
      }
      else {
        if (uVar17 != 3) goto LAB_01f7f5d8;
        lVar20 = FUN_0264d510();
        local_88 = lVar20 + 0x1a3d60;
        local_80 = 1;
        if (*(long **)(lVar20 + 0x1a3d88) == (long *)0x0) {
          bVar9 = 0;
        }
        else {
          puVar14 = (undefined8 *)**(long **)(lVar20 + 0x1a3d88);
          bVar9 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            bVar9 = (**(code **)*puVar14)();
          }
        }
        local_7f = bVar9 & 1;
        local_90 = PTR_DAT_04bb64c0 + 0x10;
        uVar15 = FUN_028b49dc(*(long *)(lVar20 + 0x1a3d70) + *(long *)(lVar20 + 0x1a3d68));
        FUN_02640184(&local_90);
        if ((uVar15 & 1) == 0) goto LAB_01f7f5d8;
        uVar18 = 0x28;
        uVar22 = 0x18;
        uVar24 = 0x24;
        uVar26 = 0x13;
      }
      lVar20 = *(long *)(param_1 + 0x89b8);
      *(undefined4 *)(lVar20 + 0xb8) = uVar26;
      *(undefined4 *)(lVar20 + 0xbc) = uVar24;
      *(undefined4 *)(lVar20 + 200) = uVar22;
      *(undefined4 *)(lVar20 + 0xcc) = uVar18;
      *(undefined1 *)(*(long *)(param_1 + 0x89b8) + 0x170) = 1;
      goto LAB_01f7f5d8;
    }
    puVar13 = (undefined4 *)FUN_0251b3b0(local_44,0);
    if (puVar13 == (undefined4 *)0x0) goto LAB_01f7f5d8;
    cVar1 = *pcVar28;
    if (cVar1 == 'r') {
      if (((pcVar28[1] == 'c') && (pcVar28[2] == 't')) ||
         ((pcVar28[1] == 'c' && (pcVar28[2] == 'm')))) {
        lVar20 = FUN_0264d510();
        local_b0 = (char *)(lVar20 + 0x1a0b48);
        local_a8 = CONCAT71(local_a8._1_7_,1);
        if (*(long **)(lVar20 + 0x1a0b70) == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          puVar14 = (undefined8 *)**(long **)(lVar20 + 0x1a0b70);
          uVar8 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar8 = (**(code **)*puVar14)();
          }
        }
        local_a8 = CONCAT62(local_a8._2_6_,CONCAT11(uVar8,(undefined1)local_a8)) &
                   0xffffffffffff01ff;
        local_b8 = PTR_DAT_04bb64b8 + 0x10;
        iVar10 = *(int *)(*(long *)(lVar20 + 0x1a0b58) + *(long *)(lVar20 + 0x1a0b50));
        FUN_02640184(&local_b8);
        if (iVar10 == 3) {
          local_98 = 0x2800000028;
          local_b8 = PTR_DAT_04bbc1a0 + 0x10;
          local_b0 = PTR_DAT_04bb2010 + 0x10;
          local_a8 = 0x2000000012;
          local_88 = 0x2400000017;
          pcStack_a0 = local_b0;
          local_90 = local_b0;
          FUN_01f7f708(param_1,puVar13,&local_b8,1,&local_90);
          goto LAB_01f7f5d8;
        }
        cVar1 = *pcVar28;
        goto LAB_01f7f54c;
      }
    }
    else {
LAB_01f7f54c:
      if (((cVar1 == 'f') && (pcVar28[1] == 'o')) && (pcVar28[2] == 'x')) {
        local_b8 = PTR_DAT_04bbc1a0 + 0x10;
        local_b0 = PTR_DAT_04bb2010 + 0x10;
        local_a8 = 0x1f0000001b;
        local_98 = 0x250000001f;
        pcStack_a0 = local_b0;
        FUN_01f7f708(param_1,puVar13,&local_b8,0,PTR_DAT_04bb5d40);
        goto LAB_01f7f5d8;
      }
    }
    *(undefined4 *)(param_1 + 0x895c) = *puVar13;
    *(undefined4 *)(param_1 + 0x8960) = puVar13[1];
    *(undefined4 *)(param_1 + 0x8964) = puVar13[2];
LAB_01f7f5d8:
    FUN_020d1018(lVar25);
    return;
  }
  lVar25 = *(long *)(param_1 + 0x10);
  uVar18 = (undefined4)((ulong)local_b8 >> 0x20);
  local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
  if ((*(int *)(lVar25 + 0x360) != 0) &&
     (local_b8 = (undefined *)CONCAT44(uVar18,0xc), *(int *)(lVar25 + 0x360) != 0xc)) {
    local_b8 = (undefined *)CONCAT44(uVar18,4);
    if (*(int *)(lVar25 + 0x360) != 4) {
      return;
    }
    if (*(int *)(lVar25 + 0x4b8) == 0) {
      return;
    }
    if (*(int *)(lVar25 + 0x378) != 0x23) {
      return;
    }
  }
  local_90 = (char *)CONCAT44(local_90._4_4_,0x7f7fffff);
  lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x3c0);
  if (lVar20 == 0) goto LAB_01f7f304;
  lVar25 = *(long *)puVar6;
  if (lVar25 == 0) {
    bVar9 = *PTR_DAT_04bb32e0;
LAB_01f7f094:
    uVar17 = (uint)bVar9;
    if (uVar17 < 8) goto LAB_01f7f100;
LAB_01f7f09c:
    if (*(long **)puVar5 != (long *)0x0) {
      lVar25 = **(long **)puVar5;
      bVar9 = *(byte *)(lVar25 + 0x473);
      pbVar21 = PTR_DAT_04bb5038;
      if ((long)(char)bVar9 != 0xffffffffffffffff) {
        puVar23 = (uint *)(lVar25 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar23 = (uint *)(lVar25 + 0x48);
        }
        if ((*puVar23 & 8) != 0) {
          pbVar21 = (byte *)(lVar25 + 0x471);
        }
      }
      uVar17 = (uint)*pbVar21;
      if (uVar17 < 8) goto LAB_01f7f100;
    }
    uVar17 = (uint)(byte)*PTR_DAT_04bb5038;
    if (uVar17 < 8) goto LAB_01f7f100;
LAB_01f7f11c:
    puVar23 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    pbVar21 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar25 + 0x15c) != 0) {
      pbVar21 = (byte *)(lVar25 + 0x158);
    }
    uVar17 = (uint)*pbVar21;
    if (7 < *pbVar21) {
      if ((*(int *)(lVar25 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar9 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f7f094;
      }
      goto LAB_01f7f09c;
    }
LAB_01f7f100:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_01f7f11c;
    puVar23 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)uVar17 * 4 + 0xde8);
  }
  lVar25 = *(long *)PTR_DAT_04bb27c0;
  if (lVar25 != 0) {
    uVar17 = *puVar23;
    if ((((uVar17 == 0) ||
         (lVar27 = *(long *)(*(long *)(*(long *)(lVar25 + 0x1c0) + 8) +
                            ((ulong)(uVar17 >> 0x11) & 0x7ff8)), lVar27 == 0)) ||
        ((*(uint *)(lVar27 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar27 + 0x230) != uVar17)) {
      lVar27 = 0;
    }
    if ((*(int *)(lVar25 + 0x288) == 1) || (*(int *)(lVar25 + 0x288) == -1)) {
      plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar25 = *(long *)puVar4;
      iVar10 = (**(code **)(*plVar12 + 0x60))();
      if (iVar10 < 0x11) {
        uVar17 = 1;
      }
      else {
        if (4 < *(uint *)(lVar25 + 0x5e8)) goto LAB_01f7f258;
        uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar25 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01f7f258:
      uVar17 = 0;
    }
    if (lVar27 != 0) {
      uVar17 = uVar17 ^ 1;
      if (*(int *)(lVar27 + 0x150) != 1) {
        uVar17 = 1;
      }
      if (uVar17 == 0) {
        if (*(char *)(param_1 + 0xb13a) == '\0') {
          local_b8 = (undefined *)CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar27 + 0x230));
          uVar15 = FUN_02087ce0(lVar20,&local_b8,&local_90);
          if ((uVar15 & 1) != 0) goto LAB_01f7f300;
        }
        lVar25 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        local_48 = FUN_006f0400(*(float *)(*(long *)(lVar27 + 0x68) + 0x278) -
                                *(float *)(lVar25 + 0x278),
                                *(float *)(*(long *)(lVar27 + 0x68) + 0x280) -
                                *(float *)(lVar25 + 0x280));
        local_b8 = puVar3 + 0x10;
        local_b0 = "";
        FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_48,PTR_DAT_04bb65b0,&local_b8,6);
        *(undefined1 *)(param_1 + 0xb13a) = 0;
      }
    }
  }
LAB_01f7f300:
  lVar25 = *(long *)(param_1 + 0x10);
LAB_01f7f304:
  if (*(char *)(param_1 + 0xb138) != '\0' || *(char *)(param_1 + 0xb139) != '\0') {
    local_b8 = (undefined *)((ulong)local_b8 & 0xffffffff00000000);
    if (((*(int *)(lVar25 + 0x360) == 0) && (*(int *)(lVar25 + 0x4b8) != 0)) &&
       (*(int *)(lVar25 + 0x378) == 0x23)) {
      if ((((*(char *)(param_1 + 0xb139) != '\0') && (*pcVar28 == 'f')) && (pcVar28[1] == 'o')) &&
         (pcVar28[2] == 'x')) {
        local_b8 = puVar3 + 0x10;
        local_b0 = "FoxBuyTodayFlag";
        iVar10 = FUN_0274bce0(local_44,&local_b8);
        if (iVar10 == 0) {
          return;
        }
        lVar25 = *(long *)(param_1 + 0x10);
      }
      if (*(int *)(*(long *)(param_1 + 8) + 0x548) == 1) {
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0xc);
        if (*(int *)(lVar25 + 0x360) == 0xc) {
          return;
        }
        local_74 = 1;
        FUN_01e5b240(0x40c00000,lVar25,&local_74);
        return;
      }
    }
  }
  local_b8 = (undefined *)CONCAT44(local_b8._4_4_,4);
  if (*(int *)(lVar25 + 0x360) != 4) {
    return;
  }
  if (*(int *)(lVar25 + 0x4b8) == 0) {
    return;
  }
  if (*(int *)(lVar25 + 0x378) == 0x23) {
    FUN_01e5aacc(lVar25,6);
    return;
  }
  return;
}

