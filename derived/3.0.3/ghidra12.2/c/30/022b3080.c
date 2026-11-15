
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_022b3080(long param_1,long *param_2,uint param_3)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  bool bVar6;
  bool bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  char cVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  uint *puVar22;
  byte bVar23;
  ushort uVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint *puVar27;
  char cVar28;
  int *piVar29;
  long lVar30;
  long lVar31;
  undefined8 *puVar32;
  byte *pbVar33;
  undefined8 local_160;
  int local_158;
  int local_150;
  float local_14c [2];
  float local_144;
  undefined *local_140;
  undefined8 local_138;
  uint *local_130;
  int local_128;
  int iStack_124;
  uint *local_120;
  int local_118;
  int iStack_114;
  undefined2 local_110;
  undefined4 local_10e;
  undefined1 local_10a;
  undefined8 local_108;
  undefined1 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined1 local_f3;
  int local_ec;
  undefined *local_e8;
  undefined8 local_e0;
  uint local_d4;
  undefined *local_d0;
  undefined2 local_c8;
  undefined2 local_c6;
  undefined2 local_c0;
  undefined1 local_be;
  byte local_bd;
  byte local_bb;
  byte local_ba;
  byte local_b9;
  byte local_b8;
  undefined1 local_b6;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  uint *local_98;
  uint local_8c;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar31 = *(long *)PTR_DAT_04bb43c0;
  uVar17 = FUN_0277d6c4(param_2);
  puVar10 = PTR_DAT_04bc0510;
  lVar30 = *(long *)puVar1;
  if (lVar30 == 0) {
    return 0;
  }
  lVar31 = *(long *)(lVar31 + 0x57e58);
  uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
  if (*(uint *)(lVar31 + 0x1d8) <= uVar17) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar17 * 8) == 0) {
    return 0;
  }
  local_a0 = (undefined4)*param_2;
  uStack_9c = *(undefined4 *)((long)param_2 + 4);
  local_98 = (uint *)0x0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  uVar17 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar1 != 0) {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar30 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
      lVar30 = *(long *)PTR_DAT_04bc0428;
      uVar17 = FUN_0277d6c4(param_2);
      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
      if (uVar17 < *(uint *)(lVar30 + 0x1d8)) {
        puVar22 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8);
        if (puVar22 != (uint *)0x0) {
          local_98 = puVar22;
        }
      }
    }
  }
  FUN_01afa2dc(&local_a8,0);
  local_b0 = 0xfffe;
  FUN_0277d4ac(&local_b0);
  uVar20 = FUN_0124ccbc(param_2,&local_b0);
  if (((((((uVar20 & 1) == 0) || (lVar30 = *(long *)PTR_DAT_04bbbc68, lVar30 == 0)) ||
        (*(long *)(lVar30 + 0xb0) == 0)) ||
       ((*(long *)(*(long *)(lVar30 + 0xb0) + 8) == 0 || (*(long *)(lVar30 + 0x488) == 0)))) ||
      (*(long *)(*(long *)(lVar30 + 0x488) + 8) == 0)) ||
     ((*(long *)(lVar30 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar30 + 0x2b0) + 8) == 0)))) {
LAB_022b3410:
    local_160 = 0;
    bVar7 = false;
    bVar14 = false;
    local_150 = 0;
  }
  else {
    uVar17 = FUN_0277d6c4(&local_b0);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((*(uint *)(lVar30 + 0x1d8) <= uVar17) ||
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8) == 0)) goto LAB_022b3410;
    FUN_0124c030(&local_140,&local_b0);
    if (local_98 == (uint *)0x0) {
LAB_022b41cc:
      local_160._4_4_ = 0;
      bVar7 = false;
      local_150 = 0;
    }
    else {
      uVar17 = *local_98;
      bVar7 = false;
      if (uVar17 == 0) {
        local_160._4_4_ = 0;
        local_150 = 0;
      }
      else {
        uVar25 = 0;
        local_160._4_4_ = 0;
        uVar3 = local_160._4_4_;
        local_150 = 0;
        local_160._4_4_ = uVar3;
        if (local_98 != (uint *)(ulong)uVar17) {
          puVar22 = (uint *)((long)local_98 - (long)(ulong)uVar17);
          if (((*puVar22 == 0) || (uVar17 = puVar22[1], uVar17 == 0)) ||
             ((ulong)(ushort)puVar22[2] == 0)) goto LAB_022b41cc;
          lVar30 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar30 = 0x1c;
          }
          lVar30 = (long)puVar22 + lVar30 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar30 == 0) {
LAB_022b423c:
            uVar25 = 0;
            bVar14 = false;
            local_150 = 0;
          }
          else {
            uVar2 = 0;
            if ((ulong)uVar17 != 0) {
              uVar2 = (uint)((ulong)((long)local_98 - lVar30) / (ulong)uVar17);
            }
            if (*puVar22 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc00c8 <= uVar2) ||
               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2) != 0x4c))
            goto LAB_022b423c;
            iVar18 = FUN_0123db50(&local_138,local_130);
            if ((iVar18 == 5) || (iVar18 = FUN_0123db50(&local_138,local_130), iVar18 == 5)) {
              uVar25 = 1;
LAB_022b3320:
              puVar9 = PTR_DAT_04bbbc78;
              puVar8 = PTR_DAT_04bbbc70;
              if ((local_130 != (uint *)0x0) && (uVar17 = *local_130, uVar17 != 0)) {
                cVar15 = *PTR_DAT_04bbbc70;
                do {
                  if (cVar15 == '\0') {
                    cVar15 = '\x01';
                    *puVar8 = 1;
                    *(undefined8 *)puVar9 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar9 + 0x60) = 0xffffffff;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                    uVar17 = *local_130;
                  }
                  else {
                    uVar3 = *(uint *)(puVar9 + 0x4c);
                    if (-1 < (int)uVar3) {
                      if ((char *)((ulong)uVar3 + (long)local_130) == (char *)0x0) break;
                      cVar28 = *(char *)((ulong)uVar3 + (long)local_130);
                      goto LAB_022b43f4;
                    }
                    if (uVar3 != 0xffffffff) break;
                  }
                  puVar22 = (uint *)(ulong)uVar17;
                  cVar28 = '\0';
                  if ((puVar22 == (uint *)0x0) || (local_130 == puVar22)) goto LAB_022b43f4;
                  lVar30 = 0xc;
                  if (*(char *)((long)local_130 + (10 - (long)puVar22)) != '\0') {
                    lVar30 = 0x1c;
                  }
                  lVar30 = (long)local_130 + (lVar30 - (long)puVar22);
                  cVar28 = '\0';
                  if (lVar30 == 0) goto LAB_022b43f4;
                  uVar20 = (ulong)*(ushort *)((long)local_130 + (8 - (long)puVar22));
                  *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
                  if (uVar20 == 0) break;
                  piVar29 = (int *)(lVar30 + 4);
                  while (piVar29[-1] != -0xa58ccc9) {
                    piVar29 = piVar29 + 2;
                    uVar20 = uVar20 - 1;
                    if (uVar20 == 0) goto LAB_022b43f0;
                  }
                  cVar28 = '\0';
                  iVar18 = 0;
                  if (*piVar29 != -1) {
                    iVar18 = *piVar29;
                  }
                  *(int *)(puVar9 + 0x4c) = iVar18;
                  uVar17 = *local_130;
                  if (uVar17 == 0) goto LAB_022b43f4;
                } while( true );
              }
