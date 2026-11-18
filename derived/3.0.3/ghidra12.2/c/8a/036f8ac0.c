
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_036f8ac0(undefined8 param_1,long param_2)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  byte bVar8;
  byte bVar9;
  undefined4 uVar10;
  undefined8 ****ppppuVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong uVar16;
  undefined *puVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 local_10c;
  undefined4 local_104;
  undefined4 local_100;
  undefined8 local_fc;
  undefined4 local_f4;
  uint local_f0;
  uint uStack_ec;
  undefined8 *local_e8;
  undefined8 ****local_e0;
  undefined8 ****ppppuStack_d8;
  undefined8 local_d0;
  undefined8 ****local_c8;
  undefined8 ****local_c0;
  undefined8 ****local_b8;
  undefined8 ****local_b0;
  undefined8 ***local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88 [9];
  
  if (_DAT_0545c454 == 2) {
    cVar2 = '\0';
    if (DAT_0545b95c != 0) {
      cVar2 = DAT_0545b99a;
    }
    cVar3 = '\0';
    if (DAT_0545ba74 != '\0') {
      cVar3 = DAT_0545bab2;
    }
    cVar4 = '\0';
    if (DAT_0545bb8c != '\0') {
      cVar4 = DAT_0545bbca;
    }
    cVar5 = '\0';
    if (DAT_0545bca4 != '\0') {
      cVar5 = DAT_0545bce2;
    }
    cVar6 = '\0';
    if (DAT_0545bdbc != '\0') {
      cVar6 = DAT_0545bdfa;
    }
    cVar7 = '\0';
    if (DAT_0545bed4 != '\0') {
      cVar7 = DAT_0545bf12;
    }
    uVar13 = 0;
    if (DAT_0545bfec != '\0') {
      uVar13 = (uint)DAT_0545c02a;
    }
    bVar8 = 0;
    if (DAT_0545c104 != '\0') {
      bVar8 = DAT_0545c142;
    }
    bVar9 = 0;
    if (DAT_0545c21c != '\0') {
      bVar9 = DAT_0545c25a;
    }
    if (uVar13 + (byte)(cVar3 + cVar2 + cVar4 + cVar5 + cVar6 + cVar7) + (uint)bVar8 + (uint)bVar9
        == 0) {
      puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar13 = *puVar12 ^ *puVar12 << 0xb;
      uVar18 = puVar12[3];
      *puVar12 = puVar12[1];
      puVar12[1] = puVar12[2];
      uVar13 = uVar13 >> 8 ^ uVar18 >> 0x13 ^ uVar13 ^ uVar18;
      puVar12[2] = uVar18;
      puVar12[3] = uVar13;
      if ((uint)((ulong)uVar13 * 100 >> 0x20) < 0x1e) {
        uStack_ec = 0;
        local_e8 = (undefined8 *)0x0;
        local_c8 = &local_c0;
        local_b8 = &local_b0;
        local_c0 = &local_b8;
        ppppuStack_d8 = (undefined8 ****)&local_d0;
        local_90 = 0;
        local_b0 = &local_a8;
        local_a8 = &local_a0;
        local_a0 = &local_98;
        local_98 = &local_90;
        if (local_88 != (undefined8 *)0x0) {
          uStack_ec = 9;
          local_e8 = local_88;
        }
        local_f0 = 0;
        uVar13 = (uint)DAT_0545b95c;
        local_e0 = ppppuStack_d8;
        local_d0 = &local_c8;
        if (DAT_0545b95c != 0) {
          uVar19 = (ulong)DAT_0545a400;
          if ((uVar19 < 0x23) && (DAT_0545a401 <= (byte)PTR_DAT_04bc27f0[uVar19])) {
            uVar13 = 0;
            if ((((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a401 & 0x1f) & 1) !=
                  0) && (DAT_0545b998 != '\0')) && (local_88 != (undefined8 *)0x0)) {
              local_d0 = (undefined8 ****)CONCAT44((int)((ulong)&local_c8 >> 0x20),6);
              *local_e8 = ppppuStack_d8;
              uVar13 = 1;
              local_e0 = &local_c8;
              local_f0 = uVar13;
            }
          }
          else {
            uVar13 = 0;
          }
        }
        ppppuVar11 = local_e0;
        if ((((DAT_0545ba74 != '\0') && (uVar19 = (ulong)DAT_0545a403, uVar19 < 0x23)) &&
            ((DAT_0545a404 <= (byte)PTR_DAT_04bc27f0[uVar19] &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a404 & 0x1f) & 1) != 0
              && ((char)DAT_0545bab0 != '\0')))))) && (uVar13 < uStack_ec)) {
          if (local_e0 != (undefined8 ****)0x0) {
            local_e0 = (undefined8 ****)*local_e0;
          }
          *(undefined4 *)ppppuVar11 = 7;
          uVar13 = local_f0;
          if (local_f0 < uStack_ec) {
            local_e8[(int)local_f0] = ppppuVar11;
            uVar13 = local_f0 + 1;
            local_f0 = uVar13;
          }
        }
        ppppuVar11 = local_e0;
        if (((((DAT_0545bb8c != '\0') && (uVar19 = (ulong)DAT_0545a406, uVar19 < 0x23)) &&
             (DAT_0545a407 <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
            (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a407 & 0x1f) & 1) != 0 &&
             (DAT_0545bbc8 != '\0')))) && (uVar13 < uStack_ec)) {
          if (local_e0 != (undefined8 ****)0x0) {
            local_e0 = (undefined8 ****)*local_e0;
          }
          *(undefined4 *)ppppuVar11 = 8;
          uVar13 = local_f0;
          if (local_f0 < uStack_ec) {
            local_e8[(int)local_f0] = ppppuVar11;
            uVar13 = local_f0 + 1;
            local_f0 = uVar13;
          }
        }
        ppppuVar11 = local_e0;
        if (((DAT_0545bca4 != '\0') && (uVar19 = (ulong)DAT_0545a409, uVar19 < 0x23)) &&
           ((DAT_0545a40a <= (byte)PTR_DAT_04bc27f0[uVar19] &&
            ((((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a40a & 0x1f) & 1) != 0
              && (DAT_0545bce0 != '\0')) && (uVar13 < uStack_ec)))))) {
          if (local_e0 != (undefined8 ****)0x0) {
            local_e0 = (undefined8 ****)*local_e0;
          }
          *(undefined4 *)ppppuVar11 = 9;
          uVar13 = local_f0;
          if (local_f0 < uStack_ec) {
            local_e8[(int)local_f0] = ppppuVar11;
            uVar13 = local_f0 + 1;
            local_f0 = uVar13;
          }
        }
        ppppuVar11 = local_e0;
        if ((((DAT_0545bdbc != '\0') && (uVar19 = (ulong)DAT_0545a40c, uVar19 < 0x23)) &&
            ((DAT_0545a40d <= (byte)PTR_DAT_04bc27f0[uVar19] &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a40d & 0x1f) & 1) != 0
              && (DAT_0545bdf8 != '\0')))))) && (uVar13 < uStack_ec)) {
          if (local_e0 != (undefined8 ****)0x0) {
            local_e0 = (undefined8 ****)*local_e0;
          }
          *(undefined4 *)ppppuVar11 = 10;
          uVar13 = local_f0;
          if (local_f0 < uStack_ec) {
            local_e8[(int)local_f0] = ppppuVar11;
            uVar13 = local_f0 + 1;
            local_f0 = uVar13;
          }
        }
        ppppuVar11 = local_e0;
        if (((((DAT_0545bed4 != '\0') && (uVar19 = (ulong)DAT_0545a40f, uVar19 < 0x23)) &&
             (DAT_0545a410 <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
            (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a410 & 0x1f) & 1) != 0 &&
             (DAT_0545bf10 != '\0')))) && (uVar13 < uStack_ec)) {
          if (local_e0 != (undefined8 ****)0x0) {
            local_e0 = (undefined8 ****)*local_e0;
          }
          *(undefined4 *)ppppuVar11 = 0xb;
          uVar13 = local_f0;
          if (local_f0 < uStack_ec) {
            local_e8[(int)local_f0] = ppppuVar11;
            uVar13 = local_f0 + 1;
            local_f0 = uVar13;
          }
        }
        ppppuVar11 = local_e0;
        if (((DAT_0545bfec != '\0') && (uVar19 = (ulong)DAT_0545a412, uVar19 < 0x23)) &&
           ((DAT_0545a413 <= (byte)PTR_DAT_04bc27f0[uVar19] &&
            ((((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a413 & 0x1f) & 1) != 0
              && (DAT_0545c028 != '\0')) && (uVar13 < uStack_ec)))))) {
          if (local_e0 != (undefined8 ****)0x0) {
            local_e0 = (undefined8 ****)*local_e0;
          }
          *(undefined4 *)ppppuVar11 = 0xc;
          uVar13 = local_f0;
          if (local_f0 < uStack_ec) {
            local_e8[(int)local_f0] = ppppuVar11;
            uVar13 = local_f0 + 1;
            local_f0 = uVar13;
          }
        }
        ppppuVar11 = local_e0;
        if (((DAT_0545c104 != '\0') && (uVar19 = (ulong)DAT_0545a415, uVar19 < 0x23)) &&
           (((DAT_0545a416 <= (byte)PTR_DAT_04bc27f0[uVar19] &&
             (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a416 & 0x1f) & 1) != 0
              && (DAT_0545c140 != '\0')))) && (uVar13 < uStack_ec)))) {
          if (local_e0 != (undefined8 ****)0x0) {
            local_e0 = (undefined8 ****)*local_e0;
          }
          *(undefined4 *)ppppuVar11 = 0xd;
          uVar13 = local_f0;
          if (local_f0 < uStack_ec) {
            local_e8[(int)local_f0] = ppppuVar11;
            uVar13 = local_f0 + 1;
            local_f0 = uVar13;
          }
        }
        ppppuVar11 = local_e0;
        if (((((DAT_0545c21c != '\0') && (uVar19 = (ulong)DAT_0545a418, uVar19 < 0x23)) &&
             (DAT_0545a419 <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
            (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a419 & 0x1f) & 1) != 0 &&
             (DAT_0545c258 != '\0')))) && (uVar13 < uStack_ec)) {
          if (local_e0 != (undefined8 ****)0x0) {
            local_e0 = (undefined8 ****)*local_e0;
          }
          *(undefined4 *)ppppuVar11 = 0xe;
          uVar13 = local_f0;
          if (local_f0 < uStack_ec) {
            local_e8[(int)local_f0] = ppppuVar11;
            uVar13 = local_f0 + 1;
            local_f0 = uVar13;
          }
        }
        if (2 < uVar13) {
          uVar13 = nn::os::GetSystemTick();
          if (1 < (int)local_f0) {
            uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
            uVar18 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
            uVar14 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
            uVar16 = (ulong)((uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4);
            uVar19 = (ulong)local_f0;
            do {
              uVar13 = uVar13 ^ uVar13 << 0xb;
              uVar15 = (uint)uVar16;
              uVar16 = (ulong)(uVar15 >> 0x13 ^ uVar13 >> 8 ^ uVar15 ^ uVar13);
              uVar21 = uVar19 - 1 & 0xffffffff;
              uVar22 = local_e8[uVar21];
              uVar20 = uVar19 * uVar16 >> 0x1d & 0x7fffffff8;
              local_e8[uVar21] = *(undefined8 *)((long)local_e8 + uVar20);
              *(undefined8 *)((long)local_e8 + uVar20) = uVar22;
              bVar1 = 2 < uVar19;
              uVar19 = uVar19 - 1;
              uVar13 = uVar18;
              uVar18 = uVar14;
              uVar14 = uVar15;
            } while (bVar1);
          }
          local_100 = 0;
          local_fc = 0x3800000037;
          local_f4 = 0x39;
          uVar19 = FUN_036f7c00(param_1,&local_fc,&local_100,0,0);
          uVar10 = local_100;
          if ((uVar19 & 1) != 0) {
            uVar13 = *(uint *)*local_e8;
            if ((uVar13 != 0xffffffff) && ((int)uVar13 < 0x10)) {
              puVar17 = &DAT_0545b240 + (ulong)uVar13 * 0x118;
              if (0xf < uVar13) {
                puVar17 = &DAT_0545b240;
              }
              if (puVar17[0x8c] != '\0') {
                local_10c = 0;
                local_104 = 0;
                FUN_036f98d0(param_1,&local_fc,&local_10c);
                puVar17[200] = 0;
                *(undefined4 *)(puVar17 + 0xa4) = 5;
                *(undefined4 *)(puVar17 + 0xa8) = uVar10;
                *(undefined4 *)(puVar17 + 0xa0) = (undefined4)local_fc;
                *(undefined8 *)(puVar17 + 0x94) = local_10c;
                *(undefined4 *)(puVar17 + 0x9c) = local_104;
                puVar17[0x90] = 1;
                puVar17[0xca] = 1;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              }
            }
            uVar13 = *(uint *)local_e8[1];
            if ((uVar13 != 0xffffffff) && ((int)uVar13 < 0x10)) {
              puVar17 = &DAT_0545b240 + (ulong)uVar13 * 0x118;
              if (0xf < uVar13) {
                puVar17 = &DAT_0545b240;
              }
              if (puVar17[0x8c] != '\0') {
                local_10c = 0;
                local_104 = 0;
                FUN_036f98d0(param_1,(long)&local_fc + 4,&local_10c);
                puVar17[200] = 0;
                *(undefined4 *)(puVar17 + 0xa4) = 5;
                *(undefined4 *)(puVar17 + 0xa8) = uVar10;
                *(undefined4 *)(puVar17 + 0xa0) = local_fc._4_4_;
                *(undefined8 *)(puVar17 + 0x94) = local_10c;
                *(undefined4 *)(puVar17 + 0x9c) = local_104;
                puVar17[0x90] = 1;
                puVar17[0xca] = 1;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              }
            }
            uVar13 = *(uint *)local_e8[2];
            if ((uVar13 != 0xffffffff) && ((int)uVar13 < 0x10)) {
              puVar17 = &DAT_0545b240 + (ulong)uVar13 * 0x118;
              if (0xf < uVar13) {
                puVar17 = &DAT_0545b240;
              }
              if (puVar17[0x8c] != '\0') {
                local_10c = 0;
                local_104 = 0;
                FUN_036f98d0(param_1,&local_f4,&local_10c);
                puVar17[200] = 0;
                *(undefined4 *)(puVar17 + 0xa4) = 5;
                *(undefined4 *)(puVar17 + 0xa8) = uVar10;
                *(undefined4 *)(puVar17 + 0xa0) = local_f4;
                *(undefined8 *)(puVar17 + 0x94) = local_10c;
                *(undefined4 *)(puVar17 + 0x9c) = local_104;
                puVar17[0x90] = 1;
                puVar17[0xca] = 1;
                *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + 1;
              }
            }
          }
        }
      }
      return;
    }
  }
  else {
    if ((((DAT_0545b95c != 0) && (uVar19 = (ulong)DAT_0545a400, uVar19 < 0x23)) &&
        (DAT_0545a401 <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a401 & 0x1f) & 1) != 0 &&
        (DAT_0545b99a != '\0')))) {
      DAT_0545b998 = '\0';
    }
    if (((DAT_0545ba74 != '\0') && (uVar19 = (ulong)DAT_0545a403, uVar19 < 0x23)) &&
       ((DAT_0545a404 <= (byte)PTR_DAT_04bc27f0[uVar19] &&
        (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a404 & 0x1f) & 1) != 0 &&
         (DAT_0545bab2 != '\0')))))) {
      DAT_0545bab0._0_1_ = '\0';
    }
    if ((((DAT_0545bb8c != '\0') && (uVar19 = (ulong)DAT_0545a406, uVar19 < 0x23)) &&
        (DAT_0545a407 <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a407 & 0x1f) & 1) != 0 &&
        (DAT_0545bbca != '\0')))) {
      DAT_0545bbc8 = '\0';
    }
    if (((DAT_0545bca4 != '\0') && (uVar19 = (ulong)DAT_0545a409, uVar19 < 0x23)) &&
       ((DAT_0545a40a <= (byte)PTR_DAT_04bc27f0[uVar19] &&
        (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a40a & 0x1f) & 1) != 0 &&
         (DAT_0545bce2 != '\0')))))) {
      DAT_0545bce0 = '\0';
    }
    if ((((DAT_0545bdbc != '\0') && (uVar19 = (ulong)DAT_0545a40c, uVar19 < 0x23)) &&
        (DAT_0545a40d <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a40d & 0x1f) & 1) != 0 &&
        (DAT_0545bdfa != '\0')))) {
      DAT_0545bdf8 = '\0';
    }
    if (((DAT_0545bed4 != '\0') && (uVar19 = (ulong)DAT_0545a40f, uVar19 < 0x23)) &&
       ((DAT_0545a410 <= (byte)PTR_DAT_04bc27f0[uVar19] &&
        (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a410 & 0x1f) & 1) != 0 &&
         (DAT_0545bf12 != '\0')))))) {
      DAT_0545bf10 = '\0';
    }
    if ((((DAT_0545bfec != '\0') && (uVar19 = (ulong)DAT_0545a412, uVar19 < 0x23)) &&
        (DAT_0545a413 <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a413 & 0x1f) & 1) != 0 &&
        (DAT_0545c02a != 0)))) {
      DAT_0545c028 = '\0';
    }
    if (((DAT_0545c104 != '\0') && (uVar19 = (ulong)DAT_0545a415, uVar19 < 0x23)) &&
       ((DAT_0545a416 <= (byte)PTR_DAT_04bc27f0[uVar19] &&
        (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a416 & 0x1f) & 1) != 0 &&
         (DAT_0545c142 != 0)))))) {
      DAT_0545c140 = '\0';
    }
    if ((((DAT_0545c21c != '\0') && (uVar19 = (ulong)DAT_0545a418, uVar19 < 0x23)) &&
        (DAT_0545a419 <= (byte)PTR_DAT_04bc27f0[uVar19])) &&
       (((*(uint *)(PTR_DAT_04bc2a20 + uVar19 * 4) >> (ulong)(DAT_0545a419 & 0x1f) & 1) != 0 &&
        (DAT_0545c25a != 0)))) {
      DAT_0545c258 = '\0';
    }
  }
  return;
}

