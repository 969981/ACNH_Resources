
void FUN_01e2ab60(long param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined6 uVar5;
  undefined *puVar6;
  undefined8 ******ppppppuVar7;
  byte bVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  undefined8 *****pppppuVar14;
  long lVar15;
  char cVar16;
  undefined *puVar17;
  undefined8 *****pppppuVar18;
  uint *puVar19;
  undefined8 ******ppppppuVar20;
  ulong uVar21;
  int *piVar22;
  uint *puVar23;
  long lVar24;
  undefined8 uVar25;
  int iVar26;
  uint local_1a0;
  int local_19c;
  undefined8 local_198;
  undefined4 local_190;
  byte bStack_18c;
  undefined1 uStack_18b;
  undefined2 uStack_18a;
  int local_188;
  undefined1 local_184;
  undefined1 uStack_183;
  undefined8 ******local_180;
  undefined8 ******ppppppuStack_178;
  undefined4 local_170;
  undefined8 ******local_168 [3];
  undefined8 ******local_150 [3];
  undefined8 ******local_138 [3];
  undefined8 ******local_120 [3];
  undefined8 *****local_108 [3];
  undefined8 ****local_f0 [3];
  undefined8 ***local_d8 [3];
  undefined8 **local_c0 [3];
  undefined8 *local_a8 [3];
  undefined8 local_90 [3];
  uint local_78;
  uint uStack_74;
  uint local_70;
  int iStack_6c;
  
  puVar1 = PTR_DAT_04bb2020;
  puVar17 = PTR_DAT_04bb2020 + 0x10;
  local_198._0_1_ = SUB81(puVar17,0);
  local_198._1_1_ = (undefined1)((ulong)puVar17 >> 8);
  local_198._2_1_ = (undefined1)((ulong)puVar17 >> 0x10);
  local_198._3_1_ = (byte)((ulong)puVar17 >> 0x18);
  local_198._4_1_ = (byte)((ulong)puVar17 >> 0x20);
  local_198._5_1_ = (undefined1)((ulong)puVar17 >> 0x28);
  local_198._6_2_ = (undefined2)((ulong)puVar17 >> 0x30);
  local_190 = 0x40fe362;
  bStack_18c = 0;
  uStack_18b = 0;
  uStack_18a = 0;
  uVar12 = FUN_0273f0a0(&local_198);
  if ((uVar12 & 1) == 0) {
    if (DAT_05405788 < 5) {
      if (DAT_05405788 < 3) {
        puVar1 = puVar1 + 0x10;
        local_198._0_1_ = SUB81(puVar1,0);
        local_198._1_1_ = (undefined1)((ulong)puVar1 >> 8);
        local_198._2_1_ = (undefined1)((ulong)puVar1 >> 0x10);
        local_198._3_1_ = (byte)((ulong)puVar1 >> 0x18);
        local_198._4_1_ = (byte)((ulong)puVar1 >> 0x20);
        local_198._5_1_ = (undefined1)((ulong)puVar1 >> 0x28);
        local_198._6_2_ = (undefined2)((ulong)puVar1 >> 0x30);
        local_190 = 0x40a599e;
        bStack_18c = 0;
        uStack_18b = 0;
        uStack_18a = 0;
        uVar10 = FUN_0273f0a0(&local_198);
        uVar10 = uVar10 & 1;
      }
      else {
        uVar10 = 2;
      }
    }
    else {
      uVar10 = 3;
    }
  }
  else {
    uVar10 = 4;
  }
  lVar2 = param_1 + 0x580;
  *(uint *)(param_1 + 0x418) = uVar10;
  FUN_0208b870(lVar2,0,0,0);
  FUN_0208b870(lVar2,1,0,0);
  iVar26 = 0;
  do {
    iVar11 = 0;
    iVar13 = 0;
    local_188 = 0;
    local_198._0_1_ = SUB81(&local_198,0);
    local_198._1_1_ = (undefined1)((ulong)&local_198 >> 8);
    local_198._2_1_ = (undefined1)((ulong)&local_198 >> 0x10);
    local_198._3_1_ = (byte)((ulong)&local_198 >> 0x18);
    local_198._4_1_ = (byte)((ulong)&local_198 >> 0x20);
    bStack_18c = local_198._4_1_;
    local_198._5_1_ = (undefined1)((ulong)&local_198 >> 0x28);
    uStack_18b = local_198._5_1_;
    local_198._6_2_ = (undefined2)((ulong)&local_198 >> 0x30);
    uStack_18a = local_198._6_2_;
    local_190 = SUB84(&local_198,0);
    local_90[0] = 0;
    local_170 = 10;
    local_180 = local_168;
    local_168[0] = local_150;
    local_150[0] = local_138;
    local_138[0] = local_120;
    local_120[0] = local_108;
    local_108[0] = local_f0;
    local_f0[0] = local_d8;
    local_d8[0] = local_c0;
    local_c0[0] = local_a8;
    local_a8[0] = local_90;
    do {
      ppppppuVar7 = local_180;
      if (((&DAT_053fee41)[(long)iVar13 * 0xba0] != '\0') && (iVar11 < 10)) {
        if (local_180 != (undefined8 ******)0x0) {
          local_180 = (undefined8 ******)*local_180;
        }
        *(int *)ppppppuVar7 = (int)(char)(&DAT_053fee40)[(long)iVar13 * 0xba0];
        pppppuVar14 = (undefined8 *****)
                      CONCAT26(local_198._6_2_,
                               CONCAT15(local_198._5_1_,
                                        CONCAT14(local_198._4_1_,
                                                 CONCAT13(local_198._3_1_,
                                                          CONCAT12(local_198._2_1_,
                                                                   CONCAT11(local_198._1_1_,
                                                                            (undefined1)local_198)))
                                                )));
        ppppppuVar20 = ppppppuVar7 + 1;
        *ppppppuVar20 = (undefined8 *****)0x0;
        local_198._0_1_ = SUB81(ppppppuVar20,0);
        local_198._1_1_ = (undefined1)((ulong)ppppppuVar20 >> 8);
        local_198._2_1_ = (undefined1)((ulong)ppppppuVar20 >> 0x10);
        local_198._3_1_ = (byte)((ulong)ppppppuVar20 >> 0x18);
        local_198._4_1_ = (byte)((ulong)ppppppuVar20 >> 0x20);
        local_198._5_1_ = (undefined1)((ulong)ppppppuVar20 >> 0x28);
        local_198._6_2_ = (undefined2)((ulong)ppppppuVar20 >> 0x30);
        ppppppuVar7[2] = (undefined8 *****)&local_198;
        *ppppppuVar20 = pppppuVar14;
        if (pppppuVar14 != (undefined8 *****)0x0) {
          pppppuVar14[1] = ppppppuVar20;
        }
        iVar11 = local_188 + 1;
        local_188 = iVar11;
      }
      iVar13 = iVar13 + 1;
    } while (iVar13 != 10);
    ppppppuStack_178 = local_168;
    uVar10 = nn::os::GetSystemTick();
    local_78 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
    uStack_74 = (local_78 ^ local_78 >> 0x1e) * 0x6c078965 + 2;
    local_70 = (uStack_74 ^ uStack_74 >> 0x1e) * 0x6c078965 + 3;
    iStack_6c = (local_70 ^ local_70 >> 0x1e) * 0x6c078965 + 4;
    FUN_038aaa70(&local_198,&local_78);
    lVar15 = CONCAT26(uStack_18a,CONCAT15(uStack_18b,CONCAT14(bStack_18c,local_190)));
    pppppuVar14 = (undefined8 *****)&local_190;
    if ((uint *)(lVar15 + -8) != &local_1a0) {
      do {
        puVar17 = &DAT_053fe348 + (ulong)*(uint *)(lVar15 + -8) * 0xba0;
        if (9 < *(uint *)(lVar15 + -8)) {
          puVar17 = &DAT_053fe348;
        }
        if (puVar17[0xaf9] != '\0') {
          FUN_01e2b514(param_1,puVar17 + 0x508,iVar26 == 9,0,0);
        }
        lVar15 = *(long *)(lVar15 + 8);
      } while ((uint *)(lVar15 + -8) != &local_1a0);
    }
    do {
      pppppuVar18 = (undefined8 *****)*pppppuVar14;
      pppppuVar14 = pppppuVar18 + 1;
    } while (pppppuVar18 != (undefined8 *****)&local_198);
    iVar26 = iVar26 + 1;
  } while (iVar26 != 10);
  FUN_0208ca1c(lVar2);
  puVar1 = PTR_DAT_04bc1568;
  iVar26 = 0;
  puVar17 = PTR_DAT_04bb2020 + 0x10;
  do {
    bVar9 = local_198._4_1_;
    if ((&DAT_053fee41)[(long)iVar26 * 0xba0] != '\0') {
      lVar2 = (long)iVar26;
      FUN_01e2bfe0(param_1,&DAT_053fe850 + lVar2 * 0xba0);
      FUN_01e37c08(&DAT_053fe850 + lVar2 * 0xba0,
                   *(ushort *)(param_1 + 0x74) >>
                   (ulong)((byte)(&DAT_053fee40)[lVar2 * 0xba0] & 0x1f) & 1);
      if ((int)(&DAT_053fe898)[lVar2 * 0x2e8] < 1) {
        piVar22 = (int *)PTR_DAT_04bc15a0;
      }
      else {
        lVar15 = (long)iVar26;
        iVar13 = (&DAT_053fe898)[lVar2 * 0x2e8] + (&DAT_053fe894)[lVar15 * 0x2e8] + -1;
        iVar11 = 0;
        if ((int)(&DAT_053fe890)[lVar15 * 0x2e8] <= iVar13) {
          iVar11 = (&DAT_053fe890)[lVar15 * 0x2e8];
        }
        piVar22 = (int *)((&DAT_053fe888)[lVar15 * 0x174] + (long)(iVar13 - iVar11) * 0x14 + 8);
      }
      if (*piVar22 == 0) {
        local_78 = 0;
        uVar12 = FUN_0220f914(&local_78);
        (&DAT_053fea2c)[(long)iVar26 * 0x2e8] = local_78;
        iVar11 = (&DAT_053fe898)[lVar2 * 0x2e8];
        if (iVar11 < 1) {
          uVar10 = 0;
        }
        else {
          lVar15 = (long)iVar26;
          uVar10 = 0;
          iVar13 = iVar11 + (&DAT_053fe894)[lVar15 * 0x2e8] + -1;
          iVar11 = 0;
          if ((int)(&DAT_053fe890)[lVar15 * 0x2e8] <= iVar13) {
            iVar11 = (&DAT_053fe890)[lVar15 * 0x2e8];
          }
          puVar19 = (uint *)((&DAT_053fe888)[lVar15 * 0x174] + (long)(iVar13 - iVar11) * 0x14);
          if ((char)puVar19[4] == '\0') {
            uVar10 = *puVar19;
          }
        }
        local_198._0_1_ = (undefined1)uVar10;
        local_198._1_1_ = (undefined1)(uVar10 >> 8);
        local_198._2_1_ = (undefined1)(uVar10 >> 0x10);
        local_198._3_1_ = (byte)(uVar10 >> 0x18);
        lVar15 = *(long *)PTR_DAT_04bb3968;
        if (lVar15 == 0) {
LAB_01e2b080:
          uVar10 = *(uint *)PTR_DAT_04bc2828;
          puVar19 = (uint *)PTR_DAT_04bc2828;
        }
        else {
          if ((int)*(uint *)(lVar15 + 0x16ac8) < 1) {
            if ((((*(long *)(lVar15 + 0x169b8) != 0) &&
                 (puVar19 = *(uint **)(*(long *)(lVar15 + 0x169b8) + 8), puVar19 != (uint *)0x0)) &&
                ((*(uint *)(lVar15 + 0x169d0) <= uVar10 ||
                 (*(char *)(*(long *)(lVar15 + 0x169d8) + (long)(int)uVar10) != '\0')))) &&
               (((uVar10 < *puVar19 && (puVar19[1] != 0)) && ((ushort)puVar19[2] != 0)))) {
              iVar11 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                iVar11 = 0x1c;
              }
              puVar19 = (uint *)((ulong)(puVar19[1] * uVar10 + (uint)(ushort)puVar19[2] * 8 + iVar11
                                        ) + (long)puVar19);
              if (puVar19 != (uint *)0x0) goto LAB_01e2b000;
            }
            goto LAB_01e2b080;
          }
          if (*(uint *)(lVar15 + 0x16ac8) <= uVar10) goto LAB_01e2b080;
          if (*(uint *)(lVar15 + 0x16ab8) <= uVar10) {
            uVar10 = 0;
          }
          puVar19 = *(uint **)(*(long *)(lVar15 + 0x16ac0) + (ulong)uVar10 * 8);
          if (puVar19 == (uint *)0x0) goto LAB_01e2b080;
LAB_01e2b000:
          uVar10 = *puVar19;
        }
        if (uVar10 != 0) {
          cVar16 = *PTR_DAT_04bc1560;
          do {
            puVar6 = PTR_DAT_04bc1560;
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar1 = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
              *puVar6 = 1;
              *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar1 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar10 = *(uint *)(puVar1 + 0x50);
              if (-1 < (int)uVar10) {
                if ((byte *)((ulong)uVar10 + (long)puVar19) != (byte *)0x0) {
                  bVar9 = *(byte *)((ulong)uVar10 + (long)puVar19);
                  goto LAB_01e2b184;
                }
                break;
              }
              if (uVar10 != 0xffffffff) break;
            }
            puVar23 = (uint *)(ulong)*puVar19;
            bVar9 = 2;
            if ((*puVar19 == 0) || (puVar19 == puVar23)) goto LAB_01e2b184;
            lVar15 = 0xc;
            if (*(char *)((long)puVar19 + (10 - (long)puVar23)) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar19 + (lVar15 - (long)puVar23);
            if (lVar15 == 0) break;
            uVar21 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar23));
            *(undefined4 *)(puVar1 + 0x50) = 0xfffffffe;
            if (uVar21 == 0) break;
            piVar22 = (int *)(lVar15 + 4);
            while (piVar22[-1] != 0x67850558) {
              piVar22 = piVar22 + 2;
              uVar21 = uVar21 - 1;
              if (uVar21 == 0) goto LAB_01e2b180;
            }
            iVar11 = 0;
            if (*piVar22 != -1) {
              iVar11 = *piVar22;
            }
            *(int *)(puVar1 + 0x50) = iVar11;
            if (*puVar19 == 0) break;
          } while( true );
        }
LAB_01e2b180:
        bVar9 = 2;
LAB_01e2b184:
        if (1 < bVar9) {
          bVar9 = 2;
        }
        if ((uVar12 & 1) == 0) goto LAB_01e2b384;
        uVar10 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
        if ((uVar10 & 0xfffffffe) != 6) {
          uVar12 = FUN_021ded20();
          if ((uVar12 & 1) != 0) {
            bVar8 = (&DAT_053fe858)[(long)iVar26 * 0xba0];
            if (((bVar8 < 0x23) &&
                ((byte)(&DAT_053fe859)[(long)iVar26 * 0xba0] <= (byte)PTR_DAT_04bc27f0[bVar8])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar8 * 4) >>
                 (ulong)((byte)(&DAT_053fe859)[(long)iVar26 * 0xba0] & 0x1f) & 1) != 0)) {
              if (bVar8 == 0xd) {
                local_19c = 3;
              }
              else {
                bVar8 = FUN_020fd7d8();
                if (bVar8 < 8) {
                  local_19c = *(int *)(&DAT_04058920 + (long)(char)bVar8 * 4);
                }
                else {
                  local_19c = 1;
                }
              }
            }
            else {
              local_19c = 1;
            }
            if (local_19c != 3) {
              if (bVar9 == 1) goto LAB_01e2b1b0;
              if (bVar9 == 0) {
                puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                uVar10 = *puVar19 ^ *puVar19 << 0xb;
                uVar3 = puVar19[3];
                *puVar19 = puVar19[1];
                puVar19[1] = puVar19[2];
                uVar10 = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar10 ^ uVar3;
                puVar19[2] = uVar3;
                puVar19[3] = uVar10;
                bVar9 = (&DAT_053fe858)[(long)iVar26 * 0xba0];
                if (((bVar9 < 0x23) &&
                    ((byte)(&DAT_053fe859)[(long)iVar26 * 0xba0] <= (byte)PTR_DAT_04bc27f0[bVar9]))
                   && ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar9 * 4) >>
                        (ulong)((byte)(&DAT_053fe859)[(long)iVar26 * 0xba0] & 0x1f) & 1) != 0)) {
                  if (bVar9 == 0xd) {
                    local_1a0 = 3;
                  }
                  else {
                    bVar9 = FUN_020fd7d8(&DAT_053fe858 + (long)iVar26 * 0xba0);
                    if (7 < bVar9) goto LAB_01e2b348;
                    local_1a0 = *(uint *)(&DAT_04058920 + (long)(char)bVar9 * 4);
                  }
                }
                else {
LAB_01e2b348:
                  local_1a0 = 1;
                }
                uVar12 = (ulong)local_1a0;
                if (3 < local_1a0) {
                  uVar12 = 0;
                }
                if ((int)(&DAT_04101d10)[uVar12] <= (int)((ulong)uVar10 * 100 >> 0x20))
                goto LAB_01e2b1b0;
              }
            }
          }
          goto LAB_01e2b384;
        }
