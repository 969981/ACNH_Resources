
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffec8 : 0x01c2ab7c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01c2a300(long param_1)

{
  undefined *puVar1;
  ushort *puVar2;
  undefined2 *puVar3;
  bool bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  uint uVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 *puVar16;
  ushort uVar17;
  uint uVar18;
  int iVar19;
  uint *puVar20;
  undefined8 ***pppuVar21;
  int iVar22;
  ulong uVar23;
  int *piVar24;
  int iVar25;
  ulong uVar26;
  int *piVar27;
  int iVar28;
  undefined8 **ppuVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  undefined8 ***local_230;
  int local_210;
  int local_1e8;
  int local_1e0;
  int local_1d8;
  int local_1cc;
  undefined *local_1c8;
  char *pcStack_1c0;
  undefined2 local_1b8;
  undefined2 local_1b6;
  undefined4 local_1b4;
  undefined2 local_1b0;
  undefined2 local_1ae;
  undefined4 local_1ac;
  uint local_1a8;
  undefined4 uStack_1a4;
  undefined8 **local_1a0;
  undefined8 *local_198;
  undefined8 *puStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 *local_170;
  undefined8 *local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 **local_150;
  undefined8 *local_148;
  undefined8 *puStack_140;
  undefined8 local_138;
  undefined8 *local_130;
  undefined8 local_128;
  undefined8 *local_120 [3];
  undefined8 local_108;
  undefined8 **local_100;
  undefined8 *local_f8;
  undefined8 *puStack_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0 [3];
  undefined8 local_b8;
  undefined8 **local_b0;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 *local_80 [4];
  
  uVar31 = 0;
  local_210 = 0;
  iVar28 = 0;
  iVar30 = 0;
  local_1cc = 0;
LAB_01c2a374:
  do {
    uVar13 = *(uint *)(param_1 + 0x9d0);
    if ((int)uVar13 < 1) {
      uVar23 = 0;
      if (*(long *)(param_1 + 0x8c0) != 0) {
        puVar7 = *(uint **)(*(long *)(param_1 + 0x8c0) + 8);
        uVar23 = 0;
        if (puVar7 != (uint *)0x0) {
          uVar23 = (ulong)*puVar7;
        }
      }
      if (uVar23 <= uVar31) goto LAB_01c2a924;
      if (0 < (int)uVar13) goto LAB_01c2a3b4;
      if ((((*(long *)(param_1 + 0x8c0) == 0) ||
           (puVar7 = *(uint **)(*(long *)(param_1 + 0x8c0) + 8), puVar7 == (uint *)0x0)) ||
          ((uVar31 < *(uint *)(param_1 + 0x8d8) &&
           (*(char *)(*(long *)(param_1 + 0x8e0) + uVar31) == '\0')))) ||
         (((*puVar7 <= uVar31 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0))))
      goto switchD_01c2a83c_default;
      iVar22 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar22 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * (int)uVar31 + (uint)(ushort)puVar7[2] * 8 + iVar22) +
                       (long)puVar7);
      if (puVar7 == (uint *)0x0) goto switchD_01c2a83c_default;
LAB_01c2a3d8:
      if (*puVar7 != 0) {
        cVar12 = DAT_0534bc48;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = -1;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_0534bc54) {
              if ((ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7) != (ushort *)0x0) {
                uVar17 = *(ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7);
                goto LAB_01c2a534;
              }
              break;
            }
            if (DAT_0534bc54._4_4_ != 0xffffffff) break;
          }
          puVar20 = (uint *)(ulong)*puVar7;
          uVar17 = 0xfffe;
          if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2a534;
          lVar32 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
            lVar32 = 0x1c;
          }
          lVar32 = (long)puVar7 + (lVar32 - (long)puVar20);
          if (lVar32 == 0) break;
          uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
          DAT_0534bc54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc54);
          if (uVar23 == 0) break;
          piVar24 = (int *)(lVar32 + 4);
          while (piVar24[-1] != -0x4fd0f3e9) {
            piVar24 = piVar24 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) goto LAB_01c2a530;
          }
          iVar22 = 0;
          if (*piVar24 != -1) {
            iVar22 = *piVar24;
          }
          DAT_0534bc54 = CONCAT44(iVar22,(undefined4)DAT_0534bc54);
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_01c2a530:
      uVar17 = 0xfffe;
LAB_01c2a534:
      local_b8 = (ulong)uVar17;
      FUN_0277d4ac(&local_b8);
      if (*puVar7 != 0) {
        cVar12 = DAT_0534bc48;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = -1;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_0534bc5c) {
              puVar2 = (ushort *)((DAT_0534bc5c & 0xffffffff) + (long)puVar7);
              if (puVar2 != (ushort *)0x0) {
                uVar17 = *puVar2;
                goto LAB_01c2a634;
              }
              break;
            }
            if ((int)DAT_0534bc5c != -1) break;
          }
          puVar20 = (uint *)(ulong)*puVar7;
          uVar17 = 0xfffe;
          if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2a634;
          lVar32 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
            lVar32 = 0x1c;
          }
          lVar32 = (long)puVar7 + (lVar32 - (long)puVar20);
          if (lVar32 == 0) break;
          uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
          DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,0xfffffffe);
          if (uVar23 == 0) break;
          piVar24 = (int *)(lVar32 + 4);
          while (piVar24[-1] != -0x8708939) {
            piVar24 = piVar24 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) goto LAB_01c2a630;
          }
          iVar22 = 0;
          if (*piVar24 != -1) {
            iVar22 = *piVar24;
          }
          DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,iVar22);
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_01c2a630:
      uVar17 = 0xfffe;
LAB_01c2a634:
      local_108 = (ulong)uVar17;
      FUN_0277d4ac(&local_108);
      if (*puVar7 != 0) {
        cVar12 = DAT_0534bc48;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc48 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = -1;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = 0xffffffffffffffff;
          }
          else {
            if (-1 < (long)DAT_0534bc5c) {
              if ((ushort *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7) != (ushort *)0x0) {
                uVar17 = *(ushort *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7);
                goto LAB_01c2a734;
              }
              break;
            }
            if (DAT_0534bc5c._4_4_ != 0xffffffff) break;
          }
          puVar20 = (uint *)(ulong)*puVar7;
          uVar17 = 0xfffe;
          if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2a734;
          lVar32 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
            lVar32 = 0x1c;
          }
          lVar32 = (long)puVar7 + (lVar32 - (long)puVar20);
          if (lVar32 == 0) break;
          uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
          DAT_0534bc5c = CONCAT44(0xfffffffe,(int)DAT_0534bc5c);
          if (uVar23 == 0) break;
          piVar24 = (int *)(lVar32 + 4);
          while (piVar24[-1] != -0x3510a089) {
            piVar24 = piVar24 + 2;
            uVar23 = uVar23 - 1;
            if (uVar23 == 0) goto LAB_01c2a730;
          }
          iVar22 = 0;
          if (*piVar24 != -1) {
            iVar22 = *piVar24;
          }
          DAT_0534bc5c = CONCAT44(iVar22,(int)DAT_0534bc5c);
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_01c2a730:
      uVar17 = 0xfffe;
LAB_01c2a734:
      local_158 = (ulong)uVar17;
      uVar6 = FUN_0277d4ac(&local_158);
      uVar23 = FUN_01c27f3c(uVar6,&local_b8,0);
      if (((uVar23 & 1) == 0) && (uVar23 = FUN_01c27f3c(uVar23,&local_108,0), (uVar23 & 1) == 0)) {
        uVar23 = FUN_01c27f3c(uVar23,&local_158,0);
        puVar5 = PTR_DAT_04bb4830;
        if ((uVar23 & 1) != 0) goto LAB_01c2a780;
        uVar23 = FUN_01c1ee08(*(undefined8 *)PTR_DAT_04bb4830,&local_b8);
        if ((((uVar23 & 1) == 0) &&
            (uVar23 = FUN_01c1ee08(*(undefined8 *)puVar5,&local_108), (uVar23 & 1) == 0)) &&
           (uVar23 = FUN_01c1ee08(*(undefined8 *)puVar5,&local_158), (uVar23 & 1) == 0)) {
          bVar4 = false;
        }
        else {
          bVar4 = true;
        }
      }
      else {
LAB_01c2a780:
        bVar4 = true;
      }
      uVar13 = *puVar7;
      uVar18 = 0;
      if ((uVar13 != 0) && (puVar7 != (uint *)(ulong)uVar13)) {
        puVar20 = (uint *)((long)puVar7 - (long)(ulong)uVar13);
        uVar18 = 0;
        if (*puVar20 != 0) {
          uVar13 = puVar20[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar32 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar32 = 0x1c;
            }
            lVar32 = (long)puVar20 + lVar32 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar32 != 0) {
              uVar18 = 0;
              if ((ulong)uVar13 != 0) {
                uVar18 = (uint)((ulong)((long)puVar7 - lVar32) / (ulong)uVar13);
              }
              if (*puVar20 <= uVar18) {
                uVar18 = 0xffffffff;
              }
              if ((uVar18 < DAT_0534bc38) &&
                 (uVar18 = (uint)*(ushort *)(DAT_0534bc40 + (long)(int)uVar18 * 2), uVar18 < 10))
              goto LAB_01c2a820;
            }
          }
          uVar18 = 0;
        }
      }
LAB_01c2a820:
      _local_1a8 = CONCAT44(uStack_1a4,uVar18);
      switch(uVar18) {
      case 0:
      case 1:
      case 2:
        if (bVar4) {
          iVar30 = iVar30 + 4;
          uVar31 = uVar31 + 1;
        }
        else {
          iVar30 = iVar30 + 1;
          uVar31 = uVar31 + 1;
        }
        goto LAB_01c2a374;
      case 3:
      case 4:
      case 5:
        if (bVar4) {
          uVar31 = uVar31 + 1;
          local_210 = local_210 + 4;
        }
        else {
          uVar31 = uVar31 + 1;
          local_210 = local_210 + 1;
        }
        goto LAB_01c2a374;
      case 6:
      case 7:
      case 8:
        if (bVar4) {
          iVar28 = iVar28 + 4;
          uVar31 = uVar31 + 1;
        }
        else {
          iVar28 = iVar28 + 1;
          uVar31 = uVar31 + 1;
        }
        goto LAB_01c2a374;
      case 9:
        if (bVar4) {
          local_1cc = local_1cc + 4;
        }
        else {
          local_1cc = local_1cc + 1;
        }
      }
    }
    else {
      if (uVar13 <= uVar31) goto LAB_01c2a924;
LAB_01c2a3b4:
      if (uVar31 < uVar13) {
        uVar23 = uVar31 & 0xffffffff;
        if (*(uint *)(param_1 + 0x9c0) <= uVar31) {
          uVar23 = 0;
        }
        puVar7 = *(uint **)(*(long *)(param_1 + 0x9c8) + uVar23 * 8);
        if (puVar7 != (uint *)0x0) goto LAB_01c2a3d8;
      }
    }
