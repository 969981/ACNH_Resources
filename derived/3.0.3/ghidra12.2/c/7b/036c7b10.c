
/* WARNING: Removing unreachable block (ram,0x036c843c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_036c7b10(long param_1,uint *param_2)

{
  bool bVar1;
  undefined ***pppuVar2;
  char *pcVar3;
  long lVar4;
  uint uVar5;
  undefined4 uVar6;
  byte bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  int iVar14;
  undefined ***pppuVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  char cVar21;
  ushort uVar22;
  uint *puVar23;
  int iVar24;
  int *piVar25;
  undefined ***pppuVar26;
  undefined **ppuVar27;
  char cVar28;
  undefined8 ****ppppuVar29;
  long lVar30;
  uint uVar31;
  uint *puVar32;
  long local_168;
  uint local_150;
  undefined2 local_14c;
  uint local_148;
  undefined2 local_144;
  uint local_140;
  undefined2 local_13c;
  uint local_138;
  undefined2 local_134;
  undefined **local_130;
  int local_128;
  int iStack_124;
  int local_120;
  int local_11c;
  long *local_118;
  undefined8 ****local_110;
  undefined8 ****ppppuStack_108;
  undefined8 ***local_100 [2];
  undefined8 **local_f0 [2];
  undefined8 *local_e0 [2];
  undefined8 local_d0 [2];
  long local_c0 [4];
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  uint local_88;
  uint local_84;
  char local_80 [4];
  uint local_7c;
  bool local_78;
  uint local_74;
  bool local_70;
  uint local_6c;
  
  lVar30 = *(long *)PTR_DAT_04bb4960;
  if (lVar30 == 0) {
    return 0;
  }
  uVar31 = (*param_2 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
  if (*(uint *)(lVar30 + 0x1d8) <= uVar31) {
    return 0;
  }
  puVar32 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar31 * 8);
  if (puVar32 == (uint *)0x0) {
    return 0;
  }
  *(uint *)(param_1 + 0x10) = *param_2;
  *(uint *)(param_1 + 0xc) = *param_2;
  local_130 = (undefined **)CONCAT44(local_130._4_4_,param_2[1]);
  *(short *)(param_1 + 0x14) = (short)param_2[1];
  if (param_2[1] == 2) {
    lVar11 = FUN_03776680();
    if (lVar11 != 0) {
      if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar12 == (undefined8 *)0x0)) {
        uVar22 = *(ushort *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
      }
      else {
        uVar13 = (**(code **)*puVar12)();
        uVar22 = *(ushort *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
        if ((((uVar13 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar12 != (undefined8 *)0x0))
        {
          (**(code **)*puVar12)();
        }
      }
      if ((uVar22 >> 1 & 1) != 0) goto LAB_036c7c3c;
    }
LAB_036c7c50:
    bVar8 = false;
    uVar22 = *(ushort *)(param_1 + 8) & 0xffdf;
  }
  else {
    if (param_2[1] != 3) goto LAB_036c7c50;
LAB_036c7c3c:
    bVar8 = true;
    uVar22 = *(ushort *)(param_1 + 8) | 0x20;
  }
  *(ushort *)(param_1 + 8) = uVar22;
  puVar10 = PTR_DAT_04bc3968;
  puVar9 = PTR_DAT_04bc3960;
  uVar31 = *puVar32;
  if (uVar31 == 0 || puVar32 == (uint *)(ulong)uVar31) {
LAB_036c7ce4:
    local_84 = 0;
  }
  else {
    puVar23 = (uint *)((long)puVar32 - (long)(ulong)uVar31);
    if (((*puVar23 == 0) || (uVar31 = puVar23[1], uVar31 == 0)) || ((ulong)(ushort)puVar23[2] == 0))
    goto LAB_036c7ce4;
    lVar11 = 0xc;
    if (*(char *)((long)puVar23 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar23 + lVar11 + (ulong)(ushort)puVar23[2] * 8;
    local_84 = 0;
    if (lVar11 != 0) {
      uVar5 = 0;
      if ((ulong)uVar31 != 0) {
        uVar5 = (uint)((ulong)((long)puVar32 - lVar11) / (ulong)uVar31);
      }
      if (*puVar23 <= uVar5) {
        uVar5 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bcac10 <= uVar5) ||
         (uVar22 = *(ushort *)(*(long *)(PTR_DAT_04bcac10 + 8) + (long)(int)uVar5 * 2),
         local_84 = (uint)uVar22, 10 < uVar22)) goto LAB_036c7ce4;
    }
  }
  local_7c = 0;
  local_80[0] = '\0';
  uVar31 = *puVar32;
  if (uVar31 != 0 && puVar32 != (uint *)(ulong)uVar31) {
    puVar23 = (uint *)((long)puVar32 - (long)(ulong)uVar31);
    local_7c = 0;
    if (*puVar23 != 0) {
      uVar31 = puVar23[1];
      if ((uVar31 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
        lVar11 = 0xc;
        if (*(char *)((long)puVar23 + 10) != '\0') {
          lVar11 = 0x1c;
        }
        lVar11 = (long)puVar23 + lVar11 + (ulong)(ushort)puVar23[2] * 8;
        if (lVar11 != 0) {
          uVar5 = 0;
          if ((ulong)uVar31 != 0) {
            uVar5 = (uint)((ulong)((long)puVar32 - lVar11) / (ulong)uVar31);
          }
          if (*puVar23 <= uVar5) {
            uVar5 = 0xffffffff;
          }
          if ((uVar5 < *(uint *)PTR_DAT_04bcac18) &&
             (local_7c = (uint)*(ushort *)(*(long *)(PTR_DAT_04bcac18 + 8) + (long)(int)uVar5 * 2),
             local_7c < 0xb)) goto LAB_036c7d7c;
        }
      }
      local_7c = 0;
    }
  }
LAB_036c7d7c:
  if (*puVar32 == 0) {
LAB_036c7e70:
    local_78 = false;
  }
  else {
    cVar21 = *PTR_DAT_04bc3960;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined4 *)(puVar10 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar31 = *(uint *)(puVar10 + 0x1c);
        if (-1 < (int)uVar31) {
          if ((char *)((ulong)uVar31 + (long)puVar32) == (char *)0x0) goto LAB_036c7e70;
          local_78 = *(char *)((ulong)uVar31 + (long)puVar32) != '\0';
          goto LAB_036c7e74;
        }
        if (uVar31 != 0xffffffff) goto LAB_036c7e70;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      local_78 = false;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c7e74;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c7e70;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x1c) = 0xfffffffe;
      local_78 = false;
      if (uVar13 == 0) goto LAB_036c7e74;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x4fb53614) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          local_78 = false;
          goto LAB_036c7e74;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x1c) = iVar14;
    } while (*puVar32 != 0);
    local_78 = false;
  }
LAB_036c7e74:
  local_74 = 0;
  uVar31 = *puVar32;
  if ((uVar31 == 0) || (puVar32 == (uint *)(ulong)uVar31)) goto LAB_036c7f04;
  puVar23 = (uint *)((long)puVar32 - (long)(ulong)uVar31);
  if ((*puVar23 != 0) && ((uVar31 = puVar23[1], uVar31 != 0 && ((ulong)(ushort)puVar23[2] != 0)))) {
    lVar11 = 0xc;
    if (*(char *)((long)puVar23 + 10) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar23 + lVar11 + (ulong)(ushort)puVar23[2] * 8;
    local_74 = 0;
    if (lVar11 == 0) goto LAB_036c7f04;
    uVar5 = 0;
    if ((ulong)uVar31 != 0) {
      uVar5 = (uint)((ulong)((long)puVar32 - lVar11) / (ulong)uVar31);
    }
    if (*puVar23 <= uVar5) {
      uVar5 = 0xffffffff;
    }
    if ((uVar5 < *(uint *)PTR_DAT_04bcac20) &&
       (uVar22 = *(ushort *)(*(long *)(PTR_DAT_04bcac20 + 8) + (long)(int)uVar5 * 2),
       local_74 = (uint)uVar22, uVar22 < 0xb)) goto LAB_036c7f04;
  }
  local_74 = 0;
LAB_036c7f04:
  if (*puVar32 == 0) {
LAB_036c7fe4:
    local_70 = false;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined4 *)(puVar10 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar31 = *(uint *)(puVar10 + 0x20);
        if (-1 < (int)uVar31) {
          if ((char *)((ulong)uVar31 + (long)puVar32) == (char *)0x0) goto LAB_036c7fe4;
          local_70 = *(char *)((ulong)uVar31 + (long)puVar32) != '\0';
          goto LAB_036c7fe8;
        }
        if (uVar31 != 0xffffffff) goto LAB_036c7fe4;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      local_70 = false;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c7fe8;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c7fe4;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
      local_70 = false;
      if (uVar13 == 0) goto LAB_036c7fe8;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x33d413c9) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          local_70 = false;
          goto LAB_036c7fe8;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x20) = iVar14;
    } while (*puVar32 != 0);
    local_70 = false;
  }
LAB_036c7fe8:
  uVar31 = 0;
LAB_036c80a8:
  puVar10 = PTR_DAT_04bcac08;
  puVar9 = PTR_DAT_04bcac00;
  do {
    local_88 = uVar31;
    if (*(int *)(param_1 + 0x1c) <= *(int *)(param_1 + 0x18)) {
      return 1;
    }
    puVar32 = &local_84 + (ulong)uVar31 * 2;
    if (2 < uVar31) {
      puVar32 = &local_84;
    }
    uVar5 = (*puVar32 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x3f8);
    if (uVar5 < *(uint *)(lVar30 + 0x3d8)) {
      puVar32 = *(uint **)(*(long *)(lVar30 + 0x3e0) + (long)(int)uVar5 * 8);
    }
    else {
      puVar32 = (uint *)0x0;
    }
    puVar23 = &local_84 + (ulong)uVar31 * 2;
    if (2 < uVar31) {
      puVar23 = &local_84;
    }
    if ((puVar32 != (uint *)0x0) && (*puVar23 != 8)) {
      if (bVar8) break;
      pcVar3 = local_80 + (ulong)uVar31 * 8;
      if (2 < uVar31) {
        pcVar3 = local_80;
      }
      if (*pcVar3 == '\0') break;
    }
    uVar31 = uVar31 + 1;
    if (uVar31 == 3) {
      return 1;
    }
  } while( true );
  local_d0[0] = 0;
  local_118 = (long *)0x0;
  local_120 = 0;
  local_11c = 0;
  local_f0[0] = local_e0;
  local_130 = &PTR_LAB_04b44f08;
  local_e0[0] = local_d0;
  local_100[0] = local_f0;
  if (local_c0 != (long *)0x0) {
    local_11c = 4;
    local_118 = local_c0;
  }
  local_90 = 0;
  local_128 = 0;
  if (*puVar32 == 0) goto LAB_036c82fc;
  cVar21 = *PTR_DAT_04bcac00;
  do {
    if (cVar21 != '\0') {
      uVar5 = *(uint *)(puVar10 + 0x38);
      if ((int)uVar5 < 0) {
        if (uVar5 == 0xffffffff) goto LAB_036c81e0;
      }
      else if ((char *)((ulong)uVar5 + (long)puVar32) != (char *)0x0) {
        cVar28 = *(char *)((ulong)uVar5 + (long)puVar32);
        goto LAB_036c8270;
      }
LAB_036c826c:
      cVar28 = '\0';
LAB_036c8270:
      uVar5 = *puVar32;
      local_128 = (int)cVar28;
      if (uVar5 == 0) goto LAB_036c82fc;
      uVar13 = (ulong)*(uint *)(puVar10 + 0x3c);
      goto LAB_036c8280;
    }
    cVar21 = '\x01';
    *(undefined8 *)puVar10 = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
    *puVar9 = 1;
    *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
LAB_036c81e0:
    puVar23 = (uint *)(ulong)*puVar32;
    cVar28 = '\0';
    if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8270;
    lVar11 = 0xc;
    if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
      lVar11 = 0x1c;
    }
    lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
    if (lVar11 == 0) goto LAB_036c826c;
    uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
    *(undefined4 *)(puVar10 + 0x38) = 0xfffffffe;
    cVar28 = '\0';
    if (uVar13 == 0) goto LAB_036c8270;
    piVar25 = (int *)(lVar11 + 4);
    while (piVar25[-1] != -0x3e8e7e7d) {
      piVar25 = piVar25 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        cVar28 = '\0';
        goto LAB_036c8270;
      }
    }
    iVar14 = 0;
    if (*piVar25 != -1) {
      iVar14 = *piVar25;
    }
    *(int *)(puVar10 + 0x38) = iVar14;
  } while (*puVar32 != 0);
  local_128 = 0;
  cVar21 = '\0';
  goto LAB_036c8300;
  while( true ) {
    lVar11 = (long)puVar32 - (ulong)uVar5;
    cVar21 = '\0';
    if (lVar11 == 0) goto LAB_036c8300;
    lVar4 = 0xc;
    if (*(char *)(lVar11 + 10) != '\0') {
      lVar4 = 0x1c;
    }
    if (lVar4 + lVar11 == 0) break;
    uVar13 = (ulong)*(ushort *)(lVar11 + 8);
    *(undefined4 *)(puVar10 + 0x3c) = 0xfffffffe;
    cVar21 = '\0';
    if (uVar13 == 0) goto LAB_036c8300;
    puVar23 = (uint *)(lVar4 + lVar11 + 4);
    while (puVar23[-1] != 0x79cde6e6) {
      puVar23 = puVar23 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        cVar21 = '\0';
        goto LAB_036c8300;
      }
    }
    uVar13 = 0;
    if (*puVar23 != 0xffffffff) {
      uVar13 = (ulong)*puVar23;
    }
    *(int *)(puVar10 + 0x3c) = (int)uVar13;
    uVar5 = *puVar32;
    if (uVar5 == 0) break;
LAB_036c8280:
    if (-1 < (int)uVar13) {
      cVar21 = '\0';
      if ((char *)(uVar13 + (long)puVar32) != (char *)0x0) {
        cVar21 = *(char *)(uVar13 + (long)puVar32);
      }
      goto LAB_036c8300;
    }
    if (uVar13 != 0xffffffff) break;
  }
LAB_036c82fc:
  cVar21 = '\0';
LAB_036c8300:
  iStack_124 = (int)cVar21;
  if (*puVar32 == 0) {
LAB_036c83c8:
    cVar28 = '\0';
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x24);
        if (-1 < (int)uVar5) {
          if ((char *)((ulong)uVar5 + (long)puVar32) == (char *)0x0) goto LAB_036c83c8;
          cVar28 = *(char *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c83cc;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c83c8;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      cVar28 = '\0';
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c83cc;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c83c8;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x24) = 0xfffffffe;
      cVar28 = '\0';
      if (uVar13 == 0) goto LAB_036c83cc;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x926d122) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          cVar28 = '\0';
          goto LAB_036c83cc;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x24) = iVar14;
    } while (*puVar32 != 0);
    cVar28 = '\0';
  }
LAB_036c83cc:
  local_98._0_4_ = (int)cVar28;
  puVar23 = &local_84 + (ulong)uVar31 * 2;
  if (2 < uVar31) {
    puVar23 = &local_84;
  }
  local_a0._4_4_ = *puVar23;
  local_a0._0_4_ = uVar31;
  if (10 < local_a0._4_4_) {
    local_a0._4_4_ = 0;
  }
  local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar31);
  local_98._5_2_ = 0;
  local_98 = (undefined **)(ulong)(uint)(int)cVar28;
  local_110 = local_100;
  ppppuStack_108 = local_100;
  if ((((char)param_2[2] == '\0') || (lVar11 = *(long *)PTR_DAT_04bb46b0, lVar11 == 0)) ||
     (local_150 = 1, ((*(byte *)(lVar11 + 0x50d) ^ 0xff) & 6) != 0)) {
LAB_036c8568:
    local_150 = *(int *)(param_1 + 0xc);
    local_6c = (uint)local_a0;
    if ((local_150 == 5) || (lVar11 = FUN_03776680(), lVar11 == 0)) {
      local_168 = 0;
      bVar1 = true;
      goto LAB_036c87b4;
    }
    local_168 = lVar11 + 0x70 + (ulong)local_6c * 0x658;
    if (2 < local_6c) {
      local_168 = lVar11 + 0x70;
    }
  }
  else {
    lVar11 = (**(code **)(**(long **)(*(long *)(lVar11 + 0x10) + 0x188) + 0x38))();
    if (lVar11 == 0) goto LAB_036c8568;
    local_168 = lVar11 + 0x37d28 + ((ulong)local_a0 & 0xffffffff) * 0x658;
    if (2 < (uint)local_a0) {
      local_168 = lVar11 + 0x37d28;
    }
  }
  if (*(long **)(local_168 + 0x28) == (long *)0x0) {
    uVar13 = 0;
  }
  else {
    puVar12 = (undefined8 *)**(long **)(local_168 + 0x28);
    uVar13 = 0;
    if (puVar12 != (undefined8 *)0x0) {
      uVar13 = (**(code **)*puVar12)();
    }
  }
  local_150 = 2;
  bVar7 = (byte)(*(ushort *)(*(long *)(local_168 + 0x10) + *(long *)(local_168 + 8) + 0x153c) >> 2);
  local_98._4_1_ = bVar7 & 1;
  local_98 = (undefined **)
             (CONCAT35(local_98._5_3_,CONCAT14(bVar7,(uint)local_98)) & 0xffffff01ffffffff);
  if ((((uVar13 & 1) != 0) && (*(long *)(local_168 + 0x28) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(local_168 + 0x28) + 8), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  bVar1 = false;
LAB_036c87b4:
  if (*puVar32 == 0) {
LAB_036c88b0:
    local_150 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 4);
        if (-1 < (int)uVar5) {
          if (((byte *)((ulong)uVar5 + (long)puVar32) == (byte *)0x0) ||
             (bVar7 = *(byte *)((ulong)uVar5 + (long)puVar32), local_150 = (uint)bVar7, 0xc < bVar7)
             ) goto LAB_036c88b0;
          goto LAB_036c88b4;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c88b0;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      local_150 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c88b4;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c88b0;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 4) = 0xfffffffe;
      local_150 = 0;
      if (uVar13 == 0) goto LAB_036c88b4;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != 0x34cdbaa5) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          local_150 = 0;
          goto LAB_036c88b4;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 4) = iVar14;
    } while (*puVar32 != 0);
    local_150 = 0;
  }
LAB_036c88b4:
  if (*puVar32 == 0) {
LAB_036c8980:
    local_148 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 8);
        if (-1 < (int)uVar5) {
          if (((byte *)((ulong)uVar5 + (long)puVar32) == (byte *)0x0) ||
             (bVar7 = *(byte *)((ulong)uVar5 + (long)puVar32), local_148 = (uint)bVar7, 0xc < bVar7)
             ) goto LAB_036c8980;
          goto LAB_036c8984;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8980;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      local_148 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8984;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8980;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 8) = 0xfffffffe;
      local_148 = 0;
      if (uVar13 == 0) goto LAB_036c8984;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x738e2240) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          local_148 = 0;
          goto LAB_036c8984;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 8) = iVar14;
    } while (*puVar32 != 0);
    local_148 = 0;
  }
LAB_036c8984:
  if (*puVar32 == 0) {
LAB_036c8a50:
    local_140 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0xc);
        if (-1 < (int)uVar5) {
          if (((byte *)((ulong)uVar5 + (long)puVar32) == (byte *)0x0) ||
             (bVar7 = *(byte *)((ulong)uVar5 + (long)puVar32), local_140 = (uint)bVar7, 0xc < bVar7)
             ) goto LAB_036c8a50;
          goto LAB_036c8a54;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8a50;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      local_140 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8a54;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8a50;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0xc) = 0xfffffffe;
      local_140 = 0;
      if (uVar13 == 0) goto LAB_036c8a54;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x613b8dd2) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          local_140 = 0;
          goto LAB_036c8a54;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0xc) = iVar14;
    } while (*puVar32 != 0);
    local_140 = 0;
  }
LAB_036c8a54:
  if (*puVar32 == 0) {
LAB_036c8b20:
    local_138 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x10);
        if (-1 < (int)uVar5) {
          if (((byte *)((ulong)uVar5 + (long)puVar32) == (byte *)0x0) ||
             (bVar7 = *(byte *)((ulong)uVar5 + (long)puVar32), local_138 = (uint)bVar7, 0xc < bVar7)
             ) goto LAB_036c8b20;
          goto LAB_036c8b24;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8b20;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      local_138 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8b24;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8b20;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x10) = 0xfffffffe;
      local_138 = 0;
      if (uVar13 == 0) goto LAB_036c8b24;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != 0x2678154b) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          local_138 = 0;
          goto LAB_036c8b24;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x10) = iVar14;
    } while (*puVar32 != 0);
    local_138 = 0;
  }
LAB_036c8b24:
  if (*puVar32 == 0) {
LAB_036c8be8:
    uVar16 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x28);
        if (-1 < (int)uVar5) {
          if ((undefined1 *)((ulong)uVar5 + (long)puVar32) == (undefined1 *)0x0) goto LAB_036c8be8;
          uVar16 = *(undefined1 *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c8bec;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8be8;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      uVar16 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8bec;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8be8;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x28) = 0xfffffffe;
      uVar16 = 0;
      if (uVar13 == 0) goto LAB_036c8bec;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != 0x286d8e9e) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar16 = 0;
          goto LAB_036c8bec;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x28) = iVar14;
    } while (*puVar32 != 0);
    uVar16 = 0;
  }
LAB_036c8bec:
  if (*puVar32 == 0) {
LAB_036c8cb8:
    uVar17 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x2c);
        if (-1 < (int)uVar5) {
          if ((undefined1 *)((ulong)uVar5 + (long)puVar32) == (undefined1 *)0x0) goto LAB_036c8cb8;
          uVar17 = *(undefined1 *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c8cbc;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8cb8;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      uVar17 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8cbc;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8cb8;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x2c) = 0xfffffffe;
      uVar17 = 0;
      if (uVar13 == 0) goto LAB_036c8cbc;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x6f2e1605) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar17 = 0;
          goto LAB_036c8cbc;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x2c) = iVar14;
    } while (*puVar32 != 0);
    uVar17 = 0;
  }
LAB_036c8cbc:
  if (*puVar32 == 0) {
LAB_036c8d88:
    uVar18 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x30);
        if (-1 < (int)uVar5) {
          if ((undefined1 *)((ulong)uVar5 + (long)puVar32) == (undefined1 *)0x0) goto LAB_036c8d88;
          uVar18 = *(undefined1 *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c8d8c;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8d88;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      uVar18 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8d8c;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8d88;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x30) = 0xfffffffe;
      uVar18 = 0;
      if (uVar13 == 0) goto LAB_036c8d8c;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x7d9bb9eb) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar18 = 0;
          goto LAB_036c8d8c;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x30) = iVar14;
    } while (*puVar32 != 0);
    uVar18 = 0;
  }
LAB_036c8d8c:
  if (*puVar32 == 0) {
LAB_036c8e58:
    uVar19 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x34);
        if (-1 < (int)uVar5) {
          if ((undefined1 *)((ulong)uVar5 + (long)puVar32) == (undefined1 *)0x0) goto LAB_036c8e58;
          uVar19 = *(undefined1 *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c8e5c;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8e58;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      uVar19 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8e5c;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8e58;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x34) = 0xfffffffe;
      uVar19 = 0;
      if (uVar13 == 0) goto LAB_036c8e5c;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != 0x3ad82170) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar19 = 0;
          goto LAB_036c8e5c;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x34) = iVar14;
    } while (*puVar32 != 0);
    uVar19 = 0;
  }
LAB_036c8e5c:
  if (*puVar32 == 0) {
LAB_036c8f28:
    uVar20 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x14);
        if (-1 < (int)uVar5) {
          if ((undefined1 *)((ulong)uVar5 + (long)puVar32) == (undefined1 *)0x0) goto LAB_036c8f28;
          uVar20 = *(undefined1 *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c8f2c;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8f28;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      uVar20 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8f2c;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8f28;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x14) = 0xfffffffe;
      uVar20 = 0;
      if (uVar13 == 0) goto LAB_036c8f2c;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != 0x53e9beb6) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar20 = 0;
          goto LAB_036c8f2c;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x14) = iVar14;
    } while (*puVar32 != 0);
    uVar20 = 0;
  }
LAB_036c8f2c:
  local_14c = CONCAT11(uVar20,uVar16);
  if (*puVar32 == 0) {
LAB_036c8ff8:
    uVar16 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x18);
        if (-1 < (int)uVar5) {
          if ((undefined1 *)((ulong)uVar5 + (long)puVar32) == (undefined1 *)0x0) goto LAB_036c8ff8;
          uVar16 = *(undefined1 *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c8ffc;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c8ff8;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      uVar16 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c8ffc;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c8ff8;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x18) = 0xfffffffe;
      uVar16 = 0;
      if (uVar13 == 0) goto LAB_036c8ffc;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x14aa262d) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar16 = 0;
          goto LAB_036c8ffc;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x18) = iVar14;
    } while (*puVar32 != 0);
    uVar16 = 0;
  }
LAB_036c8ffc:
  local_144 = CONCAT11(uVar16,uVar17);
  if (*puVar32 == 0) {
LAB_036c90c8:
    uVar16 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x1c);
        if (-1 < (int)uVar5) {
          if ((undefined1 *)((ulong)uVar5 + (long)puVar32) == (undefined1 *)0x0) goto LAB_036c90c8;
          uVar16 = *(undefined1 *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c90cc;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c90c8;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      uVar16 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c90cc;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c90c8;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x1c) = 0xfffffffe;
      uVar16 = 0;
      if (uVar13 == 0) goto LAB_036c90cc;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != -0x61f89c3) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar16 = 0;
          goto LAB_036c90cc;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x1c) = iVar14;
    } while (*puVar32 != 0);
    uVar16 = 0;
  }
LAB_036c90cc:
  local_13c = CONCAT11(uVar16,uVar18);
  if (*puVar32 == 0) {
LAB_036c9198:
    uVar16 = 0;
  }
  else {
    cVar21 = *puVar9;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar10 + 0x20);
        if (-1 < (int)uVar5) {
          if ((undefined1 *)((ulong)uVar5 + (long)puVar32) == (undefined1 *)0x0) goto LAB_036c9198;
          uVar16 = *(undefined1 *)((ulong)uVar5 + (long)puVar32);
          goto LAB_036c919c;
        }
        if (uVar5 != 0xffffffff) goto LAB_036c9198;
      }
      puVar23 = (uint *)(ulong)*puVar32;
      uVar16 = 0;
      if ((*puVar32 == 0) || (puVar32 == puVar23)) goto LAB_036c919c;
      lVar11 = 0xc;
      if (*(char *)((long)puVar32 + (10 - (long)puVar23)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar32 + (lVar11 - (long)puVar23);
      if (lVar11 == 0) goto LAB_036c9198;
      uVar13 = (ulong)*(ushort *)((long)puVar32 + (8 - (long)puVar23));
      *(undefined4 *)(puVar10 + 0x20) = 0xfffffffe;
      uVar16 = 0;
      if (uVar13 == 0) goto LAB_036c919c;
      piVar25 = (int *)(lVar11 + 4);
      while (piVar25[-1] != 0x415c1158) {
        piVar25 = piVar25 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          uVar16 = 0;
          goto LAB_036c919c;
        }
      }
      iVar14 = 0;
      if (*piVar25 != -1) {
        iVar14 = *piVar25;
      }
      *(int *)(puVar10 + 0x20) = iVar14;
    } while (*puVar32 != 0);
    uVar16 = 0;
  }
LAB_036c919c:
  local_134 = CONCAT11(uVar16,uVar19);
  if (0 < local_120) {
    lVar11 = 0;
    do {
      ppppuVar29 = (undefined8 ****)local_118[lVar11];
      (*(code *)**ppppuVar29)(ppppuVar29);
      lVar11 = lVar11 + 1;
      *ppppuVar29 = local_110;
      local_110 = ppppuVar29;
    } while (lVar11 < local_120);
  }
  lVar11 = 0;
  iVar14 = 0;
  local_120 = 0;
  do {
    if (local_11c <= iVar14) break;
    if (((*(uint *)((long)local_100 + lVar11 + -0x50) ^ 0xffffffff) & 0xffff) != 0) {
      iVar24 = *(int *)((long)local_100 + lVar11 + -0x50);
      if (-1 < iVar24) {
        cVar21 = *(char *)((long)&local_14c + lVar11);
        if ('\0' < cVar21) {
          if (bVar1) {
            cVar28 = '\0';
            if (iVar14 < local_11c) goto LAB_036c931c;
          }
          else {
            if (*(long **)(local_168 + 0x28) == (long *)0x0) {
              uVar13 = 0;
            }
            else {
              puVar12 = (undefined8 *)**(long **)(local_168 + 0x28);
              uVar13 = 0;
              if (puVar12 != (undefined8 *)0x0) {
                uVar13 = (**(code **)*puVar12)();
              }
            }
            local_6c = 3;
            uVar22 = *(ushort *)(*(long *)(local_168 + 0x10) + *(long *)(local_168 + 8) + 0x153c);
            if ((((uVar13 & 1) != 0) && (*(long *)(local_168 + 0x28) != 0)) &&
               (puVar12 = *(undefined8 **)(*(long *)(local_168 + 0x28) + 8),
               puVar12 != (undefined8 *)0x0)) {
              (**(code **)*puVar12)();
            }
            cVar21 = *(char *)((long)&local_14c + lVar11);
            iVar24 = *(int *)((long)local_100 + lVar11 + -0x50);
            cVar28 = '\0';
            if ((uVar22 & 8) != 0) {
              cVar28 = cVar21;
            }
            iVar14 = local_120;
            if (local_120 < local_11c) {
LAB_036c931c:
              ppppuVar29 = local_110;
              if (local_110 != (undefined8 ****)0x0) {
                local_110 = (undefined8 ****)*local_110;
              }
              uVar16 = *(undefined1 *)((long)&local_14c + lVar11 + 1);
              *ppppuVar29 = (undefined8 ***)&PTR_LAB_04b44ee8;
              *(int *)(ppppuVar29 + 1) = iVar24;
              *(char *)((long)ppppuVar29 + 0xc) = cVar21;
              *(char *)((long)ppppuVar29 + 0xe) = cVar28;
              *(undefined1 *)((long)ppppuVar29 + 0xd) = uVar16;
              iVar14 = local_120;
              if (local_120 < local_11c) {
                local_118[local_120] = (long)ppppuVar29;
                local_120 = local_120 + 1;
                iVar14 = local_120;
              }
            }
          }
        }
      }
    }
    lVar11 = lVar11 + 8;
  } while (lVar11 != 0x20);
  if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
    pppuVar15 = *(undefined ****)(param_1 + 0x28);
    if (pppuVar15 != (undefined ***)0x0) {
      *(undefined ***)(param_1 + 0x28) = *pppuVar15;
    }
    pppuVar15[0xc] = (undefined **)0x0;
    pppuVar15[10] = (undefined **)(pppuVar15 + 0xc);
    pppuVar15[8] = (undefined **)(pppuVar15 + 10);
    pppuVar26 = pppuVar15 + 6;
    *pppuVar26 = (undefined **)(pppuVar15 + 8);
    *pppuVar15 = &PTR_LAB_04b44f08;
    pppuVar2 = pppuVar15 + 0xe;
    pppuVar15[5] = (undefined **)pppuVar26;
    pppuVar15[3] = (undefined **)0x0;
    pppuVar15[4] = (undefined **)pppuVar26;
    pppuVar15[1] = (undefined **)CONCAT44(iStack_124,local_128);
    pppuVar15[2] = (undefined **)0x0;
    if (pppuVar2 == (undefined ***)0x0) {
      iVar14 = 0;
    }
    else {
      iVar14 = 4;
      pppuVar15[3] = (undefined **)pppuVar2;
      *(undefined4 *)((long)pppuVar15 + 0x14) = 4;
    }
    if (pppuVar15 != &local_130) {
      *(undefined4 *)(pppuVar15 + 2) = 0;
      if (local_120 <= iVar14) {
        iVar14 = local_120;
      }
      if ((0 < iVar14) && (pppuVar2 != (undefined ***)0x0)) {
        if (*(int *)((long)pppuVar15 + 0x14) < 1) {
          iVar24 = 0;
        }
        else {
          ppuVar27 = pppuVar15[4];
          lVar11 = *local_118;
          if (ppuVar27 != (undefined **)0x0) {
            pppuVar15[4] = (undefined **)*ppuVar27;
          }
          *ppuVar27 = (undefined *)&PTR_LAB_04b44ee8;
          uVar6 = *(undefined4 *)(lVar11 + 8);
          *(undefined4 *)((long)ppuVar27 + 0xb) = *(undefined4 *)(lVar11 + 0xb);
          *(undefined4 *)(ppuVar27 + 1) = uVar6;
          iVar24 = *(int *)(pppuVar15 + 2);
          if (iVar24 < *(int *)((long)pppuVar15 + 0x14)) {
            pppuVar15[3][iVar24] = (undefined *)ppuVar27;
            iVar24 = *(int *)(pppuVar15 + 2) + 1;
            *(int *)(pppuVar15 + 2) = iVar24;
          }
        }
        if (iVar14 != 1) {
          if (iVar24 < *(int *)((long)pppuVar15 + 0x14)) {
            ppuVar27 = pppuVar15[4];
            lVar11 = local_118[1];
            if (ppuVar27 != (undefined **)0x0) {
              pppuVar15[4] = (undefined **)*ppuVar27;
            }
            *ppuVar27 = (undefined *)&PTR_LAB_04b44ee8;
            uVar6 = *(undefined4 *)(lVar11 + 8);
            *(undefined4 *)((long)ppuVar27 + 0xb) = *(undefined4 *)(lVar11 + 0xb);
            *(undefined4 *)(ppuVar27 + 1) = uVar6;
            iVar24 = *(int *)(pppuVar15 + 2);
            if (iVar24 < *(int *)((long)pppuVar15 + 0x14)) {
              pppuVar15[3][iVar24] = (undefined *)ppuVar27;
              iVar24 = *(int *)(pppuVar15 + 2) + 1;
              *(int *)(pppuVar15 + 2) = iVar24;
            }
          }
          if (iVar14 != 2) {
            if (iVar24 < *(int *)((long)pppuVar15 + 0x14)) {
              ppuVar27 = pppuVar15[4];
              lVar11 = local_118[2];
              if (ppuVar27 != (undefined **)0x0) {
                pppuVar15[4] = (undefined **)*ppuVar27;
              }
              *ppuVar27 = (undefined *)&PTR_LAB_04b44ee8;
              uVar6 = *(undefined4 *)(lVar11 + 8);
              *(undefined4 *)((long)ppuVar27 + 0xb) = *(undefined4 *)(lVar11 + 0xb);
              *(undefined4 *)(ppuVar27 + 1) = uVar6;
              iVar24 = *(int *)(pppuVar15 + 2);
              if (iVar24 < *(int *)((long)pppuVar15 + 0x14)) {
                pppuVar15[3][iVar24] = (undefined *)ppuVar27;
                iVar24 = *(int *)(pppuVar15 + 2) + 1;
                *(int *)(pppuVar15 + 2) = iVar24;
              }
            }
            if ((iVar14 != 3) && (iVar24 < *(int *)((long)pppuVar15 + 0x14))) {
              lVar11 = local_118[3];
              ppuVar27 = pppuVar15[4];
              if (ppuVar27 != (undefined **)0x0) {
                pppuVar15[4] = (undefined **)*ppuVar27;
              }
              *ppuVar27 = (undefined *)&PTR_LAB_04b44ee8;
              uVar6 = *(undefined4 *)(lVar11 + 8);
              *(undefined4 *)((long)ppuVar27 + 0xb) = *(undefined4 *)(lVar11 + 0xb);
              *(undefined4 *)(ppuVar27 + 1) = uVar6;
              if (*(int *)(pppuVar15 + 2) < *(int *)((long)pppuVar15 + 0x14)) {
                pppuVar15[3][*(int *)(pppuVar15 + 2)] = (undefined *)ppuVar27;
                *(int *)(pppuVar15 + 2) = *(int *)(pppuVar15 + 2) + 1;
              }
            }
          }
        }
      }
    }
    *(undefined1 *)(pppuVar15 + 0x14) = local_90;
    pppuVar15[0x12] = local_a0;
    pppuVar15[0x13] = local_98;
    if (*(int *)(param_1 + 0x18) < *(int *)(param_1 + 0x1c)) {
      *(undefined ****)(*(long *)(param_1 + 0x20) + (long)*(int *)(param_1 + 0x18) * 8) = pppuVar15;
      *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
    }
  }
  local_130 = &PTR_LAB_04b44f08;
  if (0 < local_120) {
    lVar11 = 0;
    do {
      (*(code *)**(undefined8 **)local_118[lVar11])();
      lVar11 = lVar11 + 1;
    } while (lVar11 < local_120);
  }
  bVar1 = 1 < (int)uVar31;
  uVar31 = uVar31 + 1;
  if (bVar1) {
    return 1;
  }
  goto LAB_036c80a8;
}

