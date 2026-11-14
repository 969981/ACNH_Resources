
/* WARNING: Removing unreachable block (ram,0x01802750) */

void FUN_018024bc(int *param_1)

{
  ulong *puVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined1 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  uint local_d8;
  undefined1 auStack_ce [2];
  undefined1 auStack_cc [2];
  undefined1 auStack_ca [2];
  undefined **local_c8;
  long local_c0;
  char local_b8;
  byte local_b7;
  undefined1 auStack_aa [2];
  undefined1 auStack_a8 [2];
  undefined1 auStack_a6 [2];
  undefined1 auStack_a4 [2];
  undefined1 auStack_a2 [2];
  undefined1 auStack_a0 [2];
  undefined1 auStack_9e [2];
  undefined1 auStack_9c [2];
  undefined1 auStack_9a [2];
  undefined **local_98;
  long local_90;
  undefined2 local_88;
  int local_7c;
  ulong local_78;
  long local_70;
  undefined8 local_68;
  
  iVar4 = *param_1;
  uVar5 = param_1[1];
  uVar7 = uVar5 >> 8 & 3;
  uVar2 = uVar5 & 0x400;
  local_7c = iVar4;
  if (0x427decd < iVar4) {
    if (iVar4 < 0x4d702d55) {
      if (iVar4 < 0x16f2dadc) {
        if (iVar4 != 0x427dece) {
          iVar24 = 0xe716ff8;
          goto LAB_0180267c;
        }
      }
      else if ((iVar4 != 0x16f2dadc) && (iVar4 != 0x1d096e7d)) {
        iVar24 = 0x28c45759;
        goto LAB_0180267c;
      }
    }
    else if (iVar4 < 0x72a13146) {
      if (iVar4 != 0x4d702d55) {
        iVar24 = 0x60c2c4f0;
        goto LAB_0180267c;
      }
    }
    else if ((iVar4 != 0x72a13146) && (iVar4 != 0x7c939885)) {
      iVar24 = 0x77870a84;
      goto LAB_0180267c;
    }
    goto LAB_01802684;
  }
  if (iVar4 < -0x196792d8) {
    if (iVar4 < -0x66cc4d79) {
      if (iVar4 != -0x7b521843) {
        iVar24 = -0x74337aab;
        goto LAB_0180267c;
      }
      goto LAB_01802684;
    }
    if ((iVar4 == -0x66cc4d79) || (iVar4 == -0x4772f804)) goto LAB_01802684;
    iVar24 = -0x4701dc58;
LAB_0180267c:
    if (iVar4 == iVar24) goto LAB_01802684;
    uVar14 = FUN_017f37d0(iVar4);
    if ((uVar14 & 1) == 0) {
      if (iVar4 < 0x2922957e) {
        if (iVar4 < 0x80e20d8) {
          if ((iVar4 != -0x11ea17dc) && (iVar4 != -0x917edf9)) {
            iVar24 = -0x8fb780d;
            goto LAB_01802c38;
          }
          goto LAB_01802c40;
        }
        if (((iVar4 != 0x80e20d8) && (iVar4 != 0xb6a5301)) && (iVar4 != 0x1490248c)) {
          return;
        }
      }
      else {
        if (0x65b7732c < iVar4) {
          if (iVar4 != 0x65b7732d) {
            if (iVar4 != 0x7a616e2f) {
              iVar24 = 0x6c9ebc71;
              goto LAB_01802c38;
            }
            goto LAB_01802cdc;
          }
LAB_01802c40:
          if (DAT_05574040 == 0) {
            return;
          }
          lVar13 = FUN_026f480c();
          if (lVar13 == 0) {
            return;
          }
          uVar12 = FUN_017f4660(&local_7c);
          local_88 = (ushort)local_88._1_1_ << 8;
          if (4 < (int)uVar12) {
            uVar12 = 5;
          }
          lVar22 = lVar13 + 0x118 + (ulong)uVar12 * 0x2488;
          if (5 < uVar12) {
            lVar22 = lVar13 + 0x118;
          }
          local_90 = lVar22 + 0x1ea0;
          lVar13 = *(long *)(lVar22 + 0x1ec8);
          if (lVar13 == 0) {
            local_88 = 0;
            local_98 = &PTR_FUN_04917240;
          }
          else {
            if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
              local_88 = 0;
              local_98 = &PTR_FUN_04917240;
            }
            else {
              uVar9 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
              lVar13 = *(long *)(lVar22 + 0x1ec8);
              local_88 = CONCAT11(uVar9,(char)local_88) & 0x1ff;
              local_98 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
              if (lVar13 == 0) goto LAB_018031d4;
            }
            plVar21 = *(long **)(lVar13 + 0x20);
            if (plVar21 != (long *)0x0) {
              local_78 = *(ulong *)(lVar22 + 0x1ea8);
              local_70 = *(long *)(lVar22 + 0x1eb0);
              local_68 = 0x24;
              (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
            }
          }
LAB_018031d4:
          lVar13 = *(long *)(lVar22 + 0x1eb0) + *(ulong *)(lVar22 + 0x1ea8);
          if ((*(byte *)(lVar13 + 0x20) & 1) == uVar2 >> 10) {
            if ((*(long *)(lVar22 + 0x1ec8) != 0) &&
               (plVar21 = *(long **)(*(long *)(lVar22 + 0x1ec8) + 0x20), plVar21 != (long *)0x0)) {
              local_68 = 0x24;
              local_78 = *(ulong *)(lVar22 + 0x1ea8);
              local_70 = *(long *)(lVar22 + 0x1eb0);
              (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
              lVar13 = *(long *)(lVar22 + 0x1eb0) + *(long *)(lVar22 + 0x1ea8);
            }
            if (((uVar5 >> 8 & 3) != (int)*(char *)(lVar13 + 0x1e)) ||
               (lVar13 = FUN_017ebae8(&local_98),
               *(short *)(lVar13 + 0x18) != *(short *)((long)param_1 + 0x22))) goto LAB_0180329c;
            uVar16 = FUN_017ebae8(&local_98);
            uVar14 = FUN_0277d7b4(uVar16,param_1 + 6);
            if (((uVar14 & 1) == 0) ||
               (lVar13 = FUN_017ebae8(&local_98), *(short *)(lVar13 + 0x1a) != (short)param_1[8]))
            goto LAB_0180329c;
            lVar13 = FUN_017ebae8(&local_98);
            local_d8 = FUN_0277d7b4(lVar13 + 8,param_1 + 2);
            local_d8 = local_d8 ^ 1;
          }
          else {
LAB_0180329c:
            local_d8 = 1;
          }
          lVar13 = local_90;
          if ((*(long *)(local_90 + 0x28) != 0) &&
             (plVar21 = *(long **)(*(long *)(local_90 + 0x28) + 0x20), plVar21 != (long *)0x0)) {
            local_78 = *(ulong *)(local_90 + 8);
            local_70 = *(long *)(local_90 + 0x10);
            local_68 = 0x24;
            (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
          }
          lVar13 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
          FUN_007ef010(auStack_a6,param_1 + 8);
          puVar26 = auStack_a8;
          FUN_007ef010(auStack_a8,(long)param_1 + 0x22);
          puVar25 = auStack_aa;
          FUN_007ef010(auStack_aa,param_1 + 9);
          iVar24 = param_1[10];
          puVar17 = auStack_a6;
          goto LAB_018034f0;
        }
        if ((iVar4 != 0x2922957e) && (iVar4 != 0x51b9e069)) {
          iVar24 = 0x6168e44d;
LAB_01802c38:
          if (iVar4 != iVar24) {
            return;
          }
          goto LAB_01802c40;
        }
      }
LAB_01802cdc:
      uVar10 = FUN_017f4660(&local_7c);
      local_78 = CONCAT44(local_78._4_4_,uVar10);
      lVar13 = FUN_02643020();
      if (lVar13 == 0) {
        return;
      }
      local_88 = 0;
      lVar22 = lVar13 + 0xe0 + (local_78 & 0xffffffff) * 0x2488;
      if (5 < (uint)local_78) {
        lVar22 = lVar13 + 0xe0;
      }
      local_90 = lVar22 + 0x1ea0;
      local_98 = &PTR_FUN_04a882d0;
      if (*(long *)(lVar22 + 0x1ec8) == 0) {
        uVar9 = 0;
      }
      else {
        puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x1ec8) + 0x10);
        uVar9 = 0;
        if (puVar18 != (undefined8 *)0x0) {
          uVar9 = (**(code **)*puVar18)();
        }
      }
      local_88 = CONCAT11(uVar9,(char)local_88) & 0x1ff;
      local_c0 = lVar22 + 0x2220;
      local_b8 = '\0';
      local_98 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
      if (*(long *)(lVar22 + 0x2248) == 0) {
        local_b7 = 0;
      }
      else {
        puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x2248) + 0x10);
        local_b7 = 0;
        if (puVar18 != (undefined8 *)0x0) {
          local_b7 = (**(code **)*puVar18)();
        }
      }
      local_b7 = local_b7 & 1;
      local_c8 = &PTR_FUN_04992878;
      if ((*(long *)(lVar22 + 0x1ec8) != 0) &&
         (plVar21 = *(long **)(*(long *)(lVar22 + 0x1ec8) + 0x20), plVar21 != (long *)0x0)) {
        local_78 = *(ulong *)(lVar22 + 0x1ea8);
        local_70 = *(long *)(lVar22 + 0x1eb0);
        local_68 = 0x24;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
      }
      if ((((*(byte *)(*(long *)(lVar22 + 0x1eb0) + *(long *)(lVar22 + 0x1ea8) + 0x20) & 1) ==
            uVar2 >> 10) &&
          (lVar13 = FUN_017ebae8(&local_98), (uVar5 >> 8 & 3) == (int)*(char *)(lVar13 + 0x1e))) &&
         (lVar13 = FUN_017ebae8(&local_98),
         *(short *)(lVar13 + 0x18) == *(short *)((long)param_1 + 0x22))) {
        uVar16 = FUN_017ebae8(&local_98);
        uVar14 = FUN_0277d7b4(uVar16,param_1 + 6);
        if (((uVar14 & 1) == 0) ||
           (lVar13 = FUN_017ebae8(&local_98), *(short *)(lVar13 + 0x1a) != (short)param_1[8]))
        goto LAB_01802f68;
        lVar13 = FUN_017ebae8(&local_98);
        uVar14 = FUN_0277d7b4(lVar13 + 8,param_1 + 2);
        if (((uVar14 & 1) == 0) ||
           ((lVar13 = FUN_017ebba0(&local_c8), *(ushort *)(lVar13 + 0xc) - 1 != param_1[0xd] ||
            (lVar13 = FUN_017ebba0(&local_c8), *(ushort *)(lVar13 + 0xe) - 1 != param_1[0xe]))))
        goto LAB_01802f68;
        bVar8 = false;
      }
      else {
LAB_01802f68:
        bVar8 = true;
      }
      lVar13 = local_90;
      if ((*(long *)(local_90 + 0x28) != 0) &&
         (plVar21 = *(long **)(*(long *)(local_90 + 0x28) + 0x20), plVar21 != (long *)0x0)) {
        local_78 = *(ulong *)(local_90 + 8);
        local_70 = *(long *)(local_90 + 0x10);
        local_68 = 0x24;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
      }
      lVar22 = *(long *)(lVar13 + 8);
      lVar13 = *(long *)(lVar13 + 0x10);
      FUN_007ef010(auStack_ca,param_1 + 8);
      FUN_007ef010(auStack_cc,(long)param_1 + 0x22);
      FUN_007ef010(auStack_ce,param_1 + 9);
      FUN_0285a20c(lVar13 + lVar22,uVar7,param_1 + 6,param_1 + 2,param_1 + 4,uVar2 != 0,uVar5 & 0xff
                   ,auStack_ca,auStack_cc,auStack_ce,param_1[10]);
      lVar13 = local_c0;
      if ((*(long *)(local_c0 + 0x28) != 0) &&
         (plVar21 = *(long **)(*(long *)(local_c0 + 0x28) + 0x20), plVar21 != (long *)0x0)) {
        local_78 = *(ulong *)(local_c0 + 8);
        local_70 = *(long *)(local_c0 + 0x10);
        local_68 = 0x14;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
      }
      lVar22 = local_c0;
      iVar6 = param_1[0xd];
      iVar24 = iVar6;
      if (0xfffd < iVar6) {
        iVar24 = 0xfffe;
      }
      sVar3 = 0;
      if (-2 < iVar6) {
        sVar3 = (short)iVar24 + 1;
      }
      *(short *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0xc) = sVar3;
      if ((*(long *)(local_c0 + 0x28) != 0) &&
         (plVar21 = *(long **)(*(long *)(local_c0 + 0x28) + 0x20), plVar21 != (long *)0x0)) {
        local_78 = *(ulong *)(local_c0 + 8);
        local_70 = *(long *)(local_c0 + 0x10);
        local_68 = 0x14;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
      }
      iVar6 = param_1[0xe];
      iVar24 = iVar6;
      if (0xfffd < iVar6) {
        iVar24 = 0xfffe;
      }
      sVar3 = 0;
      if (-2 < iVar6) {
        sVar3 = (short)iVar24 + 1;
      }
      *(short *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0xe) = sVar3;
      local_c8 = &PTR_FUN_04a882d0;
      if (local_b7 != 0) {
        lVar13 = *(long *)(local_c0 + 0x28);
        if (local_b8 == '\0') {
          if (lVar13 != 0) {
            puVar18 = *(undefined8 **)(lVar13 + 0x18);
            goto joined_r0x0180312c;
          }
        }
        else if (lVar13 != 0) {
          puVar18 = *(undefined8 **)(lVar13 + 8);
joined_r0x0180312c:
          if (puVar18 != (undefined8 *)0x0) {
            (**(code **)*puVar18)();
          }
        }
      }
      local_98 = &PTR_FUN_04a882d0;
      if (local_88._1_1_ != '\0') {
        lVar13 = *(long *)(local_90 + 0x28);
        if ((char)local_88 == '\0') {
          if (lVar13 != 0) {
            puVar18 = *(undefined8 **)(lVar13 + 0x18);
            goto joined_r0x01803170;
          }
        }
        else if (lVar13 != 0) {
          puVar18 = *(undefined8 **)(lVar13 + 8);
joined_r0x01803170:
          if (puVar18 != (undefined8 *)0x0) {
            (**(code **)*puVar18)();
          }
        }
      }
      if (!bVar8) {
        return;
      }
      goto LAB_01802b64;
    }
    local_c8 = (undefined **)((ulong)local_c8 & 0xffffffff00000000);
    uVar14 = FUN_02b5f400(&local_c8,iVar4);
    if ((uVar14 & 1) == 0) {
      return;
    }
    uVar10 = local_c8._0_4_;
    uVar11 = FUN_017f4660(&local_7c);
    local_98 = (undefined **)CONCAT44(local_98._4_4_,uVar11);
    local_78 = CONCAT44(local_78._4_4_,uVar10);
    lVar13 = *(long *)PTR_DAT_04bb46b0;
    if (lVar13 == 0) {
      return;
    }
    puVar18 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar18 + 0x38))();
      if (lVar13 == 0) {
        return;
      }
      lVar13 = lVar13 + 0x70;
    }
    else {
      if (puVar18 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar18[0x26] == (long *)0x0) {
        return;
      }
      lVar13 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
      if (lVar13 == 0) {
        return;
      }
    }
    if (7 < (uint)local_78) {
      return;
    }
    lVar22 = lVar13 + 0x119228 + (local_78 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_78) {
      lVar22 = lVar13 + 0x119228;
    }
    local_88 = (ushort)local_88._1_1_ << 8;
    lVar13 = lVar22 + 0x1df8 + ((ulong)local_98 & 0xffffffff) * 0x2488;
    if (5 < (uint)local_98) {
      lVar13 = lVar22 + 0x1df8;
    }
    local_90 = lVar13 + 0x1ea0;
    lVar22 = *(long *)(lVar13 + 0x1ec8);
    if (lVar22 == 0) {
      local_88 = 0;
      local_98 = &PTR_FUN_04917240;
    }
    else {
      if (*(undefined8 **)(lVar22 + 0x10) == (undefined8 *)0x0) {
        local_88 = 0;
        local_98 = &PTR_FUN_04917240;
      }
      else {
        uVar9 = (**(code **)**(undefined8 **)(lVar22 + 0x10))();
        lVar22 = *(long *)(lVar13 + 0x1ec8);
        local_88 = CONCAT11(uVar9,(char)local_88) & 0x1ff;
        local_98 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
        if (lVar22 == 0) goto LAB_01803398;
      }
      plVar21 = *(long **)(lVar22 + 0x20);
      if (plVar21 != (long *)0x0) {
        local_78 = *(ulong *)(lVar13 + 0x1ea8);
        local_70 = *(long *)(lVar13 + 0x1eb0);
        local_68 = 0x24;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
      }
    }