switchD_01c2a83c_default:
    uVar31 = uVar31 + 1;
  } while( true );
LAB_01c2af24:
  uVar13 = 0;
LAB_01c2af28:
  *(uint *)(*pppuVar21)[lVar32] = uVar13;
switchD_01c2af98_default:
  uVar31 = uVar31 + 1;
  goto LAB_01c2af38;
LAB_01c2a924:
  local_b8._4_4_ = 0;
  local_b0 = (undefined8 **)0x0;
  local_90 = &local_88;
  local_88 = 0;
  if (local_80 != (undefined8 **)0x0) {
    local_b8._4_4_ = 3;
    local_b0 = local_80;
  }
  local_b8._0_4_ = 0;
  local_d8 = 0;
  puStack_f0 = &local_e8;
  local_e0 = &local_d8;
  local_108._4_4_ = 0;
  local_100 = (undefined8 **)0x0;
  if (local_d0 != (undefined8 **)0x0) {
    local_108._4_4_ = 3;
    local_100 = local_d0;
  }
  local_108._0_4_ = 0;
  local_158._4_4_ = 0;
  local_150 = (undefined8 **)0x0;
  puStack_140 = &local_138;
  local_130 = &local_128;
  local_128 = 0;
  if (local_120 != (undefined8 **)0x0) {
    local_158._4_4_ = 3;
    local_150 = local_120;
  }
  local_158._0_4_ = 0;
  local_a8 = &local_98;
  local_98 = &local_90;
  if (local_80 != (undefined8 **)0x0) {
    local_98 = (undefined8 *)CONCAT44((int)((ulong)&local_90 >> 0x20),0xffffffff);
    *local_b0 = &local_98;
    local_b8._0_4_ = 1;
    local_a8 = &local_90;
    if (1 < local_b8._4_4_) {
      if (&local_90 != (undefined8 *)0x0) {
        local_a8 = local_90;
      }
      uVar31 = (ulong)local_90 >> 0x20;
      local_90 = (undefined8 *)CONCAT44((int)uVar31,0xffffffff);
      if (1 < local_b8._4_4_) {
        local_b0[1] = &local_90;
        local_b8._0_4_ = 2;
      }
    }
    puVar16 = local_a8;
    if ((uint)local_b8 < local_b8._4_4_) {
      if (local_a8 != (undefined8 *)0x0) {
        local_a8 = (undefined8 *)*local_a8;
      }
      *(undefined4 *)puVar16 = 0xffffffff;
      if ((uint)local_b8 < local_b8._4_4_) {
        local_b0[(int)(uint)local_b8] = puVar16;
        local_b8._0_4_ = (uint)local_b8 + 1;
      }
    }
  }
  local_f8 = puStack_f0;
  ppuVar29 = &local_e0;
  puStack_a0 = &local_98;
  if (local_108._4_4_ == 0) goto LAB_01c2ab5c;
  if (puStack_f0 != (undefined8 *)0x0) {
    local_f8 = local_e8;
  }
  puVar16 = local_f8;
  local_e8 = (undefined8 **)CONCAT44((int)((ulong)&local_e0 >> 0x20),0xffffffff);
  if (local_108._4_4_ == 0) {
LAB_01c2aac0:
    ppuVar29 = local_e8;
    if ((uint)local_108 < local_108._4_4_) {
LAB_01c2ab24:
      puVar16 = local_f8;
      if (local_f8 != (undefined8 *)0x0) {
        local_f8 = (undefined8 *)*local_f8;
      }
      *(undefined4 *)puVar16 = 0xffffffff;
      ppuVar29 = local_e8;
      if ((uint)local_108 < local_108._4_4_) {
        local_100[(int)(uint)local_108] = puVar16;
        local_108._0_4_ = (uint)local_108 + 1;
      }
    }
  }
  else {
    *local_100 = puStack_f0;
    local_108._0_4_ = 1;
    if (local_108._4_4_ < 2) goto LAB_01c2aac0;
    local_108._0_4_ = 1;
    if (local_f8 != (undefined8 *)0x0) {
      local_f8 = (undefined8 *)*local_f8;
    }
    *(undefined4 *)puVar16 = 0xffffffff;
    ppuVar29 = local_e8;
    if (1 < local_108._4_4_) {
      local_100[1] = puVar16;
      local_108._0_4_ = 2;
      if (local_108._4_4_ < 3) goto LAB_01c2ab5c;
      goto LAB_01c2ab24;
    }
    if (1 < local_108._4_4_) goto LAB_01c2ab24;
  }
LAB_01c2ab5c:
  local_e8 = ppuVar29;
  local_148 = puStack_140;
  ppuVar29 = &local_130;
  if (local_158._4_4_ == 0) goto LAB_01c2ac50;
  if (puStack_140 != (undefined8 *)0x0) {
    local_148 = local_138;
  }
  puVar16 = local_148;
  local_138 = (undefined8 **)CONCAT44((int)((ulong)&local_130 >> 0x20),0xffffffff);
  if (local_158._4_4_ == 0) {
LAB_01c2abb4:
    ppuVar29 = local_138;
    if (local_158._4_4_ <= (uint)local_158) goto LAB_01c2ac50;
  }
  else {
    *local_150 = puStack_140;
    local_158._0_4_ = 1;
    if (local_158._4_4_ < 2) goto LAB_01c2abb4;
    local_158._0_4_ = 1;
    if (local_148 != (undefined8 *)0x0) {
      local_148 = (undefined8 *)*local_148;
    }
    *(undefined4 *)puVar16 = 0xffffffff;
    ppuVar29 = local_138;
    if (local_158._4_4_ < 2) {
      if (local_158._4_4_ < 2) goto LAB_01c2ac50;
    }
    else {
      local_150[1] = puVar16;
      local_158._0_4_ = 2;
      if (local_158._4_4_ < 3) goto LAB_01c2ac50;
    }
  }
  puVar16 = local_148;
  if (local_148 != (undefined8 *)0x0) {
    local_148 = (undefined8 *)*local_148;
  }
  *(undefined4 *)puVar16 = 0xffffffff;
  ppuVar29 = local_138;
  if ((uint)local_158 < local_158._4_4_) {
    local_150[(int)(uint)local_158] = puVar16;
    local_158._0_4_ = (uint)local_158 + 1;
  }
LAB_01c2ac50:
  local_138 = ppuVar29;
  local_1a8 = 0;
  uStack_1a4 = 0;
  local_1a0 = (undefined8 **)0x0;
  local_178 = 0;
  local_180 = &local_178;
  puStack_190 = &local_188;
  if (&local_170 == (undefined8 **)0x0) {
    local_198 = puStack_190;
    local_188 = &local_180;
  }
  else {
    local_188 = (undefined8 *)CONCAT44((int)((ulong)&local_180 >> 0x20),0xffffffff);
    uStack_1a4 = 3;
    local_198 = &local_180;
    if (&local_180 != (undefined8 *)0x0) {
      local_198 = local_180;
    }
    puVar16 = local_198;
    uVar31 = (ulong)local_180 >> 0x20;
    local_180 = (undefined8 *)CONCAT44((int)uVar31,0xffffffff);
    local_168 = &local_180;
    if (local_198 != (undefined8 *)0x0) {
      local_198 = (undefined8 *)*local_198;
    }
    local_170 = puStack_190;
    *(undefined4 *)puVar16 = 0xffffffff;
    local_160 = puVar16;
    local_1a8 = 3;
    local_1a0 = &local_170;
  }
  local_230 = &local_1a0;
  lVar32 = 0;
  do {
    if (iVar30 < 1) {
      local_1d8 = 0;
    }
    else {
      puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar18 = puVar7[3];
      uVar13 = *puVar7 ^ *puVar7 << 0xb;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      uVar13 = uVar13 >> 8 ^ uVar18 >> 0x13 ^ uVar13 ^ uVar18;
      puVar7[2] = uVar18;
      puVar7[3] = uVar13;
      local_1d8 = (int)((ulong)uVar13 * (ulong)(iVar30 + 1) >> 0x20);
    }
    if (local_210 < 1) {
      local_1e0 = 0;
    }
    else {
      puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar18 = puVar7[3];
      uVar13 = *puVar7 ^ *puVar7 << 0xb;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      uVar13 = uVar13 >> 8 ^ uVar18 >> 0x13 ^ uVar13 ^ uVar18;
      puVar7[2] = uVar18;
      puVar7[3] = uVar13;
      local_1e0 = (int)((ulong)uVar13 * (ulong)(local_210 + 1) >> 0x20);
    }
    if (iVar28 < 1) {
      local_1e8 = 0;
    }
    else {
      puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar18 = puVar7[3];
      uVar13 = *puVar7 ^ *puVar7 << 0xb;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      uVar13 = uVar13 >> 8 ^ uVar18 >> 0x13 ^ uVar13 ^ uVar18;
      puVar7[2] = uVar18;
      puVar7[3] = uVar13;
      local_1e8 = (int)((ulong)uVar13 * (ulong)(iVar28 + 1) >> 0x20);
    }
    if (local_1cc < 1) {
      iVar22 = 0;
    }
    else {
      puVar7 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar18 = puVar7[3];
      uVar13 = *puVar7 ^ *puVar7 << 0xb;
      *puVar7 = puVar7[1];
      puVar7[1] = puVar7[2];
      uVar13 = uVar13 >> 8 ^ uVar18 >> 0x13 ^ uVar13 ^ uVar18;
      puVar7[2] = uVar18;
      puVar7[3] = uVar13;
      iVar22 = (int)((ulong)uVar13 * (ulong)(local_1cc + 1) >> 0x20);
    }
    uVar31 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
LAB_01c2af38:
    puVar5 = PTR_DAT_04bb2020;
    if ((int)*(uint *)(param_1 + 0x9d0) < 1) {
      lVar14 = *(long *)(param_1 + 0x8c0);
      if (lVar14 != 0) {
        uVar23 = 0;
        if (*(uint **)(lVar14 + 8) != (uint *)0x0) {
          uVar23 = (ulong)**(uint **)(lVar14 + 8);
        }
        if (uVar31 < uVar23) {
          if ((((lVar14 != 0) && (puVar7 = *(uint **)(lVar14 + 8), puVar7 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 0x8d8) <= uVar31 ||
               (*(char *)(*(long *)(param_1 + 0x8e0) + uVar31) != '\0')))) &&
             (((uVar31 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
            iVar25 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              iVar25 = 0x1c;
            }
            puVar7 = (uint *)((ulong)(puVar7[1] * (int)uVar31 + (uint)(ushort)puVar7[2] * 8 + iVar25
                                     ) + (long)puVar7);
            if (puVar7 != (uint *)0x0) goto LAB_01c2af68;
          }
          goto switchD_01c2af98_default;
        }
      }
    }
    else if (uVar31 < *(uint *)(param_1 + 0x9d0)) {
      uVar23 = uVar31 & 0xffffffff;
      if (*(uint *)(param_1 + 0x9c0) <= uVar31) {
        uVar23 = 0;
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x9c8) + uVar23 * 8);
      if (puVar7 == (uint *)0x0) goto switchD_01c2af98_default;
LAB_01c2af68:
      uVar13 = *puVar7;
      if (uVar13 == 0 || puVar7 == (uint *)(ulong)uVar13) {
LAB_01c2af78:
        uVar13 = 0;
      }
      else {
        puVar20 = (uint *)((long)puVar7 - (long)(ulong)uVar13);
        uVar13 = 0;
        if (*puVar20 != 0) {
          uVar13 = puVar20[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar14 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar20 + lVar14 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar14 != 0) {
              uVar18 = 0;
              if ((ulong)uVar13 != 0) {
                uVar18 = (uint)((ulong)((long)puVar7 - lVar14) / (ulong)uVar13);
              }
              if (*puVar20 <= uVar18) {
                uVar18 = 0xffffffff;
              }
              if ((uVar18 < DAT_0534bc38) &&
                 (uVar13 = (uint)*(ushort *)(DAT_0534bc40 + (long)(int)uVar18 * 2), uVar13 < 10))
              goto LAB_01c2af7c;
            }
          }
          goto LAB_01c2af78;
        }
      }
LAB_01c2af7c:
      local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,uVar13);
      switch(uVar13) {
      case 0:
      case 1:
      case 2:
        if (iVar30 < 1) break;
        if (*puVar7 == 0) {
LAB_01c2b3dc:
          uVar13 = 0;
        }
        else {
          cVar12 = DAT_0534bc48;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              DAT_0534bc4c = 0xffffffffffffffff;
              DAT_0534bc54 = -1;
              DAT_0534bc48 = '\x01';
              DAT_0534bc7c = 0xffffffff;
              DAT_0534bc5c = 0xffffffffffffffff;
              DAT_0534bc64 = 0xffffffffffffffff;
              DAT_0534bc6c = 0xffffffffffffffff;
              DAT_0534bc74 = 0xffffffffffffffff;
            }
            else {
              if (-1 < (int)DAT_0534bc6c) {
                pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                if (pbVar15 == (byte *)0x0) goto LAB_01c2b3dc;
                uVar13 = (uint)*pbVar15;
                goto LAB_01c2b3e0;
              }
              if ((int)DAT_0534bc6c != -1) goto LAB_01c2b3dc;
            }
            puVar20 = (uint *)(ulong)*puVar7;
            uVar13 = 0;
            if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2b3e0;
            lVar14 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
            if (lVar14 == 0) goto LAB_01c2b3dc;
            uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
            uVar13 = 0;
            if (uVar23 == 0) goto LAB_01c2b3e0;
            piVar24 = (int *)(lVar14 + 4);
            while (piVar24[-1] != -0x56f47f82) {
              piVar24 = piVar24 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) {
                uVar13 = 0;
                goto LAB_01c2b3e0;
              }
            }
            iVar25 = 0;
            if (*piVar24 != -1) {
              iVar25 = *piVar24;
            }
            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
          } while (*puVar7 != 0);
          uVar13 = 0;
        }
