
undefined8 * FUN_004c51d0(long *param_1,long *param_2,undefined4 param_3,long param_4)

{
  long *plVar1;
  bool bVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  int *piVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  ulong uVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 uVar20;
  ulong *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  byte bVar26;
  long lVar27;
  undefined8 local_4a0;
  undefined1 local_498 [16];
  ulong local_488;
  long local_408;
  int local_400;
  long local_378;
  long local_370;
  ulong local_308;
  long local_2e0;
  undefined8 local_288;
  long *local_268;
  long local_148;
  undefined8 local_140;
  ulong *local_138;
  undefined8 local_130;
  ulong local_128;
  long local_120;
  undefined8 local_118;
  int local_10c;
  long local_108;
  long lStack_100;
  undefined1 auStack_f8 [152];
  
  FUN_004225b0(auStack_f8);
  local_108 = 0;
  lStack_100 = 0;
  if (*param_2 == param_2[1]) {
    uVar20 = FUN_00427570(param_4,auStack_f8,0,0);
    FUN_004297c0(&local_378,uVar20);
    local_108 = local_378;
    lStack_100 = local_370;
    param_3 = FUN_00427340(param_4);
  }
  else {
    local_108 = *param_2;
    lStack_100 = param_2[1];
  }
  uVar5 = FUN_0047d060(param_1 + 0x25,&local_108);
  if (*(uint *)(param_1 + 0x26) == uVar5) {
    uVar19 = uVar5;
    if ((*(uint *)((long)param_1 + 0x134) & 0x3fffffff) == uVar5) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 0x25,0x10);
      uVar19 = *(uint *)(param_1 + 0x26);
    }
    lVar9 = param_1[0x25] + (long)(int)uVar19 * 0x10;
    FUN_0043bd90(lVar9,local_108,lStack_100);
    *(undefined4 *)(lVar9 + 8) = param_3;
    *(uint *)(param_1 + 0x26) = uVar19 + 1;
  }
  iVar8 = *(int *)(param_1[0x25] + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8);
  lVar9 = FUN_0047b100(param_1[0x22],&local_108,iVar8);
  plVar1 = param_1 + 0xd;
  local_378 = lVar9;
  uVar5 = FUN_00470530(plVar1,&local_378);
  auVar4._8_8_ = local_498._8_8_;
  auVar4._0_8_ = local_498._0_8_;
  if ((int)uVar5 <= *(int *)((long)param_1 + 0x74)) {
    uVar13 = *(ulong *)(*plVar1 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8);
    if ((int)uVar13 == 0x50000000) {
      puVar16 = (undefined8 *)0x0;
      local_498 = auVar4;
    }
    else {
      puVar16 = *(undefined8 **)
                 (param_1[0xb] +
                 (-(uVar13 >> 0x1f & 1) & 0xfffffff800000000 | (uVar13 & 0xffffffff) << 3));
    }
    goto LAB_004c5eec;
  }
  local_408 = 0x50000000;
  uVar20 = *(undefined8 *)PTR_PTR_04bd4d20;
  local_378 = lVar9;
  FUN_00470440(plVar1,uVar20,&local_378,&local_408);
  plVar10 = (long *)FUN_0047a610(param_1[0x22],&local_108,iVar8);
  if ((plVar10 == (long *)0x0) || (*(char *)((long)plVar10 + 0x34) != '\0')) {
    plVar10 = (long *)0x0;
  }
  local_118 = -0x8000000000000000;
  local_120 = 0;
  local_10c = iVar8;
  FUN_0043bd90(&local_128,local_108,lStack_100);
  local_130 = 0x8000000000000000;
  local_138 = (ulong *)0x0;
  local_140 = 0x8000000000000000;
  local_148 = 0;
  FUN_00426990(uVar20,&local_138,8);
  iVar7 = (uint)local_130 + 1;
  FUN_0043bd90(local_138 + (int)(uint)local_130,local_108,lStack_100);
  local_130 = CONCAT44(local_130._4_4_,iVar7);
  if ((uint)local_140 == (local_140._4_4_ & 0x3fffffff)) {
    FUN_00426990(uVar20,&local_148,8);
  }
  *(long *)(local_148 + (long)(int)(uint)local_140 * 8) = lVar9;
  local_140 = CONCAT44(local_140._4_4_,(uint)local_140 + 1);
  if (plVar10 != (long *)0x0) {
    do {
      if (*plVar10 != plVar10[1]) {
        if ((uint)local_118 == (local_118._4_4_ & 0x3fffffff)) {
          FUN_00426990(uVar20,&local_120,8);
        }
        *(long **)(local_120 + (long)(int)(uint)local_118 * 8) = plVar10;
        local_118 = CONCAT44(local_118._4_4_,(uint)local_118 + 1);
      }
      local_378 = plVar10[2];
      local_370 = plVar10[3];
      if (local_378 != local_370) {
        local_378 = FUN_0047b100(param_1[0x22],&local_378,*(undefined4 *)((long)plVar10 + 0x24));
        local_408 = 0x50000000;
        FUN_00470440(plVar1,uVar20,&local_378,&local_408);
        local_378 = plVar10[2];
        local_370 = plVar10[3];
      }
      plVar10 = (long *)FUN_0047a610(param_1[0x22],&local_378,*(undefined4 *)((long)plVar10 + 0x24))
      ;
    } while ((plVar10 != (long *)0x0) && (*(char *)((long)plVar10 + 0x34) == '\0'));
  }
  if ((int)(uint)local_118 < 1) {
    bVar26 = 0;
    if (-1 < local_10c) goto LAB_004c569c;
LAB_004c5828:
    lVar22 = 0;
LAB_004c582c:
    FUN_00451ea0(&local_378);
    FUN_00452230(&local_378,param_1);
    FUN_004225d0(&local_408,*local_138 & 0xfffffffffffffffe);
    uVar5 = FUN_00422a30(&local_408,&DAT_0409a096,0,0x7fffffff);
    if (-1 < (int)uVar5) {
      FUN_00423740(&local_408,local_400 + ~uVar5);
    }
    lVar24 = (long)iVar8;
    FUN_0043bce0(local_498,local_408,0xffffffff);
    uVar5 = *(uint *)(param_1 + 0x10);
    if (uVar5 == (*(uint *)((long)param_1 + 0x84) & 0x3fffffff)) {
      FUN_00426990(uVar20,param_1 + 0xf,8);
      uVar5 = *(uint *)(param_1 + 0x10);
    }
    *(undefined8 *)(param_1[0xf] + (long)(int)uVar5 * 8) = local_498._0_8_;
    local_498._0_8_ = 0;
    *(uint *)(param_1 + 0x10) = uVar5 + 1;
    FUN_0043be10(local_498);
    FUN_00452270(&local_378,
                 *(ulong *)(param_1[0xf] + (long)(int)param_1[0x10] * 8 + -8) & 0xfffffffffffffffe,0
                );
    auVar3._8_8_ = local_498._8_8_;
    auVar3._0_8_ = local_498._0_8_;
    local_308 = local_308 | 0x80010;
    local_268 = param_1 + 0x11;
    local_2e0 = lVar24;
    if ((lVar22 != 0) && (lVar24 = *(long *)(lVar22 + 8), local_498 = auVar3, lVar24 != 0)) {
      puVar25 = (undefined8 *)0x0;
      puVar16 = (undefined8 *)0x0;
      do {
        lVar27 = (**(code **)(*(long *)param_1[0x23] + 0x30))((long *)param_1[0x23],lVar24);
        puVar15 = puVar16;
        if (lVar27 != 0) {
          FUN_004225b0(local_498);
          uVar14 = FUN_00427570(lVar27,local_498,0,0);
          uVar14 = FUN_0043a360(uVar14,param_1);
          uVar6 = FUN_00427340(lVar27);
          puVar15 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x18,0);
          *puVar15 = uVar14;
          *(undefined4 *)(puVar15 + 1) = uVar6;
          puVar15[2] = 0;
          if (puVar16 == (undefined8 *)0x0) {
            puVar25 = puVar15;
          }
          else {
            puVar16[2] = puVar15;
          }
          FUN_00422550(local_498);
        }
        lVar24 = *(long *)(lVar24 + 8);
        puVar16 = puVar15;
      } while (lVar24 != 0);
      if (puVar25 != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,8,0);
        *puVar16 = puVar25;
        local_498._8_8_ = 0;
        local_488 = 0;
        if (puVar16 == (undefined8 *)0x0) {
          local_498 = ZEXT816(0);
          local_488 = 0;
        }
        else {
          local_498 = FUN_00446e00(puVar16,&DAT_04c17350);
          if (local_498._8_8_ == 0) {
            uVar17 = 0;
            uVar13 = local_488;
          }
          else {
            uVar17 = FUN_00428370(local_498._8_8_);
            uVar13 = local_488;
            if ((uVar17 & 1) != 0) {
              FUN_0043dd30(uVar17 & 0xfffffffffffffffe);
              uVar13 = local_488;
            }
          }
          local_488 = uVar17;
          if ((uVar13 & 1) != 0) {
            FUN_0043dd50(uVar13 & 0xfffffffffffffffe);
          }
        }
        FUN_00452380(&local_378,local_498);
        if ((local_488 & 1) != 0) {
          FUN_0043dd50(local_488 & 0xfffffffffffffffe);
        }
      }
    }
    lVar24 = FUN_00429910(&local_108,0x3c,0);
    if (lVar24 != 0) {
      local_308 = local_308 | 0x8000;
      local_288 = 0;
    }
    iVar7 = FUN_004535f0(&local_378,param_1,&local_4a0);
    if (iVar7 < 0) {
      if (DAT_04c717f8 != 0) {
        FUN_00444bc0(local_498,&DAT_04c717a8,1);
        lVar24 = FUN_004446b0(local_498,"Failed to allocate type from builder",&DAT_0413df78);
        *(char **)(lVar24 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkModifiableTypeSet.cpp"
        ;
        *(undefined8 *)(lVar24 + 0x30) = 0x5f2;
        FUN_00444c00(local_498);
      }
      uVar14 = 0;
      bVar2 = false;
    }
    else {
      uVar13 = FUN_00428440(local_4a0);
      if ((uVar13 & 0x1f) != 7) {
        local_4a0 = 0;
      }
      bVar2 = true;
      uVar14 = local_4a0;
    }
    FUN_00422550(&local_408);
    FUN_00451fa0(&local_378);
    if (!bVar2) {
      uVar5 = local_140._4_4_;
      lVar9 = local_140;
      goto joined_r0x004c5f24;
    }
    lVar24 = param_1[0xc];
    puVar16 = (undefined8 *)(**(code **)(*param_1 + 0x10))(param_1,0x78,0);
    *puVar16 = uVar14;
    puVar16[1] = param_4;
    *(int *)(puVar16 + 2) = iVar8;
    *(undefined4 *)((long)puVar16 + 0x14) = 0;
    puVar16[3] = param_1;
    puVar16[4] = 0;
    puVar16[9] = 0x8000000000000000;
    puVar16[5] = 0x8000000000000000;
    puVar16[6] = 0;
    puVar16[7] = 0x8000000000000000;
    puVar16[8] = 0;
    plVar10 = puVar16 + 10;
    *plVar10 = 0;
    *(undefined4 *)(puVar16 + 0xd) = 1;
    puVar16[0xe] = lVar9;
    puVar16[0xb] = 0x8000000000000000;
    puVar16[0xc] = 0;
    uVar5 = *(uint *)(param_1 + 0xc);
    if (uVar5 == (*(uint *)((long)param_1 + 100) & 0x3fffffff)) {
      FUN_00426990(uVar20,param_1 + 0xb,8);
      uVar5 = *(uint *)(param_1 + 0xc);
    }
    *(undefined8 **)(param_1[0xb] + (long)(int)uVar5 * 8) = puVar16;
    *(uint *)(param_1 + 0xc) = uVar5 + 1;
    if (0 < (int)(uint)local_140) {
      lVar9 = 0;
      do {
        local_378 = *(long *)(local_148 + lVar9 * 8);
        local_408 = (long)(int)lVar24;
        FUN_00470440(plVar1,uVar20,&local_378,&local_408);
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)(uint)local_140);
    }
    if ((lVar22 != 0) && (-1 < local_10c)) {
      uVar13 = FUN_00428440(lVar22);
      if ((uVar13 & 0x1f) != 7) {
        lVar22 = 0;
      }
      iVar8 = FUN_004284f0(lVar22);
      if (0 < iVar8) {
        iVar8 = 0;
        do {
          local_408 = FUN_004285f0(lVar22,iVar8);
          uVar13 = FUN_004290b0(&local_408);
          if ((uVar13 & 1) == 0) {
            uVar14 = FUN_00427b40(&local_408);
            FUN_004297c0(&local_378,uVar14);
            FUN_004c87d0(puVar16,&local_378,local_408);
          }
          iVar8 = iVar8 + 1;
          iVar7 = FUN_004284f0(lVar22);
        } while (iVar8 < iVar7);
      }
      lVar9 = FUN_004270a0(lVar22);
      if ((lVar9 != 0) && (*(short *)(lVar9 + 8) != 0)) {
        uVar13 = 0;
        do {
          puVar25 = (undefined8 *)(lVar9 + 0x10 + uVar13 * 0x10);
          FUN_004297c0(&local_378,puVar25[1]);
          uVar5 = *(uint *)(puVar16 + 0xb);
          uVar14 = *puVar25;
          if (0 < (int)uVar5) {
            lVar24 = 0;
            lVar27 = 8;
            do {
              uVar17 = FUN_0043a700(local_378,local_370 - local_378,
                                    *(undefined8 *)(*plVar10 + lVar27));
              if ((uVar17 & 1) != 0) goto LAB_004c5d80;
              uVar5 = *(uint *)(puVar16 + 0xb);
              lVar24 = lVar24 + 1;
              lVar27 = lVar27 + 0x10;
            } while (lVar24 < (int)uVar5);
          }
          if (uVar5 == (*(uint *)((long)puVar16 + 0x5c) & 0x3fffffff)) {
            FUN_00426990(uVar20,plVar10,0x10);
            uVar5 = *(uint *)(puVar16 + 0xb);
          }
          *(uint *)(puVar16 + 0xb) = uVar5 + 1;
          uVar18 = FUN_004adce0(local_378,(int)local_370 - (int)local_378);
          *(undefined8 *)(puVar16[10] + (long)*(int *)(puVar16 + 0xb) * 0x10 + -8) = uVar18;
          *(undefined8 *)(puVar16[10] + (long)*(int *)(puVar16 + 0xb) * 0x10 + -0x10) = uVar14;
LAB_004c5d80:
          uVar13 = uVar13 + 1;
        } while (uVar13 < *(ushort *)(lVar9 + 8));
      }
      lVar9 = FUN_00427d30(lVar22);
      if (lVar9 != 0) {
        uVar5 = *(uint *)(param_1 + 0x1c);
        if (uVar5 == (*(uint *)((long)param_1 + 0xe4) & 0x3fffffff)) {
          FUN_00426990(uVar20,param_1 + 0x1b,0x20);
          uVar5 = *(uint *)(param_1 + 0x1c);
        }
        *(uint *)(param_1 + 0x1c) = uVar5 + 1;
        puVar25 = (undefined8 *)(param_1[0x1b] + (long)(int)uVar5 * 0x20);
        *puVar25 = 0;
        uVar14 = (**(code **)(*(long *)param_1[0x23] + 0x30))((long *)param_1[0x23],lVar9);
        FUN_0043be10(puVar25);
        *puVar25 = 0;
        *(undefined4 *)(puVar25 + 1) = 0xffffffff;
        puVar25[2] = puVar16;
        puVar25[3] = uVar14;
      }
    }
    lVar9 = (long)(int)(uint)local_118;
    if (0 < (int)(uint)local_118) {
      do {
        lVar22 = lVar9 + -1;
        lVar9 = *(long *)(local_120 + lVar9 * 8 + -8);
        FUN_004c8a00(puVar16,lVar9);
        local_10c = *(int *)(lVar9 + 0x24);
        if (*(long *)(lVar9 + 0x10) != *(long *)(lVar9 + 0x18)) {
          FUN_00429cb0(lVar9,lVar9 + 0x10);
        }
        lVar9 = lVar22;
      } while (0 < lVar22);
    }
    uVar5 = local_140._4_4_;
    lVar9 = local_140;
