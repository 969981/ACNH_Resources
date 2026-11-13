
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffe10 */
/* WARNING: Removing unreachable block (ram,0x012f6434) */
/* WARNING: Removing unreachable block (ram,0x012f6484) */
/* WARNING: Removing unreachable block (ram,0x012f648c) */
/* WARNING: Removing unreachable block (ram,0x012f6498) */
/* WARNING: Removing unreachable block (ram,0x012f64a4) */
/* WARNING: Removing unreachable block (ram,0x012f64ac) */
/* WARNING: Removing unreachable block (ram,0x012f64b4) */
/* WARNING: Removing unreachable block (ram,0x012f64bc) */
/* WARNING: Removing unreachable block (ram,0x012f6338) */
/* WARNING: Removing unreachable block (ram,0x012f63e4) */
/* WARNING: Removing unreachable block (ram,0x012f6388) */
/* WARNING: Removing unreachable block (ram,0x012f6394) */
/* WARNING: Removing unreachable block (ram,0x012f63a0) */
/* WARNING: Removing unreachable block (ram,0x012f63ac) */
/* WARNING: Removing unreachable block (ram,0x012f63b8) */
/* WARNING: Removing unreachable block (ram,0x012f63c4) */
/* WARNING: Removing unreachable block (ram,0x012f63d0) */
/* WARNING: Removing unreachable block (ram,0x012f652c) */
/* WARNING: Removing unreachable block (ram,0x012f657c) */
/* WARNING: Removing unreachable block (ram,0x012f6584) */
/* WARNING: Removing unreachable block (ram,0x012f6590) */
/* WARNING: Removing unreachable block (ram,0x012f6598) */
/* WARNING: Removing unreachable block (ram,0x012f65a4) */
/* WARNING: Removing unreachable block (ram,0x012f65b0) */
/* WARNING: Removing unreachable block (ram,0x012f65b8) */
/* WARNING: Removing unreachable block (ram,0x012f6628) */
/* WARNING: Removing unreachable block (ram,0x012f6678) */
/* WARNING: Removing unreachable block (ram,0x012f6684) */
/* WARNING: Removing unreachable block (ram,0x012f668c) */
/* WARNING: Removing unreachable block (ram,0x012f6694) */
/* WARNING: Removing unreachable block (ram,0x012f66a0) */
/* WARNING: Removing unreachable block (ram,0x012f66a8) */
/* WARNING: Removing unreachable block (ram,0x012f66b0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012f51ac(long param_1,long param_2,ulong param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort *puVar7;
  uint uVar8;
  byte bVar9;
  byte bVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  ulong uVar23;
  long lVar24;
  ushort *puVar25;
  long lVar26;
  long lVar27;
  ushort uVar28;
  undefined4 uVar29;
  long lVar30;
  uint *puVar31;
  ulong uVar32;
  int iVar33;
  undefined8 *puVar34;
  int iVar35;
  long lVar36;
  uint *puVar37;
  int *piVar38;
  char cVar39;
  uint uVar40;
  uint *puVar41;
  char *pcVar42;
  undefined8 *puVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  float fVar49;
  int local_234;
  undefined8 local_230;
  long local_228;
  undefined *local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined *local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  uint local_70;
  uint local_6c;
  
  if (param_2 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xa0) = 0;
  puVar6 = PTR_DAT_04bbc2f8;
  if ((param_3 & 1) == 0) {
    lVar26 = param_1 + 0xdc;
    sVar11 = *(short *)(param_1 + 0xd4);
    if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
      sVar11 = *(short *)(param_1 + 0xd8);
    }
    sVar12 = *(short *)(param_1 + 0xd6);
    if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
      sVar12 = *(short *)(param_1 + 0xda);
    }
    iVar21 = *(int *)(param_1 + 0x68);
    iVar45 = *(int *)(param_1 + 0x6c);
    uVar19 = iVar45 - sVar12;
    uVar20 = *(int *)(param_1 + 0x44) - (int)sVar12;
    uVar15 = iVar21 - sVar11;
    uVar40 = *(int *)(param_1 + 0x40) - (int)sVar11;
    puVar4 = (undefined *)(lVar26 + (ulong)(uVar20 * 3 + uVar40) * 0xe);
    if (2 < uVar20 || 2 < uVar40) {
      puVar4 = PTR_DAT_04bbc2f8;
    }
    puVar5 = (undefined *)(lVar26 + (ulong)(uVar19 * 3 + uVar15) * 0xe);
    if (2 < uVar19 || 2 < uVar15) {
      puVar5 = PTR_DAT_04bbc2f8;
    }
    local_1e8 = (char *)CONCAT44(local_1e8._4_4_,(uint)(byte)puVar4[0xc]);
    local_208 = CONCAT44(local_208._4_4_,(uint)(byte)puVar5[0xc]);
    if ((byte)puVar4[0xc] == 4) {
      local_1e8 = (char *)((ulong)(uint)local_1e8._4_4_ << 0x20);
    }
    if ((byte)puVar5[0xc] == 4) {
      local_208 = (ulong)local_208._4_4_ << 0x20;
    }
    if ((uint)local_208 < (uint)local_1e8) {
      *(undefined4 *)(param_2 + 0xc) = 2;
      return;
    }
    if ((uint)local_1e8 == (uint)local_208) {
      lVar36 = *(long *)(param_1 + 0x50);
      local_210 = (undefined **)((ulong)local_210 & 0xffffffff);
      if (lVar36 == 0) {
LAB_012f5394:
        bVar17 = false;
      }
      else {
        uVar19 = iVar21 - *(int *)(lVar36 + 0x28);
        if ((uVar19 < *(uint *)(lVar36 + 0x18)) &&
           (uVar20 = iVar45 - *(int *)(lVar36 + 0x2c), uVar20 < *(uint *)(lVar36 + 0x1c))) {
          uVar19 = uVar19 + *(uint *)(lVar36 + 0x18) * uVar20;
LAB_012f5374:
          if (*(uint *)(lVar36 + 0x30) <= uVar19) {
            uVar19 = 0;
          }
          puVar34 = (undefined8 *)(*(long *)(lVar36 + 0x38) + (long)(int)uVar19 * 0x68);
LAB_012f538c:
          bVar9 = *(byte *)((long)puVar34 + 0xd);
        }
        else {
          bVar9 = DAT_051a50f8._5_1_;
          if (*(char *)(lVar36 + 0x88) != '\0') {
            uVar19 = iVar21 - *(int *)(lVar36 + 0x98);
            puVar34 = &DAT_051a50f0;
            if ((uVar19 < *(uint *)(lVar36 + 0xa0)) &&
               (uVar20 = iVar45 - *(int *)(lVar36 + 0x9c), uVar20 < *(uint *)(lVar36 + 0xa4))) {
              uVar19 = uVar19 + *(uint *)(lVar36 + 0xa0) * uVar20 + *(int *)(lVar36 + 0x8c);
              goto LAB_012f5374;
            }
            goto LAB_012f538c;
          }
        }
        if ((bVar9 & 1) == 0) goto LAB_012f5394;
        bVar17 = true;
      }
      local_1e0 = (undefined **)((ulong)local_1e0 & 0xffffffff00000000);
      local_1e8 = (char *)0x0;
      uVar23 = FUN_012f74a8(param_1,param_1 + 0x38,&local_1e8);
      if (((uVar23 & 1) == 0) || (0.975 <= local_1e8._4_4_)) {
        lVar36 = *(long *)(param_1 + 0x50);
        if (lVar36 != 0) {
          uVar19 = *(int *)(param_1 + 0x68) - *(int *)(lVar36 + 0x28);
          if ((uVar19 < *(uint *)(lVar36 + 0x18)) &&
             (uVar20 = *(int *)(param_1 + 0x6c) - *(int *)(lVar36 + 0x2c),
             uVar20 < *(uint *)(lVar36 + 0x1c))) {
            uVar19 = uVar19 + *(uint *)(lVar36 + 0x18) * uVar20;
LAB_012f551c:
            if (*(uint *)(lVar36 + 0x30) <= uVar19) {
              uVar19 = 0;
            }
            puVar34 = (undefined8 *)(*(long *)(lVar36 + 0x38) + (long)(int)uVar19 * 0x68);
          }
          else if (*(char *)(lVar36 + 0x88) == '\0') {
            puVar34 = &DAT_051a50f0;
          }
          else {
            uVar19 = *(int *)(param_1 + 0x68) - *(int *)(lVar36 + 0x98);
            puVar34 = &DAT_051a50f0;
            if ((uVar19 < *(uint *)(lVar36 + 0xa0)) &&
               (uVar20 = *(int *)(param_1 + 0x6c) - *(int *)(lVar36 + 0x9c),
               uVar20 < *(uint *)(lVar36 + 0xa4))) {
              uVar19 = uVar19 + *(uint *)(lVar36 + 0xa0) * uVar20 + *(int *)(lVar36 + 0x8c);
              goto LAB_012f551c;
            }
          }
          if ((*(byte *)((long)puVar34 + 0xd) >> 4 & 1) != 0) {
            uVar19 = 2;
            local_210 = (undefined **)0x100000000;
            goto LAB_012f56fc;
          }
        }
        local_1e0 = (undefined **)((ulong)local_1e0 & 0xffffffff00000000);
        lVar36 = param_1 + 0x60;
        local_1e8 = (char *)0x0;
        local_208 = CONCAT44(local_208._4_4_,8);
        local_1e8 = (char *)0x100;
        uVar23 = FUN_00978710(lVar36,&local_1e8);
        if ((uVar23 & 1) != 0) {
          uVar19 = 1;
          local_210 = (undefined **)0x100000000;
          goto LAB_012f56fc;
        }
        local_1d8 = &PTR_LAB_0498d930;
        local_1d0 = (undefined *)0x0;
        local_1e8 = PTR_DAT_04bbc5b0 + 0x10;
        local_1e0 = (undefined **)(PTR_DAT_04bbc5b8 + 0x10);
        local_1c8 = PTR_DAT_04bb2e18 + 0x10;
        memset(&local_1c0,0,0x128);
        FUN_0137c524(&local_1b8);
        local_88 = (undefined *)0x0;
        local_98 = PTR_DAT_04bbc5d8 + 0x10;
        puVar4 = PTR_DAT_04bb2018 + 0x10;
        local_78 = 0;
        local_90 = puVar4;
        local_80 = puVar4;
        FUN_0137c6ec(&local_1e8);
        local_1e8 = PTR_DAT_04bbc278 + 0x10;
        FUN_0137c6ec(&local_1e8);
        fVar49 = (float)*(int *)(param_1 + 0x6c) * 10.0 + 5.0 + -10.0;
        fVar48 = (float)*(int *)(param_1 + 0x68) * 10.0 + 5.0 + -10.0;
        iVar21 = (int)((float)(int)fVar48 / 10.0) - (uint)(fVar48 < 0.0);
        iVar45 = (int)((float)(int)fVar49 / 10.0) - (uint)(fVar49 < 0.0);
        local_88 = (undefined *)CONCAT44(iVar45,iVar21);
        local_1c0 = CONCAT44(iVar45,iVar21);
        local_78 = CONCAT44(iVar45 + 2,iVar21 + 2);
        FUN_0137cab0(&local_1e8);
        uVar19 = FUN_012ffbd4(&local_1e8,lVar36);
        if (uVar19 != 0) goto LAB_012f56f4;
        lVar27 = param_1 + 0x78;
        local_218 = param_1 + 0x88;
        iVar21 = *(int *)(param_1 + 0x94) + 1;
        iVar45 = *(int *)(param_1 + 0x80);
        local_1f0 = *(undefined **)(param_1 + 0x80);
        local_208 = lVar27;
        local_200 = (undefined *)local_218;
        local_1f8 = puVar4;
        if (iVar21 != *(int *)(param_1 + 0x84)) {
          do {
            uVar23 = FUN_012ffd88(&local_1e8,&local_1f8);
            if ((uVar23 & 1) != 0) {
              uVar19 = 3;
              local_210 = (undefined **)0x100000000;
              goto LAB_012f56fc;
            }
            if ((int)(uint)local_1f0 < *(int *)((long)local_200 + 8)) {
              iVar22 = (uint)local_1f0 + 1;
              iVar33 = (int)local_1f0._4_4_;
            }
            else {
              iVar33 = (int)local_1f0._4_4_ + 1;
              iVar22 = *(int *)(local_208 + 8);
              local_1f0 = (undefined *)CONCAT44(iVar33,(uint)local_1f0);
            }
            local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,iVar22);
          } while (iVar45 != iVar22 || iVar21 != iVar33);
        }
        local_208._1_7_ = (uint7)(local_208 >> 8) & 0xffffff;
        local_208 = (ulong)local_208._1_7_ << 8;
        uVar23 = FUN_012f7630(param_1,&local_208);
        if ((uVar23 & 1) != 0) {
LAB_012f5494:
          uVar19 = 2;
          goto LAB_012f56f4;
        }
        lVar24 = FUN_01300ee0(param_1 + 0x98,lVar36);
        puVar25 = (ushort *)FUN_01301f64(param_1 + 0x98,lVar36);
        local_1e8 = PTR_DAT_04bbc330 + 0x10;
        local_1e0 = (undefined **)0x0;
        local_1d8 = (undefined **)CONCAT44(local_1d8._4_4_,(uint)(byte)puVar25[2]);
        lVar30 = *(long *)PTR_DAT_04bb27a8;
        uVar19 = (uint)*puVar25 - (uint)*(ushort *)(lVar30 + 0x408);
        if (uVar19 < *(uint *)(lVar30 + 1000)) {
          lVar30 = *(long *)(*(long *)(lVar30 + 0x3f0) + (long)(int)uVar19 * 8);
          if (lVar30 != 0) {
            local_1e0 = (undefined **)lVar30;
          }
        }
        if (DAT_051810a8 <= (int)(uint)*(byte *)(lVar24 + 0xc)) goto LAB_012f5494;
        local_208._0_4_ = (uint)*(byte *)(lVar24 + 0xc);
        local_208._0_4_ = FUN_01313184(&local_1e8);
        if ((uint)local_208 != 0) {
          uVar23 = FUN_009773f0(lVar36);
LAB_012f5860:
          uVar19 = 1;
          uVar20 = uVar19;
          if ((uVar23 & 1) == 0) {
            uVar20 = 2;
          }
          local_210 = (undefined **)((ulong)uVar20 << 0x20);
          goto LAB_012f56fc;
        }
        iVar45 = *(int *)(param_1 + 0x80);
        local_1d0 = *(undefined **)(param_1 + 0x80);
        local_1e0 = (undefined **)local_218;
        local_1d8 = (undefined **)(PTR_DAT_04bb2018 + 0x10);
        iVar21 = *(int *)(param_1 + 0x94) + 1;
        local_208._0_4_ = 0;
        local_1e8 = (char *)lVar27;
        if (iVar21 != *(int *)(param_1 + 0x84)) {
          lVar27 = local_218;
          iVar22 = *(int *)(param_1 + 0x84);
          iVar33 = iVar45;
          do {
            if (iVar33 == *(int *)(param_1 + 0x68) || iVar22 == *(int *)(param_1 + 0x6c)) {
              sVar11 = *(short *)(param_1 + 0xd4);
              if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
                sVar11 = *(short *)(param_1 + 0xd8);
              }
              sVar12 = *(short *)(param_1 + 0xd6);
              if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
                sVar12 = *(short *)(param_1 + 0xda);
              }
              uVar19 = iVar33 - sVar11;
              uVar20 = *(int *)(param_1 + 0x68) - (int)sVar11;
              uVar15 = iVar22 - sVar12;
              uVar40 = *(int *)(param_1 + 0x6c) - (int)sVar12;
              puVar4 = (undefined *)(lVar26 + (ulong)(uVar15 * 3 + uVar19) * 0xe);
              if (2 < uVar15 || 2 < uVar19) {
                puVar4 = puVar6;
              }
              puVar5 = (undefined *)(lVar26 + (ulong)(uVar40 * 3 + uVar20) * 0xe);
              if (2 < uVar40 || 2 < uVar20) {
                puVar5 = puVar6;
              }
              local_208._0_4_ = (uint)(byte)puVar4[0xc];
              local_6c = (uint)(byte)puVar5[0xc];
              if ((uint)local_208 == 4) {
                local_208._0_4_ = 0;
              }
              if (local_6c == 4) {
                local_6c = 0;
              }
              if (local_6c < (uint)local_208) {
                if (*(long *)(param_1 + 0x50) != 0) {
                  lVar27 = FUN_01381bbc(*(long *)(param_1 + 0x50),&local_1d8);
                  if ((*(byte *)(lVar27 + 0xc) >> 1 & 1) != 0) {
                    uVar19 = 10;
                    local_210 = (undefined **)0x200000000;
                    goto LAB_012f56fc;
                  }
                  lVar27 = (long)local_1e0;
                  iVar33 = (int)local_1d0;
                }
              }
            }
            if (iVar33 < *(int *)(lVar27 + 8)) {
              iVar33 = iVar33 + 1;
            }
            else {
              local_1d0._4_4_ = local_1d0._4_4_ + 1;
              iVar33 = *(int *)((long)local_1e8 + 8);
            }
            local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,iVar33);
            iVar22 = local_1d0._4_4_;
          } while (iVar45 != iVar33 || iVar21 != local_1d0._4_4_);
        }
        if (*(long *)(param_1 + 0x50) != 0) {
          lVar26 = FUN_01381bbc(*(long *)(param_1 + 0x50),lVar36);
          uVar19 = 1;
          if ((*(uint *)(lVar26 + 0xc) & 0x900) == 0x100) goto LAB_012f56fc;
          uVar23 = FUN_009773f0(lVar36);
          goto LAB_012f5860;
        }
      }
      else {
        sVar11 = *(short *)(param_1 + 0xd4);
        if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
          sVar11 = *(short *)(param_1 + 0xd8);
        }
        sVar12 = *(short *)(param_1 + 0xd6);
        if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
          sVar12 = *(short *)(param_1 + 0xda);
        }
        uVar19 = *(int *)(param_1 + 0x44) - (int)sVar12;
        uVar20 = *(int *)(param_1 + 0x40) - (int)sVar11;
        uVar15 = *(int *)(param_1 + 0x6c) - (int)sVar12;
        uVar40 = *(int *)(param_1 + 0x68) - (int)sVar11;
        puVar4 = (undefined *)(lVar26 + (ulong)(uVar19 * 3 + uVar20) * 0xe);
        if (2 < uVar19 || 2 < uVar20) {
          puVar4 = puVar6;
        }
        bVar9 = puVar4[0xc];
        puVar4 = (undefined *)(lVar26 + (ulong)(uVar15 * 3 + uVar40) * 0xe);
        if (2 < uVar15 || 2 < uVar40) {
          puVar4 = puVar6;
        }
        bVar10 = puVar4[0xc];
        if (bVar9 == 4) {
          bVar9 = 0;
        }
        if (bVar10 == 4) {
          bVar10 = 0;
        }
        if ((bVar10 < bVar9) || (bVar9 == bVar10)) goto LAB_012f5494;
        uVar19 = 1;
LAB_012f56f4:
        local_210 = (undefined **)((ulong)uVar19 << 0x20);
      }
      uVar19 = 1;
LAB_012f56fc:
      if (local_210._4_4_ == 0) {
        *(undefined4 *)(param_2 + 8) = 6;
      }
      else {
        *(uint *)(param_2 + 0xc) = local_210._4_4_;
        if (bVar17) {
          if (0x11 < uVar19) {
            return;
          }
        }
        else {
          local_1e8._0_4_ = 1;
          uVar19 = (uint)local_1e8;
        }
        *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1 << (ulong)uVar19;
      }
      return;
    }
  }
  lVar26 = *(long *)(param_1 + 0x50);
  local_234 = 0;
  if (lVar26 == 0) {
    bVar18 = false;
    bVar17 = true;
  }
  else {
    iVar21 = *(int *)(param_1 + 0x68);
    iVar45 = *(int *)(param_1 + 0x6c);
    uVar19 = iVar21 - *(int *)(lVar26 + 0x28);
    uVar20 = *(uint *)(lVar26 + 0x18);
    uVar15 = iVar45 - *(int *)(lVar26 + 0x2c);
    if (uVar19 < uVar20 && uVar15 < *(uint *)(lVar26 + 0x1c)) {
      uVar40 = uVar19 + uVar20 * uVar15;
LAB_012f5b30:
      if (*(uint *)(lVar26 + 0x30) <= uVar40) {
        uVar40 = 0;
      }
      bVar17 = (*(byte *)(*(long *)(lVar26 + 0x38) + (long)(int)uVar40 * 0x68 + 0xd) & 1) == 0;
      if (uVar20 <= uVar19 || *(uint *)(lVar26 + 0x1c) <= uVar15) goto LAB_012f5b6c;
      uVar19 = uVar19 + uVar20 * uVar15;
LAB_012f5bb0:
      if (*(uint *)(lVar26 + 0x30) <= uVar19) {
        uVar19 = 0;
      }
      puVar34 = (undefined8 *)(*(long *)(lVar26 + 0x38) + (long)(int)uVar19 * 0x68);
    }
    else {
      if (*(char *)(lVar26 + 0x88) != '\0') {
        uVar40 = iVar21 - *(int *)(lVar26 + 0x98);
        if ((uVar40 < *(uint *)(lVar26 + 0xa0)) &&
           (uVar8 = iVar45 - *(int *)(lVar26 + 0x9c), uVar8 < *(uint *)(lVar26 + 0xa4))) {
          uVar40 = uVar40 + *(uint *)(lVar26 + 0xa0) * uVar8 + *(int *)(lVar26 + 0x8c);
          goto LAB_012f5b30;
        }
      }
      bVar17 = (DAT_051a50f8._5_1_ & 1) == 0;
LAB_012f5b6c:
      if (*(char *)(lVar26 + 0x88) == '\0') {
        puVar34 = &DAT_051a50f0;
      }
      else {
        uVar19 = iVar21 - *(int *)(lVar26 + 0x98);
        puVar34 = &DAT_051a50f0;
        if ((uVar19 < *(uint *)(lVar26 + 0xa0)) &&
           (uVar20 = iVar45 - *(int *)(lVar26 + 0x9c), uVar20 < *(uint *)(lVar26 + 0xa4))) {
          uVar19 = uVar19 + *(uint *)(lVar26 + 0xa0) * uVar20 + *(int *)(lVar26 + 0x8c);
          goto LAB_012f5bb0;
        }
      }
    }
    bVar18 = (*(uint *)((long)puVar34 + 0xc) & 0x900) != 0x100;
  }
  local_1e8 = (char *)((ulong)local_1e8 & 0xffffffff00000000);
  local_1f0 = (undefined *)0x0;
  uVar23 = FUN_012f74a8(param_1,param_1 + 0x38,&local_1f0);
  if (((uVar23 & 1) == 0) || (0.975 <= local_1f0._4_4_)) {
    local_1e8 = (char *)((ulong)local_1e8 & 0xffffffff00000000);
    lVar26 = param_1 + 0x60;
    local_1f0 = (undefined *)0x0;
    local_210 = (undefined **)CONCAT44(local_210._4_4_,8);
    local_1f0 = (undefined *)0x100;
    uVar23 = FUN_00978710(lVar26,&local_1f0);
    puVar5 = PTR_DAT_04bbc2f8;
    puVar4 = PTR_DAT_04bbbde0;
    puVar6 = PTR_DAT_04bbbdd8;
    if ((uVar23 & 1) == 0) {
      lVar36 = param_1 + 0xdc;
      sVar11 = *(short *)(param_1 + 0xd4);
      if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
        sVar11 = *(short *)(param_1 + 0xd8);
      }
      sVar12 = *(short *)(param_1 + 0xd6);
      if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
        sVar12 = *(short *)(param_1 + 0xda);
      }
      uVar19 = *(int *)(param_1 + 0x6c) - (int)sVar12;
      uVar20 = *(int *)(param_1 + 0x68) - (int)sVar11;
      puVar25 = (ushort *)(lVar36 + (ulong)(uVar19 * 3 + uVar20) * 0xe);
      if (2 < uVar19 || 2 < uVar20) {
        puVar25 = (ushort *)PTR_DAT_04bbc2f8;
      }
      uVar19 = *(uint *)(param_1 + 0xa0);
      local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,uVar19);
      puVar7 = puVar25 + (ulong)uVar19 * 3;
      if (1 < uVar19) {
        puVar7 = puVar25;
      }
      lVar27 = *(long *)PTR_DAT_04bb27a8;
      uVar19 = (uint)*puVar7 - (uint)*(ushort *)(lVar27 + 0x408);
      if (((uVar19 < *(uint *)(lVar27 + 1000)) &&
          (puVar31 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar19 * 8),
          puVar31 != (uint *)0x0)) &&
         (uVar19 = *puVar31, uVar19 != 0 && puVar31 != (uint *)(ulong)uVar19)) {
        puVar41 = (uint *)((long)puVar31 - (long)(ulong)uVar19);
        if (((*puVar41 != 0) && (uVar19 = puVar41[1], uVar19 != 0)) &&
           ((ulong)(ushort)puVar41[2] != 0)) {
          lVar27 = 0xc;
          if (*(char *)((long)puVar41 + 10) != '\0') {
            lVar27 = 0x1c;
          }
          lVar27 = (long)puVar41 + lVar27 + (ulong)(ushort)puVar41[2] * 8;
          if (lVar27 != 0) {
            uVar20 = 0;
            if ((ulong)uVar19 != 0) {
              uVar20 = (uint)((ulong)((long)puVar31 - lVar27) / (ulong)uVar19);
            }
            if (*puVar41 <= uVar20) {
              uVar20 = 0xffffffff;
            }
            if ((uVar20 < *(uint *)PTR_DAT_04bbbe48) &&
               (uVar28 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar20 * 2),
               uVar28 < 5)) {
              local_70 = (uint)uVar28;
              uVar19 = 0;
              local_78 = (ulong)CONCAT14((char)puVar25[6],(undefined4)local_78);
              bVar1 = bVar18;
              if (local_70 != 3) {
                bVar1 = true;
              }
              if (((!bVar1) && (puVar41 = (uint *)(ulong)*puVar31, *puVar31 != 0)) &&
                 (puVar31 != puVar41)) {
                puVar37 = (uint *)((long)puVar31 - (long)puVar41);
                if (((*puVar37 == 0) || (uVar19 = puVar37[1], uVar19 == 0)) ||
                   ((ulong)(ushort)puVar37[2] == 0)) {
                  uVar19 = 0;
                }
                else {
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar37 + 10) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar37 + lVar27 + (ulong)(ushort)puVar37[2] * 8;
                  if (lVar27 == 0) {
                    uVar19 = 0;
                  }
                  else {
                    uVar20 = 0;
                    if ((ulong)uVar19 != 0) {
                      uVar20 = (uint)((ulong)((long)puVar31 - lVar27) / (ulong)uVar19);
                    }
                    if (*puVar37 <= uVar20) {
                      uVar20 = 0xffffffff;
                    }
                    if ((uVar20 < *(uint *)PTR_DAT_04bbbe30) &&
                       (*(short *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar20 * 2) == 1)) {
                      cVar39 = *PTR_DAT_04bbbdd8;
                      do {
                        if (cVar39 == '\0') {
                          cVar39 = '\x01';
                          *(undefined8 *)puVar4 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                          *puVar6 = 1;
                          *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
                          puVar41 = (uint *)(ulong)*puVar31;
                        }
                        else {
                          uVar19 = *(uint *)(puVar4 + 0xa4);
                          if (-1 < (int)uVar19) {
                            pcVar42 = (char *)((ulong)uVar19 + (long)puVar31);
                            goto LAB_012f6004;
                          }
                          if (uVar19 != 0xffffffff) goto LAB_012f6000;
                        }
                        pcVar42 = (char *)0x0;
                        if ((puVar41 == (uint *)0x0) || (puVar31 == puVar41)) goto LAB_012f6004;
                        lVar27 = 0xc;
                        if (*(char *)((long)puVar31 + (10 - (long)puVar41)) != '\0') {
                          lVar27 = 0x1c;
                        }
                        lVar27 = (long)puVar31 + (lVar27 - (long)puVar41);
                        pcVar42 = (char *)0x0;
                        if (lVar27 == 0) goto LAB_012f6004;
                        uVar23 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar41));
                        *(undefined4 *)(puVar4 + 0xa4) = 0xfffffffe;
                        if (uVar23 == 0) goto LAB_012f6000;
                        piVar38 = (int *)(lVar27 + 4);
                        while (piVar38[-1] != 0x39b5a93d) {
                          piVar38 = piVar38 + 2;
                          uVar23 = uVar23 - 1;
                          if (uVar23 == 0) goto LAB_012f6000;
                        }
                        iVar21 = 0;
                        if (*piVar38 != -1) {
                          iVar21 = *piVar38;
                        }
                        *(int *)(puVar4 + 0xa4) = iVar21;
                        puVar41 = (uint *)(ulong)*puVar31;
                        if (*puVar31 == 0) goto LAB_012f6000;
                      } while( true );
                    }
                    uVar19 = 0;
                  }
                }
              }
              goto LAB_012f610c;
            }
          }
        }
      }
      uVar19 = 0;
      local_78 = (ulong)CONCAT14((char)puVar25[6],(undefined4)local_78);
      local_70 = 0;
      goto LAB_012f610c;
    }
    bVar18 = false;
    local_234 = 1;
    uVar19 = 7;
  }
  else {
    sVar11 = *(short *)(param_1 + 0xd4);
    if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
      sVar11 = *(short *)(param_1 + 0xd8);
    }
    sVar12 = *(short *)(param_1 + 0xd6);
    if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
      sVar12 = *(short *)(param_1 + 0xda);
    }
    uVar19 = *(int *)(param_1 + 0x44) - (int)sVar12;
    uVar20 = *(int *)(param_1 + 0x40) - (int)sVar11;
    uVar15 = *(int *)(param_1 + 0x68) - (int)sVar11;
    uVar40 = *(int *)(param_1 + 0x6c) - (int)sVar12;
    puVar6 = (undefined *)(param_1 + 0xdc + (ulong)(uVar19 * 3 + uVar20) * 0xe);
    if (2 < uVar19 || 2 < uVar20) {
      puVar6 = PTR_DAT_04bbc2f8;
    }
    puVar4 = (undefined *)(param_1 + 0xdc + (ulong)(uVar40 * 3 + uVar15) * 0xe);
    if (2 < uVar40 || 2 < uVar15) {
      puVar4 = PTR_DAT_04bbc2f8;
    }
    local_210 = (undefined **)CONCAT44(local_210._4_4_,(uint)(byte)puVar6[0xc]);
    local_230 = CONCAT44(local_230._4_4_,(uint)(byte)puVar4[0xc]);
    if ((byte)puVar6[0xc] == 4) {
      local_210 = (undefined **)((ulong)local_210._4_4_ << 0x20);
    }
    if ((byte)puVar4[0xc] == 4) {
      local_230 = (ulong)local_230._4_4_ << 0x20;
    }
    if (((uint)local_230 < (uint)local_210) || ((uint)local_210 == (uint)local_230)) {
      local_234 = 2;
    }
    else {
LAB_012f6df4:
      local_234 = 1;
    }
LAB_012f6e00:
    bVar18 = false;
    uVar19 = 1;
  }
  goto LAB_012f6e04;
LAB_012f6000:
  pcVar42 = (char *)0x0;
LAB_012f6004:
  local_1e8 = *(char **)PTR_PTR_04bbc340;
  if (pcVar42 != (char *)0x0) {
    local_1e8 = pcVar42;
  }
  local_1f0 = PTR_DAT_04bb2020 + 0x10;
  iVar21 = FUN_006bd550(local_1e8,0);
  uVar19 = 0;
  local_1e0 = (undefined **)CONCAT44(local_1e0._4_4_,iVar21);
  if (iVar21 == DAT_05181c28) {
    (**(code **)(local_1f0 + 0x18))(&local_1f0);
    (**(code **)(local_1f0 + 0x18))(&local_1f0);
    pcVar42 = local_1e8;
    (**(code **)(DAT_05181c18 + 0x18))(&DAT_05181c18);
    if (pcVar42 == DAT_05181c20) {
LAB_012f7450:
      uVar19 = 1;
    }
    else if (*local_1e8 == *DAT_05181c20) {
      if (*local_1e8 == '\0') goto LAB_012f7450;
      pcVar42 = local_1e8 + 2;
      uVar23 = 0;
      do {
        uVar32 = uVar23;
        if (uVar32 == 0x80000) goto LAB_012f747c;
        if (pcVar42[uVar32 - 1] != DAT_05181c20[uVar32 + 1]) {
          pcVar42 = (char *)0x0;
          goto LAB_012f747c;
        }
        if (pcVar42[uVar32 - 1] == '\0') goto LAB_012f60f8;
        if (pcVar42[uVar32] != DAT_05181c20[uVar32 + 2]) {
          pcVar42 = (char *)0x0;
          uVar32 = uVar32 | 1;
          goto LAB_012f747c;
        }
        uVar23 = uVar32 + 2;
      } while (pcVar42[uVar32] != '\0');
      uVar32 = uVar32 + 1;
LAB_012f60f8:
      pcVar42 = (char *)0x1;
LAB_012f747c:
      uVar19 = (uint)(uVar32 < 0x80000) & (uint)pcVar42;
    }
    else {
      uVar19 = 0;
    }
  }
  uVar19 = uVar19 ^ 1;
LAB_012f610c:
  puVar6 = PTR_DAT_04bb27a8;
  if (local_70 == 3) {
    if (uVar19 == 0) {
      iVar21 = local_78._4_4_;
      if ((local_78._4_4_ < DAT_051810a8) &&
         (uVar23 = FUN_012f8da0(param_1,3,local_78._4_4_ + 1), (uVar23 & 1) != 0)) {
        bVar18 = false;
        local_234 = 1;
        uVar19 = 8;
      }
      else {
        uVar23 = FUN_012f8da0(param_1,1,iVar21);
        if ((uVar23 & 1) == 0) {
          uVar23 = FUN_012f8fd0(param_1,iVar21);
          if (((uVar23 & 1) != 0) || (uVar23 = FUN_012f91c0(param_1,iVar21), (uVar23 & 1) != 0))
          goto LAB_012f6b04;
          goto LAB_012f6b18;
        }
        bVar18 = false;
        local_234 = 1;
        uVar19 = 4;
      }
    }
    else {
      local_6c = 3;
      sVar11 = *(short *)(param_1 + 0xd4);
      if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
        sVar11 = *(short *)(param_1 + 0xd8);
      }
      iVar21 = *(int *)(param_1 + 0x80);
      iVar45 = *(int *)(param_1 + 0x84);
      sVar12 = *(short *)(param_1 + 0xd6);
      if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
        sVar12 = *(short *)(param_1 + 0xda);
      }
      uVar20 = *(int *)(param_1 + 0x6c) - (int)sVar12;
      uVar15 = *(int *)(param_1 + 0x68) - (int)sVar11;
      puVar25 = (ushort *)(lVar36 + (ulong)(uVar20 * 3 + uVar15) * 0xe);
      if (2 < uVar20 || 2 < uVar15) {
        puVar25 = (ushort *)puVar5;
      }
      puVar7 = puVar25 + (ulong)*(uint *)(param_1 + 0xa0) * 3;
      if (1 < *(uint *)(param_1 + 0xa0)) {
        puVar7 = puVar25;
      }
      local_200 = (undefined *)CONCAT44(local_200._4_4_,(uint)(byte)puVar7[2]);
      lVar27 = *(long *)PTR_DAT_04bb27a8;
      local_210 = (undefined **)(PTR_DAT_04bbc330 + 0x10);
      local_208 = 0;
      uVar20 = (uint)*puVar7 - (uint)*(ushort *)(lVar27 + 0x408);
      if (uVar20 < *(uint *)(lVar27 + 1000)) {
        uVar23 = *(ulong *)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar20 * 8);
        if (uVar23 != 0) {
          local_208 = uVar23;
        }
      }
      local_1b0 = 0x500000005;
      local_1f0 = PTR_DAT_04bbc328 + 0x10;
      local_1e0 = (undefined **)0x500000005;
      local_1d8 = (undefined **)0x500000005;
      local_1d0 = (undefined *)0x500000005;
      local_1c8 = (undefined *)0x500000005;
      local_1c0 = 0x500000005;
      local_1b8 = 0x500000005;
      local_1e8 = (char *)0x500000005;
      FUN_01313c40(&local_210,&local_1f0,1);
      iVar22 = *(int *)(param_1 + 0x68);
      iVar44 = *(int *)(param_1 + 0x6c);
      uVar20 = 0;
      iVar35 = *(int *)(param_1 + 0x80);
      iVar33 = *(int *)(param_1 + 0x84);
      iVar46 = *(int *)(param_1 + 0x90);
      iVar47 = *(int *)(param_1 + 0x94);
      iVar13 = iVar44 + -1;
      if (((iVar35 <= iVar22 && iVar22 <= iVar46) && (iVar33 < iVar44)) && (iVar13 <= iVar47)) {
        local_230 = CONCAT44(local_230._4_4_,4);
                    /* WARNING: Could not recover jumptable at 0x012f6274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_012f6278 + (ulong)DAT_04174bb8 * 4))();
        return;
      }
      iVar2 = iVar44 + 1;
      if ((iVar33 <= iVar2 && (iVar35 <= iVar22 && iVar22 <= iVar46)) && (iVar44 < iVar47)) {
        local_230 = local_230 & 0xffffffff00000000;
                    /* WARNING: Could not recover jumptable at 0x012f6428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_012f642c + (ulong)DAT_04174bbc * 4))();
        return;
      }
      iVar14 = iVar22 + -1;
      bVar1 = iVar35 < iVar22;
      if (((bVar1 && iVar14 <= iVar46) && (iVar33 <= iVar44)) && (iVar44 <= iVar47)) {
        local_230 = CONCAT44(local_230._4_4_,6);
                    /* WARNING: Could not recover jumptable at 0x012f6520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_012f6524 + (ulong)DAT_04174bca * 4))();
        return;
      }
      iVar3 = iVar22 + 1;
      bVar16 = iVar22 < iVar46;
      if (((iVar35 <= iVar3 && bVar16) && (iVar33 <= iVar44)) && (iVar44 <= iVar47)) {
        local_230 = CONCAT44(local_230._4_4_,2);
                    /* WARNING: Could not recover jumptable at 0x012f661c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&UNK_012f6620 + (ulong)DAT_04174bce * 4))();
        return;
      }
      if ((iVar33 < iVar44 && (bVar1 && iVar14 <= iVar46)) && (iVar13 <= iVar47)) {
        local_230 = CONCAT44(local_230._4_4_,(uint)local_1e8);
        if (((((uint)local_1e8 == local_6c) && ((iVar21 < iVar22 && (iVar14 <= iVar21 + 3)))) &&
            (iVar45 < iVar44)) &&
           (((iVar13 <= iVar45 + 3 && ((uint)(iVar14 - iVar21) < 3)) &&
            ((uint)(iVar13 - iVar45) < 3)))) {
          uVar20 = 1 << (ulong)((iVar13 - iVar45) * 3 + (iVar14 - iVar21) & 0x1f);
        }
      }
      if ((iVar33 < iVar44 && (iVar35 <= iVar3 && bVar16)) && (iVar13 <= iVar47)) {
        local_230 = CONCAT44(local_230._4_4_,local_1e0._4_4_);
        if (((local_1e0._4_4_ == local_6c) && ((iVar22 < iVar21 + 3 && (iVar21 <= iVar3)))) &&
           ((iVar45 < iVar44 &&
            (((iVar13 <= iVar45 + 3 && ((uint)(iVar3 - iVar21) < 3)) &&
             ((uint)(iVar13 - iVar45) < 3)))))) {
          uVar20 = uVar20 | 1 << (ulong)((iVar13 - iVar45) * 3 + (iVar3 - iVar21) & 0x1f);
        }
      }
      if ((iVar33 <= iVar2 && (iVar35 <= iVar3 && bVar16)) && (iVar44 < iVar47)) {
        local_230 = CONCAT44(local_230._4_4_,local_1b0._4_4_);
        if (((local_1b0._4_4_ == local_6c) && ((iVar22 < iVar21 + 3 && (iVar21 <= iVar3)))) &&
           ((iVar44 < iVar45 + 3 &&
            (((iVar45 <= iVar2 && ((uint)(iVar3 - iVar21) < 3)) && ((uint)(iVar2 - iVar45) < 3))))))
        {
          uVar20 = uVar20 | 1 << (ulong)((iVar2 - iVar45) * 3 + (iVar3 - iVar21) & 0x1f);
        }
      }
      if ((iVar33 <= iVar2 && (bVar1 && iVar14 <= iVar46)) && (iVar44 < iVar47)) {
        local_230 = CONCAT44(local_230._4_4_,(uint)local_1b8);
        if (((((uint)local_1b8 == local_6c) && ((iVar21 < iVar22 && (iVar14 <= iVar21 + 3)))) &&
            (iVar44 < iVar45 + 3)) &&
           (((iVar45 <= iVar2 && ((uint)(iVar14 - iVar21) < 3)) && ((uint)(iVar2 - iVar45) < 3)))) {
          uVar20 = uVar20 | 1 << (ulong)((iVar2 - iVar45) * 3 + (iVar14 - iVar21) & 0x1f);
        }
      }
      if (iVar47 + 1 != iVar33) {
        bVar10 = 0;
        bVar9 = 0;
        uVar15 = *(uint *)(param_1 + 0xa0);
        sVar11 = *(short *)(param_1 + 0xd4);
        if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
          sVar11 = *(short *)(param_1 + 0xd8);
        }
        lVar27 = *(long *)puVar6;
        sVar12 = *(short *)(param_1 + 0xd6);
        if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
          sVar12 = *(short *)(param_1 + 0xda);
        }
        iVar22 = iVar35;
        do {
          if (((((iVar21 <= iVar22) && (iVar22 <= iVar21 + 3)) &&
               ((iVar45 <= iVar33 && ((iVar33 <= iVar45 + 3 && ((uint)(iVar33 - iVar45) < 3)))))) &&
              ((uint)(iVar22 - iVar21) < 3)) &&
             ((uVar20 >> (ulong)((iVar33 - iVar45) * 3 + (iVar22 - iVar21) & 0x1f) & 1) != 0)) {
            local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,uVar15);
            puVar25 = (ushort *)
                      (lVar36 + (ulong)(uint)((iVar33 - sVar12) * 3 + (iVar22 - sVar11)) * 0xe);
            if (2 < (uint)(iVar22 - sVar11) || 2 < (uint)(iVar33 - sVar12)) {
              puVar25 = (ushort *)puVar5;
            }
            puVar7 = puVar25 + (ulong)uVar15 * 3;
            if (1 < uVar15) {
              puVar7 = puVar25;
            }
            uVar40 = (uint)*puVar7 - (uint)*(ushort *)(lVar27 + 0x408);
            if (((uVar40 < *(uint *)(lVar27 + 1000)) &&
                (puVar31 = *(uint **)(*(long *)(lVar27 + 0x3f0) + (long)(int)uVar40 * 8),
                puVar31 != (uint *)0x0)) &&
               (uVar40 = *puVar31, uVar40 != 0 && puVar31 != (uint *)(ulong)uVar40)) {
              puVar41 = (uint *)((long)puVar31 - (long)(ulong)uVar40);
              if (((*puVar41 != 0) && (uVar40 = puVar41[1], uVar40 != 0)) &&
                 ((ulong)(ushort)puVar41[2] != 0)) {
                lVar24 = 0xc;
                if (*(char *)((long)puVar41 + 10) != '\0') {
                  lVar24 = 0x1c;
                }
                lVar24 = (long)puVar41 + lVar24 + (ulong)(ushort)puVar41[2] * 8;
                if (lVar24 != 0) {
                  uVar8 = 0;
                  if ((ulong)uVar40 != 0) {
                    uVar8 = (uint)((ulong)((long)puVar31 - lVar24) / (ulong)uVar40);
                  }
                  if (*puVar41 <= uVar8) {
                    uVar8 = 0xffffffff;
                  }
                  if (uVar8 < *(uint *)PTR_DAT_04bbbe48) {
                    uVar28 = *(ushort *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar8 * 2);
                    if ((uVar28 < 5) && (bVar10 = uVar28 == 4 | bVar10, uVar28 == 3)) {
                      if (uVar8 < *(uint *)PTR_DAT_04bbbe30) {
                        uVar28 = *(ushort *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar8 * 2)
                        ;
                        if (2 < uVar28) {
                          uVar28 = 0;
                        }
                      }
                      else {
                        uVar28 = 0;
                      }
                      bVar9 = uVar28 == 2 | bVar9;
                    }
                  }
                }
              }
            }
          }
          if (iVar22 < iVar46) {
            iVar22 = iVar22 + 1;
          }
          else {
            iVar33 = iVar33 + 1;
            iVar22 = iVar35;
          }
        } while ((iVar35 != iVar22) || (iVar47 + 1 != iVar33));
        if ((bool)(bVar10 & bVar9)) {
LAB_012f6b04:
          bVar18 = false;
          local_234 = 1;
          uVar19 = 4;
          goto LAB_012f6e04;
        }
      }
LAB_012f6b18:
      puVar4 = PTR_DAT_04bb2e18;
      local_1e0 = &PTR_LAB_0498d930;
      local_1d8 = (undefined **)0x0;
      local_1f0 = PTR_DAT_04bbc5b0 + 0x10;
      local_1e8 = PTR_DAT_04bbc5b8 + 0x10;
      local_1d0 = PTR_DAT_04bb2e18 + 0x10;
      memset(&local_1c8,0,0x128);
      FUN_0137c524(&local_1c0);
      puVar6 = PTR_DAT_04bb2018;
      local_90 = (undefined *)0x0;
      local_a0 = PTR_DAT_04bbc5d8 + 0x10;
      local_98 = PTR_DAT_04bb2018 + 0x10;
      local_80 = (undefined *)0x0;
      local_88 = local_98;
      FUN_0137c6ec(&local_1f0);
      local_1f0 = PTR_DAT_04bbc278 + 0x10;
      FUN_0137c6ec(&local_1f0);
      fVar49 = (float)*(int *)(param_1 + 0x6c) * 10.0 + 5.0 + -10.0;
      fVar48 = (float)*(int *)(param_1 + 0x68) * 10.0 + 5.0 + -10.0;
      iVar21 = (int)((float)(int)fVar48 / 10.0) - (uint)(fVar48 < 0.0);
      iVar45 = (int)((float)(int)fVar49 / 10.0) - (uint)(fVar49 < 0.0);
      local_90 = (undefined *)CONCAT44(iVar45,iVar21);
      local_1c8 = (undefined *)CONCAT44(iVar45,iVar21);
      local_80 = (undefined *)CONCAT44(iVar45 + 2,iVar21 + 2);
      FUN_0137cab0(&local_1f0);
      uVar23 = (ulong)local_210 >> 8;
      local_210 = (undefined **)CONCAT71((uint7)uVar23 & 0xffffff,1);
      uVar20 = FUN_012f7630(param_1,&local_210);
      iVar21 = FUN_012f88f0(param_1);
      local_210 = (undefined **)CONCAT44(local_210._4_4_,iVar21);
      if (iVar21 == 0) {
        if ((((uVar20 | uVar19 ^ 0xffffffff) & 1) == 0) &&
           (iVar21 = FUN_012ffbd4(&local_1f0,lVar26), iVar21 == 0)) {
          uVar19 = 1;
          bVar18 = true;
        }
        else {
          local_200 = puVar4 + 0x10;
          local_208 = local_208 & 0xffffffff00000000;
          local_210 = &PTR_LAB_0498d930;
          local_1f8 = (undefined *)0x0;
          FUN_012fa9b0(param_1,&local_210);
          local_230._1_7_ = (uint7)(local_230 >> 8) & 0xffffff;
          local_230 = (ulong)local_230._1_7_ << 8;
          uVar23 = FUN_012f7630(param_1,&local_230);
          if ((uVar23 & 1) == 0) {
            iVar21 = FUN_012ffbd4(&local_1f0,lVar26);
            local_230 = CONCAT44(local_230._4_4_,iVar21);
            if ((uVar20 & 1) == 0 && iVar21 == 0) {
              local_230 = param_1 + 0x78;
              lVar36 = param_1 + 0x88;
              local_220 = puVar6 + 0x10;
              iVar21 = *(int *)(param_1 + 0x94) + 1;
              iVar45 = *(int *)(param_1 + 0x80);
              local_218 = *(long *)(param_1 + 0x80);
              local_228 = lVar36;
              if (iVar21 != *(int *)(param_1 + 0x84)) {
                iVar22 = *(int *)(param_1 + 0x84);
                iVar33 = iVar45;
                do {
                  if ((int)local_1f8 <= iVar33 && iVar33 <= (int)local_1f8 + 3) {
                    if (local_1f8._4_4_ <= iVar22) {
                      if (iVar22 <= local_1f8._4_4_ + 3) {
                        if ((uint)(iVar33 - (int)local_1f8) < 3) {
                          if ((uint)(iVar22 - local_1f8._4_4_) < 3) {
                            if (((uint)local_208 >>
                                 (ulong)((iVar22 - local_1f8._4_4_) * 3 + (iVar33 - (int)local_1f8)
                                        & 0x1f) & 1) != 0) {
                              uVar23 = FUN_012ffd88(&local_1f0,&local_220);
                              if ((uVar23 & 1) != 0) {
                                bVar18 = false;
                                local_234 = 1;
                                uVar19 = 5;
                                goto LAB_012f6e04;
                              }
                              lVar36 = local_228;
                              iVar33 = (int)local_218;
                            }
                          }
                        }
                      }
                    }
                  }
                  if (iVar33 < *(int *)(lVar36 + 8)) {
                    iVar33 = iVar33 + 1;
                  }
                  else {
                    local_218._4_4_ = local_218._4_4_ + 1;
                    iVar33 = *(int *)(local_230 + 8);
                  }
                  local_218 = CONCAT44(local_218._4_4_,iVar33);
                  iVar22 = local_218._4_4_;
                } while (iVar45 != iVar33 || iVar21 != local_218._4_4_);
              }
              if (bVar18) {
                lVar36 = FUN_01300ee0(param_1 + 0x98,param_1 + 0x38);
                lVar27 = FUN_01300ee0(param_1 + 0x98,lVar26);
                local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,(uint)*(byte *)(lVar36 + 0xc));
                local_210 = (undefined **)CONCAT44(local_210._4_4_,(uint)*(byte *)(lVar27 + 0xc));
                if (*(byte *)(lVar36 + 0xc) == 4) {
                  local_1f0 = (undefined *)((ulong)(uint)local_1f0._4_4_ << 0x20);
                }
                if (*(byte *)(lVar27 + 0xc) == 4) {
                  local_210 = (undefined **)((ulong)local_210._4_4_ << 0x20);
                }
                if (((uint)local_1f0 <= (uint)local_210) && ((uint)local_1f0 != (uint)local_210))
                goto LAB_012f6df4;
                uVar23 = FUN_009773f0(lVar26);
                local_234 = 1;
                if ((uVar23 & 1) == 0) {
                  local_234 = 2;
                }
              }
              goto LAB_012f6e00;
            }
            uVar19 = 0;
            if (iVar21 == 0) {
              iVar21 = 1;
            }
          }
          else {
            uVar20 = 0xe;
            if (local_230._4_4_ != 2) {
              uVar20 = 1;
            }
            uVar19 = 0xf;
            if (local_230._4_4_ != 1) {
              uVar19 = uVar20;
            }
            iVar21 = 1;
          }
          bVar18 = false;
          local_234 = iVar21;
        }
      }
      else {
        if (iVar21 == 2) {
          uVar19 = 0xc;
        }
        else {
          uVar19 = 0xd;
        }
        bVar18 = false;
        local_234 = 1;
      }
    }
  }
  else {
    uVar23 = FUN_009773f0(lVar26);
    uVar19 = 1;
    bVar18 = false;
    local_234 = 1;
    if ((uVar23 & 1) == 0) {
      local_234 = 2;
    }
  }
LAB_012f6e04:
  puVar4 = PTR_DAT_04bbbde0;
  puVar6 = PTR_DAT_04bbbdd8;
  if (local_234 != 0) {
    *(int *)(param_2 + 0xc) = local_234;
    if (bVar17) {
      local_1f0._0_4_ = 1;
      uVar19 = (uint)local_1f0;
    }
    else if (0x11 < uVar19) {
      return;
    }
    *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 1 << (ulong)uVar19;
    return;
  }
  if (bVar18) {
    uVar29 = 0xb;
    goto LAB_012f731c;
  }
  sVar11 = *(short *)(param_1 + 0xd4);
  if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
    sVar11 = *(short *)(param_1 + 0xd8);
  }
  sVar12 = *(short *)(param_1 + 0xd6);
  if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
    sVar12 = *(short *)(param_1 + 0xda);
  }
  uVar19 = *(int *)(param_1 + 0x6c) - (int)sVar12;
  uVar20 = *(int *)(param_1 + 0x68) - (int)sVar11;
  puVar25 = (ushort *)(param_1 + 0xdc + (ulong)(uVar19 * 3 + uVar20) * 0xe);
  if (2 < uVar19 || 2 < uVar20) {
    puVar25 = (ushort *)PTR_DAT_04bbc2f8;
  }
  uVar19 = *(uint *)(param_1 + 0xa0);
  local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,uVar19);
  puVar7 = puVar25 + (ulong)uVar19 * 3;
  if (1 < uVar19) {
    puVar7 = puVar25;
  }
  lVar26 = *(long *)PTR_DAT_04bb27a8;
  uVar19 = (uint)*puVar7 - (uint)*(ushort *)(lVar26 + 0x408);
  if ((uVar19 < *(uint *)(lVar26 + 1000)) &&
     (puVar31 = *(uint **)(*(long *)(lVar26 + 0x3f0) + (long)(int)uVar19 * 8),
     puVar31 != (uint *)0x0)) {
    bVar9 = (byte)puVar25[6];
    uVar19 = *puVar31;
    if (uVar19 != 0) {
      cVar39 = *PTR_DAT_04bbbdd8;
      do {
        if (cVar39 == '\0') {
          cVar39 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar4 + 0xa0) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
          uVar19 = *puVar31;
        }
        else {
          uVar20 = *(uint *)(puVar4 + 0xa4);
          if (-1 < (int)uVar20) {
            puVar43 = (undefined8 *)((ulong)uVar20 + (long)puVar31);
            goto LAB_012f7008;
          }
          if (uVar20 != 0xffffffff) break;
        }
        puVar41 = (uint *)(ulong)uVar19;
        puVar43 = (undefined8 *)0x0;
        if ((puVar41 == (uint *)0x0) || (puVar31 == puVar41)) goto LAB_012f7008;
        lVar26 = 0xc;
        if (*(char *)((long)puVar31 + (10 - (long)puVar41)) != '\0') {
          lVar26 = 0x1c;
        }
        lVar26 = (long)puVar31 + (lVar26 - (long)puVar41);
        puVar43 = (undefined8 *)0x0;
        if (lVar26 == 0) goto LAB_012f7008;
        uVar23 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar41));
        *(undefined4 *)(puVar4 + 0xa4) = 0xfffffffe;
        if (uVar23 == 0) break;
        piVar38 = (int *)(lVar26 + 4);
        while (piVar38[-1] != 0x39b5a93d) {
          piVar38 = piVar38 + 2;
          uVar23 = uVar23 - 1;
          if (uVar23 == 0) goto LAB_012f7004;
        }
        iVar21 = 0;
        if (*piVar38 != -1) {
          iVar21 = *piVar38;
        }
        *(int *)(puVar4 + 0xa4) = iVar21;
        uVar19 = *puVar31;
        if (uVar19 == 0) break;
      } while( true );
    }
LAB_012f7004:
    puVar43 = (undefined8 *)0x0;
LAB_012f7008:
    puVar34 = *(undefined8 **)PTR_PTR_04bbc340;
    if (puVar43 != (undefined8 *)0x0) {
      puVar34 = puVar43;
    }
  }
  else {
    bVar9 = (byte)puVar25[6];
    puVar34 = &DAT_0407ebb1;
  }
  local_210 = (undefined **)CONCAT44(local_210._4_4_,(uint)bVar9);
  iVar21 = FUN_006bd550(puVar34,0);
  puVar6 = PTR_DAT_04bbbde0;
  if (iVar21 == -0x115bcd1c) {
    iVar33 = *(int *)(param_1 + 0x80);
    iVar45 = *(int *)(param_1 + 0x84);
    iVar21 = *(int *)(param_1 + 0x94) + 1;
    iVar22 = *(int *)(param_1 + 0x68);
    iVar35 = *(int *)(param_1 + 0x6c);
    if ((iVar33 == iVar22) && (iVar21 == iVar35)) {
      if (*(int *)(param_1 + 0x90) <= iVar33) {
        iVar21 = *(int *)(param_1 + 0x94) + 2;
        goto LAB_012f7080;
      }
      iVar46 = iVar33 + 1;
    }
    else {
LAB_012f7080:
      iVar46 = iVar33;
      if (iVar21 == iVar45) goto LAB_012f7318;
    }
    iVar47 = 0;
    iVar44 = iVar33;
    do {
      if ((iVar44 == iVar22) || (iVar45 == iVar35)) {
        sVar11 = *(short *)(param_1 + 0xd4);
        if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
          sVar11 = *(short *)(param_1 + 0xd8);
        }
        sVar12 = *(short *)(param_1 + 0xd6);
        if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
          sVar12 = *(short *)(param_1 + 0xda);
        }
        puVar25 = (ushort *)
                  (param_1 + 0xdc + (ulong)(uint)((iVar45 - sVar12) * 3 + (iVar44 - sVar11)) * 0xe);
        if (2 < (uint)(iVar45 - sVar12) || 2 < (uint)(iVar44 - sVar11)) {
          puVar25 = (ushort *)PTR_DAT_04bbc2f8;
        }
        local_230 = CONCAT44(local_230._4_4_,(uint)(byte)puVar25[6]);
        if ((byte)puVar25[6] == (uint)local_210) {
          uVar19 = *(uint *)(param_1 + 0xa0);
          puVar34 = &DAT_0407ebb1;
          local_1f0 = (undefined *)CONCAT44(local_1f0._4_4_,uVar19);
          puVar7 = puVar25 + (ulong)uVar19 * 3;
          if (1 < uVar19) {
            puVar7 = puVar25;
          }
          lVar26 = *(long *)PTR_DAT_04bb27a8;
          uVar19 = (uint)*puVar7 - (uint)*(ushort *)(lVar26 + 0x408);
          if ((uVar19 < *(uint *)(lVar26 + 1000)) &&
             (puVar31 = *(uint **)(*(long *)(lVar26 + 0x3f0) + (long)(int)uVar19 * 8),
             puVar31 != (uint *)0x0)) {
            uVar19 = *puVar31;
            if (uVar19 != 0) {
              cVar39 = *PTR_DAT_04bbbdd8;
              do {
                puVar4 = PTR_DAT_04bbbdd8;
                if (cVar39 == '\0') {
                  cVar39 = '\x01';
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0xa0) = 0xffffffffffffffff;
                  *puVar4 = 1;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
                  uVar19 = *puVar31;
                }
                else {
                  uVar20 = *(uint *)(puVar6 + 0xa4);
                  if (-1 < (int)uVar20) {
                    puVar43 = (undefined8 *)((ulong)uVar20 + (long)puVar31);
                    goto LAB_012f7288;
                  }
                  if (uVar20 != 0xffffffff) break;
                }
                puVar41 = (uint *)(ulong)uVar19;
                puVar43 = (undefined8 *)0x0;
                if ((puVar41 == (uint *)0x0) || (puVar43 = (undefined8 *)0x0, puVar31 == puVar41))
                goto LAB_012f7288;
                lVar26 = 0xc;
                if (*(char *)((long)puVar31 + (10 - (long)puVar41)) != '\0') {
                  lVar26 = 0x1c;
                }
                lVar26 = (long)puVar31 + (lVar26 - (long)puVar41);
                puVar43 = (undefined8 *)0x0;
                if (lVar26 == 0) goto LAB_012f7288;
                uVar23 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar41));
                *(undefined4 *)(puVar6 + 0xa4) = 0xfffffffe;
                if (uVar23 == 0) break;
                piVar38 = (int *)(lVar26 + 4);
                while (piVar38[-1] != 0x39b5a93d) {
                  piVar38 = piVar38 + 2;
                  uVar23 = uVar23 - 1;
                  if (uVar23 == 0) goto LAB_012f7284;
                }
                iVar33 = 0;
                if (*piVar38 != -1) {
                  iVar33 = *piVar38;
                }
                *(int *)(puVar6 + 0xa4) = iVar33;
                uVar19 = *puVar31;
                if (uVar19 == 0) break;
              } while( true );
            }
LAB_012f7284:
            puVar43 = (undefined8 *)0x0;
LAB_012f7288:
            puVar34 = *(undefined8 **)PTR_PTR_04bbc340;
            if (puVar43 != (undefined8 *)0x0) {
              puVar34 = puVar43;
            }
          }
          iVar22 = FUN_006bd550(puVar34,0);
          iVar33 = *(int *)(param_1 + 0x80);
          if (iVar22 == -0x1a000dd9) {
            iVar47 = iVar47 + 1;
          }
          iVar22 = *(int *)(param_1 + 0x68);
          iVar35 = *(int *)(param_1 + 0x6c);
        }
      }
      if (iVar44 < *(int *)(param_1 + 0x90)) {
        iVar44 = iVar44 + 1;
      }
      else {
        iVar45 = iVar45 + 1;
        iVar44 = iVar33;
      }
      if ((iVar44 == iVar22) && (iVar45 == iVar35)) {
        if (iVar22 < *(int *)(param_1 + 0x90)) {
          iVar44 = iVar22 + 1;
          iVar45 = iVar35;
        }
        else {
          iVar45 = iVar35 + 1;
          iVar44 = iVar33;
        }
      }
    } while ((iVar46 != iVar44) || (iVar21 != iVar45));
    if (iVar47 == 1) {
      uVar29 = 8;
      goto LAB_012f731c;
    }
  }
LAB_012f7318:
  uVar29 = 7;
LAB_012f731c:
  *(undefined4 *)(param_2 + 8) = uVar29;
  return;
}

