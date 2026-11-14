
void FUN_01da7d90(byte *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  byte *pbVar6;
  uint *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  int iVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  long *plVar20;
  long *plVar21;
  ulong uVar22;
  byte *pbVar23;
  byte bVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined4 *puVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  long lVar31;
  long *plVar32;
  byte local_cc [4];
  undefined8 local_c8;
  char *local_c0;
  undefined8 uStack_b8;
  int local_a4;
  undefined4 local_a0;
  byte local_94 [4];
  undefined8 local_90;
  long *local_88;
  undefined8 *puStack_80;
  int local_78;
  byte local_70 [4];
  byte local_6c [4];
  byte local_68 [4];
  undefined4 local_64;
  
  puVar3 = PTR_DAT_04bb27d0;
  plVar21 = *(long **)PTR_DAT_04bb27d0;
  iVar16 = *(int *)(plVar21[2] + 0xaa0);
  lVar26 = *(long *)PTR_DAT_04bb39b0;
  if (lVar26 == 0) {
    local_68[0] = *PTR_DAT_04bb32e0;
    if (7 < local_68[0]) goto LAB_01da7e34;
LAB_01da7e94:
    if (7 < local_68[0]) {
      local_68[0] = 0xff;
    }
    lVar26 = *plVar21;
  }
  else {
    pbVar23 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar26 + 0x15c) != 0) {
      pbVar23 = (byte *)(lVar26 + 0x158);
    }
    local_68[0] = *pbVar23;
    if ((local_68[0] < 8) ||
       (((*(int *)(lVar26 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (local_68[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), local_68[0] < 8))))
    goto LAB_01da7e94;
LAB_01da7e34:
    lVar26 = *plVar21;
    bVar24 = *(byte *)(lVar26 + 0x473);
    pbVar23 = PTR_DAT_04bb5038;
    if ((long)(char)bVar24 != 0xffffffffffffffff) {
      puVar7 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar7 = (uint *)(lVar26 + 0x48);
      }
      if ((*puVar7 & 8) != 0) {
        pbVar23 = (byte *)(lVar26 + 0x471);
      }
    }
    local_68[0] = *pbVar23;
    if (7 < local_68[0]) {
      local_68[0] = *PTR_DAT_04bb5038;
      goto LAB_01da7e94;
    }
  }
  bVar24 = *param_1;
  pbVar23 = PTR_DAT_04bb32e0;
  if ((long)(char)bVar24 != 0xffffffffffffffff) {
    pbVar6 = (byte *)(lVar26 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x80;
    if (7 < bVar24) {
      pbVar6 = (byte *)(lVar26 + 0x48);
    }
    if ((*pbVar6 & 1) != 0) {
      pbVar23 = pbVar6 + 0x78;
    }
  }
  local_6c[0] = *pbVar23;
  if (7 < local_6c[0]) {
    local_6c[0] = 0xff;
  }
  FUN_0264f5a0(local_6c);
  puVar19 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)(uint)(int)(char)*param_1 * 6;
  if (7 < (uint)(int)(char)*param_1) {
    puVar19 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
  }
  plVar21 = puVar19 + 1;
  lVar26 = *plVar21;
  if (lVar26 != 0) {
    lVar25 = *(long *)PTR_DAT_04bb49f8;
    uVar15 = *(uint *)(lVar25 + 0x28);
    if (uVar15 != 0xffffffff) {
      if (*(uint *)(lVar25 + 8) <= uVar15) {
        uVar15 = 0;
      }
      lVar25 = *(long *)(lVar25 + 0x10) + (long)(int)uVar15 * 0x40;
      if ((*(char *)(lVar25 + 0x39) != '\0') && (0 < (int)*(uint *)(lVar25 + 0x20))) {
        uVar22 = 0;
        uVar27 = (ulong)*(uint *)(lVar25 + 0x20);
        do {
          if (*(uint *)(lVar25 + 0x10) <= (uint)uVar22 || *(long *)(lVar25 + 0x18) == 0) break;
          lVar17 = nn::friends::Friend::GetAccountId();
          uVar4 = (uVar27 & 0xffffffff00000000) + 0x100000000;
          uVar22 = uVar4 >> 0x20;
          bVar11 = false;
          bVar12 = false;
          if (lVar17 != lVar26) {
            iVar13 = (int)(uVar4 >> 0x20);
            bVar12 = SBORROW4(iVar13,(int)uVar27);
            bVar11 = iVar13 - (int)uVar27 < 0;
          }
          uVar27 = uVar4 | uVar27 & 0xffffffff;
        } while (bVar11 != bVar12);
      }
    }
  }
  local_70[0] = local_6c[0];
  if (7 < local_6c[0]) {
    local_70[0] = 0xff;
  }
  lVar26 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_70,1);
  plVar32 = *(long **)puVar3;
  if (*(long *)PTR_DAT_04bb6270 != 0) {
    FUN_00a715d0(*(long *)PTR_DAT_04bb6270,1);
  }
  lVar25 = *(long *)PTR_DAT_04bb4778;
  if (lVar25 != 0) {
    memset((void *)(lVar25 + 0x2a58),0,0x4800);
    *(undefined2 *)(lVar25 + 0x87e0) = 0;
    *(undefined4 *)(lVar25 + 0x9150) = 0;
  }
  FUN_022c0370();
  puVar3 = PTR_DAT_04bc2f38;
  uVar15 = 0;
  *PTR_DAT_04bc2da0 = 0xff;
  do {
    uVar27 = (ulong)uVar15;
    uVar15 = uVar15 + 1;
    lVar25 = (long)(uVar27 << 0x20) >> 0x1a;
    *(undefined8 *)(puVar3 + lVar25 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar3 + lVar25 + 0x20) = 0;
    *(undefined4 *)(puVar3 + lVar25 + 0x30) = 0;
    *(undefined8 *)(puVar3 + lVar25 + 0x34) = 0xffff000000000000;
    puVar3[lVar25 + 0x3e] = 0;
    *(undefined2 *)(puVar3 + lVar25 + 0x3c) = 0;
    puVar10 = PTR_DAT_04bb5018;
    puVar1 = PTR_DAT_04bb4760;
  } while (uVar15 != 0x14);
  DAT_04c47fa4 = 0xe;
  DAT_0514f75a = 0;
  DAT_0514f758 = 0xeff;
  iVar13 = 0;
  lVar25 = *(long *)PTR_DAT_04bb4760;
  bVar24 = *PTR_DAT_04bb5018;
  do {
    lVar17 = lVar25 + (long)iVar13 * 0x15;
    iVar13 = iVar13 + 1;
    *(byte *)(lVar17 + 6) = bVar24 >> 6 | bVar24 << 2;
    *(byte *)(lVar17 + 8) = *(byte *)(lVar17 + 8) & 0xc0;
    *(byte *)(lVar17 + 5) = *(byte *)(lVar17 + 5) & 3 | bVar24 << 2;
    *(byte *)(lVar17 + 7) = *(byte *)(lVar17 + 7) & 0xc | bVar24 >> 6;
  } while (iVar13 != 0x6d);
  lVar17 = 0;
  plVar20 = (long *)(lVar25 + 0x900);
  do {
    plVar5 = (long *)(lVar25 + lVar17);
    if ((*plVar20 != *plVar5 || plVar20[1] != plVar5[1]) ||
        *(long *)((long)plVar20 + 0xd) != *(long *)((long)plVar5 + 0xd)) {
      lVar31 = *plVar5;
      lVar9 = plVar5[1];
      *(undefined8 *)((long)plVar20 + 0xd) = *(undefined8 *)((long)plVar5 + 0xd);
      *plVar20 = lVar31;
      plVar20[1] = lVar9;
    }
    lVar17 = lVar17 + 0x15;
    plVar20 = plVar20 + 5;
  } while (lVar17 != 0x8dc);
  iVar13 = 0;
  do {
    lVar17 = (long)iVar13;
    iVar13 = iVar13 + 1;
    *(byte *)(lVar25 + 0x1a00 + lVar17) = *(byte *)(lVar25 + 0x1a00 + lVar17) & 0xfe;
  } while (iVar13 != 0x6d);
  *(undefined8 *)(lVar25 + 0x1a78) = 0;
  puVar3 = PTR_DAT_04bb4768;
  uVar27 = 0;
  *(undefined8 *)(lVar25 + 0x1a70) = 0;
  lVar25 = *(long *)puVar3;
  do {
    uVar22 = uVar27 << 1;
    uVar4 = uVar27 >> 0x1f;
    uVar15 = (int)uVar27 + 1;
    uVar27 = (ulong)uVar15;
    *(undefined2 *)(lVar25 + 0x30 + (-uVar4 & 0xfffffffe00000000 | uVar22)) = 0;
  } while (uVar15 != 0x6d);
  lVar25 = 0;
  iVar13 = 0;
  puVar28 = *(undefined4 **)PTR_DAT_04bb5010;
  *puVar28 = 0;
  *(undefined8 *)(puVar28 + 2) = 0xffffffff;
  *(undefined *)(puVar28 + 1) = *puVar10;
  lVar31 = *(long *)puVar1;
  lVar17 = *(long *)PTR_DAT_04bbaed0;
  do {
    FUN_020e9d20(lVar31 + (long)iVar13 * 0x15,lVar17 + lVar25);
    FUN_020ea498(lVar31,iVar13,1,0);
    lVar25 = lVar25 + 6;
    iVar13 = iVar13 + 1;
  } while (lVar25 != 0x3c);
  lVar25 = *plVar32;
  bVar24 = *(byte *)(lVar25 + 0x473);
  if ((long)(char)bVar24 == 0xffffffffffffffff) {
LAB_01da8298:
    uVar29 = *(undefined8 *)puVar1;
    iVar13 = 0xb;
    bVar11 = true;
    do {
      FUN_020ea498(uVar29,iVar13,1,0);
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0x51);
  }
  else {
    pbVar23 = (byte *)(lVar25 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x80;
    if (7 < bVar24) {
      pbVar23 = (byte *)(lVar25 + 0x48);
    }
    if (((*pbVar23 >> 3 & 1) == 0) || (*(byte *)(lVar25 + 0x472) == bVar24)) goto LAB_01da8298;
    bVar11 = false;
  }
  plVar32 = (long *)PTR_DAT_04bb27d0;
  puVar3 = PTR_DAT_04bb2020;
  local_c8 = PTR_DAT_04bb2020 + 0x10;
  local_c0 = "MainmenuFriendList";
  iVar13 = FUN_0274bce0(local_68,&local_c8);
  uVar15 = (uint)*param_1;
  if (iVar13 != 0) {
    lVar25 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + (ulong)(uint)(int)(char)*param_1 * 0x30;
    if (7 < uVar15) {
      lVar25 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
    }
    if (*(char *)(lVar25 + 0x28) != '\0') {
      local_90 = (undefined *)0x0;
      uVar27 = FUN_01df3070(&local_90);
      if ((((uVar27 & 1) != 0) && (local_90 != (undefined *)*plVar21)) &&
         (FUN_02645730(&local_c8,local_68), lVar26 != 0)) {
        if ((*(long **)(lVar26 + 0x28) == (long *)0x0) ||
           (puVar18 = (undefined8 *)**(long **)(lVar26 + 0x28), puVar18 == (undefined8 *)0x0)) {
          uVar27 = 0;
        }
        else {
          uVar27 = (**(code **)*puVar18)();
          uVar27 = uVar27 & 0xffffffff;
        }
        lVar25 = *(long *)(lVar26 + 0x10) + *(long *)(lVar26 + 8);
        lVar17 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + (ulong)(uint)(int)(char)*param_1 * 0x30;
        if (7 < (uint)(int)(char)*param_1) {
          lVar17 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
        }
        FUN_02645cc0(&local_c8,puVar19,plVar21,lVar25 + 0xc138,lVar25 + 0x1d18,
                     *(undefined1 *)(lVar17 + 0x2a));
        if ((((uVar27 & 1) != 0) && (*(long *)(lVar26 + 0x28) != 0)) &&
           (puVar18 = *(undefined8 **)(*(long *)(lVar26 + 0x28) + 8), puVar18 != (undefined8 *)0x0))
        {
          (**(code **)*puVar18)();
        }
      }
      uVar15 = (uint)*param_1;
    }
  }
  FUN_01c95210(*(undefined8 *)(*(long *)PTR_DAT_04bb21d0 + 0xf88),
               (long)(1 << (ulong)(uVar15 & 0x1f)));
  if (iVar16 != 3) {
    local_c8 = puVar3 + 0x10;
    if (bVar11) {
      local_c0 = "PE_MultiPlay_ComePlayer";
    }
    else {
      local_c0 = "PE_Multiplay_WithOtherVisitor";
    }
    uVar30 = *puVar19;
    uVar29 = *(undefined8 *)PTR_DAT_04bb49a0;
    uVar14 = FUN_006bd550(local_c0,0);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar14);
    uVar29 = FUN_01b5b4b0(uVar29,&local_90);
    FUN_01b66700(&local_c8,uVar30,uVar29,local_68,0);
  }
  lVar25 = *(long *)PTR_DAT_04bbaed0 + 0xd8 + (ulong)(uint)(int)(char)*param_1 * 0x30;
  if (7 < (uint)(int)(char)*param_1) {
    lVar25 = *(long *)PTR_DAT_04bbaed0 + 0xd8;
  }
  if ((lVar26 != 0) && (*(char *)(lVar25 + 0x29) != '\0')) {
    if ((*(long **)(lVar26 + 0x17bb0) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar26 + 0x17bb0), puVar18 == (undefined8 *)0x0)) {
      uVar27 = 0;
    }
    else {
      uVar27 = (**(code **)*puVar18)();
      uVar27 = uVar27 & 0xffffffff;
    }
    bVar24 = *(byte *)(*(long *)*plVar32 + 0x476);
    local_90 = puVar3 + 0x10;
    local_88 = (long *)0x407d2c7;
    FUN_025ffac8(&local_c8,&local_90,local_68);
    puVar1 = PTR_DAT_04bc3350 + 0x10;
    local_90 = (undefined *)(*(long *)(lVar26 + 0x17b98) + *(long *)(lVar26 + 0x17b90));
    local_c8 = puVar1;
    local_88 = plVar21;
    puStack_80 = puVar19;
    local_78 = bVar24 - 1;
    FUN_025ba248(&local_c8,&local_90);
    local_c8 = puVar1;
    iVar13 = FUN_025ba820(&local_c8);
    if (iVar13 == -1) {
LAB_01da8590:
      if (local_a4 == 0) {
        local_a4 = 1;
      }
    }
    else {
      iVar13 = (**(code **)(local_c8 + 0x20))(&local_c8);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar13);
      if (0xc < iVar13) goto LAB_01da8590;
    }
    FUN_02601530(&local_c8);
    if ((((uVar27 & 1) != 0) && (*(long *)(lVar26 + 0x17bb0) != 0)) &&
       (puVar19 = *(undefined8 **)(*(long *)(lVar26 + 0x17bb0) + 8), puVar19 != (undefined8 *)0x0))
    {
      (**(code **)*puVar19)();
    }
  }
  FUN_008a41e8(*(undefined8 *)PTR_DAT_04bb27b8,local_6c);
  if (iVar16 == 3) {
    local_94[0] = *param_1;
    FUN_02a2d838(*(undefined8 *)PTR_DAT_04bb26a8,local_94);
  }
  else {
    lVar26 = *(long *)*plVar32;
    bVar24 = *(byte *)(lVar26 + 0x473);
    if ((long)(char)bVar24 == 0xffffffffffffffff) {
LAB_01da8638:
      bVar12 = true;
    }
    else {
      pbVar23 = (byte *)(lVar26 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x80;
      if (7 < bVar24) {
        pbVar23 = (byte *)(lVar26 + 0x48);
      }
      if ((*pbVar23 >> 3 & 1) == 0) goto LAB_01da8638;
      bVar12 = *(byte *)(lVar26 + 0x472) == bVar24;
    }
    FUN_021a4e90(&DAT_053fe348,bVar12);
    DAT_05454054 = 0;
    FUN_021af274(&DAT_053fe348);
    puVar1 = PTR_DAT_04bb32e8;
    lVar26 = *(long *)*plVar32;
    bVar24 = *(byte *)(lVar26 + 0x473);
    if ((long)(char)bVar24 == 0xffffffffffffffff) {
LAB_01da86b4:
      local_c0 = "InviteFriend";
      local_c8 = puVar3 + 0x10;
      FUN_0279a9f0(local_68,&local_c8,1);
      local_c0 = "InviteVisitorNum";
      bVar24 = local_68[0];
      if (7 < local_68[0]) {
        bVar24 = 0xff;
      }
      local_64 = CONCAT31(local_64._1_3_,bVar24);
      local_c8 = puVar3 + 0x10;
      uVar14 = FUN_02582fe0(&local_64);
      local_90 = (undefined *)CONCAT44(local_90._4_4_,uVar14);
      FUN_021294b0(&local_c8,1,&local_90);
      if ((*(long *)PTR_DAT_04bb46b0 != 0) &&
         (lVar26 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x30)
                   )(), lVar26 != 0)) {
        lVar25 = *(long *)(lVar26 + 0x276cd8);
        if (lVar25 == 0) {
          uVar27 = 0;
          pbVar23 = PTR_DAT_04bb32e0;
        }
        else {
          if (*(undefined8 **)(lVar25 + 0x10) == (undefined8 *)0x0) {
            uVar27 = 0;
          }
          else {
            uVar27 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
            lVar25 = *(long *)(lVar26 + 0x276cd8);
            uVar27 = uVar27 & 0xffffffff;
            pbVar23 = PTR_DAT_04bb32e0;
            if (lVar25 == 0) goto LAB_01da87c8;
          }
          pbVar23 = PTR_DAT_04bb32e0;
          plVar20 = *(long **)(lVar25 + 0x20);
          if (plVar20 != (long *)0x0) {
            local_c8 = *(undefined **)(lVar26 + 0x276cb8);
            local_c0 = *(char **)(lVar26 + 0x276cc0);
            uStack_b8 = 0x3fd140;
            (**(code **)(*plVar20 + 0x20))(plVar20,&local_c8);
          }
        }
LAB_01da87c8:
        lVar25 = *(long *)(lVar26 + 0x276cb8);
        lVar17 = *(long *)(lVar26 + 0x276cc0);
        lVar31 = *(long *)PTR_DAT_04bb39b0;
        if (lVar31 == 0) {
          if (7 < *pbVar23) goto LAB_01da883c;
LAB_01da8894:
          bVar24 = *pbVar23;
          if (7 < bVar24) {
            bVar24 = 0xff;
          }
        }
        else {
          if (*(int *)(lVar31 + 0x15c) != 0) {
            pbVar23 = (byte *)(lVar31 + 0x158);
          }
          if ((*pbVar23 < 8) ||
             (((*(int *)(lVar31 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar23 < 8))))
          goto LAB_01da8894;
LAB_01da883c:
          if ((long *)*plVar32 == (long *)0x0) {
LAB_01da888c:
            pbVar23 = PTR_DAT_04bb5038;
            goto LAB_01da8894;
          }
          lVar31 = *(long *)*plVar32;
          bVar24 = *(byte *)(lVar31 + 0x473);
          pbVar23 = PTR_DAT_04bb5038;
          if ((long)(char)bVar24 != 0xffffffffffffffff) {
            puVar7 = (uint *)(lVar31 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
            if (7 < bVar24) {
              puVar7 = (uint *)(lVar31 + 0x48);
            }
            if ((*puVar7 & 8) != 0) {
              pbVar23 = (byte *)(lVar31 + 0x471);
            }
          }
          bVar24 = *pbVar23;
          if (7 < bVar24) goto LAB_01da888c;
        }
        if (7 < bVar24) {
          bVar24 = 0xff;
        }
        local_c8 = (undefined *)CONCAT71(local_c8._1_7_,bVar24);
        uVar15 = FUN_02582fe0(&local_c8);
        lVar31 = *(long *)*plVar32;
        bVar24 = *(byte *)(lVar31 + 0x473);
        if ((long)(char)bVar24 == 0xffffffffffffffff) {
LAB_01da88ec:
          bVar12 = true;
        }
        else {
          pbVar23 = (byte *)(lVar31 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x80;
          if (7 < bVar24) {
            pbVar23 = (byte *)(lVar31 + 0x48);
          }
          if ((*pbVar23 >> 3 & 1) == 0) goto LAB_01da88ec;
          bVar12 = *(byte *)(lVar31 + 0x472) == bVar24;
        }
        if ((uVar15 < 8) && (bVar12)) {
          puVar2 = &LAB_003c6040 + lVar17 + lVar25 + (ulong)uVar15 * 0x6c0;
          uVar15 = FUN_027f19f4(puVar2,local_6c);
          if (-1 < (int)uVar15) {
            uVar22 = (long)(char)*param_1 & 0xffffffff;
            if (7 < *param_1) {
              uVar22 = 0;
            }
            (&DAT_05454114)[uVar22] = uVar15;
            puVar8 = puVar2 + (ulong)uVar15 * 0xd8;
            if (7 < uVar15) {
              puVar8 = puVar2;
            }
            *(long *)(puVar8 + 0xd0) = *plVar21;
          }
        }
        if ((((uVar27 & 1) != 0) && (*(long *)(lVar26 + 0x276cd8) != 0)) &&
           (puVar19 = *(undefined8 **)(*(long *)(lVar26 + 0x276cd8) + 0x18),
           puVar19 != (undefined8 *)0x0)) {
          (**(code **)*puVar19)();
        }
      }
      uVar27 = (long)(char)*param_1 & 0xffffffff;
      if (7 < *param_1) {
        uVar27 = 0;
      }
      uVar22 = (ulong)(uint)(&DAT_05454114)[uVar27];
      if (7 < (uint)(&DAT_05454114)[uVar27]) {
        uVar22 = 0;
      }
      (&DAT_054540d4)[uVar22] = *(undefined8 *)(*(long *)puVar1 + 0x4060);
    }
    else {
      pbVar23 = (byte *)(lVar26 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x80;
      if (7 < bVar24) {
        pbVar23 = (byte *)(lVar26 + 0x48);
      }
      if (((*pbVar23 >> 3 & 1) == 0) || (*(byte *)(lVar26 + 0x472) == bVar24)) goto LAB_01da86b4;
    }
    if (DAT_053fee41 != '\0') {
      DAT_053fee34 = 0;
    }
    if (DAT_053ff9e1 != '\0') {
      DAT_053ff9d4 = 0;
    }
    if (DAT_05400581 != '\0') {
      DAT_05400574 = 0;
    }
    if (DAT_05401121 != '\0') {
      DAT_05401114 = 0;
    }
    if (DAT_05401cc1 != '\0') {
      DAT_05401cb4 = 0;
    }
    if (DAT_05402861 != '\0') {
      DAT_05402854 = 0;
    }
    if (DAT_05403401 != '\0') {
      DAT_054033f4 = 0;
    }
    if (DAT_05403fa1 != '\0') {
      DAT_05403f94 = 0;
    }
    if (DAT_05404b41 != '\0') {
      DAT_05404b34 = 0;
    }
    if (DAT_054056e1 != '\0') {
      DAT_054056d4 = 0;
    }
    if (bVar11) {
      if ((DAT_053fee41 != '\0') && (DAT_053fede8 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_053fede8 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90 = (undefined *)
                   ((ulong)CONCAT52(CONCAT41((int)((ulong)local_90 >> 0x20),
                                             DAT_053fede8 == &DAT_053fedd8),
                                    CONCAT11(*DAT_053fede8,(char)local_64)) << 8);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      if ((DAT_053ff9e1 != '\0') && (DAT_053ff988 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_053ff988 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
        local_90._0_2_ = CONCAT11((char)local_64,1);
        local_90._0_3_ = CONCAT12(*DAT_053ff988,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_053ff988 == (undefined1 *)0x53ff978),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      if ((DAT_05400581 != '\0') && (DAT_05400528 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_05400528 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._0_2_ = CONCAT11((char)local_64,2);
        local_90._0_3_ = CONCAT12(*DAT_05400528,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_05400528 == (undefined1 *)0x5400518),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      if ((DAT_05401121 != '\0') && (DAT_054010c8 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_054010c8 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._0_2_ = CONCAT11((char)local_64,3);
        local_90._0_3_ = CONCAT12(*DAT_054010c8,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_054010c8 == (undefined1 *)0x54010b8),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      puVar1 = PTR_DAT_04bb27d0;
      if ((DAT_05401cc1 != '\0') && (DAT_05401c68 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_05401c68 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._0_2_ = CONCAT11((char)local_64,4);
        local_90._0_3_ = CONCAT12(*DAT_05401c68,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_05401c68 == (undefined1 *)0x5401c58),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      if ((DAT_05402861 != '\0') && (DAT_05402808 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_05402808 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._0_2_ = CONCAT11((char)local_64,5);
        local_90._0_3_ = CONCAT12(*DAT_05402808,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_05402808 == (undefined1 *)0x54027f8),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      if ((DAT_05403401 != '\0') && (DAT_054033a8 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_054033a8 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._0_2_ = CONCAT11((char)local_64,6);
        local_90._0_3_ = CONCAT12(*DAT_054033a8,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_054033a8 == (undefined1 *)0x5403398),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      if ((DAT_05403fa1 != '\0') && (DAT_05403f48 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_05403f48 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._0_2_ = CONCAT11((char)local_64,7);
        local_90._0_3_ = CONCAT12(*DAT_05403f48,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_05403f48 == (undefined1 *)0x5403f38),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      if ((DAT_05404b41 != '\0') && (DAT_05404ae8 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_05404ae8 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._0_2_ = CONCAT11((char)local_64,8);
        local_90._0_3_ = CONCAT12(*DAT_05404ae8,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_05404ae8 == (undefined1 *)0x5404ad8),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)puVar1 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
      if ((DAT_054056e1 != '\0') && (DAT_05405688 != (undefined1 *)0x0)) {
        local_64 = *(undefined4 *)(DAT_05405688 + 4);
        local_c8._6_2_ = (ushort)((ulong)local_c8 >> 0x30) & 0xff00;
        local_c8 = (undefined *)CONCAT26(local_c8._6_2_,0xff0000000000);
        local_90._0_2_ = CONCAT11((char)local_64,9);
        local_90._0_3_ = CONCAT12(*DAT_05405688,(undefined2)local_90);
        local_90 = (undefined *)
                   CONCAT53(CONCAT41(local_90._4_4_,DAT_05405688 == (undefined1 *)0x5405678),
                            (undefined3)local_90);
        if (-1 < DAT_053d0dd0) {
          FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0dd0,&local_c8,&local_90,4,0);
        }
      }
    }
    local_94[0] = *param_1;
    FUN_02a2d838(*(undefined8 *)PTR_DAT_04bb26a8,local_94);
    lVar26 = *(long *)PTR_DAT_04bb30a0;
    *(undefined4 *)(lVar26 + 0x653f4) = 1;
    *(undefined8 *)(lVar26 + 0x653ec) = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    plVar32 = (long *)PTR_DAT_04bb27d0;
  }
  FUN_029377c0(*(undefined8 *)PTR_DAT_04bb47b8);
  FUN_0142b16c(*(undefined8 *)PTR_DAT_04bb4208);
  plVar32 = (long *)*plVar32;
  if ((*(int *)(plVar32[2] + 0xaa0) == 3) && (local_6c[0] < 8)) {
    *(uint *)(*(long *)PTR_DAT_04bb4718 + 0x23c0) =
         *(uint *)(*(long *)PTR_DAT_04bb4718 + 0x23c0) | 1 << (ulong)(local_6c[0] & 0x1f);
  }
  if (iVar16 != 3) {
    return;
  }
  lVar26 = *(long *)PTR_DAT_04bb39b0;
  if (lVar26 == 0) {
    local_cc[0] = *PTR_DAT_04bb32e0;
    if (7 < local_cc[0]) goto LAB_01da915c;
LAB_01da91bc:
    if (7 < local_cc[0]) {
      local_cc[0] = 0xff;
    }
  }
  else {
    pbVar23 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar26 + 0x15c) != 0) {
      pbVar23 = (byte *)(lVar26 + 0x158);
    }
    local_cc[0] = *pbVar23;
    if ((local_cc[0] < 8) ||
       (((*(int *)(lVar26 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (local_cc[0] = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), local_cc[0] < 8))))
    goto LAB_01da91bc;
LAB_01da915c:
    lVar26 = *plVar32;
    bVar24 = *(byte *)(lVar26 + 0x473);
    pbVar23 = PTR_DAT_04bb5038;
    if ((long)(char)bVar24 != 0xffffffffffffffff) {
      puVar7 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar7 = (uint *)(lVar26 + 0x48);
      }
      if ((*puVar7 & 8) != 0) {
        pbVar23 = (byte *)(lVar26 + 0x471);
      }
    }
    local_cc[0] = *pbVar23;
    if (7 < local_cc[0]) {
      local_cc[0] = *PTR_DAT_04bb5038;
      goto LAB_01da91bc;
    }
  }
  local_64 = 1;
  local_88 = (long *)PTR_s_net_multiplay_join_inet_04a85e40;
  local_90 = puVar3 + 0x10;
  FUN_025ffac8(&local_c8,&local_90,local_cc);
  puVar3 = PTR_DAT_04bc3360 + 0x10;
  local_a0 = local_64;
  local_c8 = puVar3;
  FUN_025bc8d0(&local_c8,&local_90);
  local_c8 = puVar3;
  iVar16 = FUN_025bd470(&local_c8);
  if (iVar16 != -1) {
    iVar16 = (**(code **)(local_c8 + 0x20))(&local_c8);
    local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar16);
    if (iVar16 < 0xd) goto LAB_01da9264;
  }
  if (local_a4 == 0) {
    local_a4 = 1;
  }
LAB_01da9264:
  FUN_02601530(&local_c8);
  return;
}

