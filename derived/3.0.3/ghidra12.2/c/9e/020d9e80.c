
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_020d9e80(long param_1,uint *param_2,uint *param_3,undefined4 *param_4,undefined8 *param_5,
            byte *param_6,undefined4 param_7)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  ushort uVar20;
  short sVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  ulong uVar32;
  long lVar33;
  long lVar34;
  char cVar35;
  uint uVar36;
  ushort *puVar37;
  uint *puVar38;
  byte bVar39;
  ushort uVar40;
  char *pcVar41;
  uint *puVar42;
  uint *puVar43;
  ulong uVar44;
  int *piVar45;
  undefined **ppuVar46;
  ushort uVar47;
  undefined8 uVar48;
  uint local_384;
  uint local_2dc;
  undefined *local_2c8 [32];
  undefined *local_1c8;
  char *local_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  uint local_128;
  undefined8 local_120;
  char *local_118;
  char *local_110;
  char *local_108;
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0;
  uint local_d8;
  uint local_d4;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  byte local_8c [4];
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  uint local_6c [3];
  
  *param_2 = 0xffffffff;
  *param_3 = 0xffffffff;
  *param_4 = 0;
  *param_5 = 0xfffe;
  FUN_0277d4ac(param_5);
  lVar29 = FUN_0265c2a0(param_7);
  puVar7 = PTR_DAT_04bb4f78;
  local_8c[0] = *param_6;
  if (7 < local_8c[0]) {
    local_8c[0] = 0xff;
  }
  lVar30 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_8c,1);
  if (lVar29 == 0) {
    return 0;
  }
  if (lVar30 == 0) {
    return 0;
  }
  if ((*(long **)(lVar30 + 0x17bb0) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar30 + 0x17bb0), puVar31 == (undefined8 *)0x0)) {
    puVar31 = (undefined8 *)(*(long *)(lVar30 + 0x17b98) + *(long *)(lVar30 + 0x17b90));
    local_a8 = puVar31[4];
    uStack_a0 = puVar31[5];
    local_98 = puVar31[6];
    local_c8 = *puVar31;
    uStack_c0 = puVar31[1];
    local_b8 = puVar31[2];
    uStack_b0 = puVar31[3];
  }
  else {
    uVar32 = (**(code **)*puVar31)();
    puVar31 = (undefined8 *)(*(long *)(lVar30 + 0x17b98) + *(long *)(lVar30 + 0x17b90));
    local_a8 = puVar31[4];
    uStack_a0 = puVar31[5];
    local_98 = puVar31[6];
    local_c8 = *puVar31;
    uStack_c0 = puVar31[1];
    local_b8 = puVar31[2];
    uStack_b0 = puVar31[3];
    if ((((uVar32 & 1) != 0) && (*(long *)(lVar30 + 0x17bb0) != 0)) &&
       (puVar31 = *(undefined8 **)(*(long *)(lVar30 + 0x17bb0) + 8), puVar31 != (undefined8 *)0x0))
    {
      (**(code **)*puVar31)();
    }
  }
  local_d0 = 0xfffe;
  FUN_0277d4ac(&local_d0);
  local_d4 = 0;
  if ((*(long **)(lVar29 + 0x28) == (long *)0x0) ||
     (puVar31 = (undefined8 *)**(long **)(lVar29 + 0x28), puVar31 == (undefined8 *)0x0)) {
    local_2dc = 0;
  }
  else {
    local_2dc = (**(code **)*puVar31)();
  }
  bVar39 = *param_6;
  lVar30 = *(long *)(lVar29 + 8);
  lVar34 = *(long *)(lVar29 + 0x10);
  if (7 < bVar39) {
    bVar39 = 0xff;
  }
  local_1c8 = (undefined *)CONCAT71(local_1c8._1_7_,bVar39);
  lVar33 = FUN_025830c0(*(undefined8 *)puVar7,&local_1c8,1);
  if (lVar33 == 0) {
    lVar30 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
LAB_020da0d8:
    uVar22 = FUN_026b3660(lVar30,param_6);
    if (-1 < (int)uVar22) {
      lVar30 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
      lVar34 = lVar30 + 0x2f84 + (ulong)uVar22 * 0x158;
      if (0x9f < uVar22) {
        lVar34 = lVar30 + 0x2f84;
      }
      local_d0 = *(undefined8 *)(lVar34 + 0x14c);
      puVar37 = (ushort *)(lVar34 + 0x154);
      pcVar41 = (char *)(lVar34 + 0x156);
      goto LAB_020da120;
    }
  }
  else {
    if ((*(long **)(lVar33 + 0x17bb0) == (long *)0x0) ||
       (puVar31 = (undefined8 *)**(long **)(lVar33 + 0x17bb0), puVar31 == (undefined8 *)0x0)) {
      uVar22 = 1;
    }
    else {
      uVar22 = (**(code **)*puVar31)();
      uVar22 = uVar22 ^ 1;
    }
    uVar23 = FUN_026b318c(lVar34 + lVar30,
                          *(long *)(lVar33 + 0x17b98) + *(long *)(lVar33 + 0x17b90) + 0x1c);
    if ((((uVar22 & 1) == 0) && (*(long *)(lVar33 + 0x17bb0) != 0)) &&
       (puVar31 = *(undefined8 **)(*(long *)(lVar33 + 0x17bb0) + 8), puVar31 != (undefined8 *)0x0))
    {
      (**(code **)*puVar31)();
    }
    lVar30 = *(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8);
    if ((int)uVar23 < 0) goto LAB_020da0d8;
    lVar34 = lVar30 + 4 + (ulong)uVar23 * 0x5f0;
    if (7 < uVar23) {
      lVar34 = lVar30 + 4;
    }
    local_d0 = *(undefined8 *)(lVar34 + 0x5b4);
    puVar37 = (ushort *)(lVar34 + 0x5bc);
    pcVar41 = (char *)(lVar34 + 0x5be);
LAB_020da120:
    uVar4 = *puVar37;
    local_d4 = (uint)*pcVar41;
    local_1c8 = PTR_DAT_04bb2020 + 0x10;
    local_1c0 = "TalkClothesPToday";
    iVar24 = FUN_02746e10(lVar34 + 0x38,&local_1c8);
    if (iVar24 == 0) {
      lVar34 = FUN_0265c2a0(param_7);
      if (lVar34 == 0) {
        local_d8 = 0;
      }
      else {
        if ((*(long **)(lVar34 + 0x28) == (long *)0x0) ||
           (puVar31 = (undefined8 *)**(long **)(lVar34 + 0x28), puVar31 == (undefined8 *)0x0)) {
          uVar22 = 1;
        }
        else {
          uVar22 = (**(code **)*puVar31)();
          uVar22 = uVar22 ^ 1;
        }
        local_d8 = FUN_020fd7d8(*(long *)(lVar34 + 0x10) + *(long *)(lVar34 + 8));
        if ((((uVar22 & 1) == 0) && (*(long *)(lVar34 + 0x28) != 0)) &&
           (puVar31 = *(undefined8 **)(*(long *)(lVar34 + 0x28) + 8), puVar31 != (undefined8 *)0x0))
        {
          (**(code **)*puVar31)();
        }
      }
      uVar22 = *(uint *)(param_1 + 0x1c0);
      local_d8 = local_d8 & 0xff;
      if ((int)uVar22 < 1) {
        if ((*(long *)(param_1 + 0xb0) == 0) ||
           (puVar38 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar38 == (uint *)0x0)) {
          uVar22 = 0;
        }
        else {
          uVar22 = *puVar38;
        }
      }
      local_120 = (char *)0xfffe;
      FUN_0277d4ac(&local_120);
      local_118 = (char *)0xfffe;
      FUN_0277d4ac(&local_118);
      local_110 = (char *)0xfffe;
      FUN_0277d4ac();
      local_108 = (char *)0xfffe;
      FUN_0277d4ac();
      local_100 = (char *)0xfffe;
      FUN_0277d4ac();
      local_f8 = (char *)0xfffe;
      FUN_0277d4ac();
      local_f0 = (char *)0xfffe;
      FUN_0277d4ac();
      local_e8 = (char *)0xfffe;
      FUN_0277d4ac();
      local_e0 = (char *)0xfffe;
      FUN_0277d4ac();
      FUN_020d98fc(&local_120,param_6);
      puVar7 = PTR_DAT_04bb43c0;
      lVar33 = *(long *)PTR_DAT_04bb43c0;
      uVar23 = FUN_0277d6c4(lVar30 + 0x125ec);
      lVar34 = *(long *)puVar7;
      if (lVar34 == 0) {
LAB_020da344:
        bVar10 = false;
      }
      else {
        lVar33 = *(long *)(lVar33 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
        if (*(uint *)(lVar33 + 0x1d8) <= uVar23) goto LAB_020da344;
        bVar10 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_120);
      lVar33 = *(long *)puVar7;
      if (lVar33 == 0) {
LAB_020da394:
        bVar11 = false;
      }
      else {
        lVar34 = *(long *)(lVar34 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
        if (*(uint *)(lVar34 + 0x1d8) <= uVar23) goto LAB_020da394;
        bVar11 = *(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_118);
      lVar34 = *(long *)puVar7;
      if (lVar34 == 0) {
LAB_020da3e4:
        bVar12 = false;
      }
      else {
        lVar33 = *(long *)(lVar33 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
        if (*(uint *)(lVar33 + 0x1d8) <= uVar23) goto LAB_020da3e4;
        bVar12 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_110);
      lVar33 = *(long *)puVar7;
      if (lVar33 == 0) {
LAB_020da434:
        bVar13 = false;
      }
      else {
        lVar34 = *(long *)(lVar34 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
        if (*(uint *)(lVar34 + 0x1d8) <= uVar23) goto LAB_020da434;
        bVar13 = *(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_108);
      lVar34 = *(long *)puVar7;
      if (lVar34 == 0) {
LAB_020da484:
        bVar14 = false;
      }
      else {
        lVar33 = *(long *)(lVar33 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
        if (*(uint *)(lVar33 + 0x1d8) <= uVar23) goto LAB_020da484;
        bVar14 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_100);
      lVar33 = *(long *)puVar7;
      if (lVar33 == 0) {
LAB_020da4d4:
        bVar15 = false;
      }
      else {
        lVar34 = *(long *)(lVar34 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
        if (*(uint *)(lVar34 + 0x1d8) <= uVar23) goto LAB_020da4d4;
        bVar15 = *(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_f8);
      lVar34 = *(long *)puVar7;
      if (lVar34 == 0) {
LAB_020da524:
        bVar16 = false;
      }
      else {
        lVar33 = *(long *)(lVar33 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
        if (*(uint *)(lVar33 + 0x1d8) <= uVar23) goto LAB_020da524;
        bVar16 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_f0);
      lVar33 = *(long *)puVar7;
      if (lVar33 == 0) {
LAB_020da574:
        bVar17 = false;
      }
      else {
        lVar34 = *(long *)(lVar34 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
        if (*(uint *)(lVar34 + 0x1d8) <= uVar23) goto LAB_020da574;
        bVar17 = *(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_e8);
      lVar34 = *(long *)puVar7;
      if (lVar34 == 0) {
LAB_020da5c4:
        bVar18 = false;
      }
      else {
        lVar33 = *(long *)(lVar33 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
        if (*(uint *)(lVar33 + 0x1d8) <= uVar23) goto LAB_020da5c4;
        bVar18 = *(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar23 * 8) != 0;
      }
      uVar23 = FUN_0277d6c4(&local_e0);
      lVar33 = *(long *)puVar7;
      if (lVar33 == 0) {
LAB_020da734:
        bVar1 = false;
        bVar19 = false;
      }
      else {
        lVar34 = *(long *)(lVar34 + 0x57e58);
        uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
        if ((*(uint *)(lVar34 + 0x1d8) <= uVar23) ||
           (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8) == 0)) goto LAB_020da734;
        local_1b8 = 0;
        local_1c8 = PTR_DAT_04bc0510 + 0x10;
        local_1c0 = local_e0;
        uVar23 = FUN_0277d6c4(&local_1c0);
        if (*(long *)puVar7 == 0) {
LAB_020dcb68:
          uVar20 = 0xbc;
        }
        else {
          lVar34 = *(long *)(lVar33 + 0x57e58);
          uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if ((*(uint *)(lVar34 + 0x1d8) <= uVar23) ||
             (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8) == 0)) goto LAB_020dcb68;
          lVar34 = *(long *)PTR_DAT_04bc0428;
          uVar23 = FUN_0277d6c4(&local_e0);
          uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if ((*(uint *)(lVar34 + 0x1d8) <= uVar23) ||
             (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8),
             puVar38 == (uint *)0x0)) goto LAB_020dcb68;
          uVar23 = *puVar38;
          uVar20 = 0;
          if ((uVar23 != 0) && (puVar38 != (uint *)(ulong)uVar23)) {
            puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar23);
            uVar20 = 0;
            if (*puVar43 != 0) {
              uVar23 = puVar43[1];
              if ((uVar23 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                lVar34 = 0xc;
                if (*(char *)((long)puVar43 + 10) != '\0') {
                  lVar34 = 0x1c;
                }
                lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                if (lVar34 != 0) {
                  uVar36 = 0;
                  if ((ulong)uVar23 != 0) {
                    uVar36 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar23);
                  }
                  if (*puVar43 <= uVar36) {
                    uVar36 = 0xffffffff;
                  }
                  if ((uVar36 < *(uint *)PTR_DAT_04bc00c8) &&
                     (uVar20 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar36 * 2),
                     uVar20 < 0xbd)) goto LAB_020dcb6c;
                }
              }
              uVar20 = 0;
            }
          }
        }
LAB_020dcb6c:
        bVar19 = uVar20 == 0x14;
        bVar1 = !bVar19;
      }
      uVar23 = 0;
      local_128 = 0;
      local_138 = 0;
      local_130 = 0;
      local_148 = 0;
      local_140 = 0;
      pcVar41 = local_1c0;
      local_1c0 = local_118;
      if (bVar11) {
        lVar34 = *(long *)puVar7;
        local_1b8 = 0;
        local_1c8 = PTR_DAT_04bc0510 + 0x10;
        local_1c0 = local_120;
        uVar23 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar23 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar23 = FUN_0277d6c4(&local_120);
              uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar23) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar23 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020da87c;
              uVar23 = *puVar38;
              uVar36 = 0;
              if ((uVar23 != 0) && (puVar38 != (uint *)(ulong)uVar23)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar23);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar23 = puVar43[1];
                  if ((uVar23 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar36 = 0;
                      if ((ulong)uVar23 != 0) {
                        uVar36 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar23);
                      }
                      if (*puVar43 <= uVar36) {
                        uVar36 = 0xffffffff;
                      }
                      if ((uVar36 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar36 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020da880;
                    }
                  }
                  goto LAB_020da87c;
                }
              }
            }
          }
          else {
LAB_020da87c:
            uVar36 = 0;
          }
        }
LAB_020da880:
        uVar23 = 2;
        local_148 = CONCAT44(local_148._4_4_,uVar36);
        pcVar41 = local_1c0;
        local_1c0 = local_118;
      }
      local_118 = local_1c0;
      pcVar9 = local_110;
      if (bVar12) {
        lVar34 = *(long *)puVar7;
        uVar23 = uVar23 | 4;
        local_1b8 = 0;
        local_1c8 = (undefined *)((long)PTR_DAT_04bc0510 + 0x10);
        uVar25 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar25 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar25 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar36 = FUN_0277d6c4(&local_118);
              uVar36 = (uVar36 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar36) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar36 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020dad94;
              uVar25 = *puVar38;
              uVar36 = 0;
              if ((uVar25 != 0) && (puVar38 != (uint *)(ulong)uVar25)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar25);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar36 = puVar43[1];
                  if ((uVar36 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar36 != 0) {
                        uVar25 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar36);
                      }
                      if (*puVar43 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar25 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020dad98;
                    }
                  }
                  goto LAB_020dad94;
                }
              }
            }
          }
          else {
LAB_020dad94:
            uVar36 = 0;
          }
        }