LAB_01c2b3e0:
        if (*(uint *)*local_b0 == uVar13) break;
        if (*puVar7 == 0) {
LAB_01c2b67c:
          uVar13 = 0;
        }
        else {
          cVar12 = DAT_0534bc48;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              DAT_0534bc4c = 0xffffffffffffffff;
              DAT_0534bc54 = -1;
              DAT_0534bc48 = '\x01';
              DAT_0534bc7c = 0xffffffff;
              DAT_0534bc5c = 0xffffffffffffffff;
              DAT_0534bc64 = 0xffffffffffffffff;
              DAT_0534bc6c = 0xffffffffffffffff;
              DAT_0534bc74 = 0xffffffffffffffff;
            }
            else {
              if (-1 < (int)DAT_0534bc6c) {
                pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                if (pbVar15 == (byte *)0x0) goto LAB_01c2b67c;
                uVar13 = (uint)*pbVar15;
                goto LAB_01c2b680;
              }
              if ((int)DAT_0534bc6c != -1) goto LAB_01c2b67c;
            }
            puVar20 = (uint *)(ulong)*puVar7;
            uVar13 = 0;
            if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2b680;
            lVar14 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
            if (lVar14 == 0) goto LAB_01c2b67c;
            uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
            uVar13 = 0;
            if (uVar23 == 0) goto LAB_01c2b680;
            piVar24 = (int *)(lVar14 + 4);
            while (piVar24[-1] != -0x56f47f82) {
              piVar24 = piVar24 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) {
                uVar13 = 0;
                goto LAB_01c2b680;
              }
            }
            iVar25 = 0;
            if (*piVar24 != -1) {
              iVar25 = *piVar24;
            }
            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
          } while (*puVar7 != 0);
          uVar13 = 0;
        }
LAB_01c2b680:
        if (*(uint *)local_b0[1] == uVar13) break;
        if (*puVar7 == 0) {
LAB_01c2b9fc:
          uVar13 = 0;
        }
        else {
          cVar12 = DAT_0534bc48;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              DAT_0534bc4c = 0xffffffffffffffff;
              DAT_0534bc54 = -1;
              DAT_0534bc48 = '\x01';
              DAT_0534bc7c = 0xffffffff;
              DAT_0534bc5c = 0xffffffffffffffff;
              DAT_0534bc64 = 0xffffffffffffffff;
              DAT_0534bc6c = 0xffffffffffffffff;
              DAT_0534bc74 = 0xffffffffffffffff;
            }
            else {
              if (-1 < (int)DAT_0534bc6c) {
                pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                if (pbVar15 == (byte *)0x0) goto LAB_01c2b9fc;
                uVar13 = (uint)*pbVar15;
                goto LAB_01c2ba00;
              }
              if ((int)DAT_0534bc6c != -1) goto LAB_01c2b9fc;
            }
            puVar20 = (uint *)(ulong)*puVar7;
            uVar13 = 0;
            if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2ba00;
            lVar14 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
            if (lVar14 == 0) goto LAB_01c2b9fc;
            uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
            uVar13 = 0;
            if (uVar23 == 0) goto LAB_01c2ba00;
            piVar24 = (int *)(lVar14 + 4);
            while (piVar24[-1] != -0x56f47f82) {
              piVar24 = piVar24 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) {
                uVar13 = 0;
                goto LAB_01c2ba00;
              }
            }
            iVar25 = 0;
            if (*piVar24 != -1) {
              iVar25 = *piVar24;
            }
            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
          } while (*puVar7 != 0);
          uVar13 = 0;
        }
LAB_01c2ba00:
        if ((*(uint *)local_b0[2] == uVar13) || (*(int *)local_b0[lVar32] != -1)) break;
        if (*puVar7 != 0) {
          cVar12 = DAT_0534bc48;
          do {
            if (cVar12 == '\0') {
              cVar12 = '\x01';
              DAT_0534bc4c = 0xffffffffffffffff;
              DAT_0534bc54 = -1;
              DAT_0534bc48 = '\x01';
              DAT_0534bc7c = 0xffffffff;
              DAT_0534bc5c = 0xffffffffffffffff;
              DAT_0534bc64 = 0xffffffffffffffff;
              DAT_0534bc6c = 0xffffffffffffffff;
              DAT_0534bc74 = 0xffffffffffffffff;
            }
            else {
              if (-1 < DAT_0534bc54) {
                if ((ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7) != (ushort *)0x0) {
                  uVar17 = *(ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7);
                  goto LAB_01c2bed4;
                }
                break;
              }
              if (DAT_0534bc54._4_4_ != 0xffffffff) break;
            }
            puVar20 = (uint *)(ulong)*puVar7;
            uVar17 = 0xfffe;
            if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2bed4;
            lVar14 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
            if (lVar14 == 0) break;
            uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
            DAT_0534bc54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc54);
            if (uVar23 == 0) break;
            piVar24 = (int *)(lVar14 + 4);
            while (piVar24[-1] != -0x4fd0f3e9) {
              piVar24 = piVar24 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) goto LAB_01c2bed0;
            }
            iVar25 = 0;
            if (*piVar24 != -1) {
              iVar25 = *piVar24;
            }
            DAT_0534bc54 = CONCAT44(iVar25,(undefined4)DAT_0534bc54);
            if (*puVar7 == 0) break;
          } while( true );
        }
LAB_01c2bed0:
        uVar17 = 0xfffe;
LAB_01c2bed4:
        local_1c8 = (undefined *)(ulong)uVar17;
        uVar6 = FUN_0277d4ac(&local_1c8);
        uVar23 = FUN_01c27f3c(uVar6,&local_1c8,0);
        if ((uVar23 & 1) == 0) {
          if (*puVar7 != 0) {
            cVar12 = DAT_0534bc48;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                DAT_0534bc4c = 0xffffffffffffffff;
                DAT_0534bc54 = -1;
                DAT_0534bc48 = '\x01';
                DAT_0534bc7c = 0xffffffff;
                DAT_0534bc5c = 0xffffffffffffffff;
                DAT_0534bc64 = 0xffffffffffffffff;
                DAT_0534bc6c = 0xffffffffffffffff;
                DAT_0534bc74 = 0xffffffffffffffff;
              }
              else {
                if (-1 < (int)DAT_0534bc5c) {
                  puVar3 = (undefined2 *)((DAT_0534bc5c & 0xffffffff) + (long)puVar7);
                  if (puVar3 != (undefined2 *)0x0) {
                    local_1b0 = *puVar3;
                    goto LAB_01c2c264;
                  }
                  break;
                }
                if ((int)DAT_0534bc5c != -1) break;
              }
              puVar20 = (uint *)(ulong)*puVar7;
              local_1b0 = 0xfffe;
              if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2c264;
              lVar14 = 0xc;
              if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
              if (lVar14 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
              DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,0xfffffffe);
              if (uVar23 == 0) break;
              piVar24 = (int *)(lVar14 + 4);
              while (piVar24[-1] != -0x8708939) {
                piVar24 = piVar24 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_01c2c260;
              }
              iVar25 = 0;
              if (*piVar24 != -1) {
                iVar25 = *piVar24;
              }
              DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,iVar25);
              if (*puVar7 == 0) break;
            } while( true );
          }
LAB_01c2c260:
          local_1b0 = 0xfffe;
