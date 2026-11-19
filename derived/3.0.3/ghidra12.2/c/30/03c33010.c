
ulong FUN_03c33010(undefined1 *param_1,ulong param_2,ushort *param_3,ulong param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  ulong *puVar21;
  long *plVar22;
  undefined1 *puVar23;
  uint uVar24;
  ulong uVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined1 *puVar28;
  uint uVar29;
  long lVar30;
  undefined1 *puVar31;
  uint uVar32;
  ulong uVar33;
  undefined1 *puVar34;
  undefined1 *puVar35;
  undefined1 *puVar36;
  ulong *puVar37;
  ulong *puVar38;
  ulong uVar39;
  long local_108;
  uint local_100;
  long *local_f8;
  long *local_f0;
  long *local_e8;
  ulong local_e0;
  uint local_d8;
  ulong *local_d0;
  ulong *local_c8;
  ulong *local_c0;
  ulong local_b8;
  uint local_b0;
  ulong *local_a8;
  ulong *local_a0;
  ulong *local_98;
  ulong local_90;
  uint local_88;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  
  if (param_4 < 10) {
    return 0xffffffffffffffec;
  }
  uVar11 = *param_3;
  uVar33 = (ulong)uVar11;
  uVar12 = param_3[1];
  uVar27 = (ulong)uVar12;
  uVar13 = param_3[2];
  uVar25 = (ulong)uVar13;
  uVar20 = uVar33 + uVar27 + uVar25 + 6;
  if (param_4 < uVar20) {
    return 0xffffffffffffffec;
  }
  if (uVar11 == 0) {
    return 0xffffffffffffffb8;
  }
  uVar14 = *(ushort *)(param_5 + 2);
  local_78 = (ulong *)(param_3 + 3);
  local_a0 = (ulong *)((long)local_78 + uVar33);
  local_70 = (ulong *)(param_3 + 7);
  if (uVar11 < 8) {
    local_90 = (ulong)(byte)*local_78;
    switch((uint)uVar11) {
    case 7:
      local_90 = local_90 | (ulong)(byte)param_3[6] << 0x30;
    case 6:
      local_90 = local_90 + ((ulong)*(byte *)((long)param_3 + 0xb) << 0x28);
    case 5:
      local_90 = local_90 + ((ulong)(byte)param_3[5] << 0x20);
    case 4:
      local_90 = local_90 + (ulong)*(byte *)((long)param_3 + 9) * 0x1000000;
    case 3:
      local_90 = local_90 + (ulong)(byte)param_3[4] * 0x10000;
    case 2:
      local_90 = local_90 + (ulong)*(byte *)((long)param_3 + 7) * 0x100;
    }
    uVar24 = (uint)*(byte *)((long)local_78 + (uVar33 - 1));
    if (uVar24 == 0) {
      return 0xffffffffffffffec;
    }
    local_88 = (int)LZCOUNT(uVar24) + (uint)uVar11 * -8 + 0x29;
    local_80 = local_78;
joined_r0x03c33144:
    if (uVar12 != 0) {
      local_c8 = (ulong *)((long)local_a0 + uVar27);
      local_98 = local_a0 + 1;
      uVar24 = (uint)uVar12;
      if (uVar24 < 8) {
        local_b8 = (ulong)(byte)*local_a0;
        switch(uVar24) {
        case 7:
          local_b8 = local_b8 | (ulong)*(byte *)((long)local_a0 + 6) << 0x30;
        case 6:
          local_b8 = local_b8 + ((ulong)*(byte *)((long)local_a0 + 5) << 0x28);
        case 5:
          local_b8 = local_b8 + ((ulong)*(byte *)((long)local_a0 + 4) << 0x20);
        case 4:
          local_b8 = local_b8 + (ulong)*(byte *)((long)local_a0 + 3) * 0x1000000;
        case 3:
          local_b8 = local_b8 + (ulong)*(byte *)((long)local_a0 + 2) * 0x10000;
        case 2:
          local_b8 = local_b8 + (ulong)*(byte *)((long)local_a0 + 1) * 0x100;
        }
        uVar29 = (uint)*(byte *)((long)local_a0 + (uVar27 - 1));
        if (uVar29 == 0) {
          return 0xffffffffffffffec;
        }
        local_b0 = (int)LZCOUNT(uVar29) + uVar24 * -8 + 0x29;
        local_a8 = local_a0;
      }
      else {
        local_b8 = local_c8[-1];
        if (local_b8 >> 0x38 == 0) goto LAB_03c33230;
        local_b0 = (int)LZCOUNT((uint)(byte)(local_b8 >> 0x38)) - 0x17;
        local_a8 = local_c8 + -1;
      }
      if (uVar13 != 0) {
        local_c0 = local_c8 + 1;
        if (uVar13 < 8) {
          local_e0 = (ulong)(byte)*local_c8;
          switch((uint)uVar13) {
          case 7:
            local_e0 = local_e0 | (ulong)*(byte *)((long)local_c8 + 6) << 0x30;
          case 6:
            local_e0 = local_e0 + ((ulong)*(byte *)((long)local_c8 + 5) << 0x28);
          case 5:
            local_e0 = local_e0 + ((ulong)*(byte *)((long)local_c8 + 4) << 0x20);
          case 4:
            local_e0 = local_e0 + (ulong)*(byte *)((long)local_c8 + 3) * 0x1000000;
          case 3:
            local_e0 = local_e0 + (ulong)*(byte *)((long)local_c8 + 2) * 0x10000;
          case 2:
            local_e0 = local_e0 + (ulong)*(byte *)((long)local_c8 + 1) * 0x100;
          }
          uVar24 = (uint)*(byte *)((long)local_c8 + (uVar25 - 1));
          if (uVar24 == 0) {
            return 0xffffffffffffffec;
          }
          local_d8 = (int)LZCOUNT(uVar24) + (uint)uVar13 * -8 + 0x29;
          local_d0 = local_c8;
LAB_03c332ec:
          uVar20 = FUN_03c359f0(&local_108,(byte *)((long)local_c8 + uVar25),param_4 - uVar20);
          if (0xffffffffffffff88 < uVar20) {
            return uVar20;
          }
          puVar4 = param_1 + param_2;
          uVar20 = param_2 + 3 >> 2;
          param_5 = param_5 + 4;
          puVar31 = param_1 + uVar20;
          puVar5 = puVar31 + uVar20;
          puVar6 = puVar5 + uVar20;
          iVar16 = FUN_03c35b00(&local_90);
          iVar17 = FUN_03c35b00(&local_b8);
          iVar18 = FUN_03c35b00(&local_e0);
          iVar19 = FUN_03c35b00(&local_108);
          puVar23 = puVar4 + -3;
          if (((iVar17 == 0 && iVar16 == 0) && (iVar18 == 0 && iVar19 == 0)) && (puVar6 < puVar23))
          {
            uVar24 = -(uint)uVar14 & 0x3f;
            uVar27 = (ulong)local_88;
            uVar39 = (ulong)local_b0;
            uVar33 = (ulong)local_d8;
            uVar25 = (ulong)local_100;
            puVar21 = local_d0;
            plVar22 = local_f8;
            puVar37 = local_80;
            puVar38 = local_a8;
            do {
              puVar35 = param_1;
              puVar34 = (undefined1 *)(param_5 + ((local_90 << (uVar27 & 0x3f)) >> uVar24) * 2);
              bVar8 = puVar34[1];
              puVar26 = puVar35 + uVar20;
              puVar28 = puVar35 + uVar20 * 2;
              *puVar35 = *puVar34;
              uVar29 = (int)uVar27 + (uint)bVar8;
              puVar34 = puVar35 + uVar20 * 3;
              puVar36 = (undefined1 *)(param_5 + ((local_b8 << (uVar39 & 0x3f)) >> uVar24) * 2);
              bVar8 = puVar36[1];
              *puVar26 = *puVar36;
              uVar1 = (int)uVar39 + (uint)bVar8;
              puVar36 = (undefined1 *)(param_5 + ((local_e0 << (uVar33 & 0x3f)) >> uVar24) * 2);
              uVar2 = (int)uVar33 + (uint)(byte)puVar36[1];
              *puVar28 = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((ulong)(local_108 << (uVar25 & 0x3f)) >> uVar24) * 2);
              uVar3 = (int)uVar25 + (uint)(byte)puVar36[1];
              *puVar34 = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_90 << ((ulong)uVar29 & 0x3f)) >> uVar24) * 2);
              uVar29 = uVar29 + (byte)puVar36[1];
              puVar35[1] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_b8 << ((ulong)uVar1 & 0x3f)) >> uVar24) * 2);
              uVar1 = uVar1 + (byte)puVar36[1];
              puVar26[1] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_e0 << ((ulong)uVar2 & 0x3f)) >> uVar24) * 2);
              uVar2 = uVar2 + (byte)puVar36[1];
              puVar28[1] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((ulong)(local_108 << ((ulong)uVar3 & 0x3f)) >> uVar24) * 2);
              uVar3 = uVar3 + (byte)puVar36[1];
              puVar34[1] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_90 << ((ulong)uVar29 & 0x3f)) >> uVar24) * 2);
              uVar29 = uVar29 + (byte)puVar36[1];
              puVar35[2] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_b8 << ((ulong)uVar1 & 0x3f)) >> uVar24) * 2);
              uVar1 = uVar1 + (byte)puVar36[1];
              puVar26[2] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_e0 << ((ulong)uVar2 & 0x3f)) >> uVar24) * 2);
              uVar2 = uVar2 + (byte)puVar36[1];
              puVar28[2] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((ulong)(local_108 << ((ulong)uVar3 & 0x3f)) >> uVar24) * 2);
              uVar3 = uVar3 + (byte)puVar36[1];
              puVar34[2] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_90 << ((ulong)uVar29 & 0x3f)) >> uVar24) * 2);
              uVar29 = uVar29 + (byte)puVar36[1];
              uVar27 = (ulong)uVar29;
              puVar35[3] = *puVar36;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_b8 << ((ulong)uVar1 & 0x3f)) >> uVar24) * 2);
              bVar8 = puVar36[1];
              puVar7 = (undefined1 *)(param_5 + ((local_e0 << ((ulong)uVar2 & 0x3f)) >> uVar24) * 2)
              ;
              puVar26[3] = *puVar36;
              bVar9 = puVar7[1];
              puVar26 = (undefined1 *)
                        (param_5 + ((ulong)(local_108 << ((ulong)uVar3 & 0x3f)) >> uVar24) * 2);
              puVar28[3] = *puVar7;
              bVar10 = puVar26[1];
              puVar34[3] = *puVar26;
              if (uVar29 < 0x41) {
                if (puVar37 < local_70) {
                  local_80 = local_78;
                  if (puVar37 == local_78) goto LAB_03c33614;
                  uVar32 = (int)puVar37 - (int)local_78;
                  if (local_78 <= (ulong *)((long)puVar37 - (ulong)(uVar29 >> 3))) {
                    uVar32 = uVar29 >> 3;
                  }
                  uVar29 = uVar29 + uVar32 * -8;
                }
                else {
                  uVar32 = uVar29 >> 3;
                  uVar29 = uVar29 & 7;
                }
                uVar27 = (ulong)uVar29;
                local_80 = (ulong *)((long)puVar37 - (ulong)uVar32);
                local_90 = *local_80;
              }
              else {
                local_80 = puVar37;
              }