LAB_020dad98:
        local_148 = CONCAT44(uVar36,(undefined4)local_148);
        pcVar41 = local_1c0;
        pcVar9 = local_110;
      }
      local_1c0 = pcVar9;
      local_110 = local_1c0;
      pcVar9 = local_108;
      if (bVar13) {
        lVar34 = *(long *)puVar7;
        uVar23 = uVar23 | 8;
        local_1b8 = 0;
        local_1c8 = (undefined *)((long)PTR_DAT_04bc0510 + 0x10);
        uVar25 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar25 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar25 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar36 = FUN_0277d6c4(&local_110);
              uVar36 = (uVar36 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar36) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar36 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020da9c4;
              uVar25 = *puVar38;
              uVar36 = 0;
              if ((uVar25 != 0) && (puVar38 != (uint *)(ulong)uVar25)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar25);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar36 = puVar43[1];
                  if ((uVar36 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar36 != 0) {
                        uVar25 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar36);
                      }
                      if (*puVar43 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar25 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020da9c8;
                    }
                  }
                  goto LAB_020da9c4;
                }
              }
            }
          }
          else {
LAB_020da9c4:
            uVar36 = 0;
          }
        }
LAB_020da9c8:
        local_140 = CONCAT44(local_140._4_4_,uVar36);
        pcVar41 = local_1c0;
        pcVar9 = local_108;
      }
      local_1c0 = pcVar9;
      local_108 = local_1c0;
      pcVar9 = local_100;
      if (bVar14) {
        lVar34 = *(long *)puVar7;
        uVar23 = uVar23 | 8;
        local_1b8 = 0;
        local_1c8 = (undefined *)((long)PTR_DAT_04bc0510 + 0x10);
        uVar25 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar25 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar25 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar36 = FUN_0277d6c4(&local_108);
              uVar36 = (uVar36 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar36) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar36 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020daed8;
              uVar25 = *puVar38;
              uVar36 = 0;
              if ((uVar25 != 0) && (puVar38 != (uint *)(ulong)uVar25)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar25);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar36 = puVar43[1];
                  if ((uVar36 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar36 != 0) {
                        uVar25 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar36);
                      }
                      if (*puVar43 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar25 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020daedc;
                    }
                  }
                  goto LAB_020daed8;
                }
              }
            }
          }
          else {
LAB_020daed8:
            uVar36 = 0;
          }
        }