LAB_01c2c264:
          local_1ae = 0;
          local_1ac = 0;
          uVar6 = FUN_0277d4ac(&local_1b0);
          uVar23 = FUN_01c27f3c(uVar6,&local_1b0,0);
          if ((uVar23 & 1) != 0) goto LAB_01c2c29c;
          if (*puVar7 != 0) {
            cVar12 = DAT_0534bc48;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                DAT_0534bc4c = 0xffffffffffffffff;
                DAT_0534bc54 = -1;
                DAT_0534bc48 = '\x01';
                DAT_0534bc7c = 0xffffffff;
                DAT_0534bc5c = 0xffffffffffffffff;
                DAT_0534bc64 = 0xffffffffffffffff;
                DAT_0534bc6c = 0xffffffffffffffff;
                DAT_0534bc74 = 0xffffffffffffffff;
              }
              else {
                if (-1 < (long)DAT_0534bc5c) {
                  if ((undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7) != (undefined2 *)0x0)
                  {
                    local_1b8 = *(undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7);
                    goto LAB_01c2ca30;
                  }
                  break;
                }
                if (DAT_0534bc5c._4_4_ != 0xffffffff) break;
              }
              puVar20 = (uint *)(ulong)*puVar7;
              local_1b8 = 0xfffe;
              if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2ca30;
              lVar14 = 0xc;
              if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
              if (lVar14 == 0) break;
              uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
              DAT_0534bc5c = CONCAT44(0xfffffffe,(int)DAT_0534bc5c);
              if (uVar23 == 0) break;
              piVar24 = (int *)(lVar14 + 4);
              while (piVar24[-1] != -0x3510a089) {
                piVar24 = piVar24 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) goto LAB_01c2ca2c;
              }
              iVar25 = 0;
              if (*piVar24 != -1) {
                iVar25 = *piVar24;
              }
              DAT_0534bc5c = CONCAT44(iVar25,(int)DAT_0534bc5c);
              if (*puVar7 == 0) break;
            } while( true );
          }
LAB_01c2ca2c:
          local_1b8 = 0xfffe;
LAB_01c2ca30:
          local_1b6 = 0;
          local_1b4 = 0;
          uVar6 = FUN_0277d4ac(&local_1b8);
          uVar23 = FUN_01c27f3c(uVar6,&local_1b8,0);
          if ((uVar23 & 1) != 0) goto LAB_01c2c29c;
          iVar19 = 1;
          iVar25 = -1;
        }
        else {
LAB_01c2c29c:
          iVar25 = -4;
          iVar19 = 4;
        }
        iVar8 = iVar19 + iVar8;
        if (iVar8 < local_1d8) break;
        iVar30 = iVar25 + iVar30;
        pppuVar21 = &local_b0;
        if (*puVar7 == 0) {
LAB_01c2c470:
          uVar13 = 0;
        }
        else {
          cVar12 = DAT_0534bc48;
LAB_01c2c2e0:
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            DAT_0534bc4c = 0xffffffffffffffff;
            DAT_0534bc54 = -1;
            DAT_0534bc48 = '\x01';
            DAT_0534bc7c = 0xffffffff;
            DAT_0534bc5c = 0xffffffffffffffff;
            DAT_0534bc64 = 0xffffffffffffffff;
            DAT_0534bc6c = 0xffffffffffffffff;
            DAT_0534bc74 = 0xffffffffffffffff;
            uVar13 = *puVar7;
joined_r0x01c2c31c:
            if ((uVar13 == 0) || (puVar20 = (uint *)(ulong)uVar13, puVar7 == puVar20))
            goto LAB_01c2af24;
            lVar14 = 0xc;
            if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
              lVar14 = 0x1c;
            }
            lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
            if (lVar14 == 0) goto LAB_01c2af24;
            uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
            DAT_0534bc6c._4_4_ = (undefined4)(DAT_0534bc6c >> 0x20);
            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
            if (uVar23 == 0) goto LAB_01c2af24;
            piVar24 = (int *)(lVar14 + 4);
            while (piVar24[-1] != -0x56f47f82) {
              piVar24 = piVar24 + 2;
              uVar23 = uVar23 - 1;
              if (uVar23 == 0) goto LAB_01c2af24;
            }
            iVar25 = 0;
            if (*piVar24 != -1) {
              iVar25 = *piVar24;
            }
            DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
            if (*puVar7 == 0) goto LAB_01c2af24;
            goto LAB_01c2c2e0;
          }
          if ((int)DAT_0534bc6c < 0) {
            if ((int)DAT_0534bc6c != -1) goto LAB_01c2af24;
            uVar13 = *puVar7;
            goto joined_r0x01c2c31c;
          }
          pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
          if (pbVar15 == (byte *)0x0) goto LAB_01c2c470;
LAB_01c2cd48:
          uVar13 = (uint)*pbVar15;
        }
        goto LAB_01c2af28;
      case 3:
      case 4:
      case 5:
        if (0 < local_210) {
          if (*puVar7 == 0) {
LAB_01c2b4bc:
            uVar13 = 0;
          }
          else {
            cVar12 = DAT_0534bc48;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                DAT_0534bc4c = 0xffffffffffffffff;
                DAT_0534bc54 = -1;
                DAT_0534bc48 = '\x01';
                DAT_0534bc7c = 0xffffffff;
                DAT_0534bc5c = 0xffffffffffffffff;
                DAT_0534bc64 = 0xffffffffffffffff;
                DAT_0534bc6c = 0xffffffffffffffff;
                DAT_0534bc74 = 0xffffffffffffffff;
              }
              else {
                if (-1 < (int)DAT_0534bc6c) {
                  pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                  if (pbVar15 == (byte *)0x0) goto LAB_01c2b4bc;
                  uVar13 = (uint)*pbVar15;
                  goto LAB_01c2b4c0;
                }
                if ((int)DAT_0534bc6c != -1) goto LAB_01c2b4bc;
              }
              puVar20 = (uint *)(ulong)*puVar7;
              uVar13 = 0;
              if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2b4c0;
              lVar14 = 0xc;
              if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
              if (lVar14 == 0) goto LAB_01c2b4bc;
              uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
              DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
              uVar13 = 0;
              if (uVar23 == 0) goto LAB_01c2b4c0;
              piVar24 = (int *)(lVar14 + 4);
              while (piVar24[-1] != -0x56f47f82) {
                piVar24 = piVar24 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) {
                  uVar13 = 0;
                  goto LAB_01c2b4c0;
                }
              }
              iVar25 = 0;
              if (*piVar24 != -1) {
                iVar25 = *piVar24;
              }
              DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
            } while (*puVar7 != 0);
            uVar13 = 0;
          }
LAB_01c2b4c0:
          if (*(uint *)*local_100 != uVar13) {
            if (*puVar7 == 0) {
LAB_01c2b75c:
              uVar13 = 0;
            }
            else {
              cVar12 = DAT_0534bc48;
              do {
                if (cVar12 == '\0') {
                  cVar12 = '\x01';
                  DAT_0534bc4c = 0xffffffffffffffff;
                  DAT_0534bc54 = -1;
                  DAT_0534bc48 = '\x01';
                  DAT_0534bc7c = 0xffffffff;
                  DAT_0534bc5c = 0xffffffffffffffff;
                  DAT_0534bc64 = 0xffffffffffffffff;
                  DAT_0534bc6c = 0xffffffffffffffff;
                  DAT_0534bc74 = 0xffffffffffffffff;
                }
                else {
                  if (-1 < (int)DAT_0534bc6c) {
                    pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                    if (pbVar15 == (byte *)0x0) goto LAB_01c2b75c;
                    uVar13 = (uint)*pbVar15;
                    goto LAB_01c2b760;
                  }
                  if ((int)DAT_0534bc6c != -1) goto LAB_01c2b75c;
                }
                puVar20 = (uint *)(ulong)*puVar7;
                uVar13 = 0;
                if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2b760;
                lVar14 = 0xc;
                if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) goto LAB_01c2b75c;
                uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                uVar13 = 0;
                if (uVar23 == 0) goto LAB_01c2b760;
                piVar24 = (int *)(lVar14 + 4);
                while (piVar24[-1] != -0x56f47f82) {
                  piVar24 = piVar24 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) {
                    uVar13 = 0;
                    goto LAB_01c2b760;
                  }
                }
                iVar25 = 0;
                if (*piVar24 != -1) {
                  iVar25 = *piVar24;
                }
                DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
              } while (*puVar7 != 0);
              uVar13 = 0;
            }
LAB_01c2b760:
            if (*(uint *)local_100[1] != uVar13) {
              if (*puVar7 == 0) {
LAB_01c2baf0:
                uVar13 = 0;
              }
              else {
                cVar12 = DAT_0534bc48;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    DAT_0534bc4c = 0xffffffffffffffff;
                    DAT_0534bc54 = -1;
                    DAT_0534bc48 = '\x01';
                    DAT_0534bc7c = 0xffffffff;
                    DAT_0534bc5c = 0xffffffffffffffff;
                    DAT_0534bc64 = 0xffffffffffffffff;
                    DAT_0534bc6c = 0xffffffffffffffff;
                    DAT_0534bc74 = 0xffffffffffffffff;
                  }
                  else {
                    if (-1 < (int)DAT_0534bc6c) {
                      pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                      if (pbVar15 == (byte *)0x0) goto LAB_01c2baf0;
                      uVar13 = (uint)*pbVar15;
                      goto LAB_01c2baf4;
                    }
                    if ((int)DAT_0534bc6c != -1) goto LAB_01c2baf0;
                  }
                  puVar20 = (uint *)(ulong)*puVar7;
                  uVar13 = 0;
                  if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2baf4;
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                  if (lVar14 == 0) goto LAB_01c2baf0;
                  uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                  DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                  uVar13 = 0;
                  if (uVar23 == 0) goto LAB_01c2baf4;
                  piVar24 = (int *)(lVar14 + 4);
                  while (piVar24[-1] != -0x56f47f82) {
                    piVar24 = piVar24 + 2;
                    uVar23 = uVar23 - 1;
                    if (uVar23 == 0) {
                      uVar13 = 0;
                      goto LAB_01c2baf4;
                    }
                  }
                  iVar25 = 0;
                  if (*piVar24 != -1) {
                    iVar25 = *piVar24;
                  }
                  DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
                } while (*puVar7 != 0);
                uVar13 = 0;
              }
LAB_01c2baf4:
              if ((*(uint *)local_100[2] != uVar13) && (*(int *)local_100[lVar32] == -1)) {
                if (*puVar7 != 0) {
                  cVar12 = DAT_0534bc48;
                  do {
                    if (cVar12 == '\0') {
                      cVar12 = '\x01';
                      DAT_0534bc4c = 0xffffffffffffffff;
                      DAT_0534bc54 = -1;
                      DAT_0534bc48 = '\x01';
                      DAT_0534bc7c = 0xffffffff;
                      DAT_0534bc5c = 0xffffffffffffffff;
                      DAT_0534bc64 = 0xffffffffffffffff;
                      DAT_0534bc6c = 0xffffffffffffffff;
                      DAT_0534bc74 = 0xffffffffffffffff;
                    }
                    else {
                      if (-1 < DAT_0534bc54) {
                        if ((ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7) != (ushort *)0x0) {
                          uVar17 = *(ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7);
                          goto LAB_01c2bff4;
                        }
                        break;
                      }
                      if (DAT_0534bc54._4_4_ != 0xffffffff) break;
                    }
                    puVar20 = (uint *)(ulong)*puVar7;
                    uVar17 = 0xfffe;
                    if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2bff4;
                    lVar14 = 0xc;
                    if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                      lVar14 = 0x1c;
                    }
                    lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                    if (lVar14 == 0) break;
                    uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                    DAT_0534bc54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc54);
                    if (uVar23 == 0) break;
                    piVar24 = (int *)(lVar14 + 4);
                    while (piVar24[-1] != -0x4fd0f3e9) {
                      piVar24 = piVar24 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) goto LAB_01c2bff0;
                    }
                    iVar25 = 0;
                    if (*piVar24 != -1) {
                      iVar25 = *piVar24;
                    }
                    DAT_0534bc54 = CONCAT44(iVar25,(undefined4)DAT_0534bc54);
                    if (*puVar7 == 0) break;
                  } while( true );
                }
