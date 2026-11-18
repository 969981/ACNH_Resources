
/* WARNING: Removing unreachable block (ram,0x03760c50) */
/* WARNING: Removing unreachable block (ram,0x0376283c) */
/* WARNING: Removing unreachable block (ram,0x03761420) */
/* WARNING: Removing unreachable block (ram,0x03760b00) */
/* WARNING: Removing unreachable block (ram,0x037609b4) */
/* WARNING: Removing unreachable block (ram,0x03760fe0) */
/* WARNING: Removing unreachable block (ram,0x03762240) */
/* WARNING: Removing unreachable block (ram,0x037629ec) */
/* WARNING: Removing unreachable block (ram,0x03761638) */
/* WARNING: Removing unreachable block (ram,0x037611f4) */
/* WARNING: Type propagation algorithm not settling */

void FUN_03760960(long param_1)

{
  void *pvVar1;
  ushort *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  byte bVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  short sVar14;
  undefined4 uVar15;
  byte bVar16;
  bool bVar17;
  undefined1 uVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  undefined8 *puVar23;
  ulong uVar24;
  undefined8 *puVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  ushort uVar30;
  undefined *puVar31;
  ushort *puVar32;
  undefined4 local_2b4;
  undefined4 local_2b0;
  uint local_2ac;
  undefined4 local_28c;
  undefined8 local_288;
  undefined8 *local_280;
  undefined8 local_278;
  undefined1 *****local_270;
  undefined1 ****local_268;
  undefined1 ***local_260;
  undefined1 **local_258;
  undefined1 *local_250;
  undefined4 local_248;
  undefined1 auStack_244 [63];
  undefined1 local_205;
  undefined1 **local_200;
  undefined1 *puStack_1f8;
  undefined4 local_1f0;
  undefined1 local_1ec [63];
  undefined1 local_1ad;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  uint local_a8 [2];
  long local_a0;
  undefined *local_98;
  long local_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  puVar31 = PTR_DAT_04bb46b0;
  cVar8 = *(char *)(param_1 + 0x30);
  lVar28 = *(long *)PTR_DAT_04bb46b0;
  if (lVar28 == 0) {
    lVar28 = 0;
  }
  else {
    local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
    if (((*(byte *)(lVar28 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar20 = (**(code **)(**(long **)(*(long *)(lVar28 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar20 = 0;
    }
    lVar28 = 0;
    if (lVar20 != 0) {
      lVar28 = lVar20 + 0x365f8;
    }
  }
  if (cVar8 != '\0') {
    if (lVar28 == 0) {
      return;
    }
    lVar20 = *(long *)(lVar28 + 0x1678);
    if (lVar20 == 0) {
      uVar21 = 0;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar21 = 0;
        plVar22 = *(long **)(lVar20 + 0x20);
      }
      else {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        uVar21 = uVar21 & 0xffffffff;
        if (*(long *)(lVar28 + 0x1678) == 0) goto LAB_03760b94;
        plVar22 = *(long **)(*(long *)(lVar28 + 0x1678) + 0x20);
      }
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x1658);
        local_280 = *(undefined8 **)(lVar28 + 0x1660);
        local_278 = (undefined1 *****)0x40;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
LAB_03760b94:
    lVar20 = *(long *)(lVar28 + 0x1660) + *(long *)(lVar28 + 0x1658);
    *(undefined8 *)(lVar20 + 0x2a) = 0;
    *(undefined8 *)(lVar20 + 0x24) = 0;
    *(undefined8 *)(lVar20 + 0x1c) = 0;
    *(undefined8 *)(lVar20 + 0x14) = 0;
    *(undefined8 *)(lVar20 + 0xc) = 0;
    *(undefined8 *)(lVar20 + 4) = 0;
    if ((*(long *)(lVar28 + 0x1678) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar28 + 0x1678) + 0x20), plVar22 != (long *)0x0)) {
      local_288 = *(undefined **)(lVar28 + 0x1658);
      local_280 = *(undefined8 **)(lVar28 + 0x1660);
      local_278 = (undefined1 *****)0x40;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
    }
    local_98 = (undefined *)((ulong)local_98 & 0xffffffffffff0000);
    FUN_0374a300(&local_98,
                 *(undefined1 *)(*(long *)(lVar28 + 0x1660) + *(long *)(lVar28 + 0x1658) + 0x32));
    local_288 = (undefined *)(CONCAT44(local_288._4_4_,(uint)(ushort)local_98) & 0xffffffff0000000f)
    ;
    if ((((int)local_288 != 1) && (uVar30 = *(ushort *)(param_1 + 8), (ulong)uVar30 < 500)) &&
       (lVar20 = *(long *)puVar31, lVar20 != 0)) {
      local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
      if ((((*(byte *)(lVar20 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar20 = (**(code **)(**(long **)(*(long *)(lVar20 + 0x10) + 0x188) + 0x30))(),
         lVar20 != 0)) {
        lVar20 = lVar20 + (ulong)uVar30 * 0x2d48;
        lVar26 = lVar20 + 0x4cc10;
        if ((*(long **)(lVar20 + 0x4cc70) == (long *)0x0) ||
           (puVar23 = (undefined8 *)**(long **)(lVar20 + 0x4cc70), puVar23 == (undefined8 *)0x0)) {
          uVar24 = 0;
        }
        else {
          uVar24 = (**(code **)*puVar23)();
          uVar24 = uVar24 & 0xffffffff;
        }
        puVar32 = (ushort *)(*(long *)(lVar20 + 0x4cc58) + *(long *)(lVar20 + 0x4cc50));
        uVar30 = puVar32[2];
        if ((uVar30 != 0xffff && (*puVar32 & 1) == 0) && (lVar29 = *(long *)puVar31, lVar29 != 0)) {
          local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
          if ((((*(byte *)(lVar29 + 0x50d) ^ 0xff) & 6) == 0) &&
             (lVar29 = (**(code **)(**(long **)(*(long *)(lVar29 + 0x10) + 0x188) + 0x30))(),
             uVar30 < 500 && lVar29 != 0)) {
            lVar26 = lVar29 + (ulong)uVar30 * 0x2d48 + 0x4cc10;
          }
        }
        if ((((uVar24 & 1) != 0) && (*(long *)(lVar20 + 0x4cc70) != 0)) &&
           (puVar23 = *(undefined8 **)(*(long *)(lVar20 + 0x4cc70) + 8),
           puVar23 != (undefined8 *)0x0)) {
          (**(code **)*puVar23)();
        }
        uVar24 = (ulong)local_278 >> 0x20;
        local_278 = (undefined1 *****)CONCAT44((uint)uVar24 & 0xffffff00,0x80);
        local_270 = (undefined1 *****)&DAT_ffffffff;
        local_268 = (undefined1 ****)&DAT_ffffffff00000000;
        local_280 = &local_1a8;
        local_260 = (undefined1 ***)CONCAT44(local_260._4_4_,0xffffffff);
        local_250 = auStack_244;
        local_248 = 0x40;
        local_205 = 0;
        auStack_244[0] = 0;
        local_258 = (undefined1 **)(PTR_DAT_04bb2bc0 + 0x10);
        local_1f0 = 0x40;
        local_1ad = 0;
        local_1ec[0] = 0;
        puStack_1f8 = local_1ec;
        puVar31 = PTR_DAT_04bb6b38 + 0x10;
        local_b8 = 0;
        uStack_b0 = 0;
        puVar3 = local_a8;
        if (local_a8 <= (uint *)((long)&local_1a8 + 2U)) {
          puVar3 = (uint *)((long)&local_1a8 + 2U);
        }
        local_c8 = 0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
        local_e8 = 0;
        uStack_e0 = 0;
        local_f8 = 0;
        uStack_f0 = 0;
        local_108 = 0;
        uStack_100 = 0;
        local_118 = 0;
        uStack_110 = 0;
        local_128 = 0;
        uStack_120 = 0;
        local_138 = 0;
        uStack_130 = 0;
        local_148 = 0;
        uStack_140 = 0;
        local_158 = 0;
        uStack_150 = 0;
        local_168 = 0;
        uStack_160 = 0;
        local_178 = 0;
        uStack_170 = 0;
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = 0;
        uStack_1a0 = 0;
        local_288 = puVar31;
        local_200 = local_258;
        memset(local_280,0,(long)puVar3 + (-0xe0 - (long)&local_288));
        if ((*(long **)(lVar26 + 0x1758) == (long *)0x0) ||
           (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x1758), puVar23 == (undefined8 *)0x0)) {
          uVar19 = 1;
        }
        else {
          uVar19 = (**(code **)*puVar23)();
          uVar19 = uVar19 ^ 1;
          puVar31 = local_288;
        }
        local_a8[0] = 0x17;
        local_a0 = *(long *)(lVar26 + 0x1740) + *(long *)(lVar26 + 0x1738) + 4;
        (**(code **)(puVar31 + 0x38))(&local_288);
        local_78 = 0;
        local_80 = 0;
        local_88 = 0;
        local_70 = 1;
        local_6c = 0;
        local_98 = PTR_DAT_04bc0cd8 + 0x10;
        local_90 = 0;
        FUN_02906b00(&local_98,&local_288,local_a8);
        if ((((uVar19 & 1) == 0) && (*(long *)(lVar26 + 0x1758) != 0)) &&
           (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x1758) + 8), puVar23 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar23)();
        }
        if ((*(long *)(lVar28 + 0x1678) != 0) &&
           (plVar22 = *(long **)(*(long *)(lVar28 + 0x1678) + 0x20), plVar22 != (long *)0x0)) {
          local_98 = *(undefined **)(lVar28 + 0x1658);
          local_90 = *(undefined8 *)(lVar28 + 0x1660);
          local_88 = 0x40;
          (**(code **)(*plVar22 + 0x20))(plVar22,&local_98);
        }
        local_98 = (undefined *)CONCAT44(local_98._4_4_,0x17);
        local_90 = *(long *)(lVar28 + 0x1660) + *(long *)(lVar28 + 0x1658) + 4;
        FUN_02906c90(&local_98,&local_288);
        if ((*(long **)(lVar26 + 0x1758) == (long *)0x0) ||
           (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x1758), puVar23 == (undefined8 *)0x0)) {
          uVar30 = *(ushort *)(*(long *)(lVar26 + 0x1740) + *(long *)(lVar26 + 0x1738));
        }
        else {
          uVar24 = (**(code **)*puVar23)();
          uVar30 = *(ushort *)(*(long *)(lVar26 + 0x1740) + *(long *)(lVar26 + 0x1738));
          if ((((uVar24 & 1) != 0) && (*(long *)(lVar26 + 0x1758) != 0)) &&
             (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x1758) + 8),
             puVar23 != (undefined8 *)0x0)) {
            (**(code **)*puVar23)();
          }
        }
        if ((*(long *)(lVar28 + 0x1678) != 0) &&
           (plVar22 = *(long **)(*(long *)(lVar28 + 0x1678) + 0x20), plVar22 != (long *)0x0)) {
          local_98 = *(undefined **)(lVar28 + 0x1658);
          local_90 = *(long *)(lVar28 + 0x1660);
          local_88 = 0x40;
          (**(code **)(*plVar22 + 0x20))(plVar22,&local_98);
        }
        *(ushort *)(*(long *)(lVar28 + 0x1660) + *(long *)(lVar28 + 0x1658)) =
             *(ushort *)(*(long *)(lVar28 + 0x1660) + *(long *)(lVar28 + 0x1658)) & 0xfffe |
             uVar30 & 1;
      }
    }
    if ((uVar21 & 1) == 0) {
      return;
    }
    lVar28 = *(long *)(lVar28 + 0x1678);
    goto joined_r0x0376192c;
  }
  if (lVar28 == 0) {
    return;
  }
  puVar32 = (ushort *)(param_1 + 8);
  uVar13 = *puVar32;
  uVar30 = *(ushort *)(param_1 + 0x18);
  local_a8[0] = *(ushort *)(param_1 + 0x2a) & 0xf;
  if (local_a8[0] - 1 < 2) {
    local_288 = (undefined *)0x0;
    local_280 = (undefined8 *)0x0;
    local_268 = &local_260;
    local_260 = &local_258;
    local_278 = &local_268;
    local_258 = &local_250;
    local_250 = (undefined1 *)0x0;
    if ((undefined8 *)&local_248 != (undefined8 *)0x0) {
      local_288 = (undefined *)0x400000000;
      local_280 = (undefined8 *)&local_248;
    }
    local_270 = local_278;
    uVar21 = FUN_03770770(puVar32,&local_288);
    if ((uVar21 & 1) == 0) goto LAB_03760cb0;
    bVar16 = *(ushort *)*local_280 == uVar13;
    uVar30 = 0xffff;
  }
  else {
    lVar20 = *(long *)puVar31;
    if (lVar20 != 0) {
      local_288._4_4_ = (undefined4)((ulong)local_288 >> 0x20);
      local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
      if (((((*(byte *)(lVar20 + 0x50d) ^ 0xff) & 6) == 0) &&
          (lVar20 = (**(code **)(**(long **)(*(long *)(lVar20 + 0x10) + 0x188) + 0x38))(),
          uVar13 < 500)) && (lVar20 != 0)) {
        lVar20 = lVar20 + (ulong)uVar13 * 0x2d48;
        if (*(long **)(lVar20 + 0x4cc38) == (long *)0x0) {
          uVar21 = 0;
        }
        else {
          puVar23 = (undefined8 *)**(long **)(lVar20 + 0x4cc38);
          uVar21 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar21 = (**(code **)*puVar23)();
          }
        }
        lVar26 = *(long *)(lVar20 + 0x4cc20) + *(long *)(lVar20 + 0x4cc18);
        bVar16 = *(short *)(lVar26 + 0xc) == -1 | (byte)*(undefined2 *)(lVar26 + 8);
        if ((((uVar21 & 1) != 0) && (*(long *)(lVar20 + 0x4cc38) != 0)) &&
           (puVar23 = *(undefined8 **)(*(long *)(lVar20 + 0x4cc38) + 8),
           puVar23 != (undefined8 *)0x0)) {
          (**(code **)*puVar23)();
        }
        goto LAB_03760cb4;
      }
    }
LAB_03760cb0:
    bVar16 = 1;
  }
LAB_03760cb4:
  if (local_a8[0] == 4) {
    lVar20 = *(long *)(lVar28 + 0x60);
    if (lVar20 == 0) {
      uVar21 = 0;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0x60);
        uVar21 = uVar21 & 0xffffffff;
        if (lVar20 == 0) goto LAB_03760ef8;
      }
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x40);
        local_280 = *(undefined8 **)(lVar28 + 0x48);
        local_278 = (undefined1 *****)0x490c;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