LAB_020daedc:
        local_140 = CONCAT44(uVar36,(undefined4)local_140);
        pcVar41 = local_1c0;
        pcVar9 = local_100;
      }
      local_1c0 = pcVar9;
      local_100 = local_1c0;
      pcVar9 = local_f8;
      if (bVar15) {
        lVar34 = *(long *)puVar7;
        uVar23 = uVar23 | 0x10;
        local_1b8 = 0;
        local_1c8 = (undefined *)((long)PTR_DAT_04bc0510 + 0x10);
        uVar25 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar25 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar25 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar36 = FUN_0277d6c4(&local_100);
              uVar36 = (uVar36 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar36) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar36 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020dab08;
              uVar25 = *puVar38;
              uVar36 = 0;
              if ((uVar25 != 0) && (puVar38 != (uint *)(ulong)uVar25)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar25);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar36 = puVar43[1];
                  if ((uVar36 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar36 != 0) {
                        uVar25 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar36);
                      }
                      if (*puVar43 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar25 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020dab0c;
                    }
                  }
                  goto LAB_020dab08;
                }
              }
            }
          }
          else {
LAB_020dab08:
            uVar36 = 0;
          }
        }
LAB_020dab0c:
        local_138 = CONCAT44(local_138._4_4_,uVar36);
        pcVar41 = local_1c0;
        pcVar9 = local_f8;
      }
      local_1c0 = pcVar9;
      local_f8 = local_1c0;
      pcVar9 = local_f0;
      if (bVar16) {
        lVar34 = *(long *)puVar7;
        uVar23 = uVar23 | 0x20;
        local_1b8 = 0;
        local_1c8 = (undefined *)((long)PTR_DAT_04bc0510 + 0x10);
        uVar25 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar25 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar25 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar36 = FUN_0277d6c4(&local_f8);
              uVar36 = (uVar36 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar36) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar36 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020db01c;
              uVar25 = *puVar38;
              uVar36 = 0;
              if ((uVar25 != 0) && (puVar38 != (uint *)(ulong)uVar25)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar25);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar36 = puVar43[1];
                  if ((uVar36 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar36 != 0) {
                        uVar25 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar36);
                      }
                      if (*puVar43 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar25 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020db020;
                    }
                  }
                  goto LAB_020db01c;
                }
              }
            }
          }
          else {
LAB_020db01c:
            uVar36 = 0;
          }
        }
LAB_020db020:
        local_138 = CONCAT44(uVar36,(undefined4)local_138);
        pcVar41 = local_1c0;
        pcVar9 = local_f0;
      }
      local_1c0 = pcVar9;
      local_f0 = local_1c0;
      pcVar9 = local_e8;
      if (bVar17) {
        lVar34 = *(long *)puVar7;
        uVar23 = uVar23 | 0x40;
        local_1b8 = 0;
        local_1c8 = PTR_DAT_04bc0510 + 0x10;
        uVar25 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar25 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar25 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar36 = FUN_0277d6c4(&local_f0);
              uVar36 = (uVar36 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar36) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar36 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020dac4c;
              uVar25 = *puVar38;
              uVar36 = 0;
              if ((uVar25 != 0) && (puVar38 != (uint *)(ulong)uVar25)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar25);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar36 = puVar43[1];
                  if ((uVar36 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar36 != 0) {
                        uVar25 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar36);
                      }
                      if (*puVar43 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar25 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020dac50;
                    }
                  }
                  goto LAB_020dac4c;
                }
              }
            }
          }
          else {
LAB_020dac4c:
            uVar36 = 0;
          }
        }
LAB_020dac50:
        local_130 = CONCAT44(local_130._4_4_,uVar36);
        pcVar41 = local_1c0;
        pcVar9 = local_e8;
      }
      local_1c0 = pcVar9;
      local_e8 = local_1c0;
      if (bVar18) {
        lVar34 = *(long *)puVar7;
        uVar23 = uVar23 | 0x80;
        local_1b8 = 0;
        local_1c8 = PTR_DAT_04bc0510 + 0x10;
        uVar25 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar25 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar25 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar36 = FUN_0277d6c4(&local_e8);
              uVar36 = (uVar36 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar36) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar36 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020db160;
              uVar25 = *puVar38;
              uVar36 = 0;
              if ((uVar25 != 0) && (puVar38 != (uint *)(ulong)uVar25)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar25);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar36 = puVar43[1];
                  if ((uVar36 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar36 != 0) {
                        uVar25 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar36);
                      }
                      if (*puVar43 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar25 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020db164;
                    }
                  }
                  goto LAB_020db160;
                }
              }
            }
          }
          else {
LAB_020db160:
            uVar36 = 0;
          }
        }
LAB_020db164:
        local_130 = CONCAT44(uVar36,(undefined4)local_130);
        pcVar41 = local_1c0;
      }
      local_1c0 = pcVar41;
      if ((bool)(bVar1 | bVar19)) {
        lVar34 = *(long *)puVar7;
        uVar36 = 0x100;
        if (!bVar19) {
          uVar36 = 0x200;
        }
        uVar23 = uVar23 | uVar36;
        local_1b8 = 0;
        local_1c8 = PTR_DAT_04bc0510 + 0x10;
        local_1c0 = local_e0;
        uVar25 = FUN_0277d6c4(&local_1c0);
        uVar36 = 0;
        if (*(long *)puVar7 != 0) {
          lVar34 = *(long *)(lVar34 + 0x57e58);
          uVar25 = (uVar25 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
          if (uVar25 < *(uint *)(lVar34 + 0x1d8)) {
            uVar36 = 0;
            if (*(long *)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar25 * 8) != 0) {
              lVar34 = *(long *)PTR_DAT_04bc0428;
              uVar36 = FUN_0277d6c4(&local_e0);
              uVar36 = (uVar36 & 0xffff) - (uint)*(ushort *)(lVar34 + 0x1f8);
              if ((*(uint *)(lVar34 + 0x1d8) <= uVar36) ||
                 (puVar38 = *(uint **)(*(long *)(lVar34 + 0x1e0) + (long)(int)uVar36 * 8),
                 puVar38 == (uint *)0x0)) goto LAB_020db2b4;
              uVar25 = *puVar38;
              uVar36 = 0;
              if ((uVar25 != 0) && (puVar38 != (uint *)(ulong)uVar25)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar25);
                uVar36 = 0;
                if (*puVar43 != 0) {
                  uVar36 = puVar43[1];
                  if ((uVar36 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar34 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar34 = 0x1c;
                    }
                    lVar34 = (long)puVar43 + lVar34 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar34 != 0) {
                      uVar25 = 0;
                      if ((ulong)uVar36 != 0) {
                        uVar25 = (uint)((ulong)((long)puVar38 - lVar34) / (ulong)uVar36);
                      }
                      if (*puVar43 <= uVar25) {
                        uVar25 = 0xffffffff;
                      }
                      if ((uVar25 < *(uint *)PTR_DAT_04bc0020) &&
                         (uVar20 = *(ushort *)
                                    (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar25 * 2),
                         uVar36 = (uint)uVar20, uVar20 < 0x5b6)) goto LAB_020db2b8;
                    }
                  }
                  goto LAB_020db2b4;
                }
              }
            }
          }
          else {
LAB_020db2b4:
            uVar36 = 0;
          }
        }