LAB_01c2bff0:
                uVar17 = 0xfffe;
LAB_01c2bff4:
                local_1c8 = (undefined *)(ulong)uVar17;
                uVar6 = FUN_0277d4ac(&local_1c8);
                uVar23 = FUN_01c27f3c(uVar6,&local_1c8,0);
                if ((uVar23 & 1) == 0) {
                  if (*puVar7 != 0) {
                    cVar12 = DAT_0534bc48;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (int)DAT_0534bc5c) {
                          puVar3 = (undefined2 *)((DAT_0534bc5c & 0xffffffff) + (long)puVar7);
                          if (puVar3 != (undefined2 *)0x0) {
                            local_1b0 = *puVar3;
                            goto LAB_01c2c48c;
                          }
                          break;
                        }
                        if ((int)DAT_0534bc5c != -1) break;
                      }
                      puVar20 = (uint *)(ulong)*puVar7;
                      local_1b0 = 0xfffe;
                      if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2c48c;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) break;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,0xfffffffe);
                      if (uVar23 == 0) break;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x8708939) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2c488;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,iVar25);
                      if (*puVar7 == 0) break;
                    } while( true );
                  }
LAB_01c2c488:
                  local_1b0 = 0xfffe;
LAB_01c2c48c:
                  local_1ae = 0;
                  local_1ac = 0;
                  uVar6 = FUN_0277d4ac(&local_1b0);
                  uVar23 = FUN_01c27f3c(uVar6,&local_1b0,0);
                  if ((uVar23 & 1) != 0) goto LAB_01c2c4c8;
                  if (*puVar7 != 0) {
                    cVar12 = DAT_0534bc48;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (long)DAT_0534bc5c) {
                          if ((undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7) !=
                              (undefined2 *)0x0) {
                            local_1b8 = *(undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7);
                            goto LAB_01c2ca88;
                          }
                          break;
                        }
                        if (DAT_0534bc5c._4_4_ != 0xffffffff) break;
                      }
                      puVar20 = (uint *)(ulong)*puVar7;
                      local_1b8 = 0xfffe;
                      if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2ca88;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) break;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc5c = CONCAT44(0xfffffffe,(int)DAT_0534bc5c);
                      if (uVar23 == 0) break;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x3510a089) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2ca84;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc5c = CONCAT44(iVar25,(int)DAT_0534bc5c);
                      if (*puVar7 == 0) break;
                    } while( true );
                  }
LAB_01c2ca84:
                  local_1b8 = 0xfffe;
LAB_01c2ca88:
                  local_1b6 = 0;
                  local_1b4 = 0;
                  uVar6 = FUN_0277d4ac(&local_1b8);
                  uVar23 = FUN_01c27f3c(uVar6,&local_1b8,0);
                  if ((uVar23 & 1) != 0) goto LAB_01c2c4c8;
                  iVar19 = 1;
                  iVar25 = -1;
                }
                else {
LAB_01c2c4c8:
                  iVar25 = -4;
                  iVar19 = 4;
                }
                iVar9 = iVar19 + iVar9;
                if (local_1e0 <= iVar9) {
                  local_210 = iVar25 + local_210;
                  pppuVar21 = &local_100;
                  if (*puVar7 != 0) {
                    cVar12 = DAT_0534bc48;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                        uVar13 = *puVar7;
                      }
                      else {
                        if (-1 < (int)DAT_0534bc6c) {
                          pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                          if (pbVar15 != (byte *)0x0) goto LAB_01c2cd48;
                          break;
                        }
                        if ((int)DAT_0534bc6c != -1) goto LAB_01c2af24;
                        uVar13 = *puVar7;
                      }
                      if ((uVar13 == 0) || (puVar20 = (uint *)(ulong)uVar13, puVar7 == puVar20))
                      goto LAB_01c2af24;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) goto LAB_01c2af24;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc6c._4_4_ = (undefined4)(DAT_0534bc6c >> 0x20);
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                      if (uVar23 == 0) goto LAB_01c2af24;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x56f47f82) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2af24;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
                      if (*puVar7 == 0) goto LAB_01c2af24;
                    } while( true );
                  }
                  uVar13 = 0;
                  goto LAB_01c2af28;
                }
              }
            }
          }
        }
        break;
      case 6:
      case 7:
      case 8:
        if (0 < iVar28) {
          if (*puVar7 == 0) {
LAB_01c2b59c:
            uVar13 = 0;
          }
          else {
            cVar12 = DAT_0534bc48;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                DAT_0534bc4c = 0xffffffffffffffff;
                DAT_0534bc54 = -1;
                DAT_0534bc48 = '\x01';
                DAT_0534bc7c = 0xffffffff;
                DAT_0534bc5c = 0xffffffffffffffff;
                DAT_0534bc64 = 0xffffffffffffffff;
                DAT_0534bc6c = 0xffffffffffffffff;
                DAT_0534bc74 = 0xffffffffffffffff;
              }
              else {
                if (-1 < (int)DAT_0534bc6c) {
                  pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                  if (pbVar15 == (byte *)0x0) goto LAB_01c2b59c;
                  uVar13 = (uint)*pbVar15;
                  goto LAB_01c2b5a0;
                }
                if ((int)DAT_0534bc6c != -1) goto LAB_01c2b59c;
              }
              puVar20 = (uint *)(ulong)*puVar7;
              uVar13 = 0;
              if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2b5a0;
              lVar14 = 0xc;
              if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
              if (lVar14 == 0) goto LAB_01c2b59c;
              uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
              DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
              uVar13 = 0;
              if (uVar23 == 0) goto LAB_01c2b5a0;
              piVar24 = (int *)(lVar14 + 4);
              while (piVar24[-1] != -0x56f47f82) {
                piVar24 = piVar24 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) {
                  uVar13 = 0;
                  goto LAB_01c2b5a0;
                }
              }
              iVar25 = 0;
              if (*piVar24 != -1) {
                iVar25 = *piVar24;
              }
              DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
            } while (*puVar7 != 0);
            uVar13 = 0;
          }
LAB_01c2b5a0:
          if (*(uint *)*local_150 != uVar13) {
            if (*puVar7 == 0) {
LAB_01c2b83c:
              uVar13 = 0;
            }
            else {
              cVar12 = DAT_0534bc48;
              do {
                if (cVar12 == '\0') {
                  cVar12 = '\x01';
                  DAT_0534bc4c = 0xffffffffffffffff;
                  DAT_0534bc54 = -1;
                  DAT_0534bc48 = '\x01';
                  DAT_0534bc7c = 0xffffffff;
                  DAT_0534bc5c = 0xffffffffffffffff;
                  DAT_0534bc64 = 0xffffffffffffffff;
                  DAT_0534bc6c = 0xffffffffffffffff;
                  DAT_0534bc74 = 0xffffffffffffffff;
                }
                else {
                  if (-1 < (int)DAT_0534bc6c) {
                    pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                    if (pbVar15 == (byte *)0x0) goto LAB_01c2b83c;
                    uVar13 = (uint)*pbVar15;
                    goto LAB_01c2b840;
                  }
                  if ((int)DAT_0534bc6c != -1) goto LAB_01c2b83c;
                }
                puVar20 = (uint *)(ulong)*puVar7;
                uVar13 = 0;
                if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2b840;
                lVar14 = 0xc;
                if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) goto LAB_01c2b83c;
                uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                uVar13 = 0;
                if (uVar23 == 0) goto LAB_01c2b840;
                piVar24 = (int *)(lVar14 + 4);
                while (piVar24[-1] != -0x56f47f82) {
                  piVar24 = piVar24 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) {
                    uVar13 = 0;
                    goto LAB_01c2b840;
                  }
                }
                iVar25 = 0;
                if (*piVar24 != -1) {
                  iVar25 = *piVar24;
                }
                DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
              } while (*puVar7 != 0);
              uVar13 = 0;
            }
LAB_01c2b840:
            if (*(uint *)local_150[1] != uVar13) {
              if (*puVar7 == 0) {
LAB_01c2bbf0:
                uVar13 = 0;
              }
              else {
                cVar12 = DAT_0534bc48;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    DAT_0534bc4c = 0xffffffffffffffff;
                    DAT_0534bc54 = -1;
                    DAT_0534bc48 = '\x01';
                    DAT_0534bc7c = 0xffffffff;
                    DAT_0534bc5c = 0xffffffffffffffff;
                    DAT_0534bc64 = 0xffffffffffffffff;
                    DAT_0534bc6c = 0xffffffffffffffff;
                    DAT_0534bc74 = 0xffffffffffffffff;
                  }
                  else {
                    if (-1 < (int)DAT_0534bc6c) {
                      pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                      if (pbVar15 == (byte *)0x0) goto LAB_01c2bbf0;
                      uVar13 = (uint)*pbVar15;
                      goto LAB_01c2bbf4;
                    }
                    if ((int)DAT_0534bc6c != -1) goto LAB_01c2bbf0;
                  }
                  puVar20 = (uint *)(ulong)*puVar7;
                  uVar13 = 0;
                  if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2bbf4;
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                  if (lVar14 == 0) goto LAB_01c2bbf0;
                  uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                  DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                  uVar13 = 0;
                  if (uVar23 == 0) goto LAB_01c2bbf4;
                  piVar24 = (int *)(lVar14 + 4);
                  while (piVar24[-1] != -0x56f47f82) {
                    piVar24 = piVar24 + 2;
                    uVar23 = uVar23 - 1;
                    if (uVar23 == 0) {
                      uVar13 = 0;
                      goto LAB_01c2bbf4;
                    }
                  }
                  iVar25 = 0;
                  if (*piVar24 != -1) {
                    iVar25 = *piVar24;
                  }
                  DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
                } while (*puVar7 != 0);
                uVar13 = 0;
              }