LAB_03760ef8:
    pvVar1 = (void *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40));
    memset(pvVar1,0,0x490c);
    FUN_028f50f0((long)pvVar1 + 8);
    *(undefined8 *)((long)pvVar1 + 0x48e0) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48b0) = 0xffffffff;
    *(undefined2 *)((long)pvVar1 + 0x48b4) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48b8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e7) = 0;
    *(undefined2 *)((long)pvVar1 + 0x48f0) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48f2) = 0x101;
    *(undefined1 *)((long)pvVar1 + 0x48f6) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48f8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e6) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48fc) = 0;
    *(undefined2 *)((long)pvVar1 + 0x4904) = 0xffff;
    *(undefined8 *)((long)pvVar1 + 0x48c0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48c8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48d0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48d8) = 0;
    *(undefined4 *)((long)pvVar1 + 0x4908) = 0;
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x60) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x60) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
    uVar10 = *puVar32;
    if (((ulong)uVar10 < 500) && (lVar20 = *(long *)puVar31, lVar20 != 0)) {
      local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
      if ((((*(byte *)(lVar20 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar20 = (**(code **)(**(long **)(*(long *)(lVar20 + 0x10) + 0x188) + 0x38))(),
         lVar20 != 0)) {
        lVar20 = lVar20 + (ulong)uVar10 * 0x2d48;
        local_280 = (undefined8 *)(lVar20 + 0x4cc48);
        local_278 = (undefined1 *****)CONCAT71(local_278._1_7_,1);
        if (*(long **)(lVar20 + 0x4cc70) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar23 = (undefined8 *)**(long **)(lVar20 + 0x4cc70);
          uVar18 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar23)();
          }
        }
        local_278 = (undefined1 *****)
                    (CONCAT62(local_278._2_6_,CONCAT11(uVar18,(undefined1)local_278)) &
                    0xffffffffffff01ff);
        local_288 = PTR_DAT_04bb7688 + 0x10;
        puVar2 = (ushort *)(*(long *)(lVar20 + 0x4cc58) + *(long *)(lVar20 + 0x4cc50));
        if ((puVar2[2] == 0xffff) || ((*puVar2 & 1) != 0)) {
LAB_037619e0:
          lVar26 = lVar20 + 0x4cc10;
        }
        else {
          lVar26 = FUN_02685460();
          if (lVar26 == 0) goto LAB_037619e0;
        }
        FUN_02640184(&local_288);
        lVar20 = lVar28 + 0x1f8;
        local_278 = (undefined1 *****)((ulong)local_278 & 0xffffffffffffff00);
        local_280 = (undefined8 *)lVar20;
        if (*(long *)(lVar28 + 0x220) == 0) {
          uVar18 = 0;
        }
        else {
          puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x220) + 0x10);
          uVar18 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar23)();
          }
        }
        local_278 = (undefined1 *****)
                    (CONCAT62(local_278._2_6_,CONCAT11(uVar18,(undefined1)local_278)) &
                    0xffffffffffff01ff);
        local_90 = lVar26 + 0x18f0;
        puVar31 = PTR_DAT_04bbc4f8 + 0x10;
        local_88 = CONCAT71(local_88._1_7_,1);
        local_288 = puVar31;
        if (*(long **)(lVar26 + 0x1918) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar23 = (undefined8 *)**(long **)(lVar26 + 0x1918);
          uVar18 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar23)();
          }
        }
        local_88 = CONCAT62(local_88._2_6_,CONCAT11(uVar18,(undefined1)local_88)) &
                   0xffffffffffff01ff;
        local_98 = puVar31;
        FUN_02640280(lVar20,0x2acc);
        memcpy((void *)(*(long *)(lVar28 + 0x208) + *(long *)(lVar28 + 0x200)),
               (void *)(*(long *)(lVar26 + 0x1900) + *(long *)(lVar26 + 0x18f8)),0x2acc);
        FUN_02640184(&local_98);
        FUN_02640184(&local_288);
        local_278 = (undefined1 *****)((ulong)local_278 & 0xffffffffffffff00);
        lVar20 = lVar28 + 0x1308;
        local_280 = (undefined8 *)lVar20;
        if (*(long *)(lVar28 + 0x1330) == 0) {
          uVar18 = 0;
        }
        else {
          puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x1330) + 0x10);
          uVar18 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar23)();
          }
        }
        local_278 = (undefined1 *****)
                    (CONCAT62(local_278._2_6_,CONCAT11(uVar18,(undefined1)local_278)) &
                    0xffffffffffff01ff);
        local_90 = lVar26 + 0x2a00;
        puVar31 = PTR_DAT_04bb4c08 + 0x10;
        local_88 = CONCAT71(local_88._1_7_,1);
        local_288 = puVar31;
        if (*(long **)(lVar26 + 0x2a28) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar23 = (undefined8 *)**(long **)(lVar26 + 0x2a28);
          uVar18 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar23)();
          }
        }
        local_88 = CONCAT62(local_88._2_6_,CONCAT11(uVar18,(undefined1)local_88)) &
                   0xffffffffffff01ff;
        local_98 = puVar31;
        FUN_02640280(lVar20,4);
        *(undefined4 *)(*(long *)(lVar28 + 0x1318) + *(long *)(lVar28 + 0x1310)) =
             *(undefined4 *)(*(long *)(lVar26 + 0x2a10) + *(long *)(lVar26 + 0x2a08));
        FUN_02640184(&local_98);
        FUN_02640184(&local_288);
        local_278 = (undefined1 *****)((ulong)local_278 & 0xffffffffffffff00);
        puVar23 = (undefined8 *)(lVar28 + 0x1340);
        local_280 = puVar23;
        if (*(long *)(lVar28 + 0x1368) == 0) {
          uVar18 = 0;
        }
        else {
          puVar25 = *(undefined8 **)(*(long *)(lVar28 + 0x1368) + 0x10);
          uVar18 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar25)();
          }
        }
        local_278 = (undefined1 *****)
                    (CONCAT62(local_278._2_6_,CONCAT11(uVar18,(undefined1)local_278)) &
                    0xffffffffffff01ff);
        local_90 = lVar26 + 0x2a38;
        puVar31 = PTR_DAT_04bbddf0 + 0x10;
        local_88 = CONCAT71(local_88._1_7_,1);
        local_288 = puVar31;
        if (*(long **)(lVar26 + 0x2a60) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar25 = (undefined8 *)**(long **)(lVar26 + 0x2a60);
          uVar18 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar25)();
          }
        }
        local_88 = CONCAT62(local_88._2_6_,CONCAT11(uVar18,(undefined1)local_88)) &
                   0xffffffffffff01ff;
        local_98 = puVar31;
        FUN_02640280(puVar23,4);
        *(undefined4 *)(*(long *)(lVar28 + 0x1350) + *(long *)(lVar28 + 0x1348)) =
             *(undefined4 *)(*(long *)(lVar26 + 0x2a48) + *(long *)(lVar26 + 0x2a40));
        FUN_02640184(&local_98);
        FUN_02640184(&local_288);
      }
    }
    lVar20 = *(long *)(lVar28 + 0x98);
    if (lVar20 == 0) {
      *(undefined2 *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78) + 5) = 0xb;
      goto LAB_03761f84;
    }
    if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
      uVar21 = 0;