LAB_03c33614:
              uVar1 = uVar1 + bVar8;
              uVar39 = (ulong)uVar1;
              if (uVar1 < 0x41) {
                if (puVar38 < local_98) {
                  local_a8 = local_a0;
                  if (puVar38 == local_a0) goto LAB_03c3366c;
                  uVar29 = (int)puVar38 - (int)local_a0;
                  if (local_a0 <= (ulong *)((long)puVar38 - (ulong)(uVar1 >> 3))) {
                    uVar29 = uVar1 >> 3;
                  }
                  uVar1 = uVar1 + uVar29 * -8;
                }
                else {
                  uVar29 = uVar1 >> 3;
                  uVar1 = uVar1 & 7;
                }
                uVar39 = (ulong)uVar1;
                local_a8 = (ulong *)((long)puVar38 - (ulong)uVar29);
                local_b8 = *local_a8;
              }
              else {
                local_a8 = puVar38;
              }
LAB_03c3366c:
              uVar2 = uVar2 + bVar9;
              uVar33 = (ulong)uVar2;
              if (uVar2 < 0x41) {
                if (puVar21 < local_c0) {
                  local_d0 = local_c8;
                  if (puVar21 == local_c8) goto LAB_03c336c4;
                  uVar29 = (int)puVar21 - (int)local_c8;
                  if (local_c8 <= (ulong *)((long)puVar21 - (ulong)(uVar2 >> 3))) {
                    uVar29 = uVar2 >> 3;
                  }
                  uVar2 = uVar2 + uVar29 * -8;
                }
                else {
                  uVar29 = uVar2 >> 3;
                  uVar2 = uVar2 & 7;
                }
                uVar33 = (ulong)uVar2;
                local_d0 = (ulong *)((long)puVar21 - (ulong)uVar29);
                local_e0 = *local_d0;
              }
              else {
                local_d0 = puVar21;
              }