LAB_020db2b8:
        local_128 = uVar36;
      }
      uVar36 = 0xffffffff;
      if (local_d4 < 10) {
        uVar36 = ~(1 << (ulong)(local_d4 & 0x1f));
      }
      uVar36 = uVar36 & uVar23;
      if (bVar11) {
        uVar32 = FUN_0277d7b4(&local_d0,&local_120);
        if ((uVar32 & 1) == 0) {
LAB_020db3bc:
          bVar39 = 0;
        }
        else {
          if (local_d0._3_1_ != local_120._3_1_) goto LAB_020db3bc;
          if (local_d0._4_4_ != local_120._4_4_) goto LAB_020db3bc;
          uVar25 = nn::os::GetSystemTick();
          uVar23 = uVar36 - (uVar36 >> 1 & 0x55555555);
          uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333);
          uVar23 = uVar23 + (uVar23 >> 4) & 0xf0f0f0f;
          uVar23 = uVar23 + (uVar23 >> 8);
          if (((uVar23 + (uVar23 >> 0x10) & 0x3f) != 0) &&
             (uVar25 = (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965 + 1, uVar23 = uVar25 ^ uVar25 * 0x800,
             uVar25 = (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965 + 2,
             uVar25 = (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965 + 3,
             uVar25 = (uVar25 ^ uVar25 >> 0x1e) * 0x6c078965 + 4,
             0x4f < (uint)((ulong)(uVar23 >> 8 ^ uVar25 >> 0x13 ^ uVar23 ^ uVar25) * 100 >> 0x20)))
          {
            bVar39 = 1;
            bVar6 = false;
            goto LAB_020db3cc;
          }
          bVar39 = 1;
        }
        uVar36 = uVar36 | 2;
        bVar6 = true;
      }
      else {
        bVar39 = 0;
        bVar6 = false;
      }
LAB_020db3cc:
      puVar7 = PTR_DAT_04bb6b08;
      local_1a8 = 0;
      local_1a0 = 0;
      local_198 = 0;
      local_190 = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 0;
      local_170 = 0;
      local_168 = 0;
      local_160 = 0;
      local_158 = 0;
      local_150 = 0;
      local_1c8 = (undefined *)0x0;
      local_1c0 = (char *)0x0;
      local_1b8 = 0;
      uStack_1b0 = 0;
      local_2c8[0x10] = (undefined *)0x0;
      local_2c8[0x11] = (undefined *)0x0;
      local_2c8[0x12] = (undefined *)0x0;
      local_2c8[0x13] = (undefined *)0x0;
      local_2c8[0x14] = (undefined *)0x0;
      local_2c8[0x15] = (undefined *)0x0;
      local_2c8[0x16] = (undefined *)0x0;
      local_2c8[0x17] = (undefined *)0x0;
      local_2c8[0x18] = (undefined *)0x0;
      local_2c8[0x19] = (undefined *)0x0;
      local_2c8[0x1a] = (undefined *)0x0;
      local_2c8[0x1b] = (undefined *)0x0;
      local_2c8[0x1c] = (undefined *)0x0;
      local_2c8[0x1d] = (undefined *)0x0;
      local_2c8[0x1e] = (undefined *)0x0;
      local_2c8[0x1f] = (undefined *)0x0;
      local_2c8[0xe] = (undefined *)0x0;
      local_2c8[0xf] = (undefined *)0x0;
      local_2c8[0xc] = (undefined *)0x0;
      local_2c8[0xd] = (undefined *)0x0;
      local_2c8[10] = (undefined *)0x0;
      local_2c8[0xb] = (undefined *)0x0;
      local_2c8[8] = (undefined *)0x0;
      local_2c8[9] = (undefined *)0x0;
      local_2c8[6] = (undefined *)0x0;
      local_2c8[7] = (undefined *)0x0;
      local_2c8[4] = (undefined *)0x0;
      local_2c8[5] = (undefined *)0x0;
      local_2c8[2] = (undefined *)0x0;
      local_2c8[3] = (undefined *)0x0;
      local_2c8[0] = (undefined *)0x0;
      local_2c8[1] = (undefined *)0x0;
      if ((int)uVar22 < 1) {
        local_384 = 0xffffffff;
      }
      else {
        lVar34 = (long)&uStack_b0 + 4;
        uVar20 = 0;
        uVar32 = 0;
        local_384 = 0xffffffff;
        puVar2 = PTR_DAT_04bc0510 + 0x10;
        puVar38 = (uint *)PTR_DAT_04bb6af8;
        do {
          uVar23 = (uint)uVar32;
          if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
            if (*(long *)(param_1 + 0xb0) != 0) {
              puVar43 = *(uint **)(*(long *)(param_1 + 0xb0) + 8);
              if ((puVar43 != (uint *)0x0) &&
                 (((*(uint *)(param_1 + 200) <= uVar32 ||
                   (*(char *)(*(long *)(param_1 + 0xd0) + uVar32) != '\0')) && (uVar32 < *puVar43)))
                 ) {
                if (puVar43[1] != 0) {
                  if ((ushort)puVar43[2] != 0) {
                    iVar24 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      iVar24 = 0x1c;
                    }
                    puVar43 = (uint *)((ulong)(puVar43[1] * uVar23 + (uint)(ushort)puVar43[2] * 8 +
                                              iVar24) + (long)puVar43);
                    goto joined_r0x020db67c;
                  }
                }
              }
            }
            goto LAB_020db4b4;
          }
          if (*(uint *)(param_1 + 0x1c0) <= uVar32) goto LAB_020db4b4;
          uVar44 = uVar32 & 0xffffffff;
          if (*(uint *)(param_1 + 0x1b0) <= uVar32) {
            uVar44 = 0;
          }
          puVar43 = *(uint **)(*(long *)(param_1 + 0x1b8) + uVar44 * 8);
joined_r0x020db67c:
          if ((puVar43 == (uint *)0x0) ||
             (uVar25 = (*(code *)(&PTR_LAB_04a73508)[(long)(int)local_d8 * 2])(puVar43),
             (uVar25 >> 0xf & 1) != 0)) {
            goto LAB_020db4b4;
          }
          uVar25 = *puVar43;
          if (uVar25 == 0 || puVar43 == (uint *)(ulong)uVar25) {
LAB_020db524:
            uVar25 = 0;
          }
          else {
            puVar42 = (uint *)((long)puVar43 - (long)(ulong)uVar25);
            uVar25 = 0;
            if (*puVar42 != 0) {
              uVar25 = puVar42[1];
              if ((uVar25 != 0) && ((ulong)(ushort)puVar42[2] != 0)) {
                lVar33 = 0xc;
                if (*(char *)((long)puVar42 + 10) != '\0') {
                  lVar33 = 0x1c;
                }
                lVar33 = (long)puVar42 + lVar33 + (ulong)(ushort)puVar42[2] * 8;
                if (lVar33 != 0) {
                  uVar27 = 0;
                  if ((ulong)uVar25 != 0) {
                    uVar27 = (uint)((ulong)((long)puVar43 - lVar33) / (ulong)uVar25);
                  }
                  if (*puVar42 <= uVar27) {
                    uVar27 = 0xffffffff;
                  }
                  if ((uVar27 < *puVar38) &&
                     (uVar25 = (uint)*(ushort *)(*(long *)(puVar38 + 2) + (long)(int)uVar27 * 2),
                     uVar25 < 0x30)) goto LAB_020db528;
                }
              }
              goto LAB_020db524;
            }
          }
LAB_020db528:
          if (*puVar43 != 0) {
            cVar35 = *PTR_DAT_04bb6b00;
            do {
              if (cVar35 == '\0') {
                cVar35 = '\x01';
                *PTR_DAT_04bb6b00 = 1;
                *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
              }
              else {
                uVar27 = *(uint *)(puVar7 + 0x24);
                if (-1 < (int)uVar27) {
                  if ((ushort *)((ulong)uVar27 + (long)puVar43) != (ushort *)0x0) {
                    uVar47 = *(ushort *)((ulong)uVar27 + (long)puVar43);
                    goto LAB_020db708;
                  }
                  break;
                }
                if (uVar27 != 0xffffffff) break;
              }
              puVar38 = (uint *)(ulong)*puVar43;
              uVar47 = 0;
              if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020db708;
              lVar33 = 0xc;
              if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                lVar33 = 0x1c;
              }
              lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
              if (lVar33 == 0) break;
              uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
              *(undefined4 *)(puVar7 + 0x24) = 0xfffffffe;
              if (uVar44 == 0) break;
              piVar45 = (int *)(lVar33 + 4);
              while (piVar45[-1] != -0x32760015) {
                piVar45 = piVar45 + 2;
                uVar44 = uVar44 - 1;
                if (uVar44 == 0) goto LAB_020db704;
              }
              iVar24 = 0;
              if (*piVar45 != -1) {
                iVar24 = *piVar45;
              }
              *(int *)(puVar7 + 0x24) = iVar24;
              if (*puVar43 == 0) break;
            } while( true );
          }
LAB_020db704:
          uVar47 = 0;
LAB_020db708:
          puVar38 = (uint *)PTR_DAT_04bb6af8;
          puVar8 = PTR_DAT_04bb43c0;
          if (uVar25 == 0) {
            if (bVar10) {
              if (*puVar43 != 0) {
                cVar35 = *PTR_DAT_04bb6b00;
                do {
                  if (cVar35 == '\0') {
                    cVar35 = '\x01';
                    *PTR_DAT_04bb6b00 = 1;
                    *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)puVar7 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                  }
                  else {
                    uVar25 = *(uint *)(puVar7 + 100);
                    if (-1 < (int)uVar25) {
                      if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                        uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                        goto LAB_020dbd44;
                      }
                      break;
                    }
                    if (uVar25 != 0xffffffff) break;
                  }
                  puVar38 = (uint *)(ulong)*puVar43;
                  uVar25 = 0xfffe;
                  if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dbd44;
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                  if (lVar33 == 0) goto LAB_020dbd44;
                  uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                  *(undefined4 *)(puVar7 + 100) = 0xfffffffe;
                  if (uVar44 == 0) goto LAB_020dbd44;
                  piVar45 = (int *)(lVar33 + 4);
                  while (piVar45[-1] != -0x204b966c) {
                    piVar45 = piVar45 + 2;
                    uVar44 = uVar44 - 1;
                    if (uVar44 == 0) goto LAB_020dbd40;
                  }
                  iVar24 = 0;
                  if (*piVar45 != -1) {
                    iVar24 = *piVar45;
                  }
                  *(int *)(puVar7 + 100) = iVar24;
                  if (*puVar43 == 0) break;
                } while( true );
              }
LAB_020dbd40:
              uVar25 = 0xfffe;
LAB_020dbd44:
              uVar27 = FUN_0277d6c4(lVar30 + 0x125ec);
              bVar5 = false;
              if (uVar27 != uVar25) {
                bVar5 = bVar11;
              }
              if (bVar5) goto LAB_020db864;
            }
            else if (bVar11) {
LAB_020db864:
              if (*puVar43 != 0) {
                cVar35 = *PTR_DAT_04bb6b00;
                do {
                  if (cVar35 == '\0') {
                    cVar35 = '\x01';
                    *PTR_DAT_04bb6b00 = 1;
                    *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)puVar7 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                  }
                  else {
                    uVar25 = *(uint *)(puVar7 + 100);
                    if (-1 < (int)uVar25) {
                      if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                        uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                        goto LAB_020dbd7c;
                      }
                      break;
                    }
                    if (uVar25 != 0xffffffff) break;
                  }
                  puVar38 = (uint *)(ulong)*puVar43;
                  uVar25 = 0xfffe;
                  if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dbd7c;
                  lVar33 = 0xc;
                  if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                    lVar33 = 0x1c;
                  }
                  lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                  if (lVar33 == 0) goto LAB_020dbd7c;
                  uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                  *(undefined4 *)(puVar7 + 100) = 0xfffffffe;
                  if (uVar44 == 0) goto LAB_020dbd7c;
                  piVar45 = (int *)(lVar33 + 4);
                  while (piVar45[-1] != -0x204b966c) {
                    piVar45 = piVar45 + 2;
                    uVar44 = uVar44 - 1;
                    if (uVar44 == 0) goto LAB_020dbd78;
                  }
                  iVar24 = 0;
                  if (*piVar45 != -1) {
                    iVar24 = *piVar45;
                  }
                  *(int *)(puVar7 + 100) = iVar24;
                  if (*puVar43 == 0) break;
                } while( true );
              }
