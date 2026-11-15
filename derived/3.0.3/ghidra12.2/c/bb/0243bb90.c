
undefined8 FUN_0243bb90(long param_1)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  long *plVar11;
  long *plVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbVar18;
  uint *puVar19;
  uint *puVar20;
  byte bVar21;
  long lVar22;
  long lVar23;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined4 local_81;
  undefined1 uStack_7d;
  int iStack_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_68 [2];
  undefined4 local_60;
  uint uStack_5c;
  byte local_58 [4];
  uint local_54;
  
  puVar3 = PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar15 == 0) || (*(int *)(lVar15 + 0x15c) == 0)) goto LAB_0243bcac;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  pbVar18 = PTR_DAT_04bb32e0;
  if (*(int *)(lVar15 + 0x15c) != 0) {
    pbVar18 = (byte *)(lVar15 + 0x158);
  }
  bVar14 = *pbVar18;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  bVar21 = *pbVar1;
  if (7 < bVar21) {
    bVar21 = 0xff;
  }
  if ((bVar14 == bVar21) || (*(int *)(lVar15 + 0x15c) == 0)) goto LAB_0243bcac;
  pbVar18 = PTR_DAT_04bb32e0;
  if (*(int *)(lVar15 + 0x15c) != 0) {
    pbVar18 = (byte *)(lVar15 + 0x158);
  }
  bVar14 = *pbVar18;
  if (7 < bVar14) {
    bVar14 = 0xff;
  }
  if (bVar14 == bVar21) goto LAB_0243bcac;
  uVar9 = FUN_02549590();
  puVar6 = PTR_DAT_04bb4718;
  if ((uVar9 & 1) != 0) goto LAB_0243bcac;
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar19 = &DAT_054f08d0;
      if (iVar8 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar19 = &DAT_054f08d0;
    }
  }
  else {
    puVar19 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x200);
  }
  local_90._0_4_ = 2;
  if (((*puVar19 >> 2 & 1) == 0) || (*(int *)(*(long *)puVar6 + 0x11a8) != 0)) goto LAB_0243bcac;
  bVar14 = *pbVar1;
  if ((ulong)bVar14 < 8) {
    if (*(int *)(*(long *)puVar6 + (ulong)bVar14 * 8 + 0xf04) != 0) goto LAB_0243bcac;
  }
  else {
    bVar14 = 0xff;
  }
  uStack_88 = *(undefined4 *)(param_1 + 0x230);
  local_90._0_4_ = (uint)bVar14;
  uStack_7d = 0;
  local_81 = 0;
  local_84 = 1;
  local_82 = 0;
  local_90._4_4_ = 1;
  uVar9 = FUN_02530cec(&local_90);
  if ((uVar9 & 1) == 0) goto LAB_0243bcac;
  plVar11 = (long *)FUN_016debb0(param_1);
  uVar9 = (**(code **)(*plVar11 + 0x100))();
  if (((uVar9 & 1) == 0) ||
     ((((*(byte *)(param_1 + 0x17d3) >> 1 & 1) == 0 &&
       ((*(char *)(param_1 + 0x17ac) != '\0' ||
        (local_90._0_4_ = 0x23, (*(uint *)(param_1 + 0xed4) >> 3 & 1) == 0)))) &&
      ((uVar9 = FUN_0231b960(param_1), (uVar9 & 1) == 0 ||
       ((*(byte *)(param_1 + 0xf24) >> 1 & 1) == 0)))))) goto LAB_0243bcac;
  uVar9 = FUN_02549590();
  puVar5 = PTR_DAT_04bb27d0;
  if (((uVar9 & 1) != 0) || (7 < *pbVar1)) goto LAB_0243bcac;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    iVar8 = FUN_02582d8c(pbVar1,2);
    if (iVar8 < 0) goto LAB_0243bcac;
  }
  else {
    local_90._0_4_ = CONCAT31(local_90._1_3_,*pbVar1);
    uVar9 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_90);
    if ((uVar9 & 1) == 0) goto LAB_0243bcac;
  }
  puVar4 = PTR_DAT_04bb27c0;
  lVar15 = *(long *)puVar3;
  pbVar18 = pbVar16;
  if (lVar15 == 0) {
    if (7 < *pbVar16) goto LAB_0243bf38;
LAB_0243bf9c:
    local_58[0] = *pbVar18;
    if (7 < local_58[0]) {
      local_58[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar15 + 0x158);
    }
    if ((*pbVar18 < 8) ||
       (((*(int *)(lVar15 + 0x15c) != 0 && (*(long *)puVar6 != 0)) &&
        (pbVar18 = (byte *)(*(long *)puVar6 + 0x11a5), *pbVar18 < 8)))) goto LAB_0243bf9c;
LAB_0243bf38:
    plVar11 = *(long **)puVar5;
    if (plVar11 == (long *)0x0) {
LAB_0243bf94:
      pbVar18 = PTR_DAT_04bb5038;
      goto LAB_0243bf9c;
    }
    lVar22 = *plVar11;
    bVar14 = *(byte *)(lVar22 + 0x473);
    pbVar18 = PTR_DAT_04bb5038;
    if ((long)(char)bVar14 != 0xffffffffffffffff) {
      puVar19 = (uint *)(lVar22 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
      if (7 < bVar14) {
        puVar19 = (uint *)(lVar22 + 0x48);
      }
      if ((*puVar19 & 8) != 0) {
        pbVar18 = (byte *)(lVar22 + 0x471);
      }
    }
    local_58[0] = *pbVar18;
    if (7 < local_58[0]) goto LAB_0243bf94;
  }
  if (lVar15 == 0) {
    bVar14 = *pbVar16;
LAB_0243bff0:
    uVar17 = (uint)bVar14;
    if (uVar17 < 8) goto LAB_0243c05c;
LAB_0243bff8:
    plVar11 = *(long **)puVar5;
    if (plVar11 != (long *)0x0) {
      lVar15 = *plVar11;
      bVar14 = *(byte *)(lVar15 + 0x473);
      pbVar16 = PTR_DAT_04bb5038;
      if ((long)(char)bVar14 != 0xffffffffffffffff) {
        puVar19 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
        if (7 < bVar14) {
          puVar19 = (uint *)(lVar15 + 0x48);
        }
        if ((*puVar19 & 8) != 0) {
          pbVar16 = (byte *)(lVar15 + 0x471);
        }
      }
      uVar17 = (uint)*pbVar16;
      if (uVar17 < 8) goto LAB_0243c05c;
    }
    uVar17 = (uint)(byte)*PTR_DAT_04bb5038;
    if (uVar17 < 8) goto LAB_0243c05c;
LAB_0243c070:
    puVar19 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar15 + 0x158);
    }
    uVar17 = (uint)*pbVar16;
    if (7 < *pbVar16) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)puVar6 != 0)) {
        bVar14 = *(byte *)(*(long *)puVar6 + 0x11a5);
        goto LAB_0243bff0;
      }
      goto LAB_0243bff8;
    }
