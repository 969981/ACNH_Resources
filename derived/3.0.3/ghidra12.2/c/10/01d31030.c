
/* WARNING: Removing unreachable block (ram,0x01d32604) */
/* WARNING: Removing unreachable block (ram,0x01d310fc) */
/* WARNING: Removing unreachable block (ram,0x01d3255c) */
/* WARNING: Removing unreachable block (ram,0x01d32698) */

undefined8 FUN_01d31030(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  long lVar18;
  uint *puVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  uint *puVar24;
  ushort *puVar25;
  char cVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  long lVar31;
  int *piVar32;
  char *pcVar33;
  uint uVar34;
  long lVar35;
  ushort *puVar36;
  ulong uVar37;
  undefined8 *puVar38;
  uint local_228;
  uint local_224;
  undefined8 local_208;
  undefined8 *local_200;
  undefined4 local_1f8;
  undefined1 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined4 local_1e0;
  undefined *local_1d8;
  undefined1 *puStack_1d0;
  undefined4 local_1c8;
  undefined1 local_1c4 [63];
  undefined1 local_185;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [52];
  uint local_c4;
  undefined8 local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  int local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  local_c4 = param_2;
  uVar12 = FUN_01d30900(param_1,param_3);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 0x2c) = 1;
  lVar13 = FUN_03776680(param_2);
  if (lVar13 == 0) {
    return 0;
  }
  if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar14 == (undefined8 *)0x0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)*puVar14)();
    uVar12 = uVar12 & 0xffffffff;
  }
  lVar21 = *(long *)PTR_DAT_04bb46b0;
  if (lVar21 == 0) {
    lVar21 = 0;
  }
  else {
    local_208 = (undefined *)CONCAT44(local_208._4_4_,1);
    if (((*(byte *)(lVar21 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar15 = (**(code **)(**(long **)(*(long *)(lVar21 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar15 = 0;
    }
    lVar21 = 0;
    if (lVar15 != 0) {
      lVar21 = lVar15 + 0xa8;
    }
  }
  *(undefined1 *)(param_1 + 0xb8) = 0;
  local_b8 = (undefined1 *)(param_1 + 0x73);
  local_b0 = 0x46;
  uStack_1f4 = 0;
  local_1f8 = 0x18;
  local_1f0 = 0xffffffff;
  uStack_1e8 = 0xffffffff00000000;
  local_c0 = PTR_DAT_04bb2030 + 0x10;
  puStack_1d0 = local_1c4;
  local_1e0 = 0xffffffff;
  local_1c8 = 0x40;
  local_185 = 0;
  local_1c4[0] = 0;
  local_1d8 = PTR_DAT_04bb2bc0 + 0x10;
  local_170 = 0x40;
  local_12d = 0;
  local_16c[0] = 0;
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  puStack_178 = local_16c;
  local_208 = &DAT_04a542f0;
  puVar2 = auStack_f8;
  if (auStack_f8 <= (undefined1 *)((long)&local_128 + 2U)) {
    puVar2 = (undefined1 *)((long)&local_128 + 2U);
  }
  local_128 = 0;
  uStack_120 = 0;
  local_200 = &local_128;
  local_180 = local_1d8;
  memset(&local_128,0,(size_t)(puVar2 + (-0xe0 - (long)&local_208)));
  local_a8[0] = 0x17;
  local_a0 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x4020;
  memset(&local_128,0,((ulong)(puVar2 + ~(ulong)&local_128) & 0xfffffffffffffffe) + 2);
  uStack_1f4 = 0;
  local_1f0 = 0xffffffff;
  uStack_1e8 = 0xffffffff00000000;
  local_1e0 = 0xffffffff;
  local_1c4[0] = 0;
  local_16c[0] = 0;
  local_88 = 0;
  local_70 = 1;
  local_6c = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_98 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_90 = 0;
  FUN_02906b00(&local_98,&local_208,local_a8);
  uVar16 = (**(code **)(local_208 + 0x18))(&local_208);
  (**(code **)(local_c0 + 0x18))(&local_c0);
  local_a8[0] = FUN_038d4f60(&local_98,local_b8,local_b0,uVar16,0xffffffff);
  if (local_a8[0] != 0) {
    uVar16 = 0;
    *local_b8 = 0;
    goto LAB_01d314b8;
  }
  *(uint *)(param_1 + 0xbc) = local_c4;
  if ((*(long **)(lVar13 + 0x13a0) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x13a0), puVar14 == (undefined8 *)0x0)) {
    *(undefined4 *)(param_1 + 0x550) =
         *(undefined4 *)(*(long *)(lVar13 + 5000) + *(long *)(lVar13 + 0x1380) + 0x68);
  }
  else {
    uVar17 = (**(code **)*puVar14)();
    *(undefined4 *)(param_1 + 0x550) =
         *(undefined4 *)(*(long *)(lVar13 + 5000) + *(long *)(lVar13 + 0x1380) + 0x68);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar13 + 0x13a0) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x13a0) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
  lVar15 = *(long *)PTR_DAT_04bb4958;
  if (((lVar15 == 0) || (lVar31 = *(long *)PTR_DAT_04bb4138, lVar31 == 0)) ||
     (lVar22 = *(long *)PTR_DAT_04bb4130, lVar22 == 0)) {
    uVar16 = 0;
    goto LAB_01d314b8;
  }
  iVar30 = 0;
  local_200 = (undefined8 *)&local_1f8;
  local_208 = (undefined *)0x2600000000;
  lVar1 = *(long *)PTR_DAT_04bb4960 + 0x800;
  do {
    lVar35 = lVar21 + 0x498 + (long)iVar30 * 0x16c0;
    if ((*(long **)(lVar35 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar35 + 0x28), puVar14 == (undefined8 *)0x0)) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)*puVar14)();
      uVar17 = uVar17 & 0xffffffff;
    }
    lVar18 = *(long *)(lVar35 + 0x10) + *(long *)(lVar35 + 8);
    uVar11 = (uint)*(byte *)(lVar18 + 2);
    local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar11);
    if (uVar11 == local_c4) {
      uVar11 = (uint)*(ushort *)(lVar18 + 6);
      if (0x14 < uVar11) {
        uVar11 = 0;
      }
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar11);
      if (uVar11 < 0x15) {
        uVar10 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)uVar11 * 8 + 0x150),
                              0);
        local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
        lVar18 = FUN_036c67d0(lVar1,&local_98);
        if (lVar18 != 0) {
          if ((int)local_208 < local_208._4_4_) {
            local_200[(int)local_208] = *(long *)(lVar35 + 0x10) + *(long *)(lVar35 + 8);
            local_208 = (undefined *)CONCAT44(local_208._4_4_,(int)local_208 + 1);
          }
        }
      }
    }
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar35 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar35 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
    puVar14 = local_200;
    puVar8 = PTR_DAT_04bc11f0;
    iVar30 = iVar30 + 1;
  } while (iVar30 != 0x26);
  if (1 < (int)local_208) {
    local_224 = 0;
    local_228 = (int)local_208 - 1;
    pcVar33 = PTR_DAT_04bc11e8;
LAB_01d31538:
    if ((int)local_224 < (int)local_228) {
      uVar37 = (ulong)local_224;
      uVar23 = (ulong)local_228;
      uVar17 = uVar37;
      local_228 = local_224;
LAB_01d31564:
      uVar29 = uVar17 + 1;
      lVar21 = puVar14[uVar29];
      uVar11 = (uint)*(ushort *)(puVar14[uVar17] + 6);
      if (0x14 < uVar11) {
        uVar11 = 0;
      }
      if (uVar11 < 0x15) {
        local_c0._0_4_ = uVar11;
        uVar10 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)uVar11 * 8 + 0x150),
                              0);
        local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
        puVar19 = (uint *)FUN_036c67d0(lVar1,&local_98);
        uVar11 = *puVar19;
        pcVar33 = PTR_DAT_04bc11e8;
      }
      else {
        puVar19 = (uint *)0x0;
        uVar11 = uRam0000000000000000;
      }
      if (uVar11 != 0) {
        cVar26 = *pcVar33;
        do {
          puVar24 = (uint *)(ulong)uVar11;
          if (cVar26 != '\0') {
            uVar11 = *(uint *)(puVar8 + 0x70);
            if ((int)uVar11 < 0) {
              if ((uVar11 == 0xffffffff) && (puVar24 != (uint *)0x0)) goto LAB_01d31644;
              goto LAB_01d316e0;
            }
            if ((byte *)((ulong)uVar11 + (long)puVar19) == (byte *)0x0) goto LAB_01d316e0;
            bVar5 = *(byte *)((ulong)uVar11 + (long)puVar19);
            if (bVar5 == 0) goto LAB_01d316e0;
            uVar11 = -(uint)(bVar5 >> 7) & 0xff000000 | (uint)bVar5 << 0x10;
LAB_01d316ec:
            cVar26 = *pcVar33;
            goto LAB_01d316f0;
          }
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          cVar26 = '\x01';
          *pcVar33 = '\x01';
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
          puVar24 = (uint *)(ulong)*puVar19;
          if (puVar24 == (uint *)0x0) {
LAB_01d316e0:
            puVar24 = (uint *)(ulong)*puVar19;
            uVar11 = 0xff0000;
            if (*puVar19 != 0) goto LAB_01d316ec;
            goto LAB_01d317c0;
          }
LAB_01d31644:
          lVar35 = (long)puVar19 - (long)puVar24;
          if (lVar35 == 0) goto LAB_01d316e0;
          lVar18 = 0xc;
          if (*(char *)(lVar35 + 10) != '\0') {
            lVar18 = 0x1c;
          }
          if (lVar18 + lVar35 == 0) goto LAB_01d316e0;
          uVar28 = (ulong)*(ushort *)(lVar35 + 8);
          *(undefined4 *)(puVar8 + 0x70) = 0xfffffffe;
          if (uVar28 == 0) goto LAB_01d316e0;
          piVar32 = (int *)(lVar18 + lVar35 + 4);
          while (piVar32[-1] != -0x49e2b638) {
            piVar32 = piVar32 + 2;
            uVar28 = uVar28 - 1;
            if (uVar28 == 0) goto LAB_01d316e0;
          }
          iVar30 = 0;
          if (*piVar32 != -1) {
            iVar30 = *piVar32;
          }
          *(int *)(puVar8 + 0x70) = iVar30;
          uVar11 = *puVar19;
        } while (uVar11 != 0);
      }
      uVar34 = 0;
      uVar11 = 0xff0000;
      goto LAB_01d317c4;
    }
    goto LAB_01d31f24;
  }