LAB_022b43f0:
              cVar28 = '\0';
LAB_022b43f4:
              bVar14 = cVar28 == '\0';
              local_158 = 1;
            }
            else {
              uVar17 = FUN_0123db50(&local_138,local_130);
              bVar14 = false;
              bVar7 = false;
              local_158 = 0;
              if (uVar17 < 0x21) {
                local_160._4_4_ = 0;
                local_150 = 0;
                if ((1L << ((ulong)uVar17 & 0x3f) & 0x1000006aaU) != 0) {
                  iVar18 = FUN_0123db50(&local_138,local_130);
                  if (iVar18 == 5) goto LAB_022b423c;
                  iVar18 = FUN_0123db50(&local_138,local_130);
                  bVar7 = false;
                  local_150 = 0;
                  local_160._4_4_ = uVar3;
                  if (iVar18 != 5) goto LAB_022b3320;
                }
                goto LAB_022b4248;
              }
              uVar25 = 0;
            }
            local_150 = local_158;
          }
          local_160._4_4_ = uVar25;
          bVar7 = bVar14;
        }
      }
    }
LAB_022b4248:
    iVar18 = FUN_0123db50(&local_138,local_130);
    iVar19 = FUN_0123db50(&local_138,local_130);
    bVar14 = iVar18 - 0x23U < 9 || iVar19 - 0x12U < 6;
    iVar18 = FUN_0123db50(&local_138,local_130);
    puVar9 = PTR_DAT_04bbbc78;
    puVar8 = PTR_DAT_04bbbc70;
    if (iVar18 - 0xbU < 7) {
      if ((local_130 != (uint *)0x0) && (uVar17 = *local_130, uVar17 != 0)) {
        cVar15 = *PTR_DAT_04bbbc70;
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *puVar8 = 1;
            *(undefined8 *)puVar9 = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
            *(undefined4 *)(puVar9 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
            uVar17 = *local_130;
          }
          else {
            uVar25 = *(uint *)(puVar9 + 0x4c);
            if (-1 < (int)uVar25) {
              if ((char *)((ulong)uVar25 + (long)local_130) == (char *)0x0) break;
              cVar28 = *(char *)((ulong)uVar25 + (long)local_130);
              goto LAB_022b43a0;
            }
            if (uVar25 != 0xffffffff) break;
          }
          puVar22 = (uint *)(ulong)uVar17;
          cVar28 = '\0';
          if ((puVar22 == (uint *)0x0) || (local_130 == puVar22)) goto LAB_022b43a0;
          lVar30 = 0xc;
          if (*(char *)((long)local_130 + (10 - (long)puVar22)) != '\0') {
            lVar30 = 0x1c;
          }
          lVar30 = (long)local_130 + (lVar30 - (long)puVar22);
          cVar28 = '\0';
          if (lVar30 == 0) goto LAB_022b43a0;
          uVar20 = (ulong)*(ushort *)((long)local_130 + (8 - (long)puVar22));
          *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
          if (uVar20 == 0) break;
          piVar29 = (int *)(lVar30 + 4);
          while (piVar29[-1] != -0xa58ccc9) {
            piVar29 = piVar29 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) goto LAB_022b439c;
          }
          cVar28 = '\0';
          iVar18 = 0;
          if (*piVar29 != -1) {
            iVar18 = *piVar29;
          }
          *(int *)(puVar9 + 0x4c) = iVar18;
          uVar17 = *local_130;
          if (uVar17 == 0) goto LAB_022b43a0;
        } while( true );
      }