LAB_03761f2c:
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x78);
        local_280 = *(undefined8 **)(lVar28 + 0x80);
        local_278 = (undefined1 *****)0x48b0;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
    else {
      uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      lVar20 = *(long *)(lVar28 + 0x98);
      uVar21 = uVar21 & 0xffffffff;
      if (lVar20 != 0) goto LAB_03761f2c;
    }
    *(undefined2 *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78) + 5) = 0xb;
    if ((uVar21 & 1) == 0) goto LAB_03761f84;
    lVar20 = *(long *)(lVar28 + 0x98);
joined_r0x03761f6c:
    if ((lVar20 != 0) && (*(undefined8 **)(lVar20 + 0x18) != (undefined8 *)0x0)) {
      (**(code **)**(undefined8 **)(lVar20 + 0x18))();
    }
  }
  else if (local_a8[0] == 2) {
    lVar20 = *(long *)(lVar28 + 0x60);
    if (lVar20 == 0) {
      local_2ac = 0;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        local_2ac = 0;
      }
      else {
        local_2ac = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0x60);
        if (lVar20 == 0) goto LAB_03761074;
      }
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x40);
        local_280 = *(undefined8 **)(lVar28 + 0x48);
        local_278 = (undefined1 *****)0x490c;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
LAB_03761074:
    lVar20 = *(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40);
    sVar14 = *(short *)(lVar20 + 0x4904);
    if (sVar14 == -1) {
      lVar20 = *(long *)(lVar28 + 0x60);
      if (lVar20 != 0) goto LAB_037610ac;
LAB_037610d8:
      uVar21 = 0;
    }
    else {
      local_2b0 = *(undefined4 *)(lVar20 + 0x4900);
      local_2b4 = *(undefined4 *)(lVar20 + 0x48fc);
      lVar20 = *(long *)(lVar28 + 0x60);
      if (lVar20 == 0) goto LAB_037610d8;
LAB_037610ac:
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar21 = 0;
LAB_0376130c:
        plVar22 = *(long **)(lVar20 + 0x20);
        if (plVar22 != (long *)0x0) {
          local_288 = *(undefined **)(lVar28 + 0x40);
          local_280 = *(undefined8 **)(lVar28 + 0x48);
          local_278 = (undefined1 *****)0x490c;
          (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
        }
      }
      else {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0x60);
        uVar21 = uVar21 & 0xffffffff;
        if (lVar20 != 0) goto LAB_0376130c;
      }
    }
    pvVar1 = (void *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40));
    memset(pvVar1,0,0x490c);
    FUN_028f50f0((long)pvVar1 + 8);
    *(undefined8 *)((long)pvVar1 + 0x48e0) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48b0) = 0xffffffff;
    *(undefined2 *)((long)pvVar1 + 0x48b4) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48b8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e7) = 0;
    *(undefined2 *)((long)pvVar1 + 0x48f0) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48f2) = 0x101;
    *(undefined1 *)((long)pvVar1 + 0x48f6) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48f8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e6) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48fc) = 0;
    *(undefined2 *)((long)pvVar1 + 0x4904) = 0xffff;
    *(undefined8 *)((long)pvVar1 + 0x48c0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48c8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48d0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48d8) = 0;
    *(undefined4 *)((long)pvVar1 + 0x4908) = 0;
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x60) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x60) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
    uVar10 = *puVar32;
    if (((ulong)uVar10 < 500) && (lVar20 = *(long *)puVar31, lVar20 != 0)) {
      local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
      if ((((*(byte *)(lVar20 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar20 = (**(code **)(**(long **)(*(long *)(lVar20 + 0x10) + 0x188) + 0x38))(),
         lVar20 != 0)) {
        lVar20 = lVar20 + (ulong)uVar10 * 0x2d48;
        local_280 = (undefined8 *)(lVar20 + 0x4cc48);
        local_278 = (undefined1 *****)CONCAT71(local_278._1_7_,1);
        if (*(long **)(lVar20 + 0x4cc70) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar23 = (undefined8 *)**(long **)(lVar20 + 0x4cc70);
          uVar18 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar23)();
          }
        }
        local_278 = (undefined1 *****)
                    (CONCAT62(local_278._2_6_,CONCAT11(uVar18,(undefined1)local_278)) &
                    0xffffffffffff01ff);
        local_288 = PTR_DAT_04bb7688 + 0x10;
        puVar2 = (ushort *)(*(long *)(lVar20 + 0x4cc58) + *(long *)(lVar20 + 0x4cc50));
        if ((puVar2[2] == 0xffff) || ((*puVar2 & 1) != 0)) {
LAB_03761ae0:
          lVar26 = lVar20 + 0x4cc10;
        }
        else {
          lVar26 = FUN_02685460();
          if (lVar26 == 0) goto LAB_03761ae0;
        }
        FUN_02640184(&local_288);
        puVar23 = (undefined8 *)(lVar28 + 0x70);
        local_278 = (undefined1 *****)((ulong)local_278 & 0xffffffffffffff00);
        local_280 = puVar23;
        if (*(long *)(lVar28 + 0x98) == 0) {
          uVar18 = 0;
        }
        else {
          puVar25 = *(undefined8 **)(*(long *)(lVar28 + 0x98) + 0x10);
          uVar18 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar25)();
          }
        }
        local_278 = (undefined1 *****)
                    (CONCAT62(local_278._2_6_,CONCAT11(uVar18,(undefined1)local_278)) &
                    0xffffffffffff01ff);
        local_90 = lVar26 + 0x1768;
        puVar31 = PTR_DAT_04bc3998 + 0x10;
        local_88 = CONCAT71(local_88._1_7_,1);
        local_288 = puVar31;
        if (*(long **)(lVar26 + 0x1790) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar25 = (undefined8 *)**(long **)(lVar26 + 0x1790);
          uVar18 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar25)();
          }
        }
        local_88 = CONCAT62(local_88._2_6_,CONCAT11(uVar18,(undefined1)local_88)) &
                   0xffffffffffff01ff;
        local_98 = puVar31;
        FUN_02640280(puVar23,0x48b0);
        memcpy((void *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78)),
               (void *)(*(long *)(lVar26 + 0x1778) + *(long *)(lVar26 + 6000)),0x48b0);
        FUN_02640184(&local_98);
        FUN_02640184(&local_288);
      }
    }
    if ((*(long *)(lVar28 + 0x60) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar28 + 0x60) + 0x20), plVar22 != (long *)0x0)) {
      local_288 = *(undefined **)(lVar28 + 0x40);
      local_280 = *(undefined8 **)(lVar28 + 0x48);
      local_278 = (undefined1 *****)0x490c;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
    }
    lVar20 = *(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40);
    *(undefined4 *)(lVar20 + 0x48fc) = local_2b4;
    *(short *)(lVar20 + 0x4904) = sVar14;
    *(undefined4 *)(lVar20 + 0x4900) = local_2b0;
    if ((local_2ac & 1) != 0) {
      lVar20 = *(long *)(lVar28 + 0x60);
      goto joined_r0x03761f6c;
    }
  }
  else if (local_a8[0] == 1) {
    lVar20 = *(long *)(lVar28 + 0x60);
    if (lVar20 == 0) {
      uVar21 = 0;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0x60);
        uVar21 = uVar21 & 0xffffffff;
        if (lVar20 == 0) goto LAB_03760dd4;
      }
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x40);
        local_280 = *(undefined8 **)(lVar28 + 0x48);
        local_278 = (undefined1 *****)0x490c;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