LAB_01803398:
    lVar22 = *(long *)(lVar13 + 0x1eb0) + *(ulong *)(lVar13 + 0x1ea8);
    if ((*(byte *)(lVar22 + 0x20) & 1) == uVar2 >> 10) {
      if ((*(long *)(lVar13 + 0x1ec8) != 0) &&
         (plVar21 = *(long **)(*(long *)(lVar13 + 0x1ec8) + 0x20), plVar21 != (long *)0x0)) {
        local_68 = 0x24;
        local_78 = *(ulong *)(lVar13 + 0x1ea8);
        local_70 = *(long *)(lVar13 + 0x1eb0);
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
        lVar22 = *(long *)(lVar13 + 0x1eb0) + *(long *)(lVar13 + 0x1ea8);
      }
      if (((uVar5 >> 8 & 3) != (int)*(char *)(lVar22 + 0x1e)) ||
         (lVar13 = FUN_017ebae8(&local_98),
         *(short *)(lVar13 + 0x18) != *(short *)((long)param_1 + 0x22))) goto LAB_01803460;
      uVar16 = FUN_017ebae8(&local_98);
      uVar14 = FUN_0277d7b4(uVar16,param_1 + 6);
      if (((uVar14 & 1) == 0) ||
         (lVar13 = FUN_017ebae8(&local_98), *(short *)(lVar13 + 0x1a) != (short)param_1[8]))
      goto LAB_01803460;
      lVar13 = FUN_017ebae8(&local_98);
      local_d8 = FUN_0277d7b4(lVar13 + 8,param_1 + 2);
      local_d8 = local_d8 ^ 1;
    }
    else {
LAB_01803460:
      local_d8 = 1;
    }
    lVar13 = local_90;
    if ((*(long *)(local_90 + 0x28) != 0) &&
       (plVar21 = *(long **)(*(long *)(local_90 + 0x28) + 0x20), plVar21 != (long *)0x0)) {
      local_78 = *(ulong *)(local_90 + 8);
      local_70 = *(long *)(local_90 + 0x10);
      local_68 = 0x24;
      (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
    }
    lVar13 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8);
    FUN_007ef010(auStack_a0,param_1 + 8);
    puVar26 = auStack_a2;
    FUN_007ef010(auStack_a2,(long)param_1 + 0x22);
    puVar25 = auStack_a4;
    FUN_007ef010(auStack_a4,param_1 + 9);
    iVar24 = param_1[10];
    puVar17 = auStack_a0;
