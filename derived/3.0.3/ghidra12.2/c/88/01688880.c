
/* WARNING: Removing unreachable block (ram,0x016893c8) */
/* WARNING: Removing unreachable block (ram,0x01689370) */
/* WARNING: Removing unreachable block (ram,0x01689330) */
/* WARNING: Removing unreachable block (ram,0x016892f0) */
/* WARNING: Removing unreachable block (ram,0x01688f64) */
/* WARNING: Removing unreachable block (ram,0x01688930) */
/* WARNING: Removing unreachable block (ram,0x01688920) */
/* WARNING: Removing unreachable block (ram,0x01688f74) */
/* WARNING: Removing unreachable block (ram,0x016892e4) */
/* WARNING: Removing unreachable block (ram,0x01689324) */
/* WARNING: Removing unreachable block (ram,0x01689364) */
/* WARNING: Removing unreachable block (ram,0x0168939c) */
/* WARNING: Removing unreachable block (ram,0x016893f4) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_01688880(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 **ppuVar2;
  undefined8 *******pppppppuVar3;
  undefined *puVar4;
  undefined8 **ppuVar5;
  undefined8 *******pppppppuVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  bool bVar22;
  int iVar23;
  uint uVar24;
  undefined *puVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  undefined8 **local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  int local_bc;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  uint local_a0;
  uint uStack_9c;
  undefined8 *******local_98;
  int local_90;
  int iStack_8c;
  char local_80;
  char local_7f;
  char local_7e;
  byte local_7d;
  
  puVar4 = PTR_DAT_04bb27c8;
  puVar25 = PTR_DAT_04bb2010;
  uVar12 = *(uint *)(param_2 + 8);
  uVar24 = *(uint *)(param_2 + 0xc);
  local_b0 = (undefined8 *******)CONCAT44(local_b0._4_4_,1);
  fVar27 = (float)(int)uVar12 * 0.5;
  fVar28 = (float)(int)uVar24 * 0.5;
  uVar19 = 0;
  if (fVar27 != (float)(int)fVar27) {
    uVar19 = (uint)(fVar27 < 0.0);
  }
  uVar13 = 0;
  if (fVar28 != (float)(int)fVar28) {
    uVar13 = (uint)(fVar28 < 0.0);
  }
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
    local_bc = 0;
  }
  else {
    lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
    local_bc = 0;
    if (lVar18 != 0) {
      uVar14 = ((int)fVar27 - uVar19) - *(int *)(lVar18 + 0x28);
      uVar15 = *(uint *)(lVar18 + 0x18);
      uVar10 = ((int)fVar28 - uVar13) - *(int *)(lVar18 + 0x2c);
      if ((uVar14 < uVar15 && uVar10 <= *(uint *)(lVar18 + 0x1c)) &&
          (uVar15 <= uVar14 || *(uint *)(lVar18 + 0x1c) != uVar10)) {
        uVar14 = uVar14 + uVar15 * uVar10;
LAB_016889b4:
        if (*(uint *)(lVar18 + 0x30) <= uVar14) {
          uVar14 = 0;
        }
        puVar20 = (undefined8 *)(*(long *)(lVar18 + 0x38) + (long)(int)uVar14 * 0x68);
      }
      else {
        if (*(char *)(lVar18 + 0x88) != '\0') {
          uVar14 = ((int)fVar27 - uVar19) - *(int *)(lVar18 + 0x98);
          uVar13 = ((int)fVar28 - uVar13) - *(int *)(lVar18 + 0x9c);
          uVar19 = *(uint *)(lVar18 + 0xa0);
          if ((uVar14 < uVar19 && uVar13 <= *(uint *)(lVar18 + 0xa4)) &&
              (uVar19 <= uVar14 || *(uint *)(lVar18 + 0xa4) != uVar13)) {
            uVar14 = uVar14 + uVar19 * uVar13 + *(int *)(lVar18 + 0x8c);
            goto LAB_016889b4;
          }
        }
        puVar20 = &DAT_051a50f0;
      }
      local_bc = (int)*(char *)(puVar20 + 2);
    }
  }
  lVar18 = *(long *)PTR_DAT_04bb5c90;
  iVar26 = *(int *)(lVar18 + 0x28);
  iVar8 = *(int *)(lVar18 + 0x2c);
  iVar9 = *(int *)(lVar18 + 0x38);
  if ((param_3 & 1) != 0) {
    uVar19 = uVar24 + 2;
    ppuVar2 = (undefined8 **)(PTR_DAT_04bb2010 + 0x10);
    uVar13 = uVar12;
    do {
      local_e0 = (undefined8 *******)CONCAT44(uVar24,uVar13);
      local_b8 = 0;
      local_e8 = ppuVar2;
      if ((((*(long *)puVar4 == 0) || ((int)uVar13 < 0)) ||
          (lVar18 = *(long *)(*(long *)puVar4 + 0x90), lVar18 == 0)) ||
         (((int)uVar24 < 0 ||
          (*(uint *)(lVar18 + 0x38) <= uVar13 || *(uint *)(lVar18 + 0x3c) <= uVar24)))) {
LAB_01688b28:
        pppppppuVar3 = (undefined8 *******)(puVar25 + 0x10);
        ppuVar2 = (undefined8 **)(PTR_DAT_04bbc1a0 + 0x10);
        puVar25 = PTR_DAT_04bbc1a0;
        iVar26 = -2;
        goto LAB_016890dc;
      }
      FUN_00962530(lVar18,&local_e8,&local_b0);
      local_b8 = (ulong)CONCAT14(local_7e,(uint)local_7d);
      if (((local_80 != ' ') || ((local_7f != ' ' || (local_7e != ' ')))) || (local_7d != 0x20))
      goto LAB_01688b28;
      if ((int)uVar13 < (int)(uVar12 + 1)) {
        uVar13 = uVar13 + 1;
      }
      else {
        uVar24 = uVar24 + 1;
        uVar13 = uVar12;
      }
    } while ((uVar12 != uVar13) || (uVar19 != uVar24));
    uVar12 = *(uint *)(param_2 + 8);
    uVar24 = *(uint *)(param_2 + 0xc);
  }
  pppppppuVar3 = (undefined8 *******)(puVar25 + 0x10);
  local_90 = uVar12 + 1;
  puVar4 = PTR_DAT_04bbc1a0 + 0x10;
  iStack_8c = uVar24 + 1;
  local_b0 = (undefined8 *******)puVar4;
  local_a8 = pppppppuVar3;
  local_a0 = uVar12;
  uStack_9c = uVar24;
  local_98 = pppppppuVar3;
  uVar16 = FUN_0097d180(&local_b0);
  puVar11 = PTR_DAT_04bb27c8;
  if ((uVar16 & 1) == 0) {
    iVar21 = -2;
    do {
      iVar23 = -2;
      do {
        local_e0 = (undefined8 *******)((ulong)local_e0 & 0xffffffff00000000);
        local_e8 = (undefined8 **)0x0;
        uVar24 = iVar23 + *(int *)(param_2 + 8);
        uVar19 = *(int *)(param_2 + 0xc) + iVar21;
        local_a8 = (undefined8 *******)CONCAT44(uVar19,uVar24);
        local_b0 = pppppppuVar3;
        local_e8 = (undefined8 **)0x20;
        lVar18 = *(long *)puVar11;
        if (((lVar18 != 0) && (*(long *)(lVar18 + 0x90) != 0)) &&
           (uVar16 = FUN_0094b728(lVar18 + 0x28,&local_b0,&local_e8), (uVar16 & 1) != 0))
        goto LAB_01688afc;
        uVar12 = FUN_0097d6c0(&local_b0,1);
        local_b0 = (undefined8 *******)(puVar25 + 0x10);
        iVar17 = uVar24 + 1;
        local_e0 = (undefined8 *******)((ulong)local_e0 & 0xffffffff00000000);
        local_a8 = (undefined8 *******)CONCAT44(uVar19,iVar17);
        local_e8 = (undefined8 **)0x0;
        local_e8 = (undefined8 **)0x20;
        lVar18 = *(long *)puVar11;
        if (((lVar18 != 0) && (*(long *)(lVar18 + 0x90) != 0)) &&
           (uVar16 = FUN_0094b728(lVar18 + 0x28,&local_b0,&local_e8), (uVar16 & 1) != 0))
        goto LAB_01688afc;
        uVar13 = FUN_0097d6c0(&local_b0,1);
        local_b0 = (undefined8 *******)(puVar25 + 0x10);
        iVar1 = uVar19 + 1;
        local_e0 = (undefined8 *******)((ulong)local_e0 & 0xffffffff00000000);
        local_a8 = (undefined8 *******)CONCAT44(iVar1,uVar24);
        local_e8 = (undefined8 **)0x0;
        local_e8 = (undefined8 **)0x20;
        lVar18 = *(long *)puVar11;
        if (((lVar18 != 0) && (*(long *)(lVar18 + 0x90) != 0)) &&
           (uVar16 = FUN_0094b728(lVar18 + 0x28,&local_b0,&local_e8), (uVar16 & 1) != 0))
        goto LAB_01688afc;
        uVar14 = FUN_0097d6c0(&local_b0,1);
        local_b0 = (undefined8 *******)(puVar25 + 0x10);
        local_a8 = (undefined8 *******)CONCAT44(iVar1,iVar17);
        local_e0 = (undefined8 *******)((ulong)local_e0 & 0xffffffff00000000);
        local_e8 = (undefined8 **)0x0;
        local_e8 = (undefined8 **)&SUB_00000020;
        lVar18 = *(long *)puVar11;
        if (((lVar18 != 0) && (*(long *)(lVar18 + 0x90) != 0)) &&
           (uVar16 = FUN_0094b728(lVar18 + 0x28,&local_b0,&local_e8), (uVar16 & 1) != 0))
        goto LAB_01688afc;
        uVar15 = FUN_0097d6c0(&local_b0,1);
        puVar25 = PTR_DAT_04bb2010;
        iVar7 = ((uVar13 ^ 0xffffffff) & 1) + ((uVar12 ^ 0xffffffff) & 1) +
                ((uVar14 ^ 0xffffffff) & 1) + ((uVar15 ^ 0xffffffff) & 1);
        if (iVar7 == 4) {
          local_90 = iVar17;
          iStack_8c = iVar1;
          local_a8 = (undefined8 *******)(PTR_DAT_04bb2010 + 0x10);
          local_98 = local_a8;
          local_a0 = uVar24;
          uStack_9c = uVar19;
          local_b0 = (undefined8 *******)puVar4;
          if (((*(long *)puVar11 == 0) || (lVar18 = *(long *)(*(long *)puVar11 + 0x90), lVar18 == 0)
              ) || (uVar16 = FUN_00971f80(lVar18,&local_b0,0), (uVar16 & 1) == 0)) {
            if ((iVar21 != 0) && (iVar23 != 0)) {
              fVar28 = (float)(int)uVar24 * 0.5;
              fVar27 = (float)(int)uVar19 * 0.5;
              uVar12 = 0;
              if (fVar28 != (float)(int)fVar28) {
                uVar12 = (uint)(fVar28 < 0.0);
              }
              uVar13 = 0;
              if (fVar27 != (float)(int)fVar27) {
                uVar13 = (uint)(fVar27 < 0.0);
              }
              local_b0._4_4_ = (undefined4)((ulong)local_b0 >> 0x20);
              if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) == 0) {
                iVar17 = 0;
              }
              else {
                lVar18 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0xb0);
                iVar17 = 0;
                if (lVar18 != 0) {
                  uVar14 = ((int)fVar28 - uVar12) - *(int *)(lVar18 + 0x28);
                  if ((uVar14 < *(uint *)(lVar18 + 0x18)) &&
                     (uVar15 = ((int)fVar27 - uVar13) - *(int *)(lVar18 + 0x2c),
                     uVar15 < *(uint *)(lVar18 + 0x1c))) {
                    uVar14 = uVar14 + *(uint *)(lVar18 + 0x18) * uVar15;
LAB_0168900c:
                    if (*(uint *)(lVar18 + 0x30) <= uVar14) {
                      uVar14 = 0;
                    }
                    puVar20 = (undefined8 *)(*(long *)(lVar18 + 0x38) + (long)(int)uVar14 * 0x68);
                  }
                  else {
                    if (*(char *)(lVar18 + 0x88) != '\0') {
                      uVar12 = ((int)fVar28 - uVar12) - *(int *)(lVar18 + 0x98);
                      if (uVar12 < *(uint *)(lVar18 + 0xa0)) {
                        uVar13 = ((int)fVar27 - uVar13) - *(int *)(lVar18 + 0x9c);
                        puVar20 = &DAT_051a50f0;
                        if (uVar13 < *(uint *)(lVar18 + 0xa4)) {
                          uVar14 = uVar12 + *(uint *)(lVar18 + 0xa0) * uVar13 +
                                   *(int *)(lVar18 + 0x8c);
                          goto LAB_0168900c;
                        }
                        goto LAB_01689030;
                      }
                    }
                    puVar20 = &DAT_051a50f0;
                  }
LAB_01689030:
                  iVar17 = (int)*(char *)(puVar20 + 2);
                }
              }
              local_b0 = (undefined8 *******)CONCAT44(local_b0._4_4_,iVar17);
              if (iVar17 == local_bc) goto LAB_01688ba4;
            }
            if ((((((int)uVar24 < iVar9 + -3) || (iVar9 < (int)uVar24)) || ((int)uVar19 < iVar8)) ||
                (iVar8 + 3 < (int)uVar19)) &&
               (((uVar12 = 0, (int)uVar24 < iVar26 || (iVar26 + 3 < (int)uVar24)) ||
                (((int)uVar19 < iVar8 || (iVar8 + 3 < (int)uVar19)))))) goto LAB_01688b00;
          }
        }
        else {
          iVar17 = (uVar13 & 1) + (uVar12 & 1) + (uVar14 & 1) + (uVar15 & 1);
          if ((iVar17 == 4) || (((iVar23 == 0 || iVar21 == 0 && (iVar7 != 0)) && (iVar17 != 0))))
          goto LAB_01688afc;
        }
LAB_01688ba4:
        bVar22 = iVar23 < 1;
        iVar23 = iVar23 + 2;
      } while (bVar22);
      bVar22 = iVar21 < 1;
      iVar21 = iVar21 + 2;
    } while (bVar22);
    bVar22 = false;
    goto LAB_016892ac;
  }
  goto LAB_01688afc;
LAB_016890dc:
  do {
    uVar19 = *(uint *)(param_2 + 8);
    uVar24 = *(int *)(param_2 + 0xc) + iVar26;
    iVar8 = uVar24 + 1;
    local_b0 = (undefined8 *******)ppuVar2;
    local_a8 = pppppppuVar3;
    uStack_9c = uVar24;
    local_98 = pppppppuVar3;
    iStack_8c = iVar8;
    if (iVar26 == 0) {
      local_a0 = uVar19 - 2;
      local_90 = uVar19 - 1;
      uVar16 = FUN_0097d8e0(&local_b0);
      puVar4 = PTR_DAT_04bbc1a0;
      puVar25 = PTR_DAT_04bb2010;
      if ((uVar16 & 1) == 0) {
        local_d8 = (undefined8 ******)CONCAT44(uVar24,uVar19 - 2);
        local_e8 = (undefined8 **)(PTR_DAT_04bbc1a0 + 0x10);
        local_e0 = (undefined8 *******)(PTR_DAT_04bb2010 + 0x10);
        local_d0 = local_e0;
        local_c8 = uVar19 - 1;
        iStack_c4 = iVar8;
        uVar16 = FUN_0097d3a0(&local_e8);
        if ((uVar16 & 1) == 0) goto LAB_01688afc;
      }
      local_b0 = (undefined8 *******)(puVar4 + 0x10);
      local_d8 = (undefined8 ******)(puVar25 + 0x10);
      iVar9 = *(int *)(param_2 + 8);
      uStack_9c = *(int *)(param_2 + 0xc);
      local_d0 = *(undefined8 ********)(param_2 + 8);
      local_90 = iVar9 + 1;
      iStack_8c = uStack_9c + 1;
      iVar8 = uStack_9c + 2;
      local_e8 = (undefined8 **)&local_a8;
      local_e0 = &local_98;
      local_a8 = (undefined8 *******)local_d8;
      local_a0 = iVar9;
      local_98 = (undefined8 *******)local_d8;
      do {
        uVar16 = FUN_0097cff0(&local_d8);
        if ((uVar16 & 1) == 0) goto LAB_01688afc;
        if ((int)local_d0 < *(int *)(local_e0 + 1)) {
          iVar23 = (int)local_d0 + 1;
          iVar21 = local_d0._4_4_;
        }
        else {
          iVar21 = local_d0._4_4_ + 1;
          iVar23 = *(int *)(local_e8 + 1);
          local_d0 = (undefined8 *******)CONCAT44(iVar21,(int)local_d0);
        }
        local_d0 = (undefined8 *******)CONCAT44(local_d0._4_4_,iVar23);
      } while (iVar9 != iVar23 || iVar8 != iVar21);
      ppuVar5 = (undefined8 **)(puVar4 + 0x10);
      pppppppuVar6 = (undefined8 *******)(PTR_DAT_04bb2010 + 0x10);
      uVar19 = *(uint *)(param_2 + 0xc);
      uVar24 = *(int *)(param_2 + 8) + 2;
      iVar8 = *(int *)(param_2 + 8) + 3;
      local_b0 = (undefined8 *******)ppuVar5;
      local_a8 = pppppppuVar6;
      local_a0 = uVar24;
      uStack_9c = uVar19;
      local_98 = pppppppuVar6;
      local_90 = iVar8;
      iStack_8c = uVar19 + 1;
      uVar16 = FUN_0097d8e0(&local_b0);
      if ((uVar16 & 1) == 0) {
        local_d8 = (undefined8 ******)CONCAT44(uVar19,uVar24);
        local_e8 = ppuVar5;
        local_e0 = pppppppuVar6;
        local_d0 = pppppppuVar6;
        local_c8 = iVar8;
        iStack_c4 = uVar19 + 1;
        uVar16 = FUN_0097d3a0(&local_e8);
        puVar25 = PTR_DAT_04bbc1a0;
        goto joined_r0x016892a0;
      }
      puVar25 = PTR_DAT_04bbc1a0;
    }
    else {
      local_a0 = uVar19;
      local_90 = uVar19 + 1;
      uVar16 = FUN_0097d8e0(&local_b0);
      if ((uVar16 & 1) == 0) {
        local_e8 = (undefined8 **)(puVar25 + 0x10);
        local_d8 = (undefined8 ******)CONCAT44(uVar24,uVar19);
        local_e0 = (undefined8 *******)(PTR_DAT_04bb2010 + 0x10);
        local_d0 = local_e0;
        local_c8 = uVar19 + 1;
        iStack_c4 = iVar8;
        uVar16 = FUN_0097d3a0(&local_e8);
joined_r0x016892a0:
        if ((uVar16 & 1) == 0) goto LAB_01688afc;
      }
    }
    bVar22 = iVar26 < 1;
    iVar26 = iVar26 + 2;
  } while (bVar22);
  bVar22 = true;
LAB_016892ac:
  local_b0._0_4_ = 6;
  local_e8._0_4_ = 0xb;
  uVar16 = FUN_016967f8(param_1 + 0x1a058,param_2,param_1 + 0x1f080,1);
  if ((uVar16 & 1) == 0) {
    local_e8._0_4_ = 0xb;
    local_b0._0_4_ = 0xc;
    uVar16 = FUN_016967f8(param_1 + 0x20088,param_2,param_1 + 0x1f080,1);
    if ((uVar16 & 1) == 0) {
      local_e8 = (undefined8 **)CONCAT44(local_e8._4_4_,0xb);
      local_b0._0_4_ = 0xd;
      uVar16 = FUN_016967f8(param_1 + 0x21090,param_2,param_1 + 0x1f080,1);
      if ((uVar16 & 1) == 0) {
        local_b0._0_4_ = 0x16;
        uVar16 = FUN_016965d0(param_1 + 0x2a0d8,param_2,1);
        if ((uVar16 & 1) == 0) {
          local_b0._0_4_ = 0x15;
          uVar16 = FUN_016965d0(param_1 + 0x290d0,param_2,1);
          if ((uVar16 & 1) == 0) {
            local_b0 = (undefined8 *******)CONCAT44(local_b0._4_4_,1);
            uVar12 = FUN_01695900(param_1 + 0x4008,param_2,1);
            if (!bVar22 && (uVar12 & 1) == 0) {
              uVar12 = FUN_01676880(param_2,1);
            }
            uVar12 = uVar12 ^ 1;
            goto LAB_01688b00;
          }
        }
      }
    }
  }
LAB_01688afc:
  uVar12 = 0;
LAB_01688b00:
  return uVar12 & 1;
}