LAB_03760dd4:
    pvVar1 = (void *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40));
    memset(pvVar1,0,0x490c);
    FUN_028f50f0((long)pvVar1 + 8);
    *(undefined8 *)((long)pvVar1 + 0x48e0) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48b0) = 0xffffffff;
    *(undefined2 *)((long)pvVar1 + 0x48b4) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48b8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e7) = 0;
    *(undefined2 *)((long)pvVar1 + 0x48f0) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48f2) = 0x101;
    *(undefined1 *)((long)pvVar1 + 0x48f6) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48f8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e6) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48fc) = 0;
    *(undefined2 *)((long)pvVar1 + 0x4904) = 0xffff;
    *(undefined8 *)((long)pvVar1 + 0x48c0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48c8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48d0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48d8) = 0;
    *(undefined4 *)((long)pvVar1 + 0x4908) = 0;
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x60) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x60) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
    lVar20 = *(long *)(lVar28 + 0x98);
    if (lVar20 == 0) {
      *(undefined2 *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78) + 5) = 0xb;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar21 = 0;
LAB_03761260:
        plVar22 = *(long **)(lVar20 + 0x20);
        if (plVar22 != (long *)0x0) {
          local_288 = *(undefined **)(lVar28 + 0x78);
          local_280 = *(undefined8 **)(lVar28 + 0x80);
          local_278 = (undefined1 *****)0x48b0;
          (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
        }
      }
      else {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0x98);
        uVar21 = uVar21 & 0xffffffff;
        if (lVar20 != 0) goto LAB_03761260;
      }
      *(undefined2 *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78) + 5) = 0xb;
      if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x98) != 0)) &&
         (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x98) + 0x18), puVar23 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar23)();
      }
    }
    local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
    local_28c = 1;
    FUN_0377e600(&local_98,&local_28c,0);
    lVar20 = *(long *)(lVar28 + 0x798);
    if (lVar20 == 0) {
      uVar21 = 0;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0x798);
        uVar21 = uVar21 & 0xffffffff;
        if (lVar20 == 0) goto LAB_037614b8;
      }
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x778);
        local_280 = *(undefined8 **)(lVar28 + 0x780);
        local_278 = (undefined1 *****)&DAT_00000014;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