joined_r0x004c5e68:
    local_140 = (ulong)uVar5 << 0x20;
    if (-1 < lVar9) goto LAB_004c5800;
LAB_004c5e6c:
    iVar8 = (uint)local_130;
  }
  else {
    lVar22 = 0;
    bVar26 = 0;
    do {
      lVar27 = *(long *)(local_120 + lVar22 * 8);
      lVar24 = (long)*(int *)(lVar27 + 0x30);
      if (0 < *(int *)(lVar27 + 0x30)) {
        lVar23 = lVar24 << 4;
        do {
          lVar12 = *(long *)(lVar27 + 0x28) + lVar23;
          if ((*(char *)(lVar12 + -0x10) == '\a') &&
             (plVar10 = *(long **)(lVar12 + -8), plVar10 != (long *)0x0)) {
            local_378 = *plVar10;
            local_370 = plVar10[1];
            local_408 = FUN_0047b100(param_1[0x22],&local_378,(int)plVar10[2]);
            local_498._0_8_ = 0xffffffffffffffff;
            piVar11 = (int *)FUN_004706d0(plVar1,&local_408,local_498);
            if ((*piVar11 == -1) &&
               (lVar12 = FUN_004c51d0(param_1,&local_378,(int)plVar10[2],0), lVar12 == 0))
            goto LAB_004c57f0;
          }
          lVar24 = lVar24 + -1;
          lVar23 = lVar23 + -0x10;
        } while (0 < lVar24);
      }
      if ((*(long *)(lVar27 + 0x10) != *(long *)(lVar27 + 0x18)) &&
         ((local_128 & 0xfffffffffffffffe) != 0)) {
        local_378 = *(long *)(lVar27 + 0x10);
        local_370 = *(long *)(lVar27 + 0x18);
        FUN_004297c0(&local_408,local_128 & 0xfffffffffffffffe);
        uVar13 = FUN_00429cb0(&local_378,&local_408);
        if ((uVar13 & 1) == 0) {
          FUN_0043bf00(&local_128,*(undefined8 *)(lVar27 + 0x10),*(undefined8 *)(lVar27 + 0x18));
          if ((uint)local_130 == (local_130._4_4_ & 0x3fffffff)) {
            FUN_00426990(uVar20,&local_138,8);
          }
          iVar7 = (int)local_130;
          FUN_0043bd50(local_138 + iVar7,&local_128);
          bVar26 = 1;
          local_130 = CONCAT44(local_130._4_4_,iVar7 + 1);
        }
      }
      if (*(long *)(lVar27 + 0x10) != *(long *)(lVar27 + 0x18)) {
        local_378 = *(long *)(lVar27 + 0x10);
        local_370 = *(long *)(lVar27 + 0x18);
        uVar14 = FUN_0047b100(param_1[0x22],&local_378,*(undefined4 *)(lVar27 + 0x24));
        if ((uint)local_140 == (local_140._4_4_ & 0x3fffffff)) {
          FUN_00426990(uVar20,&local_148,8);
        }
        *(undefined8 *)(local_148 + (long)(int)(uint)local_140 * 8) = uVar14;
        local_140 = CONCAT44(local_140._4_4_,(uint)local_140 + 1);
      }
      local_10c = *(int *)(lVar27 + 0x24);
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)(uint)local_118);
    if (local_10c < 0) goto LAB_004c5828;