LAB_020dbd78:
              uVar25 = 0xfffe;
LAB_020dbd7c:
              uVar27 = FUN_0277d6c4(&local_120);
              if (uVar27 == uVar25) {
                if (bVar12) {
                  if (*puVar43 != 0) {
                    cVar35 = *PTR_DAT_04bb6b00;
                    do {
                      if (cVar35 == '\0') {
                        cVar35 = '\x01';
                        *PTR_DAT_04bb6b00 = 1;
                        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 0x20);
                        if (-1 < (int)uVar25) {
                          if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                            uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                            goto LAB_020dbed0;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar38 = (uint *)(ulong)*puVar43;
                      uVar25 = 0xfffe;
                      if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dbed0;
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                      if (lVar33 == 0) goto LAB_020dbed0;
                      uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                      *(undefined4 *)(puVar7 + 0x20) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_020dbed0;
                      piVar45 = (int *)(lVar33 + 4);
                      while (piVar45[-1] != -0x700b961f) {
                        piVar45 = piVar45 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_020dbecc;
                      }
                      iVar24 = 0;
                      if (*piVar45 != -1) {
                        iVar24 = *piVar45;
                      }
                      *(int *)(puVar7 + 0x20) = iVar24;
                      if (*puVar43 == 0) break;
                    } while( true );
                  }
LAB_020dbecc:
                  uVar25 = 0xfffe;
LAB_020dbed0:
                  uVar27 = FUN_0277d6c4(&local_118);
                  if (uVar27 != uVar25) {
                    if (*puVar43 != 0) {
                      cVar35 = *PTR_DAT_04bb6b00;
                      do {
                        if (cVar35 == '\0') {
                          cVar35 = '\x01';
                          *PTR_DAT_04bb6b00 = 1;
                          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                          *(undefined8 *)puVar7 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                        }
                        else {
                          uVar25 = *(uint *)(puVar7 + 0x44);
                          if (-1 < (int)uVar25) {
                            if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                              uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                              goto LAB_020dbfdc;
                            }
                            break;
                          }
                          if (uVar25 != 0xffffffff) break;
                        }
                        puVar38 = (uint *)(ulong)*puVar43;
                        uVar25 = 0xfffe;
                        if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dbfdc;
                        lVar33 = 0xc;
                        if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                          lVar33 = 0x1c;
                        }
                        lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                        if (lVar33 == 0) goto LAB_020dbfdc;
                        uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                        *(undefined4 *)(puVar7 + 0x44) = 0xfffffffe;
                        if (uVar44 == 0) goto LAB_020dbfdc;
                        piVar45 = (int *)(lVar33 + 4);
                        while (piVar45[-1] != -0xbd6288e) {
                          piVar45 = piVar45 + 2;
                          uVar44 = uVar44 - 1;
                          if (uVar44 == 0) goto LAB_020dbfd8;
                        }
                        iVar24 = 0;
                        if (*piVar45 != -1) {
                          iVar24 = *piVar45;
                        }
                        *(int *)(puVar7 + 0x44) = iVar24;
                        if (*puVar43 == 0) break;
                      } while( true );
                    }
LAB_020dbfd8:
                    uVar25 = 0xfffe;
LAB_020dbfdc:
                    uVar27 = FUN_0277d6c4(&local_118);
                    if (uVar27 != uVar25) {
                      uVar40 = 1;
                      goto LAB_020dbffc;
                    }
                  }
                  uVar40 = 2;
                }
                else {
                  uVar40 = 1;
                }
LAB_020dbffc:
                if (bVar13) {
                  if (*puVar43 != 0) {
                    cVar35 = *PTR_DAT_04bb6b00;
                    do {
                      if (cVar35 == '\0') {
                        cVar35 = '\x01';
                        *PTR_DAT_04bb6b00 = 1;
                        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 0xc);
                        if (-1 < (int)uVar25) {
                          if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                            uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                            goto LAB_020dc10c;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar38 = (uint *)(ulong)*puVar43;
                      uVar25 = 0xfffe;
                      if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dc10c;
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                      if (lVar33 == 0) goto LAB_020dc10c;
                      uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                      *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_020dc10c;
                      piVar45 = (int *)(lVar33 + 4);
                      while (piVar45[-1] != 0x478dd182) {
                        piVar45 = piVar45 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_020dc108;
                      }
                      iVar24 = 0;
                      if (*piVar45 != -1) {
                        iVar24 = *piVar45;
                      }
                      *(int *)(puVar7 + 0xc) = iVar24;
                      if (*puVar43 == 0) break;
                    } while( true );
                  }
LAB_020dc108:
                  uVar25 = 0xfffe;
LAB_020dc10c:
                  uVar27 = FUN_0277d6c4(&local_110);
                  if (uVar27 != uVar25) {
                    if (*puVar43 != 0) {
                      cVar35 = *PTR_DAT_04bb6b00;
                      do {
                        if (cVar35 == '\0') {
                          cVar35 = '\x01';
                          *PTR_DAT_04bb6b00 = 1;
                          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                          *(undefined8 *)puVar7 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                        }
                        else {
                          uVar25 = *(uint *)(puVar7 + 0x28);
                          if (-1 < (int)uVar25) {
                            if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                              uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                              goto LAB_020dc220;
                            }
                            break;
                          }
                          if (uVar25 != 0xffffffff) break;
                        }
                        puVar38 = (uint *)(ulong)*puVar43;
                        uVar25 = 0xfffe;
                        if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dc220;
                        lVar33 = 0xc;
                        if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                          lVar33 = 0x1c;
                        }
                        lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                        if (lVar33 == 0) goto LAB_020dc220;
                        uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                        *(undefined4 *)(puVar7 + 0x28) = 0xfffffffe;
                        if (uVar44 == 0) goto LAB_020dc220;
                        piVar45 = (int *)(lVar33 + 4);
                        while (piVar45[-1] != -0x25fe3dbd) {
                          piVar45 = piVar45 + 2;
                          uVar44 = uVar44 - 1;
                          if (uVar44 == 0) goto LAB_020dc21c;
                        }
                        iVar24 = 0;
                        if (*piVar45 != -1) {
                          iVar24 = *piVar45;
                        }
                        *(int *)(puVar7 + 0x28) = iVar24;
                        if (*puVar43 == 0) break;
                      } while( true );
                    }
LAB_020dc21c:
                    uVar25 = 0xfffe;
LAB_020dc220:
                    uVar27 = FUN_0277d6c4(&local_110);
                    if (uVar27 != uVar25) goto LAB_020dc238;
                  }