LAB_037614b8:
    local_288 = (undefined *)((ulong)local_288 & 0xffffffff00000000);
    *(char *)(*(long *)(lVar28 + 0x780) + *(long *)(lVar28 + 0x778)) = (char)local_98;
    if ((*(long *)(lVar28 + 0x798) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar28 + 0x798) + 0x20), plVar22 != (long *)0x0)) {
      local_288 = *(undefined **)(lVar28 + 0x778);
      local_280 = *(undefined8 **)(lVar28 + 0x780);
      local_278 = (undefined1 *****)&DAT_00000014;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
    }
    local_288 = (undefined *)CONCAT44(local_288._4_4_,local_28c);
    *(char *)(*(long *)(lVar28 + 0x780) + *(long *)(lVar28 + 0x778) + 1) = (char)local_28c;
    lVar20 = *(long *)(lVar28 + 0x418);
    if (lVar20 == 0) {
      uVar24 = 0;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar24 = 0;
      }
      else {
        uVar24 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0x418);
        uVar24 = uVar24 & 0xffffffff;
        if (lVar20 == 0) goto LAB_03761584;
      }
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x3f8);
        local_280 = *(undefined8 **)(lVar28 + 0x400);
        local_278 = (undefined1 *****)0x155c;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
LAB_03761584:
    lVar20 = *(long *)(lVar28 + 0x400) + *(long *)(lVar28 + 0x3f8);
    local_288 = (undefined *)CONCAT44(local_288._4_4_,2);
    *(ushort *)(lVar20 + 0x153c) = *(ushort *)(lVar20 + 0x153c) | 4;
    if ((((uVar24 & 1) != 0) && (*(long *)(lVar28 + 0x418) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x418) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
    if ((uVar21 & 1) != 0) {
      lVar20 = *(long *)(lVar28 + 0x798);
      goto joined_r0x03761f6c;
    }
  }
  else {
    lVar20 = *(long *)(lVar28 + 0x60);
    if (lVar20 == 0) {
      uVar21 = 0;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0x60);
        uVar21 = uVar21 & 0xffffffff;
        if (lVar20 == 0) goto LAB_0376110c;
      }
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x40);
        local_280 = *(undefined8 **)(lVar28 + 0x48);
        local_278 = (undefined1 *****)0x490c;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
LAB_0376110c:
    pvVar1 = (void *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40));
    memset(pvVar1,0,0x490c);
    FUN_028f50f0((long)pvVar1 + 8);
    *(undefined8 *)((long)pvVar1 + 0x48e0) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48b0) = 0xffffffff;
    *(undefined2 *)((long)pvVar1 + 0x48b4) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48b8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e7) = 0;
    *(undefined2 *)((long)pvVar1 + 0x48f0) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48f2) = 0x101;
    *(undefined1 *)((long)pvVar1 + 0x48f6) = 0;
    *(undefined4 *)((long)pvVar1 + 0x48f8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48e6) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48fc) = 0;
    *(undefined2 *)((long)pvVar1 + 0x4904) = 0xffff;
    *(undefined8 *)((long)pvVar1 + 0x48c0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48c8) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48d0) = 0;
    *(undefined8 *)((long)pvVar1 + 0x48d8) = 0;
    *(undefined4 *)((long)pvVar1 + 0x4908) = 0;
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x60) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x60) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
    uVar10 = *puVar32;
    if (((ulong)uVar10 < 500) && (lVar20 = *(long *)puVar31, lVar20 != 0)) {
      local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
      if ((((*(byte *)(lVar20 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar20 = (**(code **)(**(long **)(*(long *)(lVar20 + 0x10) + 0x188) + 0x38))(),
         lVar20 != 0)) {
        lVar20 = lVar20 + (ulong)uVar10 * 0x2d48;
        local_280 = (undefined8 *)(lVar20 + 0x4cc48);
        local_278 = (undefined1 *****)CONCAT71(local_278._1_7_,1);
        if (*(long **)(lVar20 + 0x4cc70) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar23 = (undefined8 *)**(long **)(lVar20 + 0x4cc70);
          uVar18 = 0;
          if (puVar23 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar23)();
          }
        }
        local_278 = (undefined1 *****)
                    (CONCAT62(local_278._2_6_,CONCAT11(uVar18,(undefined1)local_278)) &
                    0xffffffffffff01ff);
        local_288 = PTR_DAT_04bb7688 + 0x10;
        puVar2 = (ushort *)(*(long *)(lVar20 + 0x4cc58) + *(long *)(lVar20 + 0x4cc50));
        if ((puVar2[2] == 0xffff) || ((*puVar2 & 1) != 0)) {
LAB_03761a60:
          lVar26 = lVar20 + 0x4cc10;
        }
        else {
          lVar26 = FUN_02685460();
          if (lVar26 == 0) goto LAB_03761a60;
        }
        FUN_02640184(&local_288);
        puVar23 = (undefined8 *)(lVar28 + 0x70);
        local_278 = (undefined1 *****)((ulong)local_278 & 0xffffffffffffff00);
        local_280 = puVar23;
        if (*(long *)(lVar28 + 0x98) == 0) {
          uVar18 = 0;
        }
        else {
          puVar25 = *(undefined8 **)(*(long *)(lVar28 + 0x98) + 0x10);
          uVar18 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar25)();
          }
        }
        local_278 = (undefined1 *****)
                    (CONCAT62(local_278._2_6_,CONCAT11(uVar18,(undefined1)local_278)) &
                    0xffffffffffff01ff);
        local_90 = lVar26 + 0x1768;
        puVar31 = PTR_DAT_04bc3998 + 0x10;
        local_88 = CONCAT71(local_88._1_7_,1);
        local_288 = puVar31;
        if (*(long **)(lVar26 + 0x1790) == (long *)0x0) {
          uVar18 = 0;
        }
        else {
          puVar25 = (undefined8 *)**(long **)(lVar26 + 0x1790);
          uVar18 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar18 = (**(code **)*puVar25)();
          }
        }
        local_88 = CONCAT62(local_88._2_6_,CONCAT11(uVar18,(undefined1)local_88)) &
                   0xffffffffffff01ff;
        local_98 = puVar31;
        FUN_02640280(puVar23,0x48b0);
        memcpy((void *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78)),
               (void *)(*(long *)(lVar26 + 0x1778) + *(long *)(lVar26 + 6000)),0x48b0);
        FUN_02640184(&local_98);
        FUN_02640184(&local_288);
      }
    }
  }
