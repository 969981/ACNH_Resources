
void FUN_017ebc00(long param_1,ulong param_2)

{
  ushort uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined8 *puVar11;
  ulong uVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  byte bVar16;
  int *piVar17;
  undefined1 *puVar18;
  char cVar19;
  long lVar20;
  short *psVar21;
  short *psVar22;
  short *psVar23;
  long lVar24;
  uint *puVar25;
  undefined8 local_d8;
  char *pcStack_d0;
  uint local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined1 local_94 [7];
  undefined1 local_8d;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined2 local_68;
  undefined4 local_66;
  undefined1 local_62;
  
  puVar4 = PTR_DAT_04bb43c0;
  if (*(char *)(param_1 + 0x144) == '\0') {
    return;
  }
  psVar23 = (short *)(param_1 + 0xb4);
  if (*psVar23 == -2) {
LAB_017ebc40:
    bVar2 = false;
  }
  else {
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(psVar23);
    lVar20 = *(long *)puVar4;
    if (lVar20 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_b0 = 0;
        local_b8 = *(char **)(param_1 + 0xb4);
        local_c0 = PTR_DAT_04bc0510 + 0x10;
        uVar8 = FUN_0277d6c4(&local_b8);
        if (*(long *)puVar4 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(psVar23);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if (uVar8 < *(uint *)(lVar20 + 0x1d8)) {
              lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8);
              if (lVar20 != 0) {
                local_b0 = lVar20;
              }
            }
          }
        }
        lVar20 = *(long *)PTR_DAT_04bb46d0;
        uVar8 = FUN_01b020f0(&local_c0);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x200);
        if ((uVar8 < *(uint *)(lVar20 + 0x1e0)) &&
           (*(long *)(*(long *)(lVar20 + 0x1e8) + (long)(int)uVar8 * 8) != 0)) goto LAB_017ebc40;
      }
    }
    local_c0 = (undefined *)0x139b;
    FUN_0277d4ac(&local_c0);
    bVar2 = true;
    *(uint *)(param_1 + 0xb4) = (uint)local_c0;
    *(undefined4 *)(param_1 + 0xb8) = local_c0._4_4_;
    *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)PTR_DAT_04bb3170;
  }
  puVar4 = PTR_DAT_04bb43c0;
  psVar22 = (short *)(param_1 + 0xd0);
  if (*psVar22 != -2) {
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(psVar22);
    lVar20 = *(long *)puVar4;
    if (lVar20 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_b0 = 0;
        local_b8 = *(char **)(param_1 + 0xd0);
        local_c0 = PTR_DAT_04bc0510 + 0x10;
        uVar8 = FUN_0277d6c4(&local_b8);
        if (*(long *)puVar4 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(psVar22);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if (uVar8 < *(uint *)(lVar20 + 0x1d8)) {
              lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8);
              if (lVar20 != 0) {
                local_b0 = lVar20;
              }
            }
          }
        }
        lVar20 = *(long *)PTR_DAT_04bb46d0;
        uVar8 = FUN_01b01f10(&local_c0);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x400);
        if ((uVar8 < *(uint *)(lVar20 + 0x3e0)) &&
           (*(long *)(*(long *)(lVar20 + 1000) + (long)(int)uVar8 * 8) != 0)) goto LAB_017ebef0;
      }
    }
    local_c0 = (undefined *)0x134b;
    FUN_0277d4ac(&local_c0);
    bVar2 = true;
    *(uint *)(param_1 + 0xd0) = (uint)local_c0;
    *(undefined4 *)(param_1 + 0xd4) = local_c0._4_4_;
    *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)PTR_DAT_04bb3170;
  }