LAB_018034f0:
    FUN_0285a20c(lVar13,uVar7,param_1 + 6,param_1 + 2,param_1 + 4,uVar2 != 0,uVar5 & 0xff,puVar17,
                 puVar26,puVar25,iVar24);
    local_98 = &PTR_FUN_04a882d0;
    if (local_88._1_1_ != '\0') {
      lVar13 = *(long *)(local_90 + 0x28);
      if ((char)local_88 == '\0') {
        if (lVar13 != 0) {
          puVar18 = *(undefined8 **)(lVar13 + 0x18);
          goto joined_r0x01803554;
        }
      }
      else if (lVar13 != 0) {
        puVar18 = *(undefined8 **)(lVar13 + 8);
joined_r0x01803554:
        if (puVar18 != (undefined8 *)0x0) {
          (**(code **)*puVar18)();
        }
      }
    }
  }
  else {
    if (iVar4 < -0xbf1cc08) {
      if (iVar4 != -0x196792d8) {
        iVar24 = -0x11f68f68;
        goto LAB_0180267c;
      }
    }
    else if ((iVar4 != -0xbf1cc08) && (iVar4 != 0x5f6c88)) {
      iVar24 = 0x1ac1236;
      goto LAB_0180267c;
    }
LAB_01802684:
    uVar10 = FUN_017e4f94(iVar4);
    local_78 = CONCAT44(local_78._4_4_,uVar10);
    if (DAT_05574040 == 0) {
      return;
    }
    puVar18 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar18 + 0x38))();
      if (lVar13 == 0) {
        return;
      }
      lVar13 = lVar13 + 0x70;
    }
    else {
      if (puVar18 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar18[0x26] == (long *)0x0) {
        return;
      }
      lVar13 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
      if (lVar13 == 0) {
        return;
      }
    }
    if (9 < (uint)local_78) {
      return;
    }
    lVar22 = lVar13 + 0x1962d8 + (local_78 & 0xffffffff) * 0x10d8;
    if (9 < (uint)local_78) {
      lVar22 = lVar13 + 0x1962d8;
    }
    if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar18 == (undefined8 *)0x0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)*puVar18)();
      uVar14 = uVar14 & 0xffffffff;
    }
    local_78 = local_78 & 0xffffffff00000000;
    lVar13 = FUN_0265c3e0((long)*(char *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0x1c4))
    ;
    if (lVar13 == 0) {
      if ((uVar14 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar22 + 0x28) == 0) {
        return;
      }
      puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8);
      if (puVar18 == (undefined8 *)0x0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x018027f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*puVar18)();
      return;
    }
    puVar1 = (ulong *)(lVar13 + 0xf930);
    local_88 = (ushort)local_88._1_1_ << 8;
    local_90 = lVar13 + 0xf928;
    lVar19 = *(long *)(lVar13 + 0xf950);
    if (lVar19 == 0) {
      local_88 = 0;
      local_98 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
    }
    else {
      if (*(undefined8 **)(lVar19 + 0x10) == (undefined8 *)0x0) {
        local_88 = 0;
        local_98 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
      }
      else {
        uVar9 = (**(code **)**(undefined8 **)(lVar19 + 0x10))();
        lVar19 = *(long *)(lVar13 + 0xf950);
        local_88 = CONCAT11(uVar9,(char)local_88) & 0x1ff;
        local_98 = (undefined **)(PTR_DAT_04bb4cb0 + 0x10);
        if (lVar19 == 0) goto LAB_01802914;
      }
      plVar21 = *(long **)(lVar19 + 0x20);
      if (plVar21 != (long *)0x0) {
        local_78 = *puVar1;
        local_70 = *(long *)(lVar13 + 0xf938);
        local_68 = 0x24;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
      }
    }