LAB_01d31f30:
  *(int *)(param_1 + 0x138) = (int)local_208;
  puVar9 = PTR_DAT_04bc0678;
  puVar8 = PTR_DAT_04bb40a8;
  if ((int)local_208 != 0) {
    puVar14 = local_200 + (int)local_208;
    uVar17 = 0;
    puVar38 = local_200;
LAB_01d31fc0:
    puVar36 = (ushort *)*puVar38;
    puVar3 = (undefined4 *)(param_1 + 0xc0) + uVar17 * 3;
    if (9 < uVar17) {
      puVar3 = (undefined4 *)(param_1 + 0xc0);
    }
    uVar23 = (ulong)*puVar36;
    if (uVar23 < 500) {
      uVar6 = *(ushort *)(lVar15 + 0x620 + uVar23 * 2);
      if ((int)*(uint *)(lVar15 + 0x1c0) < 1) {
        if ((((*(long *)(lVar15 + 0xb0) != 0) &&
             (puVar19 = *(uint **)(*(long *)(lVar15 + 0xb0) + 8), puVar19 != (uint *)0x0)) &&
            ((uVar11 = (uint)uVar6, *(uint *)(lVar15 + 200) <= uVar11 ||
             (*(char *)(*(long *)(lVar15 + 0xd0) + (ulong)uVar11) != '\0')))) &&
           (((uVar11 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
          iVar30 = 0xc;
          if (*(char *)((long)puVar19 + 10) != '\0') {
            iVar30 = 0x1c;
          }
          puVar19 = (uint *)((ulong)(puVar19[1] * uVar11 + (uint)(ushort)puVar19[2] * 8 + iVar30) +
                            (long)puVar19);
          if (puVar19 != (uint *)0x0) goto LAB_01d32090;
        }
        goto LAB_01d3252c;
      }
      if (*(uint *)(lVar15 + 0x1c0) <= (uint)uVar6) goto LAB_01d3252c;
      uVar11 = (uint)uVar6;
      if (*(uint *)(lVar15 + 0x1b0) <= uVar11) {
        uVar11 = 0;
      }
      puVar19 = *(uint **)(*(long *)(lVar15 + 0x1b8) + (ulong)uVar11 * 8);
      if (puVar19 == (uint *)0x0) goto LAB_01d3252c;
LAB_01d32090:
      uVar11 = *puVar19;
      if (uVar11 != 0) {
        cVar26 = *PTR_DAT_04bc0670;
        do {
          puVar7 = PTR_DAT_04bc0670;
          uVar23 = (ulong)uVar11;
          if (cVar26 != '\0') {
            uVar11 = *(uint *)(puVar9 + 0x44);
            if ((int)uVar11 < 0) {
              if ((uVar11 == 0xffffffff) && (uVar23 != 0)) goto LAB_01d320f8;
            }
            else if (((char *)((ulong)uVar11 + (long)puVar19) != (char *)0x0) &&
                    (*(char *)((ulong)uVar11 + (long)puVar19) != '\0')) {
              uVar37 = (ulong)*(uint *)(puVar9 + 0x48);
              goto LAB_01d32170;
            }
LAB_01d32330:
            uVar11 = *puVar19;
            if (uVar11 != 0) {
              uVar23 = (ulong)*(uint *)(puVar9 + 0x48);
              goto LAB_01d3233c;
            }
            break;
          }
          cVar26 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          uVar23 = (ulong)*puVar19;
          if (uVar23 == 0) goto LAB_01d32330;
LAB_01d320f8:
          lVar21 = (long)puVar19 - uVar23;
          if (lVar21 == 0) goto LAB_01d32330;
          lVar1 = 0xc;
          if (*(char *)(lVar21 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar21 == 0) goto LAB_01d32330;
          uVar23 = (ulong)*(ushort *)(lVar21 + 8);
          *(undefined4 *)(puVar9 + 0x44) = 0xfffffffe;
          if (uVar23 == 0) goto LAB_01d32330;
          piVar32 = (int *)(lVar1 + lVar21 + 4);
          while (piVar32[-1] != -0x36872a92) {
            piVar32 = piVar32 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) goto LAB_01d32330;
          }
          iVar30 = 0;
          if (*piVar32 != -1) {
            iVar30 = *piVar32;
          }
          *(int *)(puVar9 + 0x44) = iVar30;
          uVar11 = *puVar19;
        } while (uVar11 != 0);
      }
LAB_01d323bc:
      lVar21 = 0;
      goto LAB_01d323c0;
    }
    goto LAB_01d3252c;
  }
LAB_01d3253c:
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  if (*(long **)(lVar13 + 0x98) == (long *)0x0) {
    uVar11 = 1;
  }
  else {
    puVar14 = (undefined8 *)**(long **)(lVar13 + 0x98);
    if (puVar14 == (undefined8 *)0x0) {
      uVar11 = 1;
    }
    else {
      uVar11 = (**(code **)*puVar14)();
      uVar11 = uVar11 ^ 1;
    }
  }
  local_208 = (undefined *)((ulong)local_208 & 0xffffffff00000000);
  uVar6 = *(ushort *)(*(long *)(lVar13 + 0x80) + *(long *)(lVar13 + 0x78) + 0x153c);
  if ((((uVar11 & 1) == 0) && (*(long *)(lVar13 + 0x98) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x98) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  if ((uVar6 & 1) != 0) {
    *(char *)(param_1 + 0x54a) = *(char *)(param_1 + 0x54a) + '\x01';
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
  if ((*(long **)(lVar13 + 0x6f0) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x6f0), puVar14 == (undefined8 *)0x0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = (**(code **)*puVar14)();
    uVar11 = uVar11 ^ 1;
  }
  local_208 = (undefined *)((ulong)local_208 & 0xffffffff00000000);
  uVar6 = *(ushort *)(*(long *)(lVar13 + 0x6d8) + *(long *)(lVar13 + 0x6d0) + 0x153c);
  if ((((uVar11 & 1) == 0) && (*(long *)(lVar13 + 0x6f0) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x6f0) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  if ((uVar6 & 1) != 0) {
    *(char *)(param_1 + 0x54a) = *(char *)(param_1 + 0x54a) + '\x01';
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,2);
  if ((*(long **)(lVar13 + 0xd48) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar13 + 0xd48), puVar14 == (undefined8 *)0x0)) {
    uVar11 = 1;
  }
  else {
    uVar11 = (**(code **)*puVar14)();
    uVar11 = uVar11 ^ 1;
  }
  local_208 = (undefined *)((ulong)local_208 & 0xffffffff00000000);
  uVar6 = *(ushort *)(*(long *)(lVar13 + 0xd30) + *(long *)(lVar13 + 0xd28) + 0x153c);
  if ((((uVar11 & 1) == 0) && (*(long *)(lVar13 + 0xd48) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0xd48) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  if ((uVar6 & 1) != 0) {
    *(char *)(param_1 + 0x54a) = *(char *)(param_1 + 0x54a) + '\x01';
  }
  uVar16 = 1;
LAB_01d314b8:
  if ((((uVar12 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  return uVar16;
LAB_01d316f0:
  if (cVar26 == '\0') {
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    cVar26 = '\x01';
    *pcVar33 = '\x01';
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
    puVar24 = (uint *)(ulong)*puVar19;
  }
  else {
    uVar34 = *(uint *)(puVar8 + 0x78);
    if (-1 < (int)uVar34) {
      if ((char *)((ulong)uVar34 + (long)puVar19) != (char *)0x0) {
        uVar34 = (uint)*(char *)((ulong)uVar34 + (long)puVar19);
        goto LAB_01d317c4;
      }
LAB_01d317c0:
      uVar34 = 0;
LAB_01d317c4:
      uVar20 = (uint)*(ushort *)(lVar21 + 6);
      if (0x14 < uVar20) {
        uVar20 = 0;
      }
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar20);
      if (uVar20 < 0x15) {
        uVar10 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)uVar20 * 8 + 0x150),
                              0);
        local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
        puVar19 = (uint *)FUN_036c67d0(lVar1,&local_98);
        uVar20 = *puVar19;
        pcVar33 = PTR_DAT_04bc11e8;
      }
      else {
        puVar19 = (uint *)0x0;
        uVar20 = uRam0000000000000000;
      }
      if (uVar20 != 0) {
        cVar26 = *pcVar33;
        do {
          puVar24 = (uint *)(ulong)uVar20;
          if (cVar26 != '\0') {
            uVar20 = *(uint *)(puVar8 + 0x70);
            if ((int)uVar20 < 0) {
              if ((uVar20 == 0xffffffff) && (puVar24 != (uint *)0x0)) goto LAB_01d31894;
              goto LAB_01d31924;
            }
            if ((byte *)((ulong)uVar20 + (long)puVar19) == (byte *)0x0) goto LAB_01d31924;
            bVar5 = *(byte *)((ulong)uVar20 + (long)puVar19);
            if (bVar5 == 0) goto LAB_01d31924;
            uVar20 = -(uint)(bVar5 >> 7) & 0xff000000 | (uint)bVar5 << 0x10;
LAB_01d31930:
            cVar26 = *pcVar33;
            goto LAB_01d31934;
          }
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          cVar26 = '\x01';
          *pcVar33 = '\x01';
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
          puVar24 = (uint *)(ulong)*puVar19;
          if (puVar24 == (uint *)0x0) {
LAB_01d31924:
            puVar24 = (uint *)(ulong)*puVar19;
            uVar20 = 0xff0000;
            uVar27 = 0;
            if (*puVar19 != 0) goto LAB_01d31930;
            goto LAB_01d319f0;
          }
LAB_01d31894:
          lVar21 = (long)puVar19 - (long)puVar24;
          if (lVar21 == 0) goto LAB_01d31924;
          lVar35 = 0xc;
          if (*(char *)(lVar21 + 10) != '\0') {
            lVar35 = 0x1c;
          }
          if (lVar35 + lVar21 == 0) goto LAB_01d31924;
          uVar28 = (ulong)*(ushort *)(lVar21 + 8);
          *(undefined4 *)(puVar8 + 0x70) = 0xfffffffe;
          if (uVar28 == 0) goto LAB_01d31924;
          piVar32 = (int *)(lVar35 + lVar21 + 4);
          while (piVar32[-1] != -0x49e2b638) {
            piVar32 = piVar32 + 2;
            uVar28 = uVar28 - 1;
            if (uVar28 == 0) goto LAB_01d31924;
          }
          iVar30 = 0;
          if (*piVar32 != -1) {
            iVar30 = *piVar32;
          }
          *(int *)(puVar8 + 0x70) = iVar30;
          uVar20 = *puVar19;
        } while (uVar20 != 0);
      }
      uVar27 = 0;
      uVar20 = 0xff0000;
      goto LAB_01d319f0;
    }
    if (uVar34 != 0xffffffff) goto LAB_01d317c0;
  }
  if ((puVar24 == (uint *)0x0) || (puVar19 == puVar24)) goto LAB_01d317c0;
  lVar35 = 0xc;
  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
    lVar35 = 0x1c;
  }
  lVar35 = (long)puVar19 + (lVar35 - (long)puVar24);
  if (lVar35 == 0) goto LAB_01d317c0;
  uVar28 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
  *(undefined4 *)(puVar8 + 0x78) = 0xfffffffe;
  if (uVar28 == 0) goto LAB_01d317c0;
  piVar32 = (int *)(lVar35 + 4);
  while (piVar32[-1] != 0x1a9174c6) {
    piVar32 = piVar32 + 2;
    uVar28 = uVar28 - 1;
    if (uVar28 == 0) goto LAB_01d317c0;
  }
  iVar30 = 0;
  if (*piVar32 != -1) {
    iVar30 = *piVar32;
  }
  *(int *)(puVar8 + 0x78) = iVar30;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) goto LAB_01d317c0;
  goto LAB_01d316f0;
LAB_01d31934:
  do {
    if (cVar26 != '\0') {
      uVar4 = *(uint *)(puVar8 + 0x78);
      if ((int)uVar4 < 0) {
        if (uVar4 == 0xffffffff) {
          if (puVar24 != (uint *)0x0) goto LAB_01d31980;
          uVar27 = 0;
        }
        else {
LAB_01d319ec:
          uVar27 = 0;
        }
      }
      else {
        uVar27 = 0;
        if ((char *)((ulong)uVar4 + (long)puVar19) != (char *)0x0) {
          uVar27 = (uint)*(char *)((ulong)uVar4 + (long)puVar19);
        }
      }
      goto LAB_01d319f0;
    }
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    cVar26 = '\x01';
    *pcVar33 = '\x01';
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
    puVar24 = (uint *)(ulong)*puVar19;
    uVar27 = 0;
    if (puVar24 == (uint *)0x0) goto LAB_01d319f0;
LAB_01d31980:
    if (puVar19 == puVar24) goto LAB_01d319ec;
    lVar21 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar21 = 0x1c;
    }
    lVar21 = (long)puVar19 + (lVar21 - (long)puVar24);
    if (lVar21 == 0) goto LAB_01d319ec;
    uVar28 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    *(undefined4 *)(puVar8 + 0x78) = 0xfffffffe;
    uVar27 = 0;
    if (uVar28 == 0) goto LAB_01d319f0;
    piVar32 = (int *)(lVar21 + 4);
    while (piVar32[-1] != 0x1a9174c6) {
      piVar32 = piVar32 + 2;
      uVar28 = uVar28 - 1;
      if (uVar28 == 0) {
        uVar27 = 0;
        goto LAB_01d319f0;
      }
    }
    iVar30 = 0;
    if (*piVar32 != -1) {
      iVar30 = *piVar32;
    }
    *(int *)(puVar8 + 0x78) = iVar30;
    puVar24 = (uint *)(ulong)*puVar19;
  } while (*puVar19 != 0);
  uVar27 = 0;
LAB_01d319f0:
  if ((int)(uVar27 | uVar20) < (int)(uVar34 | uVar11)) {
    local_228 = (uint)uVar17;
    uVar16 = puVar14[uVar29];
    puVar14[uVar29] = puVar14[uVar17];
    puVar14[uVar17] = uVar16;
  }
  uVar17 = uVar29;
  if (uVar29 == uVar23) goto LAB_01d31a34;
  goto LAB_01d31564;
LAB_01d31a34:
  if ((int)local_224 < (int)local_228) {
    local_224 = local_228;
    uVar17 = (ulong)local_228;
LAB_01d31a60:
    uVar23 = uVar17 - 1;
    lVar21 = puVar14[uVar23];
    uVar11 = (uint)*(ushort *)(puVar14[uVar17] + 6);
    if (0x14 < uVar11) {
      uVar11 = 0;
    }
    if (uVar11 < 0x15) {
      local_c0._0_4_ = uVar11;
      uVar10 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)uVar11 * 8 + 0x150),0)
      ;
      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
      puVar19 = (uint *)FUN_036c67d0(lVar1,&local_98);
      uVar11 = *puVar19;
      pcVar33 = PTR_DAT_04bc11e8;
    }
    else {
      puVar19 = (uint *)0x0;
      uVar11 = uRam0000000000000000;
    }
    if (uVar11 != 0) {
      cVar26 = *pcVar33;
      do {
        puVar24 = (uint *)(ulong)uVar11;
        if (cVar26 != '\0') {
          uVar11 = *(uint *)(puVar8 + 0x70);
          if ((int)uVar11 < 0) {
            if ((uVar11 == 0xffffffff) && (puVar24 != (uint *)0x0)) goto LAB_01d31b38;
            goto LAB_01d31bd0;
          }
          if ((byte *)((ulong)uVar11 + (long)puVar19) == (byte *)0x0) goto LAB_01d31bd0;
          bVar5 = *(byte *)((ulong)uVar11 + (long)puVar19);
          if (bVar5 == 0) goto LAB_01d31bd0;
          uVar11 = -(uint)(bVar5 >> 7) & 0xff000000 | (uint)bVar5 << 0x10;
LAB_01d31bdc:
          cVar26 = *pcVar33;
          goto LAB_01d31be0;
        }
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        cVar26 = '\x01';
        *pcVar33 = '\x01';
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
        puVar24 = (uint *)(ulong)*puVar19;
        if (puVar24 == (uint *)0x0) {
LAB_01d31bd0:
          puVar24 = (uint *)(ulong)*puVar19;
          uVar11 = 0xff0000;
          if (*puVar19 != 0) goto LAB_01d31bdc;
          goto LAB_01d31cb0;
        }
LAB_01d31b38:
        lVar35 = (long)puVar19 - (long)puVar24;
        if (lVar35 == 0) goto LAB_01d31bd0;
        lVar18 = 0xc;
        if (*(char *)(lVar35 + 10) != '\0') {
          lVar18 = 0x1c;
        }
        if (lVar18 + lVar35 == 0) goto LAB_01d31bd0;
        uVar29 = (ulong)*(ushort *)(lVar35 + 8);
        *(undefined4 *)(puVar8 + 0x70) = 0xfffffffe;
        if (uVar29 == 0) goto LAB_01d31bd0;
        piVar32 = (int *)(lVar18 + lVar35 + 4);
        while (piVar32[-1] != -0x49e2b638) {
          piVar32 = piVar32 + 2;
          uVar29 = uVar29 - 1;
          if (uVar29 == 0) goto LAB_01d31bd0;
        }
        iVar30 = 0;
        if (*piVar32 != -1) {
          iVar30 = *piVar32;
        }
        *(int *)(puVar8 + 0x70) = iVar30;
        uVar11 = *puVar19;
      } while (uVar11 != 0);
    }
    uVar34 = 0;
    uVar11 = 0xff0000;
    goto LAB_01d31cb4;
  }
  goto LAB_01d31f24;
LAB_01d31be0:
  if (cVar26 == '\0') {
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    cVar26 = '\x01';
    *pcVar33 = '\x01';
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
    puVar24 = (uint *)(ulong)*puVar19;
  }
  else {
    uVar34 = *(uint *)(puVar8 + 0x78);
    if (-1 < (int)uVar34) {
      if ((char *)((ulong)uVar34 + (long)puVar19) != (char *)0x0) {
        uVar34 = (uint)*(char *)((ulong)uVar34 + (long)puVar19);
        goto LAB_01d31cb4;
      }
LAB_01d31cb0:
      uVar34 = 0;
LAB_01d31cb4:
      uVar20 = (uint)*(ushort *)(lVar21 + 6);
      if (0x14 < uVar20) {
        uVar20 = 0;
      }
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar20);
      if (uVar20 < 0x15) {
        uVar10 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)uVar20 * 8 + 0x150),
                              0);
        local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
        puVar19 = (uint *)FUN_036c67d0(lVar1,&local_98);
        uVar20 = *puVar19;
        pcVar33 = PTR_DAT_04bc11e8;
      }
      else {
        puVar19 = (uint *)0x0;
        uVar20 = uRam0000000000000000;
      }
      if (uVar20 != 0) {
        cVar26 = *pcVar33;
        do {
          puVar24 = (uint *)(ulong)uVar20;
          if (cVar26 != '\0') {
            uVar20 = *(uint *)(puVar8 + 0x70);
            if ((int)uVar20 < 0) {
              if ((uVar20 == 0xffffffff) && (puVar24 != (uint *)0x0)) goto LAB_01d31d84;
              goto LAB_01d31e14;
            }
            if ((byte *)((ulong)uVar20 + (long)puVar19) == (byte *)0x0) goto LAB_01d31e14;
            bVar5 = *(byte *)((ulong)uVar20 + (long)puVar19);
            if (bVar5 == 0) goto LAB_01d31e14;
            uVar20 = -(uint)(bVar5 >> 7) & 0xff000000 | (uint)bVar5 << 0x10;
LAB_01d31e20:
            cVar26 = *pcVar33;
            goto LAB_01d31e24;
          }
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          cVar26 = '\x01';
          *pcVar33 = '\x01';
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
          puVar24 = (uint *)(ulong)*puVar19;
          if (puVar24 == (uint *)0x0) {
LAB_01d31e14:
            puVar24 = (uint *)(ulong)*puVar19;
            uVar20 = 0xff0000;
            uVar27 = 0;
            if (*puVar19 != 0) goto LAB_01d31e20;
            goto LAB_01d31ee0;
          }
LAB_01d31d84:
          lVar21 = (long)puVar19 - (long)puVar24;
          if (lVar21 == 0) goto LAB_01d31e14;
          lVar35 = 0xc;
          if (*(char *)(lVar21 + 10) != '\0') {
            lVar35 = 0x1c;
          }
          if (lVar35 + lVar21 == 0) goto LAB_01d31e14;
          uVar29 = (ulong)*(ushort *)(lVar21 + 8);
          *(undefined4 *)(puVar8 + 0x70) = 0xfffffffe;
          if (uVar29 == 0) goto LAB_01d31e14;
          piVar32 = (int *)(lVar35 + lVar21 + 4);
          while (piVar32[-1] != -0x49e2b638) {
            piVar32 = piVar32 + 2;
            uVar29 = uVar29 - 1;
            if (uVar29 == 0) goto LAB_01d31e14;
          }
          iVar30 = 0;
          if (*piVar32 != -1) {
            iVar30 = *piVar32;
          }
          *(int *)(puVar8 + 0x70) = iVar30;
          uVar20 = *puVar19;
        } while (uVar20 != 0);
      }
      uVar27 = 0;
      uVar20 = 0xff0000;
      goto LAB_01d31ee0;
    }
    if (uVar34 != 0xffffffff) goto LAB_01d31cb0;
  }
  if ((puVar24 == (uint *)0x0) || (puVar19 == puVar24)) goto LAB_01d31cb0;
  lVar35 = 0xc;
  if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
    lVar35 = 0x1c;
  }
  lVar35 = (long)puVar19 + (lVar35 - (long)puVar24);
  if (lVar35 == 0) goto LAB_01d31cb0;
  uVar29 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
  *(undefined4 *)(puVar8 + 0x78) = 0xfffffffe;
  if (uVar29 == 0) goto LAB_01d31cb0;
  piVar32 = (int *)(lVar35 + 4);
  while (piVar32[-1] != 0x1a9174c6) {
    piVar32 = piVar32 + 2;
    uVar29 = uVar29 - 1;
    if (uVar29 == 0) goto LAB_01d31cb0;
  }
  iVar30 = 0;
  if (*piVar32 != -1) {
    iVar30 = *piVar32;
  }
  *(int *)(puVar8 + 0x78) = iVar30;
  puVar24 = (uint *)(ulong)*puVar19;
  if (*puVar19 == 0) goto LAB_01d31cb0;
  goto LAB_01d31be0;
