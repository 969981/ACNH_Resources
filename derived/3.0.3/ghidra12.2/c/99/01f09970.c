
/* WARNING: Removing unreachable block (ram,0x01f09ac0) */
/* WARNING: Removing unreachable block (ram,0x01f09ad0) */
/* WARNING: Removing unreachable block (ram,0x01f09c98) */

void FUN_01f09970(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ushort *puVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  uint uVar11;
  ulong uVar12;
  short *psVar13;
  long lVar14;
  long lVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 local_114;
  undefined8 local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined *local_e8;
  short local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  undefined4 local_dc;
  long local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined *puStack_c0;
  int local_b8;
  int iStack_b4;
  undefined8 local_b0;
  float local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  
  (**(code **)(*param_1 + 0x5b0))();
  uVar12 = (**(code **)(*param_1 + 0x538))(param_1);
  puVar9 = PTR_DAT_04bbc1a0;
  puVar1 = PTR_DAT_04bb2010;
  if ((uVar12 & 1) != 0) {
    puVar3 = (ushort *)((long)param_1 + 0xaf64);
    if (*(int *)(param_2 + 4) == 0) {
      lVar14 = *(long *)(param_1[1] + 0x68);
    }
    else {
      local_a0 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_98 = PTR_DAT_04bb2010 + 0x10;
      local_90 = 0;
      local_80 = 0;
      local_88 = puStack_98;
      FUN_01811430(&local_a0);
      puVar8 = PTR_DAT_04bb43c0;
      iVar19 = *(int *)(param_2 + 4);
      if (iVar19 < 0) {
        iVar19 = iVar19 + 1;
      }
      iVar19 = iVar19 >> 1;
      local_90._4_4_ = local_90._4_4_ - iVar19;
      local_80._4_4_ = local_80._4_4_ - iVar19;
      lVar14 = *(long *)(param_1[1] + 0x68);
      fVar21 = (float)(int)local_80 * 5.0 + 5.0;
      local_b0 = *(undefined8 *)(lVar14 + 0x278);
      local_a8 = *(float *)(lVar14 + 0x280);
      bVar10 = false;
      if (((float)(int)local_90 * 5.0 <= (float)local_b0) &&
         (bVar10 = false, !NAN((float)local_b0) && !NAN(fVar21))) {
        bVar10 = (float)local_b0 < fVar21;
      }
      if (bVar10) {
        fVar21 = (float)local_80._4_4_ * 5.0 + 5.0;
        bVar10 = false;
        if (((float)local_90._4_4_ * 5.0 <= local_a8) &&
           (bVar10 = false, !NAN(local_a8) && !NAN(fVar21))) {
          bVar10 = local_a8 < fVar21;
        }
        if (bVar10) {
          local_a8 = local_a8 + (float)iVar19 * 5.0;
          lVar14 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
          local_110 = (undefined *)((ulong)local_110._4_4_ << 0x20);
          puVar1 = puVar1 + 0x10;
          puVar2 = PTR_DAT_04bc0510 + 0x10;
          iVar6 = (int)((float)(int)((float)local_b0 + -2.5) / 5.0) -
                  (uint)((float)local_b0 + -2.5 < 0.0);
          iVar7 = (int)((float)(int)(local_a8 + -2.5) / 5.0) - (uint)(local_a8 + -2.5 < 0.0);
          iVar18 = iVar6;
          iVar19 = iVar7;
          do {
            local_c8 = 0;
            lVar15 = *(long *)(lVar14 + 0xd0);
            local_d0 = puVar1;
            puStack_c0 = puVar1;
            local_b8 = iVar18;
            iStack_b4 = iVar19;
            if (lVar15 == 0) {
              psVar13 = (short *)PTR_DAT_04bb37e0;
            }
            else {
              lVar5 = lVar15 + 0x130 + (ulong)*(uint *)(lVar15 + 0x198) * 0x30;
              if (1 < *(uint *)(lVar15 + 0x198)) {
                lVar5 = lVar15 + 0x130;
              }
              psVar13 = (short *)FUN_012eb21c(lVar5,&puStack_c0,&local_d0);
            }
            if (*psVar13 != -2) {
              lVar15 = *(long *)puVar8;
              local_e0 = *psVar13;
              local_de = (undefined1)psVar13[1];
              local_dd = *(undefined1 *)((long)psVar13 + 3);
              local_dc = *(undefined4 *)(psVar13 + 2);
              local_d8 = 0;
              local_e8 = puVar2;
              uVar11 = FUN_0277d6c4(&local_e0);
              if (*(long *)puVar8 != 0) {
                lVar15 = *(long *)(lVar15 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                  lVar15 = *(long *)PTR_DAT_04bc0428;
                  uVar11 = FUN_0277d6c4(psVar13);
                  uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                  if ((uVar11 < *(uint *)(lVar15 + 0x1d8)) &&
                     (lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar11 * 8),
                     lVar15 != 0)) {
                    local_d8 = lVar15;
                  }
                }
              }
              uVar12 = FUN_01ae6020(&local_e8);
              if ((uVar12 & 1) != 0) {
                local_100 = 0;
                puStack_108 = PTR_DAT_04bb2010 + 0x10;
                local_f0 = 0;
                local_110 = puVar9 + 0x10;
                local_f8 = puStack_108;
                FUN_0277f02c(psVar13,&local_110);
                local_100._0_4_ = (int)local_100 + (int)local_c8;
                local_100._4_4_ = local_100._4_4_ + local_c8._4_4_;
                local_f0._0_4_ = (int)local_f0 + (int)local_c8;
                local_f0._4_4_ = local_f0._4_4_ + local_c8._4_4_;
                if ((((iVar6 <= (int)local_f0) && ((int)local_100 <= iVar6 + 1)) &&
                    (iVar7 <= local_f0._4_4_)) && (local_100._4_4_ <= iVar7 + 1)) {
                  (**(code **)(*param_1 + 0x5b8))(param_1);
                  if ((int)param_1[0xef6] != 0x3c) {
                    (**(code **)(*param_1 + 0x38))(param_1,0x3c,0,0);
                  }
                  *(ushort *)((long)param_1 + 0xaf84) = *(ushort *)((long)param_1 + 0xaf84) | 1;
                  *puVar3 = *puVar3 | 0x20;
                  return;
                }
              }
            }
            if (iVar18 < iVar6 + 1) {
              iVar18 = iVar18 + 1;
            }
            else {
              iVar19 = iVar19 + 1;
              iVar18 = iVar6;
            }
          } while ((iVar6 != iVar18) || (iVar7 + 2 != iVar19));
          lVar14 = *(long *)PTR_DAT_04bb27c8;
          if ((lVar14 == 0) ||
             ((*(long *)(lVar14 + 0xa8) == 0 || (*(char *)(lVar14 + 0x11c8) != '\0')))) {
            uVar20 = 0xc3fa0000;
          }
          else {
            uVar20 = FUN_0093a950(lVar14 + 0x28,&local_b0,0);
          }
          local_b0 = CONCAT44(uVar20,(float)local_b0);
          local_114 = *(undefined4 *)(*(long *)(param_1[1] + 0x68) + 0x2b4);
          FUN_01e39778(param_1[1],&local_b0,&local_114,0);
          return;
        }
      }
    }
    local_a0 = puVar9 + 0x10;
    puStack_98 = puVar1 + 0x10;
    fVar21 = *(float *)(lVar14 + 0x278) + -2.5;
    fVar22 = *(float *)(lVar14 + 0x280) + -2.5;
    iVar7 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
    iVar18 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
    iVar19 = iVar7 + 1;
    iVar6 = iVar18 + 1;
    lVar14 = *(long *)PTR_DAT_04bb5ce0;
    if (lVar14 == 0) {
      local_80._0_4_ = 0;
      local_80._4_4_ = 0;
      iVar16 = 0x10;
      iVar17 = 0x10;
    }
    else {
      local_80._0_4_ = *(int *)(lVar14 + 0xd88);
      local_80._4_4_ = *(int *)(lVar14 + 0xd8c);
      iVar17 = *(int *)(lVar14 + 0xd98);
      iVar16 = *(int *)(lVar14 + 0xd9c);
    }
    local_90._0_4_ = (int)local_80;
    if (iVar17 <= (int)local_80) {
      local_90._0_4_ = iVar17;
    }
    if ((int)local_80 <= iVar17) {
      local_80._0_4_ = iVar17;
    }
    local_90._4_4_ = local_80._4_4_;
    if (iVar16 <= local_80._4_4_) {
      local_90._4_4_ = iVar16;
    }
    if (local_80._4_4_ <= iVar16) {
      local_80._4_4_ = iVar16;
    }
    if ((((iVar7 < (int)local_90 || (int)local_80 < iVar19) || iVar18 < local_90._4_4_) ||
        iVar6 != local_80._4_4_) &&
        ((((int)local_90 <= iVar7 && iVar19 <= (int)local_80) && local_90._4_4_ <= iVar18) &&
        iVar6 - local_80._4_4_ < 0) ==
        ((((int)local_90 <= iVar7 && iVar19 <= (int)local_80) && local_90._4_4_ <= iVar18) &&
        SBORROW4(iVar6,local_80._4_4_))) {
      local_88 = puStack_98;
      FUN_01811430(&local_a0);
      iVar16 = local_90._4_4_ + -1;
      iVar17 = (int)local_80;
      if ((int)local_80 <= (int)local_90) {
        iVar17 = (int)local_90;
      }
      iVar4 = local_80._4_4_;
      if (local_80._4_4_ <= iVar16) {
        iVar4 = iVar16;
      }
      if ((((iVar7 < (int)local_90 || iVar17 < iVar19) || iVar18 < iVar16) || iVar6 != iVar4) &&
          ((((int)local_90 <= iVar7 && iVar19 <= iVar17) && iVar16 <= iVar18) && iVar6 - iVar4 < 0)
          == ((((int)local_90 <= iVar7 && iVar19 <= iVar17) && iVar16 <= iVar18) &&
             SBORROW4(iVar6,iVar4))) {
        (**(code **)(*param_1 + 0x5b8))(param_1);
        if ((int)param_1[0xef6] != 0x3c) {
          (**(code **)(*param_1 + 0x38))(param_1,0x3c,0,0);
        }
        *(ushort *)((long)param_1 + 0xaf84) = *(ushort *)((long)param_1 + 0xaf84) | 1;
        *puVar3 = *puVar3 | 0x20;
      }
    }
  }
  return;
}