LAB_0243c05c:
    if (*(long *)puVar6 == 0) goto LAB_0243c070;
    puVar19 = (uint *)(*(long *)puVar6 + (ulong)uVar17 * 4 + 0xde8);
  }
  lVar15 = *(long *)PTR_DAT_04bb27c0;
  if (lVar15 == 0) goto LAB_0243bcac;
  uVar17 = *puVar19;
  if (((uVar17 == 0) ||
      (plVar11 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                           ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
     (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar17)))) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar15 + 0x288) == 1) || (*(int *)(lVar15 + 0x288) == -1)) {
    plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar15 = *(long *)puVar4;
    iVar8 = (**(code **)(*plVar12 + 0x60))();
    if (iVar8 < 0x11) {
      uVar17 = 1;
    }
    else {
      if (4 < *(uint *)(lVar15 + 0x5e8)) goto LAB_0243c11c;
      uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar15 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0243c11c:
    uVar17 = 0;
  }
  if (plVar11 == (long *)0x0) {
LAB_0243bcac:
    if ((*(char *)(param_1 + 0x1fad) == '\0') ||
       (*(int *)(param_1 + 0x1fa0) < *(int *)(param_1 + 0x1fa8))) {
      return 0;
    }
    *(undefined1 *)(param_1 + 0x1fad) = 0;
    *(undefined4 *)(param_1 + 0x1fa0) = *(undefined4 *)(param_1 + 0x1fa4);
    if (*(byte *)(param_1 + 0x1f8c) < 8) {
      pfVar10 = (float *)FUN_0251b3b0(param_1 + 0x1f8c,0);
      if (pfVar10 == (float *)0x0) {
        return 0;
      }
    }
    else {
      pfVar10 = (float *)FUN_0252d9bc(0);
      if (pfVar10 == (float *)0x0) {
        return 0;
      }
    }
    local_70 = 0;
    local_78 = 0x3f000000;
    local_90._0_4_ = *(undefined4 *)(param_1 + 0x1f90);
    local_90._4_4_ = 0;
    uStack_88 = 4;
    local_84 = 0x101;
    uVar7 = FUN_006f0400(*pfVar10 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                         pfVar10[2] - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
    uVar17 = *(uint *)(param_1 + 0x288);
    *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x28c);
    uVar17 = uVar17 ^ uVar17 << 0xb;
    *(undefined4 *)(param_1 + 0x28c) = *(undefined4 *)(param_1 + 0x290);
    uVar2 = *(uint *)(param_1 + 0x294);
    *(uint *)(param_1 + 0x290) = uVar2;
    uVar17 = uVar17 >> 8 ^ uVar2 >> 0x13 ^ uVar17 ^ uVar2;
    *(uint *)(param_1 + 0x294) = uVar17;
    iStack_7c = (int)((ulong)uVar17 * 0x1e >> 0x20) + 0x96;
    local_81._1_3_ = (undefined3)uVar7;
    uStack_7d = (undefined1)((uint)uVar7 >> 0x18);
    FUN_023bacf4(param_1,(long)&local_81 + 1,&local_90,0);
    return 1;
  }
  lVar15 = plVar11[0x2a];
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb3770);
  if ((uVar9 & 1) == 0) goto LAB_0243bcac;
  uVar2 = 0;
  if ((int)lVar15 == 1) {
    uVar2 = uVar17;
  }
  if (uVar2 == 0) goto LAB_0243bcac;
  FUN_0252d8f0(&local_60,local_58);
  puVar5 = PTR_DAT_04bb43c0;
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar17 = FUN_0277d6c4(&local_60);
  lVar22 = *(long *)puVar5;
  lVar15 = 0;
  if (lVar22 != 0) {
    lVar15 = *(long *)(lVar23 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar15 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
      uStack_7d = 0;
      iStack_7c = 0;
      local_90 = PTR_DAT_04bc0510 + 0x10;
      uStack_88 = local_60;
      local_84 = (undefined2)uStack_5c;
      local_82 = (undefined1)(uStack_5c >> 0x10);
      local_81 = uStack_5c >> 0x18;
      uVar17 = FUN_0277d6c4(&uStack_88);
      if (*(long *)puVar5 == 0) {
LAB_0243c2f8:
        local_54 = 0xbc;
      }
      else {
        lVar15 = *(long *)(lVar22 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar17) ||
           (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar17 * 8) == 0)) goto LAB_0243c2f8;
        lVar15 = *(long *)PTR_DAT_04bc0428;
        uVar17 = FUN_0277d6c4(&local_60);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
        if ((*(uint *)(lVar15 + 0x1d8) <= uVar17) ||
           (puVar19 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar17 * 8),
           puVar19 == (uint *)0x0)) goto LAB_0243c2f8;
        local_81._1_3_ = SUB83(puVar19,0);
        uStack_7d = (undefined1)((ulong)puVar19 >> 0x18);
        iStack_7c = (int)((ulong)puVar19 >> 0x20);
        local_54 = 0;
        uVar17 = *puVar19;
        if ((uVar17 != 0) && (puVar19 != (uint *)(ulong)uVar17)) {
          puVar20 = (uint *)((long)puVar19 - (long)(ulong)uVar17);
          local_54 = 0;
          if (*puVar20 != 0) {
            uVar17 = puVar20[1];
            if ((uVar17 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
              lVar15 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                lVar15 = 0x1c;
              }
              lVar15 = (long)puVar20 + lVar15 + (ulong)(ushort)puVar20[2] * 8;
              if (lVar15 != 0) {
                uVar2 = 0;
                if ((ulong)uVar17 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar19 - lVar15) / (ulong)uVar17);
                }
                if (*puVar20 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_54 = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
                   local_54 < 0xbd)) goto LAB_0243c304;
              }
            }
            local_54 = 0;
          }
        }
      }