LAB_017ebef0:
  puVar4 = PTR_DAT_04bb43c0;
  psVar21 = (short *)(param_1 + 0xf4);
  if (*psVar21 != -2) {
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(psVar21);
    lVar20 = *(long *)puVar4;
    if (lVar20 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        local_b0 = 0;
        local_b8 = *(char **)(param_1 + 0xf4);
        local_c0 = PTR_DAT_04bc0510 + 0x10;
        uVar8 = FUN_0277d6c4(&local_b8);
        if (*(long *)puVar4 != 0) {
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(psVar21);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if (uVar8 < *(uint *)(lVar20 + 0x1d8)) {
              lVar20 = *(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8);
              if (lVar20 != 0) {
                local_b0 = lVar20;
              }
            }
          }
        }
        lVar20 = *(long *)PTR_DAT_04bb46d0;
        uVar8 = FUN_01b01f10(&local_c0);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x400);
        if ((uVar8 < *(uint *)(lVar20 + 0x3e0)) &&
           (*(long *)(*(long *)(lVar20 + 1000) + (long)(int)uVar8 * 8) != 0)) goto LAB_017ec04c;
      }
    }
    local_c0 = (undefined *)0x134b;
    FUN_0277d4ac(&local_c0);
    bVar2 = true;
    *(uint *)(param_1 + 0xf4) = (uint)local_c0;
    *(undefined4 *)(param_1 + 0xf8) = local_c0._4_4_;
    *(undefined2 *)(param_1 + 0xfc) = *(undefined2 *)PTR_DAT_04bb3170;
  }
LAB_017ec04c:
  puVar4 = PTR_DAT_04bb43c0;
  if (*psVar23 != -2) {
    local_b0 = 0;
    local_b8._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0xb6),*psVar23);
    local_c0 = PTR_DAT_04bc0510 + 0x10;
    local_b8 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0xb8),(undefined4)local_b8);
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar4 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar20 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(psVar23);
        puVar4 = PTR_DAT_04bbfe90;
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
           ((puVar25 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8),
            puVar25 != (uint *)0x0 && (uVar8 = *puVar25, uVar8 != 0)))) {
          cVar19 = *PTR_DAT_04bbfe88;
          puVar18 = PTR_DAT_04bbfe88;
          do {
            if (cVar19 == '\0') {
              *puVar18 = 1;
              memset(puVar4,0xff,0x1ac);
              uVar8 = *puVar25;
              cVar19 = '\x01';
              puVar18 = PTR_DAT_04bbfe88;
            }
            else {
              uVar13 = *(uint *)(puVar4 + 0x128);
              if (-1 < (int)uVar13) {
                if (((short *)((ulong)uVar13 + (long)puVar25) != (short *)0x0) &&
                   (*(short *)((ulong)uVar13 + (long)puVar25) == 0x2aa7)) {
                  local_d8 = (undefined *)0x139b;
                  FUN_0277d4ac(&local_d8);
                  bVar2 = true;
                  *(undefined4 *)(param_1 + 0xb4) = (undefined4)local_d8;
                  *(undefined4 *)(param_1 + 0xb8) = local_d8._4_4_;
                }
                break;
              }
              if (uVar13 != 0xffffffff) break;
            }
            puVar14 = (uint *)(ulong)uVar8;
            if ((puVar14 == (uint *)0x0) || (puVar25 == puVar14)) break;
            lVar20 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar14)) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar25 + (lVar20 - (long)puVar14);
            if (lVar20 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar14));
            *(undefined4 *)(puVar4 + 0x128) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar17 = (int *)(lVar20 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_017ec22c;
            }
            iVar10 = 0;
            if (*piVar17 != -1) {
              iVar10 = *piVar17;
            }
            *(int *)(puVar4 + 0x128) = iVar10;
            uVar8 = *puVar25;
            if (uVar8 == 0) break;
          } while( true );
        }
      }
    }
  }