LAB_01d31e24:
  do {
    if (cVar26 != '\0') {
      uVar4 = *(uint *)(puVar8 + 0x78);
      if ((int)uVar4 < 0) {
        if (uVar4 == 0xffffffff) {
          if (puVar24 != (uint *)0x0) goto LAB_01d31e70;
          uVar27 = 0;
        }
        else {
LAB_01d31edc:
          uVar27 = 0;
        }
      }
      else {
        uVar27 = 0;
        if ((char *)((ulong)uVar4 + (long)puVar19) != (char *)0x0) {
          uVar27 = (uint)*(char *)((ulong)uVar4 + (long)puVar19);
        }
      }
      goto LAB_01d31ee0;
    }
    *(undefined8 *)puVar8 = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
    cVar26 = '\x01';
    *pcVar33 = '\x01';
    *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
    *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
    puVar24 = (uint *)(ulong)*puVar19;
    uVar27 = 0;
    if (puVar24 == (uint *)0x0) goto LAB_01d31ee0;
LAB_01d31e70:
    if (puVar19 == puVar24) goto LAB_01d31edc;
    lVar21 = 0xc;
    if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
      lVar21 = 0x1c;
    }
    lVar21 = (long)puVar19 + (lVar21 - (long)puVar24);
    if (lVar21 == 0) goto LAB_01d31edc;
    uVar29 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
    *(undefined4 *)(puVar8 + 0x78) = 0xfffffffe;
    uVar27 = 0;
    if (uVar29 == 0) goto LAB_01d31ee0;
    piVar32 = (int *)(lVar21 + 4);
    while (piVar32[-1] != 0x1a9174c6) {
      piVar32 = piVar32 + 2;
      uVar29 = uVar29 - 1;
      if (uVar29 == 0) {
        uVar27 = 0;
        goto LAB_01d31ee0;
      }
    }
    iVar30 = 0;
    if (*piVar32 != -1) {
      iVar30 = *piVar32;
    }
    *(int *)(puVar8 + 0x78) = iVar30;
    puVar24 = (uint *)(ulong)*puVar19;
  } while (*puVar19 != 0);
  uVar27 = 0;
