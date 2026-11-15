
/* WARNING: Removing unreachable block (ram,0x021f8394) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_021f7830(void)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint3 uVar7;
  undefined1 uVar8;
  byte bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  byte *pbVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  char cVar22;
  uint *puVar23;
  uint *puVar24;
  ulong uVar25;
  int *piVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint local_23c;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined4 local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined *local_118;
  long lStack_110;
  ushort local_108;
  undefined8 local_100;
  uint local_f8 [35];
  uint3 local_6c [3];
  
  puVar6 = PTR_DAT_04bb46b0;
  if (((DAT_05582b80 & 1) != 0) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
    puVar18 = *(undefined8 **)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar18 + 0x38))();
      lVar17 = 0;
      if (lVar11 != 0) {
        lVar17 = lVar11 + 0x70;
      }
    }
    else if ((puVar18 == (undefined8 *)0x0) || ((long *)puVar18[0x26] == (long *)0x0)) {
      lVar17 = 0;
    }
    else {
      lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
    }
    lVar19 = *(long *)puVar6;
    lVar11 = lVar17 + 0xa8;
    if (lVar17 == 0) {
      lVar11 = 0;
    }
    if (lVar19 != 0) {
      puVar18 = *(undefined8 **)(lVar19 + 0x10);
      if ((*(byte *)(lVar19 + 0x453) & 1) == 0) {
        lVar12 = (**(code **)(*(long *)*puVar18 + 0x38))();
        lVar19 = 0;
        if (lVar12 != 0) {
          lVar19 = lVar12 + 0x70;
        }
      }
      else {
        if ((puVar18 == (undefined8 *)0x0) || ((long *)puVar18[0x26] == (long *)0x0))
        goto LAB_021f8fd8;
        lVar19 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
      }
      if ((lVar17 != 0) && (lVar19 != 0)) {
        if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
           (puVar18 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar18 == (undefined8 *)0x0)) {
          local_23c = 0;
        }
        else {
          local_23c = (**(code **)*puVar18)();
        }
        puVar5 = PTR_DAT_04bc2a20;
        puVar6 = PTR_DAT_04bc27f0;
        local_f8[0x22] = 0;
        local_f8[0x1e] = 0;
        local_f8[0x1f] = 0;
        local_f8[0x20] = 0;
        local_f8[0x21] = 0;
        DAT_054597e8 = 0;
        _DAT_05459760 = 0;
        local_f8[0x1a] = 0;
        local_f8[0x1b] = 0;
        local_f8[0x1c] = 0;
        local_f8[0x1d] = 0;
        local_f8[0x16] = 0;
        local_f8[0x17] = 0;
        local_f8[0x18] = 0;
        local_f8[0x19] = 0;
        local_f8[0x12] = 0;
        local_f8[0x13] = 0;
        local_f8[0x14] = 0;
        local_f8[0x15] = 0;
        local_f8[0xe] = 0;
        local_f8[0xf] = 0;
        local_f8[0x10] = 0;
        local_f8[0x11] = 0;
        local_f8[10] = 0;
        local_f8[0xb] = 0;
        local_f8[0xc] = 0;
        local_f8[0xd] = 0;
        local_f8[6] = 0;
        local_f8[7] = 0;
        local_f8[8] = 0;
        local_f8[9] = 0;
        local_f8[2] = 0;
        local_f8[3] = 0;
        local_f8[4] = 0;
        local_f8[5] = 0;
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
        pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
        uVar20 = (ulong)*pbVar14;
        local_f8[0] = 0;
        local_f8[1] = 0;
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[1], bVar9 <= (byte)PTR_DAT_04bc27f0[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0x13230];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0x13231], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0x26460];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0x26461], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0x39690];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0x39691], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0x4c8c0];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0x4c8c1], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0x5faf0];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0x5faf1], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0x72d20];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0x72d21], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0x85f50];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0x85f51], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0x99180];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0x99181], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0xac3b0];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0xac3b1], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0xbf670];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0xbf671], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0xd28a0];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0xd28a1], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0xe5ad0];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0xe5ad1], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
          }
        }
        uVar20 = (ulong)pbVar14[0xf8d00];
        if ((uVar20 < 0x23) && (bVar9 = pbVar14[0xf8d01], bVar9 <= (byte)puVar6[uVar20])) {
          uVar27 = 1 << (ulong)(bVar9 & 0x1f);
          if (((*(uint *)(puVar5 + uVar20 * 4) & uVar27) != 0) && (bVar9 < 0x20)) {
            (&DAT_05459760)[uVar20] = (&DAT_05459760)[uVar20] | uVar27;
          }
        }
        if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
           (puVar18 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar18 == (undefined8 *)0x0)) {
          uVar20 = 0;
        }
        else {
          uVar20 = (**(code **)*puVar18)();
          uVar20 = uVar20 & 0xffffffff;
        }
        lVar17 = *(long *)(lVar19 + 8);
        lVar12 = *(long *)(lVar19 + 0x10);
        uVar13 = FUN_027c5f10();
        if ((uVar13 & 1) == 0) {
          uVar2 = *(ushort *)(&LAB_00575b9c + lVar12 + lVar17);
          local_1a8 = (undefined *)CONCAT53(local_1a8._3_5_,0x80023);
          if ((byte)(uVar2 >> 8) < 0x23) {
            FUN_020fd218(&local_1a8,uVar2 >> 8,uVar2 & 0xff);
          }
        }
        else {
          local_1a8 = (undefined *)CONCAT53(local_1a8._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
        }
        uVar13 = (ulong)local_1a8;
        uVar2 = (ushort)local_1a8;
        if ((((uVar20 & 1) != 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
           (puVar18 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar18 != (undefined8 *)0x0))
        {
          (**(code **)*puVar18)();
        }
        if ((uVar2 & 0xff) < 0x23) {
          uVar13 = uVar13 & 0xff;
          if (((uVar2 >> 8 <= (ushort)(byte)puVar6[uVar13]) &&
              (uVar27 = 1 << (ulong)(uVar2 >> 8 & 0x1f),
              (*(uint *)(puVar5 + uVar13 * 4) & uVar27) != 0)) && (uVar2 >> 8 < 0x20)) {
            (&DAT_05459760)[uVar13] = (&DAT_05459760)[uVar13] | uVar27;
          }
        }
        puVar6 = PTR_DAT_04bb40b8;
        lVar17 = 0;
        local_100 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        do {
          if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
             (puVar18 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar18 == (undefined8 *)0x0)) {
            uVar20 = 0;
          }
          else {
            uVar20 = (**(code **)*puVar18)();
            uVar20 = uVar20 & 0xffffffff;
          }
          lVar19 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8) + lVar17 * 0xe8;
          uVar13 = nn::time::IsValidDate
                             ((uint)*(ushort *)(lVar19 + 0x1cb6bc),
                              (uint)*(byte *)(lVar19 + 0x1cb6be),(uint)*(byte *)(lVar19 + 0x1cb6bf))
          ;
          if (((((uVar13 & 1) != 0) &&
               (local_1a8 = (undefined *)FUN_0272eca4((ushort *)(lVar19 + 0x1cb6bc),1),
               ((ulong)local_1a8 & 0xffff) != 0)) &&
              (iVar10 = FUN_00a82474(&local_100,&local_1a8), iVar10 < 8)) &&
             (lVar19 = *(long *)PTR_DAT_04bb4138, lVar19 != 0)) {
            uVar27 = *(uint *)(lVar19 + 0x1c0);
            uVar13 = (ulong)uVar27;
            if ((0 < (int)uVar27) ||
               (((*(long *)(lVar19 + 0xb0) != 0 &&
                 (puVar23 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar23 != (uint *)0x0)) &&
                (uVar28 = *puVar23, uVar13 = (ulong)uVar28, 0 < (int)uVar28)))) {
              uVar15 = 0;
              cVar22 = *PTR_DAT_04bb40b0;
              do {
                if ((int)uVar27 < 1) {
                  if ((((*(long *)(lVar19 + 0xb0) != 0) &&
                       (puVar23 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar23 != (uint *)0x0))
                      && ((*(uint *)(lVar19 + 200) <= uVar15 ||
                          (*(char *)(*(long *)(lVar19 + 0xd0) + uVar15) != '\0')))) &&
                     (((uVar15 < *puVar23 && (puVar23[1] != 0)) && ((ushort)puVar23[2] != 0)))) {
                    iVar10 = 0xc;
                    if (*(char *)((long)puVar23 + 10) != '\0') {
                      iVar10 = 0x1c;
                    }
                    puVar23 = (uint *)((ulong)(puVar23[1] * (int)uVar15 +
                                               (uint)(ushort)puVar23[2] * 8 + iVar10) +
                                      (long)puVar23);
                    goto joined_r0x021f8214;
                  }
                }
                else if (uVar15 < uVar27) {
                  uVar25 = uVar15 & 0xffffffff;
                  if (*(uint *)(lVar19 + 0x1b0) <= uVar15) {
                    uVar25 = 0;
                  }
                  puVar23 = *(uint **)(*(long *)(lVar19 + 0x1b8) + uVar25 * 8);
joined_r0x021f8214:
                  if (puVar23 != (uint *)0x0) {
                    if (*puVar23 != 0) {
                      while( true ) {
                        puVar5 = PTR_DAT_04bb40b0;
                        if (cVar22 == '\0') {
                          cVar22 = '\x01';
                          *(undefined8 *)puVar6 = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                          *(undefined4 *)(puVar6 + 0xa0) = 0xffffffff;
                          *puVar5 = 1;
                          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x58) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x60) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x68) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x70) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x78) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x80) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x88) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x90) = 0xffffffffffffffff;
                          *(undefined8 *)(puVar6 + 0x98) = 0xffffffffffffffff;
                          uVar28 = *puVar23;
                        }
                        else {
                          uVar28 = *(uint *)(puVar6 + 0x30);
                          if (-1 < (int)uVar28) {
                            uVar25 = 0;
                            if ((ushort *)((ulong)uVar28 + (long)puVar23) != (ushort *)0x0) {
                              uVar25 = (ulong)*(ushort *)((ulong)uVar28 + (long)puVar23);
                            }
                            goto LAB_021f81a4;
                          }
                          if (uVar28 != 0xffffffff) break;
                          uVar28 = *puVar23;
                        }
                        if ((uVar28 == 0) || (puVar24 = (uint *)(ulong)uVar28, puVar23 == puVar24))
                        break;
                        lVar12 = 0xc;
                        if (*(char *)((long)puVar23 + (10 - (long)puVar24)) != '\0') {
                          lVar12 = 0x1c;
                        }
                        lVar12 = (long)puVar23 + (lVar12 - (long)puVar24);
                        if (lVar12 == 0) break;
                        uVar25 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar24));
                        *(undefined4 *)(puVar6 + 0x30) = 0xfffffffe;
                        if (uVar25 == 0) break;
                        piVar26 = (int *)(lVar12 + 4);
                        while (piVar26[-1] != 0x504428b5) {
                          piVar26 = piVar26 + 2;
                          uVar25 = uVar25 - 1;
                          if (uVar25 == 0) goto LAB_021f81a0;
                        }
                        iVar10 = 0;
                        if (*piVar26 != -1) {
                          iVar10 = *piVar26;
                        }
                        *(int *)(puVar6 + 0x30) = iVar10;
                        if (*puVar23 == 0) break;
                      }
                    }
LAB_021f81a0:
                    uVar25 = 0;
LAB_021f81a4:
                    if (lVar17 + 1U == uVar25) {
                      local_238 = CONCAT53(local_238._3_5_,0x80023);
                      FUN_020fcff0(&local_238);
                      uVar13 = local_238 & 0xff;
                      if ((uVar13 < 0x23) && (local_238._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar13])) {
                        uVar27 = 1 << (ulong)(local_238._1_1_ & 0x1f);
                        if (((*(uint *)(PTR_DAT_04bc2a20 + uVar13 * 4) & uVar27) != 0) &&
                           (local_238._1_1_ < 0x20)) {
                          (&DAT_05459760)[uVar13] = (&DAT_05459760)[uVar13] | uVar27;
                        }
                      }
                      break;
                    }
                  }
                }
                uVar15 = uVar15 + 1;
              } while (uVar15 != uVar13);
            }
          }
          if ((((uVar20 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
             (puVar18 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar18 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar18)();
          }
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x1a4);
        FUN_020fc590(local_f8,&LAB_021f6390);
        local_1a8 = PTR_DAT_04bb2020 + 0x10;
        local_1a0 = "CampFirstCamperVisit";
        uVar20 = FUN_0273f0a0(&local_1a8);
        if ((uVar20 & 1) == 0) {
          uVar27 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
          DAT_05582b70 = DAT_05582b74;
          DAT_05582b74 = DAT_05582b78;
          uVar27 = uVar27 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar27 ^ DAT_05582b7c;
          DAT_05582b78 = DAT_05582b7c;
          DAT_05582b7c = uVar27;
          if ((uVar27 & 1) != 0) {
            uVar20 = 0;
            local_120 = 0;
            local_1a8 = (undefined *)0x0;
            local_130 = 0;
            uStack_128 = 0;
            local_140 = 0;
            uStack_138 = 0;
            local_150 = 0;
            uStack_148 = 0;
            local_160 = 0;
            uStack_158 = 0;
            local_170 = 0;
            uStack_168 = 0;
            local_180 = 0;
            uStack_178 = 0;
            local_190 = 0;
            uStack_188 = 0;
            local_1a0 = (char *)0x0;
            uStack_198 = 0;
            for (lVar17 = 0;
                *(undefined4 *)
                 ((long)&local_1a8 + (-(uVar20 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2)) =
                     *(undefined4 *)((long)local_f8 + lVar17), lVar17 != 0x88; lVar17 = lVar17 + 8)
            {
              lVar19 = uVar20 << 0x20;
              uVar20 = (ulong)((int)uVar20 + 2);
              *(undefined4 *)((long)&local_1a8 + (lVar19 + 0x100000000 >> 0x1e)) =
                   *(undefined4 *)((long)local_f8 + lVar17 + 4);
            }
            pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            uVar20 = (ulong)*pbVar14;
            if (((uVar20 < 0x23) && (pbVar14[1] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[1] & 0x1f) & 1) != 0))
            {
              uVar8 = FUN_020fd7d8();
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0x13230];
            if (((uVar20 < 0x23) && (pbVar14[0x13231] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0x13231] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8(pbVar14 + 0x13230);
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0x26460];
            if (((uVar20 < 0x23) && (pbVar14[0x26461] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0x26461] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8(pbVar14 + 0x26460);
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0x39690];
            if (((uVar20 < 0x23) && (pbVar14[0x39691] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0x39691] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8(pbVar14 + 0x39690);
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0x4c8c0];
            if (((uVar20 < 0x23) && (pbVar14[0x4c8c1] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0x4c8c1] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8(pbVar14 + 0x4c8c0);
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0x5faf0];
            if (((uVar20 < 0x23) && (pbVar14[0x5faf1] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0x5faf1] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8(pbVar14 + 0x5faf0);
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0x72d20];
            if (((uVar20 < 0x23) && (pbVar14[0x72d21] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0x72d21] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8(pbVar14 + 0x72d20);
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0x85f50];
            if (((uVar20 < 0x23) && (pbVar14[0x85f51] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0x85f51] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8(pbVar14 + 0x85f50);
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0x99180];
            if (((uVar20 < 0x23) && (pbVar14[0x99181] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0x99181] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8(pbVar14 + 0x99180);
              FUN_020fcca0(local_f8,uVar8);
              pbVar14 = (byte *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
            }
            uVar20 = (ulong)pbVar14[0xac3b0];
            if (((uVar20 < 0x23) && (pbVar14[0xac3b1] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar14[0xac3b1] & 0x1f) & 1)
                != 0)) {
              uVar8 = FUN_020fd7d8();
              FUN_020fcca0(local_f8,uVar8);
            }
            uVar27 = local_f8[0] - (local_f8[0] >> 1 & 0x55555555);
            uVar28 = local_f8[1] - (local_f8[1] >> 1 & 0x55555555);
            uVar1 = local_f8[2] - (local_f8[2] >> 1 & 0x55555555);
            uVar16 = local_f8[3] - (local_f8[3] >> 1 & 0x55555555);
            uVar27 = (uVar27 >> 2 & 0x33333333) + (uVar27 & 0x33333333);
            uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
            uVar29 = uVar27 + (uVar27 >> 4) & 0xf0f0f0f;
            uVar27 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
            uVar29 = uVar29 + (uVar29 >> 8);
            uVar1 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
            uVar28 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
            uVar1 = uVar1 + (uVar1 >> 8);
            uVar27 = uVar27 + (uVar27 >> 4) & 0xf0f0f0f;
            uVar27 = uVar27 + (uVar27 >> 8);
            uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
            uVar28 = uVar28 + (uVar28 >> 8);
            uVar16 = local_f8[4] - (local_f8[4] >> 1 & 0x55555555);
            uVar16 = (uVar16 >> 2 & 0x33333333) + (uVar16 & 0x33333333);
            uVar21 = local_f8[5] - (local_f8[5] >> 1 & 0x55555555);
            uVar16 = uVar16 + (uVar16 >> 4) & 0xf0f0f0f;
            uVar16 = uVar16 + (uVar16 >> 8);
            uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
            uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
            uVar21 = uVar21 + (uVar21 >> 8);
            uVar3 = local_f8[6] - (local_f8[6] >> 1 & 0x55555555);
            uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
            uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
            uVar3 = uVar3 + (uVar3 >> 8);
            uVar4 = local_f8[7] - (local_f8[7] >> 1 & 0x55555555);
            uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
            uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
            uVar4 = uVar4 + (uVar4 >> 8);
            if ((uVar4 + (uVar4 >> 0x10) & 0x3f) +
                (uVar3 + (uVar3 >> 0x10) & 0x3f) +
                (uVar21 + (uVar21 >> 0x10) & 0x3f) + (uVar16 + (uVar16 >> 0x10) & 0x3f) +
                (uVar28 + (uVar28 >> 0x10) & 0x3f) + (uVar27 + (uVar27 >> 0x10) & 0x3f) +
                (uVar29 + (uVar29 >> 0x10) & 0x3f) + (uVar1 + (uVar1 >> 0x10) & 0x3f) == 0) {
              uVar20 = 0;
              local_f8[0x22] = 0;
              local_f8[0] = 0;
              local_f8[1] = 0;
              local_f8[0x1e] = 0;
              local_f8[0x1f] = 0;
              local_f8[0x20] = 0;
              local_f8[0x21] = 0;
              local_f8[0x1a] = 0;
              local_f8[0x1b] = 0;
              local_f8[0x1c] = 0;
              local_f8[0x1d] = 0;
              local_f8[0x16] = 0;
              local_f8[0x17] = 0;
              local_f8[0x18] = 0;
              local_f8[0x19] = 0;
              local_f8[0x12] = 0;
              local_f8[0x13] = 0;
              local_f8[0x14] = 0;
              local_f8[0x15] = 0;
              local_f8[0xe] = 0;
              local_f8[0xf] = 0;
              local_f8[0x10] = 0;
              local_f8[0x11] = 0;
              local_f8[10] = 0;
              local_f8[0xb] = 0;
              local_f8[0xc] = 0;
              local_f8[0xd] = 0;
              local_f8[6] = 0;
              local_f8[7] = 0;
              local_f8[8] = 0;
              local_f8[9] = 0;
              local_f8[2] = 0;
              local_f8[3] = 0;
              local_f8[4] = 0;
              local_f8[5] = 0;
              for (lVar17 = 0;
                  *(undefined4 *)
                   ((long)local_f8 + (-(uVar20 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2)) =
                       *(undefined4 *)((long)&local_1a8 + lVar17), lVar17 != 0x88;
                  lVar17 = lVar17 + 8) {
                lVar19 = uVar20 << 0x20;
                uVar20 = (ulong)((int)uVar20 + 2);
                *(undefined4 *)((long)local_f8 + (lVar19 + 0x100000000 >> 0x1e)) =
                     *(undefined4 *)((long)&local_1a8 + lVar17 + 4);
              }
            }
          }
        }
        else {
          local_1a8 = (undefined *)((ulong)local_1a8 & 0xffffffff00000000);
          FUN_020fcca0(local_f8);
          local_1a8._0_4_ = 1;
          FUN_020fcca0(local_f8);
          local_1a8._0_4_ = 2;
          FUN_020fcca0(local_f8);
          local_1a8._0_4_ = 4;
          FUN_020fcca0(local_f8);
          local_1a8._0_4_ = 5;
          FUN_020fcca0(local_f8);
          local_1a8._0_4_ = 6;
          FUN_020fcca0(local_f8);
          local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,7);
          FUN_020fcca0(local_f8);
        }
        memcpy(&local_1a8,local_f8,0x8c);
        local_118 = PTR_DAT_04bc35d0 + 0x10;
        local_108 = 1;
        lStack_110 = lVar11;
        if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
           (puVar18 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar18 == (undefined8 *)0x0)) {
          bVar9 = 0;
        }
        else {
          bVar9 = (**(code **)*puVar18)();
        }
        local_1b0 = 0;
        local_1b8 = 0;
        local_108 = CONCAT11(bVar9,(undefined1)local_108) & 0x1ff;
        uVar20 = 0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1d8 = 0;
        local_1d0 = 0;
        local_118 = PTR_DAT_04bb4dc8 + 0x10;
        local_1e8 = 0;
        local_1e0 = 0;
        local_1f8 = 0;
        local_1f0 = 0;
        local_208 = 0;
        local_200 = 0;
        local_218 = 0;
        local_210 = 0;
        local_228 = 0;
        local_220 = 0;
        local_238 = 0;
        local_230 = 0;
        for (lVar17 = 0;
            *(undefined4 *)
             ((long)&local_238 + (-(uVar20 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2)) =
                 *(undefined4 *)((long)&local_1a8 + lVar17), lVar17 != 0x88; lVar17 = lVar17 + 8) {
          lVar19 = uVar20 << 0x20;
          uVar20 = (ulong)((int)uVar20 + 2);
          *(undefined4 *)((long)&local_238 + (lVar19 + 0x100000000 >> 0x1e)) =
               *(undefined4 *)((long)&local_1a8 + lVar17 + 4);
        }
        lVar19 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
        for (lVar17 = 0;
            *(uint *)((long)&local_238 + lVar17) =
                 *(uint *)((long)&local_238 + lVar17) &
                 (*(uint *)(lVar19 + 0xbf5e0 + lVar17) ^ 0xffffffff), lVar17 != 0x88;
            lVar17 = lVar17 + 8) {
          *(uint *)((long)&local_238 + lVar17 + 4) =
               *(uint *)((long)&local_238 + lVar17 + 4) &
               (*(uint *)(lVar19 + 0xbf5e4 + lVar17) ^ 0xffffffff);
        }
        lVar17 = 0;
        uVar27 = 0;
        local_6c[0] = 0x80023;
        do {
          uVar21 = DAT_05582b78;
          uVar16 = DAT_05582b74;
          uVar29 = *(uint *)((long)&local_238 + lVar17 * 4);
          uVar28 = uVar29 - (uVar29 >> 1 & 0x55555555);
          uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
          uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
          uVar28 = uVar28 + (uVar28 >> 8);
          uVar28 = uVar28 + (uVar28 >> 0x10) & 0x3f;
          uVar1 = DAT_05582b7c;
          if (uVar28 != 0) {
            uVar27 = uVar28 + uVar27;
            uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
            DAT_05582b78 = DAT_05582b7c;
            if ((uint)((ulong)uVar1 * (ulong)uVar27 >> 0x20) < uVar28) {
              uVar16 = uVar16 ^ uVar16 << 0xb;
              DAT_05582b70 = uVar21;
              DAT_05582b74 = DAT_05582b7c;
              DAT_05582b7c = uVar16 >> 8 ^ uVar1 >> 0x13 ^ uVar16 ^ uVar1;
              if (uVar29 == 0) {
LAB_021f8b6c:
                uVar16 = 0xffffffff;
              }
              else {
                uVar16 = 0xffffffff;
                uVar21 = (uint)((ulong)DAT_05582b7c * (ulong)uVar28 >> 0x20);
                if (uVar21 < uVar28) {
                  iVar10 = uVar21 + 2;
                  do {
                    iVar10 = iVar10 + -1;
                    if (iVar10 < 2) {
                      uVar28 = uVar29 - 1 & (uVar29 ^ 0xffffffff);
                      uVar28 = uVar28 - (uVar28 >> 1 & 0x55555555);
                      uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
                      uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
                      uVar28 = uVar28 + (uVar28 >> 8);
                      uVar16 = uVar28 + (uVar28 >> 0x10) & 0x3f;
                      goto LAB_021f8b70;
                    }
                    uVar29 = uVar29 - 1 & uVar29;
                  } while (uVar29 != 0);
                  goto LAB_021f8b6c;
                }
              }
LAB_021f8b70:
              DAT_05582b78 = uVar1;
              FUN_020fd218(local_6c,lVar17,uVar16);
              uVar1 = DAT_05582b7c;
            }
          }
          DAT_05582b7c = uVar1;
          uVar7 = local_6c[0];
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x23);
        uVar27 = local_6c[0] & 0xff;
        if (uVar27 < 0x23) {
          uVar28 = (uint)((ushort)local_6c[0] >> 8);
          uVar20 = (ulong)(uint)local_6c[0] & 0xff;
          if (((ushort)local_6c[0] >> 8 <= (ushort)(byte)PTR_DAT_04bc27f0[uVar20]) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(local_6c[0] >> 8 & 0x1f) & 1) !=
              0)) {
            local_118 = PTR_DAT_04bc35d0 + 0x10;
            if (((bVar9 & 1) != 0) &&
               ((*(long *)(lVar11 + 0x28) != 0 &&
                (puVar18 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8),
                puVar18 != (undefined8 *)0x0)))) {
              (**(code **)*puVar18)();
            }
            uVar29 = (uint)(uVar7 >> 0x10);
            if ((((local_23c & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
               (puVar18 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8),
               puVar18 != (undefined8 *)0x0)) {
              (**(code **)*puVar18)();
            }
            goto LAB_021f8fec;
          }
        }
        uVar20 = 0;
        local_1b0 = 0;
        local_238 = 0;
        local_1c0 = 0;
        local_1b8 = 0;
        local_1d0 = 0;
        local_1c8 = 0;
        local_1e0 = 0;
        local_1d8 = 0;
        local_1f0 = 0;
        local_1e8 = 0;
        local_200 = 0;
        local_1f8 = 0;
        local_210 = 0;
        local_208 = 0;
        local_220 = 0;
        local_218 = 0;
        local_230 = 0;
        local_228 = 0;
        for (lVar17 = 0;
            *(undefined4 *)
             ((long)&local_238 + (-(uVar20 >> 0x1f) & 0xfffffffc00000000 | uVar20 << 2)) =
                 *(undefined4 *)((long)&local_1a8 + lVar17), lVar17 != 0x88; lVar17 = lVar17 + 8) {
          lVar19 = uVar20 << 0x20;
          uVar20 = (ulong)((int)uVar20 + 2);
          *(undefined4 *)((long)&local_238 + (lVar19 + 0x100000000 >> 0x1e)) =
               *(undefined4 *)((long)&local_1a8 + lVar17 + 4);
        }
        lVar19 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
        for (lVar17 = 0;
            *(uint *)((long)&local_238 + lVar17) =
                 *(uint *)((long)&local_238 + lVar17) & *(uint *)(lVar19 + 0xbf5e0 + lVar17),
            lVar17 != 0x88; lVar17 = lVar17 + 8) {
          *(uint *)((long)&local_238 + lVar17 + 4) =
               *(uint *)((long)&local_238 + lVar17 + 4) & *(uint *)(lVar19 + 0xbf5e4 + lVar17);
        }
        lVar17 = 0;
        uVar27 = 0;
        local_6c[0] = 0x80023;
        do {
          uVar21 = DAT_05582b78;
          uVar16 = DAT_05582b74;
          uVar29 = *(uint *)((long)&local_238 + lVar17 * 4);
          uVar28 = uVar29 - (uVar29 >> 1 & 0x55555555);
          uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
          uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
          uVar28 = uVar28 + (uVar28 >> 8);
          uVar28 = uVar28 + (uVar28 >> 0x10) & 0x3f;
          uVar1 = DAT_05582b7c;
          if (uVar28 != 0) {
            uVar27 = uVar28 + uVar27;
            uVar1 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
            DAT_05582b70 = DAT_05582b74;
            DAT_05582b74 = DAT_05582b78;
            uVar1 = uVar1 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar1 ^ DAT_05582b7c;
            DAT_05582b78 = DAT_05582b7c;
            if ((uint)((ulong)uVar1 * (ulong)uVar27 >> 0x20) < uVar28) {
              uVar16 = uVar16 ^ uVar16 << 0xb;
              DAT_05582b70 = uVar21;
              DAT_05582b74 = DAT_05582b7c;
              DAT_05582b7c = uVar16 >> 8 ^ uVar1 >> 0x13 ^ uVar16 ^ uVar1;
              if (uVar29 == 0) {
LAB_021f8e18:
                uVar16 = 0xffffffff;
              }
              else {
                uVar16 = 0xffffffff;
                uVar21 = (uint)((ulong)DAT_05582b7c * (ulong)uVar28 >> 0x20);
                if (uVar21 < uVar28) {
                  iVar10 = uVar21 + 2;
                  do {
                    iVar10 = iVar10 + -1;
                    if (iVar10 < 2) {
                      uVar28 = uVar29 - 1 & (uVar29 ^ 0xffffffff);
                      uVar28 = uVar28 - (uVar28 >> 1 & 0x55555555);
                      uVar28 = (uVar28 >> 2 & 0x33333333) + (uVar28 & 0x33333333);
                      uVar28 = uVar28 + (uVar28 >> 4) & 0xf0f0f0f;
                      uVar28 = uVar28 + (uVar28 >> 8);
                      uVar16 = uVar28 + (uVar28 >> 0x10) & 0x3f;
                      goto LAB_021f8e1c;
                    }
                    uVar29 = uVar29 - 1 & uVar29;
                  } while (uVar29 != 0);
                  goto LAB_021f8e18;
                }
              }
LAB_021f8e1c:
              DAT_05582b78 = uVar1;
              FUN_020fd218(local_6c,lVar17,uVar16);
              uVar1 = DAT_05582b7c;
            }
          }
          DAT_05582b7c = uVar1;
          uVar7 = local_6c[0];
          lVar17 = lVar17 + 1;
        } while (lVar17 != 0x23);
        uVar28 = (uint)((ushort)local_6c[0] >> 8);
        uVar27 = local_6c[0] & 0xff;
        if ((uVar27 < 0x23) &&
           (uVar20 = (ulong)(uint)local_6c[0] & 0xff,
           (ushort)local_6c[0] >> 8 <= (ushort)(byte)PTR_DAT_04bc27f0[uVar20])) {
          uVar29 = *(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(local_6c[0] >> 8 & 0x1f) & 1;
        }
        else {
          uVar29 = 0;
        }
        local_118 = PTR_DAT_04bc35d0 + 0x10;
        if ((((bVar9 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
           (puVar18 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar18 != (undefined8 *)0x0))
        {
          (**(code **)*puVar18)();
        }
        if ((((local_23c & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
           (puVar18 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar18 != (undefined8 *)0x0))
        {
          (**(code **)*puVar18)();
        }
        if (uVar29 != 0) {
          uVar29 = (uint)(uVar7 >> 0x10);
          goto LAB_021f8fec;
        }
      }
    }
  }
LAB_021f8fd8:
  uVar27 = (uint)(byte)*PTR_DAT_04bb9cf0;
  uVar28 = (uint)(byte)PTR_DAT_04bb9cf0[1];
  uVar29 = (uint)(byte)PTR_DAT_04bb9cf0[2];
LAB_021f8fec:
  return uVar28 << 8 | uVar29 << 0x10 | uVar27;
}

