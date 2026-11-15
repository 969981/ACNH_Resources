
/* WARNING: Removing unreachable block (ram,0x01dec5c0) */

undefined8 FUN_01dec26c(long param_1,uint param_2,ulong param_3)

{
  MutexType *pMVar1;
  uint *puVar2;
  undefined1 *puVar3;
  ushort uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 *puVar16;
  ulong uVar17;
  ushort *puVar18;
  long *plVar19;
  undefined8 uVar20;
  void *__dest;
  void *pvVar21;
  long lVar22;
  byte *pbVar23;
  long lVar24;
  byte *pbVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  size_t __n;
  long *plVar32;
  long *plVar33;
  long *plVar34;
  byte local_1ec [4];
  undefined *local_1e8;
  ulong local_1e0;
  uint local_1d8;
  long *local_1d0;
  undefined **local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  undefined8 uStack_1b0;
  undefined4 local_1a8;
  undefined *local_1a0;
  undefined1 *puStack_198;
  undefined4 local_190;
  undefined1 local_18c [63];
  undefined1 local_14d;
  undefined *local_148;
  undefined1 *puStack_140;
  undefined4 local_138;
  undefined1 local_134 [63];
  undefined1 local_f5;
  undefined8 local_f0;
  undefined6 uStack_e8;
  undefined2 local_e2;
  undefined6 uStack_e0;
  undefined1 auStack_da [2];
  undefined1 local_d8 [2];
  undefined8 local_d6;
  undefined8 local_ce;
  undefined7 uStack_c6;
  undefined1 local_bf;
  undefined6 uStack_be;
  undefined1 uStack_b8;
  uint local_b4;
  byte local_b0;
  byte local_ac [4];
  undefined4 local_a8 [2];
  long local_a0;
  undefined *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  puVar7 = PTR_DAT_04bb36f0;
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  lVar22 = *(long *)PTR_DAT_04bb36f0;
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar11 = *(uint *)(param_1 + 0x4c);
    if (*(uint *)(lVar22 + 0x20) <= uVar11) {
      uVar11 = 0;
    }
    if (*(char *)(*(long *)(lVar22 + 0x28) + (long)(int)uVar11 * 0x38 + 0x2c) == '\0') {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  puVar6 = PTR_DAT_04bb4f78;
  puVar8 = PTR_DAT_04bb39b0;
  pbVar25 = PTR_DAT_04bb32e0;
  local_1d0 = (long *)CONCAT44(local_1d0._4_4_,param_2);
  uVar11 = param_2;
  if (*(uint *)(lVar22 + 0x20) <= param_2) {
    uVar11 = 0;
  }
  if (*(char *)(*(long *)(lVar22 + 0x28) + (long)(int)uVar11 * 0x38 + 0x2c) == '\0') {
    return 0;
  }
  lVar22 = *(long *)PTR_DAT_04bb39b0;
  pbVar23 = PTR_DAT_04bb32e0;
  if (lVar22 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01dec3a8;
LAB_01dec414:
    local_1ec[0] = *pbVar23;
    if (7 < local_1ec[0]) {
      local_1ec[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar22 + 0x15c) != 0) {
      pbVar23 = (byte *)(lVar22 + 0x158);
    }
    if ((*pbVar23 < 8) ||
       (((*(int *)(lVar22 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar23 < 8)))) goto LAB_01dec414;
LAB_01dec3a8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01dec40c:
      pbVar23 = PTR_DAT_04bb5038;
      goto LAB_01dec414;
    }
    lVar22 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar22 + 0x473);
    pbVar23 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar22 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar23 = (byte *)(lVar22 + 0x471);
      }
    }
    local_1ec[0] = *pbVar23;
    if (7 < local_1ec[0]) goto LAB_01dec40c;
  }
  lVar22 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_1ec,1);
  if (lVar22 == 0) {
    return 0;
  }
  if ((*(long **)(lVar22 + 0x18438) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar22 + 0x18438), puVar16 == (undefined8 *)0x0)) {
    plVar34 = (long *)(*(long *)(lVar22 + 0x18420) + *(long *)(lVar22 + 0x18418) + 8);
  }
  else {
    uVar17 = (**(code **)*puVar16)();
    plVar34 = (long *)(*(long *)(lVar22 + 0x18420) + *(long *)(lVar22 + 0x18418) + 8);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar22 + 0x18438) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar22 + 0x18438) + 8), puVar16 != (undefined8 *)0x0))
    {
      (**(code **)*puVar16)();
    }
  }
  if (*plVar34 == 0) {
    return 0;
  }
  lVar24 = *(long *)puVar8;
  if (lVar24 == 0) {
LAB_01dec4f4:
    if (*pbVar25 < 8) goto LAB_01dec56c;
LAB_01dec500:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01dec564:
      pbVar25 = PTR_DAT_04bb5038;
      goto LAB_01dec56c;
    }
    lVar24 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar24 + 0x473);
    pbVar25 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar24 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar24 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar25 = (byte *)(lVar24 + 0x471);
      }
    }
    local_ac[0] = *pbVar25;
    if (7 < local_ac[0]) goto LAB_01dec564;
  }
  else {
    if (*(int *)(lVar24 + 0x15c) != 0) {
      pbVar25 = (byte *)(lVar24 + 0x158);
    }
    if (7 < *pbVar25) {
      if ((*(int *)(lVar24 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar25 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dec4f4;
      }
      goto LAB_01dec500;
    }
LAB_01dec56c:
    local_ac[0] = *pbVar25;
    if (7 < local_ac[0]) {
      local_ac[0] = 0xff;
    }
  }
  lVar24 = FUN_025830c0(*(undefined8 *)puVar6,local_ac,1);
  if (lVar24 == 0) {
    return 0;
  }
  lVar26 = *(long *)PTR_DAT_04bb46b0;
  if (lVar26 == 0) {
    return 0;
  }
  local_1d0 = (long *)CONCAT44(local_1d0._4_4_,1);
  if (((*(byte *)(lVar26 + 0x50d) ^ 0xff) & 6) != 0) {
    return 0;
  }
  lVar26 = (**(code **)(**(long **)(*(long *)(lVar26 + 0x10) + 0x188) + 0x38))();
  if (lVar26 == 0) {
    return 0;
  }
  uStack_be = 0;
  uStack_b8 = 0;
  uStack_c6 = 0;
  local_bf = 0;
  local_ce = 0;
  local_d6 = 0;
  plVar33 = (long *)(PTR_DAT_04bb2020 + 0x10);
  local_1c8 = (undefined **)0x40f411c;
  local_1d0 = plVar33;
  local_d8[0] = FUN_02758850(&local_1d0);
  if ((*(long **)(lVar24 + 0x18320) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar24 + 0x18320), puVar16 == (undefined8 *)0x0)) {
    uVar17 = 0;
  }
  else {
    uVar17 = (**(code **)*puVar16)();
    uVar17 = uVar17 & 0xffffffff;
  }
  local_1c8 = (undefined **)0x40b0f5d;
  local_1d0 = plVar33;
  iVar10 = FUN_0274bbb0(*(long *)(lVar24 + 0x18308) + *(long *)(lVar24 + 0x18300),&local_1d0);
  local_d8[1] = iVar10 != 0;
  if ((((uVar17 & 1) != 0) && (*(long *)(lVar24 + 0x18320) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar24 + 0x18320) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  if ((*(long **)(lVar24 + 0x17f68) == (long *)0x0) ||
     (puVar16 = (undefined8 *)**(long **)(lVar24 + 0x17f68), puVar16 == (undefined8 *)0x0)) {
    lVar26 = *(long *)(lVar24 + 0x17f50) + *(long *)(lVar24 + 0x17f48);
  }
  else {
    uVar17 = (**(code **)*puVar16)();
    lVar26 = *(long *)(lVar24 + 0x17f50) + *(long *)(lVar24 + 0x17f48);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar24 + 0x17f68) != 0)) &&
       (puVar16 = *(undefined8 **)(*(long *)(lVar24 + 0x17f68) + 8), puVar16 != (undefined8 *)0x0))
    {
      (**(code **)*puVar16)();
    }
  }
  local_1c0._4_4_ = local_1c0._4_4_ & 0xffffff00;
  local_1c0 = (undefined *)CONCAT44(local_1c0._4_4_,0xb);
  local_1b8 = (undefined8 *)0xffffffff;
  uStack_1b0 = 0xffffffff00000000;
  puStack_198 = local_18c;
  local_1c8 = (undefined **)&local_f0;
  local_1a8 = 0xffffffff;
  local_190 = 0x40;
  local_14d = 0;
  local_18c[0] = 0;
  local_1a0 = PTR_DAT_04bb2bc0 + 0x10;
  local_138 = 0x40;
  local_f5 = 0;
  local_134[0] = 0;
  puStack_140 = local_134;
  uStack_e0 = 0;
  local_1d0 = (long *)(PTR_DAT_04bb5128 + 0x10);
  local_f0 = (undefined *)0x0;
  uStack_e8 = 0;
  local_e2 = 0;
  puVar3 = auStack_da;
  if (auStack_da <= (undefined1 *)((long)&local_f0 + 2U)) {
    puVar3 = (undefined1 *)((long)&local_f0 + 2U);
  }
  local_148 = local_1a0;
  memset(local_1c8,0,(ulong)(puVar3 + (-0xe1 - (long)&local_1d0)) & 0xfffffffffffffffc | 2);
  uStack_b8 = 0;
  local_1d8 = 0x1f;
  local_a0 = lVar26 + 4;
  local_1e8 = PTR_DAT_04bb2030 + 0x10;
  local_a8[0] = 10;
  local_1e0 = (ulong)local_d8 | 2;
  FUN_0082b014(&local_1d0);
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_70 = 1;
  local_6c = 0;
  local_98 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_90 = 0;
  FUN_02906b00(&local_98,&local_1d0,local_a8);
  puVar18 = (ushort *)(*(code *)local_1d0[3])(&local_1d0);
  (**(code **)(local_1e8 + 0x18))(&local_1e8);
  if (local_1d8 == 0) {
    iVar10 = 3;
  }
  else {
    uVar11 = 0;
    lVar28 = 0x7fffffff;
    do {
      pbVar25 = (byte *)(local_1e0 + uVar11);
      if (lVar28 == 0) {
LAB_01dec908:
        iVar10 = 0;
        goto LAB_01dec90c;
      }
      uVar4 = *puVar18;
      if (uVar4 == 0) goto LAB_01dec908;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) {
        *pbVar25 = bVar5;
        iVar10 = 1;
      }
      else if (uVar4 < 0x800) {
        if (local_1d8 <= uVar11 + 1) break;
        *pbVar25 = (byte)(uVar4 >> 6) | 0xc0;
        pbVar25[1] = bVar5 & 0x3f | 0x80;
        iVar10 = 2;
      }
      else {
        if (local_1d8 <= uVar11 + 2) break;
        *pbVar25 = (byte)(uVar4 >> 0xc) | 0xe0;
        pbVar25[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        pbVar25[2] = bVar5 & 0x3f | 0x80;
        iVar10 = 3;
      }
      uVar11 = iVar10 + uVar11;
      lVar28 = lVar28 + -1;
      puVar18 = puVar18 + 1;
    } while (uVar11 < local_1d8);
    pbVar25 = (byte *)(local_1e0 + (uVar11 - 1));
    iVar10 = 2;
LAB_01dec90c:
    *pbVar25 = 0;
  }
  if (iVar10 != 0) {
    return 0;
  }
  local_b4 = *(uint *)(lVar26 + 0x18);
  if (1 < local_b4) {
    local_b4 = 0;
  }
  if (*(long *)(lVar24 + 0x194b8) == 0) {
    lVar24 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
  }
  else {
    lVar24 = lVar24 + 0x194b0;
  }
  if (*(long **)(lVar24 + 0x2cd38) == (long *)0x0) {
    uVar17 = 0;
  }
  else {
    puVar16 = (undefined8 *)**(long **)(lVar24 + 0x2cd38);
    uVar17 = 0;
    if (puVar16 != (undefined8 *)0x0) {
      local_98._0_4_ = local_b4;
      uVar17 = (**(code **)*puVar16)();
    }
  }
  uVar31 = (ulong)local_1d0 >> 0x20;
  local_1d0 = (long *)((ulong)local_1d0 & 0xffffffff00000000);
  lVar26 = *(long *)(lVar24 + 0x2cd20) + *(long *)(lVar24 + 0x2cd18);
  uVar11 = *(uint *)(lVar26 + 4);
  if (uVar11 < 8) {
    local_1d0 = (long *)CONCAT44((int)uVar31,uVar11);
  }
  uVar11 = *(uint *)(lVar26 + 8);
  if (3 < uVar11) {
    uVar11 = 0;
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar11);
  local_b0 = (byte)local_1d0 | (byte)(uVar11 << 5);
  if ((((uVar17 & 1) != 0) && (*(long *)(lVar24 + 0x2cd38) != 0)) &&
     (puVar16 = *(undefined8 **)(*(long *)(lVar24 + 0x2cd38) + 8), puVar16 != (undefined8 *)0x0)) {
    (**(code **)*puVar16)();
  }
  plVar33 = *(long **)PTR_DAT_04bc1048;
  pMVar1 = (MutexType *)(*(long *)PTR_DAT_04bb47c8 + 0x160);
  nn::os::LockMutex(pMVar1);
  lVar24 = *(long *)PTR_DAT_04bb2698;
  if (lVar24 == 0) {
    plVar19 = malloc(0x28);
  }
  else {
    plVar19 = (long *)*plVar33;
    if (plVar19 == (long *)0x0) {
      lVar26 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar19 = (long *)(lVar24 + 8);
      if (lVar26 != 0) {
        plVar19 = (long *)(lVar26 + 0xa8);
      }
      plVar19 = (long *)*plVar19;
      if (plVar19 == (long *)0x0) goto LAB_01decdd0;
    }
    plVar19 = (long *)(**(code **)(*plVar19 + 0x30))(plVar19,0x28,8);
  }
  if (plVar19 == (long *)0x0) goto LAB_01decdd0;
  plVar19[3] = 0;
  plVar19[4] = 0;
  *plVar19 = 0;
  plVar19[1] = 0;
  plVar19[2] = 0;
  uVar20 = (**(code **)(*(long *)*plVar33 + 0x80))((long *)*plVar33,8);
  lVar24 = (**(code **)(*(long *)*plVar33 + 0x30))((long *)*plVar33,uVar20,8);
  FUN_0069aa80(&local_98,lVar24,uVar20);
  uVar11 = (*(code *)*DAT_05386df8)(&DAT_05386df8,local_d8);
  uVar12 = (*(code *)*DAT_05386ea8)(&DAT_05386ea8,local_d8);
  uVar13 = (*(code *)*DAT_05386f58)(&DAT_05386f58,local_d8);
  uVar14 = (*(code *)*DAT_05387008)(&DAT_05387008,local_d8);
  uVar15 = (*(code *)*DAT_053870b8)(&DAT_053870b8,local_d8);
  iVar10 = ((uVar12 ^ 0xffffffff) & 1) + ((uVar11 ^ 0xffffffff) & 1) + ((uVar13 ^ 0xffffffff) & 1) +
           ((uVar14 ^ 0xffffffff) & 1) + ((uVar15 ^ 0xffffffff) & 1);
  if (iVar10 == 0) {
    uVar17 = FUN_0069b1d4(&local_98,"_DummyMap",1);
    if ((uVar17 & 1) != 0) {
      uVar17 = FUN_0069bad0(&local_98,"_DummyKey","_DummyValue");
joined_r0x01deccec:
      if ((uVar17 & 1) != 0) {
LAB_01deccf0:
        plVar32 = (long *)*plVar33;
        uVar20 = FUN_0069bd38(&local_98);
        (**(code **)(*plVar32 + 0x48))(plVar32,lVar24,uVar20);
        *plVar19 = lVar24;
        lVar24 = FUN_0069bd38(&local_98);
        plVar19[1] = lVar24;
        plVar27 = plVar33 + 1;
        lVar24 = *plVar27;
        plVar32 = (long *)((long)*(int *)((long)plVar33 + 0x1c) + (long)plVar19);
        *plVar27 = (long)plVar32;
        *plVar32 = lVar24;
        plVar32[1] = (long)plVar27;
        if (lVar24 != 0) {
          *(long **)(lVar24 + 8) = plVar32;
        }
        *(int *)(plVar33 + 3) = (int)plVar33[3] + 1;
        nn::os::UnlockMutex(pMVar1);
        puVar8 = PTR_DAT_04bc1048;
        lVar28 = *(long *)PTR_DAT_04bc1048;
        lVar26 = *(long *)(lVar28 + 0x10);
        lVar24 = lVar28 + 8;
        if (lVar26 != lVar24) {
          lVar28 = (long)*(int *)(lVar28 + 0x1c) + (long)plVar19;
          lVar29 = lVar26;
          do {
            if (lVar29 == lVar28) {
              lVar29 = *plVar19;
              goto LAB_01decde0;
            }
            lVar29 = *(long *)(lVar29 + 8);
          } while (lVar29 != lVar24);
          lVar29 = 0;
LAB_01decde0:
          if (lVar26 != lVar28) goto code_r0x01decde8;
          uVar17 = plVar19[1];
          uVar11 = (uint)uVar17;
          if (uVar11 < 4) {
            uVar12 = 0;
          }
          else {
            uVar31 = 0;
            uVar12 = 0;
            do {
              uVar12 = (*(int *)(lVar29 + uVar31) * 0x16a88000 |
                       (uint)(*(int *)(lVar29 + uVar31) * -0x3361d2af) >> 0x11) * 0x1b873593 ^
                       uVar12;
              iVar10 = (int)uVar31;
              uVar31 = (ulong)(iVar10 + 4);
              uVar12 = (uVar12 >> 0x13 | uVar12 << 0xd) * 5 + 0xe6546b64;
            } while (iVar10 + 8U <= uVar11);
          }
          uVar13 = uVar11 & 3;
          if ((uVar17 & 3) != 0) {
            puVar18 = (ushort *)((lVar29 + (uVar17 & 0xffffffff)) - (uVar17 & 3));
            if (uVar13 == 1) {
              uVar13 = (uint)(byte)*puVar18;
            }
            else if (uVar13 == 2) {
              uVar13 = (uint)*puVar18;
            }
            else if (uVar13 == 3) {
              uVar13 = (uint)(byte)puVar18[1] << 0x10 | (uint)*(byte *)((long)puVar18 + 1) << 8 |
                       (uint)(byte)*puVar18;
            }
            else {
              uVar13 = 0;
            }
            uVar12 = (uVar13 * 0x16a88000 | uVar13 * -0x3361d2af >> 0x11) * 0x1b873593 ^ uVar12;
          }
          goto LAB_01decef0;
        }
LAB_01decdf4:
        uVar11 = 0;
        uVar12 = 0;
LAB_01decef0:
        uVar11 = (uVar12 ^ uVar11 ^ (uVar12 ^ uVar11) >> 0x10) * -0x7a143595;
        uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
        uVar11 = uVar11 ^ uVar11 >> 0x10;
        if ((param_3 & 1) == 0) {
          if (*(long *)(lVar22 + 0x194b8) == 0) {
            lVar22 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
          }
          else {
            lVar22 = lVar22 + 0x194b0;
          }
          local_1c8 = (undefined **)(lVar22 + 0x2acb0);
          local_1c0 = (undefined *)CONCAT71(local_1c0._1_7_,1);
          if (*(long **)(lVar22 + 0x2acd8) == (long *)0x0) {
            uVar9 = 0;
          }
          else {
            puVar16 = (undefined8 *)**(long **)(lVar22 + 0x2acd8);
            uVar9 = 0;
            if (puVar16 != (undefined8 *)0x0) {
              uVar9 = (**(code **)*puVar16)();
            }
          }
          local_1c0 = (undefined *)
                      (CONCAT62(local_1c0._2_6_,CONCAT11(uVar9,(undefined1)local_1c0)) &
                      0xffffffffffff01ff);
          local_1d0 = (long *)(PTR_DAT_04bc1158 + 0x10);
          uVar12 = *(uint *)(*(long *)(lVar22 + 0x2acc0) + *(long *)(lVar22 + 0x2acb8) + 0x14);
          FUN_02640184(&local_1d0);
          if ((uVar12 != 0) && (uVar12 == uVar11)) {
            FUN_01d3be50(*(undefined8 *)puVar8,plVar19);
            *(undefined1 *)(param_1 + 0x50) = 1;
            return 1;
          }
        }
        plVar33 = *(long **)(*(long *)PTR_DAT_04bb47c8 + 8);
        lVar22 = *(long *)PTR_DAT_04bb2698;
        if (lVar22 == 0) {
          plVar32 = malloc(0x20);
        }
        else {
          plVar32 = plVar33;
          if (plVar33 == (long *)0x0) {
            lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar32 = (long *)(lVar22 + 8);
            if (lVar24 != 0) {
              plVar32 = (long *)(lVar24 + 0xa8);
            }
            plVar32 = (long *)*plVar32;
            if (plVar32 == (long *)0x0) {
              plVar32 = (long *)0x0;
              goto LAB_01ded048;
            }
          }
          plVar32 = (long *)(**(code **)(*plVar32 + 0x30))(plVar32,0x20,8);
        }
LAB_01ded048:
        puVar6 = PTR_DAT_04bb29b8;
        *(undefined4 *)(plVar32 + 1) = 0;
        plVar32[2] = 0;
        plVar32[3] = 0;
        *plVar32 = (long)(puVar6 + 0x10);
        *(long **)(param_1 + 0x78) = plVar32;
        lVar24 = *(long *)puVar8;
        lVar22 = *(long *)(lVar24 + 0x10);
        if (lVar22 != lVar24 + 8) {
          do {
            if (lVar22 == (long)*(int *)(lVar24 + 0x1c) + (long)plVar19) {
              iVar10 = (int)plVar19[1];
              if (iVar10 < 1) break;
              uVar17 = plVar19[1] & 0xffffffff;
              lVar22 = *(long *)PTR_DAT_04bb2698;
              if (lVar22 == 0) {
                pvVar21 = malloc(uVar17);
              }
              else {
                if (plVar33 == (long *)0x0) {
                  lVar24 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  puVar16 = (undefined8 *)(lVar22 + 8);
                  if (lVar24 != 0) {
                    puVar16 = (undefined8 *)(lVar24 + 0xa8);
                  }
                  plVar33 = (long *)*puVar16;
                  if (plVar33 == (long *)0x0) break;
                }
                pvVar21 = (void *)(**(code **)(*plVar33 + 0x30))(plVar33,uVar17,8);
              }
              if (pvVar21 != (void *)0x0) {
                *(int *)(plVar32 + 1) = iVar10;
                plVar32[2] = (long)pvVar21;
              }
              break;
            }
            lVar22 = *(long *)(lVar22 + 8);
          } while (lVar22 != lVar24 + 8);
        }
        lVar22 = *(long *)(param_1 + 0x78);
        puVar16 = *(undefined8 **)PTR_DAT_04bc1048;
        plVar27 = (long *)puVar16[2];
        plVar33 = puVar16 + 1;
        plVar32 = (long *)((long)*(int *)((long)puVar16 + 0x1c) + (long)plVar19);
        if (plVar27 == plVar33) {
          pvVar21 = (void *)0x0;
          __n = 0;
        }
        else {
          plVar30 = plVar27;
          do {
            if (plVar30 == plVar32) {
              pvVar21 = (void *)*plVar19;
              goto LAB_01ded180;
            }
            plVar30 = (long *)plVar30[1];
          } while (plVar30 != plVar33);
          pvVar21 = (void *)0x0;
LAB_01ded180:
          plVar30 = plVar27;
          do {
            if (plVar30 == plVar32) {
              __n = plVar19[1];
              goto LAB_01ded1a4;
            }
            plVar30 = (long *)plVar30[1];
          } while (plVar30 != plVar33);
          __n = 0;
        }
LAB_01ded1a4:
        __dest = *(void **)(lVar22 + 0x10);
        if (__dest != (void *)0x0) {
          if (*(uint *)(lVar22 + 8) < __n) {
            memcpy(__dest,pvVar21,(ulong)*(uint *)(lVar22 + 8));
            __n = (size_t)*(uint *)(lVar22 + 8);
          }
          else {
            memcpy(__dest,pvVar21,__n);
          }
          *(size_t *)(lVar22 + 0x18) = __n;
          puVar16 = *(undefined8 **)PTR_DAT_04bc1048;
          plVar27 = (long *)puVar16[2];
          plVar32 = (long *)((long)*(int *)((long)puVar16 + 0x1c) + (long)plVar19);
        }
        do {
          if (plVar27 == puVar16 + 1) {
LAB_01ded278:
            if (*(long *)(*(long *)PTR_DAT_04bb21c8 + 0x2b8) != 0) {
              local_1c8 = *(undefined ***)(param_1 + 0x78);
              local_1d0 = plVar34;
              uVar17 = FUN_006e8844(*(long *)(*(long *)PTR_DAT_04bb21c8 + 0x2b8),&local_1d0);
              if ((uVar17 & 1) != 0) {
                uVar20 = *(undefined8 *)puVar7;
                *(uint *)(param_1 + 0x60) = uVar11;
                *(undefined8 *)(param_1 + 0x58) = &PTR_LAB_04a5bd30;
                *(long *)(param_1 + 0x68) = param_1;
                FUN_01c9a8a8(uVar20,(undefined8 *)(param_1 + 0x58),1,param_2);
                *(uint *)(param_1 + 0x4c) = param_2;
                *(undefined1 *)(param_1 + 0x48) = 1;
                return 1;
              }
            }
            if (*(long **)(param_1 + 0x78) != (long *)0x0) {
              (**(code **)(**(long **)(param_1 + 0x78) + 8))();
            }
            *(undefined8 *)(param_1 + 0x78) = 0;
            return 0;
          }
          if (plVar27 == plVar32) {
            if (*plVar32 != 0) {
              *(long *)(*plVar32 + 8) = plVar32[1];
            }
            if ((long *)plVar32[1] != (long *)0x0) {
              *(long *)plVar32[1] = *plVar32;
            }
            *plVar32 = 0;
            plVar32[1] = 0;
            *(int *)(puVar16 + 3) = *(int *)(puVar16 + 3) + -1;
            if ((char)plVar19[2] == '\0') {
              (**(code **)(*(long *)*puVar16 + 0x38))((long *)*puVar16,*plVar19);
            }
            (**(code **)(*(long *)*puVar16 + 0x38))((long *)*puVar16,plVar19);
            goto LAB_01ded278;
          }
          plVar27 = (long *)plVar27[1];
        } while( true );
      }
    }
  }
  else {
    uVar17 = FUN_0069aa8c(&local_98,iVar10);
    if ((uVar17 & 1) != 0) {
      local_1d0 = (long *)local_d8;
      local_1c0 = PTR_DAT_04bb2020 + 0x10;
      local_1b8 = &DAT_0407ebb1;
      local_1c8 = &local_98;
      uVar17 = (*(code *)*DAT_05386df8)(&DAT_05386df8,local_d8);
      if (((((uVar17 & 1) != 0) ||
           (uVar17 = (*(code *)*DAT_05386db8)(&DAT_05386db8,&local_1d0), (uVar17 & 1) != 0)) &&
          (((uVar17 = (*(code *)*DAT_05386ea8)(&DAT_05386ea8,local_d8), (uVar17 & 1) != 0 ||
            (uVar17 = (*(code *)*DAT_05386e68)(&DAT_05386e68,&local_1d0), (uVar17 & 1) != 0)) &&
           ((uVar17 = (*(code *)*DAT_05386f58)(&DAT_05386f58,local_d8), (uVar17 & 1) != 0 ||
            (uVar17 = (*(code *)*DAT_05386f18)(&DAT_05386f18,&local_1d0), (uVar17 & 1) != 0)))))) &&
         ((uVar17 = (*(code *)*DAT_05387008)(&DAT_05387008,local_d8), (uVar17 & 1) != 0 ||
          (uVar17 = (*(code *)*DAT_05386fc8)(&DAT_05386fc8,&local_1d0), (uVar17 & 1) != 0)))) {
        uVar17 = (*(code *)*DAT_053870b8)(&DAT_053870b8,local_d8);
        if ((uVar17 & 1) == 0) {
          uVar17 = (*(code *)*DAT_05387078)(&DAT_05387078,&local_1d0);
          goto joined_r0x01deccec;
        }
        goto LAB_01deccf0;
      }
    }
  }
  (**(code **)(*(long *)*plVar33 + 0x38))((long *)*plVar33,plVar19);
  (**(code **)(*(long *)*plVar33 + 0x38))((long *)*plVar33,lVar24);
LAB_01decdd0:
  nn::os::UnlockMutex(pMVar1);
  return 0;
code_r0x01decde8:
  lVar26 = *(long *)(lVar26 + 8);
  if (lVar26 == lVar24) goto LAB_01decdf4;
  goto LAB_01decde0;
}