LAB_01c2bbf4:
              if ((*(uint *)local_150[2] != uVar13) && (*(int *)local_150[lVar32] == -1)) {
                if (*puVar7 != 0) {
                  cVar12 = DAT_0534bc48;
                  do {
                    if (cVar12 == '\0') {
                      cVar12 = '\x01';
                      DAT_0534bc4c = 0xffffffffffffffff;
                      DAT_0534bc54 = -1;
                      DAT_0534bc48 = '\x01';
                      DAT_0534bc7c = 0xffffffff;
                      DAT_0534bc5c = 0xffffffffffffffff;
                      DAT_0534bc64 = 0xffffffffffffffff;
                      DAT_0534bc6c = 0xffffffffffffffff;
                      DAT_0534bc74 = 0xffffffffffffffff;
                    }
                    else {
                      if (-1 < DAT_0534bc54) {
                        if ((ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7) != (ushort *)0x0) {
                          uVar17 = *(ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7);
                          goto LAB_01c2c114;
                        }
                        break;
                      }
                      if (DAT_0534bc54._4_4_ != 0xffffffff) break;
                    }
                    puVar20 = (uint *)(ulong)*puVar7;
                    uVar17 = 0xfffe;
                    if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2c114;
                    lVar14 = 0xc;
                    if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                      lVar14 = 0x1c;
                    }
                    lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                    if (lVar14 == 0) break;
                    uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                    DAT_0534bc54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc54);
                    if (uVar23 == 0) break;
                    piVar24 = (int *)(lVar14 + 4);
                    while (piVar24[-1] != -0x4fd0f3e9) {
                      piVar24 = piVar24 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) goto LAB_01c2c110;
                    }
                    iVar25 = 0;
                    if (*piVar24 != -1) {
                      iVar25 = *piVar24;
                    }
                    DAT_0534bc54 = CONCAT44(iVar25,(undefined4)DAT_0534bc54);
                    if (*puVar7 == 0) break;
                  } while( true );
                }
LAB_01c2c110:
                uVar17 = 0xfffe;
LAB_01c2c114:
                uVar6 = *(undefined8 *)PTR_DAT_04bb4830;
                local_1c8 = (undefined *)(ulong)uVar17;
                FUN_0277d4ac(&local_1c8);
                uVar23 = FUN_01c1ee08(uVar6,&local_1c8);
                if ((uVar23 & 1) == 0) {
                  if (*puVar7 == 0) {
                    local_1b0 = 0xfffe;
                  }
                  else {
                    cVar12 = DAT_0534bc48;
LAB_01c2c17c:
                    if (cVar12 == '\0') {
                      cVar12 = '\x01';
                      DAT_0534bc4c = 0xffffffffffffffff;
                      DAT_0534bc54 = -1;
                      DAT_0534bc48 = '\x01';
                      DAT_0534bc7c = 0xffffffff;
                      DAT_0534bc5c = 0xffffffffffffffff;
                      DAT_0534bc64 = 0xffffffffffffffff;
                      DAT_0534bc6c = 0xffffffffffffffff;
                      DAT_0534bc74 = 0xffffffffffffffff;
LAB_01c2c1b8:
                      puVar20 = (uint *)(ulong)*puVar7;
                      local_1b0 = 0xfffe;
                      if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2c6cc;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) goto LAB_01c2c6c8;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,0xfffffffe);
                      if (uVar23 == 0) goto LAB_01c2c6c8;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x8708939) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2c6c8;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,iVar25);
                      if (*puVar7 == 0) goto LAB_01c2c6c8;
                      goto LAB_01c2c17c;
                    }
                    if ((int)DAT_0534bc5c < 0) {
                      if ((int)DAT_0534bc5c != -1) goto LAB_01c2c6c8;
                      goto LAB_01c2c1b8;
                    }
                    puVar3 = (undefined2 *)((DAT_0534bc5c & 0xffffffff) + (long)puVar7);
                    if (puVar3 != (undefined2 *)0x0) {
                      local_1b0 = *puVar3;
                      goto LAB_01c2c6cc;
                    }
LAB_01c2c6c8:
                    local_1b0 = 0xfffe;
                  }
LAB_01c2c6cc:
                  uVar6 = *(undefined8 *)PTR_DAT_04bb4830;
                  local_1ae = 0;
                  local_1ac = 0;
                  FUN_0277d4ac(&local_1b0);
                  uVar23 = FUN_01c1ee08(uVar6,&local_1b0);
                  if ((uVar23 & 1) != 0) goto LAB_01c2c70c;
                  if (*puVar7 == 0) {
                    local_1b8 = 0xfffe;
                  }
                  else {
                    cVar12 = DAT_0534bc48;
LAB_01c2c824:
                    if (cVar12 == '\0') {
                      cVar12 = '\x01';
                      DAT_0534bc4c = 0xffffffffffffffff;
                      DAT_0534bc54 = -1;
                      DAT_0534bc48 = '\x01';
                      DAT_0534bc7c = 0xffffffff;
                      DAT_0534bc5c = 0xffffffffffffffff;
                      DAT_0534bc64 = 0xffffffffffffffff;
                      DAT_0534bc6c = 0xffffffffffffffff;
                      DAT_0534bc74 = 0xffffffffffffffff;
LAB_01c2c858:
                      puVar20 = (uint *)(ulong)*puVar7;
                      local_1b8 = 0xfffe;
                      if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2cae4;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) goto LAB_01c2cae0;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc5c = CONCAT44(0xfffffffe,(int)DAT_0534bc5c);
                      if (uVar23 == 0) goto LAB_01c2cae0;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x3510a089) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2cae0;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc5c = CONCAT44(iVar25,(int)DAT_0534bc5c);
                      if (*puVar7 == 0) goto LAB_01c2cae0;
                      goto LAB_01c2c824;
                    }
                    if ((long)DAT_0534bc5c < 0) {
                      if (DAT_0534bc5c._4_4_ != 0xffffffff) goto LAB_01c2cae0;
                      goto LAB_01c2c858;
                    }
                    if ((undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7) !=
                        (undefined2 *)0x0) {
                      local_1b8 = *(undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7);
                      goto LAB_01c2cae4;
                    }
LAB_01c2cae0:
                    local_1b8 = 0xfffe;
                  }
LAB_01c2cae4:
                  uVar6 = *(undefined8 *)PTR_DAT_04bb4830;
                  local_1b6 = 0;
                  local_1b4 = 0;
                  FUN_0277d4ac(&local_1b8);
                  uVar23 = FUN_01c1ee08(uVar6,&local_1b8);
                  if ((uVar23 & 1) != 0) goto LAB_01c2c70c;
                  iVar19 = 1;
                  iVar25 = -1;
                }
                else {
LAB_01c2c70c:
                  iVar25 = -4;
                  iVar19 = 4;
                }
                iVar10 = iVar19 + iVar10;
                if (local_1e8 <= iVar10) {
                  iVar28 = iVar25 + iVar28;
                  pppuVar21 = &local_150;
                  if (*puVar7 != 0) {
                    cVar12 = DAT_0534bc48;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                        uVar13 = *puVar7;
                      }
                      else {
                        if (-1 < (int)DAT_0534bc6c) {
                          pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                          if (pbVar15 != (byte *)0x0) goto LAB_01c2cd48;
                          break;
                        }
                        if ((int)DAT_0534bc6c != -1) goto LAB_01c2af24;
                        uVar13 = *puVar7;
                      }
                      if ((uVar13 == 0) || (puVar20 = (uint *)(ulong)uVar13, puVar7 == puVar20))
                      goto LAB_01c2af24;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) goto LAB_01c2af24;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc6c._4_4_ = (undefined4)(DAT_0534bc6c >> 0x20);
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                      if (uVar23 == 0) goto LAB_01c2af24;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x56f47f82) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2af24;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
                      if (*puVar7 == 0) goto LAB_01c2af24;
                    } while( true );
                  }
                  uVar13 = 0;
                  goto LAB_01c2af28;
                }
              }
            }
          }
        }
        break;
      case 9:
        if (0 < local_1cc) {
          if (*puVar7 == 0) {
LAB_01c2b91c:
            uVar13 = 0;
          }
          else {
            cVar12 = DAT_0534bc48;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                DAT_0534bc4c = 0xffffffffffffffff;
                DAT_0534bc54 = -1;
                DAT_0534bc48 = '\x01';
                DAT_0534bc7c = 0xffffffff;
                DAT_0534bc5c = 0xffffffffffffffff;
                DAT_0534bc64 = 0xffffffffffffffff;
                DAT_0534bc6c = 0xffffffffffffffff;
                DAT_0534bc74 = 0xffffffffffffffff;
              }
              else {
                if (-1 < (int)DAT_0534bc6c) {
                  pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                  if (pbVar15 == (byte *)0x0) goto LAB_01c2b91c;
                  uVar13 = (uint)*pbVar15;
                  goto LAB_01c2b920;
                }
                if ((int)DAT_0534bc6c != -1) goto LAB_01c2b91c;
              }
              puVar20 = (uint *)(ulong)*puVar7;
              uVar13 = 0;
              if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2b920;
              lVar14 = 0xc;
              if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                lVar14 = 0x1c;
              }
              lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
              if (lVar14 == 0) goto LAB_01c2b91c;
              uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
              DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
              uVar13 = 0;
              if (uVar23 == 0) goto LAB_01c2b920;
              piVar24 = (int *)(lVar14 + 4);
              while (piVar24[-1] != -0x56f47f82) {
                piVar24 = piVar24 + 2;
                uVar23 = uVar23 - 1;
                if (uVar23 == 0) {
                  uVar13 = 0;
                  goto LAB_01c2b920;
                }
              }
              iVar25 = 0;
              if (*piVar24 != -1) {
                iVar25 = *piVar24;
              }
              DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
            } while (*puVar7 != 0);
            uVar13 = 0;
          }
LAB_01c2b920:
          if (*(uint *)*local_1a0 != uVar13) {
            if (*puVar7 == 0) {
LAB_01c2bcf0:
              uVar13 = 0;
            }
            else {
              cVar12 = DAT_0534bc48;
              do {
                if (cVar12 == '\0') {
                  cVar12 = '\x01';
                  DAT_0534bc4c = 0xffffffffffffffff;
                  DAT_0534bc54 = -1;
                  DAT_0534bc48 = '\x01';
                  DAT_0534bc7c = 0xffffffff;
                  DAT_0534bc5c = 0xffffffffffffffff;
                  DAT_0534bc64 = 0xffffffffffffffff;
                  DAT_0534bc6c = 0xffffffffffffffff;
                  DAT_0534bc74 = 0xffffffffffffffff;
                }
                else {
                  if (-1 < (int)DAT_0534bc6c) {
                    pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                    if (pbVar15 == (byte *)0x0) goto LAB_01c2bcf0;
                    uVar13 = (uint)*pbVar15;
                    goto LAB_01c2bcf4;
                  }
                  if ((int)DAT_0534bc6c != -1) goto LAB_01c2bcf0;
                }
                puVar20 = (uint *)(ulong)*puVar7;
                uVar13 = 0;
                if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2bcf4;
                lVar14 = 0xc;
                if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                  lVar14 = 0x1c;
                }
                lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                if (lVar14 == 0) goto LAB_01c2bcf0;
                uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                uVar13 = 0;
                if (uVar23 == 0) goto LAB_01c2bcf4;
                piVar24 = (int *)(lVar14 + 4);
                while (piVar24[-1] != -0x56f47f82) {
                  piVar24 = piVar24 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) {
                    uVar13 = 0;
                    goto LAB_01c2bcf4;
                  }
                }
                iVar25 = 0;
                if (*piVar24 != -1) {
                  iVar25 = *piVar24;
                }
                DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
              } while (*puVar7 != 0);
              uVar13 = 0;
            }