LAB_022b439c:
      cVar28 = '\0';
LAB_022b43a0:
      local_160 = CONCAT44(local_160._4_4_,(uint)(cVar28 != '\0'));
    }
    else {
      local_160 = (ulong)local_160._4_4_ << 0x20;
    }
  }
  puVar8 = PTR_DAT_04bb4778;
  uVar20 = FUN_012246e4(*(undefined8 *)PTR_DAT_04bb4778);
  if ((uVar20 & 1) != 0) {
    bVar23 = 1;
    goto LAB_022b36d0;
  }
  if (local_98 == (uint *)0x0) {
    local_d4 = 0xbc;
LAB_022b3650:
    local_140 = (undefined *)CONCAT44(local_140._4_4_,0x51);
    bVar6 = (bool)(bVar14 ^ 1);
    if (local_d4 == 0x51) {
      bVar6 = true;
    }
    if (bVar6) goto LAB_022b36cc;
    FUN_0124c030(&local_140,&local_b0);
    iVar18 = FUN_0123db50(&local_138,local_130);
    if (iVar18 - 0x23U < 9) {
      bVar23 = local_138._6_1_ >> 7;
    }
    else {
      iVar18 = FUN_0123db50(&local_138,local_130);
      if (5 < iVar18 - 0x12U) goto LAB_022b36cc;
      bVar23 = local_138._5_1_ & 1;
    }
  }
  else {
    uVar24 = 0;
    local_140 = (undefined *)CONCAT44(local_140._4_4_,0x4f);
    uVar17 = *local_98;
    if ((uVar17 != 0) && (local_98 != (uint *)(ulong)uVar17)) {
      puVar22 = (uint *)((long)local_98 - (long)(ulong)uVar17);
      if ((*puVar22 == 0) ||
         ((uVar17 = puVar22[1], uVar17 == 0 || ((ulong)(ushort)puVar22[2] == 0)))) {
LAB_022b356c:
        uVar24 = 0;
      }
      else {
        lVar30 = 0xc;
        if (*(char *)((long)puVar22 + 10) != '\0') {
          lVar30 = 0x1c;
        }
        lVar30 = (long)puVar22 + lVar30 + (ulong)(ushort)puVar22[2] * 8;
        uVar24 = 0;
        if (lVar30 != 0) {
          uVar25 = 0;
          if ((ulong)uVar17 != 0) {
            uVar25 = (uint)((ulong)((long)local_98 - lVar30) / (ulong)uVar17);
          }
          if (*puVar22 <= uVar25) {
            uVar25 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bc00c8 <= uVar25) ||
             (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar25 * 2),
             0xbc < uVar24)) goto LAB_022b356c;
        }
      }
    }
    if (uVar24 != 0x4f) {
      local_d4 = 0;
      uVar17 = *local_98;
      if ((uVar17 != 0) && (local_98 != (uint *)(ulong)uVar17)) {
        puVar22 = (uint *)((long)local_98 - (long)(ulong)uVar17);
        local_d4 = 0;
        if (*puVar22 != 0) {
          uVar17 = puVar22[1];
          if ((uVar17 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
            lVar30 = 0xc;
            if (*(char *)((long)puVar22 + 10) != '\0') {
              lVar30 = 0x1c;
            }
            lVar30 = (long)puVar22 + lVar30 + (ulong)(ushort)puVar22[2] * 8;
            if (lVar30 != 0) {
              uVar25 = 0;
              if ((ulong)uVar17 != 0) {
                uVar25 = (uint)((ulong)((long)local_98 - lVar30) / (ulong)uVar17);
              }
              if (*puVar22 <= uVar25) {
                uVar25 = 0xffffffff;
              }
              if ((uVar25 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_d4 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar25 * 2),
                 local_d4 < 0xbd)) goto LAB_022b3650;
            }
          }
          local_d4 = 0;
        }
      }
      goto LAB_022b3650;
    }
