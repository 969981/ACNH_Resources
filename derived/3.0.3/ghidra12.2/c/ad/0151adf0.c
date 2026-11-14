
undefined8
FUN_0151adf0(ulong *param_1,float *param_2,uint *param_3,int *param_4,undefined4 *param_5,
            long param_6,uint param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  ushort uVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  byte bVar14;
  uint *puVar15;
  long lVar16;
  undefined8 *puVar17;
  uint uVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_15c;
  ulong local_158;
  float local_150;
  uint local_148;
  uint local_144;
  undefined8 *local_140;
  undefined **ppuStack_138;
  undefined *local_130;
  int local_128;
  int local_124;
  ulong local_120;
  float local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined *local_f8;
  int local_f0;
  int local_ec;
  undefined8 local_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  uint *local_a0;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_a0 = (uint *)0x0;
  local_b0 = PTR_DAT_04bc0510 + 0x10;
  local_a8 = *param_5;
  uStack_a4 = param_5[1];
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(&local_a8);
  if (*(long *)puVar1 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar9 = FUN_0277d6c4(param_5);
      uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar9 < *(uint *)(lVar16 + 0x1d8)) {
        puVar13 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8);
        if (puVar13 != (uint *)0x0) {
          uVar9 = *puVar13;
          local_a0 = puVar13;
          if (uVar9 != 0 && puVar13 != (uint *)(ulong)uVar9) {
            puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar9);
            if (((*puVar15 != 0) && (uVar9 = puVar15[1], uVar9 != 0)) &&
               ((ulong)(ushort)puVar15[2] != 0)) {
              lVar16 = 0xc;
              if (*(char *)((long)puVar15 + 10) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar15 + lVar16 + (ulong)(ushort)puVar15[2] * 8;
              if (lVar16 != 0) {
                uVar18 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar18 = (uint)((ulong)((long)puVar13 - lVar16) / (ulong)uVar9);
                }
                if (*puVar15 <= uVar18) {
                  uVar18 = 0xffffffff;
                }
                if ((uVar18 < *(uint *)PTR_DAT_04bc0048) &&
                   (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar18 * 2),
                   uVar9 = (uint)uVar7, uVar7 < 0x52)) goto LAB_0151af70;
              }
            }
          }
        }
      }
    }
  }
  uVar9 = 0;