LAB_020dc358:
                  uVar40 = uVar40 + 1;
                }
                else {
LAB_020dc238:
                  if (bVar14) {
                    if (*puVar43 != 0) {
                      cVar35 = *PTR_DAT_04bb6b00;
                      do {
                        if (cVar35 == '\0') {
                          cVar35 = '\x01';
                          *PTR_DAT_04bb6b00 = 1;
                          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                          *(undefined8 *)puVar7 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                        }
                        else {
                          uVar25 = *(uint *)(puVar7 + 0xc);
                          if (-1 < (int)uVar25) {
                            if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                              uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                              goto LAB_020dc340;
                            }
                            break;
                          }
                          if (uVar25 != 0xffffffff) break;
                        }
                        puVar38 = (uint *)(ulong)*puVar43;
                        uVar25 = 0xfffe;
                        if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dc340;
                        lVar33 = 0xc;
                        if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                          lVar33 = 0x1c;
                        }
                        lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                        if (lVar33 == 0) goto LAB_020dc340;
                        uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
                        if (uVar44 == 0) goto LAB_020dc340;
                        piVar45 = (int *)(lVar33 + 4);
                        while (piVar45[-1] != 0x478dd182) {
                          piVar45 = piVar45 + 2;
                          uVar44 = uVar44 - 1;
                          if (uVar44 == 0) goto LAB_020dc33c;
                        }
                        iVar24 = 0;
                        if (*piVar45 != -1) {
                          iVar24 = *piVar45;
                        }
                        *(int *)(puVar7 + 0xc) = iVar24;
                        if (*puVar43 == 0) break;
                      } while( true );
                    }
LAB_020dc33c:
                    uVar25 = 0xfffe;