LAB_022b36cc:
    bVar23 = 0;
  }
LAB_022b36d0:
  local_be = 0x17;
  local_d0 = (undefined *)CONCAT44(uStack_9c,local_a0);
  local_b4 = 0;
  local_d4 = 0;
  local_b6 = 0;
  pbVar33 = (byte *)(param_1 + 0x10);
  local_bd = *pbVar33;
  if (7 < local_bd) {
    local_bd = 0xff;
  }
  local_c0 = *(undefined2 *)PTR_DAT_04bb6298;
  local_bb = 0x18;
  cVar15 = FUN_022aef90(param_2);
  local_ba = local_ba & 0xf | cVar15 << 4;
  uVar17 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar17 = uVar17 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar17 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  uVar25 = (uint)((ulong)uVar17 * 100 >> 0x20);
  if (uVar25 < 0x46) {
    local_ba = local_ba & 0x7c;
  }
  else if (uVar25 < 0x50) {
    local_ba = local_ba & 0x7c | 1;
  }
  else if (uVar25 < 0x5a) {
    local_ba = local_ba & 0x7c | 2;
  }
  else {
    local_ba = local_ba | 3;
  }
  lVar31 = *(long *)puVar1;
  local_b9 = local_b9 & 0xfe;
  local_b8 = local_b8 & 0xfc | bVar23;
  DAT_0514cb64 = uVar17;
  uVar17 = FUN_0277d6c4(param_2);
  lVar30 = *(long *)puVar1;
  if (lVar30 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if ((uVar17 < *(uint *)(lVar31 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
      local_140 = puVar10 + 0x10;
      local_130 = (uint *)0x0;
      local_138 = (undefined *)*param_2;
      uVar17 = FUN_0277d6c4(&local_138);
      if (*(long *)puVar1 == 0) {
LAB_022b39d8:
        local_14c[0] = 2.63444e-43;
        local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x53);
LAB_022b3a04:
        if (local_14c[0] != local_e8._0_4_) goto LAB_022b3a78;
      }
      else {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((*(uint *)(lVar30 + 0x1d8) <= uVar17) ||
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8) == 0)) goto LAB_022b39d8;
        lVar30 = *(long *)PTR_DAT_04bc0428;
        uVar17 = FUN_0277d6c4(param_2);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((*(uint *)(lVar30 + 0x1d8) <= uVar17) ||
           (puVar22 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8),
           puVar22 == (uint *)0x0)) goto LAB_022b39d8;
        local_14c[0] = 0.0;
        local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x52);
        uVar17 = *puVar22;
        if ((uVar17 != 0) && (puVar22 != (uint *)(ulong)uVar17)) {
          puVar27 = (uint *)((long)puVar22 - (long)(ulong)uVar17);
          local_14c[0] = 0.0;
          if (*puVar27 != 0) {
            uVar17 = puVar27[1];
            if ((uVar17 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
              lVar30 = 0xc;
              if (*(char *)((long)puVar27 + 10) != '\0') {
                lVar30 = 0x1c;
              }
              lVar30 = (long)puVar27 + lVar30 + (ulong)(ushort)puVar27[2] * 8;
              if (lVar30 != 0) {
                uVar25 = 0;
                if ((ulong)uVar17 != 0) {
                  uVar25 = (uint)((ulong)((long)puVar22 - lVar30) / (ulong)uVar17);
                }
                if (*puVar27 <= uVar25) {
                  uVar25 = 0xffffffff;
                }
                if ((uVar25 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_14c[0] = (float)(uint)*(ushort *)
                                                 (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                 (long)(int)uVar25 * 2), (uint)local_14c[0] < 0xbd))
                goto LAB_022b392c;
              }
            }
            local_14c[0] = 0.0;
          }
        }
LAB_022b392c:
        local_130 = puVar22;
        if (local_14c[0] != 1.14906e-43) {
          local_14c[0] = 0.0;
          local_e8 = (undefined *)CONCAT44(local_e8._4_4_,0x53);
          uVar17 = *puVar22;
          if ((uVar17 != 0) && (puVar22 != (uint *)(ulong)uVar17)) {
            puVar27 = (uint *)((long)puVar22 - (long)(ulong)uVar17);
            local_14c[0] = 0.0;
            if (*puVar27 != 0) {
              uVar17 = puVar27[1];
              if ((uVar17 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
                lVar30 = 0xc;
                if (*(char *)((long)puVar27 + 10) != '\0') {
                  lVar30 = 0x1c;
                }
                lVar30 = (long)puVar27 + lVar30 + (ulong)(ushort)puVar27[2] * 8;
                if (lVar30 != 0) {
                  uVar25 = 0;
                  if ((ulong)uVar17 != 0) {
                    uVar25 = (uint)((ulong)((long)puVar22 - lVar30) / (ulong)uVar17);
                  }
                  if (*puVar27 <= uVar25) {
                    uVar25 = 0xffffffff;
                  }
                  if ((uVar25 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_14c[0] = (float)(uint)*(ushort *)
                                                   (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                   (long)(int)uVar25 * 2), (uint)local_14c[0] < 0xbd
                     )) goto LAB_022b3a04;
                }
              }
              local_14c[0] = 0.0;
            }
          }
          goto LAB_022b3a04;
        }
      }
      uVar17 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      uVar25 = DAT_0514cb5c ^ DAT_0514cb5c << 0xb;
      DAT_0514cb58 = DAT_0514cb60;
      DAT_0514cb5c = DAT_0514cb64;
      DAT_0514cb60 = uVar17 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar17 ^ DAT_0514cb64;
      DAT_0514cb64 = uVar25 >> 8 ^ DAT_0514cb60 >> 0x13 ^ uVar25 ^ DAT_0514cb60;
      local_bb = (byte)((ulong)DAT_0514cb64 + (ulong)DAT_0514cb64 * 2 >> 0x1b) & 0x60 |
                 (byte)((ulong)DAT_0514cb60 + (ulong)DAT_0514cb60 * 2 >> 0x1d) & 0x18 | local_bb & 7
      ;
    }
  }