LAB_03761f84:
  lVar20 = *(long *)(lVar28 + 0x98);
  if (lVar20 == 0) {
    *(ushort *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78)) =
         *(ushort *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78)) & 0xfffb;
  }
  else {
    if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
      uVar21 = 0;
      plVar22 = *(long **)(lVar20 + 0x20);
joined_r0x037622b0:
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x78);
        local_280 = *(undefined8 **)(lVar28 + 0x80);
        local_278 = (undefined1 *****)0x48b0;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
    else {
      uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      uVar21 = uVar21 & 0xffffffff;
      if (*(long *)(lVar28 + 0x98) != 0) {
        plVar22 = *(long **)(*(long *)(lVar28 + 0x98) + 0x20);
        goto joined_r0x037622b0;
      }
    }
    *(ushort *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78)) =
         *(ushort *)(*(long *)(lVar28 + 0x80) + *(long *)(lVar28 + 0x78)) & 0xfffb;
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x98) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x98) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
  }
  lVar20 = *(long *)(lVar28 + 0x28);
  if (lVar20 == 0) {
    local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
    *(undefined1 *)(*(long *)(lVar28 + 0x10) + *(long *)(lVar28 + 8)) = 1;
  }
  else {
    if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
      uVar21 = 0;
      plVar22 = *(long **)(lVar20 + 0x20);
joined_r0x037622c0:
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 8);
        local_280 = *(undefined8 **)(lVar28 + 0x10);
        local_278 = (undefined1 *****)0x89a8;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
    else {
      uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      uVar21 = uVar21 & 0xffffffff;
      if (*(long *)(lVar28 + 0x28) != 0) {
        plVar22 = *(long **)(*(long *)(lVar28 + 0x28) + 0x20);
        goto joined_r0x037622c0;
      }
    }
    local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
    *(undefined1 *)(*(long *)(lVar28 + 0x10) + *(long *)(lVar28 + 8)) = 1;
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x28) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x28) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
  }
  if ((*(long *)(lVar28 + 0x60) == 0) ||
     (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x60) + 0x10), puVar23 == (undefined8 *)0x0)) {
    uVar21 = 0;
  }
  else {
    uVar21 = (**(code **)*puVar23)();
    uVar21 = uVar21 & 0xffffffff;
  }
  uVar10 = *(ushort *)(param_1 + 0x20);
  uVar7 = *(undefined4 *)(param_1 + 0x24);
  bVar9 = *(byte *)(param_1 + 0x2c);
  uVar11 = *(ushort *)(param_1 + 0x2a);
  if (*(char *)(param_1 + 0x31) == '\0') {
    bVar17 = false;
  }
  else {
    uVar19 = uVar11 >> 4 & 0xf;
    local_288 = (undefined *)(CONCAT44(local_288._4_4_,(uint)uVar11) & 0xffffffff0000000f);
    if ((int)local_288 != 1) {
      uVar19 = 0;
    }
    local_288 = (undefined *)CONCAT44(local_288._4_4_,uVar19);
    bVar17 = uVar19 == 1;
  }
  uVar12 = *(ushort *)(param_1 + 0x28);
  if ((*(long *)(lVar28 + 0x60) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar28 + 0x60) + 0x20), plVar22 != (long *)0x0)) {
    local_288 = *(undefined **)(lVar28 + 0x40);
    local_280 = *(undefined8 **)(lVar28 + 0x48);
    local_278 = (undefined1 *****)0x490c;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
  }
  uVar15 = (undefined4)((ulong)local_288 >> 0x20);
  puVar2 = (ushort *)(*(long *)(lVar28 + 0x48) + *(long *)(lVar28 + 0x40));
  puVar2[1] = uVar10;
  *puVar2 = *puVar2 | 1;
  local_288 = (undefined *)CONCAT44(uVar15,uVar7);
  *(char *)(puVar2 + 2) = (char)uVar7;
  puVar2[0x245f] = uVar12;
  *(char *)(puVar2 + 0x2477) = (char)uVar11;
  uVar10 = 4;
  if (!bVar17) {
    uVar10 = 0;
  }
  puVar2[0x245e] = uVar10 | bVar9 | puVar2[0x245e] & 0xfffa;
  *(byte *)((long)puVar2 + 0x48b5) = *(byte *)((long)puVar2 + 0x48b5) & 0xfe | bVar16 & 1;
  puVar2[0x2458] = uVar13;
  puVar2[0x2459] = uVar30;
  if ((((local_a8[0] != 1) && (uVar30 = *puVar32, (ulong)uVar30 < 500)) && (DAT_05574040 != 0)) &&
     ((local_288 = (undefined *)CONCAT44(uVar15,1),
      ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0 &&
      (lVar20 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
      lVar20 != 0)))) {
    lVar20 = lVar20 + (ulong)uVar30 * 0x2d48;
    if ((*(long **)(lVar20 + 0x4cc70) == (long *)0x0) ||
       (puVar23 = (undefined8 *)**(long **)(lVar20 + 0x4cc70), puVar23 == (undefined8 *)0x0)) {
      uVar24 = 0;
    }
    else {
      uVar24 = (**(code **)*puVar23)();
      uVar24 = uVar24 & 0xffffffff;
    }
    puVar32 = (ushort *)(*(long *)(lVar20 + 0x4cc58) + *(long *)(lVar20 + 0x4cc50));
    if ((puVar32[2] == 0xffff) || ((*puVar32 & 1) != 0)) {
LAB_037622fc:
      lVar26 = lVar20 + 0x4cc10;
    }
    else {
      lVar26 = FUN_02685460();
      if (lVar26 == 0) goto LAB_037622fc;
    }
    if ((((uVar24 & 1) != 0) && (*(long *)(lVar20 + 0x4cc70) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar20 + 0x4cc70) + 8), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
    if ((*(long *)(lVar28 + 0x1678) == 0) ||
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x1678) + 0x10), puVar23 == (undefined8 *)0x0)
       ) {
      uVar24 = 0;
    }
    else {
      uVar24 = (**(code **)*puVar23)();
      uVar24 = uVar24 & 0xffffffff;
    }
    if ((*(long **)(lVar26 + 0x1758) == (long *)0x0) ||
       (puVar23 = (undefined8 *)**(long **)(lVar26 + 0x1758), puVar23 == (undefined8 *)0x0)) {
      uVar27 = 0;
    }
    else {
      uVar27 = (**(code **)*puVar23)();
      uVar27 = uVar27 & 0xffffffff;
    }
    if ((*(long *)(lVar28 + 0x1678) != 0) &&
       (plVar22 = *(long **)(*(long *)(lVar28 + 0x1678) + 0x20), plVar22 != (long *)0x0)) {
      local_288 = *(undefined **)(lVar28 + 0x1658);
      local_280 = *(undefined8 **)(lVar28 + 0x1660);
      local_278 = (undefined1 *****)0x40;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
    }
    puVar23 = (undefined8 *)(*(long *)(lVar26 + 0x1740) + *(long *)(lVar26 + 0x1738));
    puVar25 = (undefined8 *)(*(long *)(lVar28 + 0x1660) + *(long *)(lVar28 + 0x1658));
    uVar5 = puVar23[7];
    uVar4 = puVar23[4];
    uVar6 = puVar23[5];
    puVar25[6] = puVar23[6];
    puVar25[7] = uVar5;
    puVar25[4] = uVar4;
    puVar25[5] = uVar6;
    uVar4 = *puVar23;
    uVar5 = puVar23[1];
    uVar6 = puVar23[3];
    puVar25[2] = puVar23[2];
    puVar25[3] = uVar6;
    *puVar25 = uVar4;
    puVar25[1] = uVar5;
    if ((((uVar27 & 1) != 0) && (*(long *)(lVar26 + 0x1758) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x1758) + 8), puVar23 != (undefined8 *)0x0)) {
      (**(code **)*puVar23)();
    }
    lVar20 = *(long *)(lVar28 + 0x1678);
    if ((uVar24 & 1) == 0) {
LAB_03762438:
      uVar18 = *(undefined1 *)(param_1 + 0x2a);
      if (lVar20 != 0) {
LAB_03762460:
        if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
          uVar24 = 0;
LAB_0376248c:
          plVar22 = *(long **)(lVar20 + 0x20);
          if (plVar22 != (long *)0x0) {
            local_288 = *(undefined **)(lVar28 + 0x1658);
            local_280 = *(undefined8 **)(lVar28 + 0x1660);
            local_278 = (undefined1 *****)0x40;
            (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
          }
        }
        else {
          uVar24 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
          lVar20 = *(long *)(lVar28 + 0x1678);
          uVar24 = uVar24 & 0xffffffff;
          if (lVar20 != 0) goto LAB_0376248c;
        }
        *(undefined1 *)(*(long *)(lVar28 + 0x1660) + *(long *)(lVar28 + 0x1658) + 0x32) = uVar18;
        if ((((uVar24 & 1) != 0) && (*(long *)(lVar28 + 0x1678) != 0)) &&
           (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x1678) + 0x18),
           puVar23 != (undefined8 *)0x0)) {
          (**(code **)*puVar23)();
        }
        goto LAB_037624f0;
      }
    }
    else {
      if (lVar20 != 0) {
        if (*(undefined8 **)(lVar20 + 0x18) != (undefined8 *)0x0) {
          (**(code **)**(undefined8 **)(lVar20 + 0x18))();
          lVar20 = *(long *)(lVar28 + 0x1678);
          goto LAB_03762438;
        }
        uVar18 = *(undefined1 *)(param_1 + 0x2a);
        goto LAB_03762460;
      }
      uVar18 = *(undefined1 *)(param_1 + 0x2a);
    }
    *(undefined1 *)(*(long *)(lVar28 + 0x1660) + *(long *)(lVar28 + 0x1658) + 0x32) = uVar18;
  }
