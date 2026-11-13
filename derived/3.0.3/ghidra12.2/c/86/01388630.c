
/* WARNING: Removing unreachable block (ram,0x013886d8) */
/* WARNING: Removing unreachable block (ram,0x013886e4) */

void FUN_01388630(uint param_1)

{
  int iVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 uVar12;
  bool bVar13;
  bool bVar14;
  byte bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  undefined *puVar23;
  undefined **ppuVar24;
  undefined1 uVar25;
  undefined4 uVar26;
  long lVar27;
  short sVar28;
  long lVar29;
  float fVar30;
  float fVar31;
  int local_128;
  int iStack_124;
  int local_10c;
  int local_104;
  undefined8 *local_e0;
  undefined8 local_d8;
  undefined *local_d0;
  int local_c8;
  int local_c4;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  int local_80;
  int local_7c;
  undefined8 local_68;
  
  if (param_1 != 0) {
    if (param_1 == 0) {
      lVar27 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    }
    else {
      plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
      plVar8 = plVar2 + param_1;
      if (0x38 < param_1) {
        plVar8 = plVar2;
      }
      lVar27 = *plVar8;
    }
    if (lVar27 != 0) {
      local_104 = 0;
      local_128 = 0;
      iStack_124 = 0;
      local_10c = 0;
      local_c0 = (undefined *)CONCAT44(local_c0._4_4_,1);
      if (param_1 == 1) {
        lVar21 = *(long *)PTR_DAT_04bb5c90;
        local_104 = *(int *)(lVar21 + 0x28);
        iStack_124 = *(int *)(lVar21 + 0x2c);
        local_10c = *(int *)(lVar21 + 0x38);
        local_128 = *(int *)(lVar21 + 0x3c);
      }
      if (*(long *)(lVar27 + 0xd0) != 0 && *(long *)(lVar27 + 0xe0) != 0) {
        lVar22 = *(long *)(lVar27 + 0xa8);
        local_98 = lVar27 + 0x40;
        iVar10 = *(int *)(lVar27 + 0x48);
        local_7c = *(int *)(lVar27 + 0x4c);
        lVar21 = lVar27 + 0x50;
        iVar1 = *(int *)(lVar27 + 0x5c) + 1;
        puVar3 = PTR_DAT_04bb2010 + 0x10;
        if (iVar1 != local_7c) {
          puVar4 = PTR_DAT_04bb2018 + 0x10;
          puVar5 = PTR_DAT_04bbc1a0 + 0x10;
          puVar6 = (undefined8 *)(PTR_DAT_04bc35c0 + 0x10);
          puVar7 = (undefined8 *)(PTR_DAT_04bc0510 + 0x10);
          local_90 = lVar21;
          local_88 = puVar3;
          local_80 = iVar10;
          do {
            if ((((param_1 != 1) || (local_80 < local_104)) || (local_10c < local_80)) ||
               ((local_7c < iStack_124 || (local_128 < local_7c)))) {
              local_68 = (undefined **)0xfffe;
              FUN_0277d4ac(&local_68);
              if (*(long *)(lVar27 + 0xd0) == 0) {
                sVar28 = *(short *)PTR_DAT_04bb37e0;
                uVar12 = PTR_DAT_04bb37e0[2];
                uVar25 = PTR_DAT_04bb37e0[3];
                uVar26 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
              }
              else {
                FUN_012e4d78(&local_c0,*(long *)(lVar27 + 0xd0),&local_88);
                sVar28 = (short)local_c0;
                uVar25 = local_c0._3_1_;
                uVar26 = local_c0._4_4_;
                uVar12 = local_c0._2_1_;
              }
              local_68 = (undefined **)CONCAT44(uVar26,CONCAT13(uVar25,CONCAT12(uVar12,sVar28)));
              if (param_1 == 0x32) {
                bVar15 = FUN_0277ff58(&local_68);
                if (((bVar15 & 1) == 0) && (lVar22 != 0)) {
                  if (1 < (ushort)(sVar28 + 3U)) {
                    fVar31 = (float)local_7c * 0.5;
                    fVar30 = (float)local_80 * 0.5;
                    uVar17 = 0;
                    if (fVar30 != (float)(int)fVar30) {
                      uVar17 = (uint)(fVar30 < 0.0);
                    }
                    iVar18 = (int)fVar30 - uVar17;
                    uVar17 = 0;
                    if (fVar31 != (float)(int)fVar31) {
                      uVar17 = (uint)(fVar31 < 0.0);
                    }
                    iVar19 = (int)fVar31 - uVar17;
                    local_b8 = (undefined *)CONCAT44(iVar19,iVar18);
                    if (((*(int *)(lVar22 + 0x18) <= iVar18 && iVar18 <= *(int *)(lVar22 + 0x28)) &&
                        (*(int *)(lVar22 + 0x1c) <= iVar19)) && (iVar19 <= *(int *)(lVar22 + 0x2c)))
                    {
                      local_c0 = puVar4;
                      FUN_01309ec4(&local_e0,lVar22,&local_c0);
                      bVar15 = local_d8._4_1_ == '\x03';
                      goto LAB_01388988;
                    }
                  }
LAB_01388984:
                  bVar15 = 0;
                }
              }
              else {
                uVar20 = FUN_0277f7f0();
                if ((uVar20 & 1) == 0) goto LAB_01388984;
                bVar15 = 1;
              }
LAB_01388988:
              puVar23 = PTR_DAT_04bb43c0;
              local_a0 = 0;
              local_b0 = 0;
              lVar21 = *(long *)PTR_DAT_04bb43c0;
              local_c0 = puVar5;
              local_b8 = puVar3;
              puStack_a8 = puVar3;
              uVar17 = FUN_0277d6c4(&local_68);
              lVar29 = *(long *)puVar23;
              if (lVar29 == 0) {
LAB_01388a94:
                lVar21 = *(long *)PTR_DAT_04bbbc68;
                if ((((lVar21 != 0) &&
                     ((*(long *)(lVar21 + 0xb0) != 0 &&
                      (*(long *)(*(long *)(lVar21 + 0xb0) + 8) != 0)))) &&
                    (*(long *)(lVar21 + 0x488) != 0)) &&
                   (((*(long *)(*(long *)(lVar21 + 0x488) + 8) != 0 &&
                     (*(long *)(lVar21 + 0x2b0) != 0)) &&
                    (*(long *)(*(long *)(lVar21 + 0x2b0) + 8) != 0)))) {
                  uVar17 = FUN_0277d6c4(&local_68);
                  uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                  if ((uVar17 < *(uint *)(lVar21 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                    FUN_0124c030(&local_e0,&local_68);
                    iVar18 = FUN_0123db50(&local_d8,local_d0);
                    iVar19 = FUN_0123db50(&local_d8,local_d0);
                    bVar14 = iVar18 == 0x22 || iVar19 == 0x21;
                    iVar19 = *(int *)(PTR_DAT_04bb2e10 + 8);
                    iVar11 = *(int *)(PTR_DAT_04bb2e10 + 0xc);
                    iVar18 = iVar19;
                    if (0 < iVar19) {
                      iVar18 = 1;
                    }
                    if (iVar19 < 2) {
                      iVar19 = 1;
                    }
                    iVar9 = iVar11;
                    if (0 < iVar11) {
                      iVar9 = 1;
                    }
                    if (iVar11 < 2) {
                      iVar11 = 1;
                    }
                    local_b0 = CONCAT44(iVar9,iVar18);
                    local_a0 = CONCAT44(iVar11,iVar19);
                    bVar13 = true;
                    goto LAB_01388b9c;
                  }
                }
                local_d8 = local_68;
                local_e0 = puVar6;
                iVar18 = FUN_0277d6c4(&local_d8);
                bVar14 = iVar18 - 0xf619U < 7;
                bVar13 = bVar14;
              }
              else {
                lVar21 = *(long *)(lVar21 + 0x57e58);
                uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                if ((*(uint *)(lVar21 + 0x1d8) <= uVar17) ||
                   (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar17 * 8) == 0))
                goto LAB_01388a94;
                local_d0 = (undefined *)0x0;
                local_d8 = local_68;
                local_e0 = puVar7;
                uVar17 = FUN_0277d6c4(&local_d8);
                if (*(long *)PTR_DAT_04bb43c0 != 0) {
                  lVar21 = *(long *)(lVar29 + 0x57e58);
                  uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                  if ((uVar17 < *(uint *)(lVar21 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                    lVar21 = *(long *)PTR_DAT_04bc0428;
                    uVar17 = FUN_0277d6c4(&local_68);
                    uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                    if ((uVar17 < *(uint *)(lVar21 + 0x1d8)) &&
                       (puVar23 = *(undefined **)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar17 * 8)
                       , puVar23 != (undefined *)0x0)) {
                      local_d0 = puVar23;
                    }
                  }
                }
                FUN_01afb480(&local_e0,&local_c0);
                bVar14 = false;
                bVar13 = true;
              }
LAB_01388b9c:
              bVar16 = 0;
              if ((!bVar14) && (bVar13)) {
                local_b0 = CONCAT44(local_b0._4_4_ + local_7c,(int)local_b0 + local_80);
                local_a0 = CONCAT44(local_a0._4_4_ + local_7c,(int)local_a0 + local_80);
                bVar16 = FUN_0097bf30(&local_c0);
                bVar16 = bVar16 ^ 1;
              }
              if ((((bVar15 | bVar16) & 1) != 0) && ((bool)(bVar14 ^ 1))) {
                if (*(long *)(lVar27 + 0xd0) != 0) {
                  FUN_012e5af4(*(long *)(lVar27 + 0xd0),&local_88);
                }
                iVar19 = (int)local_b0;
                local_c8 = (int)local_b0;
                local_c4 = local_b0._4_4_;
                local_d0 = PTR_DAT_04bb2010 + 0x10;
                iVar18 = local_a0._4_4_ + 1;
                ppuVar24 = &puStack_a8;
                local_e0 = &local_b8;
                local_d8 = &puStack_a8;
                if (iVar18 != local_b0._4_4_) {
                  do {
                    if (*(long *)(lVar27 + 0xe0) != 0) {
                      FUN_012e5af4(*(long *)(lVar27 + 0xe0),&local_d0);
                      ppuVar24 = local_d8;
                    }
                    if (local_c8 < *(int *)(ppuVar24 + 1)) {
                      local_c8 = local_c8 + 1;
                    }
                    else {
                      local_c4 = local_c4 + 1;
                      local_c8 = *(int *)(local_e0 + 1);
                    }
                  } while (iVar19 != local_c8 || iVar18 != local_c4);
                }
              }
              lVar21 = local_90;
            }
            if (local_80 < *(int *)(lVar21 + 8)) {
              local_80 = local_80 + 1;
            }
            else {
              local_80 = *(int *)(local_98 + 8);
              local_7c = local_7c + 1;
            }
          } while ((iVar10 != local_80) || (iVar1 != local_7c));
        }
      }
    }
  }
  return;
}