LAB_022b3a78:
  if ((bVar14) && (uVar20 = FUN_012246e4(*(undefined8 *)puVar8), (uVar20 & 1) != 0)) {
    FUN_0124c030(&local_140,&local_b0);
    iVar18 = FUN_0123db50(&local_138,local_130);
    if (iVar18 - 0x23U < 9) {
      uVar17 = 0xff7fffff;
      uVar25 = 0x800000;
LAB_022b3ae4:
      local_138 = (undefined *)CONCAT44(local_138._4_4_ & uVar17 | uVar25,(undefined4)local_138);
    }
    else {
      iVar18 = FUN_0123db50(&local_138,local_130);
      if (iVar18 - 0x12U < 6) {
        uVar17 = 0xfffffeff;
        uVar25 = 0x100;
        goto LAB_022b3ae4;
      }
    }
    local_d0 = local_138;
  }
  puVar8 = PTR_DAT_04bb2010;
  lVar31 = *(long *)puVar1;
  local_ec = 0;
  local_e8 = PTR_DAT_04bb2010 + 0x10;
  local_e0 = 0;
  uVar17 = FUN_0277d6c4(param_2);
  lVar30 = *(long *)puVar1;
  if (lVar30 != 0) {
    lVar31 = *(long *)(lVar31 + 0x57e58);
    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
    if (uVar17 < *(uint *)(lVar31 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar17 * 8) == 0) {
        bVar6 = false;
        bVar13 = false;
        goto LAB_022b3d30;
      }
      local_140 = puVar10 + 0x10;
      local_130 = (uint *)0x0;
      local_138 = (undefined *)*param_2;
      uVar17 = FUN_0277d6c4(&local_138);
      if (*(long *)puVar1 == 0) {
LAB_022b40f8:
        local_8c = 0xbc;
      }
      else {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((*(uint *)(lVar30 + 0x1d8) <= uVar17) ||
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8) == 0)) goto LAB_022b40f8;
        lVar30 = *(long *)PTR_DAT_04bc0428;
        uVar17 = FUN_0277d6c4(param_2);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((*(uint *)(lVar30 + 0x1d8) <= uVar17) ||
           (puVar22 = *(uint **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8),
           puVar22 == (uint *)0x0)) goto LAB_022b40f8;
        uVar24 = 0;
        uVar17 = *puVar22;
        if ((uVar17 != 0) && (puVar22 != (uint *)(ulong)uVar17)) {
          puVar27 = (uint *)((long)puVar22 - (long)(ulong)uVar17);
          uVar24 = 0;
          if (*puVar27 != 0) {
            uVar17 = puVar27[1];
            if ((uVar17 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
              lVar30 = 0xc;
              if (*(char *)((long)puVar27 + 10) != '\0') {
                lVar30 = 0x1c;
              }
              lVar30 = (long)puVar27 + lVar30 + (ulong)(ushort)puVar27[2] * 8;
              if (lVar30 != 0) {
                uVar25 = 0;
                if ((ulong)uVar17 != 0) {
                  uVar25 = (uint)((ulong)((long)puVar22 - lVar30) / (ulong)uVar17);
                }
                if (*puVar27 <= uVar25) {
                  uVar25 = 0xffffffff;
                }
                if ((uVar25 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar24 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar25 * 2),
                   uVar24 < 0xbd)) goto LAB_022b3c7c;
              }
            }
            uVar24 = 0;
          }
        }