LAB_020dc340:
                    uVar27 = FUN_0277d6c4(&local_108);
                    if (uVar27 == uVar25) goto LAB_020dc358;
                  }
                }
                if (bVar15) {
                  if (*puVar43 != 0) {
                    cVar35 = *PTR_DAT_04bb6b00;
                    do {
                      if (cVar35 == '\0') {
                        cVar35 = '\x01';
                        *PTR_DAT_04bb6b00 = 1;
                        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 0x1c);
                        if (-1 < (int)uVar25) {
                          if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                            uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                            goto LAB_020dc560;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar38 = (uint *)(ulong)*puVar43;
                      uVar25 = 0xfffe;
                      if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dc560;
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                      if (lVar33 == 0) goto LAB_020dc560;
                      uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                      *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_020dc560;
                      piVar45 = (int *)(lVar33 + 4);
                      while (piVar45[-1] != 0x524596a2) {
                        piVar45 = piVar45 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_020dc55c;
                      }
                      iVar24 = 0;
                      if (*piVar45 != -1) {
                        iVar24 = *piVar45;
                      }
                      *(int *)(puVar7 + 0x1c) = iVar24;
                      if (*puVar43 == 0) break;
                    } while( true );
                  }
LAB_020dc55c:
                  uVar25 = 0xfffe;
LAB_020dc560:
                  uVar27 = FUN_0277d6c4(&local_100);
                  if (uVar27 == uVar25) {
                    uVar40 = uVar40 + 1;
                  }
                }
                if (bVar16) {
                  if (*puVar43 != 0) {
                    cVar35 = *PTR_DAT_04bb6b00;
                    do {
                      if (cVar35 == '\0') {
                        cVar35 = '\x01';
                        *PTR_DAT_04bb6b00 = 1;
                        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 0x58);
                        if (-1 < (int)uVar25) {
                          if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                            uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                            goto LAB_020dc68c;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar38 = (uint *)(ulong)*puVar43;
                      uVar25 = 0xfffe;
                      if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dc68c;
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                      if (lVar33 == 0) goto LAB_020dc68c;
                      uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                      *(undefined4 *)(puVar7 + 0x58) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_020dc68c;
                      piVar45 = (int *)(lVar33 + 4);
                      while (piVar45[-1] != -0xf8ea92e) {
                        piVar45 = piVar45 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_020dc688;
                      }
                      iVar24 = 0;
                      if (*piVar45 != -1) {
                        iVar24 = *piVar45;
                      }
                      *(int *)(puVar7 + 0x58) = iVar24;
                      if (*puVar43 == 0) break;
                    } while( true );
                  }
LAB_020dc688:
                  uVar25 = 0xfffe;
LAB_020dc68c:
                  uVar27 = FUN_0277d6c4(&local_f8);
                  if (uVar27 == uVar25) {
                    uVar40 = uVar40 + 1;
                  }
                }
                if (bVar17) {
                  if (*puVar43 != 0) {
                    cVar35 = *PTR_DAT_04bb6b00;
                    do {
                      if (cVar35 == '\0') {
                        cVar35 = '\x01';
                        *PTR_DAT_04bb6b00 = 1;
                        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 0x5c);
                        if (-1 < (int)uVar25) {
                          if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                            uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                            goto LAB_020dc7bc;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar38 = (uint *)(ulong)*puVar43;
                      uVar25 = 0xfffe;
                      if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dc7bc;
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                      if (lVar33 == 0) goto LAB_020dc7bc;
                      uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                      *(undefined4 *)(puVar7 + 0x5c) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_020dc7bc;
                      piVar45 = (int *)(lVar33 + 4);
                      while (piVar45[-1] != -0x1eec5373) {
                        piVar45 = piVar45 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_020dc7b8;
                      }
                      iVar24 = 0;
                      if (*piVar45 != -1) {
                        iVar24 = *piVar45;
                      }
                      *(int *)(puVar7 + 0x5c) = iVar24;
                      if (*puVar43 == 0) break;
                    } while( true );
                  }
LAB_020dc7b8:
                  uVar25 = 0xfffe;
LAB_020dc7bc:
                  uVar27 = FUN_0277d6c4(&local_f0);
                  if (uVar27 == uVar25) {
                    uVar40 = uVar40 + 1;
                  }
                }
                if (bVar18) {
                  if (*puVar43 != 0) {
                    cVar35 = *PTR_DAT_04bb6b00;
                    do {
                      if (cVar35 == '\0') {
                        cVar35 = '\x01';
                        *PTR_DAT_04bb6b00 = 1;
                        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 0x18);
                        if (-1 < (int)uVar25) {
                          if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                            uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                            goto LAB_020dc8e0;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar38 = (uint *)(ulong)*puVar43;
                      uVar25 = 0xfffe;
                      if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dc8e0;
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                      if (lVar33 == 0) goto LAB_020dc8e0;
                      uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                      *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_020dc8e0;
                      piVar45 = (int *)(lVar33 + 4);
                      while (piVar45[-1] != 0x3af6dfe2) {
                        piVar45 = piVar45 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_020dc8dc;
                      }
                      iVar24 = 0;
                      if (*piVar45 != -1) {
                        iVar24 = *piVar45;
                      }
                      *(int *)(puVar7 + 0x18) = iVar24;
                      if (*puVar43 == 0) break;
                    } while( true );
                  }
LAB_020dc8dc:
                  uVar25 = 0xfffe;
LAB_020dc8e0:
                  uVar27 = FUN_0277d6c4(&local_e8);
                  if (uVar27 == uVar25) {
                    uVar40 = uVar40 + 1;
                  }
                }
                if (bVar19) {
                  if (*puVar43 != 0) {
                    cVar35 = *PTR_DAT_04bb6b00;
                    do {
                      if (cVar35 == '\0') {
                        cVar35 = '\x01';
                        *PTR_DAT_04bb6b00 = 1;
                        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 0x68);
                        if (-1 < (int)uVar25) {
                          if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                            uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                            goto LAB_020dc91c;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar38 = (uint *)(ulong)*puVar43;
                      uVar25 = 0xfffe;
                      if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dc91c;
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                      if (lVar33 == 0) goto LAB_020dc91c;
                      uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                      *(undefined4 *)(puVar7 + 0x68) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_020dc91c;
                      piVar45 = (int *)(lVar33 + 4);
                      while (piVar45[-1] != 0x3c0210) {
                        piVar45 = piVar45 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_020dc918;
                      }
                      iVar24 = 0;
                      if (*piVar45 != -1) {
                        iVar24 = *piVar45;
                      }
                      *(int *)(puVar7 + 0x68) = iVar24;
                      if (*puVar43 == 0) break;
                    } while( true );
                  }
LAB_020dc918:
                  uVar25 = 0xfffe;
LAB_020dc91c:
                  uVar27 = FUN_0277d6c4(&local_e0);
                  if (uVar27 == uVar25) {
                    uVar40 = uVar40 + 1;
                  }
                }
                if (bVar1) {
                  if (*puVar43 != 0) {
                    cVar35 = *PTR_DAT_04bb6b00;
                    do {
                      if (cVar35 == '\0') {
                        cVar35 = '\x01';
                        *PTR_DAT_04bb6b00 = 1;
                        *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
                        *(undefined8 *)puVar7 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
                        *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
                      }
                      else {
                        uVar25 = *(uint *)(puVar7 + 0x60);
                        if (-1 < (int)uVar25) {
                          if ((ushort *)((ulong)uVar25 + (long)puVar43) != (ushort *)0x0) {
                            uVar25 = (uint)*(ushort *)((ulong)uVar25 + (long)puVar43);
                            goto LAB_020dca3c;
                          }
                          break;
                        }
                        if (uVar25 != 0xffffffff) break;
                      }
                      puVar38 = (uint *)(ulong)*puVar43;
                      uVar25 = 0xfffe;
                      if ((*puVar43 == 0) || (puVar43 == puVar38)) goto LAB_020dca3c;
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + (10 - (long)puVar38)) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + (lVar33 - (long)puVar38);
                      if (lVar33 == 0) goto LAB_020dca3c;
                      uVar44 = (ulong)*(ushort *)((long)puVar43 + (8 - (long)puVar38));
                      *(undefined4 *)(puVar7 + 0x60) = 0xfffffffe;
                      if (uVar44 == 0) goto LAB_020dca3c;
                      piVar45 = (int *)(lVar33 + 4);
                      while (piVar45[-1] != -0x144659cc) {
                        piVar45 = piVar45 + 2;
                        uVar44 = uVar44 - 1;
                        if (uVar44 == 0) goto LAB_020dca38;
                      }
                      iVar24 = 0;
                      if (*piVar45 != -1) {
                        iVar24 = *piVar45;
                      }
                      *(int *)(puVar7 + 0x60) = iVar24;
                      if (*puVar43 == 0) break;
                    } while( true );
                  }
LAB_020dca38:
                  uVar25 = 0xfffe;
LAB_020dca3c:
                  uVar27 = FUN_0277d6c4(&local_e0);
                  if (uVar27 == uVar25) {
                    uVar40 = uVar40 + 1;
                  }
                }
                puVar38 = (uint *)PTR_DAT_04bb6af8;
                if (uVar40 < uVar47) goto LAB_020dca60;
                if (uVar20 < uVar40) {
LAB_020dca80:
                  local_384 = uVar23;
                  uVar20 = uVar40;
                }
                else if (uVar40 == uVar20) {
                  puVar43 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                  uVar25 = *puVar43 ^ *puVar43 << 0xb;
                  uVar27 = puVar43[3];
                  *puVar43 = puVar43[1];
                  puVar43[1] = puVar43[2];
                  uVar25 = uVar25 >> 8 ^ uVar27 >> 0x13 ^ uVar25 ^ uVar27;
                  puVar43[2] = uVar27;
                  puVar43[3] = uVar25;
                  if ((uint)((ulong)uVar25 * 100 >> 0x20) < 0x32) goto LAB_020dca80;
                }
                goto LAB_020db4b4;
              }
            }
switchD_020db734_default:
            puVar38 = (uint *)PTR_DAT_04bb6af8;
            goto LAB_020db4b4;
          }
          switch(uVar25) {
          case 1:
            uVar44 = FUN_026b7d00(*(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8),&local_120,lVar34
                                 );
            puVar38 = (uint *)PTR_DAT_04bb6af8;
            if ((0x3ff < uVar32) || ((uVar44 & 1) == 0)) break;
LAB_020dbce0:
            ppuVar46 = &local_1c8;
            goto LAB_020dbcec;
          case 2:
            uVar44 = FUN_026b7d00(*(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8),&local_110,lVar34
                                 );
            if ((uVar44 & 1) != 0) goto joined_r0x020dbc10;
            uVar44 = FUN_026b7d00(*(long *)(lVar29 + 0x10) + *(long *)(lVar29 + 8),&local_108,lVar34
                                 );
            puVar38 = (uint *)PTR_DAT_04bb6af8;
            if ((0x3ff < uVar32) || ((uVar44 & 1) == 0)) break;
            goto LAB_020dbc14;
          case 3:
            if ((uVar36 >> 2 & 1) != 0) {
              iVar24 = FUN_020dcf1c(&local_118,&local_c8);
              if (uVar32 < 0x400) {
                if (iVar24 == 0) goto LAB_020dbc14;
              }
            }
            break;
          case 4:
            uVar25 = uVar36 >> 3;
            goto joined_r0x020dbc08;
          case 5:
            uVar25 = uVar36 >> 4;
            goto joined_r0x020dbc08;
          case 6:
            uVar25 = uVar36 >> 5;
joined_r0x020dbc08:
            if ((uVar25 & 1) != 0) {
joined_r0x020dbc10:
              puVar38 = (uint *)PTR_DAT_04bb6af8;
              if (uVar32 < 0x400) {
LAB_020dbc14:
                ppuVar46 = local_2c8 + 0x10;
LAB_020dbcec:
                uVar44 = uVar32 >> 3 & 0x1ffffffffffffffc;
                *(uint *)((long)ppuVar46 + uVar44) =
                     *(uint *)((long)ppuVar46 + uVar44) | 1 << (ulong)(uVar23 & 0x1f);
              }
            }
            break;
          case 7:
          case 8:
          case 9:
            if ((uVar36 >> 1 & 1) != 0) {
              uVar27 = FUN_020dcf1c(&local_120,&local_c8);
              local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar27);
              goto LAB_020dbccc;
            }
            break;
          case 10:
          case 0xb:
          case 0xc:
          case 0xd:
          case 0xe:
          case 0xf:
            if ((uVar36 >> 1 & 1) != 0) {
              uVar26 = FUN_00a8c014(*(undefined8 *)PTR_DAT_04bb30a0);
              local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar26);
              switch(uVar26) {
              case 0:
                local_6c[0] = 0;
                iVar24 = FUN_021e0120(&local_120,local_6c);
                if (0 < iVar24) goto switchD_020db990_default;
                uVar27 = 10;
                break;
              case 1:
                local_6c[0] = 1;
                iVar24 = FUN_021e0120(&local_120,local_6c);
                if (iVar24 < 1) {
                  uVar27 = 0xb;
                }
                else {
                  local_6c[0] = 3;
                  iVar24 = FUN_021e0120(&local_120,local_6c);
                  if (0 < iVar24) goto switchD_020db990_default;
                  uVar27 = 0xe;
                }
                break;
              case 2:
                local_6c[0] = 2;
                iVar24 = FUN_021e0120(&local_120,local_6c);
                if (0 < iVar24) goto switchD_020db990_default;
                uVar27 = 0xc;
                break;
              case 3:
                local_6c[0] = 3;
                iVar24 = FUN_021e0120(&local_120,local_6c);
                if (iVar24 < 1) {
                  uVar27 = 0xd;
                }
                else {
                  local_6c[0] = 1;
                  iVar24 = FUN_021e0120(&local_120,local_6c);
                  if (0 < iVar24) goto switchD_020db990_default;
                  uVar27 = 0xf;
                }
                break;
              default:
switchD_020db990_default:
                uVar27 = 0;
              }
LAB_020dbccc:
              if (uVar32 < 0x400) {
                if (uVar27 == uVar25) goto LAB_020dbce0;
              }
            }
            break;
          case 0x10:
          case 0x11:
          case 0x12:
          case 0x13:
          case 0x14:
          case 0x15:
            if ((uVar36 >> 1 & 1) != 0) {
              local_78 = 0;
              local_80 = (undefined4)local_120;
              uStack_7c = local_120._4_4_;
              lVar33 = *(long *)PTR_DAT_04bb43c0;
              local_88 = puVar2;
              uVar27 = FUN_0277d6c4(&local_80);
              if (*(long *)puVar8 == 0) {
LAB_020dbb1c:
                local_6c[0] = 1;
              }
              else {
                lVar33 = *(long *)(lVar33 + 0x57e58);
                uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                if ((*(uint *)(lVar33 + 0x1d8) <= uVar27) ||
                   (*(long *)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar27 * 8) == 0))
                goto LAB_020dbb1c;
                lVar33 = *(long *)PTR_DAT_04bc0428;
                uVar27 = FUN_0277d6c4(&local_120);
                uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar33 + 0x1f8);
                if ((*(uint *)(lVar33 + 0x1d8) <= uVar27) ||
                   (puVar38 = *(uint **)(*(long *)(lVar33 + 0x1e0) + (long)(int)uVar27 * 8),
                   puVar38 == (uint *)0x0)) goto LAB_020dbb1c;
                uVar27 = *puVar38;
                local_6c[0] = 0;
                if ((uVar27 != 0) && (puVar38 != (uint *)(ulong)uVar27)) {
                  puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar27);
                  local_6c[0] = 0;
                  if (*puVar43 != 0) {
                    uVar27 = puVar43[1];
                    if ((uVar27 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                      lVar33 = 0xc;
                      if (*(char *)((long)puVar43 + 10) != '\0') {
                        lVar33 = 0x1c;
                      }
                      lVar33 = (long)puVar43 + lVar33 + (ulong)(ushort)puVar43[2] * 8;
                      if (lVar33 != 0) {
                        uVar3 = 0;
                        if ((ulong)uVar27 != 0) {
                          uVar3 = (uint)((ulong)((long)puVar38 - lVar33) / (ulong)uVar27);
                        }
                        if (*puVar43 <= uVar3) {
                          uVar3 = 0xffffffff;
                        }
                        if ((uVar3 < *(uint *)PTR_DAT_04bc0100) &&
                           (local_6c[0] = (uint)*(ushort *)
                                                 (*(long *)(PTR_DAT_04bc0100 + 8) +
                                                 (long)(int)uVar3 * 2), local_6c[0] < 7))
                        goto LAB_020dbb2c;
                      }
                    }
                    local_6c[0] = 0;
                  }
                }
              }
LAB_020dbb2c:
              puVar38 = (uint *)PTR_DAT_04bb6af8;
              if (5 < local_6c[0] - 1) goto switchD_020db990_default;
              uVar27 = (&DAT_041797d0)[(int)(local_6c[0] - 1)];
              goto LAB_020dbccc;
            }