LAB_017ec22c:
  puVar4 = PTR_DAT_04bb43c0;
  if (*psVar22 != -2) {
    local_b0 = 0;
    local_b8._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0xd2),*psVar22);
    local_c0 = PTR_DAT_04bc0510 + 0x10;
    local_b8 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0xd4),(undefined4)local_b8);
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar4 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar20 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(psVar22);
        puVar5 = PTR_DAT_04bbfe90;
        puVar4 = PTR_DAT_04bbfe88;
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
           ((puVar25 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8),
            puVar25 != (uint *)0x0 && (uVar8 = *puVar25, uVar8 != 0)))) {
          cVar19 = *PTR_DAT_04bbfe88;
          do {
            if (cVar19 == '\0') {
              cVar19 = '\x01';
              *puVar4 = 1;
              memset(puVar5,0xff,0x1ac);
              uVar8 = *puVar25;
            }
            else {
              uVar13 = *(uint *)(puVar5 + 0x128);
              if (-1 < (int)uVar13) {
                if (((short *)((ulong)uVar13 + (long)puVar25) != (short *)0x0) &&
                   (*(short *)((ulong)uVar13 + (long)puVar25) == 0x2aa6)) {
                  local_d8 = (undefined *)0x134b;
                  FUN_0277d4ac(&local_d8);
                  bVar2 = true;
                  *(undefined4 *)(param_1 + 0xd0) = (undefined4)local_d8;
                  *(undefined4 *)(param_1 + 0xd4) = local_d8._4_4_;
                }
                break;
              }
              if (uVar13 != 0xffffffff) break;
            }
            puVar14 = (uint *)(ulong)uVar8;
            if ((puVar14 == (uint *)0x0) || (puVar25 == puVar14)) break;
            lVar20 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar14)) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar25 + (lVar20 - (long)puVar14);
            if (lVar20 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar14));
            *(undefined4 *)(puVar5 + 0x128) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar17 = (int *)(lVar20 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_017ec3fc;
            }
            iVar10 = 0;
            if (*piVar17 != -1) {
              iVar10 = *piVar17;
            }
            *(int *)(puVar5 + 0x128) = iVar10;
            uVar8 = *puVar25;
            if (uVar8 == 0) break;
          } while( true );
        }
      }
    }
  }
LAB_017ec3fc:
  puVar4 = PTR_DAT_04bb43c0;
  if (*psVar21 != -2) {
    local_b0 = 0;
    local_b8._0_4_ = CONCAT22(*(undefined2 *)(param_1 + 0xf6),*psVar21);
    local_c0 = PTR_DAT_04bc0510 + 0x10;
    local_b8 = (char *)CONCAT44(*(undefined4 *)(param_1 + 0xf8),(undefined4)local_b8);
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar8 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar4 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
        lVar20 = *(long *)PTR_DAT_04bc0428;
        uVar8 = FUN_0277d6c4(psVar21);
        puVar5 = PTR_DAT_04bbfe90;
        puVar4 = PTR_DAT_04bbfe88;
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar20 + 0x1d8)) &&
           ((puVar25 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar8 * 8),
            puVar25 != (uint *)0x0 && (uVar8 = *puVar25, uVar8 != 0)))) {
          cVar19 = *PTR_DAT_04bbfe88;
          do {
            if (cVar19 == '\0') {
              cVar19 = '\x01';
              *puVar4 = 1;
              memset(puVar5,0xff,0x1ac);
              uVar8 = *puVar25;
            }
            else {
              uVar13 = *(uint *)(puVar5 + 0x128);
              if (-1 < (int)uVar13) {
                if (((short *)((ulong)uVar13 + (long)puVar25) != (short *)0x0) &&
                   (*(short *)((ulong)uVar13 + (long)puVar25) == 0x2aa6)) {
                  local_d8 = (undefined *)0x134b;
                  FUN_0277d4ac(&local_d8);
                  bVar2 = true;
                  *(undefined4 *)(param_1 + 0xf4) = (undefined4)local_d8;
                  *(undefined4 *)(param_1 + 0xf8) = local_d8._4_4_;
                }
                break;
              }
              if (uVar13 != 0xffffffff) break;
            }
            puVar14 = (uint *)(ulong)uVar8;
            if ((puVar14 == (uint *)0x0) || (puVar25 == puVar14)) break;
            lVar20 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar14)) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar25 + (lVar20 - (long)puVar14);
            if (lVar20 == 0) break;
            uVar12 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar14));
            *(undefined4 *)(puVar5 + 0x128) = 0xfffffffe;
            if (uVar12 == 0) break;
            piVar17 = (int *)(lVar20 + 4);
            while (piVar17[-1] != 0x54706054) {
              piVar17 = piVar17 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) goto LAB_017ec5cc;
            }
            iVar10 = 0;
            if (*piVar17 != -1) {
              iVar10 = *piVar17;
            }
            *(int *)(puVar5 + 0x128) = iVar10;
            uVar8 = *puVar25;
            if (uVar8 == 0) break;
          } while( true );
        }
      }
    }
  }
