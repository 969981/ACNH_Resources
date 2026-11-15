
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_021f6520(void)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  undefined1 local_11c [4];
  undefined8 local_118;
  undefined8 *puStack_110;
  undefined8 local_f8 [17];
  undefined4 local_70;
  
  puVar4 = PTR_DAT_04bb46b0;
  uVar3 = *(ushort *)PTR_DAT_04bb6298;
  uVar5 = (uint)(short)uVar3;
  if ((DAT_05582b80 & 1) == 0) {
    if (uVar3 != 0xffff) {
      local_f8[0] = CONCAT44(local_f8[0]._4_4_,0x11);
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar5 * 8);
      if (0xff < uVar3) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar6 >> 0x11 & 1) == 0) {
        local_f8[0] = CONCAT44(local_f8[0]._4_4_,0x19);
        puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar3 * 8);
        if (0xff < uVar5) {
          puVar6 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar6 >> 0x19 & 1) == 0) goto LAB_021f77ec;
      }
LAB_021f65e4:
      local_f8[0] = CONCAT44(local_f8[0]._4_4_,0x19);
      puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar5 * 8);
      if (0xff < (uint)(int)(short)uVar3) {
        puVar6 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar6 >> 0x19 & 1) != 0) {
        local_70 = 0;
        local_f8[0xf] = 0;
        local_f8[0x10] = 0;
        local_f8[0xc] = 0;
        local_f8[0xd] = 0;
        local_f8[0xe] = 0;
        local_f8[10] = 0;
        local_f8[0xb] = 0;
        local_f8[8] = 0;
        local_f8[9] = 0;
        local_f8[6] = 0;
        local_f8[7] = 0;
        local_f8[4] = 0;
        local_f8[5] = 0;
        local_f8[2] = 0;
        local_f8[3] = 0;
        local_f8[0] = 0;
        local_f8[1] = 0;
        FUN_020fc590(local_f8,&LAB_0220cf1c);
        uVar9 = (ulong)DAT_0545a400;
        if ((((uVar9 < 0x23) && (DAT_0545a401 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
            (DAT_0545a401 < 0x20)) &&
           (uVar5 = 1 << (ulong)(DAT_0545a401 & 0x1f),
           (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a403;
        if (((uVar9 < 0x23) && (DAT_0545a404 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a404 < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a404 & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a406;
        if (((uVar9 < 0x23) && (DAT_0545a407 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a407 < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a407 & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a409;
        if ((((uVar9 < 0x23) && (DAT_0545a40a <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
            (DAT_0545a40a < 0x20)) &&
           (uVar5 = 1 << (ulong)(DAT_0545a40a & 0x1f),
           (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a40c;
        if (((uVar9 < 0x23) && (DAT_0545a40d <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a40d < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a40d & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a40f;
        if (((uVar9 < 0x23) && (DAT_0545a410 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a410 < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a410 & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a412;
        if ((((uVar9 < 0x23) && (DAT_0545a413 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
            (DAT_0545a413 < 0x20)) &&
           (uVar5 = 1 << (ulong)(DAT_0545a413 & 0x1f),
           (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a415;
        if (((uVar9 < 0x23) && (DAT_0545a416 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a416 < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a416 & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a418;
        if (((uVar9 < 0x23) && (DAT_0545a419 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a419 < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a419 & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a41b;
        if ((((uVar9 < 0x23) && (DAT_0545a41c <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
            (DAT_0545a41c < 0x20)) &&
           (uVar5 = 1 << (ulong)(DAT_0545a41c & 0x1f),
           (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a41e;
        if (((uVar9 < 0x23) && (DAT_0545a41f <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a41f < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a41f & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a421;
        if (((uVar9 < 0x23) && (DAT_0545a422 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a422 < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a422 & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a424;
        if ((((uVar9 < 0x23) && (DAT_0545a425 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
            (DAT_0545a425 < 0x20)) &&
           (uVar5 = 1 << (ulong)(DAT_0545a425 & 0x1f),
           (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a427;
        if (((uVar9 < 0x23) && (DAT_0545a428 <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a428 < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a428 & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a42a;
        if (((uVar9 < 0x23) && (DAT_0545a42b <= (byte)PTR_DAT_04bc27f0[uVar9])) &&
           ((DAT_0545a42b < 0x20 &&
            (uVar5 = 1 << (ulong)(DAT_0545a42b & 0x1f),
            (*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0)))) {
          *(uint *)((long)local_f8 + uVar9 * 4) =
               *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
        }
        uVar9 = (ulong)DAT_0545a42d;
        if ((uVar9 < 0x23) && (DAT_0545a42e <= (byte)PTR_DAT_04bc27f0[uVar9])) {
          uVar5 = 1 << (ulong)(DAT_0545a42e & 0x1f);
          if (((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) & uVar5) != 0) && (DAT_0545a42e < 0x20)) {
            *(uint *)((long)local_f8 + uVar9 * 4) =
                 *(uint *)((long)local_f8 + uVar9 * 4) & (uVar5 ^ 0xffffffff);
          }
        }
        local_118 = &PTR_LAB_04a771f8;
        puStack_110 = local_f8;
        FUN_0376ec70(&local_118);
        puVar4 = PTR_DAT_04bb39d8;
        lVar12 = 0;
        local_118 = (undefined **)CONCAT53(local_118._3_5_,0x80023);
        uVar5 = 0;
        do {
          uVar11 = *(uint *)((long)local_f8 + lVar12 * 4);
          uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
          uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
          uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
          uVar11 = uVar11 + (uVar11 >> 8);
          uVar11 = uVar11 + (uVar11 >> 0x10);
          uVar16 = uVar11 & 0x3f;
          if ((uVar11 & 0x3f) != 0) {
            uVar5 = uVar16 + uVar5;
            puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
            uVar11 = *puVar6 ^ *puVar6 << 0xb;
            uVar1 = puVar6[3];
            *puVar6 = puVar6[1];
            puVar6[1] = puVar6[2];
            uVar11 = uVar11 >> 8 ^ uVar1 >> 0x13 ^ uVar11 ^ uVar1;
            puVar6[2] = uVar1;
            puVar6[3] = uVar11;
            if ((uint)((ulong)uVar11 * (ulong)uVar5 >> 0x20) < uVar16) {
              uVar11 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar1 = uVar11 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar11 ^ DAT_05582b7c;
              uVar11 = *(uint *)((long)local_f8 + lVar12 * 4);
              DAT_05582b78 = DAT_05582b7c;
              if (uVar11 == 0) {
LAB_021f6c74:
                uVar19 = 0xffffffff;
              }
              else {
                uVar19 = 0xffffffff;
                uVar10 = uVar11 - (uVar11 >> 1 & 0x55555555);
                uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
                uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
                uVar10 = uVar10 + (uVar10 >> 8);
                uVar16 = (uint)((ulong)uVar1 * (ulong)uVar16 >> 0x20);
                if (uVar16 < (uVar10 + (uVar10 >> 0x10) & 0x3f)) {
                  iVar17 = uVar16 + 2;
                  do {
                    iVar17 = iVar17 + -1;
                    if (iVar17 < 2) {
                      uVar11 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
                      uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
                      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
                      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
                      uVar11 = uVar11 + (uVar11 >> 8);
                      uVar19 = uVar11 + (uVar11 >> 0x10) & 0x3f;
                      goto LAB_021f6c78;
                    }
                    uVar11 = uVar11 - 1 & uVar11;
                  } while (uVar11 != 0);
                  goto LAB_021f6c74;
                }
              }
LAB_021f6c78:
              DAT_05582b7c = uVar1;
              FUN_020fd218(&local_118,lVar12,uVar19);
            }
          }
          lVar12 = lVar12 + 1;
        } while (lVar12 != 0x23);
        uVar9 = (ulong)local_118 & 0xff;
        if (((0x22 < uVar9) || ((byte)PTR_DAT_04bc27f0[uVar9] < local_118._1_1_)) ||
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar9 * 4) >> (ulong)(local_118._1_1_ & 0x1f) & 1) == 0))
        {
          local_118 = (undefined **)(ulong)*(uint3 *)PTR_DAT_04bb9cf0;
        }
        local_11c._0_3_ = SUB83(local_118,0);
        goto LAB_021f7804;
      }
      goto LAB_021f6dc0;
    }
  }
  else {
    if (uVar3 != 0xffff) goto LAB_021f65e4;
LAB_021f6dc0:
    lVar12 = *(long *)PTR_DAT_04bb46b0;
    if (lVar12 != 0) {
      puVar13 = *(undefined8 **)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
        lVar7 = (**(code **)(*(long *)*puVar13 + 0x38))();
        lVar12 = 0;
        if (lVar7 != 0) {
          lVar12 = lVar7 + 0x70;
        }
      }
      else if ((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0)) {
        lVar12 = 0;
      }
      else {
        lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
      }
      lVar14 = *(long *)puVar4;
      lVar7 = lVar12 + 0xa8;
      if (lVar12 == 0) {
        lVar7 = 0;
      }
      if (lVar14 != 0) {
        puVar13 = *(undefined8 **)(lVar14 + 0x10);
        if ((*(byte *)(lVar14 + 0x453) & 1) == 0) {
          lVar8 = (**(code **)(*(long *)*puVar13 + 0x38))();
          lVar14 = 0;
          if (lVar8 != 0) {
            lVar14 = lVar8 + 0x70;
          }
        }
        else {
          if ((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0))
          goto LAB_021f77ec;
          lVar14 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
        }
        if ((lVar12 != 0) && (lVar14 != 0)) {
          if ((*(long **)(lVar7 + 0x28) == (long *)0x0) ||
             (puVar13 = (undefined8 *)**(long **)(lVar7 + 0x28), puVar13 == (undefined8 *)0x0)) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)*puVar13)();
            uVar9 = uVar9 & 0xffffffff;
          }
          local_f8[0xf] = 0;
          local_f8[0x10] = 0;
          local_f8[0xc] = 0;
          local_70 = 0;
          local_f8[1] = 0;
          local_f8[0] = 0;
          local_f8[0xd] = 0;
          local_f8[0xe] = 0;
          DAT_054597e8 = 0;
          _DAT_05459760 = 0;
          local_f8[10] = 0;
          local_f8[0xb] = 0;
          local_f8[8] = 0;
          local_f8[9] = 0;
          local_f8[6] = 0;
          local_f8[7] = 0;
          local_f8[4] = 0;
          local_f8[5] = 0;
          local_f8[2] = 0;
          local_f8[3] = 0;
          DAT_054597d8 = 0;
          DAT_054597e0 = 0;
          DAT_054597c8 = 0;
          DAT_054597d0 = 0;
          DAT_054597b8 = 0;
          DAT_054597c0 = 0;
          DAT_054597a8 = 0;
          DAT_054597b0 = 0;
          DAT_05459798 = 0;
          DAT_054597a0 = 0;
          DAT_05459788 = 0;
          DAT_05459790 = 0;
          DAT_05459778 = 0;
          DAT_05459780 = 0;
          DAT_05459768 = 0;
          DAT_05459770 = 0;
          pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
          uVar18 = (ulong)*pbVar15;
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0x13230];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0x13231], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0x26460];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0x26461], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0x39690];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0x39691], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0x4c8c0];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0x4c8c1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0x5faf0];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0x5faf1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0x72d20];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0x72d21], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0x85f50];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0x85f51], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0x99180];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0x99181], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0xac3b0];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0xac3b1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0xbf670];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0xbf671], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0xd28a0];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0xd28a1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0xe5ad0];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0xe5ad1], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
              pbVar15 = (byte *)(*(long *)(lVar7 + 0x10) + *(long *)(lVar7 + 8));
            }
          }
          uVar18 = (ulong)pbVar15[0xf8d00];
          if ((uVar18 < 0x23) && (bVar2 = pbVar15[0xf8d01], bVar2 <= (byte)PTR_DAT_04bc27f0[uVar18])
             ) {
            uVar5 = 1 << (ulong)(bVar2 & 0x1f);
            if (((*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0) && (bVar2 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
            }
          }
          if ((*(long **)(lVar14 + 0x28) == (long *)0x0) ||
             (puVar13 = (undefined8 *)**(long **)(lVar14 + 0x28), puVar13 == (undefined8 *)0x0)) {
            uVar5 = 1;
          }
          else {
            uVar5 = (**(code **)*puVar13)();
            uVar5 = uVar5 ^ 1;
          }
          lVar12 = *(long *)(lVar14 + 8);
          lVar8 = *(long *)(lVar14 + 0x10);
          uVar18 = FUN_027c5f10();
          if ((uVar18 & 1) == 0) {
            uVar3 = *(ushort *)(&LAB_00575b9c + lVar8 + lVar12);
            local_118 = (undefined **)CONCAT53(local_118._3_5_,0x80023);
            if ((byte)(uVar3 >> 8) < 0x23) {
              FUN_020fd218(&local_118,uVar3 >> 8,uVar3 & 0xff);
            }
          }
          else {
            local_118 = (undefined **)CONCAT53(local_118._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
          }
          uVar18 = (ulong)local_118;
          uVar3 = (ushort)local_118;
          if ((((uVar5 & 1) == 0) && (*(long *)(lVar14 + 0x28) != 0)) &&
             (puVar13 = *(undefined8 **)(*(long *)(lVar14 + 0x28) + 8), puVar13 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar13)();
          }
          if ((uVar3 & 0xff) < 0x23) {
            uVar18 = uVar18 & 0xff;
            if (((uVar3 >> 8 <= (ushort)(byte)PTR_DAT_04bc27f0[uVar18]) &&
                (uVar5 = 1 << (ulong)(uVar3 >> 8 & 0x1f),
                (*(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) & uVar5) != 0)) && (uVar3 >> 8 < 0x20)) {
              (&DAT_05459760)[uVar18] = (&DAT_05459760)[uVar18] | uVar5;
            }
          }
          FUN_020fc590(local_f8,&LAB_021f6390);
          lVar12 = 0;
          uVar5 = 0;
          local_11c._0_3_ = 0x80023;
          do {
            uVar19 = DAT_05582b78;
            uVar10 = DAT_05582b74;
            uVar16 = *(uint *)((long)local_f8 + lVar12 * 4);
            uVar11 = uVar16 - (uVar16 >> 1 & 0x55555555);
            uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
            uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
            uVar11 = uVar11 + (uVar11 >> 8);
            uVar11 = uVar11 + (uVar11 >> 0x10) & 0x3f;
            uVar1 = DAT_05582b7c;
            if (uVar11 != 0) {
              uVar5 = uVar11 + uVar5;
              uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              if ((uint)((ulong)uVar1 * (ulong)uVar5 >> 0x20) < uVar11) {
                uVar10 = uVar10 ^ uVar10 << 0xb;
                DAT_05582b70 = uVar19;
                DAT_05582b74 = DAT_05582b7c;
                DAT_05582b7c = uVar10 >> 8 ^ uVar1 >> 0x13 ^ uVar10 ^ uVar1;
                if (uVar16 == 0) {
LAB_021f7678:
                  uVar10 = 0xffffffff;
                }
                else {
                  uVar10 = 0xffffffff;
                  uVar19 = (uint)((ulong)DAT_05582b7c * (ulong)uVar11 >> 0x20);
                  if (uVar19 < uVar11) {
                    iVar17 = uVar19 + 2;
                    do {
                      iVar17 = iVar17 + -1;
                      if (iVar17 < 2) {
                        uVar11 = uVar16 - 1 & (uVar16 ^ 0xffffffff);
                        uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
                        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
                        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
                        uVar11 = uVar11 + (uVar11 >> 8);
                        uVar10 = uVar11 + (uVar11 >> 0x10) & 0x3f;
                        goto LAB_021f767c;
                      }
                      uVar16 = uVar16 - 1 & uVar16;
                    } while (uVar16 != 0);
                    goto LAB_021f7678;
                  }
                }
LAB_021f767c:
                DAT_05582b78 = uVar1;
                FUN_020fd218(local_11c,lVar12,uVar10);
                uVar1 = DAT_05582b7c;
              }
            }
            DAT_05582b7c = uVar1;
            lVar12 = lVar12 + 1;
          } while (lVar12 != 0x23);
          uVar18 = (ulong)local_11c[0];
          if ((uVar18 < 0x23) && (local_11c[1] <= (byte)PTR_DAT_04bc27f0[uVar18])) {
            uVar5 = *(uint *)(PTR_DAT_04bc2a20 + uVar18 * 4) >> (ulong)(local_11c[1] & 0x1f) & 1;
          }
          else {
            uVar5 = 0;
          }
          if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x28) != 0)) &&
             (puVar13 = *(undefined8 **)(*(long *)(lVar7 + 0x28) + 8), puVar13 != (undefined8 *)0x0)
             ) {
            (**(code **)*puVar13)();
          }
          if (uVar5 != 0) goto LAB_021f7804;
        }
      }
    }
  }
LAB_021f77ec:
  local_11c._0_3_ = *(undefined3 *)PTR_DAT_04bb9cf0;
LAB_021f7804:
  return (ulong)(uint3)local_11c._0_3_;
}

