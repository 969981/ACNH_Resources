
/* WARNING (jumptable): Heritage AFTER dead removal. Revisit: 0xfffffffffffffe60 */
/* WARNING: Removing unreachable block (ram,0x01380050) */
/* WARNING: Removing unreachable block (ram,0x0137f9d8) */
/* WARNING: Removing unreachable block (ram,0x0137f5a4) */
/* WARNING: Removing unreachable block (ram,0x0137e148) */
/* WARNING: Removing unreachable block (ram,0x0137dfcc) */
/* WARNING: Removing unreachable block (ram,0x0137df24) */
/* WARNING: Removing unreachable block (ram,0x0137dc98) */
/* WARNING: Removing unreachable block (ram,0x0137de3c) */
/* WARNING: Removing unreachable block (ram,0x0137dfa8) */
/* WARNING: Removing unreachable block (ram,0x0137e0c4) */
/* WARNING: Removing unreachable block (ram,0x0137e168) */
/* WARNING: Removing unreachable block (ram,0x0137f6c4) */
/* WARNING: Removing unreachable block (ram,0x0137fd64) */
/* WARNING: Removing unreachable block (ram,0x01380860) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff46 : 0x0137de40 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0137dbc0(long param_1,long *param_2)

{
  short *psVar1;
  ushort uVar2;
  short sVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  undefined1 uVar12;
  char cVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long lVar19;
  int *piVar20;
  undefined **ppuVar21;
  ulong uVar22;
  bool bVar23;
  undefined2 uVar24;
  undefined4 uVar25;
  char *pcVar26;
  long lVar27;
  long *plVar28;
  int iVar29;
  undefined1 uVar30;
  uint uVar31;
  uint *puVar32;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  uint *puVar36;
  ulong uVar37;
  uint uVar38;
  int iVar39;
  long lVar40;
  undefined8 *puVar41;
  undefined8 uVar42;
  undefined *puVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined *puStack_1b0;
  int local_1a8;
  int local_1a4;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined1 local_10d;
  undefined **local_108;
  undefined8 local_100;
  undefined *local_f8;
  int local_f0;
  int local_ec;
  undefined **local_e8;
  undefined8 local_e0;
  undefined **local_d8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  float local_90;
  undefined8 local_78;
  
  puVar43 = PTR_DAT_04bb2018;
  if (*param_2 == 0) {
    return;
  }
  sVar3 = *(short *)(param_1 + 8);
  sVar4 = *(short *)(param_1 + 10);
  local_1a8 = (int)sVar3;
  local_1a4 = (int)sVar4;
  uVar16 = *(uint *)(param_1 + 0xc);
  puStack_1b0 = PTR_DAT_04bb2018 + 0x10;
  uVar14 = uVar16 & 0xffffffe8;
  *(uint *)(param_1 + 0xc) = uVar14;
  lVar40 = *param_2;
  if ((uVar16 >> 0x16 & 1) == 0) {
    if (lVar40 != 0) {
      lVar19 = *(long *)(lVar40 + 0xa8);
      if ((((lVar19 != 0) &&
           ((*(int *)(lVar19 + 0x18) == (int)sVar3 || *(int *)(lVar19 + 0x18) < local_1a8) &&
            (int)sVar3 <= *(int *)(lVar19 + 0x28))) &&
          (*(int *)(lVar19 + 0x1c) == (int)sVar4 || *(int *)(lVar19 + 0x1c) < local_1a4)) &&
         ((int)sVar4 <= *(int *)(lVar19 + 0x2c))) {
        FUN_01309ec4(&local_c0,lVar19,&puStack_1b0);
        *(undefined1 *)(param_1 + 0x10) = local_b8._4_1_;
        lVar40 = *(long *)PTR_DAT_04bb27a8;
        uVar2 = *(ushort *)(lVar40 + 0x408);
        uVar14 = *(uint *)(lVar40 + 1000);
        if ((uVar14 <= (uint)(ushort)local_c0 - (uint)uVar2) ||
           (puVar32 = *(uint **)(*(long *)(lVar40 + 0x3f0) +
                                (long)(int)((uint)(ushort)local_c0 - (uint)uVar2) * 8),
           puVar32 == (uint *)0x0)) goto LAB_0137de08;
        uVar16 = *puVar32;
        uVar17 = 4;
        if ((uVar16 == 0) || (puVar32 == (uint *)(ulong)uVar16)) {
LAB_0137de0c:
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | uVar17;
          uVar2 = *(ushort *)(lVar40 + 0x408);
          uVar14 = *(uint *)(lVar40 + 1000);
        }
        else {
          puVar36 = (uint *)((long)puVar32 - (long)(ulong)uVar16);
          uVar16 = *puVar36;
          if (((uVar16 == 0) || (uVar34 = (ulong)puVar36[1], puVar36[1] == 0)) ||
             (uVar37 = (ulong)(ushort)puVar36[2], uVar37 == 0)) {
LAB_0137de08:
            uVar17 = 4;
            goto LAB_0137de0c;
          }
          lVar19 = 0xc;
          if (*(char *)((long)puVar36 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar36 + lVar19 + uVar37 * 8;
          if (lVar19 != 0) {
            uVar17 = 0;
            if (uVar34 != 0) {
              uVar17 = (uint)((ulong)((long)puVar32 - lVar19) / uVar34);
            }
            if (uVar16 <= uVar17) {
              uVar17 = 0xffffffff;
            }
            if ((uVar17 < *(uint *)PTR_DAT_04bbbe48) &&
               (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar17 * 2) == 1)) {
              uVar17 = 1;
              goto LAB_0137de0c;
            }
          }
          lVar19 = 0xc;
          if (*(char *)((long)puVar36 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar36 + lVar19 + uVar37 * 8;
          if (lVar19 != 0) {
            uVar17 = 0;
            if (uVar34 != 0) {
              uVar17 = (uint)((ulong)((long)puVar32 - lVar19) / uVar34);
            }
            if (uVar16 <= uVar17) {
              uVar17 = 0xffffffff;
            }
            if ((uVar17 < *(uint *)PTR_DAT_04bbbe48) &&
               (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar17 * 2) == 4)) {
              uVar17 = 2;
              goto LAB_0137de0c;
            }
          }
          lVar19 = 0xc;
          if (*(char *)((long)puVar36 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar36 + lVar19 + uVar37 * 8;
          if (lVar19 == 0) goto LAB_0137de08;
          uVar17 = 0;
          if (uVar34 != 0) {
            uVar17 = (uint)((ulong)((long)puVar32 - lVar19) / uVar34);
          }
          if (uVar16 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((*(uint *)PTR_DAT_04bbbe48 <= uVar17) ||
             ((ushort)(*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar17 * 2) - 5U) <
              0xfffc)) goto LAB_0137de08;
        }
        uVar16 = (uint)uVar2;
        local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,1);
        if (((((uint)local_c0._6_2_ - (uint)uVar2 < uVar14) &&
             (puVar32 = *(uint **)(*(long *)(lVar40 + 0x3f0) +
                                  (long)(int)((uint)local_c0._6_2_ - (uint)uVar2) * 8),
             puVar32 != (uint *)0x0)) && (uVar17 = *puVar32, uVar17 != 0)) &&
           (puVar32 != (uint *)(ulong)uVar17)) {
          puVar36 = (uint *)((long)puVar32 - (long)(ulong)uVar17);
          if (((*puVar36 != 0) && (uVar17 = puVar36[1], uVar17 != 0)) &&
             ((ulong)(ushort)puVar36[2] != 0)) {
            lVar19 = 0xc;
            if (*(char *)((long)puVar36 + 10) != '\0') {
              lVar19 = 0x1c;
            }
            lVar19 = (long)puVar36 + lVar19 + (ulong)(ushort)puVar36[2] * 8;
            if (lVar19 != 0) {
              uVar33 = 0;
              if ((ulong)uVar17 != 0) {
                uVar33 = (uint)((ulong)((long)puVar32 - lVar19) / (ulong)uVar17);
              }
              if (*puVar36 <= uVar33) {
                uVar33 = 0xffffffff;
              }
              if ((uVar33 < *(uint *)PTR_DAT_04bbbe48) &&
                 (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar33 * 2) == 2)) {
                *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10;
                uVar16 = (uint)*(ushort *)(lVar40 + 0x408);
                uVar14 = *(uint *)(lVar40 + 1000);
              }
            }
          }
        }
        puVar9 = PTR_DAT_04bb2d88;
        local_e8 = (undefined **)((ulong)local_e8 & 0xffffffff00000000);
        local_10d = 0;
        local_190._4_4_ = (uint)((ulong)local_190 >> 0x20) & 0xffffff00;
        local_190 = (undefined *)CONCAT44(local_190._4_4_,0x80);
        local_1a0 = (undefined **)(PTR_DAT_04bb2d88 + 0x10);
        local_198 = (char *)((long)&local_190 + 4);
        if (((ushort)local_c0 - uVar16 < uVar14) &&
           (lVar40 = *(long *)(*(long *)(lVar40 + 0x3f0) +
                              (long)(int)((ushort)local_c0 - uVar16) * 8), lVar40 != 0)) {
          lVar19 = FUN_012763b0(lVar40,0x29,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc338);
          lVar40 = *(long *)PTR_PTR_04bbc340;
          if (lVar19 != 0) {
            lVar40 = lVar19;
          }
          FUN_038d1270(&local_1a0,"%s_%d",lVar40,local_c0._2_2_);
        }
        local_108 = (undefined **)CONCAT44(local_108._4_4_,(uint)local_c0._4_1_);
        uVar34 = (ulong)local_e8 & 0xffffffff;
        if (1 < (uint)local_e8) {
          uVar34 = 0;
        }
        *(byte *)(param_1 + 0x1c + uVar34) = local_c0._4_1_;
        lVar40 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0xd0);
        if (lVar40 != 0) {
          (**(code **)((long)local_1a0 + 0x18))(&local_1a0);
          uVar14 = FUN_006bd550(local_198,0);
          lVar40 = *(long *)(lVar40 + 0x520);
          if (lVar40 == 0) {
LAB_0137e07c:
            uVar25 = 0xffffffff;
          }
          else {
            uVar25 = 0xffffffff;
            do {
              while (uVar14 < *(uint *)(lVar40 + 0x30)) {
                lVar40 = *(long *)(lVar40 + 8);
                if (lVar40 == 0) goto LAB_0137e080;
              }
              if (uVar14 <= *(uint *)(lVar40 + 0x30)) {
                if (((*(long *)(lVar40 + 0x38) == 0) ||
                    (lVar40 = *(long *)(*(long *)(lVar40 + 0x38) + 0x18), lVar40 == 0)) ||
                   (lVar40 = *(long *)(lVar40 + 0x70), lVar40 == 0)) goto LAB_0137e07c;
                uVar25 = *(undefined4 *)(lVar40 + 4);
                break;
              }
              lVar40 = *(long *)(lVar40 + 0x10);
            } while (lVar40 != 0);
          }
LAB_0137e080:
          uVar34 = (ulong)local_e8 & 0xffffffff;
          if (1 < (uint)local_e8) {
            uVar34 = 0;
          }
          *(undefined4 *)(param_1 + 0x14 + uVar34 * 4) = uVar25;
        }
        local_e8 = (undefined **)CONCAT44(local_e8._4_4_,1);
        local_10d = 0;
        local_190 = (undefined *)CONCAT35(local_190._5_3_,0x80);
        local_1a0 = (undefined **)(puVar9 + 0x10);
        local_198 = (char *)((long)&local_190 + 4);
        lVar40 = *(long *)PTR_DAT_04bb27a8;
        uVar14 = (uint)local_c0._6_2_ - (uint)*(ushort *)(lVar40 + 0x408);
        if ((uVar14 < *(uint *)(lVar40 + 1000)) &&
           (lVar40 = *(long *)(*(long *)(lVar40 + 0x3f0) + (long)(int)uVar14 * 8), lVar40 != 0)) {
          lVar19 = FUN_012763b0(lVar40,0x29,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc338);
          lVar40 = *(long *)PTR_PTR_04bbc340;
          if (lVar19 != 0) {
            lVar40 = lVar19;
          }
          FUN_038d1270(&local_1a0,"%s_%d",lVar40,(undefined2)local_b8);
        }
        local_108 = (undefined **)CONCAT44(local_108._4_4_,(uint)local_b8._2_1_);
        uVar34 = (ulong)local_e8 & 0xffffffff;
        if (1 < (uint)local_e8) {
          uVar34 = 0;
        }
        *(byte *)(param_1 + 0x1c + uVar34) = local_b8._2_1_;
        lVar40 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0xd0);
        if (lVar40 != 0) {
          (*(code *)local_1a0[3])(&local_1a0);
          uVar14 = FUN_006bd550(local_198,0);
          lVar40 = *(long *)(lVar40 + 0x520);
          if (lVar40 == 0) {
LAB_0137e218:
            uVar25 = 0xffffffff;
          }
          else {
            uVar25 = 0xffffffff;
            do {
              while (uVar14 < *(uint *)(lVar40 + 0x30)) {
                lVar40 = *(long *)(lVar40 + 8);
                if (lVar40 == 0) goto LAB_0137e21c;
              }
              if (uVar14 <= *(uint *)(lVar40 + 0x30)) {
                if (((*(long *)(lVar40 + 0x38) == 0) ||
                    (lVar40 = *(long *)(*(long *)(lVar40 + 0x38) + 0x18), lVar40 == 0)) ||
                   (lVar40 = *(long *)(lVar40 + 0x70), lVar40 == 0)) goto LAB_0137e218;
                uVar25 = *(undefined4 *)(lVar40 + 4);
                break;
              }
              lVar40 = *(long *)(lVar40 + 0x10);
            } while (lVar40 != 0);
          }
LAB_0137e21c:
          uVar34 = (ulong)local_e8 & 0xffffffff;
          if (1 < (uint)local_e8) {
            uVar34 = 0;
          }
          *(undefined4 *)(param_1 + 0x14 + uVar34 * 4) = uVar25;
        }
        lVar40 = *param_2;
        goto LAB_0137e230;
      }
      goto LAB_0137e234;
    }
LAB_0137e54c:
    uVar14 = uVar14 & 0xffffc0ff;
LAB_0137e550:
    *(uint *)(param_1 + 0xc) = uVar14;
  }
  else {
LAB_0137e230:
    if (lVar40 == 0) {
      uVar14 = *(uint *)(param_1 + 0xc);
      goto LAB_0137e54c;
    }
LAB_0137e234:
    if (*(long *)(lVar40 + 0xb8) != 0) {
      uVar34 = FUN_01269270(*(long *)(lVar40 + 0xb8),&puStack_1b0);
      uVar14 = *(uint *)(param_1 + 0xc);
      if ((uVar34 & 1) != 0) goto LAB_0137e258;
      uVar14 = uVar14 & 0xfffffcff;
LAB_0137e53c:
      uVar14 = uVar14 | 0x2a00;
      goto LAB_0137e550;
    }
    uVar14 = *(uint *)(param_1 + 0xc);
LAB_0137e258:
    *(uint *)(param_1 + 0xc) = uVar14 | 0x100;
    if ((*(long *)(lVar40 + 0xb8) != 0) &&
       (uVar34 = FUN_01269558(*(long *)(lVar40 + 0xb8),&puStack_1b0), (uVar34 & 1) != 0)) {
LAB_0137e538:
      uVar14 = *(uint *)(param_1 + 0xc);
      goto LAB_0137e53c;
    }
    fVar47 = (float)local_1a8 * 10.0 + 2.5;
    fVar46 = (float)local_1a4 * 10.0 + 2.5;
    fVar44 = (float)local_1a8 * 10.0 + 10.0 + -2.5;
    fVar45 = (float)local_1a4 * 10.0 + 10.0 + -2.5;
    uVar16 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
    uVar17 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
    uVar33 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
    uVar38 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
    uVar14 = uVar16;
    if ((int)uVar33 <= (int)uVar16) {
      uVar14 = uVar33;
    }
    if ((int)uVar16 <= (int)uVar33) {
      uVar16 = uVar33;
    }
    uVar33 = uVar17;
    if ((int)uVar38 <= (int)uVar17) {
      uVar33 = uVar38;
    }
    if ((int)uVar17 <= (int)uVar38) {
      uVar17 = uVar38;
    }
    if (uVar17 + 1 != uVar33) {
      uVar38 = uVar14;
      do {
        if ((((*(long *)PTR_DAT_04bb27c8 != 0) && (-1 < (int)uVar38)) &&
            (lVar40 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar40 != 0)) &&
           (((-1 < (int)uVar33 && (uVar38 < *(uint *)(lVar40 + 0x38))) &&
            ((uVar33 < *(uint *)(lVar40 + 0x3c) &&
             ((uVar31 = uVar38 + *(uint *)(lVar40 + 0x38) * uVar33,
              uVar31 < *(uint *)(lVar40 + 0x68) && (*(long *)(lVar40 + 0x70) != 0)))))))) {
          local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,0x12);
          if ((*(uint *)(*(long *)(lVar40 + 0x70) + (long)(int)uVar31 * 4) >> 0x12 & 1) != 0)
          goto LAB_0137e538;
        }
        if ((int)uVar38 < (int)uVar16) {
          uVar38 = uVar38 + 1;
        }
        else {
          uVar33 = uVar33 + 1;
          uVar38 = uVar14;
        }
      } while ((uVar14 != uVar38) || (uVar17 + 1 != uVar33));
    }
    if (((char)param_2[1] != '\0') && (*(char *)((long)param_2 + 9) == '\0')) {
      lVar40 = *(long *)PTR_DAT_04bb5c90;
      fVar44 = (float)*(int *)(lVar40 + 0x28) * 0.5;
      uVar14 = 0;
      if (fVar44 != (float)(int)fVar44) {
        uVar14 = (uint)(fVar44 < 0.0);
      }
      iVar18 = (int)fVar44 - uVar14;
      fVar44 = (float)*(int *)(lVar40 + 0x2c) * 0.5;
      uVar14 = 0;
      if (fVar44 != (float)(int)fVar44) {
        uVar14 = (uint)(fVar44 < 0.0);
      }
      iVar39 = (int)fVar44 - uVar14;
      fVar44 = (float)*(int *)(lVar40 + 0x38) * 0.5;
      uVar14 = 0;
      if (fVar44 != (float)(int)fVar44) {
        uVar14 = (uint)(fVar44 < 0.0);
      }
      iVar15 = (int)fVar44 - uVar14;
      fVar44 = (float)*(int *)(lVar40 + 0x3c) * 0.5;
      uVar14 = 0;
      if (fVar44 != (float)(int)fVar44) {
        uVar14 = (uint)(fVar44 < 0.0);
      }
      iVar6 = (int)fVar44 - uVar14;
      iVar29 = iVar18;
      if (iVar15 <= iVar18) {
        iVar29 = iVar15;
      }
      if (iVar18 <= iVar15) {
        iVar18 = iVar15;
      }
      iVar15 = iVar39;
      if (iVar6 <= iVar39) {
        iVar15 = iVar6;
      }
      if (iVar39 <= iVar6) {
        iVar39 = iVar6;
      }
      if (((iVar29 <= local_1a8 && local_1a8 <= iVar18) && iVar15 <= local_1a4) &&
          local_1a4 == iVar39 ||
          (((iVar29 <= local_1a8 && local_1a8 <= iVar18) && iVar15 <= local_1a4) &&
          local_1a4 - iVar39 < 0) !=
          (((iVar29 <= local_1a8 && local_1a8 <= iVar18) && iVar15 <= local_1a4) &&
          SBORROW4(local_1a4,iVar39))) goto LAB_0137e538;
    }
    if (*(char *)((long)param_2 + 10) != '\0') {
      local_198 = puVar43 + 0x10;
      local_180 = (undefined *)0x0;
      local_190 = (undefined *)0x0;
      local_1a0 = (undefined **)(PTR_DAT_04bbc5d8 + 0x10);
      local_188 = local_198;
      uVar34 = FUN_0092547c(&local_1a0);
      if (((((uVar34 & 1) != 0) && ((int)local_190 <= local_1a8)) && (local_1a8 <= (int)local_180))
         && (((int)local_190._4_4_ <= local_1a4 && (local_1a4 <= local_180._4_4_))))
      goto LAB_0137e538;
    }
    lVar40 = *(long *)(*param_2 + 0x150);
    if ((lVar40 == 0) || (iVar18 = *(int *)(lVar40 + 0x48030), iVar18 == 0)) {
      bVar7 = 0;
      uVar14 = 0;
      bVar8 = 0;
      uVar16 = 0;
LAB_0137ea90:
      uVar17 = *(uint *)(param_1 + 0xc) & 0xfffffdff;
    }
    else {
      lVar40 = *(long *)(lVar40 + 0x48038);
      uVar17 = 0;
      bVar7 = 0;
      uVar14 = 0;
      iVar39 = 0;
      bVar8 = 0;
      uVar16 = 0;
      do {
        lVar19 = lVar40 + (long)iVar39 * 0x718;
        if ((*(byte *)(lVar19 + 8) & 1) != 0) {
          if (uVar17 == 0) {
            uVar17 = FUN_02a7ca2c(lVar19,&puStack_1b0);
            if (uVar14 == 0) goto LAB_0137e678;
LAB_0137e64c:
            uVar14 = 1;
            if (uVar16 != 0) goto LAB_0137e658;
LAB_0137e690:
            uVar16 = FUN_02a7ccc8(lVar19,&puStack_1b0);
          }
          else {
            uVar17 = 1;
            if (uVar14 != 0) goto LAB_0137e64c;
LAB_0137e678:
            uVar14 = FUN_02a7cb78(lVar19,&puStack_1b0);
            if (uVar16 == 0) goto LAB_0137e690;
LAB_0137e658:
            uVar16 = 1;
          }
          uVar17 = uVar17 & 1;
          uVar14 = uVar14 & 1;
          uVar33 = *(uint *)(lVar40 + (long)iVar39 * 0x718 + 0xc);
          uVar16 = uVar16 & 1;
          local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar33);
          if (uVar33 != 0) {
            lVar27 = *(long *)PTR_DAT_04bb5008;
            if ((int)*(uint *)(lVar27 + 0x1e0) < 1) {
              if ((((*(long *)(lVar27 + 0xd0) != 0) &&
                   (puVar32 = *(uint **)(*(long *)(lVar27 + 0xd0) + 8), puVar32 != (uint *)0x0)) &&
                  ((*(uint *)(lVar27 + 0xe8) <= uVar33 ||
                   (*(char *)(*(long *)(lVar27 + 0xf0) + (long)(int)uVar33) != '\0')))) &&
                 (((uVar33 < *puVar32 && (puVar32[1] != 0)) && ((ushort)puVar32[2] != 0)))) {
                iVar15 = 0xc;
                if (*(char *)((long)puVar32 + 10) != '\0') {
                  iVar15 = 0x1c;
                }
                puVar32 = (uint *)((ulong)(puVar32[1] * uVar33 + (uint)(ushort)puVar32[2] * 8 +
                                          iVar15) + (long)puVar32);
                goto joined_r0x0137e7f8;
              }
            }
            else if (uVar33 < *(uint *)(lVar27 + 0x1e0)) {
              if (*(uint *)(lVar27 + 0x1d0) <= uVar33) {
                uVar33 = 0;
              }
              puVar32 = *(uint **)(*(long *)(lVar27 + 0x1d8) + (ulong)uVar33 * 8);
joined_r0x0137e7f8:
              if ((puVar32 != (uint *)0x0) &&
                 (uVar33 = *puVar32, uVar33 != 0 && puVar32 != (uint *)(ulong)uVar33)) {
                puVar36 = (uint *)((long)puVar32 - (long)(ulong)uVar33);
                if ((*puVar36 != 0) &&
                   ((uVar33 = puVar36[1], uVar33 != 0 && ((ulong)(ushort)puVar36[2] != 0)))) {
                  lVar27 = 0xc;
                  if (*(char *)((long)puVar36 + 10) != '\0') {
                    lVar27 = 0x1c;
                  }
                  lVar27 = (long)puVar36 + lVar27 + (ulong)(ushort)puVar36[2] * 8;
                  if (lVar27 != 0) {
                    uVar38 = 0;
                    if ((ulong)uVar33 != 0) {
                      uVar38 = (uint)((ulong)((long)puVar32 - lVar27) / (ulong)uVar33);
                    }
                    if (*puVar36 <= uVar38) {
                      uVar38 = 0xffffffff;
                    }
                    if ((uVar38 < *(uint *)PTR_DAT_04bc46b8) &&
                       ((*(ushort *)(*(long *)(PTR_DAT_04bc46b8 + 8) + (long)(int)uVar38 * 2) &
                        0xfffe) == 2)) goto LAB_0137e618;
                  }
                }
              }
            }
          }
          uVar34 = FUN_02a7ca2c(lVar19,&puStack_1b0);
          if ((uVar34 & 1) != 0) {
            bVar7 = 1;
          }
          uVar34 = FUN_02a7cb78(lVar19,&puStack_1b0);
          if ((uVar34 & 1) != 0) {
            bVar8 = 1;
          }
        }
LAB_0137e618:
        iVar39 = iVar39 + 1;
      } while (iVar18 != iVar39);
      if (uVar17 == 0) goto LAB_0137ea90;
      uVar17 = *(uint *)(param_1 + 0xc) | 0x200;
    }
    uVar14 = (uint)bVar7 << 10 | (uint)(uVar14 != 0) << 0xb | (uint)bVar8 << 0xc |
             (uint)(uVar16 != 0) << 0xd | uVar17 & 0xffffc3ff;
    if ((uVar17 & 1) != 0) {
      uVar14 = uVar14 | 0x2800;
    }
    *(uint *)(param_1 + 0xc) = uVar14;
    lVar40 = *(long *)PTR_DAT_04bb2720;
    if (lVar40 == 0) {
      puVar41 = &DAT_055c04a0;
    }
    else {
      puVar41 = &DAT_055c04a0;
      if (*(long *)(lVar40 + 0x330) != 0) {
        puVar41 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar40 + 0x338));
        iVar18 = FUN_006bd550(*puVar41,0);
        puVar41 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar18 != 0x758f7eaf) {
          puVar41 = &DAT_055c04a0;
        }
      }
    }
    if ((*(int *)(puVar41 + 7) == -0x17df00c3) &&
       (uVar34 = FUN_01318310(&puStack_1b0), (uVar34 & 1) != 0)) {
      uVar14 = *(uint *)(param_1 + 0xc) | 0x2000;
      goto LAB_0137e550;
    }
  }
  if ((*param_2 != 0) && (lVar40 = *(long *)(*param_2 + 0xc0), lVar40 != 0)) {
    FUN_01320eac(&local_1a0,lVar40,&puStack_1b0);
    iVar18 = (int)*(char *)(param_1 + 0x1e);
    lVar19 = *(long *)PTR_DAT_04bb27a8;
    lVar40 = lVar19 + 0x4730;
    if (iVar18 == -1) {
      if ((short)local_1a0 != *(short *)PTR_DAT_04bb3170) {
LAB_0137e848:
        uVar12 = FUN_0131ffc0(lVar40,&local_1a0);
        goto LAB_0137e854;
      }
    }
    else if ((short)local_1a0 == *(short *)PTR_DAT_04bb3170) {
      FUN_013200fc(lVar40);
      uVar12 = 0xff;
LAB_0137e854:
      *(undefined1 *)(param_1 + 0x1e) = uVar12;
    }
    else {
      psVar1 = (short *)(*(long *)(lVar19 + 0x4740) + (long)iVar18 * 0x70 + 0x28);
      if (*(uint *)(lVar19 + 0x4738) <= (uint)(int)*(char *)(param_1 + 0x1e)) {
        psVar1 = (short *)PTR_DAT_04bb3170;
      }
      if ((short)local_1a0 != *psVar1) {
        FUN_013200fc(lVar40,iVar18);
        goto LAB_0137e848;
      }
    }
  }
  puVar10 = PTR_DAT_04bbc1a0;
  puVar9 = PTR_DAT_04bb27c8;
  puVar43 = PTR_DAT_04bb2010;
  if (*(char *)((long)param_2 + 9) == '\0') {
    local_1a0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
    local_198 = PTR_DAT_04bb2010 + 0x10;
    local_188 = local_198;
    local_c0 = (undefined **)&local_198;
    local_b8 = (char *)&local_188;
    fVar44 = (float)local_1a8 * 10.0 + 2.5;
    fVar45 = (float)local_1a4 * 10.0 + 2.5;
    fVar47 = (float)local_1a8 * 10.0 + 10.0 + -2.5;
    fVar46 = (float)local_1a4 * 10.0 + 10.0 + -2.5;
    uVar16 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
    uVar17 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
    uVar33 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
    uVar14 = uVar16;
    if ((int)uVar33 <= (int)uVar16) {
      uVar14 = uVar33;
    }
    uVar31 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
    uVar38 = uVar16;
    if ((int)uVar16 <= (int)uVar33) {
      uVar38 = uVar33;
    }
    uVar33 = uVar17;
    if ((int)uVar31 <= (int)uVar17) {
      uVar33 = uVar31;
    }
    uVar35 = uVar17;
    if ((int)uVar17 <= (int)uVar31) {
      uVar35 = uVar31;
    }
    local_190 = (undefined *)CONCAT44(uVar33,uVar14);
    local_180 = (undefined *)CONCAT44(uVar35,uVar38);
    lVar40 = *(long *)PTR_DAT_04bb27c8;
    if ((char)param_2[1] == '\0') {
      if ((((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0xa8), lVar40 != 0)) && (-1 < (int)uVar16)
          ) && (-1 < (int)uVar17)) goto LAB_0137e9a0;
LAB_0137e9c8:
      uVar16 = 0;
      uVar17 = *(uint *)(param_1 + 0xc) & 0xfffffff7;
    }
    else {
      if (((lVar40 == 0) || (lVar40 = *(long *)(lVar40 + 0x90), lVar40 == 0)) ||
         (((int)uVar16 < 0 || ((int)uVar17 < 0)))) goto LAB_0137e9c8;
LAB_0137e9a0:
      if (*(uint *)(lVar40 + 0x38) <= uVar16 || *(uint *)(lVar40 + 0x3c) <= uVar17)
      goto LAB_0137e9c8;
      uVar16 = uVar16 + *(uint *)(lVar40 + 0x38) * uVar17;
      if (*(uint *)(lVar40 + 0x68) <= uVar16 || *(long *)(lVar40 + 0x70) == 0) goto LAB_0137e9c8;
      uVar17 = *(uint *)(param_1 + 0xc) & 0xfffffff7;
      if ((*(uint *)(*(long *)(lVar40 + 0x70) + (long)(int)uVar16 * 4) >> 5 & 1) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 8;
      }
    }
    uVar35 = uVar35 + 1;
    *(uint *)(param_1 + 0xc) = uVar16 | uVar17;
    if ((char)param_2[1] == '\0') {
      local_a8 = (char *)CONCAT44(uVar33,uVar14);
      local_b0 = puVar43 + 0x10;
      if (uVar35 == uVar33) goto LAB_0137ea78;
      do {
        uVar16 = FUN_00976070(&local_b0);
        if ((uVar16 & 1) == 0) break;
        if ((int)local_a8 < *(int *)(local_b8 + 8)) {
          uVar33 = (int)local_a8 + 1;
          uVar17 = local_a8._4_4_;
        }
        else {
          uVar17 = local_a8._4_4_ + 1;
          uVar33 = *(uint *)(local_c0 + 1);
          local_a8 = (char *)CONCAT44(uVar17,(int)local_a8);
        }
        local_a8 = (char *)CONCAT44(local_a8._4_4_,uVar33);
      } while (uVar14 != uVar33 || uVar35 != uVar17);
LAB_0137ec00:
      uVar16 = uVar16 ^ 1;
    }
    else {
      local_a8 = (char *)CONCAT44(uVar33,uVar14);
      local_b0 = puVar43 + 0x10;
      if (uVar35 != uVar33) {
        do {
          uVar16 = FUN_0097cff0(&local_b0);
          if ((uVar16 & 1) == 0) break;
          if ((int)local_a8 < *(int *)(local_b8 + 8)) {
            uVar33 = (int)local_a8 + 1;
            uVar17 = local_a8._4_4_;
          }
          else {
            uVar17 = local_a8._4_4_ + 1;
            uVar33 = *(uint *)(local_c0 + 1);
            local_a8 = (char *)CONCAT44(uVar17,(int)local_a8);
          }
          local_a8 = (char *)CONCAT44(local_a8._4_4_,uVar33);
        } while (uVar14 != uVar33 || uVar35 != uVar17);
        goto LAB_0137ec00;
      }
LAB_0137ea78:
      local_a8 = (char *)CONCAT44(uVar33,uVar14);
      uVar16 = 0;
    }
    uVar17 = *(uint *)(param_1 + 0xc);
    uVar14 = 0;
    if ((uVar16 & 1) == 0) {
      uVar14 = 0x20;
    }
    lVar40 = *(long *)puVar9;
    *(uint *)(param_1 + 0xc) = uVar17 & 0xffffffdf | uVar14;
    if ((char)param_2[1] == '\0') {
      if ((lVar40 == 0) || (lVar40 = *(long *)(lVar40 + 0xa8), lVar40 == 0)) goto LAB_0137ec6c;
LAB_0137ec4c:
      uVar34 = FUN_00971f80(lVar40,&local_1a0,1);
      uVar14 = *(uint *)(param_1 + 0xc) & 0xffffffbf;
      if ((uVar34 & 1) == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 0x40;
      }
    }
    else {
      if ((lVar40 != 0) && (lVar40 = *(long *)(lVar40 + 0x90), lVar40 != 0)) goto LAB_0137ec4c;
LAB_0137ec6c:
      uVar16 = 0;
      uVar14 = uVar17 & 0xffffff9f | uVar14;
    }
    uVar17 = uVar16 | uVar14;
    *(uint *)(param_1 + 0xc) = uVar17;
    if (*(char *)((long)param_2 + 9) == '\0') {
      lVar40 = *(long *)PTR_DAT_04bb5c90;
      fVar44 = (float)*(int *)(lVar40 + 0x28) * 0.5;
      uVar17 = 0;
      if (fVar44 != (float)(int)fVar44) {
        uVar17 = (uint)(fVar44 < 0.0);
      }
      iVar18 = (int)fVar44 - uVar17;
      fVar44 = (float)*(int *)(lVar40 + 0x2c) * 0.5;
      uVar17 = 0;
      if (fVar44 != (float)(int)fVar44) {
        uVar17 = (uint)(fVar44 < 0.0);
      }
      iVar39 = (int)fVar44 - uVar17;
      fVar44 = (float)*(int *)(lVar40 + 0x38) * 0.5;
      uVar17 = 0;
      if (fVar44 != (float)(int)fVar44) {
        uVar17 = (uint)(fVar44 < 0.0);
      }
      iVar15 = (int)fVar44 - uVar17;
      fVar44 = (float)*(int *)(lVar40 + 0x3c) * 0.5;
      uVar17 = 0;
      if (fVar44 != (float)(int)fVar44) {
        uVar17 = (uint)(fVar44 < 0.0);
      }
      iVar6 = (int)fVar44 - uVar17;
      iVar29 = iVar18;
      if (iVar15 <= iVar18) {
        iVar29 = iVar15;
      }
      if (iVar18 <= iVar15) {
        iVar18 = iVar15;
      }
      iVar15 = iVar39;
      if (iVar39 <= iVar6) {
        iVar15 = iVar6;
      }
      if (local_1a8 < iVar29 || iVar18 < local_1a8) {
LAB_0137ed7c:
        uVar17 = 0;
      }
      else {
        if (iVar6 <= iVar39) {
          iVar39 = iVar6;
        }
        if (local_1a4 < iVar39) goto LAB_0137ed7c;
        uVar17 = 0x80;
        if (iVar15 < local_1a4) {
          uVar17 = 0;
        }
      }
      uVar17 = uVar16 | uVar14 & 0xffffff7f | uVar17;
    }
  }
  else {
    uVar17 = *(uint *)(param_1 + 0xc);
  }
  uVar17 = uVar17 & 0xffff7fff;
  *(uint *)(param_1 + 0xc) = uVar17;
  if (*(long *)(*param_2 + 0x150) == 0) goto LAB_0137f520;
  local_c0 = (undefined **)(puVar10 + 0x10);
  local_b8 = puVar43 + 0x10;
  fVar46 = (float)local_1a4 * 10.0;
  fVar44 = (float)local_1a8 * 10.0;
  fVar47 = fVar46 + 2.5;
  fVar45 = fVar44 + 2.5;
  local_90 = (float)local_1a4 * 10.0 + 5.0;
  fVar46 = fVar46 + 10.0 + -2.5;
  fVar44 = fVar44 + 10.0 + -2.5;
  local_98 = (ulong)(uint)((float)local_1a8 * 10.0 + 5.0);
  iVar39 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
  iVar15 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
  iVar29 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
  iVar18 = iVar39;
  if (iVar29 <= iVar39) {
    iVar18 = iVar29;
  }
  if (iVar39 <= iVar29) {
    iVar39 = iVar29;
  }
  iVar6 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
  iVar29 = iVar15;
  if (iVar6 <= iVar15) {
    iVar29 = iVar6;
  }
  if (iVar15 <= iVar6) {
    iVar15 = iVar6;
  }
  local_b0 = (char *)CONCAT44(iVar29,iVar18);
  local_a0 = CONCAT44(iVar15,iVar39);
  local_a8 = local_b8;
  FUN_02a58ea0(&local_e8,*param_2 + 0x148,&local_98);
  if (local_e0._4_4_ == 0) goto LAB_0137f1bc;
  if (((ulong)local_e0 & 1) != 0) goto LAB_0137f1b0;
  uVar34 = FUN_02a8e598(&local_e8);
  puVar9 = PTR_DAT_04bb27c8;
  if ((uVar34 & 1) != 0) {
    local_1a0 = (undefined **)((ulong)local_1a0 & 0xffffffff00000000);
    uVar37 = FUN_02b67620(&local_1a0,local_e0._4_4_);
    uVar34 = (ulong)local_1a0 & 0xffffffff;
    if ((uVar37 & 1) == 0) {
      uVar34 = 0;
    }
    uVar34 = FUN_02b5c8e0(uVar34);
    if ((uVar34 & 1) != 0) goto LAB_0137f1bc;
    goto LAB_0137f1b0;
  }
  switch(local_e0._4_4_) {
  case 0x13:
    iVar18 = FUN_02b58b90(0);
    goto LAB_0137efc8;
  default:
    if (((local_e0._4_4_ != 0) && (local_e0._4_4_ == 0x1b)) && (((byte)local_e0 & 3) == 2))
    goto LAB_0137f1b0;
    break;
  case 0x15:
    iVar18 = FUN_02b5a7a0(0);
    goto LAB_0137efc8;
  case 0x16:
    iVar39 = (int)local_b0;
    local_190 = puVar43 + 0x10;
    local_188 = local_b0;
    local_1a0 = (undefined **)&local_b8;
    local_198 = (char *)&local_a8;
    iVar18 = local_a0._4_4_ + 1;
    if (iVar18 == local_b0._4_4_) {
      puVar43 = PTR_DAT_04bb2010;
    }
    else {
      uVar14 = 0;
      pcVar26 = (char *)&local_a8;
      iVar15 = (int)local_b0;
      do {
        local_100 = (char *)((ulong)local_100 & 0xffffffff00000000);
        local_108 = (undefined **)0x0;
        local_78 = CONCAT44(local_78._4_4_,8);
        local_108 = (undefined **)0x100;
        lVar40 = *(long *)puVar9;
        if ((lVar40 == 0) || (*(long *)(lVar40 + 0xa8) == 0)) {
          uVar16 = 0;
        }
        else {
          uVar16 = FUN_00949ac8(lVar40 + 0x28,&local_190,&local_108);
          pcVar26 = local_198;
          iVar15 = (int)local_188;
        }
        puVar43 = PTR_DAT_04bb2010;
        if (iVar15 < *(int *)(pcVar26 + 8)) {
          iVar15 = iVar15 + 1;
        }
        else {
          local_188._4_4_ = local_188._4_4_ + 1;
          iVar15 = *(int *)(local_1a0 + 1);
        }
        uVar14 = uVar16 | uVar14;
        local_188 = (char *)CONCAT44(local_188._4_4_,iVar15);
      } while ((iVar39 != iVar15) || (iVar18 != local_188._4_4_));
      if ((uVar14 & 1) != 0) {
        local_1a0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
        local_198 = PTR_DAT_04bb2010 + 0x10;
        local_190 = (undefined *)0x0;
        local_180 = (undefined *)0x0;
        local_188 = local_198;
        FUN_02a8f7b0(&local_e8,&local_1a0);
        fVar44 = (float)(int)local_190 * 0.5;
        uVar14 = 0;
        if (fVar44 != (float)(int)fVar44) {
          uVar14 = (uint)(fVar44 < 0.0);
        }
        if ((int)(((int)fVar44 - uVar14) + DAT_051a4520) <= local_1a8 &&
            local_1a8 <= (int)(((int)fVar44 - uVar14) + DAT_051a4530)) {
          fVar44 = (float)(int)local_190._4_4_ * 0.5;
          uVar14 = 0;
          if (fVar44 != (float)(int)fVar44) {
            uVar14 = (uint)(fVar44 < 0.0);
          }
          if ((int)(DAT_051a4524 + ((int)fVar44 - uVar14)) <= local_1a4 &&
              local_1a4 <= (int)(DAT_051a4534 + ((int)fVar44 - uVar14))) break;
        }
        goto LAB_0137f1b0;
      }
    }
    break;
  case 0x18:
    iVar18 = FUN_02b5aaf0(0);
LAB_0137efc8:
    if (iVar18 == 1) {
LAB_0137f1b0:
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    }
    break;
  case 0x19:
    iVar18 = FUN_02b5aef0(0);
    if (iVar18 - 1U < 2) goto LAB_0137f1b0;
  }
LAB_0137f1bc:
  if ((((char)param_2[1] != '\0') && ((*(byte *)(param_1 + 0xe) >> 6 & 1) != 0)) &&
     ((lVar40 = *(long *)PTR_DAT_04bb27a8, lVar40 != 0 && (*(char *)(lVar40 + 0x4b30) != '\0')))) {
    ppuVar21 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_198 = "HotelConstruction";
    local_1a0 = ppuVar21;
    uVar34 = FUN_0273f0a0(&local_1a0);
    if ((uVar34 & 1) == 0) {
      local_e0 = "HotelBuilt";
      local_e8 = ppuVar21;
      uVar34 = FUN_0273f0a0(&local_e8);
      if ((uVar34 & 1) == 0) goto LAB_0137f274;
    }
    if (((*(int *)(lVar40 + 0x4b50) <= (int)local_b0) &&
        ((int)local_a0 <= *(int *)(lVar40 + 0x4b60))) &&
       ((*(int *)(lVar40 + 0x4b54) <= local_b0._4_4_ &&
        (local_a0._4_4_ <= *(int *)(lVar40 + 0x4b64))))) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    }
  }
LAB_0137f274:
  if (((*(char *)((long)param_2 + 10) != '\0') && (lVar40 = *(long *)PTR_DAT_04bb27a8, lVar40 != 0))
     && ((*(ushort *)(lVar40 + 0x4b68) & 1) != 0)) {
    iVar15 = *(int *)(lVar40 + 0x4b6c);
    iVar18 = *(int *)(lVar40 + 0x4b70);
    lVar40 = *(long *)PTR_DAT_04bb4948;
    piVar20 = (int *)(**(code **)(*(long *)(lVar40 + 0x2c0) + 0xf0))(lVar40 + 0x2c0);
    iVar39 = *piVar20;
    iVar18 = piVar20[1] + iVar18 * 0x20;
    piVar20 = (int *)(**(code **)(*(long *)(lVar40 + 0x2f8) + 0xf0))(lVar40 + 0x2f8);
    iVar29 = *piVar20;
    lVar40 = (**(code **)(*(long *)(lVar40 + 0x2f8) + 0xf0))(lVar40 + 0x2f8);
    puVar43 = PTR_DAT_04bb2010;
    iVar39 = iVar39 + iVar15 * 0x20;
    iVar15 = iVar18 + -4;
    iVar6 = iVar39 + -2;
    iVar39 = iVar39 + iVar29;
    iVar29 = iVar6;
    if (iVar39 + 1 <= iVar6) {
      iVar29 = iVar39 + 1;
    }
    iVar18 = iVar18 + *(int *)(lVar40 + 4) + 3;
    if (iVar6 <= iVar39 + 1) {
      iVar6 = iVar39 + 1;
    }
    iVar39 = iVar15;
    if (iVar18 <= iVar15) {
      iVar39 = iVar18;
    }
    if (iVar15 <= iVar18) {
      iVar15 = iVar18;
    }
    if (((iVar29 <= (int)local_b0) && ((int)local_a0 <= iVar6)) &&
       ((iVar39 <= local_b0._4_4_ && (local_a0._4_4_ <= iVar15)))) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
    }
  }
  if ((char)param_2[1] != '\0') {
    iVar18 = (int)local_b0;
    lVar40 = *(long *)PTR_DAT_04bb5c90;
    if ((((int)local_b0 <= *(int *)(lVar40 + 0x38)) && (*(int *)(lVar40 + 0x28) <= (int)local_a0))
       && ((local_b0._4_4_ <= *(int *)(lVar40 + 0x3c) && (*(int *)(lVar40 + 0x2c) <= local_a0._4_4_)
           ))) {
      local_108 = (undefined **)&local_b8;
      local_100 = (char *)&local_a8;
      puVar43 = puVar43 + 0x10;
      iVar39 = local_a0._4_4_ + 1;
      local_f0 = (int)local_b0;
      local_ec = local_b0._4_4_;
      local_f8 = puVar43;
      if (iVar39 != local_b0._4_4_) {
        pcVar26 = PTR_DAT_04bbc1a0 + 0x10;
        do {
          local_78 = CONCAT44(local_78._4_4_,0x7e3d1e46);
          local_d8 = &local_f8;
          lVar40 = *(long *)PTR_DAT_04bb5c90;
          uVar14 = *(uint *)(lVar40 + 0x50);
          local_e8 = &PTR_FUN_04983b90;
          local_e0 = (char *)&local_78;
          if (0 < (int)uVar14) {
            uVar34 = 0;
            do {
              lVar19 = *(long *)(lVar40 + 0x58);
              if (**(int **)(lVar19 + uVar34 * 8) != 0x7e3d1e46) {
                local_1a0 = (undefined **)
                            CONCAT44(**(undefined4 **)(lVar19 + uVar34 * 8),(int)uVar34);
                lVar19 = *(long *)(lVar19 + uVar34 * 8);
                local_188 = *(char **)(lVar19 + 0x18);
                local_178 = *(undefined8 *)(lVar19 + 0x28);
                local_198 = pcVar26;
                local_190 = puVar43;
                local_180 = puVar43;
                (*(code *)*local_e8)(&local_e8,&local_1a0);
              }
              uVar34 = uVar34 + 1;
            } while (uVar14 != uVar34);
            if ((int)local_78 != 0x7e3d1e46) {
              FUN_011b9ab0(&local_1a0);
              iVar15 = FUN_011ba8b0(&local_1a0);
              if (iVar15 == 0) {
                *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x8000;
                break;
              }
            }
          }
          if (local_f0 < *(int *)(local_100 + 8)) {
            local_f0 = local_f0 + 1;
          }
          else {
            local_f0 = *(int *)(local_108 + 1);
            local_ec = local_ec + 1;
          }
        } while ((iVar18 != local_f0) || (iVar39 != local_ec));
      }
    }
  }
  uVar17 = *(uint *)(param_1 + 0xc);
LAB_0137f520:
  *(uint *)(param_1 + 0xc) = uVar17 & 0xfff2ffff;
  lVar40 = *(long *)(*param_2 + 0x150);
  if ((lVar40 != 0) && (iVar18 = *(int *)(lVar40 + 0x48030), iVar18 != 0)) {
    lVar40 = *(long *)(lVar40 + 0x48038);
    iVar39 = 0;
    do {
      lVar19 = lVar40 + (long)iVar39 * 0x718;
      if ((*(uint *)(lVar19 + 8) & 1) != 0) {
        if ((*(uint *)(lVar19 + 8) >> 1 & 1) == 0) {
          lVar27 = lVar19 + 0x90;
        }
        else {
          local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,4);
          lVar27 = lVar19 + 0x2e0;
        }
        fVar44 = (float)*(int *)(lVar27 + 0x10) * 0.5;
        uVar14 = 0;
        if (fVar44 != (float)(int)fVar44) {
          uVar14 = (uint)(fVar44 < 0.0);
        }
        iVar15 = (int)fVar44 - uVar14;
        fVar44 = (float)*(int *)(lVar27 + 0x20) * 0.5;
        uVar14 = 0;
        if (fVar44 != (float)(int)fVar44) {
          uVar14 = (uint)(fVar44 < 0.0);
        }
        iVar6 = (int)fVar44 - uVar14;
        iVar29 = iVar15;
        if (iVar6 <= iVar15) {
          iVar29 = iVar6;
        }
        if (iVar15 <= iVar6) {
          iVar15 = iVar6;
        }
        if (iVar29 <= local_1a8 && local_1a8 <= iVar15) {
          fVar44 = (float)*(int *)(lVar27 + 0x14) * 0.5;
          uVar14 = 0;
          if (fVar44 != (float)(int)fVar44) {
            uVar14 = (uint)(fVar44 < 0.0);
          }
          iVar15 = (int)fVar44 - uVar14;
          fVar44 = (float)*(int *)(lVar27 + 0x24) * 0.5;
          uVar14 = 0;
          if (fVar44 != (float)(int)fVar44) {
            uVar14 = (uint)(fVar44 < 0.0);
          }
          iVar6 = (int)fVar44 - uVar14;
          iVar29 = iVar15;
          if (iVar15 <= iVar6) {
            iVar29 = iVar6;
          }
          if (iVar6 <= iVar15) {
            iVar15 = iVar6;
          }
          if (iVar15 <= local_1a4 && local_1a4 <= iVar29) {
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x40000;
          }
        }
        if (((*(byte *)(lVar19 + 8) & 1) != 0) && (*(long *)(lVar19 + 0xc0) != 0)) {
          local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,8);
          lVar27 = *(long *)(*(long *)(lVar19 + 0xc0) + 0xb0);
          if ((lVar27 != 0) &&
             ((*(char *)(lVar27 + 0x48) != '\0' &&
              (uVar34 = FUN_02ad806c(lVar19 + 0xb8,8,&puStack_1b0), (uVar34 & 1) != 0)))) {
            *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10000;
          }
        }
        uVar34 = FUN_02a7ce18(lVar19,&puStack_1b0);
        if ((uVar34 & 1) != 0) {
          *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x80000;
        }
      }
      iVar39 = iVar39 + 1;
    } while (iVar18 != iVar39);
  }
  plVar28 = (long *)PTR_DAT_04bb2200;
  if (*(char *)((long)param_2 + 10) != '\0') {
    local_190 = (undefined *)0x0;
    local_b0 = (char *)0x0;
    local_1a0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
    local_198 = PTR_DAT_04bb2010 + 0x10;
    local_180 = (undefined *)0x0;
    local_a0 = 0;
    local_188 = local_198;
    local_c0 = local_1a0;
    local_b8 = local_198;
    local_a8 = local_198;
    uVar34 = FUN_00925138(&local_1a0,&local_c0);
    if ((uVar34 & 1) != 0) {
      fVar45 = (float)local_1a4 * 10.0 + 2.5;
      fVar44 = (float)local_1a8 * 10.0 + 2.5;
      iVar18 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
      iVar39 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
      if ((((iVar18 < (int)local_190 || (int)local_180 < iVar18) || iVar39 < (int)local_190._4_4_)
          || iVar39 != local_180._4_4_) &&
          ((((int)local_190 <= iVar18 && iVar18 <= (int)local_180) && (int)local_190._4_4_ <= iVar39
           ) && iVar39 - local_180._4_4_ < 0) ==
          ((((int)local_190 <= iVar18 && iVar18 <= (int)local_180) && (int)local_190._4_4_ <= iVar39
           ) && SBORROW4(iVar39,local_180._4_4_))) {
        if ((((iVar18 < (int)local_b0 || (int)local_a0 < iVar18) || iVar39 < local_b0._4_4_) ||
            iVar39 != local_a0._4_4_) &&
            ((((int)local_b0 <= iVar18 && iVar18 <= (int)local_a0) && local_b0._4_4_ <= iVar39) &&
            iVar39 - local_a0._4_4_ < 0) ==
            ((((int)local_b0 <= iVar18 && iVar18 <= (int)local_a0) && local_b0._4_4_ <= iVar39) &&
            SBORROW4(iVar39,local_a0._4_4_))) goto LAB_0137f818;
      }
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x10000;
    }
  }
LAB_0137f818:
  *(undefined2 *)(param_1 + 0x20) = 0xffff;
  lVar40 = *param_2;
  if (lVar40 != 0) {
    lVar19 = *(long *)(*plVar28 + 0xd0);
    if (lVar19 != 0) {
      if ((*(uint *)(param_1 + 0xc) >> 2 & 1) != 0) {
        if ((*(uint *)(param_1 + 0xc) >> 0x15 & 1) == 0) {
          if (*(char *)(param_1 + 0x1e) != -1) goto LAB_0137fba8;
        }
        local_198 = (char *)((ulong)local_198 & 0xffffffff00000000);
        local_1a0 = (undefined **)0x0;
        local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
        local_1a0 = (undefined **)0x1;
        uVar34 = FUN_00978960(&puStack_1b0,&local_1a0);
        puVar43 = PTR_DAT_04bb37e0;
        if ((uVar34 & 1) != 0) {
          local_1a0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
          local_198 = PTR_DAT_04bb2010 + 0x10;
          fVar44 = (float)local_1a8 * 10.0 + 2.5;
          fVar45 = (float)local_1a4 * 10.0 + 2.5;
          iVar39 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
          fVar46 = (float)local_1a8 * 10.0 + 10.0 + -2.5;
          fVar44 = (float)local_1a4 * 10.0 + 10.0 + -2.5;
          iVar15 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
          iVar29 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
          iVar18 = iVar39;
          if (iVar29 <= iVar39) {
            iVar18 = iVar29;
          }
          if (iVar39 <= iVar29) {
            iVar39 = iVar29;
          }
          iVar6 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
          local_b8 = (char *)&local_188;
          iVar29 = iVar15;
          if (iVar6 <= iVar15) {
            iVar29 = iVar6;
          }
          if (iVar15 <= iVar6) {
            iVar15 = iVar6;
          }
          local_c0 = (undefined **)&local_198;
          local_190 = (undefined *)CONCAT44(iVar29,iVar18);
          local_180 = (undefined *)CONCAT44(iVar15,iVar39);
          local_a8 = (char *)CONCAT44(iVar29,iVar18);
          local_188 = local_198;
          local_b0 = local_198;
          if (iVar15 + 1 != iVar29) {
            do {
              local_108 = (undefined **)0xfffe;
              FUN_0277d4ac(&local_108);
              if (*(long *)(lVar40 + 0xd0) == 0) {
                plVar28 = (long *)PTR_DAT_04bb2200;
                pcVar26 = local_a8;
                sVar3 = *(short *)puVar43;
              }
              else {
                FUN_012e4d78(&local_e8,*(long *)(lVar40 + 0xd0),&local_b0);
                plVar28 = (long *)PTR_DAT_04bb2200;
                pcVar26 = local_a8;
                sVar3 = (short)local_e8;
              }
              PTR_DAT_04bb2200 = (undefined *)plVar28;
              if (sVar3 != -2) {
                local_a8 = pcVar26;
                goto LAB_0137fba8;
              }
              local_a8._0_4_ = (int)pcVar26;
              local_a8._4_4_ = (uint)((ulong)pcVar26 >> 0x20);
              if ((int)local_a8 < *(int *)(local_b8 + 8)) {
                iVar39 = (int)local_a8 + 1;
                iVar29 = local_a8._4_4_;
                local_a8 = pcVar26;
              }
              else {
                iVar29 = local_a8._4_4_ + 1;
                iVar39 = *(int *)(local_c0 + 1);
                local_a8 = (char *)CONCAT44(iVar29,(int)local_a8);
              }
              local_a8 = (char *)CONCAT44(local_a8._4_4_,iVar39);
            } while ((iVar18 != iVar39) || (iVar15 + 1 != iVar29));
          }
          plVar28 = (long *)PTR_DAT_04bb2200;
          if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x70) == 0) {
            uVar14 = 0;
          }
          else {
            uVar42 = *(undefined8 *)PTR_DAT_04bb30a0;
            local_c0 = (undefined **)FUN_00a8c31c(uVar42);
            if ((char)((ulong)local_c0 >> 0x20) < '\x05') {
              lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
              local_1a0 = (undefined **)(lVar27 + -0x15180);
              local_c0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1a0);
            }
            uVar37 = (ulong)local_c0 >> 0x10;
            uVar34 = (ulong)local_c0 >> 0x30;
            uVar22 = (ulong)local_c0 >> 0x18;
            local_c0._0_6_ = CONCAT24(5,(undefined4)local_c0);
            local_c0 = (undefined **)
                       (CONCAT26((short)uVar34,(undefined6)local_c0) & 0xff00ffffffffffff);
            cVar13 = FUN_00a8ae20(uVar42,uVar37,uVar22,4);
            uVar14 = (uint)(cVar13 == '\x02');
          }
          uVar16 = FUN_03782c70();
          lVar19 = lVar19 + 0x648;
          uVar34 = (ulong)(uVar14 | uVar16) & 1;
          uVar14 = *(uint *)(lVar19 + uVar34 * 0x10);
          if ((int)uVar14 < 1) {
            uVar24 = 0xffff;
          }
          else {
            uVar16 = local_1a8 +
                     (local_1a4 + local_1a4 * (*(int *)(lVar40 + 0x30) - *(int *)(lVar40 + 0x20))) *
                     2;
            uVar17 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
            uVar16 = uVar17 ^ uVar17 * 0x800;
            uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
            uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
            uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
            uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
            uVar17 = 0;
            if (uVar14 != 0) {
              uVar17 = uVar16 / uVar14;
            }
            uVar24 = (undefined2)
                     *(undefined4 *)
                      (*(long *)(lVar19 + uVar34 * 0x10 + 8) + (ulong)(uVar16 - uVar17 * uVar14) * 4
                      );
          }
          *(undefined2 *)(param_1 + 0x20) = uVar24;
        }
      }
    }
  }
LAB_0137fba8:
  *(undefined2 *)(param_1 + 0x22) = 0xffff;
  puVar43 = PTR_DAT_04bb2010;
  lVar40 = *param_2;
  if (lVar40 != 0) {
    lVar19 = *(long *)(*plVar28 + 0xd0);
    if (lVar19 != 0) {
      if ((*(byte *)(param_1 + 0xe) >> 5 & 1) == 0) {
        if (*(char *)(param_1 + 0x1e) != -1) goto LAB_0137fea8;
      }
      local_198 = (char *)((ulong)local_198 & 0xffffffff00000000);
      local_1a0 = (undefined **)0x0;
      local_c0 = (undefined **)CONCAT44(local_c0._4_4_,4);
      local_1a0 = (undefined **)&DAT_00000010;
      uVar34 = FUN_00978960(&puStack_1b0,&local_1a0);
      puVar9 = PTR_DAT_04bb37e0;
      if ((uVar34 & 1) != 0) {
        local_198 = puVar43 + 0x10;
        local_1a0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
        fVar44 = (float)local_1a8 * 10.0 + 2.5;
        fVar45 = (float)local_1a4 * 10.0 + 2.5;
        iVar39 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
        fVar46 = (float)local_1a8 * 10.0 + 10.0 + -2.5;
        fVar44 = (float)local_1a4 * 10.0 + 10.0 + -2.5;
        iVar15 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
        iVar29 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
        iVar18 = iVar39;
        if (iVar29 <= iVar39) {
          iVar18 = iVar29;
        }
        if (iVar39 <= iVar29) {
          iVar39 = iVar29;
        }
        iVar6 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
        local_b8 = (char *)&local_188;
        iVar29 = iVar15;
        if (iVar6 <= iVar15) {
          iVar29 = iVar6;
        }
        if (iVar15 <= iVar6) {
          iVar15 = iVar6;
        }
        local_c0 = (undefined **)&local_198;
        local_190 = (undefined *)CONCAT44(iVar29,iVar18);
        local_180 = (undefined *)CONCAT44(iVar15,iVar39);
        local_a8 = (char *)CONCAT44(iVar29,iVar18);
        local_188 = local_198;
        local_b0 = local_198;
        if (iVar15 + 1 != iVar29) {
          do {
            local_108 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_108);
            if (*(long *)(lVar40 + 0xd0) == 0) {
              puVar43 = PTR_DAT_04bb2010;
              plVar28 = (long *)PTR_DAT_04bb2200;
              pcVar26 = local_a8;
              sVar3 = *(short *)puVar9;
            }
            else {
              FUN_012e4d78(&local_e8,*(long *)(lVar40 + 0xd0),&local_b0);
              puVar43 = PTR_DAT_04bb2010;
              plVar28 = (long *)PTR_DAT_04bb2200;
              pcVar26 = local_a8;
              sVar3 = (short)local_e8;
            }
            PTR_DAT_04bb2010 = puVar43;
            PTR_DAT_04bb2200 = (undefined *)plVar28;
            if (sVar3 != -2) {
              local_a8 = pcVar26;
              goto LAB_0137fea8;
            }
            local_a8._0_4_ = (int)pcVar26;
            local_a8._4_4_ = (uint)((ulong)pcVar26 >> 0x20);
            if ((int)local_a8 < *(int *)(local_b8 + 8)) {
              iVar39 = (int)local_a8 + 1;
              iVar29 = local_a8._4_4_;
              local_a8 = pcVar26;
            }
            else {
              iVar29 = local_a8._4_4_ + 1;
              iVar39 = *(int *)(local_c0 + 1);
              local_a8 = (char *)CONCAT44(iVar29,(int)local_a8);
            }
            local_a8 = (char *)CONCAT44(local_a8._4_4_,iVar39);
          } while ((iVar18 != iVar39) || (iVar15 + 1 != iVar29));
        }
        plVar28 = (long *)PTR_DAT_04bb2200;
        puVar43 = PTR_DAT_04bb2010;
        uVar14 = *(uint *)(lVar19 + 0x6d8);
        if ((int)uVar14 < 1) {
          uVar24 = 0xffff;
        }
        else {
          uVar16 = local_1a8 +
                   (local_1a4 + local_1a4 * (*(int *)(lVar40 + 0x30) - *(int *)(lVar40 + 0x20))) * 2
          ;
          uVar17 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
          uVar16 = uVar17 ^ uVar17 * 0x800;
          uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
          uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
          uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
          uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
          uVar17 = 0;
          if (uVar14 != 0) {
            uVar17 = uVar16 / uVar14;
          }
          uVar24 = (undefined2)
                   *(undefined4 *)
                    (*(long *)(lVar19 + 0x6e0) + (ulong)(uVar16 - uVar17 * uVar14) * 4);
        }
        *(undefined2 *)(param_1 + 0x22) = uVar24;
      }
    }
  }
LAB_0137fea8:
  *(undefined2 *)(param_1 + 0x24) = 0xffff;
  uVar14 = *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0xc) = uVar14 & 0xffffbfff;
  lVar40 = *param_2;
  if (lVar40 != 0) {
    lVar19 = *(long *)(*plVar28 + 0xd0);
    if (((lVar19 != 0) && ((uVar14 >> 0x14 & 1) == 0)) && ((uVar14 >> 2 & 1) != 0)) {
      if (*(long *)(*plVar28 + 0x70) == 0) {
        bVar11 = false;
      }
      else {
        uVar42 = *(undefined8 *)PTR_DAT_04bb30a0;
        local_c0 = (undefined **)FUN_00a8c31c(uVar42);
        if ((char)((ulong)local_c0 >> 0x20) < '\x05') {
          lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
          local_1a0 = (undefined **)(lVar27 + -0x15180);
          local_c0 = (undefined **)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1a0);
        }
        uVar37 = (ulong)local_c0 >> 0x10;
        uVar34 = (ulong)local_c0 >> 0x30;
        uVar22 = (ulong)local_c0 >> 0x18;
        local_c0._0_6_ = CONCAT24(5,(undefined4)local_c0);
        local_c0 = (undefined **)(CONCAT26((short)uVar34,(undefined6)local_c0) & 0xff00ffffffffffff)
        ;
        cVar13 = FUN_00a8ae20(uVar42,uVar37,uVar22,4);
        bVar11 = cVar13 == '\x02';
      }
      uVar16 = FUN_03782c70();
      local_90 = 0.0;
      local_98 = 0;
      local_1a0 = (undefined **)((ulong)local_1a0 & 0xffffffff00000000);
      local_98 = 1;
      local_90 = 0.0;
      uVar14 = local_1a8 +
               (local_1a4 + local_1a4 * (*(int *)(lVar40 + 0x30) - *(int *)(lVar40 + 0x20))) * 2;
      uVar34 = FUN_00978960(&puStack_1b0,&local_98);
      if ((uVar34 & 1) == 0) {
LAB_01380504:
        fVar47 = (float)local_1a8 * 10.0 + 2.5;
        fVar46 = (float)local_1a4 * 10.0 + 2.5;
        fVar44 = (float)local_1a8 * 10.0 + 10.0 + -2.5;
        fVar45 = (float)local_1a4 * 10.0 + 10.0 + -2.5;
        uVar33 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
        uVar38 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
        uVar31 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
        uVar35 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
        uVar17 = uVar33;
        if ((int)uVar31 <= (int)uVar33) {
          uVar17 = uVar31;
        }
        if ((int)uVar33 <= (int)uVar31) {
          uVar33 = uVar31;
        }
        uVar31 = uVar38;
        if ((int)uVar35 <= (int)uVar38) {
          uVar31 = uVar35;
        }
        if ((int)uVar38 <= (int)uVar35) {
          uVar38 = uVar35;
        }
        if (uVar38 + 1 != uVar31) {
          if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
             (lVar40 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar40 == 0)) goto LAB_013807b8;
          uVar35 = uVar17;
          do {
            if ((((((int)uVar35 < 0) || ((int)uVar31 < 0)) || (*(uint *)(lVar40 + 0x38) <= uVar35))
                || ((*(uint *)(lVar40 + 0x3c) <= uVar31 ||
                    (uVar5 = uVar35 + *(uint *)(lVar40 + 0x38) * uVar31,
                    *(uint *)(lVar40 + 0x68) <= uVar5)))) || (*(long *)(lVar40 + 0x70) == 0))
            goto LAB_013807b8;
            local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,0xf);
            if ((*(uint *)(*(long *)(lVar40 + 0x70) + (long)(int)uVar5 * 4) >> 0xf & 1) == 0)
            goto LAB_013807b8;
            if ((int)uVar35 < (int)uVar33) {
              uVar35 = uVar35 + 1;
            }
            else {
              uVar31 = uVar31 + 1;
              uVar35 = uVar17;
            }
          } while ((uVar17 != uVar35) || (uVar38 + 1 != uVar31));
        }
        if (((*(byte *)(param_1 + 0xe) >> 5 & 1) != 0) || (*(char *)(param_1 + 0x1e) == -1)) {
          local_198 = (char *)((ulong)local_198 & 0xffffffff00000000);
          local_1a0 = (undefined **)0x0;
          local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
          local_1a0 = (undefined **)0x1;
          uVar34 = FUN_0097a540(&puStack_1b0,&local_1a0);
          if ((uVar34 & 1) != 0) {
            local_b8 = (char *)((ulong)local_b8 & 0xffffffff00000000);
            local_c0 = (undefined **)0x0;
            local_e8 = (undefined **)CONCAT44(local_e8._4_4_,0x33);
            local_c0 = (undefined **)0x8000000000000;
            uVar34 = FUN_00978710(&puStack_1b0,&local_c0);
            bVar23 = (uVar16 & 1) != 0;
            lVar40 = 5;
            if (bVar11 || bVar23) {
              lVar40 = 6;
            }
            lVar27 = 3;
            if (bVar11 || bVar23) {
              lVar27 = 4;
            }
            if ((uVar34 & 1) == 0) {
              lVar40 = lVar27;
            }
            uVar16 = *(uint *)(lVar19 + 0x648 + lVar40 * 0x10);
            if (0 < (int)uVar16) {
              lVar40 = lVar19 + 0x648 + lVar40 * 0x10;
              goto LAB_013806d8;
            }
LAB_013807b0:
            uVar24 = 0xffff;
            goto LAB_013807b4;
          }
        }
      }
      else {
        local_108 = (undefined **)(puVar43 + 0x10);
        local_1a0 = (undefined **)((ulong)local_1a0 & 0xffffffff00000000);
        fVar44 = (float)local_1a8 * 10.0 + 2.5;
        fVar45 = (float)local_1a4 * 10.0 + 2.5;
        local_100 = (char *)CONCAT44((int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0),
                                     (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0));
        local_78 = 0xfffe;
        FUN_0277d4ac(&local_78);
        if (*(long *)(lVar40 + 0xd0) == 0) {
          uVar24 = *(undefined2 *)PTR_DAT_04bb37e0;
          uVar12 = PTR_DAT_04bb37e0[2];
          uVar30 = PTR_DAT_04bb37e0[3];
          uVar25 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        }
        else {
          FUN_012e4d78(&local_1a0,*(long *)(lVar40 + 0xd0),&local_108);
          uVar24 = (short)local_1a0;
          uVar12 = local_1a0._2_1_;
          uVar30 = local_1a0._3_1_;
          uVar25 = local_1a0._4_4_;
        }
        local_78._0_4_ = CONCAT13(uVar30,CONCAT12(uVar12,uVar24));
        local_78 = CONCAT44(uVar25,(int)local_78);
        lVar40 = *(long *)PTR_DAT_04bbbc68;
        if (((((lVar40 == 0) || (*(long *)(lVar40 + 0xb0) == 0)) ||
             ((*(long *)(*(long *)(lVar40 + 0xb0) + 8) == 0 ||
              ((*(long *)(lVar40 + 0x488) == 0 || (*(long *)(*(long *)(lVar40 + 0x488) + 8) == 0))))
             )) || (*(long *)(lVar40 + 0x2b0) == 0)) ||
           (*(long *)(*(long *)(lVar40 + 0x2b0) + 8) == 0)) goto LAB_01380504;
        uVar17 = FUN_0277d6c4(&local_78);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar40 + 0x1f8);
        if ((*(uint *)(lVar40 + 0x1d8) <= uVar17) ||
           (*(long *)(*(long *)(lVar40 + 0x1e0) + (long)(int)uVar17 * 8) == 0)) goto LAB_01380504;
        FUN_0124c030(&local_e8,&local_78);
        if (local_d8 == (undefined **)0x0) {
          ppuVar21 = (undefined **)0x0;
        }
        else {
          uVar34 = FUN_0123d890(local_d8,9);
          if ((uVar34 & 1) != 0) {
            lVar40 = *(long *)PTR_DAT_04bb5008;
            if (*(char *)(lVar40 + 0x231c) == '\0') {
              uVar17 = 0;
            }
            else {
              uVar17 = *(uint *)(lVar40 + 0x2318);
              local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar17);
              plVar28 = (long *)(lVar40 + 0x22e0) + uVar17;
              if (6 < uVar17) {
                plVar28 = (long *)(lVar40 + 0x22e0);
              }
              uVar17 = 0;
              if ((long *)*plVar28 != (long *)0x0) {
                lVar40 = (**(code **)(*(long *)*plVar28 + 0x38))();
                uVar17 = 0;
                if (lVar40 != 0) {
                  local_1a0 = (undefined **)(puVar43 + 0x10);
                  fVar45 = (float)local_1a4 * 10.0 + 2.5;
                  fVar44 = (float)local_1a8 * 10.0 + 2.5;
                  local_198 = (char *)CONCAT44((int)((float)(int)fVar45 / 5.0) -
                                               (uint)(fVar45 < 0.0),
                                               (int)((float)(int)fVar44 / 5.0) -
                                               (uint)(fVar44 < 0.0));
                  uVar17 = FUN_02a7c208(lVar40,&local_1a0);
                }
              }
            }
            if (((uVar16 | uVar17) & 1) == 0) {
              uVar16 = *(uint *)(lVar19 + 0x668);
              if ((int)uVar16 < 1) {
                uVar24 = 0xffff;
              }
              else {
                uVar17 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
                uVar14 = uVar17 ^ uVar17 * 0x800;
                uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
                uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
                uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
                uVar14 = uVar14 >> 8 ^ uVar17 >> 0x13 ^ uVar14 ^ uVar17;
                uVar17 = 0;
                if (uVar16 != 0) {
                  uVar17 = uVar14 / uVar16;
                }
                uVar24 = (undefined2)
                         *(undefined4 *)
                          (*(long *)(lVar19 + 0x670) + (ulong)(uVar14 - uVar17 * uVar16) * 4);
              }
              *(undefined2 *)(param_1 + 0x24) = uVar24;
              *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x4000;
              goto LAB_013807b8;
            }
            goto LAB_01380504;
          }
          ppuVar21 = local_d8;
        }
        iVar18 = FUN_0123db50(&local_e0,ppuVar21);
        if (iVar18 != 0x2d) goto LAB_01380504;
        uVar17 = FUN_01240010(&local_78);
        lVar40 = *(long *)PTR_DAT_04bb5008;
        if (*(char *)(lVar40 + 0x231c) == '\0') {
          bVar23 = false;
        }
        else {
          uVar33 = *(uint *)(lVar40 + 0x2318);
          local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar33);
          plVar28 = (long *)(lVar40 + 0x22e0) + uVar33;
          if (6 < uVar33) {
            plVar28 = (long *)(lVar40 + 0x22e0);
          }
          plVar28 = (long *)*plVar28;
          bVar23 = false;
          if (plVar28 != (long *)0x0) {
            lVar40 = (**(code **)(*plVar28 + 0x38))(plVar28);
            if (lVar40 == 0) {
              bVar23 = false;
              puVar43 = PTR_DAT_04bb2010;
            }
            else {
              local_1a0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
              local_198 = PTR_DAT_04bb2010 + 0x10;
              local_188 = local_198;
              local_b0 = local_198;
              fVar45 = (float)local_1a4 * 10.0 + 2.5;
              fVar44 = (float)local_1a8 * 10.0 + 2.5;
              fVar47 = (float)local_1a4 * 10.0 + 10.0 + -2.5;
              fVar46 = (float)local_1a8 * 10.0 + 10.0 + -2.5;
              iVar15 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
              iVar39 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
              iVar29 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
              iVar18 = iVar39;
              if (iVar29 <= iVar39) {
                iVar18 = iVar29;
              }
              if (iVar39 <= iVar29) {
                iVar39 = iVar29;
              }
              iVar6 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
              iVar29 = iVar15;
              if (iVar6 <= iVar15) {
                iVar29 = iVar6;
              }
              if (iVar15 <= iVar6) {
                iVar15 = iVar6;
              }
              local_180 = (undefined *)CONCAT44(iVar15,iVar39);
              local_190 = (undefined *)CONCAT44(iVar29,iVar18);
              local_a8 = (char *)CONCAT44(iVar29,iVar18);
              local_c0 = (undefined **)&local_198;
              local_b8 = (char *)&local_188;
              if (iVar15 + 1 != iVar29) {
                do {
                  uVar34 = FUN_02a7c074(lVar40,&local_b0);
                  if ((uVar34 & 1) != 0) {
                    bVar23 = true;
                    puVar43 = PTR_DAT_04bb2010;
                    goto LAB_013804b4;
                  }
                  if ((int)local_a8 < *(int *)(local_b8 + 8)) {
                    iVar29 = (int)local_a8 + 1;
                    iVar39 = local_a8._4_4_;
                  }
                  else {
                    iVar39 = local_a8._4_4_ + 1;
                    iVar29 = *(int *)(local_c0 + 1);
                    local_a8 = (char *)CONCAT44(iVar39,(int)local_a8);
                  }
                  local_a8 = (char *)CONCAT44(local_a8._4_4_,iVar29);
                } while (iVar18 != iVar29 || iVar15 + 1 != iVar39);
              }
              bVar23 = false;
              puVar43 = PTR_DAT_04bb2010;
            }
          }
        }
LAB_013804b4:
        if ((bVar23) || (((uVar17 ^ 1) & 1) != 0)) goto LAB_01380504;
        lVar40 = 7;
        if (bVar11 || (uVar16 & 1) != 0) {
          lVar40 = 8;
        }
        uVar16 = *(uint *)(lVar19 + 0x648 + lVar40 * 0x10);
        if ((int)uVar16 < 1) goto LAB_013807b0;
        lVar40 = lVar19 + 0x648 + lVar40 * 0x10;
LAB_013806d8:
        uVar17 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
        uVar14 = uVar17 ^ uVar17 * 0x800;
        uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 2;
        uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
        uVar17 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
        uVar14 = uVar14 >> 8 ^ uVar17 >> 0x13 ^ uVar14 ^ uVar17;
        uVar17 = 0;
        if (uVar16 != 0) {
          uVar17 = uVar14 / uVar16;
        }
        uVar24 = (undefined2)
                 *(undefined4 *)(*(long *)(lVar40 + 8) + (ulong)(uVar14 - uVar17 * uVar16) * 4);
LAB_013807b4:
        *(undefined2 *)(param_1 + 0x24) = uVar24;
      }
    }
  }
LAB_013807b8:
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffdffff;
  uVar34 = FUN_03782c70();
  if ((((uVar34 & 1) == 0) && ((*(uint *)(param_1 + 0xc) >> 3 & 1) == 0)) &&
     (((*(uint *)(param_1 + 0xc) >> 0x15 & 1) != 0 || (*(char *)(param_1 + 0x1e) == -1)))) {
    lVar40 = *(long *)PTR_DAT_04bb5008;
    if (*(char *)(lVar40 + 0x231c) != '\0') {
      uVar14 = *(uint *)(lVar40 + 0x2318);
      local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,uVar14);
      plVar28 = (long *)(lVar40 + 0x22e0) + uVar14;
      if (6 < uVar14) {
        plVar28 = (long *)(lVar40 + 0x22e0);
      }
      if (((long *)*plVar28 != (long *)0x0) &&
         (lVar40 = (**(code **)(*(long *)*plVar28 + 0x38))(), lVar40 != 0)) {
        if ((*(byte *)(lVar40 + 8) >> 1 & 1) == 0) {
          lVar40 = lVar40 + 0x18;
        }
        else {
          lVar40 = lVar40 + 0x350;
        }
        fVar47 = (float)local_1a8 * 10.0 + 2.5;
        fVar46 = (float)local_1a4 * 10.0 + 2.5;
        fVar44 = (float)local_1a8 * 10.0 + 10.0 + -2.5;
        fVar45 = (float)local_1a4 * 10.0 + 10.0 + -2.5;
        iVar39 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
        iVar15 = (int)((float)(int)fVar46 / 5.0) - (uint)(fVar46 < 0.0);
        iVar29 = (int)((float)(int)fVar44 / 5.0) - (uint)(fVar44 < 0.0);
        iVar6 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
        iVar18 = iVar39;
        if (iVar29 <= iVar39) {
          iVar18 = iVar29;
        }
        if (iVar39 <= iVar29) {
          iVar39 = iVar29;
        }
        iVar29 = iVar15;
        if (iVar6 <= iVar15) {
          iVar29 = iVar6;
        }
        if (iVar15 <= iVar6) {
          iVar15 = iVar6;
        }
        if (((iVar18 <= *(int *)(lVar40 + 0x20) && *(int *)(lVar40 + 0x10) <= iVar39) &&
            iVar29 <= *(int *)(lVar40 + 0x24)) && *(int *)(lVar40 + 0x14) <= iVar15)
        goto LAB_013809b8;
      }
    }
    if ((((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) || (local_1a8 < DAT_051a4548)) ||
        (DAT_051a4558 < local_1a8)) || ((local_1a4 < DAT_051a454c || (DAT_051a455c < local_1a4)))) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20000;
    }
  }
LAB_013809b8:
  if ((char)param_2[1] != '\0') {
    if (((*(uint *)(*(long *)PTR_DAT_04bb27a8 + 0x4b04) ^ 0xffffffff) & 5) == 0) {
      local_198 = (char *)CONCAT44(local_1a4 << 1,local_1a8 << 1);
      local_1a0 = (undefined **)(puVar43 + 0x10);
      uVar34 = FUN_01376f10(*(undefined4 *)(*(long *)PTR_DAT_04bb27a8 + 0x4b00),&local_1a0);
      uVar14 = 0x200000;
      if ((uVar34 & 1) == 0) {
        uVar14 = 0;
      }
      uVar14 = *(uint *)(param_1 + 0xc) & 0xffdfffff | uVar14;
    }
    else {
      uVar14 = *(uint *)(param_1 + 0xc) & 0xffdfffff;
    }
    *(uint *)(param_1 + 0xc) = uVar14;
  }
  local_c0 = (undefined **)*param_2;
  puVar43 = puVar43 + 0x10;
  local_b8 = (char *)CONCAT62(local_b8._2_6_,(short)param_2[1]);
  local_198._0_4_ = (int)*(short *)(param_1 + 0x34);
  local_198._4_4_ = (int)*(short *)(param_1 + 0x36);
  local_1a0 = (undefined **)puVar43;
  FUN_012e19c0(param_1 + 0x28,&local_c0,&local_1a0);
  local_198._0_4_ = (int)*(short *)(param_1 + 0x44);
  local_198._4_4_ = (int)*(short *)(param_1 + 0x46);
  local_1a0 = (undefined **)puVar43;
  FUN_012e19c0(param_1 + 0x38,&local_c0,&local_1a0);
  local_198._0_4_ = (int)*(short *)(param_1 + 0x54);
  local_198._4_4_ = (int)*(short *)(param_1 + 0x56);
  local_1a0 = (undefined **)puVar43;
  FUN_012e19c0(param_1 + 0x48,&local_c0,&local_1a0);
  local_198 = (char *)CONCAT44((int)*(short *)(param_1 + 0x66),(int)*(short *)(param_1 + 100));
  local_1a0 = (undefined **)puVar43;
  FUN_012e19c0(param_1 + 0x58,&local_c0,&local_1a0);
  return;
}