LAB_01c2bcf4:
            if (*(uint *)local_1a0[1] != uVar13) {
              if (*puVar7 == 0) {
LAB_01c2bdcc:
                uVar13 = 0;
              }
              else {
                cVar12 = DAT_0534bc48;
                do {
                  if (cVar12 == '\0') {
                    cVar12 = '\x01';
                    DAT_0534bc4c = 0xffffffffffffffff;
                    DAT_0534bc54 = -1;
                    DAT_0534bc48 = '\x01';
                    DAT_0534bc7c = 0xffffffff;
                    DAT_0534bc5c = 0xffffffffffffffff;
                    DAT_0534bc64 = 0xffffffffffffffff;
                    DAT_0534bc6c = 0xffffffffffffffff;
                    DAT_0534bc74 = 0xffffffffffffffff;
                  }
                  else {
                    if (-1 < (int)DAT_0534bc6c) {
                      pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                      if (pbVar15 == (byte *)0x0) goto LAB_01c2bdcc;
                      uVar13 = (uint)*pbVar15;
                      goto LAB_01c2bdd0;
                    }
                    if ((int)DAT_0534bc6c != -1) goto LAB_01c2bdcc;
                  }
                  puVar20 = (uint *)(ulong)*puVar7;
                  uVar13 = 0;
                  if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2bdd0;
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                  if (lVar14 == 0) goto LAB_01c2bdcc;
                  uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                  DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                  uVar13 = 0;
                  if (uVar23 == 0) goto LAB_01c2bdd0;
                  piVar24 = (int *)(lVar14 + 4);
                  while (piVar24[-1] != -0x56f47f82) {
                    piVar24 = piVar24 + 2;
                    uVar23 = uVar23 - 1;
                    if (uVar23 == 0) {
                      uVar13 = 0;
                      goto LAB_01c2bdd0;
                    }
                  }
                  iVar25 = 0;
                  if (*piVar24 != -1) {
                    iVar25 = *piVar24;
                  }
                  DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
                } while (*puVar7 != 0);
                uVar13 = 0;
              }
LAB_01c2bdd0:
              if ((*(uint *)local_1a0[2] != uVar13) && (*(int *)local_1a0[lVar32] == -1)) {
                if (*puVar7 != 0) {
                  cVar12 = DAT_0534bc48;
                  do {
                    if (cVar12 == '\0') {
                      cVar12 = '\x01';
                      DAT_0534bc4c = 0xffffffffffffffff;
                      DAT_0534bc54 = -1;
                      DAT_0534bc48 = '\x01';
                      DAT_0534bc7c = 0xffffffff;
                      DAT_0534bc5c = 0xffffffffffffffff;
                      DAT_0534bc64 = 0xffffffffffffffff;
                      DAT_0534bc6c = 0xffffffffffffffff;
                      DAT_0534bc74 = 0xffffffffffffffff;
                    }
                    else {
                      if (-1 < DAT_0534bc54) {
                        if ((ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7) != (ushort *)0x0) {
                          uVar17 = *(ushort *)((ulong)DAT_0534bc54._4_4_ + (long)puVar7);
                          goto LAB_01c2c91c;
                        }
                        break;
                      }
                      if (DAT_0534bc54._4_4_ != 0xffffffff) break;
                    }
                    puVar20 = (uint *)(ulong)*puVar7;
                    uVar17 = 0xfffe;
                    if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2c91c;
                    lVar14 = 0xc;
                    if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                      lVar14 = 0x1c;
                    }
                    lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                    if (lVar14 == 0) break;
                    uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                    DAT_0534bc54 = CONCAT44(0xfffffffe,(undefined4)DAT_0534bc54);
                    if (uVar23 == 0) break;
                    piVar24 = (int *)(lVar14 + 4);
                    while (piVar24[-1] != -0x4fd0f3e9) {
                      piVar24 = piVar24 + 2;
                      uVar23 = uVar23 - 1;
                      if (uVar23 == 0) goto LAB_01c2c918;
                    }
                    iVar25 = 0;
                    if (*piVar24 != -1) {
                      iVar25 = *piVar24;
                    }
                    DAT_0534bc54 = CONCAT44(iVar25,(undefined4)DAT_0534bc54);
                    if (*puVar7 == 0) break;
                  } while( true );
                }
LAB_01c2c918:
                uVar17 = 0xfffe;
LAB_01c2c91c:
                local_1c8 = (undefined *)(ulong)uVar17;
                uVar6 = FUN_0277d4ac(&local_1c8);
                uVar23 = FUN_01c27f3c(uVar6,&local_1c8,0);
                if ((uVar23 & 1) == 0) {
                  if (*puVar7 != 0) {
                    cVar12 = DAT_0534bc48;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (int)DAT_0534bc5c) {
                          puVar3 = (undefined2 *)((DAT_0534bc5c & 0xffffffff) + (long)puVar7);
                          if (puVar3 != (undefined2 *)0x0) {
                            local_1b0 = *puVar3;
                            goto LAB_01c2cb44;
                          }
                          break;
                        }
                        if ((int)DAT_0534bc5c != -1) break;
                      }
                      puVar20 = (uint *)(ulong)*puVar7;
                      local_1b0 = 0xfffe;
                      if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2cb44;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) break;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,0xfffffffe);
                      if (uVar23 == 0) break;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x8708939) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2cb40;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc5c = CONCAT44(DAT_0534bc5c._4_4_,iVar25);
                      if (*puVar7 == 0) break;
                    } while( true );
                  }
LAB_01c2cb40:
                  local_1b0 = 0xfffe;
LAB_01c2cb44:
                  local_1ae = 0;
                  local_1ac = 0;
                  uVar6 = FUN_0277d4ac(&local_1b0);
                  uVar23 = FUN_01c27f3c(uVar6,&local_1b0,0);
                  if ((uVar23 & 1) != 0) goto LAB_01c2cb78;
                  if (*puVar7 != 0) {
                    cVar12 = DAT_0534bc48;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                      }
                      else {
                        if (-1 < (long)DAT_0534bc5c) {
                          if ((undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7) !=
                              (undefined2 *)0x0) {
                            local_1b8 = *(undefined2 *)((ulong)DAT_0534bc5c._4_4_ + (long)puVar7);
                            goto LAB_01c2cd6c;
                          }
                          break;
                        }
                        if (DAT_0534bc5c._4_4_ != 0xffffffff) break;
                      }
                      puVar20 = (uint *)(ulong)*puVar7;
                      local_1b8 = 0xfffe;
                      if ((*puVar7 == 0) || (puVar7 == puVar20)) goto LAB_01c2cd6c;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) break;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc5c = CONCAT44(0xfffffffe,(int)DAT_0534bc5c);
                      if (uVar23 == 0) break;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x3510a089) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2cd68;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc5c = CONCAT44(iVar25,(int)DAT_0534bc5c);
                      if (*puVar7 == 0) break;
                    } while( true );
                  }
LAB_01c2cd68:
                  local_1b8 = 0xfffe;