LAB_020dca60:
            puVar38 = (uint *)PTR_DAT_04bb6af8;
            break;
          case 0x16:
          case 0x17:
          case 0x18:
          case 0x19:
          case 0x1a:
          case 0x1b:
          case 0x1c:
          case 0x1d:
          case 0x1e:
          case 0x1f:
          case 0x20:
          case 0x21:
          case 0x22:
          case 0x23:
          case 0x24:
          case 0x25:
          case 0x26:
          case 0x27:
          case 0x28:
          case 0x29:
          case 0x2a:
          case 0x2b:
          case 0x2c:
          case 0x2d:
          case 0x2e:
          case 0x2f:
            uVar44 = FUN_020dd1cc(uVar25,&local_120,&local_148,uVar47);
            puVar38 = (uint *)PTR_DAT_04bb6af8;
            if ((uVar32 < 0x400) && ((uVar44 & 1) != 0)) {
              ppuVar46 = local_2c8;
              goto LAB_020dbcec;
            }
            break;
          default:
            goto switchD_020db734_default;
          }
LAB_020db4b4:
          uVar32 = uVar32 + 1;
        } while (uVar32 != uVar22);
      }
      uVar22 = FUN_00b3a3f8(local_2c8);
      iVar24 = FUN_00b3a3f8(&local_1c8);
      iVar28 = FUN_00b3a3f8(local_2c8 + 0x10);
      if ((int)uVar22 < 1) {
LAB_020dcbc8:
        if (local_384 == 0xffffffff) {
          if (bVar6) {
            if (0 < iVar24) goto LAB_020dcc1c;
            if (iVar28 < 1) goto LAB_020da154;
          }
          else if (iVar28 < 1) {
            if (iVar24 < 1) goto LAB_020da154;
LAB_020dcc1c:
            ppuVar46 = &local_1c8;
            goto LAB_020dcc20;
          }
          ppuVar46 = local_2c8 + 0x10;
          goto LAB_020dcc20;
        }
        if ((int)local_384 < 0) goto LAB_020da154;
LAB_020dcc88:
        if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
          if ((((*(long *)(param_1 + 0xb0) != 0) &&
               (puVar38 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar38 != (uint *)0x0)) &&
              ((*(uint *)(param_1 + 200) <= local_384 ||
               (*(char *)(*(long *)(param_1 + 0xd0) + (ulong)local_384) != '\0')))) &&
             (((local_384 < *puVar38 && (puVar38[1] != 0)) && ((ushort)puVar38[2] != 0)))) {
            iVar24 = 0xc;
            if (*(char *)((long)puVar38 + 10) != '\0') {
              iVar24 = 0x1c;
            }
            puVar38 = (uint *)((ulong)(puVar38[1] * local_384 + (uint)(ushort)puVar38[2] * 8 +
                                      iVar24) + (long)puVar38);
            goto joined_r0x020dcedc;
          }
        }
        else if (local_384 < *(uint *)(param_1 + 0x1c0)) {
          uVar22 = local_384;
          if (*(uint *)(param_1 + 0x1b0) <= local_384) {
            uVar22 = 0;
          }
          puVar38 = *(uint **)(*(long *)(param_1 + 0x1b8) + (ulong)uVar22 * 8);
joined_r0x020dcedc:
          if (puVar38 != (uint *)0x0) {
            uVar20 = (*(code *)(&PTR_LAB_04a73508)[(long)(int)local_d8 * 2])(puVar38);
            if (local_384 == (int)(short)uVar4) {
              bVar10 = (bool)(bVar39 ^ 1);
              if (0x3ff < uVar4) {
                bVar10 = true;
              }
              if (bVar10) {
LAB_020dcd20:
                uVar22 = FUN_03853b94(puVar38);
                if ((uVar22 < *(uint *)PTR_DAT_04bb6af8) &&
                   (0xffd0 < (ushort)(*(short *)(*(long *)(PTR_DAT_04bb6af8 + 8) +
                                                (long)(int)uVar22 * 2) - 0x30U))) goto LAB_020dcd94;
              }
              else {
                uVar22 = 1 << (ulong)(local_384 & 0x1f);
                if (((*(uint *)((long)&local_1c8 + (ulong)(local_384 >> 5) * 4) & uVar22) == 0) &&
                   ((*(uint *)((long)local_2c8 + (ulong)(local_384 >> 5) * 4) & uVar22) == 0))
                goto LAB_020dcd20;
              }
              sVar21 = (*(code *)(&PTR_LAB_04a73588)[(long)(int)local_d8 * 2])(puVar38);
              if (sVar21 != -1) {
                uVar20 = (*(code *)(&PTR_LAB_04a73588)[(long)(int)local_d8 * 2])(puVar38);
              }
            }
LAB_020dcd94:
            if (0 < (short)uVar20) {
              uVar23 = 0;
              *param_2 = (uint)uVar20;
              *param_3 = local_384;
              uVar22 = *puVar38;
              if ((uVar22 != 0) && (puVar38 != (uint *)(ulong)uVar22)) {
                puVar43 = (uint *)((long)puVar38 - (long)(ulong)uVar22);
                uVar23 = 0;
                if (*puVar43 != 0) {
                  uVar22 = puVar43[1];
                  if ((uVar22 != 0) && ((ulong)(ushort)puVar43[2] != 0)) {
                    lVar30 = 0xc;
                    if (*(char *)((long)puVar43 + 10) != '\0') {
                      lVar30 = 0x1c;
                    }
                    lVar30 = (long)puVar43 + lVar30 + (ulong)(ushort)puVar43[2] * 8;
                    if (lVar30 != 0) {
                      uVar23 = 0;
                      if ((ulong)uVar22 != 0) {
                        uVar23 = (uint)((ulong)((long)puVar38 - lVar30) / (ulong)uVar22);
                      }
                      if (*puVar43 <= uVar23) {
                        uVar23 = 0xffffffff;
                      }
                      if ((uVar23 < *(uint *)PTR_DAT_04bb6af8) &&
                         (uVar23 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bb6af8 + 8) + (long)(int)uVar23 * 2),
                         uVar23 < 0x30)) goto LAB_020dce3c;
                    }
                  }
                  uVar23 = 0;
                }
              }
LAB_020dce3c:
              local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar23);
              uVar48 = 1;
              uVar26 = 3;
              switch(uVar23) {
              case 0:
                goto switchD_020dce68_caseD_0;
              default:
                *(undefined4 *)param_5 = (undefined4)local_120;
                *(int *)((long)param_5 + 4) = local_120._4_4_;
                uVar26 = 1;
                break;
              case 2:
              case 4:
                break;
              case 3:
                uVar26 = 2;
                break;
              case 5:
                uVar26 = 4;
                break;
              case 6:
                uVar26 = 5;
              }
              uVar48 = 1;
              *param_4 = uVar26;
              goto switchD_020dce68_caseD_0;
            }
          }
        }
      }
      else {
        ppuVar46 = local_2c8;
        if (uVar4 < 0x400) {
          uVar36 = 1 << (ulong)(uVar4 & 0x1f);
          uVar23 = *(uint *)((long)ppuVar46 + (ulong)(uVar4 >> 5) * 4);
          if ((uVar23 & uVar36) != 0) {
            if (uVar22 < 2) {
              puVar38 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
              uVar22 = *puVar38 ^ *puVar38 << 0xb;
              uVar23 = puVar38[3];
              *puVar38 = puVar38[1];
              puVar38[1] = puVar38[2];
              uVar22 = uVar22 >> 8 ^ uVar23 >> 0x13 ^ uVar22 ^ uVar23;
              puVar38[2] = uVar23;
              puVar38[3] = uVar22;
              if ((uint)((ulong)uVar22 * 100 >> 0x20) < 0x32) goto LAB_020dcbc8;
              ppuVar46 = local_2c8;
            }
            else {
              ppuVar46 = local_2c8;
              *(uint *)((long)ppuVar46 + (ulong)(uVar4 >> 5) * 4) = uVar23 & (uVar36 ^ 0xffffffff);
            }
          }
        }
LAB_020dcc20:
        uVar22 = FUN_00b3a3f8(ppuVar46);
        if (0 < (int)uVar22) {
          puVar38 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
          uVar23 = *puVar38 ^ *puVar38 << 0xb;
          uVar36 = puVar38[3];
          *puVar38 = puVar38[1];
          puVar38[1] = puVar38[2];
          uVar23 = uVar23 >> 8 ^ uVar36 >> 0x13 ^ uVar23 ^ uVar36;
          puVar38[2] = uVar36;
          puVar38[3] = uVar23;
          local_384 = FUN_00b3aac0(ppuVar46,(int)((ulong)uVar23 * (ulong)uVar22 >> 0x20) + 1);
          if (-1 < (int)local_384) goto LAB_020dcc88;
        }
      }
    }
  }
LAB_020da154:
  uVar48 = 0;
switchD_020dce68_caseD_0:
  if ((((local_2dc & 1) != 0) && (*(long *)(lVar29 + 0x28) != 0)) &&
     (puVar31 = *(undefined8 **)(*(long *)(lVar29 + 0x28) + 8), puVar31 != (undefined8 *)0x0)) {
    (**(code **)*puVar31)();
  }
  return uVar48;
}