LAB_01d31ee0:
  if ((int)(uVar34 | uVar11) < (int)(uVar27 | uVar20)) {
    local_224 = (uint)uVar17;
    uVar16 = puVar14[uVar23];
    puVar14[uVar23] = puVar14[uVar17];
    puVar14[uVar17] = uVar16;
  }
  uVar17 = uVar23;
  if ((long)uVar23 <= (long)uVar37) goto LAB_01d3152c;
  goto LAB_01d31a60;
LAB_01d3152c:
  if (local_224 == local_228) goto LAB_01d31f24;
  goto LAB_01d31538;
LAB_01d31f24:
  goto LAB_01d31f30;
LAB_01d32170:
  if (-1 < (int)uVar37) {
    lVar21 = uVar37 + (long)puVar19;
    goto LAB_01d321e8;
  }
  if ((uVar37 != 0xffffffff) || (lVar21 = (long)puVar19 - uVar23, lVar21 == 0)) goto LAB_01d321e4;
  lVar1 = 0xc;
  if (*(char *)(lVar21 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar21 == 0) goto LAB_01d321e4;
  uVar23 = (ulong)*(ushort *)(lVar21 + 8);
  *(undefined4 *)(puVar9 + 0x48) = 0xfffffffe;
  if (uVar23 == 0) goto LAB_01d321e4;
  puVar24 = (uint *)(lVar1 + lVar21 + 4);
  while (puVar24[-1] != 0x34c8eed5) {
    puVar24 = puVar24 + 2;
    uVar23 = uVar23 - 1;
    if (uVar23 == 0) goto LAB_01d321e4;
  }
  uVar37 = 0;
  if (*puVar24 != 0xffffffff) {
    uVar37 = (ulong)*puVar24;
  }
  *(int *)(puVar9 + 0x48) = (int)uVar37;
  uVar23 = (ulong)*puVar19;
  if (*puVar19 == 0) goto LAB_01d321e4;
  goto LAB_01d32170;
LAB_01d321e4:
  lVar21 = 0;
LAB_01d321e8:
  lVar1 = *(long *)PTR_PTR_04bc0668;
  if (lVar21 != 0) {
    lVar1 = lVar21;
  }
  uVar10 = FUN_006bd550(lVar1,0);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
  puVar19 = (uint *)FUN_0079e770(lVar31,&local_98);
  if (puVar19 == (uint *)0x0) goto LAB_01d3252c;
  *puVar3 = 1;
  uVar11 = *puVar19;
  if (uVar11 != 0) {
    cVar26 = *PTR_DAT_04bb40b0;
    do {
      if (cVar26 == '\0') {
        cVar26 = '\x01';
        *PTR_DAT_04bb40b0 = 1;
        puVar7 = PTR_DAT_04bb40b8;
        *(undefined8 *)PTR_DAT_04bb40b8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *(undefined4 *)(puVar7 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x98) = 0xffffffffffffffff;
        uVar11 = *puVar19;
      }
      else {
        uVar34 = *(uint *)(PTR_DAT_04bb40b8 + 0x58);
        if (-1 < (int)uVar34) {
          puVar25 = (ushort *)((ulong)uVar34 + (long)puVar19);
          if (puVar25 != (ushort *)0x0) goto LAB_01d324f0;
          uVar34 = 0;
          goto LAB_01d31f90;
        }
        if (uVar34 != 0xffffffff) break;
      }
      puVar24 = (uint *)(ulong)uVar11;
      uVar34 = 0;
      if ((puVar24 == (uint *)0x0) || (puVar19 == puVar24)) goto LAB_01d31f90;
      lVar21 = 0xc;
      if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar19 + (lVar21 - (long)puVar24);
      if (lVar21 == 0) break;
      uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
      *(undefined4 *)(PTR_DAT_04bb40b8 + 0x58) = 0xfffffffe;
      if (uVar23 == 0) break;
      piVar32 = (int *)(lVar21 + 4);
      while (piVar32[-1] != 0x54706054) {
        uVar34 = 0;
        piVar32 = piVar32 + 2;
        uVar23 = uVar23 - 1;
        if (uVar23 == 0) goto LAB_01d31f90;
      }
      uVar34 = 0;
      iVar30 = 0;
      if (*piVar32 != -1) {
        iVar30 = *piVar32;
      }
      *(int *)(PTR_DAT_04bb40b8 + 0x58) = iVar30;
      uVar11 = *puVar19;
      if (uVar11 == 0) goto LAB_01d31f90;
    } while( true );
  }
  goto LAB_01d31f8c;
  while( true ) {
    if (uVar23 != 0xffffffff) goto LAB_01d323bc;
    lVar1 = (long)puVar19 - (ulong)uVar11;
    lVar21 = 0;
    if (lVar1 == 0) break;
    lVar35 = 0xc;
    if (*(char *)(lVar1 + 10) != '\0') {
      lVar35 = 0x1c;
    }
    if (lVar35 + lVar1 == 0) goto LAB_01d323bc;
    uVar23 = (ulong)*(ushort *)(lVar1 + 8);
    *(undefined4 *)(puVar9 + 0x48) = 0xfffffffe;
    lVar21 = 0;
    if (uVar23 == 0) break;
    puVar24 = (uint *)(lVar35 + lVar1 + 4);
    while (puVar24[-1] != 0x34c8eed5) {
      puVar24 = puVar24 + 2;
      uVar23 = uVar23 - 1;
      if (uVar23 == 0) {
        lVar21 = 0;
        goto LAB_01d323c0;
      }
    }
    lVar21 = 0;
    uVar23 = 0;
    if (*puVar24 != 0xffffffff) {
      uVar23 = (ulong)*puVar24;
    }
    *(int *)(puVar9 + 0x48) = (int)uVar23;
    uVar11 = *puVar19;
    if (uVar11 == 0) break;
LAB_01d3233c:
    if (-1 < (int)uVar23) {
      lVar21 = uVar23 + (long)puVar19;
      break;
    }
  }
LAB_01d323c0:
  lVar1 = *(long *)PTR_PTR_04bc0668;
  if (lVar21 != 0) {
    lVar1 = lVar21;
  }
  uVar10 = FUN_006bd550(lVar1,0);
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar10);
  puVar19 = (uint *)FUN_0079e4d0(lVar22,&local_98);
  if (puVar19 == (uint *)0x0) {
LAB_01d3252c:
    uVar16 = 0;
    goto LAB_01d314b8;
  }
  *puVar3 = 2;
  uVar11 = *puVar19;
  if (uVar11 != 0) {
    cVar26 = *PTR_DAT_04bb40a0;
    do {
      puVar7 = PTR_DAT_04bb40a0;
      if (cVar26 == '\0') {
        cVar26 = '\x01';
        *(undefined8 *)puVar8 = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar8 + 0x78) = 0xffffffff;
        *puVar7 = 1;
        *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
        uVar11 = *puVar19;
      }
      else {
        uVar34 = *(uint *)(puVar8 + 0x40);
        if (-1 < (int)uVar34) {
          puVar25 = (ushort *)((ulong)uVar34 + (long)puVar19);
          if (puVar25 != (ushort *)0x0) goto LAB_01d324f0;
          break;
        }
        if (uVar34 != 0xffffffff) break;
      }
      puVar24 = (uint *)(ulong)uVar11;
      uVar34 = 0;
      if ((puVar24 == (uint *)0x0) || (uVar34 = 0, puVar19 == puVar24)) goto LAB_01d31f90;
      lVar21 = 0xc;
      if (*(char *)((long)puVar19 + (10 - (long)puVar24)) != '\0') {
        lVar21 = 0x1c;
      }
      lVar21 = (long)puVar19 + (lVar21 - (long)puVar24);
      if (lVar21 == 0) break;
      uVar23 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar24));
      *(undefined4 *)(puVar8 + 0x40) = 0xfffffffe;
      uVar34 = 0;
      if (uVar23 == 0) goto LAB_01d31f90;
      piVar32 = (int *)(lVar21 + 4);
      while (piVar32[-1] != 0x54706054) {
        piVar32 = piVar32 + 2;
        uVar23 = uVar23 - 1;
        if (uVar23 == 0) {
          uVar34 = 0;
          goto LAB_01d31f90;
        }
      }
      iVar30 = 0;
      if (*piVar32 != -1) {
        iVar30 = *piVar32;
      }
      *(int *)(puVar8 + 0x40) = iVar30;
      uVar11 = *puVar19;
    } while (uVar11 != 0);
  }
LAB_01d31f8c:
  uVar34 = 0;
LAB_01d31f90:
  puVar3[1] = uVar34;
  puVar38 = puVar38 + 1;
  uVar17 = uVar17 + 1;
  uVar11 = (uint)puVar36[3];
  if (0x14 < uVar11) {
    uVar11 = 0;
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar11);
  puVar3[2] = uVar11;
  if (puVar38 == puVar14) goto LAB_01d3253c;
  goto LAB_01d31fc0;
LAB_01d324f0:
  uVar34 = (uint)*puVar25;
  goto LAB_01d31f90;
}

