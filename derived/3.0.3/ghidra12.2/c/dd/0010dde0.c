
/* WARNING: Type propagation algorithm not settling */

ulong FUN_0010dde0(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  char cVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 uVar19;
  short sVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  undefined1 uVar24;
  ushort uVar25;
  byte *pbVar26;
  long lVar27;
  long lVar28;
  uint uVar29;
  long *plVar30;
  byte bVar31;
  uint uVar32;
  byte *pbVar33;
  ushort *puVar34;
  uint uVar35;
  uint uVar36;
  undefined8 local_90;
  ushort local_64 [2];
  
  cVar5 = *(char *)(param_1 + 0x50);
  if (cVar5 == '\x03') {
    lVar28 = *(long *)(param_2 + 8);
    if ((((*(byte *)(lVar28 + 0x1c) & 3) != 0) && (*(char *)(param_1 + 0x51) == '\0')) &&
       (uVar25 = *(ushort *)(param_1 + 0x4c),
       uVar25 <= (ushort)(CONCAT11(*(undefined1 *)(lVar28 + 0x1a),*(undefined1 *)(lVar28 + 0x1b)) >>
                         1))) {
      bVar31 = *(byte *)(param_2 + 0x5f) & 0xf;
      if (bVar31 == 2) {
LAB_0010df48:
        if (cVar5 == '\x03') {
LAB_0010e314:
          sVar20 = FUN_001116c0(param_1,param_2);
joined_r0x0010e328:
          uVar22 = (ulong)(uint)(int)sVar20;
          if (0 < sVar20) {
            return uVar22;
          }
        }
        else {
          if (cVar5 != '\x01') {
            if (cVar5 == '\0') goto LAB_0010df5c;
            goto LAB_0010e524;
          }
          plVar30 = *(long **)(param_1 + 0x28);
          if (*plVar30 == lVar28) {
            lVar28 = 0;
          }
          else if (plVar30[10] == lVar28) {
            lVar28 = 1;
          }
          else if (plVar30[0x14] == lVar28) {
            lVar28 = 2;
          }
          else if (plVar30[0x1e] == lVar28) {
            lVar28 = 3;
          }
          else if (plVar30[0x28] == lVar28) {
            lVar28 = 4;
          }
          else if (plVar30[0x32] == lVar28) {
            lVar28 = 5;
          }
          else if (plVar30[0x3c] == lVar28) {
            lVar28 = 6;
          }
          else if (plVar30[0x46] == lVar28) {
            lVar28 = 7;
          }
          else if (plVar30[0x50] == lVar28) {
            lVar28 = 8;
          }
          else if (plVar30[0x5a] == lVar28) {
            lVar28 = 9;
          }
          else if (plVar30[100] == lVar28) {
            lVar28 = 10;
          }
          else if (plVar30[0x6e] == lVar28) {
            lVar28 = 0xb;
          }
          else if (plVar30[0x78] == lVar28) {
            lVar28 = 0xc;
          }
          else if (plVar30[0x82] == lVar28) {
            lVar28 = 0xd;
          }
          else if (plVar30[0x8c] == lVar28) {
            lVar28 = 0xe;
          }
          else if (plVar30[0x96] == lVar28) {
            lVar28 = 0xf;
          }
          else if (plVar30[0xa0] == lVar28) {
            lVar28 = 0x10;
          }
          else if (plVar30[0xaa] == lVar28) {
            lVar28 = 0x11;
          }
          else if (plVar30[0xb4] == lVar28) {
            lVar28 = 0x12;
          }
          else {
            if (plVar30[0xbe] != lVar28) goto LAB_0010e524;
            lVar28 = 0x13;
          }
          if (((uVar25 == 0) || (plVar30[lVar28 * 10 + 8] == 0)) ||
             ((*(byte *)(plVar30 + 0xcb) & 1) == 0)) {
LAB_0010e7c8:
            uVar22 = FUN_0010f800(param_1,param_2);
            sVar20 = (short)uVar22;
          }
          else {
LAB_0010e7ec:
            uVar22 = FUN_00110880(param_1,param_2,lVar28);
            sVar20 = (short)uVar22;
          }
          if (0 < sVar20) {
            return uVar22;
          }
        }
      }
      else {
LAB_0010dea4:
        puVar34 = (ushort *)(param_1 + 0x4c);
        if (bVar31 == 1) {
          if (cVar5 == '\x03') {
            local_90 = 0;
            bVar6 = *(byte *)(lVar28 + 0x52);
            bVar7 = *(byte *)(lVar28 + 0x53);
            bVar8 = *(byte *)(lVar28 + 0x54);
            uVar36 = ((uint)*(byte *)(lVar28 + 0x56) << 0x10 | (uint)*(byte *)(lVar28 + 0x57) << 8 |
                     (uint)*(byte *)(lVar28 + 0x58)) - 1;
            bVar9 = *(byte *)(lVar28 + 0x55);
            uVar32 = (uint)*(byte *)(lVar28 + 0x59);
            bVar10 = *(byte *)(lVar28 + 0x2c);
            bVar11 = *(byte *)(lVar28 + 0x2b);
            bVar12 = *(byte *)(lVar28 + 0x2d);
            bVar13 = *(byte *)(lVar28 + 0x2e);
            bVar31 = *(byte *)(lVar28 + 0x33);
            if ((*(byte *)(lVar28 + 0x1c) & 3) != 0) {
              bVar31 = bVar31 + 1;
            }
            uVar1 = (uint)*(byte *)(lVar28 + 0x32) + (uint)*(byte *)(lVar28 + 0x30) +
                    (uint)*(byte *)(lVar28 + 0x31) + (uint)bVar31 + 1;
            bVar31 = *(byte *)(lVar28 + 0x2f);
            bVar14 = *(byte *)(lVar28 + 0x35);
            iVar2 = uVar1 + bVar31;
            uVar18 = (0x10 - (uVar1 & 7)) - (uint)bVar31;
            pbVar33 = *(byte **)(param_1 + 0x30);
            uVar35 = 0;
            uVar16 = 0xffff >> (ulong)(0x10 - bVar31 & 0x1f);
            uVar19 = false;
            do {
              while( true ) {
                uVar17 = uVar36 + uVar35 >> 1;
                pbVar26 = (byte *)(lVar28 + ((ulong)bVar6 << 0x18 | (ulong)bVar7 << 0x10 |
                                             (ulong)bVar8 << 8 | (ulong)bVar9) +
                                  (ulong)(uVar17 * uVar32));
                pbVar26 = (byte *)(lVar28 + ((ulong)bVar11 << 0x18 | (ulong)bVar10 << 0x10 |
                                             (ulong)bVar12 << 8 | (ulong)bVar13) +
                                  (((ulong)*pbVar26 << 0x18 | (ulong)pbVar26[1] << 0x10 |
                                    (ulong)pbVar26[2] << 8 | (ulong)pbVar26[3]) >>
                                  ((ulong)((uVar32 & 0x1f) * -8 + 0x20) & 0x3f)));
                bVar31 = *pbVar26;
                uVar29 = (ushort)(CONCAT11(pbVar26[uVar1 >> 3],(pbVar26 + (uVar1 >> 3))[1]) >>
                                 (ulong)(uVar18 & 0x1f)) & uVar16;
                uVar23 = uVar29 >> 1;
                local_64[0] = (ushort)uVar23;
                if (uVar23 != 0) break;
                if (-1 < (char)bVar31) {
                  while (pbVar26 = pbVar26 + (short)(((ushort)(iVar2 + 7U >> 3) & 0xff) +
                                                    (short)uVar29), -1 < (char)*pbVar26) {
                    uVar29 = (ushort)(CONCAT11(pbVar26[uVar1 >> 3],(pbVar26 + (uVar1 >> 3))[1]) >>
                                     (ulong)(uVar18 & 0x1f)) & uVar16;
                  }
                }
                lVar27 = *(long *)(param_2 + 8);
                iVar3 = (uint)*(byte *)(lVar27 + 0x33) + (uint)*(byte *)(lVar27 + 0x32);
                if ((*(byte *)(lVar27 + 0x1c) & 3) != 0) {
                  iVar3 = iVar3 + 1;
                }
                uVar4 = (ulong)(iVar3 + 1) + (ulong)*(byte *)(lVar27 + 0x30) +
                        (ulong)*(byte *)(lVar27 + 0x31);
                uVar29 = 0x10 - *(byte *)(lVar27 + 0x2f);
                uVar22 = *(byte *)(lVar27 + 0x2f) + uVar4;
                if ((char)*(byte *)(lVar27 + 0x1c) < '\0') {
                  bVar15 = *(byte *)(lVar27 + 0x35);
                  uVar23 = (uint)(ushort)(CONCAT11(pbVar26[uVar22 >> 3],(pbVar26 + (uVar22 >> 3))[1]
                                                  ) >>
                                         (ulong)((0x10 - ((uint)uVar22 & 7)) - (uint)bVar15 & 0x1f))
                           & 0xffffU >> (ulong)(0x10 - bVar15 & 0x1f);
                  uVar22 = (ulong)((uint)uVar22 + (uint)bVar15);
                }
                else {
                  uVar23 = 0;
                }
                uVar21 = FUN_00112bf0(lVar27,pbVar33,*(undefined1 *)puVar34,
                                      pbVar26 + (((uint)(ushort)(CONCAT11(pbVar26[uVar4 >> 3],
                                                                          (pbVar26 + (uVar4 >> 3))
                                                                          [1]) >>
                                                                (ulong)(uVar29 - ((uint)uVar4 & 7) &
                                                                       0x1f)) &
                                                 0xffffU >> (ulong)(uVar29 & 0x1f)) +
                                                 ((int)uVar22 + 7U >> 3 & 0xff) & 0xffff),uVar23,
                                      bVar31 & 0x40,local_64);
LAB_0010e27c:
                sVar20 = (short)uVar21;
                if ((uVar21 & 0xffff) == 0) {
                  uVar36 = uVar17;
                  if (*puVar34 != local_64[0]) {
                    uVar36 = (uint)local_90;
                  }
                  if (*puVar34 == local_64[0]) {
                    local_90._4_4_ = 1;
                  }
                  local_90 = CONCAT44(local_90._4_4_,uVar36);
                  uVar19 = true;
                }
                else {
LAB_0010e284:
                  if (-1 < sVar20) goto LAB_0010e28c;
                }
                if ((uVar17 == 0) || (uVar36 = uVar17 - 1, uVar36 < uVar35)) goto LAB_0010e2f8;
              }
              pbVar26 = pbVar26 + (byte)(iVar2 + (char)(bVar14 & (byte)((uint)(int)(char)bVar31 >> 7
                                                                       )) + 7U >> 3);
              bVar31 = *pbVar33;
              bVar15 = *pbVar26;
              if (bVar31 == bVar15) {
                bVar31 = pbVar33[1];
                bVar15 = pbVar26[1];
              }
              uVar21 = (uint)bVar31 - (uint)bVar15;
              if (uVar21 != 0) goto LAB_0010e27c;
              if (*puVar34 <= uVar23) {
                uVar21 = FUN_001006e0(pbVar33,pbVar26,(ulong)*puVar34 << 1);
                goto LAB_0010e27c;
              }
              sVar20 = FUN_001006e0(pbVar33,pbVar26,uVar29 & 0xfffffffe);
              if (sVar20 != 0) goto LAB_0010e284;
LAB_0010e28c:
              uVar35 = uVar17 + 1;
            } while (uVar35 <= uVar36);
LAB_0010e2f8:
            if ((local_90 & 0xff00000000) == 0) {
              uVar24 = 3;
              uVar22 = 0;
              if (!(bool)uVar19) {
                uVar24 = 4;
              }
              goto LAB_0010defc;
            }
            *(uint *)(param_2 + 0x38) = (uint)local_90 * uVar32;
            *(undefined4 *)(param_2 + 0x3c) = 0;
            goto LAB_0010e314;
          }
          if (cVar5 == '\x01') {
            plVar30 = *(long **)(param_1 + 0x28);
            if (*plVar30 == lVar28) {
              lVar28 = 0;
            }
            else if (plVar30[10] == lVar28) {
              lVar28 = 1;
            }
            else if (plVar30[0x14] == lVar28) {
              lVar28 = 2;
            }
            else if (plVar30[0x1e] == lVar28) {
              lVar28 = 3;
            }
            else if (plVar30[0x28] == lVar28) {
              lVar28 = 4;
            }
            else if (plVar30[0x32] == lVar28) {
              lVar28 = 5;
            }
            else if (plVar30[0x3c] == lVar28) {
              lVar28 = 6;
            }
            else if (plVar30[0x46] == lVar28) {
              lVar28 = 7;
            }
            else if (plVar30[0x50] == lVar28) {
              lVar28 = 8;
            }
            else if (plVar30[0x5a] == lVar28) {
              lVar28 = 9;
            }
            else if (plVar30[100] == lVar28) {
              lVar28 = 10;
            }
            else if (plVar30[0x6e] == lVar28) {
              lVar28 = 0xb;
            }
            else if (plVar30[0x78] == lVar28) {
              lVar28 = 0xc;
            }
            else if (plVar30[0x82] == lVar28) {
              lVar28 = 0xd;
            }
            else if (plVar30[0x8c] == lVar28) {
              lVar28 = 0xe;
            }
            else if (plVar30[0x96] == lVar28) {
              lVar28 = 0xf;
            }
            else if (plVar30[0xa0] == lVar28) {
              lVar28 = 0x10;
            }
            else if (plVar30[0xaa] == lVar28) {
              lVar28 = 0x11;
            }
            else if (plVar30[0xb4] == lVar28) {
              lVar28 = 0x12;
            }
            else {
              if (plVar30[0xbe] != lVar28) goto LAB_0010e524;
              lVar28 = 0x13;
            }
            if (((uVar25 != 0) && (plVar30[lVar28 * 10 + 8] != 0)) &&
               ((*(byte *)(plVar30 + 0xcb) & 1) != 0)) {
              uVar22 = FUN_0010fd60(param_1,param_2,lVar28);
              if (((uint)uVar22 & 0xffff) == 0xac62) {
                lVar27 = *(long *)(*(long *)(param_1 + 0x28) + lVar28 * 0x50 + 0x40);
                *(byte *)(lVar27 + 0x2050) = *(byte *)(lVar27 + 0x2050) | 1;
                uVar22 = FUN_0010fd60(param_1,param_2,lVar28);
              }
              if ((short)uVar22 < 1) {
                return uVar22;
              }
              goto LAB_0010e7ec;
            }
            sVar20 = FUN_0010e800(param_1,param_2);
            if (sVar20 < 1) {
              return (ulong)(uint)(int)sVar20;
            }
            goto LAB_0010e7c8;
          }
          if (cVar5 != '\0') goto LAB_0010def4;
          sVar20 = FUN_0010e800(param_1,param_2);
          if (sVar20 < 1) {
            return (ulong)(uint)(int)sVar20;
          }
LAB_0010df5c:
          sVar20 = FUN_0010f320(param_1,param_2);
          goto joined_r0x0010e328;
        }
LAB_0010e524:
        uVar22 = 0;
      }
      uVar24 = 3;
      goto LAB_0010defc;
    }
  }
  else if (cVar5 == '\x01') {
    if ((*(char *)(param_1 + 0x51) != '\x02') &&
       (lVar28 = *(long *)(param_2 + 8), *(char *)(lVar28 + 0x1c) < '\0')) {
      if (1 < *(byte *)(param_2 + 0x60) - 1) {
        if (*(byte *)(param_2 + 0x60) == 3) {
          uVar36 = *(uint *)(lVar28 + 0x70);
        }
        else {
          uVar36 = (*(uint *)(lVar28 + 8) & 0xff00ff00) >> 8 |
                   (*(uint *)(lVar28 + 8) & 0xff00ff) << 8;
          uVar36 = uVar36 >> 0x10 | uVar36 << 0x10;
        }
        if (uVar36 == 3) goto LAB_0010de28;
      }
      if (**(short **)(param_1 + 0x30) != 0) goto LAB_0010de28;
    }
  }
  else if ((cVar5 == '\0') && (*(char *)(param_1 + 0x51) == '\0')) {
    lVar28 = *(long *)(param_2 + 8);
LAB_0010de28:
    uVar25 = *(ushort *)(param_1 + 0x4c);
    if (uVar25 <= (ushort)(CONCAT11(*(undefined1 *)(lVar28 + 0x16),*(undefined1 *)(lVar28 + 0x17))
                          >> 1)) {
      bVar31 = *(byte *)(param_2 + 0x5f) & 0xf;
      if (bVar31 != 2) goto LAB_0010dea4;
      goto LAB_0010df48;
    }
  }
LAB_0010def4:
  uVar22 = 0;
  uVar24 = 4;
LAB_0010defc:
  *(undefined1 *)(param_2 + 0x5f) = uVar24;
  return uVar22;
}

