
/* WARNING: Removing unreachable block (ram,0x0377bee8) */
/* WARNING: Removing unreachable block (ram,0x0377c05c) */

void FUN_0377bd50(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  byte bVar6;
  undefined2 *puVar7;
  void *__src;
  long lVar8;
  undefined1 *puVar9;
  ushort uVar10;
  ushort uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  bool bVar16;
  byte bVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  long lVar23;
  short *psVar24;
  long lVar25;
  long lVar26;
  uint *puVar27;
  char cVar28;
  uint uVar29;
  uint uVar30;
  ulong uVar31;
  void *pvVar32;
  uint *puVar33;
  int *piVar34;
  undefined1 *puVar35;
  uint uVar36;
  uint uVar37;
  void *__dest;
  uint local_37c;
  undefined1 local_2bc;
  ushort local_2ac [2];
  undefined *local_2a8;
  char *local_2a0;
  undefined8 ****local_298;
  undefined8 ****local_290;
  undefined8 ***local_288;
  undefined8 **local_280;
  undefined8 *local_278;
  undefined8 local_270;
  undefined8 local_268 [4];
  undefined8 local_248;
  undefined2 local_240;
  byte local_23e;
  byte local_23d;
  undefined1 local_23c;
  undefined1 local_23b;
  undefined *local_238;
  undefined8 *puStack_230;
  undefined4 local_228;
  undefined1 local_224;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined4 local_210;
  undefined *local_208;
  undefined1 *puStack_200;
  undefined4 local_1f8;
  undefined1 local_1f4 [63];
  undefined1 local_1b5;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c [63];
  undefined1 local_15d;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined2 local_118;
  undefined2 local_116;
  int local_114;
  undefined *local_110;
  undefined1 *local_108;
  int local_100;
  undefined1 local_fc [7];
  undefined1 local_f5;
  undefined *local_f0;
  undefined1 *local_e8;
  int local_e0;
  undefined1 local_dc [7];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [7];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [7];
  undefined1 local_95;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  uint local_80;
  ushort local_7c;
  undefined4 local_78 [2];
  long local_70;
  
  puVar13 = PTR_DAT_04bb4e10;
  puVar12 = PTR_DAT_04bb2bc0;
  local_7c = 0;
  local_228 = 0x20;
  local_80 = 0xffffffff;
  local_248 = (undefined *)CONCAT17((char)((ulong)local_248 >> 0x38),0x1010000);
  puStack_230 = &local_158;
  local_224 = 0;
  local_210 = 0xffffffff;
  local_1f8 = 0x40;
  local_1b5 = 0;
  local_1f4[0] = 0;
  local_220 = 0xffffffff;
  uStack_218 = 0xffffffff00000000;
  puStack_200 = local_1f4;
  local_208 = PTR_DAT_04bb2bc0 + 0x10;
  local_1a0 = 0x40;
  local_15d = 0;
  local_19c[0] = 0;
  puStack_1a8 = local_19c;
  local_238 = PTR_DAT_04bb4e10 + 0x10;
  local_128 = 0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  local_148 = 0;
  uStack_140 = 0;
  puVar7 = &local_118;
  if (&local_118 <= (undefined2 *)((long)&local_158 + 2U)) {
    puVar7 = (undefined2 *)((long)&local_158 + 2U);
  }
  local_158 = 0;
  uStack_150 = 0;
  local_1b0 = local_208;
  memset(puStack_230,0,(long)puVar7 + (-0xe0 - (long)&local_238));
  puVar2 = PTR_DAT_04bb3768;
  local_114 = 0;
  local_9c[0] = 0;
  puStack_a8 = local_9c;
  local_f5 = 0;
  local_108 = local_fc;
  local_fc[0] = 0;
  local_100 = 8;
  local_e8 = local_dc;
  local_dc[0] = 0;
  local_110 = PTR_DAT_04bb3768 + 0x10;
  local_e0 = 8;
  local_d5 = 0;
  puStack_c8 = local_bc;
  local_bc[0] = 0;
  local_c0 = 8;
  local_b5 = 0;
  local_a0 = 8;
  local_95 = 0;
  local_f0 = local_110;
  local_d0 = local_110;
  local_b0 = local_110;
  uVar19 = FUN_03779330(&local_248);
  puVar1 = PTR_DAT_04bb46b0;
  if ((uVar19 & 1) != 0) {
    (**(code **)*param_1)(param_1,&local_248);
    lVar25 = *(long *)puVar1;
    lVar20 = 0;
    if (lVar25 == 0) goto LAB_0377c094;
    local_2a8 = (undefined *)CONCAT44(local_2a8._4_4_,1);
    if ((((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar20 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x38))(), lVar20 != 0)
       ) {
      if ((*(long **)(lVar20 + 0x36658) == (long *)0x0) ||
         (puVar21 = (undefined8 *)**(long **)(lVar20 + 0x36658), puVar21 == (undefined8 *)0x0)) {
        uVar19 = 0;
      }
      else {
        uVar19 = (**(code **)*puVar21)();
        uVar19 = uVar19 & 0xffffffff;
      }
      local_80 = *(uint *)(*(long *)(lVar20 + 0x36640) + *(long *)(lVar20 + 0x36638) + 0x48b0);
      if ((*(long **)(lVar20 + 0x37c70) == (long *)0x0) ||
         (puVar21 = (undefined8 *)**(long **)(lVar20 + 0x37c70), puVar21 == (undefined8 *)0x0)) {
        uVar22 = 0;
      }
      else {
        uVar22 = (**(code **)*puVar21)();
        uVar22 = uVar22 & 0xffffffff;
      }
      local_2a8 = (undefined *)((ulong)local_2a8 & 0xffffffffffff0000);
      FUN_0374a300(&local_2a8,
                   *(undefined1 *)(*(long *)(lVar20 + 0x37c58) + *(long *)(lVar20 + 0x37c50) + 0x32)
                  );
      local_7c = (ushort)local_2a8;
      if ((((uVar22 & 1) != 0) && (*(long *)(lVar20 + 0x37c70) != 0)) &&
         (puVar21 = *(undefined8 **)(*(long *)(lVar20 + 0x37c70) + 8), puVar21 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar21)();
      }
      local_288 = &local_280;
      local_280 = &local_278;
      local_298 = &local_288;
      local_278 = &local_270;
      local_270 = 0;
      local_2a8 = (undefined *)0x0;
      local_2a0 = (char *)0x0;
      if (local_268 != (undefined8 *)0x0) {
        local_2a8 = (undefined *)0x400000000;
        local_2a0 = (char *)local_268;
      }
      local_290 = local_298;
      uVar22 = FUN_03770770(&local_80,&local_2a8);
      if ((uVar22 & 1) != 0) {
        local_80 = CONCAT22(local_80._2_2_,**(undefined2 **)local_2a0);
      }
      if ((((uVar19 & 1) != 0) && (*(long *)(lVar20 + 0x36658) != 0)) &&
         (puVar21 = *(undefined8 **)(*(long *)(lVar20 + 0x36658) + 8), puVar21 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar21)();
      }
    }
  }
  lVar25 = *(long *)puVar1;
  lVar20 = 0;
  if (lVar25 != 0) {
    local_248 = (undefined *)CONCAT44(local_248._4_4_,1);
    if (((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar25 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar25 = 0;
    }
    lVar20 = 0;
    if (lVar25 != 0) {
      lVar20 = lVar25 + 0xa8;
    }
  }
LAB_0377c094:
  if ((*(long **)(lVar20 + 0x36540) == (long *)0x0) ||
     (puVar21 = (undefined8 *)**(long **)(lVar20 + 0x36540), puVar21 == (undefined8 *)0x0)) {
    local_37c = 0;
  }
  else {
    local_37c = (**(code **)*puVar21)();
  }
  lVar25 = 0;
  puVar7 = &local_118;
  if (&local_118 <= (undefined2 *)((long)&local_158 + 2U)) {
    puVar7 = (undefined2 *)((long)&local_158 + 2U);
  }
  puVar1 = PTR_DAT_04bb7648 + 0x10;
  puVar2 = puVar2 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  puVar4 = PTR_DAT_04bc0cd8 + 0x10;
  do {
    uVar11 = *(ushort *)(*(long *)(lVar20 + 0x36528) + *(long *)(lVar20 + 0x36520) + lVar25 * 2);
    if (uVar11 == 0) {
LAB_0377c21c:
      local_248 = puVar1;
      local_240 = uVar11;
      lVar23 = FUN_0375f980(&local_248);
      if (lVar23 != 0) {
        if (*(long **)(lVar23 + 0x28) == (long *)0x0) {
          uVar19 = 0;
        }
        else {
          puVar21 = (undefined8 *)**(long **)(lVar23 + 0x28);
          uVar19 = 0;
          if (puVar21 != (undefined8 *)0x0) {
            uVar19 = (**(code **)*puVar21)();
          }
        }
        lVar5 = *(long *)(lVar23 + 0x10) + *(long *)(lVar23 + 8);
        uVar11 = *(ushort *)(lVar5 + 10);
        uVar36 = (uint)uVar11;
        uVar10 = *(ushort *)(lVar5 + 0xc);
        uVar37 = (uint)uVar10;
        uVar30 = (uint)uVar10;
        uVar29 = uVar37;
        if (((uint)uVar11 == (local_80 & 0xffff)) ||
           ((uVar10 != 0xffff && (uVar29 = local_80 & 0xffff, (uint)uVar10 == (local_80 & 0xffff))))
           ) {
LAB_0377c2a8:
          uVar30 = (uint)local_7c;
          uVar37 = local_7c >> 4 & 0xf;
          local_248 = (undefined *)(CONCAT44(local_248._4_4_,uVar30) & 0xffffffff0000000f);
          uVar36 = uVar37;
          if ((int)local_248 != 1) {
            uVar36 = 0;
          }
          local_248 = (undefined *)CONCAT44(local_248._4_4_,uVar36);
          if (uVar36 != 1) {
            local_248 = (undefined *)(CONCAT44(local_248._4_4_,uVar30) & 0xffffffff0000000f);
            if ((int)local_248 != 1) {
              uVar37 = 0;
            }
            local_248 = (undefined *)CONCAT44(local_248._4_4_,uVar37);
            if (uVar37 == 2) {
              local_2bc = 1;
              uVar36 = uVar29;
              if ((uint)uVar11 != (local_80 & 0xffff)) {
                uVar36 = (uint)uVar11;
              }
              uVar30 = 0xffff;
              local_2ac[0] = (ushort)uVar36;
              goto LAB_0377c30c;
            }
            local_248 = (undefined *)(CONCAT44(local_248._4_4_,uVar30) & 0xffffffff0000000f);
          }
        }
        else {
          uVar29 = uVar37;
          if ((uint)uVar11 == local_80 >> 0x10) goto LAB_0377c2a8;
          local_2bc = 0;
          local_2ac[0] = uVar11;
          if ((uVar10 != 0xffff) && ((uint)uVar10 == local_80 >> 0x10)) goto LAB_0377c2a8;
LAB_0377c30c:
          local_228 = 0x20;
          local_220 = 0xffffffff;
          uStack_218 = 0xffffffff00000000;
          local_210 = 0xffffffff;
          local_248 = (undefined *)CONCAT17((char)((ulong)local_248 >> 0x38),0x1010000);
          local_224 = 0;
          local_1f8 = 0x40;
          local_1b5 = 0;
          local_1f4[0] = 0;
          local_1a0 = 0x40;
          local_15d = 0;
          local_19c[0] = 0;
          local_158 = 0;
          uStack_150 = 0;
          local_148 = 0;
          uStack_140 = 0;
          local_138 = 0;
          uStack_130 = 0;
          local_128 = 0;
          uStack_120 = 0;
          local_238 = puVar13 + 0x10;
          puStack_230 = &local_158;
          local_208 = puVar12 + 0x10;
          puStack_200 = local_1f4;
          local_1b0 = puVar12 + 0x10;
          puStack_1a8 = local_19c;
          memset(&local_158,0,(long)puVar7 + (-0xe0 - (long)&local_238));
          local_114 = 0;
          local_100 = 8;
          local_e0 = 8;
          local_c0 = 8;
          local_a0 = 8;
          local_f5 = 0;
          local_d5 = 0;
          local_b5 = 0;
          local_95 = 0;
          local_fc[0] = 0;
          local_dc[0] = 0;
          local_bc[0] = 0;
          local_9c[0] = 0;
          local_2a8 = (undefined *)0x0;
          local_2a0 = (char *)0x0;
          local_270 = 0;
          if (local_268 != (undefined8 *)0x0) {
            local_2a8 = (undefined *)0x400000000;
            local_2a0 = (char *)local_268;
          }
          local_298 = &local_288;
          local_290 = &local_288;
          local_288 = &local_280;
          local_280 = &local_278;
          local_278 = &local_270;
          local_110 = puVar2;
          local_108 = local_fc;
          local_f0 = puVar2;
          local_e8 = local_dc;
          local_d0 = puVar2;
          puStack_c8 = local_bc;
          local_b0 = puVar2;
          puStack_a8 = local_9c;
          bVar17 = FUN_03770770(local_2ac,&local_2a8);
          puVar15 = local_108;
          puVar14 = PTR_DAT_04bc0678;
          if ((bVar17 & 1) == 0) {
            lVar26 = *(long *)PTR_DAT_04bb4958;
            if (lVar26 != 0) {
              if (uVar36 < 500) {
                uVar11 = *(ushort *)(lVar26 + (ulong)uVar36 * 2 + 0x620);
                if ((int)*(uint *)(lVar26 + 0x1c0) < 1) {
                  if ((((*(long *)(lVar26 + 0xb0) != 0) &&
                       (puVar27 = *(uint **)(*(long *)(lVar26 + 0xb0) + 8), puVar27 != (uint *)0x0))
                      && ((uVar29 = (uint)uVar11, *(uint *)(lVar26 + 200) <= uVar29 ||
                          (*(char *)(*(long *)(lVar26 + 0xd0) + (ulong)uVar29) != '\0')))) &&
                     (((uVar29 < *puVar27 && (puVar27[1] != 0)) && ((ushort)puVar27[2] != 0)))) {
                    iVar18 = 0xc;
                    if (*(char *)((long)puVar27 + 10) != '\0') {
                      iVar18 = 0x1c;
                    }
                    puVar27 = (uint *)((ulong)(puVar27[1] * uVar29 + (uint)(ushort)puVar27[2] * 8 +
                                              iVar18) + (long)puVar27);
                    goto joined_r0x0377c928;
                  }
                }
                else if ((uint)uVar11 < *(uint *)(lVar26 + 0x1c0)) {
                  uVar29 = (uint)uVar11;
                  if (*(uint *)(lVar26 + 0x1b0) <= uVar29) {
                    uVar29 = 0;
                  }
                  puVar27 = *(uint **)(*(long *)(lVar26 + 0x1b8) + (ulong)uVar29 * 8);
joined_r0x0377c928:
                  if (puVar27 != (uint *)0x0) {
                    if (*puVar27 != 0) {
                      cVar28 = *PTR_DAT_04bc0670;
                      do {
                        if (cVar28 == '\0') {
                          cVar28 = '\x01';
                          *PTR_DAT_04bc0670 = 1;
                          *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                          *(undefined8 *)puVar14 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                        }
                        else {
                          uVar29 = *(uint *)(puVar14 + 0x48);
                          if (-1 < (int)uVar29) {
                            puVar35 = (undefined1 *)((ulong)uVar29 + (long)puVar27);
                            goto LAB_0377c828;
                          }
                          if (uVar29 != 0xffffffff) break;
                        }
                        puVar33 = (uint *)(ulong)*puVar27;
                        puVar35 = (undefined1 *)0x0;
                        if ((*puVar27 == 0) || (puVar27 == puVar33)) goto LAB_0377c828;
                        lVar8 = 0xc;
                        if (*(char *)((long)puVar27 + (10 - (long)puVar33)) != '\0') {
                          lVar8 = 0x1c;
                        }
                        lVar8 = (long)puVar27 + (lVar8 - (long)puVar33);
                        if (lVar8 == 0) break;
                        uVar22 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar33));
                        *(undefined4 *)(puVar14 + 0x48) = 0xfffffffe;
                        puVar35 = (undefined1 *)0x0;
                        if (uVar22 == 0) goto LAB_0377c828;
                        piVar34 = (int *)(lVar8 + 4);
                        while (piVar34[-1] != 0x34c8eed5) {
                          piVar34 = piVar34 + 2;
                          uVar22 = uVar22 - 1;
                          if (uVar22 == 0) {
                            puVar35 = (undefined1 *)0x0;
                            goto LAB_0377c828;
                          }
                        }
                        iVar18 = 0;
                        if (*piVar34 != -1) {
                          iVar18 = *piVar34;
                        }
                        *(int *)(puVar14 + 0x48) = iVar18;
                      } while (*puVar27 != 0);
                    }
                    puVar35 = (undefined1 *)0x0;
LAB_0377c828:
                    puVar9 = *(undefined1 **)PTR_PTR_04bc0668;
                    if (puVar35 != (undefined1 *)0x0) {
                      puVar9 = puVar35;
                    }
                    if (local_108 != puVar9) {
                      lVar26 = 0;
                      do {
                        if (puVar9[lVar26] == '\0') goto LAB_0377c93c;
                        if (puVar9[lVar26 + 1] == '\0') {
                          lVar26 = lVar26 + 1;
                          goto LAB_0377c93c;
                        }
                        if (puVar9[lVar26 + 2] == '\0') {
                          lVar26 = lVar26 + 2;
                          goto LAB_0377c93c;
                        }
                        lVar26 = lVar26 + 3;
                      } while (lVar26 != 0x80001);
                      lVar26 = 0;
LAB_0377c93c:
                      iVar18 = (int)lVar26;
                      if (local_100 <= (int)lVar26) {
                        iVar18 = local_100 + -1;
                      }
                      memcpy(local_108,puVar9,(long)iVar18);
                      puVar15[iVar18] = 0;
                      lVar26 = *(long *)PTR_DAT_04bb4958;
                    }
                    if (lVar26 == 0) goto LAB_0377cba4;
                  }
                }
              }
              puVar15 = local_e8;
              puVar14 = PTR_DAT_04bc0678;
              if (uVar30 < 500) {
                uVar11 = *(ushort *)(lVar26 + (ulong)uVar30 * 2 + 0x620);
                if ((int)*(uint *)(lVar26 + 0x1c0) < 1) {
                  if ((((*(long *)(lVar26 + 0xb0) != 0) &&
                       (puVar27 = *(uint **)(*(long *)(lVar26 + 0xb0) + 8), puVar27 != (uint *)0x0))
                      && ((uVar29 = (uint)uVar11, *(uint *)(lVar26 + 200) <= uVar29 ||
                          (*(char *)(*(long *)(lVar26 + 0xd0) + (ulong)uVar29) != '\0')))) &&
                     (((uVar29 < *puVar27 && (puVar27[1] != 0)) && ((ushort)puVar27[2] != 0)))) {
                    iVar18 = 0xc;
                    if (*(char *)((long)puVar27 + 10) != '\0') {
                      iVar18 = 0x1c;
                    }
                    puVar27 = (uint *)((ulong)(puVar27[1] * uVar29 + (uint)(ushort)puVar27[2] * 8 +
                                              iVar18) + (long)puVar27);
                    goto joined_r0x0377cb68;
                  }
                }
                else if ((uint)uVar11 < *(uint *)(lVar26 + 0x1c0)) {
                  uVar29 = (uint)uVar11;
                  if (*(uint *)(lVar26 + 0x1b0) <= uVar29) {
                    uVar29 = 0;
                  }
                  puVar27 = *(uint **)(*(long *)(lVar26 + 0x1b8) + (ulong)uVar29 * 8);
joined_r0x0377cb68:
                  if (puVar27 != (uint *)0x0) {
                    if (*puVar27 != 0) {
                      cVar28 = *PTR_DAT_04bc0670;
                      do {
                        if (cVar28 == '\0') {
                          cVar28 = '\x01';
                          *PTR_DAT_04bc0670 = 1;
                          *(undefined4 *)(puVar14 + 0x50) = 0xffffffff;
                          *(undefined8 *)puVar14 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar14 + 0x48) = 0xffffffffffffffff;
                        }
                        else {
                          uVar29 = *(uint *)(puVar14 + 0x48);
                          if (-1 < (int)uVar29) {
                            puVar35 = (undefined1 *)((ulong)uVar29 + (long)puVar27);
                            goto LAB_0377ca98;
                          }
                          if (uVar29 != 0xffffffff) break;
                        }
                        puVar33 = (uint *)(ulong)*puVar27;
                        puVar35 = (undefined1 *)0x0;
                        if ((*puVar27 == 0) || (puVar27 == puVar33)) goto LAB_0377ca98;
                        lVar26 = 0xc;
                        if (*(char *)((long)puVar27 + (10 - (long)puVar33)) != '\0') {
                          lVar26 = 0x1c;
                        }
                        lVar26 = (long)puVar27 + (lVar26 - (long)puVar33);
                        if (lVar26 == 0) break;
                        uVar22 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar33));
                        *(undefined4 *)(puVar14 + 0x48) = 0xfffffffe;
                        puVar35 = (undefined1 *)0x0;
                        if (uVar22 == 0) goto LAB_0377ca98;
                        piVar34 = (int *)(lVar26 + 4);
                        while (piVar34[-1] != 0x34c8eed5) {
                          piVar34 = piVar34 + 2;
                          uVar22 = uVar22 - 1;
                          if (uVar22 == 0) {
                            puVar35 = (undefined1 *)0x0;
                            goto LAB_0377ca98;
                          }
                        }
                        iVar18 = 0;
                        if (*piVar34 != -1) {
                          iVar18 = *piVar34;
                        }
                        *(int *)(puVar14 + 0x48) = iVar18;
                      } while (*puVar27 != 0);
                    }
                    puVar35 = (undefined1 *)0x0;
LAB_0377ca98:
                    puVar9 = *(undefined1 **)PTR_PTR_04bc0668;
                    if (puVar35 != (undefined1 *)0x0) {
                      puVar9 = puVar35;
                    }
                    if (local_e8 != puVar9) {
                      lVar26 = 0;
                      do {
                        if (puVar9[lVar26] == '\0') goto LAB_0377cb7c;
                        if (puVar9[lVar26 + 1] == '\0') {
                          lVar26 = lVar26 + 1;
                          goto LAB_0377cb7c;
                        }
                        if (puVar9[lVar26 + 2] == '\0') {
                          lVar26 = lVar26 + 2;
                          goto LAB_0377cb7c;
                        }
                        lVar26 = lVar26 + 3;
                      } while (lVar26 != 0x80001);
                      lVar26 = 0;
LAB_0377cb7c:
                      iVar18 = (int)lVar26;
                      if (local_e0 <= (int)lVar26) {
                        iVar18 = local_e0 + -1;
                      }
                      memcpy(local_e8,puVar9,(long)iVar18);
                      puVar15[iVar18] = 0;
                    }
                  }
                }
              }
            }
          }
          else {
            uVar29 = (uint)local_2a8;
            if (3 < (int)(uint)local_2a8) {
              uVar29 = 4;
            }
            if ((0 < (int)(uint)local_2a8) && (lVar26 = *(long *)PTR_DAT_04bb4958, lVar26 != 0)) {
              uVar22 = 0;
              if ((int)uVar29 < 2) {
                uVar29 = 1;
              }
              puVar21 = (undefined8 *)PTR_DAT_04bc0678;
              do {
                PTR_DAT_04bc0678 = (undefined *)puVar21;
                if ((lVar26 != 0) && ((ulong)**(ushort **)((long)local_2a0 + uVar22 * 8) < 500)) {
                  uVar11 = *(ushort *)
                            (lVar26 + (ulong)**(ushort **)((long)local_2a0 + uVar22 * 8) * 2 + 0x620
                            );
                  if ((int)*(uint *)(lVar26 + 0x1c0) < 1) {
                    if ((((*(long *)(lVar26 + 0xb0) != 0) &&
                         (puVar27 = *(uint **)(*(long *)(lVar26 + 0xb0) + 8), puVar27 != (uint *)0x0
                         )) && ((uVar37 = (uint)uVar11, *(uint *)(lVar26 + 200) <= uVar37 ||
                                (*(char *)(*(long *)(lVar26 + 0xd0) + (ulong)uVar37) != '\0')))) &&
                       (((uVar37 < *puVar27 && (puVar27[1] != 0)) && ((ushort)puVar27[2] != 0)))) {
                      iVar18 = 0xc;
                      if (*(char *)((long)puVar27 + 10) != '\0') {
                        iVar18 = 0x1c;
                      }
                      puVar27 = (uint *)((ulong)(puVar27[1] * uVar37 + (uint)(ushort)puVar27[2] * 8
                                                + iVar18) + (long)puVar27);
                      goto joined_r0x0377c688;
                    }
                  }
                  else if ((uint)uVar11 < *(uint *)(lVar26 + 0x1c0)) {
                    uVar37 = (uint)uVar11;
                    if (*(uint *)(lVar26 + 0x1b0) <= uVar37) {
                      uVar37 = 0;
                    }
                    puVar27 = *(uint **)(*(long *)(lVar26 + 0x1b8) + (ulong)uVar37 * 8);
joined_r0x0377c688:
                    if (puVar27 != (uint *)0x0) {
                      if (*puVar27 != 0) {
                        cVar28 = *PTR_DAT_04bc0670;
                        do {
                          if (cVar28 == '\0') {
                            cVar28 = '\x01';
                            *PTR_DAT_04bc0670 = 1;
                            *(undefined4 *)(puVar21 + 10) = 0xffffffff;
                            *puVar21 = 0xffffffffffffffff;
                            puVar21[1] = 0xffffffffffffffff;
                            puVar21[2] = 0xffffffffffffffff;
                            puVar21[3] = 0xffffffffffffffff;
                            puVar21[4] = 0xffffffffffffffff;
                            puVar21[5] = 0xffffffffffffffff;
                            puVar21[6] = 0xffffffffffffffff;
                            puVar21[7] = 0xffffffffffffffff;
                            puVar21[8] = 0xffffffffffffffff;
                            puVar21[9] = 0xffffffffffffffff;
                          }
                          else {
                            uVar37 = *(uint *)(puVar21 + 9);
                            if (-1 < (int)uVar37) {
                              pvVar32 = (void *)((ulong)uVar37 + (long)puVar27);
                              goto LAB_0377c5bc;
                            }
                            if (uVar37 != 0xffffffff) break;
                          }
                          puVar33 = (uint *)(ulong)*puVar27;
                          pvVar32 = (void *)0x0;
                          if ((*puVar27 == 0) || (puVar27 == puVar33)) goto LAB_0377c5bc;
                          lVar26 = 0xc;
                          if (*(char *)((long)puVar27 + (10 - (long)puVar33)) != '\0') {
                            lVar26 = 0x1c;
                          }
                          lVar26 = (long)puVar27 + (lVar26 - (long)puVar33);
                          if (lVar26 == 0) break;
                          uVar31 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar33));
                          *(undefined4 *)(puVar21 + 9) = 0xfffffffe;
                          pvVar32 = (void *)0x0;
                          if (uVar31 == 0) goto LAB_0377c5bc;
                          piVar34 = (int *)(lVar26 + 4);
                          while (piVar34[-1] != 0x34c8eed5) {
                            piVar34 = piVar34 + 2;
                            uVar31 = uVar31 - 1;
                            if (uVar31 == 0) {
                              pvVar32 = (void *)0x0;
                              goto LAB_0377c5bc;
                            }
                          }
                          iVar18 = 0;
                          if (*piVar34 != -1) {
                            iVar18 = *piVar34;
                          }
                          *(int *)(puVar21 + 9) = iVar18;
                        } while (*puVar27 != 0);
                      }
                      pvVar32 = (void *)0x0;
LAB_0377c5bc:
                      __dest = *(void **)(local_fc + uVar22 * 0x20 + -0xc);
                      __src = *(void **)PTR_PTR_04bc0668;
                      if (pvVar32 != (void *)0x0) {
                        __src = pvVar32;
                      }
                      if (__dest != __src) {
                        lVar26 = 0;
                        do {
                          if (*(char *)((long)__src + lVar26) == '\0') goto LAB_0377c69c;
                          if (*(char *)((long)__src + lVar26 + 1) == '\0') {
                            lVar26 = lVar26 + 1;
                            goto LAB_0377c69c;
                          }
                          if (*(char *)((long)__src + lVar26 + 2) == '\0') {
                            lVar26 = lVar26 + 2;
                            goto LAB_0377c69c;
                          }
                          lVar26 = lVar26 + 3;
                        } while (lVar26 != 0x80001);
                        lVar26 = 0;
LAB_0377c69c:
                        iVar18 = (int)lVar26;
                        if (*(int *)(local_fc + uVar22 * 0x20 + -4) <= (int)lVar26) {
                          iVar18 = *(int *)(local_fc + uVar22 * 0x20 + -4) + -1;
                        }
                        memcpy(__dest,__src,(long)iVar18);
                        *(undefined1 *)((long)__dest + (long)iVar18) = 0;
                      }
                    }
                  }
                }
                uVar22 = uVar22 + 1;
                if (uVar22 == uVar29) break;
                lVar26 = *(long *)PTR_DAT_04bb4958;
                puVar21 = (undefined8 *)PTR_DAT_04bc0678;
              } while( true );
            }
          }
