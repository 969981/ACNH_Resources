
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_01f22e60(long param_1,long param_2,uint *param_3)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined8 *******pppppppuVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined8 *puVar25;
  long *plVar26;
  ulong uVar27;
  undefined2 *puVar28;
  uint uVar29;
  ulong uVar30;
  undefined8 local_328;
  undefined8 *local_320;
  undefined8 *******local_318;
  undefined8 *******pppppppuStack_310;
  undefined8 *******local_308;
  undefined8 *******local_300;
  undefined8 *******local_2f8;
  undefined8 *******local_2f0;
  undefined8 *******local_2e8;
  undefined8 *******local_2e0;
  undefined8 *******local_2d8;
  undefined8 *******local_2d0;
  undefined8 *******local_2c8;
  undefined8 *******local_2c0;
  undefined8 *******local_2b8;
  undefined8 *******local_2b0;
  undefined8 *******local_2a8;
  undefined8 *******local_2a0;
  undefined8 *******local_298;
  undefined8 *******local_290;
  undefined8 *******local_288;
  undefined8 *******local_280;
  undefined8 *******local_278;
  undefined8 *******local_270;
  undefined8 *******local_268;
  undefined8 *******local_260;
  undefined8 *******local_258;
  undefined8 *******local_250;
  undefined8 *******local_248;
  undefined8 *******local_240;
  undefined8 *******local_238;
  undefined8 *******local_230;
  undefined8 *******local_228;
  undefined8 ******local_220;
  undefined8 *****local_218;
  undefined8 ****local_210;
  undefined8 ***local_208;
  undefined8 **local_200;
  undefined8 *local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8 [36];
  uint local_c8 [3];
  undefined1 local_bc [4];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  uint *local_70;
  
  lVar1 = param_1 + 0x188;
  local_328 = CONCAT44(local_328._4_4_,*(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
  puVar2 = (uint *)(param_1 + 0x128a8);
  FUN_021e8490(&local_328,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,lVar1,1,0);
  puVar8 = PTR_DAT_04bb43c0;
  local_308 = &local_300;
  local_300 = &local_2f8;
  local_318 = &local_308;
  local_2f8 = &local_2f0;
  local_2f0 = &local_2e8;
  local_2e8 = &local_2e0;
  local_2e0 = &local_2d8;
  local_2d8 = &local_2d0;
  local_2d0 = &local_2c8;
  local_2c8 = &local_2c0;
  local_2c0 = &local_2b8;
  local_2b8 = &local_2b0;
  local_2b0 = &local_2a8;
  local_2a8 = &local_2a0;
  local_2a0 = &local_298;
  local_298 = &local_290;
  local_290 = &local_288;
  local_288 = &local_280;
  local_280 = &local_278;
  local_278 = &local_270;
  local_270 = &local_268;
  local_268 = &local_260;
  local_260 = &local_258;
  local_258 = &local_250;
  local_250 = &local_248;
  local_248 = &local_240;
  local_240 = &local_238;
  local_238 = &local_230;
  local_230 = &local_228;
  local_228 = &local_220;
  local_220 = &local_218;
  local_218 = &local_210;
  local_210 = &local_208;
  local_208 = &local_200;
  local_200 = &local_1f8;
  local_1f8 = &local_1f0;
  local_1f0 = 0;
  local_328 = 0;
  local_320 = (undefined8 *)0x0;
  if (local_1e8 == (undefined8 *)0x0) {
    iVar11 = 0;
  }
  else {
    local_328 = 0x2400000000;
    iVar11 = 0x24;
    local_320 = local_1e8;
  }
  puVar3 = PTR_DAT_04bc0510 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  puVar5 = PTR_DAT_04bbc1a0 + 0x10;
  uVar30 = 0xffffffff;
  uVar10 = 0;
  pppppppuStack_310 = local_318;
  if (iVar11 == 0) goto LAB_01f23060;
LAB_01f23028:
  pppppppuVar9 = local_318;
  if (local_318 != (undefined8 *******)0x0) {
    local_318 = (undefined8 *******)*local_318;
  }
  *(int *)pppppppuVar9 = (int)uVar30;
  uVar10 = (uint)local_328;
  if ((int)(uint)local_328 < local_328._4_4_) {
    local_320[(int)(uint)local_328] = pppppppuVar9;
    uVar10 = (uint)local_328 + 1;
    local_328 = CONCAT44(local_328._4_4_,uVar10);
  }
LAB_01f23060:
  uVar29 = *param_3;
  if (uVar29 == 0) {
    return 0;
  }
  uVar12 = *puVar2;
  uVar13 = (ulong)uVar12;
  puVar19 = *(undefined8 **)(param_3 + 2);
  uVar6 = *(uint *)(param_1 + 0x12ac8);
  plVar17 = *(long **)(param_1 + 0x12ad0);
  puVar15 = *(undefined8 **)(param_1 + 0x128b0);
  if ((int)uVar12 < 1) {
    uVar30 = (ulong)*(uint *)*puVar19;
LAB_01f230e8:
    if ((int)uVar30 < 0) goto LAB_01f230ec;
  }
  else {
    puVar23 = puVar19;
    do {
      uVar30 = (ulong)*(int *)*puVar23;
      uVar21 = uVar13;
      puVar25 = puVar15;
      while (*(int *)(plVar17[uVar30] + 0x20) != *(int *)*puVar25) {
        uVar21 = uVar21 - 1;
        puVar25 = puVar25 + 1;
        if (uVar21 == 0) goto LAB_01f230e8;
      }
      puVar23 = puVar23 + 1;
    } while (puVar23 != puVar19 + (int)uVar29);
    uVar30 = 0xffffffff;
LAB_01f230ec:
    if ((int)uVar12 < 1) {
      return 0;
    }
    if ((int)uVar6 < 1) {
      if ((int)uVar29 < 1) {
        return 0;
      }
      uVar20 = 0;
      do {
        puVar23 = puVar19;
        uVar21 = (ulong)uVar29;
        do {
          if (*(int *)*puVar23 == -1) {
            return 0;
          }
          uVar21 = uVar21 - 1;
          puVar23 = puVar23 + 1;
        } while (uVar21 != 0);
        uVar20 = uVar20 + 1;
      } while (uVar20 != uVar12);
    }
    else {
      uVar21 = 0;
      do {
        uVar22 = (ulong)uVar6;
        plVar26 = plVar17;
        do {
          lVar24 = *plVar26;
          if (*(int *)(lVar24 + 0x20) == *(int *)puVar15[uVar21]) goto LAB_01f23150;
          uVar22 = uVar22 - 1;
          plVar26 = plVar26 + 1;
        } while (uVar22 != 0);
        lVar24 = 0;
LAB_01f23150:
        uVar22 = 0;
        do {
          if (plVar17[uVar22] == lVar24) goto LAB_01f23170;
          uVar22 = uVar22 + 1;
        } while (uVar6 != uVar22);
        uVar22 = 0xffffffff;
LAB_01f23170:
        if (0 < (int)uVar29) {
          puVar23 = puVar19;
          uVar27 = (ulong)uVar29;
          do {
            if ((int)uVar22 == *(int *)*puVar23) {
              uVar30 = uVar22 & 0xffffffff;
              goto LAB_01f231a4;
            }
            uVar27 = uVar27 - 1;
            puVar23 = puVar23 + 1;
          } while (uVar27 != 0);
        }
        uVar21 = uVar21 + 1;
      } while (uVar21 != uVar13);
    }
LAB_01f231a4:
    if ((int)uVar30 < 0) {
      return 0;
    }
  }
  uVar29 = (uint)uVar30;
  if (0 < (int)uVar10) {
    uVar21 = (ulong)uVar10;
    puVar19 = local_320;
    do {
      if (uVar29 == *(uint *)*puVar19) {
        return 0;
      }
      puVar19 = puVar19 + 1;
      uVar21 = uVar21 - 1;
    } while (uVar21 != 0);
  }
  if (uVar6 <= uVar29) {
    lVar24 = 0;
    if ((int)uVar12 < 1) goto LAB_01f231f0;
LAB_01f23210:
    lVar16 = 0;
    do {
      if (*(int *)(lVar24 + 0x20) == **(int **)((long)puVar15 + lVar16)) {
        uVar21 = 0;
        goto LAB_01f23264;
      }
      lVar16 = lVar16 + 8;
    } while (uVar13 * 8 != lVar16);
    if ((int)uVar12 < *(int *)(param_1 + 0x128ac)) goto LAB_01f232d4;
    uVar18 = *(undefined8 *)(param_1 + 0x128b8);
    uVar10 = 0;
    puVar15 = (undefined8 *)*puVar15;
    goto LAB_01f23290;
  }
  lVar24 = plVar17[uVar30 & 0xffffffff];
  if (0 < (int)uVar12) goto LAB_01f23210;
LAB_01f231f0:
  if (*(int *)(param_1 + 0x128ac) <= (int)uVar12) {
    uVar10 = 0;
    goto LAB_01f232a0;
  }
  goto LAB_01f232d4;
  while (uVar21 = uVar21 + 1, uVar13 != uVar21) {
LAB_01f23264:
    if ((int *)puVar15[uVar21] == *(int **)((long)puVar15 + lVar16)) goto LAB_01f23280;
  }
  uVar21 = 0xffffffff;
LAB_01f23280:
  uVar10 = (uint)uVar21;
  if ((int)uVar10 < (int)uVar12) {
    uVar18 = *(undefined8 *)(param_1 + 0x128b8);
    puVar15 = (undefined8 *)puVar15[(int)uVar10];
LAB_01f23290:
    *puVar15 = uVar18;
    *(undefined8 **)(param_1 + 0x128b8) = puVar15;
    uVar12 = *puVar2;
  }
  if (-1 < (int)uVar10) {
LAB_01f232a0:
    if ((int)uVar10 < (int)uVar12) {
      uVar6 = uVar10 + 1;
      uVar20 = uVar12 - uVar6;
      if (uVar20 != 0 && (int)uVar6 <= (int)uVar12) {
        memmove((void *)(*(long *)(param_1 + 0x128b0) + (ulong)uVar10 * 8),
                (void *)(*(long *)(param_1 + 0x128b0) + (ulong)uVar6 * 8),
                -(ulong)(uVar20 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar20 << 3);
        uVar12 = *puVar2;
      }
      uVar12 = uVar12 - 1;
      *puVar2 = uVar12;
    }
  }
LAB_01f232d4:
  if ((int)uVar12 < *(int *)(param_1 + 0x128ac)) {
    puVar15 = *(undefined8 **)(param_1 + 0x128b8);
    if (puVar15 != (undefined8 *)0x0) {
      *(undefined8 *)(param_1 + 0x128b8) = *puVar15;
    }
    *(undefined4 *)puVar15 = *(undefined4 *)(lVar24 + 0x20);
    if ((int)*puVar2 < *(int *)(param_1 + 0x128ac)) {
      *(undefined8 **)(*(long *)(param_1 + 0x128b0) + (long)(int)*puVar2 * 8) = puVar15;
      *puVar2 = *puVar2 + 1;
    }
  }
  if (uVar29 < *(uint *)(param_1 + 0x12ac8)) {
    puVar28 = *(undefined2 **)(*(long *)(param_1 + 0x12ad0) + (uVar30 & 0xffffffff) * 8);
  }
  else {
    puVar28 = (undefined2 *)0x0;
  }
  lVar24 = *(long *)puVar8;
  local_78 = *puVar28;
  local_76 = *(undefined1 *)(puVar28 + 1);
  local_75 = *(undefined1 *)((long)puVar28 + 3);
  local_74 = *(undefined4 *)(puVar28 + 2);
  local_70 = (uint *)0x0;
  local_80 = puVar3;
  uVar10 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar8 != 0) {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar24 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar24 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(puVar28);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar24 + 0x1d8)) &&
         (puVar14 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8),
         puVar14 != (uint *)0x0)) {
        local_70 = puVar14;
      }
    }
  }
  local_88 = 0;
  local_98 = 0;
  local_a8 = puVar5;
  puStack_a0 = puVar4;
  local_90 = puVar4;
  FUN_01afb480(&local_80,&local_a8);
  local_b0 = 0;
  local_b8 = 0;
  local_bc[0] = 0;
  local_98 = CONCAT44(local_98._4_4_ + *(int *)(puVar28 + 10),(int)local_98 + *(int *)(puVar28 + 8))
  ;
  local_88 = CONCAT44(local_88._4_4_ + *(int *)(puVar28 + 10),(int)local_88 + *(int *)(puVar28 + 8))
  ;
  if (local_70 != (uint *)0x0) {
    uVar10 = *local_70;
    local_c8[0] = 0;
    if ((uVar10 == 0) || (local_70 == (uint *)(ulong)uVar10)) goto LAB_01f234d4;
    puVar14 = (uint *)((long)local_70 - (long)(ulong)uVar10);
    local_c8[0] = 0;
    if (*puVar14 == 0) goto LAB_01f234d4;
    uVar10 = puVar14[1];
    if ((uVar10 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
      lVar24 = 0xc;
      if (*(char *)((long)puVar14 + 10) != '\0') {
        lVar24 = 0x1c;
      }
      lVar24 = (long)puVar14 + lVar24 + (ulong)(ushort)puVar14[2] * 8;
      if (lVar24 != 0) {
        uVar29 = 0;
        if ((ulong)uVar10 != 0) {
          uVar29 = (uint)((ulong)((long)local_70 - lVar24) / (ulong)uVar10);
        }
        if (*puVar14 <= uVar29) {
          uVar29 = 0xffffffff;
        }
        if ((uVar29 < *(uint *)PTR_DAT_04bc0048) &&
           (local_c8[0] = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar29 * 2)
           , local_c8[0] < 0x52)) goto LAB_01f234d4;
      }
    }
  }
  local_c8[0] = 0;