LAB_037624f0:
  if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x60) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x60) + 0x18), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  if (*(char *)(param_1 + 0x32) != '\0') {
    lVar20 = FUN_03775a30(param_1);
    if (lVar20 != 0) {
      lVar26 = *(long *)(lVar20 + 0xa00);
      if (lVar26 == 0) {
        uVar21 = 0;
      }
      else {
        if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
          uVar21 = 0;
        }
        else {
          uVar21 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
          lVar26 = *(long *)(lVar20 + 0xa00);
          uVar21 = uVar21 & 0xffffffff;
          if (lVar26 == 0) goto LAB_0376258c;
        }
        plVar22 = *(long **)(lVar26 + 0x20);
        if (plVar22 != (long *)0x0) {
          local_288 = *(undefined **)(lVar20 + 0x9e0);
          local_280 = *(undefined8 **)(lVar20 + 0x9e8);
          local_278 = (undefined1 *****)0x155c;
          (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
        }
      }
LAB_0376258c:
      local_288 = (undefined *)((ulong)local_288 & 0xffffffff00000000);
      lVar26 = *(long *)(lVar20 + 0x9e8) + *(long *)(lVar20 + 0x9e0);
      *(ushort *)(lVar26 + 0x153c) = *(ushort *)(lVar26 + 0x153c) | 1;
      if ((((uVar21 & 1) != 0) && (*(long *)(lVar20 + 0xa00) != 0)) &&
         (puVar23 = *(undefined8 **)(*(long *)(lVar20 + 0xa00) + 0x18), puVar23 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar23)();
      }
    }
    lVar20 = *(long *)(lVar28 + 0xa70);
    if (lVar20 == 0) {
      uVar21 = 0;
    }
    else {
      if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
        uVar21 = 0;
      }
      else {
        uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
        lVar20 = *(long *)(lVar28 + 0xa70);
        uVar21 = uVar21 & 0xffffffff;
        if (lVar20 == 0) goto LAB_03762638;
      }
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0xa50);
        local_280 = *(undefined8 **)(lVar28 + 0xa58);
        local_278 = (undefined1 *****)0x155c;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
LAB_03762638:
    lVar20 = *(long *)(lVar28 + 0xa58) + *(long *)(lVar28 + 0xa50);
    local_288 = (undefined *)CONCAT44(local_288._4_4_,2);
    *(ushort *)(lVar20 + 0x153c) = *(ushort *)(lVar20 + 0x153c) | 4;
    if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0xa70) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0xa70) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
  }
  local_288 = (undefined *)
              (CONCAT44(local_288._4_4_,(uint)*(ushort *)(param_1 + 0x2a)) & 0xffffffff0000000f);
  if ((int)local_288 != 1) {
    return;
  }
  if (*(short *)(param_1 + 0x2e) == 0) {
    return;
  }
  lVar20 = *(long *)(lVar28 + 0x1330);
  if (lVar20 == 0) {
    uVar21 = 0;
  }
  else {
    if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      lVar20 = *(long *)(lVar28 + 0x1330);
      uVar21 = uVar21 & 0xffffffff;
      if (lVar20 == 0) goto LAB_03762708;
    }
    plVar22 = *(long **)(lVar20 + 0x20);
    if (plVar22 != (long *)0x0) {
      local_288 = *(undefined **)(lVar28 + 0x1310);
      local_280 = *(undefined8 **)(lVar28 + 0x1318);
      local_278 = (undefined1 *****)&DAT_00000004;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
    }
  }