LAB_017ec5cc:
  puVar6 = PTR_DAT_04bbe4b0;
  puVar5 = PTR_DAT_04bb6298;
  puVar4 = PTR_DAT_04bb5ce0;
  uVar1 = *(ushort *)PTR_DAT_04bb6298;
  uVar8 = (uint)(short)uVar1;
  uVar13 = (uint)(short)uVar1;
  if (*(long *)PTR_DAT_04bb5ce0 == 0) {
    if (uVar1 != 0xffff) {
LAB_017ec6c8:
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x1a);
      puVar25 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar13 * 8);
      if (0xff < uVar8) {
        puVar25 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar25 >> 0x1a & 1) != 0) goto LAB_017ec7f4;
    }
LAB_017ec704:
    puVar3 = PTR_DAT_04bb2720;
    lVar20 = *(long *)PTR_DAT_04bb2720;
    iVar10 = 0;
    if (lVar20 != 0) {
      if (*(long *)(lVar20 + 0x330) == 0) {
        iVar10 = 0;
      }
      else {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
        iVar9 = FUN_006bd550(*puVar11,0);
        iVar10 = 0;
        if (iVar9 == 0x758f7eaf) {
          iVar10 = 0;
          if (*(long *)puVar3 != 0) {
            lVar20 = *(long *)(*(long *)puVar3 + 0x330);
            iVar10 = 0;
            if (lVar20 != 0) {
              iVar10 = *(int *)(lVar20 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar6 + 0xcc) != iVar10) {
      lVar20 = *(long *)puVar3;
      iVar10 = 0;
      if (lVar20 != 0) {
        if (*(long *)(lVar20 + 0x330) == 0) {
          iVar10 = 0;
        }
        else {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
          iVar9 = FUN_006bd550(*puVar11,0);
          iVar10 = 0;
          if (iVar9 == 0x758f7eaf) {
            iVar10 = 0;
            if (*(long *)puVar3 != 0) {
              lVar20 = *(long *)(*(long *)puVar3 + 0x330);
              iVar10 = 0;
              if (lVar20 != 0) {
                iVar10 = *(int *)(lVar20 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar6 + 0xd0) != iVar10) goto LAB_017ecd1c;
    }
  }
  else {
    if (uVar1 == 0xffff) goto LAB_017ec704;
    puVar25 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar13 * 8);
    if (0xff < uVar1) {
      puVar25 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar25 >> 0x19 & 1) == 0) {
      puVar25 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
      if (0xff < uVar13) {
        puVar25 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar25 >> 7 & 1) != 0) && (*(int *)(param_1 + 0x140) == 2)) {
        bVar2 = true;
        *(undefined4 *)(param_1 + 0x140) = 0;
      }
    }
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,6);
    puVar25 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
    if (0xff < uVar8) {
      puVar25 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar25 >> 6 & 1) == 0) goto LAB_017ec6c8;
  }
LAB_017ec7f4:
  puVar3 = PTR_DAT_04bb2720;
  uVar1 = *(ushort *)puVar5;
  uVar8 = (uint)(short)uVar1;
  if (*(long *)puVar4 == 0) {
    if (uVar1 != 0xffff) {
LAB_017ec8b0:
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x1a);
      puVar25 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
      if (0xff < uVar8) {
        puVar25 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar25 >> 0x1a & 1) == 0) goto LAB_017ec8ec;
LAB_017ec980:
      lVar20 = *(long *)PTR_DAT_04bb39b0;
      pbVar15 = PTR_DAT_04bb32e0;
      if (lVar20 == 0) {
LAB_017ecaf0:
        if (7 < *pbVar15) {
LAB_017ecafc:
          if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
            lVar20 = **(long **)PTR_DAT_04bb27d0;
            bVar16 = *(byte *)(lVar20 + 0x473);
            pbVar15 = PTR_DAT_04bb5038;
            if ((long)(char)bVar16 != 0xffffffffffffffff) {
              puVar25 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
              if (7 < bVar16) {
                puVar25 = (uint *)(lVar20 + 0x48);
              }
              if ((*puVar25 & 8) != 0) {
                pbVar15 = (byte *)(lVar20 + 0x471);
              }
            }
            bVar16 = *pbVar15;
            bVar7 = 7 < bVar16;
            if (bVar7) {
              bVar16 = 0xff;
            }
            local_d8 = (undefined *)CONCAT71(local_d8._1_7_,bVar16);
            if (!bVar7) goto LAB_017ecc1c;
          }
          pbVar15 = PTR_DAT_04bb5038;
        }
      }
      else {
        if (*(int *)(lVar20 + 0x15c) != 0) {
          pbVar15 = (byte *)(lVar20 + 0x158);
        }
        if (7 < *pbVar15) {
          if ((*(int *)(lVar20 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_017ecaf0;
          }
          goto LAB_017ecafc;
        }
      }
      bVar16 = *pbVar15;
      if (7 < bVar16) {
        bVar16 = 0xff;
      }
      local_d8 = (undefined *)CONCAT71(local_d8._1_7_,bVar16);
LAB_017ecc1c:
      local_c0 = PTR_DAT_04bb2020 + 0x10;
      local_b8 = "WHEREAREN_Unlock_RoomDimming";
      iVar10 = FUN_0274bce0(&local_d8,&local_c0);
      goto joined_r0x017ecc28;
    }
LAB_017ec8ec:
    lVar20 = *(long *)PTR_DAT_04bb2720;
    iVar10 = 0;
    if (lVar20 != 0) {
      if (*(long *)(lVar20 + 0x330) == 0) {
        iVar10 = 0;
      }
      else {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
        iVar9 = FUN_006bd550(*puVar11,0);
        iVar10 = 0;
        if (iVar9 == 0x758f7eaf) {
          iVar10 = 0;
          if (*(long *)puVar3 != 0) {
            lVar20 = *(long *)(*(long *)puVar3 + 0x330);
            iVar10 = 0;
            if (lVar20 != 0) {
              iVar10 = *(int *)(lVar20 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(puVar6 + 0xcc) != iVar10) {
      lVar20 = *(long *)puVar3;
      iVar10 = 0;
      if (lVar20 != 0) {
        if (*(long *)(lVar20 + 0x330) == 0) {
          iVar10 = 0;
        }
        else {
          puVar11 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
          iVar9 = FUN_006bd550(*puVar11,0);
          iVar10 = 0;
          if (iVar9 == 0x758f7eaf) {
            iVar10 = 0;
            if (*(long *)puVar3 != 0) {
              lVar20 = *(long *)(*(long *)puVar3 + 0x330);
              iVar10 = 0;
              if (lVar20 != 0) {
                iVar10 = *(int *)(lVar20 + 0x244);
              }
            }
          }
        }
      }
      if (*(int *)(puVar6 + 0xd0) != iVar10) goto LAB_017ecd08;
      lVar20 = **(long **)PTR_DAT_04bb27d0;
      bVar16 = *(byte *)(lVar20 + 0x473);
      pbVar15 = PTR_DAT_04bb5038;
      if ((long)(char)bVar16 != 0xffffffffffffffff) {
        puVar25 = (uint *)(lVar20 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
        if (7 < bVar16) {
          puVar25 = (uint *)(lVar20 + 0x48);
        }
        if ((*puVar25 & 8) != 0) {
          pbVar15 = (byte *)(lVar20 + 0x470);
        }
      }
      bVar16 = *pbVar15;
      if (7 < bVar16) {
        bVar16 = 0xff;
      }
      local_d8 = (undefined *)CONCAT71(local_d8._1_7_,bVar16);
      goto LAB_017ecc1c;
    }
    if ((*(long *)PTR_DAT_04bb4938 != 0) && (*(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) != 0))
    goto LAB_017ec980;
    local_c0._0_4_ = (uint)local_c0 & 0xffffff00;
    local_8d = 0;
    puStack_a0 = local_94;
    puStack_80 = local_74;
    local_94[0] = 0;
    local_c0 = (undefined *)CONCAT44(0xffffffff,(uint)local_c0);
    local_98 = 8;
    local_a8 = PTR_DAT_04bb3768 + 0x10;
    local_78 = 8;
    local_6d = 0;
    local_74[0] = 0;
    local_68 = 0;
    local_62 = 0;
    local_c8 = local_c8 & 0xffffff00;
    local_c4 = -1;
    local_66 = 0x101;
    local_88 = local_a8;
    FUN_016cfd70(&local_c8);
    iVar10 = local_c4;
    if ((local_c4 != -1) && (lVar20 = *(long *)PTR_DAT_04bb46b0, lVar20 != 0)) {
      puVar11 = *(undefined8 **)(lVar20 + 0x10);
      if ((*(byte *)(lVar20 + 0x453) & 1) == 0) {
        lVar20 = (**(code **)(*(long *)*puVar11 + 0x38))();
        if (lVar20 != 0) {
          lVar20 = lVar20 + 0x70;
          goto LAB_017ecc9c;
        }
      }
      else if (((puVar11 != (undefined8 *)0x0) && ((long *)puVar11[0x26] != (long *)0x0)) &&
              (lVar20 = (**(code **)(*(long *)puVar11[0x26] + 0x38))(), lVar20 != 0)) {
LAB_017ecc9c:
        puVar18 = &LAB_002057b0 + lVar20;
        if ((char)local_c8 != '\0') {
          puVar18 = (undefined1 *)(lVar20 + 0x20b9e8);
        }
        uVar12 = FUN_016d4af0(&local_c0,&local_c8,puVar18 + (long)iVar10 * 0xc40);
        if (((uVar12 & 1) != 0) && (local_b8._4_4_ != -1)) {
          puVar25 = (uint *)((long)&local_b8 + 4);
          puVar11 = &local_d8;
          local_d8 = PTR_DAT_04bb2020 + 0x10;
          pcStack_d0 = "WHEREAREN_Unlock_RoomDimming";
          goto LAB_017ecd00;
        }
      }
    }
  }
  else {
    if (uVar1 == 0xffff) goto LAB_017ec8ec;
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,6);
    puVar25 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar8 * 8);
    if (0xff < uVar1) {
      puVar25 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar25 >> 6 & 1) == 0) goto LAB_017ec8b0;
    local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
    lVar20 = *(long *)PTR_DAT_04bb2720;
    if (lVar20 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(lVar20 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
        iVar10 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar10 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    uVar12 = FUN_02b5f400(&local_d8,*(undefined4 *)(puVar11 + 7));
    if (((uVar12 & 1) == 0) ||
       (local_c8 = FUN_0266ce40((ulong)local_d8 & 0xffffffff), local_c8 == 0xffffffff))
    goto LAB_017ecd08;
    puVar25 = &local_c8;
    puVar11 = &local_c0;
    local_c0 = PTR_DAT_04bb2020 + 0x10;
    local_b8 = "WHEREAREN_Unlock_RoomDimming";
LAB_017ecd00:
    iVar10 = FUN_0274ce10(puVar25,puVar11);
joined_r0x017ecc28:
    if (iVar10 != 0) goto LAB_017ecd1c;
  }
LAB_017ecd08:
  if (*(int *)(param_1 + 0x140) == 3) {
    bVar2 = true;
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
LAB_017ecd1c:
  if (((param_2 & 1) != 0) && (bVar2)) {
    FUN_017ef108(param_1,0,0);
    FUN_017eff3c(param_1,0,0);
    FUN_017f0b3c(param_1);
  }
  return;
}