LAB_01e2b1b0:
        local_198._0_1_ = SUB81(puVar17,0);
        local_198._1_1_ = (undefined1)((ulong)puVar17 >> 8);
        local_198._2_1_ = (undefined1)((ulong)puVar17 >> 0x10);
        local_198._3_1_ = (byte)((ulong)puVar17 >> 0x18);
        local_198._4_1_ = (byte)((ulong)puVar17 >> 0x20);
        local_198._5_1_ = (undefined1)((ulong)puVar17 >> 0x28);
        local_198._6_2_ = (undefined2)((ulong)puVar17 >> 0x30);
        local_190 = 0x406d3ab;
        bStack_18c = 0;
        uStack_18b = 0;
        uStack_18a = 0;
        iVar11 = FUN_0265c700((&DAT_053fe85c)[(long)iVar26 * 0x2e8],&local_198);
        if (iVar11 != 0) goto LAB_01e2b384;
        lVar15 = (long)iVar26 * 0xba0;
        bVar8 = (&DAT_053fea30)[lVar15] | 1;
      }
      else {
        (&DAT_053fea2c)[(long)iVar26 * 0x2e8] = 0;
LAB_01e2b384:
        lVar15 = (long)iVar26 * 0xba0;
        bVar8 = (&DAT_053fea30)[lVar15] & 0xfe;
      }
      (&DAT_053fea30)[lVar15] = bVar8;
      bVar9 = local_198._4_1_;
      if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
        iVar11 = (&DAT_053fe898)[lVar2 * 0x2e8];
        local_198._2_1_ = 0;
        if (iVar11 < 1) {
          local_198._1_1_ = 0;
          piVar22 = (int *)PTR_DAT_04bc15a0;
        }
        else {
          lVar2 = (long)iVar26;
          iVar13 = 0;
          iVar4 = iVar11 + (&DAT_053fe894)[lVar2 * 0x2e8] + -1;
          iVar11 = 0;
          if ((int)(&DAT_053fe890)[lVar2 * 0x2e8] <= iVar4) {
            iVar11 = (&DAT_053fe890)[lVar2 * 0x2e8];
          }
          piVar22 = (int *)((&DAT_053fe888)[lVar2 * 0x174] + (long)(iVar4 - iVar11) * 0x14);
          if ((char)piVar22[4] == '\0') {
            iVar13 = *piVar22;
          }
          local_198._1_1_ = (undefined1)(iVar13 << 2);
          piVar22 = piVar22 + 2;
        }
        lVar15 = (long)iVar26;
        uVar25 = (&DAT_053fe874)[lVar15 * 0x174];
        lVar24 = (&DAT_053fe87c)[lVar15 * 0x174];
        local_198._6_2_ = (undefined2)uVar25;
        local_190 = (undefined4)((ulong)uVar25 >> 0x10);
        bStack_18c = (byte)((ulong)uVar25 >> 0x30);
        uStack_18b = (undefined1)((ulong)uVar25 >> 0x38);
        uStack_18a = (undefined2)lVar24;
        local_188 = (int)((ulong)lVar24 >> 0x10);
        local_184 = (undefined1)((ulong)lVar24 >> 0x30);
        uStack_183 = (undefined1)((ulong)lVar24 >> 0x38);
        local_198._0_1_ = (undefined1)(&DAT_053fe870)[lVar15 * 0x2e8];
        local_78 = (&DAT_053fea2c)[lVar15 * 0x2e8];
        bVar8 = (byte)*piVar22 & 3 | (byte)((local_78 & 3) << 2) | (bVar8 & 1) << 4;
        local_198._3_1_ = bVar8 | 0xc0;
        uVar5 = (undefined6)((ulong)uVar25 >> 0x10);
        lVar2 = param_1 + 0x78 + (ulong)(uint)(&DAT_053fe85c)[lVar15 * 0x2e8] * 0x28;
        if (9 < (uint)(&DAT_053fe85c)[lVar15 * 0x2e8]) {
          lVar2 = param_1 + 0x78;
        }
        bVar9 = local_198._4_1_ | 0x3f;
        if ((*(ulong *)(lVar2 + 8) !=
             (CONCAT26(local_198._6_2_,
                       CONCAT15(local_198._5_1_,
                                CONCAT14(local_198._4_1_,
                                         CONCAT13(bVar8,(uint3)CONCAT11(local_198._1_1_,
                                                                        (undefined1)local_198))))) |
             0x3fc0000000) || *(long *)(lVar2 + 0x10) != CONCAT26(uStack_18a,uVar5)) ||
            *(long *)(lVar2 + 0x16) != lVar24) {
          *(ulong *)(lVar2 + 8) =
               CONCAT26(local_198._6_2_,
                        CONCAT15(local_198._5_1_,
                                 CONCAT14(local_198._4_1_,
                                          CONCAT13(bVar8,(uint3)CONCAT11(local_198._1_1_,
                                                                         (undefined1)local_198)))))
               | 0x3fc0000000;
          *(ulong *)(lVar2 + 0x10) = CONCAT26(uStack_18a,uVar5);
          *(long *)(lVar2 + 0x16) = lVar24;
          *(undefined1 *)(lVar2 + 0x1e) = 1;
        }
      }
    }
    local_198._4_1_ = bVar9;
    iVar26 = iVar26 + 1;
    if (iVar26 == 10) {
      return;
    }
  } while( true );
}