LAB_0243c304:
      local_68[0] = 0xac;
      if (local_54 != 0xac) {
        uVar9 = FUN_01ae89e0(&local_90);
        if ((uVar9 & 1) == 0) goto LAB_0243c32c;
      }
      lVar15 = 1;
    }
    else {
LAB_0243c32c:
      lVar15 = 0;
    }
  }
  FUN_0253395c(local_68,local_58,*(undefined4 *)PTR_DAT_04bb3238);
  FUN_008248f0(*(undefined8 *)puVar3,pbVar1);
  lVar22 = *(long *)puVar5;
  uVar17 = FUN_0277d6c4(local_68);
  if (*(long *)puVar5 == 0) {
LAB_0243c400:
    uVar9 = FUN_02538a40(local_58);
    if ((uVar9 & 1) == 0) {
LAB_0243c44c:
      uVar9 = FUN_02546f34(plVar11 + 0x3dd,(int)plVar11[0x46]);
      puVar3 = local_90;
      if ((uVar9 & 1) == 0) {
        uStack_88 = 0;
        local_90._0_4_ = 6;
        local_90._4_4_ = CONCAT31(SUB83(puVar3,5),1);
        FUN_02374e74(plVar11,&local_90);
        puVar3 = (undefined *)CONCAT44(local_90._4_4_,(uint)local_90);
      }
      goto LAB_0243c480;
    }
    FUN_0274bfe8(local_58,PTR_DAT_04bb7828,0);
  }
  else {
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if ((*(uint *)(lVar22 + 0x1d8) <= uVar17) ||
       (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar17 * 8) == 0)) goto LAB_0243c400;
    uVar9 = FUN_016e7304(local_68,0,0);
    uVar13 = FUN_02538a40(local_58);
    if ((uVar13 & 1) == 0) {
      if ((uVar9 & 1) == 0) {
        FUN_02476cb0(plVar11,1,0,0,lVar15);
        goto joined_r0x0243c654;
      }
      goto LAB_0243c44c;
    }
    FUN_0274bfe8(local_58,PTR_DAT_04bb7828,0);
    if ((uVar9 & 1) == 0) {
      local_90._0_4_ = *(uint *)PTR_DAT_04bb37e0;
      local_90._4_4_ = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      FUN_02538e78(local_58,&local_90,9,1,0);
joined_r0x0243c654:
      puVar3 = local_90;
      if (lVar15 == 0) {
        FUN_02471f38(local_58,PTR_DAT_04bb37e0,0,0xffffffff);
        puVar3 = local_90;
      }
      goto LAB_0243c480;
    }
  }
  FUN_0252d8f0(&local_90,local_58);
  FUN_02538e78(local_58,&local_90,9,1,0);
  puVar3 = local_90;
