
/* WARNING: Removing unreachable block (ram,0x022a7c4c) */
/* WARNING: Removing unreachable block (ram,0x022a7c5c) */
/* WARNING: Removing unreachable block (ram,0x022a7c68) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_022a7140(long param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined8 *****pppppuVar4;
  undefined8 ****ppppuVar5;
  undefined8 *****pppppuVar6;
  undefined8 ****ppppuVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  ulong uVar20;
  undefined8 uVar21;
  char cVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  uint *puVar28;
  uint uVar29;
  int *piVar30;
  undefined8 *puVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  undefined *puVar36;
  float fVar37;
  float fVar38;
  undefined8 *****local_128;
  uint local_120;
  uint uStack_11c;
  undefined *local_118;
  int local_110;
  int iStack_10c;
  undefined8 *****local_108;
  float local_100;
  uint local_fc;
  byte local_f8;
  int local_ec;
  undefined8 *****local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  int iStack_c4;
  undefined8 *****local_c0;
  undefined8 local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined8 *****local_a8;
  int local_a0;
  int iStack_9c;
  ulong local_98;
  undefined4 local_90;
  int local_8c [3];
  
  puVar13 = PTR_DAT_04bb27c8;
  puVar36 = PTR_DAT_04bb2010;
  if ((param_3 & 1) != 0) {
    return 1;
  }
  iVar10 = *(int *)(PTR_DAT_04bc3a80 + 0x38);
  if ((param_2 & 1) == 0) {
    bVar1 = true;
  }
  else {
    iVar24 = *(int *)(param_1 + 8);
    iVar32 = *(int *)(param_1 + 0xc);
    pppppuVar4 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
    iVar34 = iVar32 + 2;
    iVar35 = iVar24;
    do {
      lVar23 = *(long *)puVar13;
      local_b8 = (undefined8 *****)CONCAT44(iVar32,iVar35);
      local_e8 = (undefined8 *****)((ulong)local_e8 & 0xffffffff00000000);
      local_108 = (undefined8 *****)((ulong)local_108 & 0xffffffff00000000);
      local_128 = (undefined8 *****)((ulong)local_128 & 0xffffffff00000000);
      local_98 = local_98 & 0xffffffff00000000;
      if ((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) {
LAB_022a72fc:
        ppppuVar7 = (undefined8 ****)(PTR_DAT_04bbc1a0 + 0x10);
        ppppuVar5 = (undefined8 ****)(puVar36 + 0x10);
        iVar34 = -2;
        goto LAB_022a73fc;
      }
      local_c0 = pppppuVar4;
      uVar20 = FUN_009493f8(lVar23 + 0x28,&local_c0,&local_e8,&local_108,&local_128,&local_98);
      if (((uVar20 & 1) == 0) ||
         (((((int)local_e8 != 0x20 || ((int)local_108 != 0x20)) || ((int)local_128 != 0x20)) ||
          ((int)local_98 != 0x20)))) goto LAB_022a72fc;
      if (iVar35 < iVar24 + 1) {
        iVar35 = iVar35 + 1;
      }
      else {
        iVar32 = iVar32 + 1;
        iVar35 = iVar24;
      }
    } while ((iVar24 != iVar35) || (iVar34 != iVar32));
    bVar1 = false;
  }
  goto LAB_022a7254;
  while( true ) {
    uVar2 = *(uint *)(param_1 + 0xc);
    local_108 = (undefined8 *****)(puVar36 + 0x10);
    if (iVar34 == 0) {
      uVar8 = *(int *)(param_1 + 8) + 2;
      iVar32 = *(int *)(param_1 + 8) + 3;
      pppppuVar4 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
      local_c0 = pppppuVar4;
      local_b8 = local_108;
      local_b0 = uVar8;
      uStack_ac = uVar2;
      local_a8 = local_108;
      local_a0 = iVar32;
      iStack_9c = uVar2 + 1;
      uVar20 = FUN_00978be0(&local_c0);
      puVar36 = PTR_DAT_04bb2010;
      if ((uVar20 & 1) == 0) {
        local_d8 = (undefined8 *****)CONCAT44(uVar2,uVar8);
        local_e0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
        local_e8 = pppppuVar4;
        local_d0 = local_e0;
        local_c8 = iVar32;
        iStack_c4 = uVar2 + 1;
        uVar20 = FUN_009761f0(&local_e8);
        if ((uVar20 & 1) == 0) goto LAB_022a83f8;
      }
    }
    bVar1 = 0 < iVar34;
    iVar34 = iVar34 + 2;
    if (bVar1) break;
LAB_022a73fc:
    uVar8 = *(uint *)(param_1 + 8);
    uVar2 = *(int *)(param_1 + 0xc) + iVar34;
    uStack_ac = uVar2;
    if (iVar34 == 0) {
      local_c0 = (undefined8 *****)ppppuVar7;
      local_b8 = (undefined8 *****)ppppuVar5;
      local_b0 = uVar8 - 2;
      local_a8 = (undefined8 *****)ppppuVar5;
      local_a0 = uVar8 - 1;
      iStack_9c = uVar2 + 1;
      uVar20 = FUN_00978be0(&local_c0);
      puVar36 = PTR_DAT_04bb2010;
      if ((uVar20 & 1) == 0) {
        local_d8 = (undefined8 *****)CONCAT44(uVar2,uVar8 - 2);
        local_e8 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
        local_e0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
        local_d0 = local_e0;
        local_c8 = uVar8 - 1;
        iStack_c4 = uVar2 + 1;
        uVar20 = FUN_009761f0(&local_e8);
        if ((uVar20 & 1) == 0) goto LAB_022a83f8;
      }
      local_108 = (undefined8 *****)(puVar36 + 0x10);
      uVar2 = *(uint *)(param_1 + 8);
      local_fc = *(uint *)(param_1 + 0xc);
      local_d0 = *(undefined8 ******)(param_1 + 8);
      iStack_9c = local_fc + 1;
      iVar32 = local_fc + 2;
      local_c0 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
      local_a0 = uVar2 + 1;
      local_100 = (float)uVar2;
      local_e8 = (undefined8 *****)&local_b8;
      local_e0 = &local_a8;
      local_d8 = local_108;
      local_b8 = local_108;
      local_b0 = uVar2;
      uStack_ac = local_fc;
      local_a8 = local_108;
      do {
        uVar20 = FUN_00976070(&local_d8);
        puVar36 = PTR_DAT_04bb2010;
        if ((uVar20 & 1) == 0) goto LAB_022a83f8;
        if ((int)local_d0 < *(int *)(local_e0 + 1)) {
          uVar8 = (int)local_d0 + 1;
          iVar24 = local_d0._4_4_;
        }
        else {
          iVar24 = local_d0._4_4_ + 1;
          uVar8 = *(uint *)(local_e8 + 1);
          local_d0 = (undefined8 *****)CONCAT44(iVar24,(int)local_d0);
        }
        local_d0 = (undefined8 *****)CONCAT44(local_d0._4_4_,uVar8);
      } while (uVar2 != uVar8 || iVar32 != iVar24);
      if ((iVar10 == -0x17df00c3) && (uVar20 = FUN_022a8b60(&local_108), (uVar20 & 1) != 0))
      goto LAB_022a83f8;
    }
    else {
      pppppuVar4 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
      pppppuVar6 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
      local_108 = pppppuVar4;
      local_100 = (float)uVar8;
      local_fc = uVar2;
      local_c0 = pppppuVar6;
      local_b8 = pppppuVar4;
      local_b0 = uVar8;
      local_a8 = pppppuVar4;
      local_a0 = uVar8 + 1;
      iStack_9c = uVar2 + 1;
      uVar20 = FUN_00978be0(&local_c0);
      if ((uVar20 & 1) == 0) {
        local_d8 = (undefined8 *****)CONCAT44(uVar2,uVar8);
        local_e8 = pppppuVar6;
        local_e0 = pppppuVar4;
        local_d0 = pppppuVar4;
        local_c8 = uVar8 + 1;
        iStack_c4 = uVar2 + 1;
        uVar20 = FUN_009761f0(&local_e8);
        puVar36 = PTR_DAT_04bb2010;
        if ((uVar20 & 1) == 0) goto LAB_022a83f8;
      }
      else {
        puVar36 = PTR_DAT_04bb2010;
      }
    }
  }
  bVar1 = true;
LAB_022a7254:
  lVar23 = *(long *)PTR_DAT_04bb5c90;
  iVar24 = *(int *)(lVar23 + 0x38);
  iVar35 = iVar24 + -3;
  uVar8 = *(uint *)(lVar23 + 0x28);
  iVar32 = *(int *)(lVar23 + 0x2c);
  uVar2 = iVar32 + 3;
  iVar34 = uVar8 + 3;
  if ((!bVar1) || ((param_2 & 1) == 0)) {
    if (iVar10 == -0x17df00c3) {
      local_d8 = (undefined8 *****)(puVar36 + 0x10);
      local_e8 = (undefined8 *****)&local_b8;
      local_e0 = &local_a8;
      local_c0 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
      uVar16 = *(uint *)(param_1 + 8);
      uStack_ac = *(uint *)(param_1 + 0xc);
      local_d0 = *(undefined8 ******)(param_1 + 8);
      local_a0 = uVar16 + 1;
      iStack_9c = uStack_ac + 1;
      iVar15 = uStack_ac + 2;
      local_b8 = local_d8;
      local_b0 = uVar16;
      local_a8 = local_d8;
      do {
        uVar20 = FUN_00976070(&local_d8);
        if ((uVar20 & 1) == 0) goto LAB_022a7bec;
        if ((int)local_d0 < *(int *)(local_e0 + 1)) {
          uVar29 = (int)local_d0 + 1;
          iVar19 = local_d0._4_4_;
        }
        else {
          iVar19 = local_d0._4_4_ + 1;
          uVar29 = *(uint *)(local_e8 + 1);
          local_d0 = (undefined8 *****)CONCAT44(iVar19,(int)local_d0);
        }
        local_d0 = (undefined8 *****)CONCAT44(local_d0._4_4_,uVar29);
      } while (uVar16 != uVar29 || iVar15 != iVar19);
      uVar20 = FUN_022a8b60(param_1);
      if ((uVar20 & 1) != 0) {
LAB_022a7bec:
        puVar13 = PTR_DAT_04bb27c8;
        local_c0 = (undefined8 *****)((ulong)local_c0 & 0xffffffff00000000);
        fVar38 = (float)*(int *)(param_1 + 0xc) * 0.5;
        fVar37 = (float)*(int *)(param_1 + 8) * 0.5;
        uVar16 = 0;
        if (fVar37 != (float)(int)fVar37) {
          uVar16 = (uint)(fVar37 < 0.0);
        }
        uVar29 = 0;
        if (fVar38 != (float)(int)fVar38) {
          uVar29 = (uint)(fVar38 < 0.0);
        }
        local_ec = 0;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
          lVar23 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
          local_ec = 0;
          if (lVar23 != 0) {
            uVar26 = ((int)fVar37 - uVar16) - *(int *)(lVar23 + 0x28);
            uVar3 = *(uint *)(lVar23 + 0x18);
            uVar27 = ((int)fVar38 - uVar29) - *(int *)(lVar23 + 0x2c);
            if ((uVar26 < uVar3 && uVar27 <= *(uint *)(lVar23 + 0x1c)) &&
                (uVar3 <= uVar26 || *(uint *)(lVar23 + 0x1c) != uVar27)) {
              uVar26 = uVar26 + uVar3 * uVar27;
LAB_022a7cfc:
              if (*(uint *)(lVar23 + 0x30) <= uVar26) {
                uVar26 = 0;
              }
              puVar31 = (undefined8 *)(*(long *)(lVar23 + 0x38) + (long)(int)uVar26 * 0x68);
            }
            else {
              if (*(char *)(lVar23 + 0x88) != '\0') {
                uVar26 = ((int)fVar37 - uVar16) - *(int *)(lVar23 + 0x98);
                uVar29 = ((int)fVar38 - uVar29) - *(int *)(lVar23 + 0x9c);
                uVar16 = *(uint *)(lVar23 + 0xa0);
                if ((uVar26 < uVar16 && uVar29 <= *(uint *)(lVar23 + 0xa4)) &&
                    (uVar16 <= uVar26 || *(uint *)(lVar23 + 0xa4) != uVar29)) {
                  uVar26 = uVar26 + uVar16 * uVar29 + *(int *)(lVar23 + 0x8c);
                  goto LAB_022a7cfc;
                }
              }
              puVar31 = &DAT_051a50f0;
            }
            local_ec = (int)*(char *)(puVar31 + 2);
          }
        }
        uVar16 = 0xfffffffe;
        ppppuVar7 = (undefined8 ****)(PTR_DAT_04bbc1a0 + 0x10);
        do {
          if (uVar16 == 0) {
            uVar29 = *(uint *)(param_1 + 8);
            uVar26 = *(uint *)(param_1 + 0xc);
            uVar3 = uVar29 - 2;
            if ((iVar10 == -0x17df00c3) ||
               ((((((int)uVar3 < iVar35 || (iVar24 < (int)uVar3)) || ((int)uVar26 < iVar32)) ||
                 ((int)uVar2 < (int)uVar26)) &&
                ((((int)uVar3 < (int)uVar8 || (iVar34 < (int)uVar3)) ||
                 (((int)uVar26 < iVar32 || ((int)uVar2 < (int)uVar26)))))))) {
              iStack_9c = uVar26 + 1;
              local_a0 = uVar29 - 1;
              if ((*(long *)puVar13 == 0) ||
                 (lVar23 = *(long *)(*(long *)puVar13 + 0xa8), lVar23 == 0)) goto LAB_022a83f8;
              local_c0 = (undefined8 *****)ppppuVar7;
              local_b8 = (undefined8 *****)(puVar36 + 0x10);
              local_b0 = uVar3;
              uStack_ac = uVar26;
              local_a8 = (undefined8 *****)(puVar36 + 0x10);
              uVar20 = FUN_00971f80(lVar23,&local_c0,0);
              if ((uVar20 & 1) == 0) goto LAB_022a83f8;
              uVar29 = *(uint *)(param_1 + 8);
              uVar26 = *(uint *)(param_1 + 0xc);
              if (iVar10 != -0x17df00c3) goto LAB_022a8270;
LAB_022a82e4:
              local_b8 = (undefined8 *****)(puVar36 + 0x10);
              local_a0 = uVar29 + 1;
              local_c0 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
              iStack_9c = uVar26 + 1;
              if ((*(long *)puVar13 == 0) ||
                 (lVar23 = *(long *)(*(long *)puVar13 + 0xa8), lVar23 == 0)) goto LAB_022a83f8;
              local_b0 = uVar29;
              uStack_ac = uVar26;
              local_a8 = local_b8;
              uVar20 = FUN_00971f80(lVar23,&local_c0,0);
              if ((uVar20 & 1) == 0) goto LAB_022a83f8;
              uVar26 = *(uint *)(param_1 + 0xc);
              uVar29 = *(int *)(param_1 + 8) + 2;
              local_e0 = (undefined8 *****)CONCAT44(uVar26,uVar29);
              if (iVar10 != -0x17df00c3) goto LAB_022a8350;
            }
            else {
              local_e8 = (undefined8 *****)(puVar36 + 0x10);
              local_e0 = *(undefined8 ******)(param_1 + 8);
LAB_022a8270:
              if ((((((int)uVar29 < iVar35) || (iVar24 < (int)uVar29)) || ((int)uVar26 < iVar32)) ||
                  ((int)uVar2 < (int)uVar26)) &&
                 ((((int)uVar29 < (int)uVar8 || (iVar34 < (int)uVar29)) ||
                  (((int)uVar26 < iVar32 || ((int)uVar2 < (int)uVar26)))))) goto LAB_022a82e4;
              uVar29 = uVar29 + 2;
              local_e0 = (undefined8 *****)CONCAT44(uVar26,uVar29);
LAB_022a8350:
              local_e8 = (undefined8 *****)(puVar36 + 0x10);
              if (((((iVar35 <= (int)uVar29) && ((int)uVar29 <= iVar24)) && (iVar32 <= (int)uVar26))
                  && ((int)uVar26 <= (int)uVar2)) ||
                 ((((int)uVar8 <= (int)uVar29 && ((int)uVar29 <= iVar34)) &&
                  ((iVar32 <= (int)uVar26 && ((int)uVar26 <= (int)uVar2)))))) goto LAB_022a7d44;
            }
            local_e8 = (undefined8 *****)(puVar36 + 0x10);
            local_a0 = uVar29 + 1;
            local_c0 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
            iStack_9c = uVar26 + 1;
            if ((*(long *)puVar13 == 0) ||
               (lVar23 = *(long *)(*(long *)puVar13 + 0xa8), lVar23 == 0)) goto LAB_022a83f8;
            local_b8 = local_e8;
            local_b0 = uVar29;
            uStack_ac = uVar26;
            local_a8 = local_e8;
            uVar20 = FUN_00971f80(lVar23,&local_c0,0);
            if ((uVar20 & 1) == 0) goto LAB_022a83f8;
          }
          else {
            iVar15 = -2;
            do {
              local_e8 = (undefined8 *****)(puVar36 + 0x10);
              uVar29 = *(int *)(param_1 + 8) + iVar15;
              uVar26 = *(int *)(param_1 + 0xc) + uVar16;
              local_e0 = (undefined8 *****)CONCAT44(uVar26,uVar29);
              if ((iVar10 == -0x17df00c3) ||
                 ((((((int)uVar29 < iVar35 || iVar24 < (int)uVar29) || (int)uVar26 < iVar32) ||
                   uVar26 != uVar2) &&
                   (((iVar35 <= (int)uVar29 && (int)uVar29 <= iVar24) && iVar32 <= (int)uVar26) &&
                   (int)(uVar26 - uVar2) < 0) ==
                   (((iVar35 <= (int)uVar29 && (int)uVar29 <= iVar24) && iVar32 <= (int)uVar26) &&
                   SBORROW4(uVar26,uVar2)) &&
                  (((((int)uVar29 < (int)uVar8 || (iVar34 < (int)uVar29)) || ((int)uVar26 < iVar32))
                   || ((int)uVar2 < (int)uVar26)))))) {
                iVar19 = uVar29 + 1;
                iVar17 = uVar26 + 1;
                local_c0 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
                local_b0 = uVar29;
                uStack_ac = uVar26;
                local_a8 = local_e8;
                local_a0 = iVar19;
                iStack_9c = iVar17;
                if ((*(long *)puVar13 != 0) &&
                   (lVar23 = *(long *)(*(long *)puVar13 + 0xa8), lVar23 != 0)) {
                  local_b8 = local_e8;
                  uVar20 = FUN_00971f80(lVar23,&local_c0,0);
                  if ((uVar20 & 1) != 0) goto LAB_022a7d60;
                }
                if (iVar15 == 0) goto LAB_022a83f8;
                local_c0 = (undefined8 *****)(puVar36 + 0x10);
                local_b8 = (undefined8 *****)CONCAT44(uVar26,uVar29);
                uVar20 = FUN_009766a0(&local_c0);
                if ((uVar20 & 1) == 0) {
                  lVar23 = *(long *)puVar13;
                  local_108 = (undefined8 *****)((ulong)local_108 & 0xffffffff00000000);
                  local_128 = (undefined8 *****)((ulong)local_128 & 0xffffffff00000000);
                  local_98 = local_98 & 0xffffffff00000000;
                  local_8c[0] = 0;
                  if ((((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
                      ((uVar20 = FUN_009493f8(lVar23 + 0x28,&local_c0,&local_108,&local_128,
                                              &local_98,local_8c), (uVar20 & 1) == 0 ||
                       ((((int)local_108 != 5 || ((int)local_128 != 5)) || ((int)local_98 != 5))))))
                     || (local_8c[0] != 5)) {
                    local_c0 = (undefined8 *****)(puVar36 + 0x10);
                    local_b8 = (undefined8 *****)CONCAT44(uVar26,iVar19);
                    uVar20 = FUN_009766a0(&local_c0);
                    if ((uVar20 & 1) == 0) {
                      lVar23 = *(long *)puVar13;
                      local_108 = (undefined8 *****)((ulong)local_108 & 0xffffffff00000000);
                      local_128 = (undefined8 *****)((ulong)local_128 & 0xffffffff00000000);
                      local_98 = local_98 & 0xffffffff00000000;
                      local_8c[0] = 0;
                      if ((((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
                          (((uVar20 = FUN_009493f8(lVar23 + 0x28,&local_c0,&local_108,&local_128,
                                                   &local_98,local_8c), (uVar20 & 1) == 0 ||
                            (((int)local_108 != 5 || ((int)local_128 != 5)))) ||
                           ((int)local_98 != 5)))) || (local_8c[0] != 5)) {
                        local_c0 = (undefined8 *****)(puVar36 + 0x10);
                        local_b8 = (undefined8 *****)CONCAT44(iVar17,uVar29);
                        uVar20 = FUN_009766a0(&local_c0);
                        if ((uVar20 & 1) == 0) {
                          lVar23 = *(long *)puVar13;
                          local_108 = (undefined8 *****)((ulong)local_108 & 0xffffffff00000000);
                          local_128 = (undefined8 *****)((ulong)local_128 & 0xffffffff00000000);
                          local_98 = local_98 & 0xffffffff00000000;
                          local_8c[0] = 0;
                          if ((((((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
                                (uVar20 = FUN_009493f8(lVar23 + 0x28,&local_c0,&local_108,&local_128
                                                       ,&local_98,local_8c), (uVar20 & 1) == 0)) ||
                               (((int)local_108 != 5 || ((int)local_128 != 5)))) ||
                              ((int)local_98 != 5)) || (local_8c[0] != 5)) {
                            local_c0 = (undefined8 *****)(puVar36 + 0x10);
                            local_b8 = (undefined8 *****)CONCAT44(iVar17,iVar19);
                            uVar20 = FUN_009766a0(&local_c0);
                            if ((uVar20 & 1) == 0) {
                              lVar23 = *(long *)puVar13;
                              local_108 = (undefined8 *****)((ulong)local_108 & 0xffffffff00000000);
                              local_128 = (undefined8 *****)((ulong)local_128 & 0xffffffff00000000);
                              local_98 = local_98 & 0xffffffff00000000;
                              local_8c[0] = 0;
                              if ((((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
                                  ((uVar20 = FUN_009493f8(lVar23 + 0x28,&local_c0,&local_108,
                                                          &local_128,&local_98,local_8c),
                                   (uVar20 & 1) == 0 ||
                                   ((((int)local_108 != 5 || ((int)local_128 != 5)) ||
                                    ((int)local_98 != 5)))))) || (local_8c[0] != 5)) {
                                FUN_0137d59c(&local_c0,&local_e8);
                                iVar17 = FUN_01317cc0(&local_c0,0);
                                local_108 = (undefined8 *****)CONCAT44(local_108._4_4_,iVar17);
                                if (local_ec != iVar17) goto LAB_022a83f8;
                                uVar3 = uVar26 + 2;
                                if (iVar10 == -0x17df00c3) {
                                  uVar27 = uVar29;
                                  do {
                                    if ((int)uVar27 < iVar19) {
                                      uVar27 = uVar27 + 1;
                                    }
                                    else {
                                      uVar26 = uVar26 + 1;
                                      uVar27 = uVar29;
                                    }
                                  } while ((uVar29 != uVar27) || (uVar3 != uVar26));
                                }
                                else {
                                  uVar27 = uVar29;
                                  do {
                                    if (((((int)uVar27 < iVar35) || (iVar24 < (int)uVar27)) ||
                                        (((int)uVar26 < iVar32 || ((int)uVar2 < (int)uVar26)))) &&
                                       ((((((((((int)uVar2 < (int)uVar26 || (int)uVar26 < iVar32) ||
                                              iVar34 < (int)uVar27) || uVar8 != uVar27) &&
                                             ((((int)uVar26 <= (int)uVar2 && iVar32 <= (int)uVar26)
                                              && (int)uVar27 <= iVar34) && (int)(uVar8 - uVar27) < 0
                                             ) == ((((int)uVar26 <= (int)uVar2 &&
                                                    iVar32 <= (int)uVar26) && (int)uVar27 <= iVar34)
                                                  && SBORROW4(uVar8,uVar27)) &&
                                            (*(long *)puVar13 != 0)) && (-1 < (int)uVar27)) &&
                                          ((lVar23 = *(long *)(*(long *)puVar13 + 0xa8), lVar23 != 0
                                           && (-1 < (int)uVar26)))) &&
                                         (uVar27 < *(uint *)(lVar23 + 0x38))) &&
                                        (((uVar26 < *(uint *)(lVar23 + 0x3c) &&
                                          (uVar11 = uVar27 + *(uint *)(lVar23 + 0x38) * uVar26,
                                          uVar11 < *(uint *)(lVar23 + 0x68))) &&
                                         (*(long *)(lVar23 + 0x70) != 0)))))) {
                                      local_c0 = (undefined8 *****)CONCAT44(local_c0._4_4_,2);
                                      if ((*(uint *)(*(long *)(lVar23 + 0x70) +
                                                    (long)(int)uVar11 * 4) >> 2 & 1) != 0)
                                      goto LAB_022a83f8;
                                    }
                                    if ((int)uVar27 < iVar19) {
                                      uVar27 = uVar27 + 1;
                                    }
                                    else {
                                      uVar26 = uVar26 + 1;
                                      uVar27 = uVar29;
                                    }
                                  } while ((uVar29 != uVar27) || (uVar3 != uVar26));
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
LAB_022a7d60:
              bVar1 = iVar15 < 1;
              iVar15 = iVar15 + 2;
            } while (bVar1);
          }
LAB_022a7d44:
          uVar16 = uVar16 + 2;
        } while (uVar16 < 3);
        local_100 = (float)*(int *)(param_1 + 0xc) * 5.0 + 5.0;
        local_108 = (undefined8 *****)
                    CONCAT44(local_108._4_4_,(float)*(int *)(param_1 + 8) * 5.0 + 5.0);
        FUN_0137d59c(&local_c0,param_1);
        uVar18 = FUN_01317cc0(&local_c0,0);
        local_128 = (undefined8 *****)CONCAT44(local_128._4_4_,uVar18);
        fVar37 = (float)FUN_0097a900(&local_108,0);
        ppppuVar7 = (undefined8 ****)(puVar36 + 0x10);
        iVar15 = -2;
        do {
          iVar17 = *(int *)(param_1 + 8);
          iVar25 = iVar17 + -2;
          iVar19 = iVar15 + *(int *)(param_1 + 0xc);
          lVar23 = *(long *)puVar13;
          local_b8 = (undefined8 *****)CONCAT44(iVar19,iVar25);
          local_100 = (float)iVar19 * 5.0 + 5.0;
          local_108 = (undefined8 *****)CONCAT44(local_108._4_4_,(float)iVar25 * 5.0 + 5.0);
          local_c0 = (undefined8 *****)ppppuVar7;
          if (((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
             (*(char *)(lVar23 + 0x11c8) != '\0')) {
            fVar38 = -500.0;
          }
          else {
            fVar38 = (float)FUN_0093a950(lVar23 + 0x28,&local_108,0);
          }
          if ((fVar38 - fVar37 <= -5.0) || (5.0 <= fVar38 - fVar37)) {
            local_e0 = (undefined8 *****)CONCAT44(iVar19,iVar25);
            local_e8 = (undefined8 *****)(puVar36 + 0x10);
            uVar20 = FUN_009766a0(&local_e8);
            if ((uVar20 & 1) == 0) {
              iVar17 = iVar17 + -1;
              local_e0 = (undefined8 *****)CONCAT44(iVar19,iVar17);
              local_e8 = (undefined8 *****)(puVar36 + 0x10);
              uVar20 = FUN_009766a0(&local_e8);
              if ((uVar20 & 1) == 0) {
                local_e0 = (undefined8 *****)CONCAT44(iVar19 + 1,iVar25);
                pppppuVar4 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                local_e8 = pppppuVar4;
                uVar20 = FUN_009766a0(&local_e8);
                if ((uVar20 & 1) == 0) {
                  local_e0 = (undefined8 *****)CONCAT44(iVar19 + 1,iVar17);
                  local_e8 = pppppuVar4;
                  uVar20 = FUN_009766a0(&local_e8);
                  if ((uVar20 & 1) == 0) {
                    FUN_0137d59c(&local_e8,&local_c0);
                    iVar19 = FUN_01317cc0(&local_e8,0);
                    local_98 = CONCAT44(local_98._4_4_,iVar19);
                    puVar36 = PTR_DAT_04bb2010;
                    if (iVar19 == (int)local_128) goto LAB_022a857c;
                    goto LAB_022a83f8;
                  }
                }
              }
            }
            puVar36 = PTR_DAT_04bb2010;
          }
LAB_022a857c:
          if (iVar15 != 0) {
            iVar17 = *(int *)(param_1 + 8);
            local_c0 = (undefined8 *****)(puVar36 + 0x10);
            iVar19 = iVar15 + *(int *)(param_1 + 0xc);
            lVar23 = *(long *)puVar13;
            local_b8 = (undefined8 *****)CONCAT44(iVar19,iVar17);
            local_100 = (float)iVar19 * 5.0 + 5.0;
            local_108 = (undefined8 *****)CONCAT44(local_108._4_4_,(float)iVar17 * 5.0 + 5.0);
            if (((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
               (*(char *)(lVar23 + 0x11c8) != '\0')) {
              fVar38 = -500.0;
            }
            else {
              fVar38 = (float)FUN_0093a950(lVar23 + 0x28,&local_108,0);
            }
            if ((fVar38 - fVar37 <= -5.0) || (5.0 <= fVar38 - fVar37)) {
              local_e0 = (undefined8 *****)CONCAT44(iVar19,iVar17);
              local_e8 = (undefined8 *****)(puVar36 + 0x10);
              uVar20 = FUN_009766a0(&local_e8);
              if ((uVar20 & 1) == 0) {
                local_e0 = (undefined8 *****)CONCAT44(iVar19,iVar17 + 1);
                local_e8 = (undefined8 *****)(puVar36 + 0x10);
                uVar20 = FUN_009766a0(&local_e8);
                if ((uVar20 & 1) == 0) {
                  local_e0 = (undefined8 *****)CONCAT44(iVar19 + 1,iVar17);
                  pppppuVar4 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                  local_e8 = pppppuVar4;
                  uVar20 = FUN_009766a0(&local_e8);
                  if ((uVar20 & 1) == 0) {
                    local_e0 = (undefined8 *****)CONCAT44(iVar19 + 1,iVar17 + 1);
                    local_e8 = pppppuVar4;
                    uVar20 = FUN_009766a0(&local_e8);
                    if ((uVar20 & 1) == 0) {
                      FUN_0137d59c(&local_e8,&local_c0);
                      iVar19 = FUN_01317cc0(&local_e8,0);
                      local_98 = CONCAT44(local_98._4_4_,iVar19);
                      puVar36 = PTR_DAT_04bb2010;
                      if (iVar19 == (int)local_128) goto LAB_022a8654;
                      goto LAB_022a83f8;
                    }
                  }
                }
              }
              puVar36 = PTR_DAT_04bb2010;
            }
          }
LAB_022a8654:
          iVar17 = *(int *)(param_1 + 8);
          local_c0 = (undefined8 *****)(puVar36 + 0x10);
          iVar19 = iVar17 + 2;
          iVar25 = iVar15 + *(int *)(param_1 + 0xc);
          lVar23 = *(long *)puVar13;
          local_b8 = (undefined8 *****)CONCAT44(iVar25,iVar19);
          local_100 = (float)iVar25 * 5.0 + 5.0;
          local_108 = (undefined8 *****)CONCAT44(local_108._4_4_,(float)iVar19 * 5.0 + 5.0);
          if (((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
             (*(char *)(lVar23 + 0x11c8) != '\0')) {
            fVar38 = -500.0;
          }
          else {
            fVar38 = (float)FUN_0093a950(lVar23 + 0x28,&local_108,0);
          }
          if ((fVar38 - fVar37 <= -5.0) || (5.0 <= fVar38 - fVar37)) {
            local_e0 = (undefined8 *****)CONCAT44(iVar25,iVar19);
            local_e8 = (undefined8 *****)(puVar36 + 0x10);
            uVar20 = FUN_009766a0(&local_e8);
            if ((uVar20 & 1) == 0) {
              iVar17 = iVar17 + 3;
              local_e0 = (undefined8 *****)CONCAT44(iVar25,iVar17);
              local_e8 = (undefined8 *****)(puVar36 + 0x10);
              uVar20 = FUN_009766a0(&local_e8);
              if ((uVar20 & 1) == 0) {
                local_e0 = (undefined8 *****)CONCAT44(iVar25 + 1,iVar19);
                pppppuVar4 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                local_e8 = pppppuVar4;
                uVar20 = FUN_009766a0(&local_e8);
                if ((uVar20 & 1) == 0) {
                  local_e0 = (undefined8 *****)CONCAT44(iVar25 + 1,iVar17);
                  local_e8 = pppppuVar4;
                  uVar20 = FUN_009766a0(&local_e8);
                  if ((uVar20 & 1) == 0) {
                    FUN_0137d59c(&local_e8,&local_c0);
                    iVar19 = FUN_01317cc0(&local_e8,0);
                    local_98 = CONCAT44(local_98._4_4_,iVar19);
                    puVar36 = PTR_DAT_04bb2010;
                    if (iVar19 == (int)local_128) goto LAB_022a849c;
                    goto LAB_022a83f8;
                  }
                }
              }
            }
            puVar36 = PTR_DAT_04bb2010;
          }
LAB_022a849c:
          bVar1 = iVar15 < 1;
          iVar15 = iVar15 + 2;
        } while (bVar1);
        ppppuVar7 = (undefined8 ****)(puVar36 + 0x10);
        pppppuVar4 = (undefined8 *****)(PTR_DAT_04bb2018 + 0x10);
        iVar15 = -2;
        do {
          iVar19 = -2;
          do {
            if (iVar19 != 0 || iVar15 != 0) {
              iVar17 = iVar19 + *(int *)(param_1 + 8);
              lVar23 = *(long *)puVar13;
              iVar25 = *(int *)(param_1 + 0xc) + iVar15;
              local_b8 = (undefined8 *****)CONCAT44(iVar25,iVar17);
              if ((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) {
LAB_022a88a0:
                local_b8 = (undefined8 *****)CONCAT44(iVar25,iVar17 + 1);
                local_c0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                if ((lVar23 != 0) && (*(long *)(lVar23 + 0xa8) != 0)) {
                  uVar20 = FUN_00971d98(*(long *)(lVar23 + 0xa8),&local_c0);
                  if ((uVar20 & 1) != 0) goto LAB_022a8934;
                  lVar23 = *(long *)puVar13;
                }
                local_b8 = (undefined8 *****)CONCAT44(iVar25 + 1,iVar17);
                local_c0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                if ((lVar23 != 0) && (*(long *)(lVar23 + 0xa8) != 0)) {
                  uVar20 = FUN_00971d98(*(long *)(lVar23 + 0xa8),&local_c0);
                  if ((uVar20 & 1) != 0) goto LAB_022a8934;
                  lVar23 = *(long *)puVar13;
                }
                local_b8 = (undefined8 *****)CONCAT44(iVar25 + 1,iVar17 + 1);
                local_c0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                if (((lVar23 != 0) && (*(long *)(lVar23 + 0xa8) != 0)) &&
                   (uVar20 = FUN_00971d98(*(long *)(lVar23 + 0xa8),&local_c0), (uVar20 & 1) != 0))
                goto LAB_022a8934;
              }
              else {
                local_c0 = (undefined8 *****)ppppuVar7;
                uVar20 = FUN_00971d98(*(long *)(lVar23 + 0xa8),&local_c0);
                if ((uVar20 & 1) == 0) {
                  lVar23 = *(long *)puVar13;
                  goto LAB_022a88a0;
                }
LAB_022a8934:
                local_b8 = (undefined8 *****)CONCAT44(iVar25,iVar17);
                local_c0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                uVar20 = FUN_009766a0(&local_c0);
                if ((uVar20 & 1) == 0) {
                  lVar23 = *(long *)puVar13;
                  local_e8 = (undefined8 *****)((ulong)local_e8 & 0xffffffff00000000);
                  local_108 = (undefined8 *****)((ulong)local_108 & 0xffffffff00000000);
                  local_128 = (undefined8 *****)((ulong)local_128 & 0xffffffff00000000);
                  local_98 = local_98 & 0xffffffff00000000;
                  if (((((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
                       ((uVar20 = FUN_009493f8(lVar23 + 0x28,&local_c0,&local_e8,&local_108,
                                               &local_128,&local_98), (uVar20 & 1) == 0 ||
                        (((int)local_e8 != 5 || ((int)local_108 != 5)))))) || ((int)local_128 != 5))
                     || ((int)local_98 != 5)) {
                    local_b8 = (undefined8 *****)CONCAT44(iVar25,iVar17 + 1);
                    local_c0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                    uVar20 = FUN_009766a0(&local_c0);
                    if ((uVar20 & 1) == 0) {
                      lVar23 = *(long *)puVar13;
                      local_e8 = (undefined8 *****)((ulong)local_e8 & 0xffffffff00000000);
                      local_108 = (undefined8 *****)((ulong)local_108 & 0xffffffff00000000);
                      local_128 = (undefined8 *****)((ulong)local_128 & 0xffffffff00000000);
                      local_98 = local_98 & 0xffffffff00000000;
                      if (((((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
                           (uVar20 = FUN_009493f8(lVar23 + 0x28,&local_c0,&local_e8,&local_108,
                                                  &local_128,&local_98), (uVar20 & 1) == 0)) ||
                          (((int)local_e8 != 5 || ((int)local_108 != 5)))) ||
                         (((int)local_128 != 5 || ((int)local_98 != 5)))) {
                        local_b8 = (undefined8 *****)CONCAT44(iVar25 + 1,iVar17);
                        local_c0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                        uVar20 = FUN_009766a0(&local_c0);
                        if (((uVar20 & 1) == 0) &&
                           (uVar20 = FUN_00976550(&local_c0), (uVar20 & 1) == 0)) {
                          local_b8 = (undefined8 *****)CONCAT44(iVar25 + 1,iVar17 + 1);
                          local_c0 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
                          uVar20 = FUN_009766a0(&local_c0);
                          if (((uVar20 & 1) == 0) &&
                             (uVar20 = FUN_00976550(&local_c0), (uVar20 & 1) == 0))
                          goto LAB_022a83f8;
                        }
                      }
                    }
                  }
                }
              }
              local_c0 = pppppuVar4;
              local_e0 = (undefined8 *****)((ulong)local_e0 & 0xffffffff00000000);
              fVar37 = (float)iVar17 * 0.5;
              local_e8 = (undefined8 *****)0x0;
              uVar16 = 0;
              if (fVar37 != (float)(int)fVar37) {
                uVar16 = (uint)(fVar37 < 0.0);
              }
              fVar38 = (float)iVar25 * 0.5;
              uVar29 = 0;
              if (fVar38 != (float)(int)fVar38) {
                uVar29 = (uint)(fVar38 < 0.0);
              }
              local_b8 = (undefined8 *****)CONCAT44((int)fVar38 - uVar29,(int)fVar37 - uVar16);
              local_108 = (undefined8 *****)CONCAT44(local_108._4_4_,5);
              local_e8 = (undefined8 *****)&SUB_00000020;
              uVar20 = FUN_00977f70(&local_c0,&local_e8);
              puVar36 = PTR_DAT_04bb2010;
              if ((uVar20 & 1) != 0) goto LAB_022a83f8;
            }
            bVar1 = iVar19 < 1;
            iVar19 = iVar19 + 2;
          } while (bVar1);
          bVar1 = iVar15 < 1;
          iVar15 = iVar15 + 2;
        } while (bVar1);
        goto LAB_022a7290;
      }
    }
    else {
      local_d8 = (undefined8 *****)(puVar36 + 0x10);
      local_e8 = (undefined8 *****)&local_b8;
      local_e0 = &local_a8;
      local_c0 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
      uVar16 = *(uint *)(param_1 + 8);
      uStack_ac = *(uint *)(param_1 + 0xc);
      local_d0 = *(undefined8 ******)(param_1 + 8);
      local_a0 = uVar16 + 1;
      iStack_9c = uStack_ac + 1;
      iVar15 = uStack_ac + 2;
      local_b8 = local_d8;
      local_b0 = uVar16;
      local_a8 = local_d8;
      do {
        uVar20 = FUN_00976070(&local_d8);
        if ((uVar20 & 1) == 0) goto LAB_022a7bec;
        if ((int)local_d0 < *(int *)(local_e0 + 1)) {
          uVar29 = (int)local_d0 + 1;
          iVar19 = local_d0._4_4_;
        }
        else {
          iVar19 = local_d0._4_4_ + 1;
          uVar29 = *(uint *)(local_e8 + 1);
          local_d0 = (undefined8 *****)CONCAT44(iVar19,(int)local_d0);
        }
        local_d0 = (undefined8 *****)CONCAT44(local_d0._4_4_,uVar29);
      } while (uVar16 != uVar29 || iVar15 != iVar19);
    }
LAB_022a83f8:
    uVar21 = 0;
  }
  else {
LAB_022a7290:
    local_100 = 0.0;
    lVar23 = *(long *)PTR_DAT_04bb2720;
    if (lVar23 == 0) {
      puVar31 = &DAT_055c04a0;
    }
    else {
      puVar31 = &DAT_055c04a0;
      if (*(long *)(lVar23 + 0x330) != 0) {
        puVar31 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
        iVar15 = FUN_006bd550(*puVar31,0);
        puVar31 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar15 != 0x758f7eaf) {
          puVar31 = &DAT_055c04a0;
        }
      }
    }
    local_fc = *(uint *)(puVar31 + 7);
    local_f8 = FUN_017baf44();
    puVar13 = PTR_DAT_04bb27c8;
    local_f8 = local_f8 & 1;
    local_108 = (undefined8 *****)(PTR_DAT_04bb6268 + 0x10);
    pppppuVar4 = (undefined8 *****)(PTR_DAT_04bbc1a0 + 0x10);
    iVar15 = -2;
    do {
      iVar19 = -2;
      do {
        if (iVar19 == 0 && iVar15 == 0) {
          if (iVar10 == -0x17df00c3) {
            iVar9 = *(int *)(param_1 + 8);
            iVar25 = *(int *)(param_1 + 0xc);
            iVar17 = iVar25 + 2;
            iVar33 = iVar9;
            do {
              local_118 = puVar36 + 0x10;
              local_110 = iVar33;
              iStack_10c = iVar25;
              uVar20 = FUN_02b90cd0(&local_118);
              if ((uVar20 & 1) != 0) goto LAB_022a83f8;
              if (iVar33 < iVar9 + 1) {
                iVar33 = iVar33 + 1;
              }
              else {
                iVar25 = iVar25 + 1;
                iVar33 = iVar9;
              }
            } while ((iVar9 != iVar33) || (iVar17 != iVar25));
          }
        }
        else {
          local_128 = (undefined8 *****)(PTR_DAT_04bb2010 + 0x10);
          uVar16 = *(int *)(param_1 + 8) + iVar19;
          uStack_11c = *(int *)(param_1 + 0xc) + iVar15;
          local_120 = uVar16;
          if (iVar10 != -0x17df00c3) {
            iVar17 = uStack_11c + 2;
            local_a8 = local_128;
            local_b0 = uVar16;
            uStack_ac = uStack_11c;
            local_d0 = (undefined8 *****)CONCAT44(uStack_11c,uVar16);
            local_c0 = pppppuVar4;
            local_b8 = local_128;
            local_a0 = uVar16 + 1;
            iStack_9c = uStack_11c + 1;
            local_e8 = (undefined8 *****)&local_b8;
            local_e0 = &local_a8;
            local_d8 = local_128;
            do {
              local_90 = 0;
              local_8c[0] = 8;
              local_98 = 0;
              local_98 = 0x100;
              local_8c[0] = 8;
              local_90 = 0;
              lVar23 = *(long *)puVar13;
              if (((lVar23 == 0) || (*(long *)(lVar23 + 0xa8) == 0)) ||
                 (uVar20 = FUN_00949ac8(lVar23 + 0x28,&local_d8,&local_98), (uVar20 & 1) == 0)) {
                local_98 = 0xffffffffffffffff;
                local_90 = 0x1ff;
                local_8c[0] = 7;
                local_98 = 0xffffffffffffff7f;
                local_8c[0] = 7;
                local_90 = 0x1ff;
                lVar23 = *(long *)puVar13;
                if (((lVar23 != 0) && (*(long *)(lVar23 + 0xa8) != 0)) &&
                   (uVar20 = FUN_009499b0(lVar23 + 0x28,&local_d8,&local_98), (uVar20 & 1) != 0))
                goto LAB_022a78d0;
              }
              else {
LAB_022a78d0:
                if (((((int)local_d0 < iVar35) || (iVar24 < (int)local_d0)) ||
                    ((local_d0._4_4_ < iVar32 || ((int)uVar2 < local_d0._4_4_)))) &&
                   (((((int)local_d0 < (int)uVar8 || (iVar34 < (int)local_d0)) ||
                     (local_d0._4_4_ < iVar32)) || ((int)uVar2 < local_d0._4_4_))))
                goto LAB_022a83f8;
              }
              if ((int)local_d0 < *(int *)(local_e0 + 1)) {
                uVar29 = (int)local_d0 + 1;
                iVar25 = local_d0._4_4_;
              }
              else {
                iVar25 = local_d0._4_4_ + 1;
                uVar29 = *(uint *)(local_e8 + 1);
                local_d0 = (undefined8 *****)CONCAT44(iVar25,(int)local_d0);
              }
              local_d0 = (undefined8 *****)CONCAT44(local_d0._4_4_,uVar29);
            } while ((uVar16 != uVar29) || (iVar17 != iVar25));
          }
          FUN_01a5033c(&local_e8,&local_108,0,&local_128,0);
          if (((((short)local_e8 != -2) &&
               ((lVar23 = *(long *)PTR_DAT_04bbbc68, lVar23 != 0 && (*(long *)(lVar23 + 0xb0) != 0))
               )) && (*(long *)(*(long *)(lVar23 + 0xb0) + 8) != 0)) &&
             ((((*(long *)(lVar23 + 0x488) != 0 && (*(long *)(*(long *)(lVar23 + 0x488) + 8) != 0))
               && (*(long *)(lVar23 + 0x2b0) != 0)) &&
              (*(long *)(*(long *)(lVar23 + 0x2b0) + 8) != 0)))) {
            uVar16 = FUN_0277d6c4(&local_e8);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((uVar16 < *(uint *)(lVar23 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
              FUN_0124c030(&local_c0,&local_e8);
              iVar17 = FUN_0123db50(&local_b8,CONCAT44(uStack_ac,local_b0));
              if (iVar17 == 0x2e) goto LAB_022a83f8;
              uVar20 = FUN_0123d890(CONCAT44(uStack_ac,local_b0),4);
              puVar12 = (uint *)CONCAT44(uStack_ac,local_b0);
              if ((uVar20 & 1) == 0) {
                iVar17 = FUN_0123db50(&local_b8);
                if ((iVar17 - 2U & 0xfffffff9) == 0) goto LAB_022a83f8;
              }
              else if ((puVar12 != (uint *)0x0) && (uVar16 = *puVar12, uVar16 != 0)) {
                cVar22 = *PTR_DAT_04bbbc70;
                do {
                  if (cVar22 == '\0') {
                    cVar22 = '\x01';
                    *PTR_DAT_04bbbc70 = 1;
                    puVar14 = PTR_DAT_04bbbc78;
                    *(undefined8 *)PTR_DAT_04bbbc78 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar14 + 0x60) = 0xffffffff;
                    *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar14 + 0x58) = 0xffffffffffffffff;
                    uVar16 = *puVar12;
                  }
                  else {
                    uVar29 = *(uint *)(PTR_DAT_04bbbc78 + 0x4c);
                    if (-1 < (int)uVar29) {
                      if (((char *)((ulong)uVar29 + (long)puVar12) != (char *)0x0) &&
                         (*(char *)((ulong)uVar29 + (long)puVar12) != '\0')) goto LAB_022a83f8;
                      break;
                    }
                    if (uVar29 != 0xffffffff) break;
                  }
                  puVar28 = (uint *)(ulong)uVar16;
                  if ((puVar28 == (uint *)0x0) || (puVar12 == puVar28)) break;
                  lVar23 = 0xc;
                  if (*(char *)((long)puVar12 + (10 - (long)puVar28)) != '\0') {
                    lVar23 = 0x1c;
                  }
                  lVar23 = (long)puVar12 + (lVar23 - (long)puVar28);
                  if (lVar23 == 0) break;
                  uVar20 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar28));
                  *(undefined4 *)(PTR_DAT_04bbbc78 + 0x4c) = 0xfffffffe;
                  if (uVar20 == 0) break;
                  piVar30 = (int *)(lVar23 + 4);
                  while (piVar30[-1] != -0xa58ccc9) {
                    piVar30 = piVar30 + 2;
                    uVar20 = uVar20 - 1;
                    if (uVar20 == 0) goto LAB_022a7784;
                  }
                  iVar17 = 0;
                  if (*piVar30 != -1) {
                    iVar17 = *piVar30;
                  }
                  *(int *)(PTR_DAT_04bbbc78 + 0x4c) = iVar17;
                  uVar16 = *puVar12;
                  if (uVar16 == 0) break;
                } while( true );
              }
            }
          }
        }
LAB_022a7784:
        bVar1 = iVar19 < 1;
        iVar19 = iVar19 + 2;
      } while (bVar1);
      bVar1 = iVar15 < 1;
      iVar15 = iVar15 + 2;
    } while (bVar1);
    uVar21 = 1;
  }
  return uVar21;
}