LAB_03762708:
  *(undefined2 *)(*(long *)(lVar28 + 0x1318) + *(long *)(lVar28 + 0x1310)) =
       *(undefined2 *)(param_1 + 0x2e);
  if ((*(long *)(lVar28 + 0x1330) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar28 + 0x1330) + 0x20), plVar22 != (long *)0x0)) {
    local_288 = *(undefined **)(lVar28 + 0x1310);
    local_280 = *(undefined8 **)(lVar28 + 0x1318);
    local_278 = (undefined1 *****)&DAT_00000004;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
  }
  lVar20 = *(long *)(lVar28 + 0x1318) + *(long *)(lVar28 + 0x1310);
  *(byte *)(lVar20 + 3) = *(byte *)(lVar20 + 3) & 0xfe;
  lVar20 = *(long *)(lVar28 + 0x1368);
  if (lVar20 == 0) {
    *(undefined2 *)(*(long *)(lVar28 + 0x1350) + *(long *)(lVar28 + 0x1348)) =
         *(undefined2 *)(param_1 + 0x2e);
  }
  else {
    if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
      uVar24 = 0;
LAB_037627a8:
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar28 + 0x1348);
        local_280 = *(undefined8 **)(lVar28 + 0x1350);
        local_278 = (undefined1 *****)&DAT_00000004;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
    else {
      uVar24 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      lVar20 = *(long *)(lVar28 + 0x1368);
      uVar24 = uVar24 & 0xffffffff;
      if (lVar20 != 0) goto LAB_037627a8;
    }
    *(undefined2 *)(*(long *)(lVar28 + 0x1350) + *(long *)(lVar28 + 0x1348)) =
         *(undefined2 *)(param_1 + 0x2e);
    if ((((uVar24 & 1) != 0) && (*(long *)(lVar28 + 0x1368) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x1368) + 0x18), puVar23 != (undefined8 *)0x0)
       ) {
      (**(code **)*puVar23)();
    }
  }
  if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0x1330) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x1330) + 0x18), puVar23 != (undefined8 *)0x0))
  {
    (**(code **)*puVar23)();
  }
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  lVar20 = lVar28 + 0x3f0;
  lVar26 = *(long *)(lVar28 + 0xa00);
  if (lVar26 == 0) {
    uVar21 = 0;
  }
  else {
    if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      lVar26 = *(long *)(lVar28 + 0xa00);
      uVar21 = uVar21 & 0xffffffff;
      if (lVar26 == 0) goto LAB_037628a4;
    }
    plVar22 = *(long **)(lVar26 + 0x20);
    if (plVar22 != (long *)0x0) {
      local_288 = *(undefined **)(lVar28 + 0x9e0);
      local_280 = *(undefined8 **)(lVar28 + 0x9e8);
      local_278 = (undefined1 *****)&DAT_00000004;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
    }
  }
LAB_037628a4:
  *(undefined2 *)(*(long *)(lVar28 + 0x9e8) + *(long *)(lVar28 + 0x9e0)) =
       *(undefined2 *)(param_1 + 0x2e);
  if ((*(long *)(lVar28 + 0xa00) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar28 + 0xa00) + 0x20), plVar22 != (long *)0x0)) {
    local_288 = *(undefined **)(lVar28 + 0x9e0);
    local_280 = *(undefined8 **)(lVar28 + 0x9e8);
    local_278 = (undefined1 *****)&DAT_00000004;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
  }
  lVar26 = *(long *)(lVar28 + 0x9e8) + *(long *)(lVar28 + 0x9e0);
  *(byte *)(lVar26 + 3) = *(byte *)(lVar26 + 3) & 0xfe;
  lVar26 = lVar20 + ((ulong)local_98 & 0xffffffff) * 0x658;
  if (1 < (uint)local_98) {
    lVar26 = lVar20;
  }
  lVar29 = *(long *)(lVar26 + 0x648);
  if (lVar29 == 0) {
    *(undefined2 *)(*(long *)(lVar26 + 0x630) + *(long *)(lVar26 + 0x628)) =
         *(undefined2 *)(param_1 + 0x2e);
  }
  else {
    if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
      uVar24 = 0;
LAB_03762958:
      plVar22 = *(long **)(lVar29 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar26 + 0x628);
        local_280 = *(undefined8 **)(lVar26 + 0x630);
        local_278 = (undefined1 *****)&DAT_00000004;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
    else {
      uVar24 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
      lVar29 = *(long *)(lVar26 + 0x648);
      uVar24 = uVar24 & 0xffffffff;
      if (lVar29 != 0) goto LAB_03762958;
    }
    *(undefined2 *)(*(long *)(lVar26 + 0x630) + *(long *)(lVar26 + 0x628)) =
         *(undefined2 *)(param_1 + 0x2e);
    if ((((uVar24 & 1) != 0) && (*(long *)(lVar26 + 0x648) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x648) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
  }
  if ((((uVar21 & 1) != 0) && (*(long *)(lVar28 + 0xa00) != 0)) &&
     (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0xa00) + 0x18), puVar23 != (undefined8 *)0x0)) {
    (**(code **)*puVar23)();
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
  lVar26 = *(long *)(lVar28 + 0x1058);
  if (lVar26 == 0) {
    uVar21 = 0;
  }
  else {
    if (*(undefined8 **)(lVar26 + 0x10) == (undefined8 *)0x0) {
      uVar21 = 0;
    }
    else {
      uVar21 = (**(code **)**(undefined8 **)(lVar26 + 0x10))();
      lVar26 = *(long *)(lVar28 + 0x1058);
      uVar21 = uVar21 & 0xffffffff;
      if (lVar26 == 0) goto LAB_03762a54;
    }
    plVar22 = *(long **)(lVar26 + 0x20);
    if (plVar22 != (long *)0x0) {
      local_288 = *(undefined **)(lVar28 + 0x1038);
      local_280 = *(undefined8 **)(lVar28 + 0x1040);
      local_278 = (undefined1 *****)&DAT_00000004;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
    }
  }
LAB_03762a54:
  *(undefined2 *)(*(long *)(lVar28 + 0x1040) + *(long *)(lVar28 + 0x1038)) =
       *(undefined2 *)(param_1 + 0x2e);
  if ((*(long *)(lVar28 + 0x1058) != 0) &&
     (plVar22 = *(long **)(*(long *)(lVar28 + 0x1058) + 0x20), plVar22 != (long *)0x0)) {
    local_288 = *(undefined **)(lVar28 + 0x1038);
    local_280 = *(undefined8 **)(lVar28 + 0x1040);
    local_278 = (undefined1 *****)&DAT_00000004;
    (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
  }
  lVar26 = *(long *)(lVar28 + 0x1040) + *(long *)(lVar28 + 0x1038);
  *(byte *)(lVar26 + 3) = *(byte *)(lVar26 + 3) & 0xfe;
  lVar26 = lVar20 + ((ulong)local_98 & 0xffffffff) * 0x658;
  if (1 < (uint)local_98) {
    lVar26 = lVar20;
  }
  lVar20 = *(long *)(lVar26 + 0x648);
  if (lVar20 == 0) {
    *(undefined2 *)(*(long *)(lVar26 + 0x630) + *(long *)(lVar26 + 0x628)) =
         *(undefined2 *)(param_1 + 0x2e);
  }
  else {
    if (*(undefined8 **)(lVar20 + 0x10) == (undefined8 *)0x0) {
      uVar19 = 1;
LAB_03762b08:
      plVar22 = *(long **)(lVar20 + 0x20);
      if (plVar22 != (long *)0x0) {
        local_288 = *(undefined **)(lVar26 + 0x628);
        local_280 = *(undefined8 **)(lVar26 + 0x630);
        local_278 = (undefined1 *****)&DAT_00000004;
        (**(code **)(*plVar22 + 0x20))(plVar22,&local_288);
      }
    }
    else {
      uVar19 = (**(code **)**(undefined8 **)(lVar20 + 0x10))();
      lVar20 = *(long *)(lVar26 + 0x648);
      uVar19 = uVar19 ^ 1;
      if (lVar20 != 0) goto LAB_03762b08;
    }
    *(undefined2 *)(*(long *)(lVar26 + 0x630) + *(long *)(lVar26 + 0x628)) =
         *(undefined2 *)(param_1 + 0x2e);
    if ((((uVar19 & 1) == 0) && (*(long *)(lVar26 + 0x648) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar26 + 0x648) + 0x18), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
  }
  if ((uVar21 & 1) == 0) {
    return;
  }
  lVar28 = *(long *)(lVar28 + 0x1058);
joined_r0x0376192c:
  if ((lVar28 != 0) && (*(undefined8 **)(lVar28 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar28 + 0x18))();
  }
  return;
}

