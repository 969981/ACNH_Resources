
/* WARNING: Removing unreachable block (ram,0x0168099c) */
/* WARNING: Removing unreachable block (ram,0x01680978) */

void FUN_016804e0(long param_1)

{
  uint uVar1;
  void *__s;
  void *__s_00;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined8 *puVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  uint local_90;
  uint local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  byte local_78;
  short local_68 [4];
  
  __s = (void *)(param_1 + 8);
  memset(__s,0,0x4000);
  memset((void *)(param_1 + 0x4010),0,0x4000);
  memset((void *)(param_1 + 0x8018),0,0x4000);
  memset((void *)(param_1 + 0xc020),0,0x4000);
  memset((void *)(param_1 + 0x10028),0,0x4000);
  memset((void *)(param_1 + 0x14030),0,0x1000);
  memset((void *)(param_1 + 0x15038),0,0x1000);
  memset((void *)(param_1 + 0x16040),0,0x1000);
  memset((void *)(param_1 + 0x17048),0,0x1000);
  memset((void *)(param_1 + 0x18050),0,0x1000);
  memset((void *)(param_1 + 0x19058),0,0x1000);
  memset((void *)(param_1 + 0x1a060),0,0x1000);
  memset((void *)(param_1 + 0x1b068),0,0x1000);
  memset((void *)(param_1 + 0x1c070),0,0x1000);
  memset((void *)(param_1 + 0x1d078),0,0x1000);
  memset((void *)(param_1 + 0x1e080),0,0x1000);
  memset((void *)(param_1 + 0x1f088),0,0x1000);
  memset((void *)(param_1 + 0x20090),0,0x1000);
  memset((void *)(param_1 + 0x21098),0,0x1000);
  memset((void *)(param_1 + 0x220a0),0,0x1000);
  memset((void *)(param_1 + 0x230a8),0,0x1000);
  memset((void *)(param_1 + 0x240b0),0,0x1000);
  memset((void *)(param_1 + 0x250b8),0,0x1000);
  memset((void *)(param_1 + 0x260c0),0,0x1000);
  __s_00 = (void *)(param_1 + 0x270c8);
  memset(__s_00,0,0x1000);
  memset((void *)(param_1 + 0x280d0),0,0x1000);
  memset((void *)(param_1 + 0x290d8),0,0x1000);
  memset((void *)(param_1 + 0x2a0e0),0,0x1000);
  memset((void *)(param_1 + 0x2b0e8),0,0x1000);
  memset((void *)(param_1 + 0x2c0f0),0,0x1000);
  memset((void *)(param_1 + 0x2d0f8),0,0x1000);
  memset((void *)(param_1 + 0x2e100),0,0x1000);
  memset((void *)(param_1 + 0x2f108),0,0x1000);
  memset((void *)(param_1 + 0x30110),0,0x1000);
  *(undefined1 *)(param_1 + 0x321a0) = 0;
  memset((void *)(param_1 + 0x31118),0,0x1058);
  *(undefined1 *)(param_1 + 0x321a1) = 0;
  DAT_052338a0 = 3;
  DAT_052338a4 = 9;
  *(undefined8 *)(param_1 + 0x32170) = 0;
  *(undefined8 *)(param_1 + 0x32178) = 0;
  *(undefined8 *)(param_1 + 0x32180) = 0;
  *(undefined8 *)(param_1 + 0x32188) = 0;
  *(undefined8 *)(param_1 + 0x32190) = 0;
  *(undefined8 *)(param_1 + 0x32198) = 0;
  uStack_7c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
  local_80 = 1;
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  local_88 = PTR_DAT_04bb6268 + 0x10;
  lVar14 = FUN_01a4fa00(&local_88);
  uVar1 = *(int *)(lVar14 + 0x24) + 1;
  uVar22 = *(uint *)(lVar14 + 0x14);
  if (uVar1 != uVar22) {
    uVar5 = *(uint *)(lVar14 + 0x10);
    iVar6 = *(int *)(lVar14 + 0x20);
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    uVar23 = uVar22;
    uVar24 = uVar5;
    do {
      local_98 = puVar2;
      local_90 = uVar24;
      local_8c = uVar23;
      if (((((int)uVar24 < DAT_05233970 || DAT_05233980 < (int)uVar24) ||
           (uVar17 = uVar24 + uVar23 * 0x200,
           ((int)uVar23 < DAT_05233974 || DAT_05233984 < (int)uVar23) || uVar17 >> 0x11 != 0)) ||
          ((*(uint *)((long)__s + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar24 & 0x1f) & 1) == 0)) &&
         (uVar15 = FUN_0097ce60(&local_98), iVar16 = DAT_05233980, iVar13 = DAT_05233970,
         (uVar15 & 1) == 0)) {
        if (((local_90 | local_8c) & 1) == 0) {
          fVar26 = (float)(int)local_90 * 0.5;
          fVar25 = (float)(int)local_8c * 0.5;
          uVar17 = 0;
          if (fVar26 != (float)(int)fVar26) {
            uVar17 = (uint)(fVar26 < 0.0);
          }
          uVar18 = 0;
          if (fVar25 != (float)(int)fVar25) {
            uVar18 = (uint)(fVar25 < 0.0);
          }
          local_d0 = (undefined *)CONCAT44(local_d0._4_4_,1);
          if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
            iVar19 = 0;
          }
          else {
            lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
            iVar19 = 0;
            if (lVar14 != 0) {
              uVar20 = ((int)fVar26 - uVar17) - *(int *)(lVar14 + 0x28);
              uVar4 = *(uint *)(lVar14 + 0x18);
              uVar7 = ((int)fVar25 - uVar18) - *(int *)(lVar14 + 0x2c);
              if ((uVar20 < uVar4 && uVar7 <= *(uint *)(lVar14 + 0x1c)) &&
                  (uVar4 <= uVar20 || *(uint *)(lVar14 + 0x1c) != uVar7)) {
                uVar20 = uVar20 + uVar4 * uVar7;
LAB_01680a1c:
                if (*(uint *)(lVar14 + 0x30) <= uVar20) {
                  uVar20 = 0;
                }
                puVar21 = (undefined8 *)(*(long *)(lVar14 + 0x38) + (long)(int)uVar20 * 0x68);
              }
              else if (*(char *)(lVar14 + 0x88) == '\0') {
                puVar21 = &DAT_051a50f0;
              }
              else {
                uVar17 = ((int)fVar26 - uVar17) - *(int *)(lVar14 + 0x98);
                uVar18 = ((int)fVar25 - uVar18) - *(int *)(lVar14 + 0x9c);
                puVar21 = &DAT_051a50f0;
                if (uVar17 < *(uint *)(lVar14 + 0xa0) && uVar18 < *(uint *)(lVar14 + 0xa4)) {
                  uVar20 = uVar17 + *(uint *)(lVar14 + 0xa0) * uVar18 + *(int *)(lVar14 + 0x8c);
                  goto LAB_01680a1c;
                }
              }
              iVar19 = (int)*(char *)(puVar21 + 2);
            }
          }
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar19);
          if (iVar19 == 2) goto LAB_01680a54;
          bVar8 = (int)local_90 < DAT_05233970;
          bVar9 = DAT_05233980 < (int)local_90;
          if ((DAT_05233970 <= (int)local_90 && (int)local_90 <= DAT_05233980) &&
             (((DAT_05233974 <= (int)local_8c && ((int)local_8c <= DAT_05233984)) &&
              (uVar17 = local_90 + local_8c * 0x200, uVar17 >> 0x11 == 0)))) {
            lVar14 = (ulong)(uVar17 >> 5) * 4;
            *(uint *)((long)__s + lVar14) =
                 *(uint *)((long)__s + lVar14) | 1 << (ulong)(local_90 & 0x1f);
          }
          iVar10 = DAT_05233984;
          iVar19 = DAT_05233974;
          uVar17 = local_90 + 1;
          if ((iVar13 <= (int)uVar17) && ((int)local_90 < iVar16)) {
            if ((DAT_05233974 <= (int)local_8c) &&
               (((int)local_8c <= DAT_05233984 &&
                (uVar18 = uVar17 + local_8c * 0x200, uVar18 >> 0x11 == 0)))) {
              lVar14 = (ulong)(uVar18 >> 5) * 4;
              *(uint *)((long)__s + lVar14) =
                   *(uint *)((long)__s + lVar14) | 1 << (ulong)(uVar17 & 0x1f);
            }
            if (((iVar19 <= (int)(local_8c + 1)) && ((int)local_8c < iVar10)) &&
               (uVar18 = uVar17 + (local_8c + 1) * 0x200, uVar18 >> 0x11 == 0)) {
              lVar14 = (ulong)(uVar18 >> 5) * 4;
              *(uint *)((long)__s + lVar14) =
                   *(uint *)((long)__s + lVar14) | 1 << (ulong)(uVar17 & 0x1f);
            }
          }
          iVar13 = local_8c + 1;
          if (((bVar8 || bVar9) || (iVar13 < DAT_05233974)) ||
             ((DAT_05233984 < iVar13 || (uVar17 = local_90 + iVar13 * 0x200, uVar17 >> 0x11 != 0))))
          goto LAB_016808d8;
LAB_01680ce8:
          lVar14 = (ulong)(uVar17 >> 5) * 4;
          *(uint *)((long)__s + lVar14) =
               *(uint *)((long)__s + lVar14) | 1 << (ulong)(local_90 & 0x1f);
        }
        else {
LAB_01680a54:
          local_a8 = PTR_DAT_04bb2010 + 0x10;
          local_a0 = 0;
          FUN_01a5033c(local_68,&local_88,0,&local_98,&local_a8);
          if (local_68[0] == -2) {
            uVar15 = FUN_01675460(&local_98,0);
            if (((uVar15 & 1) != 0) &&
               ((((DAT_05233970 <= (int)local_90 && ((int)local_90 <= DAT_05233980)) &&
                 (DAT_05233974 <= (int)local_8c)) &&
                (((int)local_8c <= DAT_05233984 &&
                 (uVar17 = local_90 + local_8c * 0x200, uVar17 >> 0x11 == 0)))))) goto LAB_01680ce8;
          }
          else {
            iVar13 = FUN_0277ebd0(local_68);
            local_d0 = (undefined *)CONCAT44(local_d0._4_4_,iVar13);
            if (iVar13 != 0) {
              local_c0 = 0;
              puStack_c8 = PTR_DAT_04bb2010 + 0x10;
              local_b0 = 0;
              local_d0 = puVar3;
              local_b8 = puStack_c8;
              FUN_0277f02c(local_68,&local_d0);
              iVar12 = DAT_05233984;
              iVar11 = DAT_05233980;
              iVar10 = DAT_05233974;
              iVar19 = DAT_05233970;
              iVar16 = local_c0._4_4_ + local_a0._4_4_;
              iVar13 = local_b0._4_4_ + local_a0._4_4_ + 1;
              if (iVar13 != iVar16) {
                uVar17 = (uint)local_c0 + (int)local_a0;
                uVar18 = uVar17;
                do {
                  if (((iVar19 <= (int)uVar18) && ((int)uVar18 <= iVar11)) &&
                     ((iVar10 <= iVar16 &&
                      ((iVar16 <= iVar12 && (uVar20 = uVar18 + iVar16 * 0x200, uVar20 >> 0x11 == 0))
                      )))) {
                    lVar14 = (ulong)(uVar20 >> 5) * 4;
                    *(uint *)((long)__s + lVar14) =
                         *(uint *)((long)__s + lVar14) | 1 << (ulong)(uVar18 & 0x1f);
                  }
                  if ((int)uVar18 < (int)local_b0 + (int)local_a0) {
                    uVar18 = uVar18 + 1;
                  }
                  else {
                    iVar16 = iVar16 + 1;
                    uVar18 = uVar17;
                  }
                } while ((uVar17 != uVar18) || (iVar13 != iVar16));
              }
            }
          }
        }
      }
LAB_016808d8:
      if ((int)uVar24 < iVar6) {
        uVar24 = uVar24 + 1;
      }
      else {
        uVar23 = uVar23 + 1;
        uVar24 = uVar5;
      }
    } while ((uVar5 != uVar24) || (uVar1 != uVar23));
    if (uVar1 != uVar22) {
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      puVar3 = PTR_DAT_04bb2010 + 0x10;
      uVar23 = uVar5;
      do {
        if (((uVar23 | uVar22) & 1) == 0) {
          local_b0._0_4_ = uVar23 + 5;
          local_b0._4_4_ = uVar22 + 5;
          local_d0 = puVar2;
          puStack_c8 = puVar3;
          local_b8 = puVar3;
          local_c0._0_4_ = uVar23;
          local_c0._4_4_ = uVar22;
          uVar15 = FUN_0097d8e0(&local_d0);
          if ((uVar15 & 1) != 0) {
            if (local_b0._4_4_ + 1U != local_c0._4_4_) {
              uVar24 = (uint)local_c0;
              do {
                if ((((DAT_05233970 <= (int)uVar24) && ((int)uVar24 <= DAT_05233980)) &&
                    (DAT_05233974 <= (int)local_c0._4_4_)) &&
                   ((((int)local_c0._4_4_ <= DAT_05233984 &&
                     (uVar17 = uVar24 + local_c0._4_4_ * 0x200, uVar17 >> 0x11 == 0)) &&
                    ((*(uint *)((long)__s + (ulong)(uVar17 >> 5) * 4) >> (ulong)(uVar24 & 0x1f) & 1)
                     != 0)))) goto LAB_01680e50;
                if ((int)uVar24 < (int)local_b0) {
                  uVar24 = uVar24 + 1;
                }
                else {
                  local_c0._4_4_ = local_c0._4_4_ + 1;
                  uVar24 = (uint)local_c0;
                }
              } while (((uint)local_c0 != uVar24) || (local_b0._4_4_ + 1U != local_c0._4_4_));
            }
            uVar24 = uVar23 + 2;
            if ((DAT_05233970 <= (int)uVar24) &&
               (((((int)uVar24 <= DAT_05233980 && (iVar13 = uVar22 + 2, DAT_05233974 <= iVar13)) &&
                 (iVar13 <= DAT_05233984)) &&
                (uVar17 = (iVar13 * 0x80 & 0xffffff00U) + ((int)uVar24 >> 1), uVar17 >> 0xf == 0))))
            {
              lVar14 = (ulong)(uVar17 >> 5) * 4;
              *(uint *)((long)__s_00 + lVar14) =
                   *(uint *)((long)__s_00 + lVar14) | 1 << (ulong)(uVar24 >> 1 & 0x1f);
            }
          }
        }
LAB_01680e50:
        if ((int)uVar23 < iVar6) {
          uVar23 = uVar23 + 1;
        }
        else {
          uVar22 = uVar22 + 1;
          uVar23 = uVar5;
        }
      } while ((uVar5 != uVar23) || (uVar1 != uVar22));
    }
  }
  return;
}