LAB_0377cba4:
          local_240 = CONCAT11(local_240._1_1_,local_2bc);
          local_2a0 = "IsParty";
          local_2a8 = puVar3;
          iVar18 = FUN_02758850(&local_2a8);
          if (iVar18 != 0) {
            local_240 = 0;
          }
          local_240 = CONCAT11(*(undefined1 *)(lVar5 + 0x1190),(undefined1)local_240) & 0x1ff;
          local_2a0 = (char *)CONCAT62(local_2a0._2_6_,(short)uVar36);
          local_2a8 = PTR_DAT_04bb7648 + 0x10;
          lVar26 = FUN_03775b80(&local_2a8);
          if (lVar26 == 0) {
            bVar6 = 0;
          }
          else {
            if ((*(long **)(lVar26 + 0xa00) == (long *)0x0) ||
               (puVar21 = (undefined8 *)**(long **)(lVar26 + 0xa00), puVar21 == (undefined8 *)0x0))
            {
              uVar36 = 1;
            }
            else {
              uVar36 = (**(code **)*puVar21)();
              uVar36 = uVar36 ^ 1;
            }
            local_78[0] = 0;
            bVar6 = (byte)*(undefined2 *)
                           (*(long *)(lVar26 + 0x9e8) + *(long *)(lVar26 + 0x9e0) + 0x153c) & 1;
            if ((uVar36 & 1) == 0) {
              if (*(long *)(lVar26 + 0xa00) != 0) {
                puVar21 = *(undefined8 **)(*(long *)(lVar26 + 0xa00) + 8);
                if (puVar21 != (undefined8 *)0x0) {
                  (**(code **)*puVar21)();
                }
              }
            }
          }
          local_23e = bVar6;
          local_23c = 0;
          local_23d = uVar30 == 0xffff & (bVar17 ^ 1);
          local_78[0] = 0x17;
          local_70 = lVar5 + 0x1194;
          local_23b = local_2bc;
          (**(code **)(local_238 + 0x38))(&local_238);
          bVar16 = true;
          local_280 = (undefined8 **)CONCAT71(local_280._1_7_,1);
          local_280 = (undefined8 **)((ulong)local_280 & 0xffffffff);
          local_290 = (undefined8 ****)0x0;
          local_288 = (undefined8 ***)0x0;
          local_2a0 = (char *)0x0;
          local_298 = (undefined8 ****)0x0;
          local_2a8 = puVar4;
          FUN_02906b00(&local_2a8,&local_238,local_78);
          psVar24 = (short *)(**(code **)(local_238 + 0x18))(&local_238);
          iVar18 = (**(code **)(local_238 + 0x20))(&local_238);
          if ((psVar24 != (short *)0x0) && (iVar18 != 0)) {
            bVar16 = *psVar24 == 0;
          }
          if ((bVar16) && (local_240._1_1_ != '\0')) {
            local_240 = local_240 & 0xff;
          }
          local_118 = *(undefined2 *)(lVar5 + 0x1192);
          local_90 = (undefined4)lVar25;
          local_116 = *(undefined2 *)(lVar5 + 0x11d2);
          local_248 = *(undefined **)(lVar5 + 0x11c4);
          local_88 = *(undefined2 *)(lVar5 + 0x11d5);
          local_114 = (int)*(char *)(lVar5 + 0x11d4);
          local_8c = *(undefined4 *)(lVar5 + 0x11cc);
          (**(code **)*param_1)(param_1,&local_248);
        }
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar23 + 0x28) != 0)) &&
           (puVar21 = *(undefined8 **)(*(long *)(lVar23 + 0x28) + 8), puVar21 != (undefined8 *)0x0))
        {
          (**(code **)*puVar21)();
        }
      }
    }
    else {
      uVar36 = (uVar11 >> 10) - 1;
      if (6 < uVar36) {
        uVar36 = 5;
      }
      local_248 = (undefined *)CONCAT44(local_248._4_4_,uVar36);
      if (uVar36 == 5) {
        if (uVar11 != 0xffff) goto LAB_0377c21c;
      }
      else {
        local_2a8 = (undefined *)CONCAT44(local_2a8._4_4_,uVar36);
        if (uVar11 != 0xffff && uVar36 == 6) goto LAB_0377c21c;
      }
    }
    lVar25 = lVar25 + 1;
    if (lVar25 == 0x1fb) {
      if ((((local_37c & 1) != 0) && (*(long *)(lVar20 + 0x36540) != 0)) &&
         (puVar21 = *(undefined8 **)(*(long *)(lVar20 + 0x36540) + 8), puVar21 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar21)();
      }
      return;
    }
  } while( true );
}