LAB_03c336c4:
              uVar3 = uVar3 + bVar10;
              uVar25 = (ulong)uVar3;
              if (uVar3 < 0x41) {
                if (plVar22 < local_e8) {
                  local_f8 = local_f0;
                  if (plVar22 == local_f0) goto LAB_03c333d4;
                  uVar29 = (int)plVar22 - (int)local_f0;
                  if (local_f0 <= (long *)((long)plVar22 - (ulong)(uVar3 >> 3))) {
                    uVar29 = uVar3 >> 3;
                  }
                  uVar3 = uVar3 + uVar29 * -8;
                }
                else {
                  uVar29 = uVar3 >> 3;
                  uVar3 = uVar3 & 7;
                }
                uVar25 = (ulong)uVar3;
                local_108 = *(long *)((long)plVar22 - (ulong)uVar29);
                local_f8 = (long *)((long)plVar22 - (ulong)uVar29);
              }
              else {
                local_f8 = plVar22;
              }
LAB_03c333d4:
              puVar21 = local_d0;
              plVar22 = local_f8;
              param_1 = puVar35 + 4;
              puVar37 = local_80;
              puVar38 = local_a8;
            } while (puVar34 + 4 < puVar23);
            local_d8 = (uint)uVar33;
            param_1 = puVar35 + 4;
            local_88 = (uint)uVar27;
            local_b0 = (uint)uVar39;
            local_100 = (uint)uVar25;
            puVar26 = param_1 + uVar20 * 3;
            puVar28 = param_1 + uVar20 * 2;
            puVar34 = param_1 + uVar20;
          }
          else {
            puVar26 = puVar6;
            puVar28 = puVar5;
            puVar34 = puVar31;
          }
          uVar24 = (uint)uVar14;
          if (puVar31 < param_1) {
            return 0xffffffffffffffec;
          }
          if (puVar5 < puVar34) {
            return 0xffffffffffffffec;
          }
          if (puVar6 < puVar28) {
            return 0xffffffffffffffec;
          }
          if (local_88 < 0x41) {
            uVar29 = -uVar24 & 0x3f;
            puVar36 = param_1;
            do {
              param_1 = puVar36;
              if (local_80 < local_70) {
                if (local_80 == local_78) break;
                bVar15 = (ulong *)((long)local_80 - (ulong)(local_88 >> 3)) < local_78;
                uVar1 = (int)local_80 - (int)local_78;
                if (!bVar15) {
                  uVar1 = local_88 >> 3;
                }
                local_88 = local_88 + uVar1 * -8;
              }
              else {
                uVar1 = local_88 >> 3;
                bVar15 = false;
                local_88 = local_88 & 7;
              }
              local_80 = (ulong *)((long)local_80 - (ulong)uVar1);
              local_90 = *local_80;
              if ((puVar31 + -3 <= puVar36) || (bVar15)) break;
              puVar7 = (undefined1 *)
                       (param_5 + ((local_90 << ((ulong)local_88 & 0x3f)) >> uVar29) * 2);
              local_88 = local_88 + (byte)puVar7[1];
              *puVar36 = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((local_90 << ((ulong)local_88 & 0x3f)) >> uVar29) * 2);
              local_88 = local_88 + (byte)puVar7[1];
              puVar36[1] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((local_90 << ((ulong)local_88 & 0x3f)) >> uVar29) * 2);
              local_88 = local_88 + (byte)puVar7[1];
              puVar36[2] = *puVar7;
              puVar7 = (undefined1 *)
                       (param_5 + ((local_90 << ((ulong)local_88 & 0x3f)) >> uVar29) * 2);
              local_88 = local_88 + (byte)puVar7[1];
              param_1 = puVar36 + 4;
              puVar36[3] = *puVar7;
              puVar36 = param_1;
              if (0x40 < local_88) break;
            } while( true );
          }
          if (param_1 < puVar31) {
            lVar30 = (long)puVar31 - (long)param_1;
            do {
              lVar30 = lVar30 + -1;
              puVar31 = (undefined1 *)
                        (param_5 + ((local_90 << ((ulong)local_88 & 0x3f)) >> (-uVar24 & 0x3f)) * 2)
              ;
              local_88 = local_88 + (byte)puVar31[1];
              *param_1 = *puVar31;
              param_1 = param_1 + 1;
            } while (lVar30 != 0);
          }
          if (local_b0 < 0x41) {
            uVar29 = -uVar24 & 0x3f;
            puVar31 = puVar34;
            do {
              puVar34 = puVar31;
              if (local_a8 < local_98) {
                if (local_a8 == local_a0) break;
                bVar15 = (ulong *)((long)local_a8 - (ulong)(local_b0 >> 3)) < local_a0;
                uVar1 = (int)local_a8 - (int)local_a0;
                if (!bVar15) {
                  uVar1 = local_b0 >> 3;
                }
                local_b0 = local_b0 + uVar1 * -8;
              }
              else {
                uVar1 = local_b0 >> 3;
                bVar15 = false;
                local_b0 = local_b0 & 7;
              }
              local_a8 = (ulong *)((long)local_a8 - (ulong)uVar1);
              local_b8 = *local_a8;
              if ((puVar5 + -3 <= puVar31) || (bVar15)) break;
              puVar34 = (undefined1 *)
                        (param_5 + ((local_b8 << ((ulong)local_b0 & 0x3f)) >> uVar29) * 2);
              local_b0 = local_b0 + (byte)puVar34[1];
              *puVar31 = *puVar34;
              puVar34 = (undefined1 *)
                        (param_5 + ((local_b8 << ((ulong)local_b0 & 0x3f)) >> uVar29) * 2);
              local_b0 = local_b0 + (byte)puVar34[1];
              puVar31[1] = *puVar34;
              puVar34 = (undefined1 *)
                        (param_5 + ((local_b8 << ((ulong)local_b0 & 0x3f)) >> uVar29) * 2);
              local_b0 = local_b0 + (byte)puVar34[1];
              puVar31[2] = *puVar34;
              puVar36 = (undefined1 *)
                        (param_5 + ((local_b8 << ((ulong)local_b0 & 0x3f)) >> uVar29) * 2);
              local_b0 = local_b0 + (byte)puVar36[1];
              puVar34 = puVar31 + 4;
              puVar31[3] = *puVar36;
              puVar31 = puVar34;
              if (0x40 < local_b0) break;
            } while( true );
          }
          if (puVar34 < puVar5) {
            lVar30 = (long)puVar5 - (long)puVar34;
            do {
              lVar30 = lVar30 + -1;
              puVar31 = (undefined1 *)
                        (param_5 + ((local_b8 << ((ulong)local_b0 & 0x3f)) >> (-uVar24 & 0x3f)) * 2)
              ;
              local_b0 = local_b0 + (byte)puVar31[1];
              *puVar34 = *puVar31;
              puVar34 = puVar34 + 1;
            } while (lVar30 != 0);
          }
          if (local_d8 < 0x41) {
            uVar29 = -uVar24 & 0x3f;
            do {
              if (local_d0 < local_c0) {
                if (local_d0 == local_c8) goto LAB_03c3384c;
                bVar15 = (ulong *)((long)local_d0 - (ulong)(local_d8 >> 3)) < local_c8;
                uVar1 = (int)local_d0 - (int)local_c8;
                if (!bVar15) {
                  uVar1 = local_d8 >> 3;
                }
                local_d8 = local_d8 + uVar1 * -8;
              }
              else {
                uVar1 = local_d8 >> 3;
                bVar15 = false;
                local_d8 = local_d8 & 7;
              }
              local_d0 = (ulong *)((long)local_d0 - (ulong)uVar1);
              local_e0 = *local_d0;
              if ((puVar6 + -3 <= puVar28) || (bVar15)) goto LAB_03c3384c;
              puVar31 = (undefined1 *)
                        (param_5 + ((local_e0 << ((ulong)local_d8 & 0x3f)) >> uVar29) * 2);
              local_d8 = local_d8 + (byte)puVar31[1];
              *puVar28 = *puVar31;
              puVar31 = (undefined1 *)
                        (param_5 + ((local_e0 << ((ulong)local_d8 & 0x3f)) >> uVar29) * 2);
              local_d8 = local_d8 + (byte)puVar31[1];
              puVar28[1] = *puVar31;
              puVar31 = (undefined1 *)
                        (param_5 + ((local_e0 << ((ulong)local_d8 & 0x3f)) >> uVar29) * 2);
              local_d8 = local_d8 + (byte)puVar31[1];
              puVar28[2] = *puVar31;
              puVar5 = (undefined1 *)
                       (param_5 + ((local_e0 << ((ulong)local_d8 & 0x3f)) >> uVar29) * 2);
              local_d8 = local_d8 + (byte)puVar5[1];
              puVar31 = puVar28 + 4;
              puVar28[3] = *puVar5;
              puVar28 = puVar31;
            } while (local_d8 < 0x41);
          }
          else {
LAB_03c3384c:
            puVar31 = puVar28;
          }
          if (puVar31 < puVar6) {
            lVar30 = (long)puVar6 - (long)puVar31;
            do {
              lVar30 = lVar30 + -1;
              puVar5 = (undefined1 *)
                       (param_5 + ((local_e0 << ((ulong)local_d8 & 0x3f)) >> (-uVar24 & 0x3f)) * 2);
              local_d8 = local_d8 + (byte)puVar5[1];
              *puVar31 = *puVar5;
              puVar31 = puVar31 + 1;
            } while (lVar30 != 0);
          }
          if (local_100 < 0x41) {
            uVar29 = -uVar24 & 0x3f;
            do {
              if (local_f8 < local_e8) {
                if (local_f8 == local_f0) goto LAB_03c338a0;
                bVar15 = (long *)((long)local_f8 - (ulong)(local_100 >> 3)) < local_f0;
                uVar1 = (int)local_f8 - (int)local_f0;
                if (!bVar15) {
                  uVar1 = local_100 >> 3;
                }
                local_100 = local_100 + uVar1 * -8;
              }
              else {
                uVar1 = local_100 >> 3;
                bVar15 = false;
                local_100 = local_100 & 7;
              }
              local_f8 = (long *)((long)local_f8 - (ulong)uVar1);
              local_108 = *local_f8;
              if ((puVar23 <= puVar26) || (bVar15)) goto LAB_03c338a0;
              puVar31 = (undefined1 *)
                        (param_5 + ((ulong)(local_108 << ((ulong)local_100 & 0x3f)) >> uVar29) * 2);
              local_100 = local_100 + (byte)puVar31[1];
              *puVar26 = *puVar31;
              puVar31 = (undefined1 *)
                        (param_5 + ((ulong)(local_108 << ((ulong)local_100 & 0x3f)) >> uVar29) * 2);
              local_100 = local_100 + (byte)puVar31[1];
              puVar26[1] = *puVar31;
              puVar31 = (undefined1 *)
                        (param_5 + ((ulong)(local_108 << ((ulong)local_100 & 0x3f)) >> uVar29) * 2);
              local_100 = local_100 + (byte)puVar31[1];
              puVar26[2] = *puVar31;
              puVar5 = (undefined1 *)
                       (param_5 + ((ulong)(local_108 << ((ulong)local_100 & 0x3f)) >> uVar29) * 2);
              local_100 = local_100 + (byte)puVar5[1];
              puVar31 = puVar26 + 4;
              puVar26[3] = *puVar5;
              puVar26 = puVar31;
            } while (local_100 < 0x41);
          }
          else {
LAB_03c338a0:
            puVar31 = puVar26;
          }
          if (puVar31 < puVar4) {
            lVar30 = (long)puVar4 - (long)puVar31;
            do {
              lVar30 = lVar30 + -1;
              puVar4 = (undefined1 *)
                       (param_5 +
                       ((ulong)(local_108 << ((ulong)local_100 & 0x3f)) >> (-uVar24 & 0x3f)) * 2);
              local_100 = local_100 + (byte)puVar4[1];
              *puVar31 = *puVar4;
              puVar31 = puVar31 + 1;
            } while (lVar30 != 0);
          }
          if (((((((local_100 != 0x40 || local_f8 != local_f0) || local_d8 != 0x40) ||
                 local_d0 != local_c8) || local_b0 != 0x40) || local_a8 != local_a0) ||
              local_88 != 0x40) || local_80 != local_78) {
            param_2 = 0xffffffffffffffec;
          }
          return param_2;
        }
        local_d0 = (ulong *)((byte *)((long)local_c8 + uVar25) + -8);
        local_e0 = *local_d0;
        if (local_e0 >> 0x38 != 0) {
          local_d8 = (int)LZCOUNT((uint)(byte)(local_e0 >> 0x38)) - 0x17;
          goto LAB_03c332ec;
        }
        goto LAB_03c33230;
      }
    }
    uVar20 = 0xffffffffffffffb8;
  }
  else {
    local_80 = local_a0 + -1;
    local_90 = *local_80;
    if (local_90 >> 0x38 != 0) {
      local_88 = (int)LZCOUNT((uint)(byte)(local_90 >> 0x38)) - 0x17;
      goto joined_r0x03c33144;
    }
LAB_03c33230:
    uVar20 = 0xffffffffffffffff;
  }
  return uVar20;
}