LAB_0151af70:
  local_110 = (undefined *)CONCAT44(local_110._4_4_,uVar9);
  if ((uVar9 & 0xfffffffe) == 10) {
    local_c8 = 0;
    puVar1 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_b8 = 0;
    local_d8 = puVar1;
    puStack_d0 = puVar2;
    local_c0 = puVar2;
    FUN_01afb480(&local_b0,&local_d8);
    puVar8 = PTR_DAT_04bb32e0;
    iVar11 = (int)local_c8 + *(int *)(param_6 + 8);
    iVar3 = local_c8._4_4_ + *(int *)(param_6 + 0xc);
    local_110 = (undefined *)CONCAT44(*param_5,(undefined4)local_110);
    local_108 = (undefined *)CONCAT44(local_108._4_4_,param_5[1]);
    local_c8 = CONCAT44(iVar3,iVar11);
    iVar19 = (int)local_b8 + *(int *)(param_6 + 8);
    bVar14 = *PTR_DAT_04bb32e0;
    iVar4 = local_b8._4_4_ + *(int *)(param_6 + 0xc);
    local_b8 = CONCAT44(iVar4,iVar19);
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    local_110 = (undefined *)CONCAT71(local_110._1_7_,bVar14);
    local_100 = puVar1;
    local_f8 = puVar2;
    local_f0 = iVar11;
    local_ec = iVar3;
    local_e0 = iVar19;
    iStack_dc = iVar4;
    local_e8 = puVar2;
    uVar12 = FUN_0151393c(&local_110);
    if ((uVar12 & 1) != 0) {
      uVar12 = FUN_01ae9b40(&local_b0,*param_4 + 0x20000000U >> 0x1e);
      if ((uVar12 & 1) != 0) {
        iVar10 = FUN_01ae98d0(&local_b0);
        local_118 = 0.0;
        local_120 = 0;
        pfVar5 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x14) & 0xff0));
        uVar12 = (ulong)((float)((int)(long)((float)iVar10 * 90.0 * 11930465.0) + 0x60000000U >>
                                0x1e) * 90.0 * 11930465.0);
        pfVar6 = (float *)(PTR_DAT_04bb2d00 + (uVar12 >> 0x19 & 0x7f) * 0x10);
        uVar9 = *param_4 + 0x20000000U >> 0x1e;
        local_110 = (undefined *)CONCAT44(local_110._4_4_,uVar9);
        uVar18 = (uint)uVar12;
        if (uVar9 < 4) {
          fVar21 = (float)(*param_3 & 0xffffff) * 5.9604645e-08;
          fVar26 = (float)(uVar18 >> 1 & 0xffffff) * 5.9604645e-08;
          fVar25 = *pfVar6 + fVar26 * pfVar6[1];
          fVar26 = pfVar6[2] + fVar26 * pfVar6[3];
          fVar27 = fVar25 * 0.0;
          fVar26 = fVar26 + fVar26;
          fVar23 = fVar25 * (fVar25 + fVar25);
          fVar22 = fVar26 * fVar27;
          fVar26 = fVar25 * fVar26;
          fVar24 = fVar27 * (fVar27 + fVar27);
          switch(uVar9) {
          default:
            fVar20 = ((float)iVar11 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5 +
                     (fVar25 * (fVar27 + fVar27) - fVar22) * 0.0 + ((1.0 - fVar23) - fVar24) * 0.0 +
                     (fVar26 + fVar24) * 2.1875;
            fVar21 = param_2[2] + (pfVar5[2] + fVar21 * pfVar5[3]) * 10.0;
            fVar26 = fVar21 + -2.5;
            fVar21 = fVar21 + 2.5;
            iVar3 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
            iVar19 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
            iVar11 = iVar3;
            if (iVar19 <= iVar3) {
              iVar11 = iVar19;
            }
            if (iVar3 <= iVar19) {
              iVar3 = iVar19;
            }
            local_118 = ((float)iVar11 * 5.0 + (float)iVar3 * 5.0 + 5.0) * 0.5;
            break;
          case 1:
          case 3:
            fVar21 = *param_2 + (*pfVar5 + fVar21 * pfVar5[1]) * 10.0;
            fVar20 = fVar21 + -2.5;
            fVar21 = fVar21 + 2.5;
            iVar19 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
            iVar10 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
            iVar11 = iVar19;
            if (iVar10 <= iVar19) {
              iVar11 = iVar10;
            }
            if (iVar19 <= iVar10) {
              iVar19 = iVar10;
            }
            fVar20 = ((float)iVar11 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5;
            local_118 = ((float)iVar3 * 5.0 + (float)iVar4 * 5.0 + 5.0) * 0.5 +
                        (fVar22 + (fVar25 + fVar25) * fVar27) * 0.0 + (fVar24 - fVar26) * 0.0 +
                        ((1.0 - fVar24) - fVar23) * 2.1875;
          }
          local_120 = (ulong)(uint)fVar20;
        }
        uVar12 = FUN_01262040(0,PTR_DAT_04bbcc10,&local_120);
        if ((uVar12 & 1) == 0) {
          if ((param_7 & 1) != 0) {
            local_ec = 0;
            local_e8._0_4_ = 0x1010000;
            bVar14 = *puVar8;
            local_f0 = CONCAT13(local_f0._3_1_,0x101);
            local_110 = (undefined *)local_120;
            if (7 < bVar14) {
              bVar14 = 0xff;
            }
            local_108 = (undefined *)CONCAT44(0x40600000,local_118);
            local_100 = (undefined *)CONCAT71(local_100._1_7_,bVar14);
            local_100 = (undefined *)CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,(int)local_100);
            local_f8 = (undefined *)0xbf80000000000003;
            uVar12 = FUN_0251fad0(&local_110,0);
            if ((uVar12 & 1) != 0) {
              return 0;
            }
          }
          lVar16 = *(long *)PTR_DAT_04bb2720;
          if (lVar16 == 0) {
            puVar17 = &DAT_055c04a0;
          }
          else {
            puVar17 = &DAT_055c04a0;
            if (*(long *)(lVar16 + 0x330) != 0) {
              puVar17 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
              iVar11 = FUN_006bd550(*puVar17,0);
              puVar17 = (undefined8 *)PTR_DAT_04bc3a80;
              if (iVar11 != 0x758f7eaf) {
                puVar17 = &DAT_055c04a0;
              }
            }
          }
          puVar8 = PTR_DAT_04bbc1a0;
          puVar2 = PTR_DAT_04bb2d00;
          puVar1 = PTR_DAT_04bb2010;
          FUN_017baf44(*(undefined4 *)(puVar17 + 7));
          uVar9 = *param_3 + 0x20000000 >> 0x1e;
          fVar23 = (float)local_c8._4_4_;
          uVar12 = (ulong)((float)uVar9 * 90.0 * 11930465.0);
          fVar26 = (float)(int)local_c8;
          pfVar5 = (float *)(puVar2 + (uVar12 >> 0x18 & 0xff) * 0x10);
          fVar21 = (float)((uint)uVar12 & 0xffffff) * 5.9604645e-08;
          fVar27 = pfVar5[2];
          fVar20 = pfVar5[3];
          fVar22 = (*pfVar5 + fVar21 * pfVar5[1]) * -5.0;
          fVar25 = (float)local_b8._4_4_;
          fVar24 = (float)(int)local_b8;
          iVar11 = FUN_01aee3b4(&local_b0);
          local_110 = puVar8 + 0x10;
          local_130 = puVar1 + 0x10;
          fVar21 = (fVar27 + fVar21 * fVar20) * -5.0;
          if (iVar11 != 2) {
            fVar22 = -0.0;
            fVar21 = -0.0;
          }
          fVar26 = (fVar26 * 5.0 + fVar24 * 5.0 + 5.0) * 0.5 + fVar22 + -2.5;
          fVar21 = (fVar23 * 5.0 + fVar25 * 5.0 + 5.0) * 0.5 + fVar21 + -7.5;
          local_100._0_4_ = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
          local_100._4_4_ = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
          local_f0 = (int)local_100 + 1;
          local_ec = local_100._4_4_ + 3;
          local_108 = local_130;
          local_f8 = local_130;
          if ((uVar9 | 2) == 2) {
            FUN_012e1f40(&local_110,PTR_DAT_04bb2108);
          }
          iVar3 = (int)local_100;
          iVar11 = local_ec + 1;
          local_140 = &local_108;
          ppuStack_138 = &local_f8;
          local_128 = (int)local_100;
          local_124 = local_100._4_4_;
          if (iVar11 != local_100._4_4_) {
            iVar19 = local_100._4_4_;
            do {
              iVar4 = local_128;
              uVar12 = FUN_01512760(&local_130);
              if ((uVar12 & 1) != 0) {
                return 0;
              }
              if (iVar4 < local_f0) {
                local_128 = iVar4 + 1;
              }
              else {
                iVar19 = iVar19 + 1;
                local_128 = (int)local_100;
                local_124 = iVar19;
              }
            } while ((iVar3 != local_128) || (iVar11 != iVar19));
          }
          local_144 = *param_3 + 0x20000000 >> 0x1e;
          iVar11 = FUN_01ae98d0(&local_b0);
          local_148 = (int)(long)((float)iVar11 * 90.0 * 11930465.0) + 0x20000000U >> 0x1e;
          local_15c = uVar18;
          if (local_144 == local_148) {
            local_158 = local_120;
            local_150 = local_118;
            uVar9 = FUN_0151c0e8(&local_140,&local_158,&local_15c,param_7 & 1,param_8);
          }
          else {
            local_158 = local_120;
            local_150 = local_118;
            uVar9 = FUN_0151c198(&local_140,&local_158,&local_15c,param_7 & 1,param_8);
          }
          if ((uVar9 & 0xfffffffe) == 2) {
            fVar21 = (float)FUN_0097a900(&local_120,0);
            *(uint *)(param_1 + 2) = uVar18;
            *param_1 = local_120;
            *(float *)(param_1 + 1) = local_118;
            fVar26 = (float)FUN_01ae8db0(&local_b0);
            *(float *)((long)param_1 + 0xc) = fVar21 + fVar26;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