LAB_0243c480:
  local_90._4_4_ = (undefined4)((ulong)puVar3 >> 0x20);
  if (*(long *)puVar6 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      local_90 = puVar3;
      iVar8 = __cxa_guard_acquire(&DAT_054f0960);
      puVar19 = (uint *)&DAT_054f0958;
      if (iVar8 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar19 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar19 = (uint *)(*(long *)puVar6 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar19 = puVar19 + (ulong)*pbVar1 * 2;
    }
  }
  local_90._0_4_ = 0x19;
  *puVar19 = *puVar19 & 0xfdffffff;
  FUN_0254cdf0();
  if (*(long *)puVar6 == 0) {
    if ((DAT_054f08d8 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_054f08d8);
      puVar19 = &DAT_054f08d0;
      if (iVar8 != 0) {
        DAT_054f08d0 = 0;
        __cxa_guard_release(&DAT_054f08d8);
      }
    }
    else {
      puVar19 = &DAT_054f08d0;
    }
  }
  else {
    puVar19 = (uint *)(*(long *)puVar6 + 0x200);
  }
  *puVar19 = *puVar19 & 0xfffffff7;
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfdffffff;
  local_90._0_4_ = 8;
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x1940);
  *(undefined8 *)(param_1 + 0x18c0) = 0;
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x1948);
  *(undefined8 *)(param_1 + 0x18c8) = 0;
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x1950);
  *(undefined8 *)(param_1 + 0x18d0) = 0;
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x1958);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x1920);
  *(undefined8 *)(param_1 + 0x18a0) = 0;
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x1928);
  *(undefined8 *)(param_1 + 0x18a8) = 0;
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x1930);
  *(undefined8 *)(param_1 + 0x18b0) = 0;
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x1938);
  *(undefined8 *)(param_1 + 0x18b8) = 0;
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1900);
  *(undefined8 *)(param_1 + 0x1880) = 0;
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1908);
  *(undefined8 *)(param_1 + 0x1888) = 0;
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1910);
  *(undefined8 *)(param_1 + 0x1890) = 0;
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1918);
  *(undefined8 *)(param_1 + 0x1898) = 0;
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x18f8);
  lVar15 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar15 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar15,8);
  return 1;
}

