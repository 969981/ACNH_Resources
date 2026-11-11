
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_00497230(long param_1,long param_2,int param_3)

{
  long lVar1;
  void *pvVar2;
  undefined1 *puVar3;
  ulong uVar4;
  short sVar5;
  undefined *puVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  short *psVar19;
  long lVar20;
  long lVar21;
  long *plVar22;
  ulong *puVar23;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 *local_1f0;
  undefined8 *puStack_1e8;
  undefined1 local_1e0 [16];
  ulong local_1d0;
  ulong local_1c8;
  int local_1c0;
  ulong local_138;
  undefined8 local_130;
  ulong local_128;
  undefined8 uStack_120;
  void *local_a8;
  void *pvStack_a0;
  
  if (*(long *)(param_1 + 0x218) != 0) {
    param_2 = FUN_004a03b0(*(long *)(param_1 + 0x218),param_2,0);
  }
  lVar1 = param_1 + 0x200;
  iVar8 = FUN_0049b470(lVar1,param_2);
  FUN_0049c4c0(lVar1,iVar8);
  uVar12 = FUN_0049c570(lVar1);
  puVar6 = PTR_DAT_048607b8;
  if ((uVar12 & 1) == 0) {
    local_128 = 0;
    uStack_120 = 0;
    local_138 = 0;
    local_130 = 0;
    uVar12 = FUN_00445ff0(*(long *)(param_1 + 0x208) + 0x18);
    if (uVar12 != 0) {
      FUN_004435a0(uVar12);
    }
    local_128 = 0;
    uStack_120 = 0;
    local_130 = 0;
    local_138 = uVar12;
    FUN_00446070(&local_a8,&local_138);
    if (local_138 != 0) {
      FUN_004435c0();
    }
    auVar24 = FUN_0049c590(lVar1);
    puVar3 = (undefined1 *)0x0;
    if (auVar24._0_8_ != 0) {
      puVar3 = &LAB_0049b7e0;
    }
    while (puVar3 != (undefined1 *)0x0) {
      puVar23 = auVar24._0_8_;
      iVar9 = FUN_0049b470(lVar1,puVar23[1]);
      FUN_0049c4c0(lVar1,iVar9);
      local_138 = (ulong)auVar24._8_4_;
      iVar10 = FUN_004a1930(&local_138,&local_1c8);
      pvVar2 = (void *)((long)local_a8 + (long)iVar10);
      if (pvStack_a0 < pvVar2) {
        FUN_004462a0(&local_a8,&local_1c8);
      }
      else {
        memcpy(local_a8,&local_1c8,(long)iVar10);
        local_a8 = pvVar2;
      }
      local_138 = (ulong)iVar9;
      iVar9 = FUN_004a1930(&local_138,&local_1c8);
      pvVar2 = (void *)((long)local_a8 + (long)iVar9);
      if (pvStack_a0 < pvVar2) {
        FUN_004462a0(&local_a8,&local_1c8);
        uVar12 = *puVar23;
        if (((uint)uVar12 >> 0x15 & 1) == 0) goto LAB_00497438;
LAB_00497404:
        puVar13 = (ulong *)FUN_00426db0(puVar23,0x200000);
        if ((puVar13 == (ulong *)0x0) || (uVar17 = *puVar13 & 0xffffffffffffefff, uVar17 == 0))
        goto LAB_00497438;
      }
      else {
        memcpy(local_a8,&local_1c8,(long)iVar9);
        uVar12 = *puVar23;
        local_a8 = pvVar2;
        if (((uint)uVar12 >> 0x15 & 1) != 0) goto LAB_00497404;
LAB_00497438:
        uVar17 = 0;
        uVar12 = uVar12 & 0xffffffffffdfffff;
      }
      FUN_0044ed80(&local_138,puVar23,&DAT_04c15320);
      uVar7 = local_138;
      if ((local_128 & 1) != 0) {
        FUN_0043dd50(local_128 & 0xfffffffffffffffe);
      }
      uVar4 = uVar12 | 0x2000000;
      if (param_3 != 1 || uVar7 == 0) {
        uVar4 = uVar12;
      }
      local_138 = uVar4 & 2 | (uVar4 & 0x10) >> 2 | (uVar4 & 0x100000) >> 0x11 |
                  (uVar4 & 0x200000) >> 0x11 | (uVar4 & 0x800000) >> 0x12 | (uVar4 & 0x4000) >> 8 |
                  (uVar4 & 0x2000000) >> 0x12 | uVar4 >> 0x14 & 0x100 | uVar4 & 1;
      iVar9 = FUN_004a1930(&local_138,&local_1c8);
      pvVar2 = (void *)((long)local_a8 + (long)iVar9);
      if (pvStack_a0 < pvVar2) {
        FUN_004462a0(&local_a8,&local_1c8);
      }
      else {
        memcpy(local_a8,&local_1c8,(long)iVar9);
        local_a8 = pvVar2;
      }
      if ((uVar4 & 1) != 0) {
        if (((*puVar23 & 1) == 0) ||
           (puVar13 = (ulong *)FUN_00426db0(puVar23,1), puVar13 == (ulong *)0x0)) {
          local_138 = 0;
        }
        else {
          local_138 = *puVar13;
        }
        iVar9 = FUN_004a1930(&local_138,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
        }
      }
      if ((uVar4 & 2) != 0) {
        uVar12 = FUN_00428440(puVar23);
        if ((puVar23 == (ulong *)0x0) || ((uVar12 & 0x1f) != 8)) {
          uVar12 = FUN_00428440(puVar23);
          if ((puVar23 == (ulong *)0x0) || ((uVar12 & 0x1f) != 6)) goto joined_r0x0049734c;
          uVar15 = FUN_00426d90(puVar23);
          iVar9 = FUN_0049b470(lVar1,uVar15);
        }
        else {
          puVar14 = (undefined8 *)FUN_00426e90(puVar23,1);
          if (puVar14 == (undefined8 *)0x0) {
            uVar15 = FUN_00426d90(puVar23);
          }
          else {
            uVar18 = *puVar14;
            uVar15 = FUN_00426d90(puVar23);
            if ((int)((ulong)uVar18 >> 8) != 0) {
              iVar9 = FUN_0049b470(lVar1,uVar15);
              FUN_0049c4c0(lVar1,iVar9);
              goto LAB_004978f8;
            }
          }
          iVar9 = FUN_0049b470(lVar1,uVar15);
        }
LAB_004978f8:
        local_138 = (ulong)iVar9;
        iVar9 = FUN_004a1930(&local_138,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
        }
      }
joined_r0x0049734c:
      if ((uVar4 & 0x10) != 0) {
        if ((((byte)*puVar23 >> 4 & 1) == 0) ||
           (puVar13 = (ulong *)FUN_00426db0(puVar23,0x10), puVar13 == (ulong *)0x0)) {
          local_138 = 0;
        }
        else {
          local_138 = *puVar13;
        }
        iVar9 = FUN_004a1930(&local_138,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
        }
      }
      if ((uVar4 & 0x100000) != 0) {
        if (((*(byte *)((long)puVar23 + 2) >> 4 & 1) == 0) ||
           (puVar13 = (ulong *)FUN_00426db0(puVar23,0x100000), puVar13 == (ulong *)0x0)) {
          uVar12 = 0;
        }
        else {
          uVar12 = *puVar13;
        }
        local_138 = uVar12 & 0xffff;
        iVar9 = FUN_004a1930(&local_138,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
        }
        local_138 = uVar12 >> 0x10 & 0xffff;
        iVar9 = FUN_004a1930(&local_138,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
        }
      }
      if ((uVar4 & 0x200000) != 0) {
        local_138 = uVar17;
        iVar9 = FUN_004a1930(&local_138,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
        }
      }
      if ((uVar4 & 0x800000) != 0) {
        if (((char)*(byte *)((long)puVar23 + 2) < '\0') &&
           (puVar14 = (undefined8 *)FUN_00426db0(puVar23,0x800000), puVar14 != (undefined8 *)0x0)) {
          psVar19 = (short *)*puVar14;
        }
        else {
          psVar19 = (short *)0x0;
        }
        sVar5 = *psVar19;
        lVar21 = (long)sVar5;
        local_138 = (ulong)(int)((int)sVar5 | (uint)(ushort)psVar19[1] << 0x10);
        iVar9 = FUN_004a1930(&local_138,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
          if (0 < sVar5) {
LAB_004976d4:
            plVar22 = (long *)(psVar19 + 4);
            do {
              while( true ) {
                local_1e0._0_8_ = *plVar22;
                lVar20 = *(long *)(param_1 + 0x208);
                local_138 = FUN_00427b40(local_1e0);
                lVar16 = FUN_0049b3d0(lVar20 + 0x68,&local_138);
                local_138 = (lVar16 - *(long *)(lVar20 + 0x68)) * 0x20000000 >> 0x20;
                iVar9 = FUN_004a1930(&local_138,&local_1c8);
                pvVar2 = (void *)((long)local_a8 + (long)iVar9);
                if (pvStack_a0 < pvVar2) {
                  FUN_004462a0(&local_a8,&local_1c8);
                }
                else {
                  memcpy(local_a8,&local_1c8,(long)iVar9);
                  local_a8 = pvVar2;
                }
                iVar9 = FUN_004290b0(local_1e0);
                if ((((*(byte *)(local_1e0._0_8_ + 2) >> 4 & 1) == 0) ||
                    (puVar13 = (ulong *)FUN_00426db0(local_1e0._0_8_,0x100000),
                    puVar13 == (ulong *)0x0)) || (uVar12 = *puVar13, uVar12 == 0)) {
                  local_138 = (ulong)iVar9;
                }
                else {
                  local_138 = (long)iVar9 | 0x80;
                  iVar9 = FUN_004a1930(&local_138,&local_1c8);
                  pvVar2 = (void *)((long)local_a8 + (long)iVar9);
                  if (pvStack_a0 < pvVar2) {
                    FUN_004462a0(&local_a8,&local_1c8);
                  }
                  else {
                    memcpy(local_a8,&local_1c8,(long)iVar9);
                    local_a8 = pvVar2;
                  }
                  local_138 = uVar12 >> 0x1c & 0xf;
                }
                iVar9 = FUN_004a1930(&local_138,&local_1c8);
                pvVar2 = (void *)((long)local_a8 + (long)iVar9);
                if (pvStack_a0 < pvVar2) {
                  FUN_004462a0(&local_a8,&local_1c8);
                }
                else {
                  memcpy(local_a8,&local_1c8,(long)iVar9);
                  local_a8 = pvVar2;
                }
                iVar9 = FUN_00429050(local_1e0);
                local_138 = (ulong)iVar9;
                iVar9 = FUN_004a1930(&local_138,&local_1c8);
                pvVar2 = (void *)((long)local_a8 + (long)iVar9);
                if (pvStack_a0 < pvVar2) {
                  FUN_004462a0(&local_a8,&local_1c8);
                }
                else {
                  memcpy(local_a8,&local_1c8,(long)iVar9);
                  local_a8 = pvVar2;
                }
                iVar9 = FUN_0049b470(lVar1,*(undefined8 *)(local_1e0._0_8_ + 8));
                FUN_0049c4c0(lVar1,iVar9);
                local_138 = (ulong)iVar9;
                iVar9 = FUN_004a1930(&local_138,&local_1c8);
                pvVar2 = (void *)((long)local_a8 + (long)iVar9);
                if (pvVar2 <= pvStack_a0) break;
                FUN_004462a0(&local_a8,&local_1c8);
                lVar21 = lVar21 + -1;
                plVar22 = plVar22 + 1;
                if (lVar21 == 0) goto LAB_00497a78;
              }
              memcpy(local_a8,&local_1c8,(long)iVar9);
              lVar21 = lVar21 + -1;
              plVar22 = plVar22 + 1;
              local_a8 = pvVar2;
            } while (lVar21 != 0);
          }
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
          if (0 < sVar5) goto LAB_004976d4;
        }
      }
LAB_00497a78:
      if ((uVar4 & 0x4000) != 0) {
        puVar14 = (undefined8 *)FUN_00426db0(puVar23,0x4000);
        puVar13 = (ulong *)*puVar14;
        uVar12 = *puVar13;
        iVar10 = (int)uVar12;
        local_138 = (ulong)iVar10;
        iVar9 = FUN_004a1930(&local_138,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
        }
        if (0 < iVar10) {
          uVar12 = uVar12 & 0xffffffff;
          puVar13 = puVar13 + 2;
          do {
            while( true ) {
              iVar9 = FUN_0049b470(lVar1,puVar13[-1]);
              FUN_0049c4c0(lVar1,iVar9);
              local_138 = (ulong)iVar9;
              iVar9 = FUN_004a1930(&local_138,&local_1c8);
              pvVar2 = (void *)((long)local_a8 + (long)iVar9);
              if (pvStack_a0 < pvVar2) {
                FUN_004462a0(&local_a8,&local_1c8);
              }
              else {
                memcpy(local_a8,&local_1c8,(long)iVar9);
                local_a8 = pvVar2;
              }
              local_138 = *puVar13;
              iVar9 = FUN_004a1930(&local_138,&local_1c8);
              pvVar2 = (void *)((long)local_a8 + (long)iVar9);
              if (pvVar2 <= pvStack_a0) break;
              FUN_004462a0(&local_a8,&local_1c8);
              uVar12 = uVar12 - 1;
              puVar13 = puVar13 + 2;
              if (uVar12 == 0) goto LAB_00497bd4;
            }
            memcpy(local_a8,&local_1c8,(long)iVar9);
            uVar12 = uVar12 - 1;
            puVar13 = puVar13 + 2;
            local_a8 = pvVar2;
          } while (uVar12 != 0);
        }
      }
LAB_00497bd4:
      if ((uVar4 & 0x2000000) != 0) {
        if (((*(byte *)((long)puVar23 + 3) >> 1 & 1) == 0) ||
           (puVar14 = (undefined8 *)FUN_00426db0(puVar23,0x2000000), puVar14 == (undefined8 *)0x0))
        {
          FUN_004225d0(&local_138,0);
          auVar24._8_8_ = local_1e0._8_8_;
          auVar24._0_8_ = local_1e0._0_8_;
        }
        else {
          FUN_004225d0(&local_138,*puVar14);
          auVar24._8_8_ = local_1e0._8_8_;
          auVar24._0_8_ = local_1e0._0_8_;
        }
        if (param_3 == 1 && uVar7 != 0) {
          FUN_004225b0(&local_1c8);
          local_1e0._8_8_ = 0;
          local_1d0 = 0;
          local_1e0 = FUN_00446e00(uVar7,&DAT_04c15320);
          uVar12 = local_1d0;
          if (local_1e0._8_8_ == 0) {
            local_1d0 = 0;
            uVar17 = local_1d0;
          }
          else {
            uVar17 = FUN_00428370(local_1e0._8_8_);
            uVar12 = local_1d0;
            if ((uVar17 & 1) != 0) {
              FUN_0043dd30(uVar17 & 0xfffffffffffffffe);
              uVar12 = local_1d0;
            }
          }
          local_1d0 = uVar17;
          if ((uVar12 & 1) != 0) {
            FUN_0043dd50(uVar12 & 0xfffffffffffffffe);
          }
          local_1f0 = &DAT_0407ebb1;
          puStack_1e8 = &DAT_0407ebb1;
          FUN_0044d910(local_1e0,&local_1c8,&local_1f0);
          if ((local_1d0 & 1) != 0) {
            FUN_0043dd50(local_1d0 & 0xfffffffffffffffe);
          }
          FUN_00423880(&local_138,local_1c8,local_1c0 + -1);
          FUN_00422550(&local_1c8);
          auVar24 = local_1e0;
        }
        uVar12 = local_138;
        lVar21 = *(long *)(param_1 + 0x208);
        uVar11 = *(uint *)(lVar21 + 0xd0);
        local_1e0 = auVar24;
        if (uVar11 == (*(uint *)(lVar21 + 0xd4) & 0x3fffffff)) {
          FUN_00426990(puVar6,lVar21 + 200,8);
          uVar11 = *(uint *)(lVar21 + 0xd0);
        }
        uVar17 = -(ulong)(uVar11 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar11 << 3;
        FUN_0043bce0(*(long *)(lVar21 + 200) + uVar17,uVar12,0xffffffff);
        *(uint *)(lVar21 + 0xd0) = uVar11 + 1;
        local_1c8 = *(ulong *)(*(long *)(lVar21 + 200) + uVar17) & 0xfffffffffffffffe;
        lVar16 = FUN_0049b3d0(lVar21 + 0xa0,&local_1c8);
        local_1e0._0_8_ = (lVar16 - *(long *)(lVar21 + 0xa0)) * 0x20000000 >> 0x20;
        iVar9 = FUN_004a1930(local_1e0,&local_1c8);
        pvVar2 = (void *)((long)local_a8 + (long)iVar9);
        if (pvStack_a0 < pvVar2) {
          FUN_004462a0(&local_a8,&local_1c8);
        }
        else {
          memcpy(local_a8,&local_1c8,(long)iVar9);
          local_a8 = pvVar2;
        }
        FUN_00422550(&local_138);
      }
      auVar24 = FUN_0049c590(lVar1);
      puVar3 = (undefined1 *)0x0;
      if (auVar24._0_8_ != 0) {
        puVar3 = &LAB_0049b7e0;
      }
    }
    FUN_00446180(&local_a8);
  }
  if ((*(byte *)(param_2 + 3) & 1) != 0) {
    *(undefined1 *)(param_1 + 0x1c0) = 1;
  }
  uVar11 = FUN_00428440(param_2);
  *(uint *)(*(long *)(param_1 + 0xf0) + (long)iVar8 * 0x18 + 4) = uVar11 & 0x1f;
  auVar25._8_4_ = iVar8;
  auVar25._0_8_ = param_2;
  auVar25._12_4_ = 0;
  return auVar25;
}

