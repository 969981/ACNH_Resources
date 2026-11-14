
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01da9890(void)

{
  uint *puVar1;
  undefined *puVar2;
  char *pcVar3;
  uint *puVar4;
  byte *pbVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  undefined4 *puVar23;
  byte *pbVar24;
  long *plVar25;
  ulong uVar26;
  undefined1 *puVar27;
  byte bVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  char cVar32;
  long lVar33;
  undefined *puVar34;
  undefined *local_108;
  char *local_100;
  undefined8 uStack_f8;
  int local_e4;
  undefined4 local_e0;
  undefined1 local_d4 [4];
  byte local_d0 [4];
  byte local_cc [4];
  undefined *local_c8;
  char *local_c0;
  undefined8 *local_b8;
  undefined8 local_b0;
  byte local_a4 [4];
  byte local_a0 [4];
  byte local_9c [4];
  byte local_98 [4];
  byte local_94 [4];
  undefined8 local_90 [3];
  undefined8 local_78;
  bool local_6c [12];
  
  iVar16 = *(int *)((*(long **)PTR_DAT_04bb27d0)[2] + 0xaa0);
  lVar29 = *(long *)PTR_DAT_04bb39b0;
  if (lVar29 == 0) {
    local_98[0] = *PTR_DAT_04bb32e0;
    if (7 < local_98[0]) goto LAB_01da9930;
LAB_01da9990:
    if (7 < local_98[0]) {
      local_98[0] = 0xff;
    }
  }
  else {
    pbVar24 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar29 + 0x15c) != 0) {
      pbVar24 = (byte *)(lVar29 + 0x158);
    }
    local_98[0] = *pbVar24;
    if ((local_98[0] < 8) ||
       (((*(int *)(lVar29 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (local_98[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), local_98[0] < 8))))
    goto LAB_01da9990;
LAB_01da9930:
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    pbVar24 = PTR_DAT_04bb5038;
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar24 = (byte *)(lVar29 + 0x471);
      }
    }
    local_98[0] = *pbVar24;
    if (7 < local_98[0]) {
      local_98[0] = *PTR_DAT_04bb5038;
      goto LAB_01da9990;
    }
  }
  FUN_0264f5a0(local_98);
  FUN_0081686c(*(undefined8 *)PTR_DAT_04bb3448);
  local_9c[0] = local_98[0];
  if (7 < local_98[0]) {
    local_9c[0] = 0xff;
  }
  lVar29 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_9c,1);
  if (lVar29 != 0) {
    lVar22 = lVar29 + 0x194b0;
    if (*(long *)(lVar29 + 0x194b8) == 0) {
      lVar22 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    plVar25 = (long *)(lVar22 + 0x2ad28);
    lVar29 = *(long *)(lVar22 + 0x2ad48);
    if (lVar29 == 0) {
      FUN_02754a90(*(long *)(lVar22 + 0x2ad30) + *plVar25);
    }
    else {
      if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
        uVar17 = 0;
        plVar18 = *(long **)(lVar29 + 0x20);
joined_r0x01daa5b8:
        if (plVar18 != (long *)0x0) {
          local_108 = (undefined *)*plVar25;
          local_100 = *(char **)(lVar22 + 0x2ad30);
          uStack_f8 = 0x100;
          (**(code **)(*plVar18 + 0x20))(plVar18,&local_108);
        }
      }
      else {
        uVar17 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
        uVar17 = uVar17 & 0xffffffff;
        if (*(long *)(lVar22 + 0x2ad48) != 0) {
          plVar18 = *(long **)(*(long *)(lVar22 + 0x2ad48) + 0x20);
          goto joined_r0x01daa5b8;
        }
      }
      FUN_02754a90(*(long *)(lVar22 + 0x2ad30) + *plVar25);
      if ((((uVar17 & 1) != 0) && (*(long *)(lVar22 + 0x2ad48) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar22 + 0x2ad48) + 0x18),
         puVar19 != (undefined8 *)0x0)) {
        (**(code **)*puVar19)();
      }
    }
  }
  puVar11 = PTR_DAT_04bc2f38;
  puVar10 = PTR_DAT_04bc2da0;
  puVar2 = PTR_DAT_04bb5010;
  puVar9 = PTR_DAT_04bb4778;
  puVar34 = PTR_DAT_04bb4760;
  if (iVar16 == 3) {
    if (*(long *)PTR_DAT_04bb6270 != 0) {
      FUN_00a715d0(*(long *)PTR_DAT_04bb6270,1);
    }
    lVar29 = *(long *)puVar9;
    if (lVar29 != 0) {
      memset((void *)(lVar29 + 0x2a58),0,0x4800);
      *(undefined2 *)(lVar29 + 0x87e0) = 0;
      *(undefined4 *)(lVar29 + 0x9150) = 0;
    }
    FUN_022c0370();
    uVar21 = 0;
    *puVar10 = 0xff;
    do {
      uVar17 = (ulong)uVar21;
      uVar21 = uVar21 + 1;
      lVar29 = (long)(uVar17 << 0x20) >> 0x1a;
      *(undefined8 *)(puVar11 + lVar29 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar11 + lVar29 + 0x20) = 0;
      *(undefined4 *)(puVar11 + lVar29 + 0x30) = 0;
      *(undefined8 *)(puVar11 + lVar29 + 0x34) = 0xffff000000000000;
      puVar11[lVar29 + 0x3e] = 0;
      *(undefined2 *)(puVar11 + lVar29 + 0x3c) = 0;
      puVar9 = PTR_DAT_04bb5018;
    } while (uVar21 != 0x14);
    DAT_0514f758 = 0xeff;
    DAT_04c47fa4 = 0xe;
    lVar29 = *(long *)puVar34;
    uVar17 = 0;
    DAT_0514f75a = 0;
    uVar26 = 0;
    do {
      puVar19 = (undefined8 *)(lVar29 + (long)(int)uVar26 * 0x15);
      if ((*(byte *)((long)puVar19 + 7) & 0x30) != 0x20) {
        lVar22 = lVar29 + 0x8f8 + uVar26 * 0x28;
        if (0x6c < (uint)uVar17) {
          lVar22 = lVar29 + 0x8f8;
        }
        uVar31 = *(undefined8 *)(lVar22 + 8);
        uVar30 = *(undefined8 *)(lVar22 + 0x10);
        *(undefined8 *)((long)puVar19 + 0xd) = *(undefined8 *)(lVar22 + 0x15);
        *puVar19 = uVar31;
        puVar19[1] = uVar30;
      }
      uVar17 = uVar26 + 1;
      uVar26 = uVar17 & 0xffffffff;
    } while ((int)uVar17 != 0x6d);
    bVar28 = *puVar9;
    iVar13 = 0;
    do {
      lVar22 = lVar29 + (long)iVar13 * 0x15;
      iVar13 = iVar13 + 1;
      *(byte *)(lVar22 + 6) = bVar28 >> 6 | bVar28 << 2;
      *(byte *)(lVar22 + 8) = *(byte *)(lVar22 + 8) & 0xc0;
      *(byte *)(lVar22 + 5) = *(byte *)(lVar22 + 5) & 3 | bVar28 << 2;
      *(byte *)(lVar22 + 7) = *(byte *)(lVar22 + 7) & 0xc | bVar28 >> 6;
    } while (iVar13 != 0x6d);
    lVar22 = 0;
    plVar25 = (long *)(lVar29 + 0x900);
    do {
      plVar18 = (long *)(lVar29 + lVar22);
      if ((*plVar25 != *plVar18 || plVar25[1] != plVar18[1]) ||
          *(long *)((long)plVar25 + 0xd) != *(long *)((long)plVar18 + 0xd)) {
        lVar33 = *plVar18;
        lVar6 = plVar18[1];
        *(undefined8 *)((long)plVar25 + 0xd) = *(undefined8 *)((long)plVar18 + 0xd);
        *plVar25 = lVar33;
        plVar25[1] = lVar6;
      }
      lVar22 = lVar22 + 0x15;
      plVar25 = plVar25 + 5;
    } while (lVar22 != 0x8dc);
    iVar13 = 0;
    do {
      lVar22 = (long)iVar13;
      iVar13 = iVar13 + 1;
      *(byte *)(lVar29 + 0x1a00 + lVar22) = *(byte *)(lVar29 + 0x1a00 + lVar22) & 0xfe;
    } while (iVar13 != 0x6d);
    *(undefined8 *)(lVar29 + 0x1a78) = 0;
    uVar17 = 0;
    *(undefined8 *)(lVar29 + 0x1a70) = 0;
    lVar29 = *(long *)PTR_DAT_04bb4768;
    do {
      uVar26 = uVar17 << 1;
      uVar8 = uVar17 >> 0x1f;
      uVar21 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar21;
      *(undefined2 *)(lVar29 + 0x30 + (-uVar8 & 0xfffffffe00000000 | uVar26)) = 0;
    } while (uVar21 != 0x6d);
    lVar29 = 0;
    iVar13 = 0;
    puVar23 = *(undefined4 **)PTR_DAT_04bb5010;
    *puVar23 = 0;
    *(undefined *)(puVar23 + 1) = *puVar9;
    *(undefined8 *)(puVar23 + 2) = 0xffffffff;
    lVar22 = *(long *)puVar34;
    lVar33 = *(long *)PTR_DAT_04bbaed0;
    do {
      FUN_020e9d20(lVar22 + (long)iVar13 * 0x15,lVar33 + lVar29);
      FUN_020ea498(lVar22,iVar13,1,0);
      lVar29 = lVar29 + 6;
      iVar13 = iVar13 + 1;
    } while (lVar29 != 0x3c);
  }
  else {
    lVar22 = *(long *)PTR_DAT_04bb30a0;
    lVar29 = *(long *)PTR_DAT_04bb46b0;
    if (lVar29 == 0) {
LAB_01da9df4:
      lVar29 = 0;
      plVar25 = _DAT_00000028;
      if (_DAT_00000028 != (long *)0x0) goto LAB_01da9e00;
LAB_01da9e64:
      FUN_00930750(lVar22 + 0x651f0,*(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8) + 0x1e35f0);
    }
    else {
      puVar19 = *(undefined8 **)(lVar29 + 0x10);
      if ((*(byte *)(lVar29 + 0x453) & 1) == 0) {
        lVar33 = (**(code **)(*(long *)*puVar19 + 0x38))();
        lVar29 = 0;
        if (lVar33 != 0) {
          lVar29 = lVar33 + 0x70;
        }
        plVar25 = *(long **)(lVar29 + 0x28);
      }
      else {
        if ((puVar19 == (undefined8 *)0x0) || ((long *)puVar19[0x26] == (long *)0x0))
        goto LAB_01da9df4;
        lVar29 = (**(code **)(*(long *)puVar19[0x26] + 0x38))();
        plVar25 = *(long **)(lVar29 + 0x28);
      }
      if (plVar25 == (long *)0x0) goto LAB_01da9e64;
LAB_01da9e00:
      if ((undefined8 *)*plVar25 == (undefined8 *)0x0) goto LAB_01da9e64;
      uVar17 = (*(code *)**(undefined8 **)*plVar25)();
      FUN_00930750(lVar22 + 0x651f0,*(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8) + 0x1e35f0);
      if ((((uVar17 & 1) != 0) && (*(long *)(lVar29 + 0x28) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar29 + 0x28) + 8), puVar19 != (undefined8 *)0x0)) {
        (**(code **)*puVar19)();
      }
    }
    if (*(long *)PTR_DAT_04bb6270 != 0) {
      FUN_00a715d0(*(long *)PTR_DAT_04bb6270,1);
    }
    lVar29 = *(long *)puVar9;
    if (lVar29 != 0) {
      memset((void *)(lVar29 + 0x2a58),0,0x4800);
      *(undefined2 *)(lVar29 + 0x87e0) = 0;
      *(undefined4 *)(lVar29 + 0x9150) = 0;
    }
    FUN_022c0370();
    uVar21 = 0;
    *PTR_DAT_04bc2da0 = 0xff;
    do {
      uVar17 = (ulong)uVar21;
      uVar21 = uVar21 + 1;
      lVar29 = (long)(uVar17 << 0x20) >> 0x1a;
      *(undefined8 *)(puVar11 + lVar29 + 8) = 0xffffffffffffffff;
      *(undefined8 *)(puVar11 + lVar29 + 0x20) = 0;
      *(undefined4 *)(puVar11 + lVar29 + 0x30) = 0;
      *(undefined8 *)(puVar11 + lVar29 + 0x34) = 0xffff000000000000;
      puVar11[lVar29 + 0x3e] = 0;
      *(undefined2 *)(puVar11 + lVar29 + 0x3c) = 0;
      puVar9 = PTR_DAT_04bb5018;
    } while (uVar21 != 0x14);
    DAT_0514f75a = 0;
    DAT_04c47fa4 = 0xe;
    DAT_0514f758 = 0xeff;
    lVar29 = *(long *)puVar34;
    uVar17 = 0;
    uVar26 = 0;
    do {
      puVar19 = (undefined8 *)(lVar29 + (long)(int)uVar26 * 0x15);
      if ((*(byte *)((long)puVar19 + 7) & 0x30) != 0x20) {
        lVar22 = lVar29 + 0x8f8 + uVar26 * 0x28;
        if (0x6c < (uint)uVar17) {
          lVar22 = lVar29 + 0x8f8;
        }
        uVar31 = *(undefined8 *)(lVar22 + 8);
        uVar30 = *(undefined8 *)(lVar22 + 0x10);
        *(undefined8 *)((long)puVar19 + 0xd) = *(undefined8 *)(lVar22 + 0x15);
        *puVar19 = uVar31;
        puVar19[1] = uVar30;
      }
      uVar17 = uVar26 + 1;
      uVar26 = uVar17 & 0xffffffff;
    } while ((int)uVar17 != 0x6d);
    bVar28 = *puVar9;
    iVar13 = 0;
    do {
      lVar22 = lVar29 + (long)iVar13 * 0x15;
      iVar13 = iVar13 + 1;
      *(byte *)(lVar22 + 6) = bVar28 >> 6 | bVar28 << 2;
      *(byte *)(lVar22 + 8) = *(byte *)(lVar22 + 8) & 0xc0;
      *(byte *)(lVar22 + 5) = *(byte *)(lVar22 + 5) & 3 | bVar28 << 2;
      *(byte *)(lVar22 + 7) = *(byte *)(lVar22 + 7) & 0xc | bVar28 >> 6;
    } while (iVar13 != 0x6d);
    lVar22 = 0;
    plVar25 = (long *)(lVar29 + 0x900);
    do {
      plVar18 = (long *)(lVar29 + lVar22);
      if ((*plVar25 != *plVar18 || plVar25[1] != plVar18[1]) ||
          *(long *)((long)plVar25 + 0xd) != *(long *)((long)plVar18 + 0xd)) {
        lVar33 = *plVar18;
        lVar6 = plVar18[1];
        *(undefined8 *)((long)plVar25 + 0xd) = *(undefined8 *)((long)plVar18 + 0xd);
        *plVar25 = lVar33;
        plVar25[1] = lVar6;
      }
      lVar22 = lVar22 + 0x15;
      plVar25 = plVar25 + 5;
    } while (lVar22 != 0x8dc);
    iVar13 = 0;
    do {
      lVar22 = (long)iVar13;
      iVar13 = iVar13 + 1;
      *(byte *)(lVar29 + 0x1a00 + lVar22) = *(byte *)(lVar29 + 0x1a00 + lVar22) & 0xfe;
    } while (iVar13 != 0x6d);
    *(undefined8 *)(lVar29 + 0x1a78) = 0;
    uVar17 = 0;
    *(undefined8 *)(lVar29 + 0x1a70) = 0;
    lVar29 = *(long *)PTR_DAT_04bb4768;
    do {
      uVar26 = uVar17 << 1;
      uVar8 = uVar17 >> 0x1f;
      uVar21 = (int)uVar17 + 1;
      uVar17 = (ulong)uVar21;
      *(undefined2 *)(lVar29 + 0x30 + (-uVar8 & 0xfffffffe00000000 | uVar26)) = 0;
    } while (uVar21 != 0x6d);
    puVar23 = *(undefined4 **)puVar2;
    lVar29 = 0;
    iVar13 = 0;
    *puVar23 = 0;
    *(undefined *)(puVar23 + 1) = *puVar9;
    *(undefined8 *)(puVar23 + 2) = 0xffffffff;
    lVar22 = *(long *)puVar34;
    lVar33 = *(long *)PTR_DAT_04bbaed0;
    do {
      FUN_020e9d20(lVar22 + (long)iVar13 * 0x15,lVar33 + lVar29);
      FUN_020ea498(lVar22,iVar13,1,0);
      lVar29 = lVar29 + 6;
      iVar13 = iVar13 + 1;
    } while (lVar29 != 0x3c);
    FUN_0219f990(&DAT_053fe348,0);
    FUN_021c9ab0(&DAT_053fe348);
    FUN_021c9dac(&DAT_053fe348,0);
    lVar29 = *(long *)PTR_DAT_04bbaed0;
    if (lVar29 != 0) {
      FUN_021b6d80(&DAT_053fe348,*(undefined2 *)(lVar29 + 0x42));
      FUN_021b6f50(&DAT_053fe348,*(undefined2 *)(lVar29 + 0x44));
      FUN_021be300(&DAT_053fe348,*(undefined2 *)(lVar29 + 0x46));
      FUN_021bf6b0(&DAT_053fe348,lVar29 + 0x48);
      FUN_021bf890(&DAT_053fe348,lVar29 + 0x5c);
    }
    FUN_021a4a8c(&DAT_053fe348);
    FUN_021af274(&DAT_053fe348);
    FUN_021c2d3c(&DAT_053fe348,local_98);
  }
  puVar34 = PTR_DAT_04bb2020;
  local_108 = PTR_DAT_04bb2020 + 0x10;
  local_100 = "MainmenuFriendList";
  iVar13 = FUN_0274bce0(local_98,&local_108);
  puVar9 = PTR_DAT_04bc1220;
  if (iVar13 != 0) {
    local_c8 = (undefined *)0x0;
    uVar14 = FUN_01df3070(&local_c8);
    FUN_02645730(&local_108,local_98);
    uVar21 = 0;
    puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
    do {
      lVar29 = *(long *)*puVar19;
      bVar28 = *(byte *)(lVar29 + 0x473);
      if ((long)(char)bVar28 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar29 + 0x48);
        puVar4 = puVar1 + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
        if (7 < bVar28) {
          puVar4 = puVar1;
        }
        pbVar24 = puVar9;
        if ((*puVar4 & 8) != 0) {
          pbVar24 = (byte *)(lVar29 + 0x473);
        }
        if ((((uVar21 ^ 0xffffffff) & 0xff) != 0) &&
           ((uint)*pbVar24 != (uVar21 & 0xff) && (*puVar4 & 8) != 0)) {
          uVar17 = (long)(char)uVar21 & 0xffffffff;
          puVar4 = puVar1 + uVar17 * 0x20;
          if ((uVar21 & 0xf8) != 0) {
            puVar4 = puVar1;
          }
          if ((*puVar4 >> 3 & 1) != 0) {
            lVar29 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + uVar17 * 0x30;
            if ((uVar21 & 0xf8) != 0) {
              lVar29 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
            }
            if (*(char *)(lVar29 + 0x28) != '\0' && ((uVar14 ^ 0xffffffff) & 1) == 0) {
              if (local_c8 != *(undefined **)(lVar29 + 8)) {
                puVar1 = (uint *)PTR_DAT_04bb32e0;
                if ((*puVar4 & 1) != 0) {
                  puVar1 = puVar4 + 0x1e;
                }
                local_a0[0] = (byte)*puVar1;
                if (7 < local_a0[0]) {
                  local_a0[0] = 0xff;
                }
                lVar22 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_a0,1);
                puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
                if (lVar22 != 0) {
                  if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
                     (puVar19 = (undefined8 *)**(long **)(lVar22 + 0x28),
                     puVar19 == (undefined8 *)0x0)) {
                    uVar26 = 0;
                  }
                  else {
                    uVar26 = (**(code **)*puVar19)();
                    uVar26 = uVar26 & 0xffffffff;
                  }
                  lVar33 = *(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8);
                  lVar6 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + uVar17 * 0x30;
                  if ((uVar21 & 0xf8) != 0) {
                    lVar6 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
                  }
                  FUN_02645cc0(&local_108,lVar29,(long *)(lVar29 + 8),lVar33 + 0xc138,
                               lVar33 + 0x1d18,*(undefined1 *)(lVar6 + 0x2a));
                  puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
                  if ((((uVar26 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
                     (puVar20 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8),
                     puVar20 != (undefined8 *)0x0)) {
                    (**(code **)*puVar20)();
                    puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
                  }
                }
              }
            }
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != 8);
    puVar34 = PTR_DAT_04bb2020;
  }
  lVar29 = **(long **)PTR_DAT_04bb27d0;
  bVar28 = *(byte *)(lVar29 + 0x473);
  if ((long)(char)bVar28 == 0xffffffffffffffff) {
    uVar14 = 0;
    uVar21 = 0;
  }
  else {
    puVar1 = (uint *)(lVar29 + 0x48);
    puVar4 = puVar1 + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
    if (7 < bVar28) {
      puVar4 = puVar1;
    }
    uVar21 = *puVar4;
    pcVar3 = puVar9;
    if ((uVar21 & 8) != 0) {
      pcVar3 = (char *)(lVar29 + 0x473);
    }
    cVar32 = *pcVar3;
    if (cVar32 == '\0' || (uVar21 & 8) == 0) {
      uVar14 = 0;
    }
    else {
      uVar14 = *(byte *)puVar1 >> 3 & 1;
    }
    if (cVar32 != '\x01' && (uVar21 & 8) != 0) {
      uVar14 = *(uint *)(lVar29 + 200) >> 2 & 2 | uVar14;
    }
    if (cVar32 != '\x02' && (uVar21 & 8) != 0) {
      uVar14 = uVar14 | *(uint *)(lVar29 + 0x148) >> 1 & 4;
    }
    if (cVar32 != '\x03' && (uVar21 & 8) != 0) {
      uVar14 = uVar14 | *(uint *)(lVar29 + 0x1c8) & 8;
    }
    if (cVar32 != '\x04' && (uVar21 & 8) != 0) {
      uVar14 = uVar14 | (*(uint *)(lVar29 + 0x248) & 8) << 1;
    }
    if (cVar32 != '\x05' && (uVar21 & 8) != 0) {
      uVar14 = uVar14 | (*(uint *)(lVar29 + 0x2c8) & 8) << 2;
    }
    if (cVar32 != '\x06' && (uVar21 & 8) != 0) {
      uVar14 = uVar14 | (*(uint *)(lVar29 + 0x348) & 8) << 3;
    }
    if (cVar32 == '\a' || (uVar21 & 8) == 0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (*(uint *)(lVar29 + 0x3c8) & 8) << 4;
    }
  }
  FUN_01c95210(*(undefined8 *)(*(long *)PTR_DAT_04bb21d0 + 0xf88),uVar21 | uVar14);
  if (iVar16 != 3) {
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar28 == 0xffffffffffffffff) {
      cVar32 = *puVar9;
    }
    else {
      puVar1 = (uint *)(lVar29 + 0x48);
      puVar4 = puVar1 + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar4 = puVar1;
      }
      uVar21 = *puVar4 & 8;
      pcVar3 = puVar9;
      if (uVar21 != 0) {
        pcVar3 = (char *)(lVar29 + 0x472);
      }
      cVar32 = *pcVar3;
      pcVar3 = puVar9;
      if (uVar21 != 0) {
        pcVar3 = (char *)(lVar29 + 0x473);
      }
      if ((*pcVar3 != '\0' && uVar21 != 0) && ((*(byte *)puVar1 >> 3 & 1) != 0)) {
        local_108 = puVar34 + 0x10;
        if (cVar32 == '\0') {
          local_100 = "PE_MultiPlay_GotoIsland";
        }
        else {
          local_100 = "PE_Multiplay_WithOtherVisitor";
        }
        uVar30 = *(undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
        uVar31 = *(undefined8 *)PTR_DAT_04bb49a0;
        uVar15 = FUN_006bd550(local_100,0);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
        uVar31 = FUN_01b5b4b0(uVar31,&local_c8);
        FUN_01b66700(&local_108,uVar30,uVar31,local_98,0);
      }
    }
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      pcVar3 = puVar9;
      if ((*puVar1 & 8) != 0) {
        pcVar3 = (char *)(lVar29 + 0x473);
      }
      if ((*pcVar3 != '\x01' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar29 + 200) >> 3 & 1) != 0)) {
        local_108 = puVar34 + 0x10;
        if (cVar32 == '\x01') {
          local_100 = "PE_MultiPlay_GotoIsland";
        }
        else {
          local_100 = "PE_Multiplay_WithOtherVisitor";
        }
        uVar30 = *(undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0x108);
        uVar31 = *(undefined8 *)PTR_DAT_04bb49a0;
        uVar15 = FUN_006bd550(local_100,0);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
        uVar31 = FUN_01b5b4b0(uVar31,&local_c8);
        FUN_01b66700(&local_108,uVar30,uVar31,local_98,0);
      }
    }
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      pcVar3 = puVar9;
      if ((*puVar1 & 8) != 0) {
        pcVar3 = (char *)(lVar29 + 0x473);
      }
      if ((*pcVar3 != '\x02' && (*puVar1 & 8) != 0) && ((*(byte *)(lVar29 + 0x148) >> 3 & 1) != 0))
      {
        local_108 = puVar34 + 0x10;
        if (cVar32 == '\x02') {
          local_100 = "PE_MultiPlay_GotoIsland";
        }
        else {
          local_100 = "PE_Multiplay_WithOtherVisitor";
        }
        uVar30 = *(undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0x138);
        uVar31 = *(undefined8 *)PTR_DAT_04bb49a0;
        uVar15 = FUN_006bd550(local_100,0);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
        uVar31 = FUN_01b5b4b0(uVar31,&local_c8);
        FUN_01b66700(&local_108,uVar30,uVar31,local_98,0);
      }
    }
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      pcVar3 = puVar9;
      if ((*puVar1 & 8) != 0) {
        pcVar3 = (char *)(lVar29 + 0x473);
      }
      if (((*pcVar3 != '\x03') && ((*puVar1 & 8) != 0)) &&
         ((*(byte *)(lVar29 + 0x1c8) >> 3 & 1) != 0)) {
        local_108 = puVar34 + 0x10;
        if (cVar32 == '\x03') {
          local_100 = "PE_MultiPlay_GotoIsland";
        }
        else {
          local_100 = "PE_Multiplay_WithOtherVisitor";
        }
        uVar30 = *(undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0x168);
        uVar31 = *(undefined8 *)PTR_DAT_04bb49a0;
        uVar15 = FUN_006bd550(local_100,0);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
        uVar31 = FUN_01b5b4b0(uVar31,&local_c8);
        FUN_01b66700(&local_108,uVar30,uVar31,local_98,0);
      }
    }
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      pcVar3 = puVar9;
      if ((*puVar1 & 8) != 0) {
        pcVar3 = (char *)(lVar29 + 0x473);
      }
      if (((*pcVar3 != '\x04') && ((*puVar1 & 8) != 0)) &&
         ((*(byte *)(lVar29 + 0x248) >> 3 & 1) != 0)) {
        local_108 = puVar34 + 0x10;
        if (cVar32 == '\x04') {
          local_100 = "PE_MultiPlay_GotoIsland";
        }
        else {
          local_100 = "PE_Multiplay_WithOtherVisitor";
        }
        uVar30 = *(undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0x198);
        uVar31 = *(undefined8 *)PTR_DAT_04bb49a0;
        uVar15 = FUN_006bd550(local_100,0);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
        uVar31 = FUN_01b5b4b0(uVar31,&local_c8);
        FUN_01b66700(&local_108,uVar30,uVar31,local_98,0);
      }
    }
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      pcVar3 = puVar9;
      if ((*puVar1 & 8) != 0) {
        pcVar3 = (char *)(lVar29 + 0x473);
      }
      if (((*pcVar3 != '\x05') && ((*puVar1 & 8) != 0)) &&
         ((*(byte *)(lVar29 + 0x2c8) >> 3 & 1) != 0)) {
        local_108 = puVar34 + 0x10;
        if (cVar32 == '\x05') {
          local_100 = "PE_MultiPlay_GotoIsland";
        }
        else {
          local_100 = "PE_Multiplay_WithOtherVisitor";
        }
        uVar30 = *(undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0x1c8);
        uVar31 = *(undefined8 *)PTR_DAT_04bb49a0;
        uVar15 = FUN_006bd550(local_100,0);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
        uVar31 = FUN_01b5b4b0(uVar31,&local_c8);
        FUN_01b66700(&local_108,uVar30,uVar31,local_98,0);
      }
    }
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      pcVar3 = puVar9;
      if ((*puVar1 & 8) != 0) {
        pcVar3 = (char *)(lVar29 + 0x473);
      }
      if (((*pcVar3 != '\x06') && ((*puVar1 & 8) != 0)) &&
         ((*(byte *)(lVar29 + 0x348) >> 3 & 1) != 0)) {
        local_108 = puVar34 + 0x10;
        if (cVar32 == '\x06') {
          local_100 = "PE_MultiPlay_GotoIsland";
        }
        else {
          local_100 = "PE_Multiplay_WithOtherVisitor";
        }
        uVar30 = *(undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0x1f8);
        uVar31 = *(undefined8 *)PTR_DAT_04bb49a0;
        uVar15 = FUN_006bd550(local_100,0);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
        uVar31 = FUN_01b5b4b0(uVar31,&local_c8);
        FUN_01b66700(&local_108,uVar30,uVar31,local_98,0);
      }
    }
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      pcVar3 = puVar9;
      if ((*puVar1 & 8) != 0) {
        pcVar3 = (char *)(lVar29 + 0x473);
      }
      if (((*pcVar3 != '\a') && ((*puVar1 & 8) != 0)) && ((*(byte *)(lVar29 + 0x3c8) >> 3 & 1) != 0)
         ) {
        local_108 = puVar34 + 0x10;
        if (cVar32 == '\a') {
          local_100 = "PE_MultiPlay_GotoIsland";
        }
        else {
          local_100 = "PE_Multiplay_WithOtherVisitor";
        }
        uVar30 = *(undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0x228);
        uVar31 = *(undefined8 *)PTR_DAT_04bb49a0;
        uVar15 = FUN_006bd550(local_100,0);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar15);
        uVar31 = FUN_01b5b4b0(uVar31,&local_c8);
        FUN_01b66700(&local_108,uVar30,uVar31,local_98,0);
      }
    }
  }
  uVar21 = 0;
  bVar28 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
  puVar2 = PTR_DAT_04bc3350 + 0x10;
  puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
  do {
    lVar29 = *(long *)*puVar19;
    bVar7 = *(byte *)(lVar29 + 0x473);
    if ((long)(char)bVar7 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48);
      puVar4 = puVar1 + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
      if (7 < bVar7) {
        puVar4 = puVar1;
      }
      pbVar24 = puVar9;
      if ((*puVar4 & 8) != 0) {
        pbVar24 = (byte *)(lVar29 + 0x473);
      }
      if ((((uVar21 ^ 0xffffffff) & 0xff) != 0) &&
         ((uint)*pbVar24 != (uVar21 & 0xff) && (*puVar4 & 8) != 0)) {
        uVar17 = (long)(char)uVar21 & 0xffffffff;
        puVar4 = puVar1 + uVar17 * 0x20;
        if ((uVar21 & 0xf8) != 0) {
          puVar4 = puVar1;
        }
        if ((*puVar4 >> 3 & 1) != 0) {
          puVar20 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + uVar17 * 6;
          if ((uVar21 & 0xf8) != 0) {
            puVar20 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
          }
          if (*(char *)((long)puVar20 + 0x29) != '\0') {
            puVar1 = (uint *)PTR_DAT_04bb32e0;
            if ((*puVar4 & 1) != 0) {
              puVar1 = puVar4 + 0x1e;
            }
            local_a4[0] = (byte)*puVar1;
            if (7 < local_a4[0]) {
              local_a4[0] = 0xff;
            }
            lVar29 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_a4,1);
            puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
            if (lVar29 != 0) {
              if ((*(long **)(lVar29 + 0x17bb0) == (long *)0x0) ||
                 (puVar19 = (undefined8 *)**(long **)(lVar29 + 0x17bb0),
                 puVar19 == (undefined8 *)0x0)) {
                uVar17 = 0;
              }
              else {
                uVar17 = (**(code **)*puVar19)();
                uVar17 = uVar17 & 0xffffffff;
              }
              local_c0 = "net_multiplay_illegal_device_id";
              local_c8 = puVar34 + 0x10;
              FUN_025ffac8(&local_108,&local_c8,local_98);
              local_c0 = (char *)(puVar20 + 1);
              local_b0 = CONCAT44(local_b0._4_4_,bVar28 - 1);
              local_c8 = (undefined *)(*(long *)(lVar29 + 0x17b98) + *(long *)(lVar29 + 0x17b90));
              local_108 = puVar2;
              local_b8 = puVar20;
              FUN_025ba248(&local_108,&local_c8);
              local_108 = puVar2;
              iVar13 = FUN_025ba820(&local_108);
              if (iVar13 == -1) {
LAB_01daad44:
                if (local_e4 == 0) {
                  local_e4 = 1;
                }
              }
              else {
                iVar13 = (**(code **)(local_108 + 0x20))(&local_108);
                local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar13);
                if (0xc < iVar13) goto LAB_01daad44;
              }
              FUN_02601530(&local_108);
              puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
              if ((((uVar17 & 1) != 0) && (*(long *)(lVar29 + 0x17bb0) != 0)) &&
                 (puVar20 = *(undefined8 **)(*(long *)(lVar29 + 0x17bb0) + 8),
                 puVar20 != (undefined8 *)0x0)) {
                (**(code **)*puVar20)();
                puVar19 = (undefined8 *)PTR_DAT_04bb27d0;
              }
            }
          }
        }
      }
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != 8);
  *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) =
       *(uint *)(*(long *)PTR_DAT_04bb26a8 + 0xb389c) | 2;
  FUN_033fb600();
  puVar9 = PTR_DAT_04bb39b0;
  puVar34 = PTR_DAT_04bb2020;
  lVar29 = **(long **)PTR_DAT_04bb27d0;
  bVar28 = *(byte *)(lVar29 + 0x473);
  puVar27 = PTR_DAT_04bc1220;
  if ((long)(char)bVar28 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
    if (7 < bVar28) {
      puVar1 = (uint *)(lVar29 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      puVar27 = (undefined1 *)(lVar29 + 0x473);
    }
  }
  *(undefined1 *)(*(long *)PTR_DAT_04bb4df8 + 0x48a8) = *puVar27;
  FUN_008a3f50(*(undefined8 *)PTR_DAT_04bb27b8);
  if (iVar16 != 3) {
    local_108 = puVar34 + 0x10;
    local_100 = "VisitAnotherIsland";
    FUN_0279a9f0(local_98,&local_108,1);
    FUN_02129e20();
    lVar29 = *(long *)PTR_DAT_04bb30a0;
    *(undefined4 *)(lVar29 + 0x653f4) = 1;
    *(undefined8 *)(lVar29 + 0x653ec) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  }
  uVar17 = FUN_01384830();
  if ((uVar17 & 1) != 0) {
    lVar29 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar29 + 0x473);
    pbVar24 = PTR_DAT_04bb5038;
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar24 = (byte *)(lVar29 + 0x470);
      }
    }
    local_d0[0] = *pbVar24;
    if (7 < local_d0[0]) {
      local_d0[0] = 0xff;
    }
    local_cc[0] = local_d0[0];
    lVar29 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_d0,1);
    if (lVar29 != 0) {
      if ((*(long **)(lVar29 + 0x17bb0) == (long *)0x0) ||
         (puVar19 = (undefined8 *)**(long **)(lVar29 + 0x17bb0), puVar19 == (undefined8 *)0x0)) {
        uVar17 = 0;
      }
      else {
        uVar17 = (**(code **)*puVar19)();
        uVar17 = uVar17 & 0xffffffff;
      }
      local_c8 = puVar34 + 0x10;
      local_c0 = "sys_illegal_land";
      FUN_025ffac8(&local_108,&local_c8,local_98);
      puVar2 = PTR_DAT_04bc3458;
      local_108 = PTR_DAT_04bc3458 + 0x10;
      local_c8 = (undefined *)(*(long *)(lVar29 + 0x17b98) + *(long *)(lVar29 + 0x17b90));
      if (local_cc[0] < 8) {
        local_94[0] = local_cc[0];
        uVar26 = FUN_007b39a4(local_90,local_94);
        if ((uVar26 & 1) == 0) goto LAB_01daafd0;
        local_6c[0] = false;
        iVar13 = nn::account::IsNetworkServiceAccountAvailable(local_6c,(UserHandle *)local_90);
        if (((iVar13 != 0) || (local_6c[0] == false)) ||
           (iVar13 = nn::account::GetNetworkServiceAccountId
                               ((NetworkServiceAccountId *)&local_78,(UserHandle *)local_90),
           iVar13 != 0)) goto LAB_01daafd0;
      }
      else {
LAB_01daafd0:
        local_78 = 0;
      }
      local_c0 = (char *)local_90;
      local_90[0] = local_78;
      local_78 = FUN_026585a0(local_cc);
      local_b8 = &local_78;
      local_b0 = 2;
      FUN_025e0200(&local_108,&local_c8);
      local_108 = puVar2 + 0x10;
      iVar13 = FUN_025e0744(&local_108);
      if (iVar13 == -1) {
LAB_01dab03c:
        if (local_e4 == 0) {
          local_e4 = 1;
        }
      }
      else {
        iVar13 = (**(code **)(local_108 + 0x20))(&local_108);
        local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar13);
        if (0xc < iVar13) goto LAB_01dab03c;
      }
      FUN_02601530(&local_108);
      if ((((uVar17 & 1) != 0) && (*(long *)(lVar29 + 0x17bb0) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar29 + 0x17bb0) + 8), puVar19 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar19)();
      }
    }
  }
  puVar2 = PTR_DAT_04bb4770;
  if (iVar16 != 3) {
    return;
  }
  local_d4[0] = *PTR_DAT_04bb5018;
  FUN_014b1700(*(undefined8 *)PTR_DAT_04bb4770,local_d4);
  pbVar5 = PTR_DAT_04bb32e0;
  lVar29 = *(long *)puVar2;
  lVar22 = *(long *)puVar9;
  pbVar24 = PTR_DAT_04bb32e0;
  if (lVar22 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01dab118;
LAB_01dab184:
    bVar28 = *pbVar24;
    if (7 < bVar28) {
      bVar28 = 0xff;
    }
    local_108 = (undefined *)CONCAT71(local_108._1_7_,bVar28);
  }
  else {
    if (*(int *)(lVar22 + 0x15c) != 0) {
      pbVar24 = (byte *)(lVar22 + 0x158);
    }
    if ((*pbVar24 < 8) ||
       (((*(int *)(lVar22 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar24 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar24 < 8)))) goto LAB_01dab184;
LAB_01dab118:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01dab17c:
      pbVar24 = PTR_DAT_04bb5038;
      goto LAB_01dab184;
    }
    lVar22 = **(long **)PTR_DAT_04bb27d0;
    bVar28 = *(byte *)(lVar22 + 0x473);
    pbVar24 = PTR_DAT_04bb5038;
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar22 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar24 = (byte *)(lVar22 + 0x471);
      }
    }
    bVar28 = *pbVar24;
    bVar12 = 7 < bVar28;
    if (bVar12) {
      bVar28 = 0xff;
    }
    local_108 = (undefined *)CONCAT71(local_108._1_7_,bVar28);
    if (bVar12) goto LAB_01dab17c;
  }
  FUN_014afe60(lVar29,&local_108,lVar29 + 0x40,lVar29 + 0x48);
  plVar25 = *(long **)PTR_DAT_04bb27d0;
  lVar29 = *plVar25;
  bVar28 = *(byte *)(lVar29 + 0x473);
  if ((long)(char)bVar28 != 0xffffffffffffffff) {
    pbVar24 = (byte *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x80;
    if (7 < bVar28) {
      pbVar24 = (byte *)(lVar29 + 0x48);
    }
    if ((((*pbVar24 >> 3 & 1) != 0) && (*(byte *)(lVar29 + 0x472) != bVar28)) &&
       (*(char *)(*(long *)PTR_DAT_04bb27a8 + 0x4b80) != '\x01')) {
      *(char *)(*(long *)PTR_DAT_04bb27a8 + 0x4b80) = '\x01';
    }
  }
  lVar29 = *(long *)puVar9;
  if (lVar29 == 0) {
    bVar28 = *pbVar5;
    if (7 < bVar28) goto LAB_01dab270;
LAB_01dab2d0:
    if (7 < bVar28) {
      bVar28 = 0xff;
    }
    local_78 = CONCAT71(local_78._1_7_,bVar28);
  }
  else {
    if (*(int *)(lVar29 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar29 + 0x158);
    }
    bVar28 = *pbVar5;
    if ((bVar28 < 8) ||
       (((*(int *)(lVar29 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar28 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), bVar28 < 8)))) goto LAB_01dab2d0;
LAB_01dab270:
    lVar29 = *plVar25;
    bVar28 = *(byte *)(lVar29 + 0x473);
    pbVar24 = PTR_DAT_04bb5038;
    if ((long)(char)bVar28 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar28 & 0xffffffffU) * 0x20;
      if (7 < bVar28) {
        puVar1 = (uint *)(lVar29 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar24 = (byte *)(lVar29 + 0x471);
      }
    }
    bVar28 = *pbVar24;
    bVar12 = 7 < bVar28;
    if (bVar12) {
      bVar28 = 0xff;
    }
    local_78 = CONCAT71(local_78._1_7_,bVar28);
    if (bVar12) {
      bVar28 = *PTR_DAT_04bb5038;
      goto LAB_01dab2d0;
    }
  }
  local_90[0] = CONCAT44(local_90[0]._4_4_,1);
  local_c0 = PTR_s_net_multiplay_join_inet_04a85e40;
  local_c8 = puVar34 + 0x10;
  FUN_025ffac8(&local_108,&local_c8,&local_78);
  puVar34 = PTR_DAT_04bc3360 + 0x10;
  local_e0 = (undefined4)local_90[0];
  local_108 = puVar34;
  FUN_025bc8d0(&local_108,&local_c8);
  local_108 = puVar34;
  iVar16 = FUN_025bd470(&local_108);
  if (iVar16 != -1) {
    iVar16 = (**(code **)(local_108 + 0x20))(&local_108);
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,iVar16);
    if (iVar16 < 0xd) goto LAB_01dab378;
  }
  if (local_e4 == 0) {
    local_e4 = 1;
  }
LAB_01dab378:
  FUN_02601530(&local_108);
  return;
}