LAB_022b3c7c:
        local_130 = puVar22;
        if (uVar24 == 0x86) {
          local_14c[0] = 1.87774e-43;
          bVar13 = false;
          bVar6 = true;
          local_8c = 0x86;
          goto LAB_022b3d30;
        }
        local_8c = 0;
        uVar17 = *puVar22;
        if ((uVar17 != 0) && (puVar22 != (uint *)(ulong)uVar17)) {
          puVar27 = (uint *)((long)puVar22 - (long)(ulong)uVar17);
          local_8c = 0;
          if (*puVar27 != 0) {
            uVar17 = puVar27[1];
            if ((uVar17 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
              lVar30 = 0xc;
              if (*(char *)((long)puVar27 + 10) != '\0') {
                lVar30 = 0x1c;
              }
              lVar30 = (long)puVar27 + lVar30 + (ulong)(ushort)puVar27[2] * 8;
              if (lVar30 != 0) {
                uVar25 = 0;
                if ((ulong)uVar17 != 0) {
                  uVar25 = (uint)((ulong)((long)puVar22 - lVar30) / (ulong)uVar17);
                }
                if (*puVar27 <= uVar25) {
                  uVar25 = 0xffffffff;
                }
                if ((uVar25 < *(uint *)PTR_DAT_04bc00c8) &&
                   (local_8c = (uint)*(ushort *)
                                      (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar25 * 2),
                   local_8c < 0xbd)) goto LAB_022b41b0;
              }
            }
            local_8c = 0;
          }
        }
      }