LAB_01c2cd6c:
                  local_1b6 = 0;
                  local_1b4 = 0;
                  uVar6 = FUN_0277d4ac(&local_1b8);
                  uVar23 = FUN_01c27f3c(uVar6,&local_1b8,0);
                  if ((uVar23 & 1) != 0) goto LAB_01c2cb78;
                  iVar19 = 1;
                  iVar25 = -1;
                }
                else {
LAB_01c2cb78:
                  iVar25 = -4;
                  iVar19 = 4;
                }
                iVar11 = iVar19 + iVar11;
                if (iVar22 <= iVar11) {
                  local_1cc = iVar25 + local_1cc;
                  pppuVar21 = local_230;
                  if (*puVar7 != 0) {
                    cVar12 = DAT_0534bc48;
                    do {
                      if (cVar12 == '\0') {
                        cVar12 = '\x01';
                        DAT_0534bc4c = 0xffffffffffffffff;
                        DAT_0534bc54 = -1;
                        DAT_0534bc48 = '\x01';
                        DAT_0534bc7c = 0xffffffff;
                        DAT_0534bc5c = 0xffffffffffffffff;
                        DAT_0534bc64 = 0xffffffffffffffff;
                        DAT_0534bc6c = 0xffffffffffffffff;
                        DAT_0534bc74 = 0xffffffffffffffff;
                        uVar13 = *puVar7;
                      }
                      else {
                        if (-1 < (int)DAT_0534bc6c) {
                          pbVar15 = (byte *)((DAT_0534bc6c & 0xffffffff) + (long)puVar7);
                          if (pbVar15 != (byte *)0x0) goto LAB_01c2cd48;
                          break;
                        }
                        if ((int)DAT_0534bc6c != -1) goto LAB_01c2af24;
                        uVar13 = *puVar7;
                      }
                      if ((uVar13 == 0) || (puVar20 = (uint *)(ulong)uVar13, puVar7 == puVar20))
                      goto LAB_01c2af24;
                      lVar14 = 0xc;
                      if (*(char *)((long)puVar7 + (10 - (long)puVar20)) != '\0') {
                        lVar14 = 0x1c;
                      }
                      lVar14 = (long)puVar7 + (lVar14 - (long)puVar20);
                      if (lVar14 == 0) goto LAB_01c2af24;
                      uVar23 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar20));
                      DAT_0534bc6c._4_4_ = (undefined4)(DAT_0534bc6c >> 0x20);
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,0xfffffffe);
                      if (uVar23 == 0) goto LAB_01c2af24;
                      piVar24 = (int *)(lVar14 + 4);
                      while (piVar24[-1] != -0x56f47f82) {
                        piVar24 = piVar24 + 2;
                        uVar23 = uVar23 - 1;
                        if (uVar23 == 0) goto LAB_01c2af24;
                      }
                      iVar25 = 0;
                      if (*piVar24 != -1) {
                        iVar25 = *piVar24;
                      }
                      DAT_0534bc6c = CONCAT44(DAT_0534bc6c._4_4_,iVar25);
                      if (*puVar7 == 0) goto LAB_01c2af24;
                    } while( true );
                  }
                  uVar13 = 0;
                  goto LAB_01c2af28;
                }
              }
            }
          }
        }
      }
      goto switchD_01c2af98_default;
    }
    lVar32 = lVar32 + 1;
  } while (lVar32 != 3);
  if (1 < (int)(uint)local_b8) {
    uVar18 = 0;
    uVar13 = (uint)local_b8 - 1;
    do {
      if ((int)uVar13 <= (int)uVar18) break;
      piVar24 = (int *)local_b0[uVar18];
      uVar31 = (ulong)uVar18;
      if ((uVar13 - uVar18 & 1) == 0) {
        piVar27 = piVar24;
        uVar23 = uVar31;
      }
      else {
        uVar23 = uVar31 + 1;
        piVar27 = (int *)local_b0[uVar23];
        if (*piVar27 < *piVar24) {
          local_b0[uVar23] = (undefined8 *)piVar24;
          local_b0[uVar31] = (undefined8 *)piVar27;
          piVar27 = piVar24;
        }
      }
      uVar26 = (ulong)uVar13;
      uVar13 = uVar18;
      if (~uVar31 + uVar26 != 0) {
        ppuVar29 = local_b0 + uVar23 + 1;
        do {
          piVar24 = (int *)*ppuVar29;
          if (*piVar24 < *piVar27) {
            ppuVar29[-1] = (undefined8 *)piVar24;
            *ppuVar29 = (undefined8 *)piVar27;
            uVar13 = (uint)uVar23;
          }
          else {
            piVar27 = piVar24;
          }
          piVar24 = (int *)ppuVar29[1];
          if (*piVar24 < *piVar27) {
            uVar13 = (uint)uVar23 + 1;
            *ppuVar29 = (undefined8 *)piVar24;
            ppuVar29[1] = (undefined8 *)piVar27;
          }
          else {
            piVar27 = piVar24;
          }
          uVar23 = uVar23 + 2;
          ppuVar29 = ppuVar29 + 2;
        } while (uVar26 != uVar23);
      }
      if ((int)uVar13 <= (int)uVar18) break;
      piVar24 = (int *)local_b0[uVar13];
      uVar23 = (ulong)uVar13;
      uVar18 = uVar13;
      do {
        piVar27 = (int *)local_b0[uVar23 - 1];
        if (*piVar24 < *piVar27) {
          uVar18 = (uint)uVar23;
          local_b0[uVar23 - 1] = (undefined8 *)piVar24;
          local_b0[uVar23] = (undefined8 *)piVar27;
        }
        else {
          piVar24 = piVar27;
        }
        uVar23 = uVar23 - 1;
      } while ((long)uVar31 < (long)uVar23);
    } while (uVar18 != uVar13);
  }
  if (1 < (int)(uint)local_108) {
    uVar18 = 0;
    uVar13 = (uint)local_108 - 1;
    do {
      if ((int)uVar13 <= (int)uVar18) break;
      piVar24 = (int *)local_100[uVar18];
      uVar31 = (ulong)uVar18;
      if ((uVar13 - uVar18 & 1) == 0) {
        piVar27 = piVar24;
        uVar23 = uVar31;
      }
      else {
        uVar23 = uVar31 + 1;
        piVar27 = (int *)local_100[uVar23];
        if (*piVar27 < *piVar24) {
          local_100[uVar23] = (undefined8 *)piVar24;
          local_100[uVar31] = (undefined8 *)piVar27;
          piVar27 = piVar24;
        }
      }
      uVar26 = (ulong)uVar13;
      uVar13 = uVar18;
      if (~uVar31 + uVar26 != 0) {
        ppuVar29 = local_100 + uVar23 + 1;
        do {
          piVar24 = (int *)*ppuVar29;
          if (*piVar24 < *piVar27) {
            ppuVar29[-1] = (undefined8 *)piVar24;
            *ppuVar29 = (undefined8 *)piVar27;
            uVar13 = (uint)uVar23;
          }
          else {
            piVar27 = piVar24;
          }
          piVar24 = (int *)ppuVar29[1];
          if (*piVar24 < *piVar27) {
            uVar13 = (uint)uVar23 + 1;
            *ppuVar29 = (undefined8 *)piVar24;
            ppuVar29[1] = (undefined8 *)piVar27;
          }
          else {
            piVar27 = piVar24;
          }
          uVar23 = uVar23 + 2;
          ppuVar29 = ppuVar29 + 2;
        } while (uVar26 != uVar23);
      }
      if ((int)uVar13 <= (int)uVar18) break;
      piVar24 = (int *)local_100[uVar13];
      uVar23 = (ulong)uVar13;
      uVar18 = uVar13;
      do {
        piVar27 = (int *)local_100[uVar23 - 1];
        if (*piVar24 < *piVar27) {
          uVar18 = (uint)uVar23;
          local_100[uVar23 - 1] = (undefined8 *)piVar24;
          local_100[uVar23] = (undefined8 *)piVar27;
        }
        else {
          piVar24 = piVar27;
        }
        uVar23 = uVar23 - 1;
      } while ((long)uVar31 < (long)uVar23);
    } while (uVar18 != uVar13);
  }
  if (1 < (int)(uint)local_158) {
    uVar18 = 0;
    uVar13 = (uint)local_158 - 1;
    do {
      if ((int)uVar13 <= (int)uVar18) break;
      piVar24 = (int *)local_150[uVar18];
      uVar31 = (ulong)uVar18;
      if ((uVar13 - uVar18 & 1) == 0) {
        piVar27 = piVar24;
        uVar23 = uVar31;
      }
      else {
        uVar23 = uVar31 + 1;
        piVar27 = (int *)local_150[uVar23];
        if (*piVar27 < *piVar24) {
          local_150[uVar23] = (undefined8 *)piVar24;
          local_150[uVar31] = (undefined8 *)piVar27;
          piVar27 = piVar24;
        }
      }
      uVar26 = (ulong)uVar13;
      uVar13 = uVar18;
      if (~uVar31 + uVar26 != 0) {
        ppuVar29 = local_150 + uVar23 + 1;
        do {
          piVar24 = (int *)*ppuVar29;
          if (*piVar24 < *piVar27) {
            ppuVar29[-1] = (undefined8 *)piVar24;
            *ppuVar29 = (undefined8 *)piVar27;
            uVar13 = (uint)uVar23;
          }
          else {
            piVar27 = piVar24;
          }
          piVar24 = (int *)ppuVar29[1];
          if (*piVar24 < *piVar27) {
            uVar13 = (uint)uVar23 + 1;
            *ppuVar29 = (undefined8 *)piVar24;
            ppuVar29[1] = (undefined8 *)piVar27;
          }
          else {
            piVar27 = piVar24;
          }
          uVar23 = uVar23 + 2;
          ppuVar29 = ppuVar29 + 2;
        } while (uVar26 != uVar23);
      }
      if ((int)uVar13 <= (int)uVar18) break;
      piVar24 = (int *)local_150[uVar13];
      uVar23 = (ulong)uVar13;
      uVar18 = uVar13;
      do {
        piVar27 = (int *)local_150[uVar23 - 1];
        if (*piVar24 < *piVar27) {
          uVar18 = (uint)uVar23;
          local_150[uVar23 - 1] = (undefined8 *)piVar24;
          local_150[uVar23] = (undefined8 *)piVar27;
        }
        else {
          piVar24 = piVar27;
        }
        uVar23 = uVar23 - 1;
      } while ((long)uVar31 < (long)uVar23);
    } while (uVar18 != uVar13);
  }
  if (1 < (int)local_1a8) {
    uVar18 = 0;
    uVar13 = local_1a8 - 1;
    do {
      if ((int)uVar13 <= (int)uVar18) break;
      piVar24 = (int *)local_1a0[uVar18];
      uVar31 = (ulong)uVar18;
      if ((uVar13 - uVar18 & 1) == 0) {
        piVar27 = piVar24;
        uVar23 = uVar31;
      }
      else {
        uVar23 = uVar31 + 1;
        piVar27 = (int *)local_1a0[uVar23];
        if (*piVar27 < *piVar24) {
          local_1a0[uVar23] = (undefined8 *)piVar24;
          local_1a0[uVar31] = (undefined8 *)piVar27;
          piVar27 = piVar24;
        }
      }
      uVar26 = (ulong)uVar13;
      uVar13 = uVar18;
      if (~uVar31 + uVar26 != 0) {
        ppuVar29 = local_1a0 + uVar23 + 1;
        do {
          piVar24 = (int *)*ppuVar29;
          if (*piVar24 < *piVar27) {
            ppuVar29[-1] = (undefined8 *)piVar24;
            *ppuVar29 = (undefined8 *)piVar27;
            uVar13 = (uint)uVar23;
          }
          else {
            piVar27 = piVar24;
          }
          piVar24 = (int *)ppuVar29[1];
          if (*piVar24 < *piVar27) {
            uVar13 = (uint)uVar23 + 1;
            *ppuVar29 = (undefined8 *)piVar24;
            ppuVar29[1] = (undefined8 *)piVar27;
          }
          else {
            piVar27 = piVar24;
          }
          uVar23 = uVar23 + 2;
          ppuVar29 = ppuVar29 + 2;
        } while (uVar26 != uVar23);
      }
      if ((int)uVar13 <= (int)uVar18) break;
      piVar24 = (int *)local_1a0[uVar13];
      uVar23 = (ulong)uVar13;
      uVar18 = uVar13;
      do {
        piVar27 = (int *)local_1a0[uVar23 - 1];
        if (*piVar24 < *piVar27) {
          uVar18 = (uint)uVar23;
          local_1a0[uVar23 - 1] = (undefined8 *)piVar24;
          local_1a0[uVar23] = (undefined8 *)piVar27;
        }
        else {
          piVar24 = piVar27;
        }
        uVar23 = uVar23 - 1;
      } while ((long)uVar31 < (long)uVar23);
    } while (uVar18 != uVar13);
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1c0 = s_MuseumFishStampRackLotID1_04a40e68;
  local_1c8 = puVar1;
  FUN_0273f3c4(&local_1c8,*(undefined4 *)*local_b0);
  pcStack_1c0 = s_MuseumFishStampRackLotID2_04a40e84;
  local_1c8 = puVar1;
  FUN_0273f3c4(&local_1c8,*(undefined4 *)local_b0[1]);
  pcStack_1c0 = s_MuseumFishStampRackLotID3_04a40ea0;
  local_1c8 = puVar1;
  FUN_0273f3c4(&local_1c8,*(undefined4 *)local_b0[2]);
  lVar32 = 0;
  do {
    if (lVar32 + 3U < 6) {
      pcStack_1c0 = (&PTR_s_MuseumInsectStampRackLotID1_04a40fd8)[lVar32];
      puVar16 = local_100[lVar32];
    }
    else if (lVar32 + 3U < 9) {
      pcStack_1c0 = (&PTR_s_MuseumInsectStampRackLotID1_04a40fd8)[lVar32];
      puVar16 = local_150[lVar32 + -3];
    }
    else {
      pcStack_1c0 = (&PTR_s_MuseumInsectStampRackLotID1_04a40fd8)[lVar32];
      puVar16 = local_1a0[lVar32 + -6];
    }
    local_1c8 = puVar5 + 0x10;
    FUN_0273f3c4(&local_1c8,*(undefined4 *)puVar16);
    lVar32 = lVar32 + 1;
  } while (lVar32 != 9);
  return;
}