LAB_004c569c:
    plVar10 = (long *)param_1[0x23];
    if ((bool)(param_4 == 0 | bVar26)) {
      lVar22 = (**(code **)(*plVar10 + 0x20))(plVar10,local_128 & 0xfffffffffffffffe);
      if (lVar22 == 0) goto LAB_004c5770;
LAB_004c56cc:
      iVar7 = FUN_00427340(lVar22);
      if ((iVar7 != local_10c) && ((*(byte *)(param_1 + 0x2d) & 1) == 0)) {
        if (1 < DAT_04c717f8) {
          FUN_00444bc0(&local_378,&DAT_04c717a8,2);
          uVar6 = FUN_00427340(lVar22);
          local_408 = CONCAT44(local_408._4_4_,uVar6);
          lVar9 = FUN_004446b0(&local_378,
                               "Patches say class {} version {} should be present, but version {} is registered"
                               ,&DAT_04868818,&local_128,&local_10c,&local_408);
          *(char **)(lVar9 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkModifiableTypeSet.cpp"
          ;
          *(undefined8 *)(lVar9 + 0x30) = 0x5b3;
          uVar6 = 0x6a320fb;
          goto LAB_004c57d0;
        }
        goto LAB_004c57f0;
      }
      goto LAB_004c582c;
    }
    lVar22 = (**(code **)(*plVar10 + 0x30))(plVar10,param_4);
    if (lVar22 != 0) goto LAB_004c56cc;
LAB_004c5770:
    if ((*(byte *)(param_1 + 0x2d) & 1) != 0) goto LAB_004c5828;
    if (1 < DAT_04c717f8) {
      FUN_00444bc0(&local_378,&DAT_04c717a8,2);
      lVar9 = FUN_004446b0(&local_378,
                           "Patches are trying to create class {} but it is not registered",
                           &DAT_04868780,&local_128);
      *(char **)(lVar9 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkModifiableTypeSet.cpp"
      ;
      *(undefined8 *)(lVar9 + 0x30) = 0x5a7;
      uVar6 = 0x2db84748;
LAB_004c57d0:
      *(undefined4 *)(lVar9 + 0xc) = uVar6;
      FUN_00444c00(&local_378);
      puVar16 = (undefined8 *)0x0;
      uVar5 = local_140._4_4_;
      lVar9 = local_140;
      goto joined_r0x004c5e68;
    }
LAB_004c57f0:
    uVar5 = local_140._4_4_;
    lVar9 = local_140;
joined_r0x004c5f24:
    local_140 = (ulong)uVar5 << 0x20;
    puVar16 = (undefined8 *)0x0;
    if (lVar9 < 0) goto LAB_004c5e6c;
LAB_004c5800:
    if (local_148 == 0) goto LAB_004c5e6c;
    FUN_00421f90(uVar20,local_148,8,uVar5 & 0x3fffffff);
    iVar8 = (uint)local_130;
  }
  if (0 < iVar8) {
    puVar21 = local_138 + iVar8;
    do {
      puVar21 = puVar21 + -1;
      FUN_0043be10(puVar21);
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  lVar9 = local_130;
  uVar5 = local_130._4_4_;
  local_130 = (ulong)local_130._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_138 != (ulong *)0x0)) {
    FUN_00421f90(uVar20,local_138,8,uVar5 & 0x3fffffff);
  }
  FUN_0043be10(&local_128);
  lVar9 = local_118;
  uVar5 = local_118._4_4_;
  local_118 = (ulong)local_118._4_4_ << 0x20;
  if ((-1 < lVar9) && (local_120 != 0)) {
    FUN_00421f90(uVar20,local_120,8,uVar5 & 0x3fffffff);
  }
LAB_004c5eec:
  FUN_00422550(auStack_f8);
  return puVar16;
}

