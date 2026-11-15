
/* WARNING: Removing unreachable block (ram,0x021e780c) */
/* WARNING: Removing unreachable block (ram,0x021e75fc) */
/* WARNING: Removing unreachable block (ram,0x021e75ec) */
/* WARNING: Removing unreachable block (ram,0x021e7608) */
/* WARNING: Removing unreachable block (ram,0x021e7644) */
/* WARNING: Removing unreachable block (ram,0x021e781c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_021e7590(long param_1,float *param_2,float *param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint uVar12;
  ulong uVar13;
  short *psVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_1c0;
  float local_1bc;
  undefined *puStack_170;
  uint local_168;
  uint local_164;
  undefined *local_160;
  undefined *puStack_158;
  uint local_150;
  uint uStack_14c;
  undefined *local_148;
  uint local_140;
  uint uStack_13c;
  undefined8 local_138;
  long lStack_130;
  int local_128 [2];
  undefined8 local_120;
  uint local_118 [4];
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined4 local_ac;
  
  puVar2 = PTR_DAT_04bb27a8;
  lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar15 == 0) {
    return 0;
  }
  local_128[0] = 0;
  lVar17 = *(long *)(lVar15 + 0xd0);
  fVar22 = (float)*(int *)(param_1 + 8) * 10.0 + 2.5;
  fVar19 = (float)*(int *)(param_1 + 0xc) * 10.0 + 2.5;
  if (lVar17 == 0) {
LAB_021e7704:
    puVar18 = PTR_DAT_04bb37e0;
  }
  else {
    iVar7 = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
    lVar16 = lVar17 + 0x130 + (ulong)*(uint *)(lVar17 + 0x198) * 0x30;
    if (1 < *(uint *)(lVar17 + 0x198)) {
      lVar16 = lVar17 + 0x130;
    }
    iVar4 = *(int *)(lVar16 + 0x28);
    if (iVar7 < iVar4 || *(int *)(lVar16 + 8) + iVar4 + -1 < iVar7) goto LAB_021e7704;
    iVar8 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
    iVar5 = *(int *)(lVar16 + 0x2c);
    if ((iVar8 < iVar5 || *(int *)(lVar16 + 0xc) + iVar5 + -1 < iVar8) ||
       (uVar12 = (iVar8 - iVar5) + (iVar7 - iVar4) * *(int *)(lVar16 + 0xc),
       *(uint *)(lVar16 + 0x10) <= uVar12)) goto LAB_021e7704;
    puVar18 = (undefined *)(*(long *)(lVar16 + 0x18) + (long)(int)uVar12 * 8);
  }
  lVar17 = *(long *)PTR_DAT_04bbbc68;
  if ((((lVar17 != 0) && (*(long *)(lVar17 + 0xb0) != 0)) &&
      (*(long *)(*(long *)(lVar17 + 0xb0) + 8) != 0)) &&
     (((*(long *)(lVar17 + 0x488) != 0 && (*(long *)(*(long *)(lVar17 + 0x488) + 8) != 0)) &&
      ((*(long *)(lVar17 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar17 + 0x2b0) + 8) != 0)))))) {
    uVar12 = FUN_0277d6c4(puVar18);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      FUN_0124c030(local_128,puVar18);
      uVar13 = FUN_0123d890(CONCAT44(local_118[1],local_118[0]),4);
      if (((uVar13 & 1) == 0) || ((param_5 & 1) == 0)) {
        if ((uVar13 & 1) != 0) goto LAB_021e77b0;
      }
      else {
        uVar13 = FUN_0123d890(CONCAT44(local_118[1],local_118[0]),0);
        if ((uVar13 & 1) == 0) {
LAB_021e77b0:
          local_d0 = 0;
          local_120 = 0xffffffff;
          local_b8 = 0x20000000;
          local_118[0] = 0xc0000000;
          local_108 = 1;
          local_100 = 0x40000000;
          local_f0 = 0x1ffffffff;
          local_e8 = 0xe0000000;
          local_d8 = 0x100000000;
          local_c0 = 0x100000001;
          local_1c0 = 0;
          local_138 = *(undefined8 *)(*(long *)puVar2 + 0x1f8);
          local_1bc = 3.4028235e+38;
          fVar22 = 0.0;
          fVar19 = 0.0;
          puVar2 = PTR_DAT_04bbc1a0 + 0x10;
          puVar18 = PTR_DAT_04bb2010 + 0x10;
          lVar17 = 0;
          lStack_130 = *(long *)PTR_DAT_04bb27c8 + 0x28;
LAB_021e7898:
          fVar26 = (float)(local_128[lVar17 * 6 + 2] + *(int *)(param_1 + 8));
          fVar25 = (float)(int)(local_118[lVar17 * 6 + -1] + *(int *)(param_1 + 0xc));
          fVar20 = fVar26 * 10.0;
          fVar23 = fVar25 * 10.0;
          fVar21 = fVar20 + 2.5;
          fVar24 = fVar23 + 2.5;
          fVar20 = fVar20 + 10.0 + -2.5;
          fVar23 = fVar23 + 10.0 + -2.5;
          local_140 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
          local_164 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
          uVar9 = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
          uVar12 = local_140;
          if ((int)uVar9 <= (int)local_140) {
            uVar12 = uVar9;
          }
          if ((int)local_140 <= (int)uVar9) {
            local_140 = uVar9;
          }
          uVar10 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0);
          uStack_13c = local_164;
          if ((int)local_164 <= (int)uVar10) {
            uStack_13c = uVar10;
          }
          if ((int)uVar10 <= (int)local_164) {
            local_164 = uVar10;
          }
          uVar1 = uStack_13c + 1;
          bVar11 = uVar1 != local_164;
          local_160 = puVar2;
          puStack_170 = puVar18;
          puStack_158 = puVar18;
          local_148 = puVar18;
          uStack_14c = local_164;
          local_168 = uVar12;
          local_150 = uVar12;
          if ((param_5 & 1) == 0) {
            while (bVar11) {
              do {
                lVar16 = *(long *)(lVar15 + 0xd0);
                if (lVar16 == 0) {
                  psVar14 = (short *)PTR_DAT_04bb37e0;
                }
                else {
                  lVar3 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
                  if (1 < *(uint *)(lVar16 + 0x198)) {
                    lVar3 = lVar16 + 0x130;
                  }
                  psVar14 = (short *)FUN_012eb21c(lVar3,&puStack_170,0);
                }
                if (*psVar14 != -2) goto LAB_021e7bd8;
                if ((int)local_168 < (int)local_140) {
                  local_168 = local_168 + 1;
                }
                else {
                  local_164 = local_164 + 1;
                  local_168 = local_150;
                }
              } while (uVar12 != local_168);
              bVar11 = uVar1 != local_164;
            }
          }
          else {
            while (bVar11) {
              do {
                lVar16 = *(long *)(lVar15 + 0xd0);
                if (lVar16 == 0) {
                  psVar14 = (short *)PTR_DAT_04bb37e0;
                }
                else {
                  lVar3 = lVar16 + 0x130 + (ulong)*(uint *)(lVar16 + 0x198) * 0x30;
                  if (1 < *(uint *)(lVar16 + 0x198)) {
                    lVar3 = lVar16 + 0x130;
                  }
                  psVar14 = (short *)FUN_012eb21c(lVar3,&puStack_170,0);
                }
                if (((((*psVar14 != -2) || (*(long *)PTR_DAT_04bb27c8 == 0)) ||
                     (lVar16 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar16 == 0)) ||
                    (((int)local_168 < 0 || ((int)local_164 < 0)))) ||
                   (*(uint *)(lVar16 + 0x38) <= local_168 || *(uint *)(lVar16 + 0x3c) <= local_164))
                goto LAB_021e7bd8;
                uVar6 = local_168 + *(uint *)(lVar16 + 0x38) * local_164;
                if ((*(uint *)(lVar16 + 0x68) <= uVar6 || *(long *)(lVar16 + 0x70) == 0) ||
                   (local_ac = 0,
                   (*(uint *)(*(long *)(lVar16 + 0x70) + (long)(int)uVar6 * 4) & 1) == 0))
                goto LAB_021e7bd8;
                if ((int)local_168 < (int)local_140) {
                  local_168 = local_168 + 1;
                }
                else {
                  local_164 = local_164 + 1;
                  local_168 = local_150;
                }
              } while (uVar12 != local_168);
              bVar11 = uVar1 != local_164;
            }
          }
          uVar13 = FUN_021e7c50(&local_160);
          if ((uVar13 & 1) == 0) {
            uVar13 = FUN_035aa210(uVar9 - 1,uVar10 - 1,&local_138);
            if (((((uVar13 & 1) != 0) &&
                 (uVar13 = FUN_035aa210(uVar9 - 1,uVar10,&local_138), (uVar13 & 1) != 0)) &&
                (uVar13 = FUN_035aa210(uVar9,uVar10 - 1,&local_138), (uVar13 & 1) != 0)) &&
               (uVar13 = FUN_035aa210(uVar9,uVar10,&local_138), (uVar13 & 1) != 0)) {
              fVar20 = fVar26 * 10.0 + 5.0;
              fVar21 = fVar25 * 10.0 + 5.0;
              fVar23 = *param_2 - fVar20;
              fVar24 = param_2[2] - fVar21;
              fVar23 = fVar24 * fVar24 + fVar23 * fVar23;
              if (fVar23 < local_1bc) {
                local_1c0 = local_118[lVar17 * 6];
                if ((param_5 & 1) == 0) {
                  local_1c0 = local_118[lVar17 * 6] ^ 0x80000000;
                }
                fVar19 = fVar20;
                fVar22 = fVar21;
                local_1bc = fVar23;
              }
            }
          }
          goto LAB_021e7be4;
        }
      }
    }
  }
  return 0;
LAB_021e7bd8:
  FUN_021e7c50(&local_160);
LAB_021e7be4:
  lVar17 = lVar17 + 1;
  if (lVar17 == 5) {
    if ((fVar19 == 0.0) && (fVar22 == 0.0)) {
      return 0;
    }
    *param_3 = fVar19;
    param_3[1] = 0.0;
    param_3[2] = fVar22;
    *param_4 = local_1c0;
    return 1;
  }
  goto LAB_021e7898;
}