LAB_01802914:
    plVar21 = (long *)(lVar13 + 0xf950);
    uVar15 = *puVar1;
    lVar23 = *(long *)(lVar13 + 0xf938);
    lVar19 = lVar23 + uVar15;
    if ((*(byte *)(lVar19 + 0x20) & 1) == uVar2 >> 10) {
      if ((*plVar21 != 0) && (plVar20 = *(long **)(*plVar21 + 0x20), plVar20 != (long *)0x0)) {
        local_68 = 0x24;
        local_78 = uVar15;
        local_70 = lVar23;
        (**(code **)(*plVar20 + 0x20))(plVar20,&local_78);
        uVar15 = *puVar1;
        lVar23 = *(long *)(lVar13 + 0xf938);
        lVar19 = lVar23 + uVar15;
      }
      if ((uVar5 >> 8 & 3) != (int)*(char *)(lVar19 + 0x1e)) goto LAB_01802a34;
      if ((*plVar21 != 0) && (plVar20 = *(long **)(*plVar21 + 0x20), plVar20 != (long *)0x0)) {
        local_68 = 0x24;
        local_78 = uVar15;
        local_70 = lVar23;
        (**(code **)(*plVar20 + 0x20))(plVar20,&local_78);
        uVar15 = *puVar1;
        lVar23 = *(long *)(lVar13 + 0xf938);
        lVar19 = lVar23 + uVar15;
      }
      if (*(short *)(lVar19 + 0x18) != *(short *)((long)param_1 + 0x22)) goto LAB_01802a34;
      if ((*plVar21 != 0) && (plVar21 = *(long **)(*plVar21 + 0x20), plVar21 != (long *)0x0)) {
        local_68 = 0x24;
        local_78 = uVar15;
        local_70 = lVar23;
        (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
        lVar19 = *(long *)(lVar13 + 0xf938) + *puVar1;
      }
      uVar15 = FUN_0277d7b4(lVar19,param_1 + 6);
      if (((uVar15 & 1) == 0) ||
         (lVar13 = FUN_017ebae8(&local_98), *(short *)(lVar13 + 0x1a) != (short)param_1[8]))
      goto LAB_01802a34;
      lVar13 = FUN_017ebae8(&local_98);
      local_d8 = FUN_0277d7b4(lVar13 + 8,param_1 + 2);
      local_d8 = local_d8 ^ 1;
    }
    else {
LAB_01802a34:
      local_d8 = 1;
    }
    lVar13 = local_90;
    if ((*(long *)(local_90 + 0x28) != 0) &&
       (plVar21 = *(long **)(*(long *)(local_90 + 0x28) + 0x20), plVar21 != (long *)0x0)) {
      local_78 = *(ulong *)(local_90 + 8);
      local_70 = *(long *)(local_90 + 0x10);
      local_68 = 0x24;
      (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
    }
    lVar19 = *(long *)(lVar13 + 8);
    lVar13 = *(long *)(lVar13 + 0x10);
    FUN_007ef010(auStack_9a,param_1 + 8);
    FUN_007ef010(auStack_9c,(long)param_1 + 0x22);
    FUN_007ef010(auStack_9e,param_1 + 9);
    FUN_0285a20c(lVar13 + lVar19,uVar7,param_1 + 6,param_1 + 2,param_1 + 4,uVar2 != 0,uVar5 & 0xff,
                 auStack_9a,auStack_9c,auStack_9e,param_1[10]);
    local_98 = &PTR_FUN_04a882d0;
    if (local_88._1_1_ != '\0') {
      lVar13 = *(long *)(local_90 + 0x28);
      if ((char)local_88 == '\0') {
        if (lVar13 != 0) {
          puVar18 = *(undefined8 **)(lVar13 + 0x18);
          goto joined_r0x01802b2c;
        }
      }
      else if (lVar13 != 0) {
        puVar18 = *(undefined8 **)(lVar13 + 8);
joined_r0x01802b2c:
        if (puVar18 != (undefined8 *)0x0) {
          (**(code **)*puVar18)();
        }
      }
    }
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
       (puVar18 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar18 != (undefined8 *)0x0)) {
      (**(code **)*puVar18)();
    }
  }
  if ((local_d8 & 1) == 0) {
    return;
  }
LAB_01802b64:
  if (DAT_05295dc8 != 0) {
    (*(code *)**(undefined8 **)(DAT_05295dc8 + 8))((undefined8 *)(DAT_05295dc8 + 8),iVar4);
  }
  return;
}