LAB_022b41b0:
      local_14c[0] = 2.18603e-43;
      bVar6 = false;
      bVar13 = local_8c == 0x9c;
      goto LAB_022b3d30;
    }
  }
  bVar6 = false;
  bVar13 = false;
LAB_022b3d30:
  if ((!bVar6) && (!bVar13)) {
    uVar20 = FUN_0124ccbc(param_2,0);
    bVar23 = 0x80;
    if ((uVar20 & 1) == 0) {
      bVar23 = 0;
    }
    local_ba = bVar23 | local_ba & 0x7f;
  }
  puVar22 = (uint *)(puVar8 + 0x10);
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  do {
    uVar20 = FUN_022a9660(param_1,&local_ec,&local_e8,local_150,local_160._4_4_,bVar7,
                          local_160 & 0xffffffff);
    if ((uVar20 & 1) == 0) {
      return 0;
    }
    local_c8 = (undefined2)local_e0;
    local_c6 = (undefined2)((ulong)local_e0 >> 0x20);
    local_b9 = local_b9 & 0xfc;
    if (bVar6) {
      local_ba = local_ba & 0x7f;
      uVar20 = FUN_0124cac0(param_2,&local_e8,pbVar33,&local_b0);
      if ((uVar20 & 1) != 0) {
        local_ba = local_ba | 0x80;
        local_b9 = local_b9 | 1;
        lVar30 = *(long *)PTR_DAT_04bbbc68;
        if ((((lVar30 != 0) && (*(long *)(lVar30 + 0xb0) != 0)) &&
            (*(long *)(*(long *)(lVar30 + 0xb0) + 8) != 0)) &&
           (((*(long *)(lVar30 + 0x488) != 0 && (*(long *)(*(long *)(lVar30 + 0x488) + 8) != 0)) &&
            ((*(long *)(lVar30 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar30 + 0x2b0) + 8) != 0))))))
        {
          uVar17 = FUN_0277d6c4(&local_b0);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if (((uVar17 < *(uint *)(lVar30 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) &&
             (iVar18 = FUN_0123db50(&local_b0,0), iVar18 == 0x20)) {
            local_b9 = local_b9 | 2;
          }
        }
      }
    }
    local_110 = 0xff00;
    local_10e = 0;
    local_10a = 0;
    local_108 = 0xffffffffffffffff;
    local_100 = 0;
    local_fc = 0x41200000;
    local_f8 = 0;
    local_f4 = 0;
    local_f3 = 0xff;
    sVar5 = *(short *)PTR_DAT_04bb6298;
    local_140 = (undefined *)CONCAT62(local_140._2_6_,sVar5);
    if (bVar7 == false && local_150 == 1) {
      local_128 = (int)local_e0 + -2;
      local_118 = (int)local_e0 + 3;
      iStack_124 = local_e0._4_4_ + -2;
      iStack_114 = local_e0._4_4_ + 3;
    }
    else {
      local_118 = (int)local_e0 + 1;
      iStack_114 = local_e0._4_4_ + 1;
      iStack_124 = local_e0._4_4_;
      local_128 = (int)local_e0;
    }
    local_138 = puVar1;
    local_130 = puVar22;
    local_120 = puVar22;
    if (bVar14) {
      if (sVar5 == -1) {
LAB_022b3f80:
        uVar20 = FUN_0122a4e0();
        uVar21 = 1;
        if ((uVar20 & 1) == 0) {
          uVar21 = 2;
        }
      }
      else {
        local_14c[0] = 4.2039e-45;
        puVar27 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar27 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar27 >> 3 & 1) == 0) goto LAB_022b3f80;
        uVar21 = 0;
      }
      bVar16 = FUN_0122ade0(&local_e8,uVar21);
      bVar23 = 0;
      if (((bVar16 ^ (local_b8 & 1) == 0) & 1) == 0) {
        bVar23 = 2;
      }
      local_b8 = bVar23 | local_b8 & 0xfd;
      if ((local_b9 & 3) != 0) {
        local_b9 = local_b9 & 0xfc;
      }
    }
    local_144 = (float)local_e0._4_4_ * 5.0 + 5.0;
    local_14c[0] = (float)(int)local_e0 * 5.0 + 5.0;
    uVar20 = FUN_0252b6b0(0x40200000,local_14c,pbVar33,1,1,0,1);
    if ((uVar20 & 1) == 0) {
      puVar26 = (undefined4 *)PTR_DAT_04bb3238;
      if (((ulong)*pbVar33 < 8) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        puVar26 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + (ulong)*pbVar33 * 4 + 0xde8);
      }
      uVar20 = FUN_01735670(0x40200000,0xbf800000,local_14c,*puVar26,*puVar26,1,1,0,1,0,0,1);
      if ((uVar20 & 1) == 0) {
        if ((param_3 & 1) != 0) {
          return 1;
        }
        uVar20 = FUN_022ab010(param_1,&local_140,&local_d4);
        if ((uVar20 & 1) != 0) {
          uVar11 = (int)local_e0;
          uVar12 = local_e0._4_4_;
          puVar32 = (undefined8 *)(param_1 + 0x14);
          *puVar32 = 0xfffe;
          FUN_0277d4ac(puVar32);
          *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
          FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
          *(undefined8 *)(param_1 + 0x48) = 0;
          *(undefined4 *)(param_1 + 0x58) = 0;
          *(undefined8 *)(param_1 + 0x50) = 0x1700000000;
          *(undefined8 *)(param_1 + 0x2c) = 0;
          *(undefined8 *)(param_1 + 0x34) = 0;
          *(short *)puVar32 = (short)*param_2;
          *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)((long)param_2 + 2);
          *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)((long)param_2 + 3);
          uVar4 = *(undefined4 *)((long)param_2 + 4);
          *(undefined4 *)(param_1 + 0x48) = uVar11;
          *(undefined4 *)(param_1 + 0x4c) = uVar12;
          *(undefined4 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x18) = uVar4;
          return 1;
        }
      }
    }
    if ((local_ec != -1) && (local_ec < 3)) {
      local_ec = local_ec + 1;
    }
    if (local_ec == -1) {
      return 0;
    }
  } while( true );
}