LAB_01f234d4:
  if (local_c8[0] - 1 < 9) {
    uVar13 = FUN_021f2630(puVar28,&local_a8,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,lVar1,
                          &local_b8,local_bc,0);
    if ((uVar13 & 1) != 0) {
LAB_01f235f8:
      *(undefined2 *)(param_2 + 0x58) = *puVar28;
      *(undefined1 *)(param_2 + 0x5a) = *(undefined1 *)(puVar28 + 1);
      *(undefined1 *)(param_2 + 0x5b) = *(undefined1 *)((long)puVar28 + 3);
      uVar7 = *(undefined4 *)(puVar28 + 2);
      *(int *)(param_2 + 0x30) = (int)local_98;
      *(int *)(param_2 + 0x34) = local_98._4_4_;
      *(undefined4 *)(param_2 + 0x14) = (undefined4)local_b8;
      *(undefined4 *)(param_2 + 0x18) = local_b8._4_4_;
      *(undefined4 *)(param_2 + 0x1c) = local_b0;
      *(undefined4 *)(param_2 + 0x5c) = uVar7;
      *(int *)(param_2 + 0x40) = (int)local_88;
      *(int *)(param_2 + 0x44) = local_88._4_4_;
      *(undefined1 *)(param_2 + 0x54) = local_bc[0];
      return 1;
    }
  }
  else {
    FUN_021fd6f0(local_c8,0,puVar28,&local_a8,0);
    FUN_02080828(param_1 + 59000,local_c8,puVar28);
    uVar13 = FUN_021fffa0(local_bc,lVar1,*(undefined8 *)(param_1 + 8),&local_a8,0);
    if ((uVar13 & 1) != 0) {
      local_b0 = 0;
      local_b8._4_4_ = 0;
      local_b8._0_4_ = 0;
      goto LAB_01f235f8;
    }
  }
  uVar10 = (uint)local_328;
  if ((int)(uint)local_328 < local_328._4_4_) goto LAB_01f23028;
  goto LAB_01f23060;
}

