
void FUN_039e5760(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  ulong uVar21;
  ulong uVar22;
  undefined4 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long *plVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  ulong uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float local_84;
  
  lVar26 = param_1 + 0x620;
  fVar33 = *(float *)(param_1 + 0x788);
  lVar25 = *(long *)(param_1 + 0x630);
  (**(code **)(*(long *)(param_1 + 0x620) + 0x20))(lVar26);
  (**(code **)(*(long *)(param_1 + 0x620) + 0x20))(lVar26);
  lVar29 = **(long **)(param_1 + 0x628);
  bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar29 + 8) * 4];
  local_84 = fVar33;
  (**(code **)(*(long *)(param_1 + 0x620) + 0x18))(lVar26);
  if ((ulong)bVar3 != 0) {
    memcpy((void *)(lVar25 + (ulong)*(ushort *)(lVar29 + 4)),&local_84,(ulong)bVar3 << 2);
  }
  fVar33 = *(float *)(param_1 + 0x768);
  lVar25 = *(long *)(param_1 + 0x630);
  (**(code **)(*(long *)(param_1 + 0x620) + 0x20))(lVar26);
  (**(code **)(*(long *)(param_1 + 0x620) + 0x20))(lVar26);
  lVar29 = **(long **)(param_1 + 0x628);
  bVar3 = (&DAT_041b370c)[(ulong)*(byte *)(lVar29 + 0x14) * 4];
  local_84 = fVar33;
  (**(code **)(*(long *)(param_1 + 0x620) + 0x18))(lVar26);
  if ((ulong)bVar3 != 0) {
    memcpy((void *)(lVar25 + (ulong)*(ushort *)(lVar29 + 0x10)),&local_84,(ulong)bVar3 << 2);
  }
  bVar3 = *(byte *)(param_1 + 0x659);
  uVar6 = *(ushort *)(param_1 + 0x65a);
  iVar15 = *(int *)(param_1 + 0x650);
  iVar10 = (**(code **)(*(long *)(param_1 + 0x620) + 0x20))(lVar26);
  iVar11 = (**(code **)(*(long *)(param_1 + 0x620) + 0x20))(lVar26);
  lVar26 = *(long *)(param_1 + 0x640);
  if (lVar26 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x650);
    iVar2 = *(int *)(param_1 + 0x638);
    uVar12 = (**(code **)PTR_DAT_04bcf030)(lVar26);
    if ((uVar12 >> 2 & 1) != 0) {
      (*DAT_04c61fd8)(lVar26,iVar2 + (uint)uVar6 * (uint)bVar3 * ((iVar15 + iVar10) - 1U & -iVar11),
                      uVar1);
    }
  }
  bVar3 = *(byte *)(param_1 + 0x2a1);
  fVar33 = 0.0;
  if (1 < bVar3) {
    fVar33 = 1.0 / (float)(bVar3 - 1);
  }
  uVar7 = *(ushort *)(*(long *)(param_1 + 0x168) + 0x25a);
  uVar6 = uVar7;
  if (*(short *)(*(long *)(param_1 + 0x168) + 0x262) != 3) {
    uVar6 = 1;
  }
  if (uVar6 <= uVar7) {
    uVar6 = uVar7;
  }
  uVar12 = *(uint *)(param_1 + 0x698);
  if ((uint)bVar3 <= *(uint *)(param_1 + 0x698)) {
    uVar12 = (uint)bVar3;
  }
  if (uVar12 != 0) {
    lVar25 = *(long *)(param_1 + 0x6a0);
    uVar18 = 0;
    lVar26 = param_1 + 0x310;
    fVar35 = 1.0 / (float)uVar6;
    do {
      lVar29 = param_1;
      do {
        lVar28 = lVar29;
        lVar29 = *(long *)(lVar28 + 0x170);
      } while (lVar29 != 0);
      switch(*(undefined4 *)(lVar28 + 0x6e8)) {
      case 0:
        bVar3 = *(byte *)(param_1 + 0x30b);
        if (bVar3 != 0) {
          uVar16 = 0;
          plVar27 = (long *)(lVar25 + (long)(int)uVar18 * 0x78);
          plVar30 = plVar27 + 2;
          do {
            lVar29 = *plVar30;
            (**(code **)(*plVar27 + 0x20))(plVar27);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            local_84 = 1.0;
            lVar28 = *(long *)plVar27[1];
            bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 8) * 4];
            uVar13 = (**(code **)(*plVar27 + 0x18))(plVar27);
            if ((ulong)bVar4 != 0) {
              memcpy((void *)(lVar29 + (ulong)*(ushort *)(lVar28 + 4) +
                             (long)(int)(uVar16 * (uVar13 & 0xff)) * 4),&local_84,(ulong)bVar4 << 2)
              ;
            }
            bVar4 = *(byte *)(param_1 + 0x30b);
            if (bVar4 != 0) {
              uVar13 = 0;
              do {
                lVar29 = *plVar30;
                cVar8 = *(char *)(lVar26 + (long)(int)uVar13 * 0x5c + (long)(int)uVar18 + 1);
                (**(code **)(*plVar27 + 0x20))(plVar27);
                (**(code **)(*plVar27 + 0x20))(plVar27);
                lVar28 = *(long *)plVar27[1];
                bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x14) * 4];
                local_84 = fVar35 * ((float)(int)cVar8 + 0.5);
                uVar14 = (**(code **)(*plVar27 + 0x18))(plVar27);
                if ((ulong)bVar5 != 0) {
                  memcpy((void *)(lVar29 + (ulong)*(ushort *)(lVar28 + 0x10) +
                                 ((long)((ulong)(uVar13 * (uVar14 & 0xff)) << 0x20) >> 0x1e)),
                         &local_84,(ulong)bVar5 << 2);
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 != bVar4);
            }
            lVar29 = *plVar30;
            bVar4 = *(byte *)(lVar26 + (long)(int)uVar16 * 0x5c + 3);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            lVar28 = *(long *)plVar27[1];
            bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x20) * 4];
            uVar31 = (ulong)bVar5;
            uVar17 = (**(code **)(*plVar27 + 0x18))(plVar27);
            if (bVar5 != 0) {
              uVar17 = uVar17 & 0xff;
              uVar22 = (ulong)*(ushort *)(lVar28 + 0x1c);
              lVar28 = (long)(int)(uVar16 * (int)uVar17 * 2);
              puVar20 = (undefined4 *)&UNK_04058280;
              if (((uint)bVar4 & 1 << (ulong)(uVar18 & 0x1f) & 0xffU) != 0) {
                puVar20 = (undefined4 *)(lVar26 + (long)(int)uVar16 * 0x5c + 0x28);
              }
              if (bVar5 < 8) {
                lVar24 = 0;
              }
              else {
                lVar24 = 0;
                puVar19 = (undefined4 *)(lVar29 + uVar22 + lVar28 * 4 + 0x10);
                do {
                  lVar24 = lVar24 + -8;
                  puVar19[-4] = *puVar20;
                  puVar19[-3] = puVar20[1];
                  puVar19[-2] = puVar20[2];
                  puVar19[-1] = puVar20[3];
                  *puVar19 = puVar20[4];
                  puVar19[1] = puVar20[5];
                  puVar19[2] = puVar20[6];
                  puVar23 = puVar20 + 7;
                  puVar20 = puVar20 + 8;
                  puVar19[3] = *puVar23;
                  puVar19 = puVar19 + 8;
                } while (-lVar24 != (uVar31 & 0xf8));
                lVar24 = -lVar24;
              }
              uVar21 = uVar31 & 7;
              lVar29 = lVar29 + uVar22;
              if ((bVar5 & 7) != 0) {
                puVar19 = puVar20;
                puVar23 = (undefined4 *)(lVar29 + lVar24 * 4 + lVar28 * 4);
                uVar22 = uVar21;
                do {
                  puVar20 = puVar19 + 1;
                  uVar22 = uVar22 - 1;
                  *puVar23 = *puVar19;
                  puVar19 = puVar20;
                  puVar23 = puVar23 + 1;
                } while (uVar22 != 0);
              }
              if (bVar5 < 8) {
                lVar24 = 0;
              }
              else {
                lVar24 = 0;
                puVar19 = (undefined4 *)(lVar29 + lVar28 * 4 + uVar17 * 4 + 0x10);
                do {
                  lVar24 = lVar24 + -8;
                  puVar19[-4] = *puVar20;
                  puVar19[-3] = puVar20[1];
                  puVar19[-2] = puVar20[2];
                  puVar19[-1] = puVar20[3];
                  *puVar19 = puVar20[4];
                  puVar19[1] = puVar20[5];
                  puVar19[2] = puVar20[6];
                  puVar23 = puVar20 + 7;
                  puVar20 = puVar20 + 8;
                  puVar19[3] = *puVar23;
                  puVar19 = puVar19 + 8;
                } while (-lVar24 != (uVar31 & 0xf8));
                lVar24 = -lVar24;
              }
              if ((bVar5 & 7) != 0) {
                puVar19 = (undefined4 *)(lVar29 + lVar24 * 4 + lVar28 * 4 + uVar17 * 4);
                do {
                  uVar21 = uVar21 - 1;
                  *puVar19 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar19 = puVar19 + 1;
                } while (uVar21 != 0);
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != bVar3);
        }
        break;
      case 1:
        bVar3 = *(byte *)(param_1 + 0x30b);
        if (bVar3 != 0) {
          uVar16 = 0;
          plVar27 = (long *)(lVar25 + (long)(int)uVar18 * 0x78);
          plVar30 = plVar27 + 2;
          do {
            lVar29 = lVar26 + (long)(int)uVar16 * 0x5c;
            fVar34 = logf(*(float *)(lVar29 + 0x54));
            fVar32 = logf(*(float *)(lVar29 + 0x58));
            fVar34 = expf(fVar34 + fVar33 * (float)(int)uVar18 * (fVar32 - fVar34));
            lVar29 = *plVar30;
            (**(code **)(*plVar27 + 0x20))(plVar27);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            lVar28 = *(long *)plVar27[1];
            bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 8) * 4];
            local_84 = fVar34;
            uVar13 = (**(code **)(*plVar27 + 0x18))(plVar27);
            if ((ulong)bVar4 != 0) {
              memcpy((void *)(lVar29 + (ulong)*(ushort *)(lVar28 + 4) +
                             (long)(int)(uVar16 * (uVar13 & 0xff)) * 4),&local_84,(ulong)bVar4 << 2)
              ;
            }
            lVar29 = *plVar30;
            (**(code **)(*plVar27 + 0x20))(plVar27);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            lVar28 = *(long *)plVar27[1];
            bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x20) * 4];
            uVar31 = (ulong)bVar4;
            uVar17 = (**(code **)(*plVar27 + 0x18))(plVar27);
            if (bVar4 != 0) {
              uVar17 = uVar17 & 0xff;
              uVar22 = (ulong)*(ushort *)(lVar28 + 0x1c);
              lVar28 = (long)(int)(uVar16 * (int)uVar17 * 2);
              puVar20 = (undefined4 *)(lVar26 + (long)(int)uVar16 * 0x5c + 0x28);
              if (bVar4 < 8) {
                lVar24 = 0;
              }
              else {
                lVar24 = 0;
                puVar19 = (undefined4 *)(lVar29 + uVar22 + lVar28 * 4 + 0x10);
                do {
                  lVar24 = lVar24 + -8;
                  puVar19[-4] = *puVar20;
                  puVar19[-3] = puVar20[1];
                  puVar19[-2] = puVar20[2];
                  puVar19[-1] = puVar20[3];
                  *puVar19 = puVar20[4];
                  puVar19[1] = puVar20[5];
                  puVar19[2] = puVar20[6];
                  puVar23 = puVar20 + 7;
                  puVar20 = puVar20 + 8;
                  puVar19[3] = *puVar23;
                  puVar19 = puVar19 + 8;
                } while (-lVar24 != (uVar31 & 0xf8));
                lVar24 = -lVar24;
              }
              uVar21 = uVar31 & 7;
              lVar29 = lVar29 + uVar22;
              if ((bVar4 & 7) != 0) {
                puVar19 = puVar20;
                puVar23 = (undefined4 *)(lVar29 + lVar24 * 4 + lVar28 * 4);
                uVar22 = uVar21;
                do {
                  puVar20 = puVar19 + 1;
                  uVar22 = uVar22 - 1;
                  *puVar23 = *puVar19;
                  puVar19 = puVar20;
                  puVar23 = puVar23 + 1;
                } while (uVar22 != 0);
              }
              if (bVar4 < 8) {
                lVar24 = 0;
              }
              else {
                lVar24 = 0;
                puVar19 = (undefined4 *)(lVar29 + lVar28 * 4 + uVar17 * 4 + 0x10);
                do {
                  lVar24 = lVar24 + -8;
                  puVar19[-4] = *puVar20;
                  puVar19[-3] = puVar20[1];
                  puVar19[-2] = puVar20[2];
                  puVar19[-1] = puVar20[3];
                  *puVar19 = puVar20[4];
                  puVar19[1] = puVar20[5];
                  puVar19[2] = puVar20[6];
                  puVar23 = puVar20 + 7;
                  puVar20 = puVar20 + 8;
                  puVar19[3] = *puVar23;
                  puVar19 = puVar19 + 8;
                } while (-lVar24 != (uVar31 & 0xf8));
                lVar24 = -lVar24;
              }
              if ((bVar4 & 7) != 0) {
                puVar19 = (undefined4 *)(lVar29 + lVar24 * 4 + lVar28 * 4 + uVar17 * 4);
                do {
                  uVar21 = uVar21 - 1;
                  *puVar19 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar19 = puVar19 + 1;
                } while (uVar21 != 0);
              }
            }
            lVar29 = *plVar30;
            cVar8 = *(char *)(lVar26 + (long)(int)uVar16 * 0x5c + 1);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            lVar28 = *(long *)plVar27[1];
            bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x14) * 4];
            local_84 = fVar35 * ((float)(int)cVar8 + 0.5);
            uVar13 = (**(code **)(*plVar27 + 0x18))(plVar27);
            if ((ulong)bVar4 != 0) {
              memcpy((void *)(lVar29 + (ulong)*(ushort *)(lVar28 + 0x10) +
                             (long)(int)(uVar16 * (uVar13 & 0xff)) * 4),&local_84,(ulong)bVar4 << 2)
              ;
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != bVar3);
        }
        break;
      case 2:
        bVar3 = *(byte *)(param_1 + 0x30b);
        if (bVar3 != 0) {
          uVar16 = 0;
          plVar30 = (long *)(lVar25 + (long)(int)uVar18 * 0x78);
          do {
            lVar29 = plVar30[2];
            (**(code **)(*plVar30 + 0x20))(plVar30);
            (**(code **)(*plVar30 + 0x20))(plVar30);
            lVar28 = *(long *)plVar30[1];
            bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 8) * 4];
            local_84 = fVar33 * (float)(int)uVar18 * fVar33 * (float)(int)uVar18;
            uVar13 = (**(code **)(*plVar30 + 0x18))(plVar30);
            if ((ulong)bVar4 != 0) {
              memcpy((void *)(lVar29 + (ulong)*(ushort *)(lVar28 + 4) +
                             (long)(int)(uVar16 * (uVar13 & 0xff)) * 4),&local_84,(ulong)bVar4 << 2)
              ;
            }
            lVar29 = plVar30[2];
            (**(code **)(*plVar30 + 0x20))(plVar30);
            (**(code **)(*plVar30 + 0x20))(plVar30);
            lVar28 = *(long *)plVar30[1];
            bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x20) * 4];
            uVar31 = (ulong)bVar4;
            uVar17 = (**(code **)(*plVar30 + 0x18))(plVar30);
            if (bVar4 != 0) {
              uVar17 = uVar17 & 0xff;
              uVar22 = (ulong)*(ushort *)(lVar28 + 0x1c);
              lVar28 = (long)(int)(uVar16 * (int)uVar17 * 2);
              puVar20 = (undefined4 *)(lVar26 + (long)(int)uVar16 * 0x5c + 0x28);
              if (bVar4 < 8) {
                lVar24 = 0;
              }
              else {
                lVar24 = 0;
                puVar19 = (undefined4 *)(lVar29 + uVar22 + lVar28 * 4 + 0x10);
                do {
                  lVar24 = lVar24 + -8;
                  puVar19[-4] = *puVar20;
                  puVar19[-3] = puVar20[1];
                  puVar19[-2] = puVar20[2];
                  puVar19[-1] = puVar20[3];
                  *puVar19 = puVar20[4];
                  puVar19[1] = puVar20[5];
                  puVar19[2] = puVar20[6];
                  puVar23 = puVar20 + 7;
                  puVar20 = puVar20 + 8;
                  puVar19[3] = *puVar23;
                  puVar19 = puVar19 + 8;
                } while (-lVar24 != (uVar31 & 0xf8));
                lVar24 = -lVar24;
              }
              uVar21 = uVar31 & 7;
              lVar29 = lVar29 + uVar22;
              if ((bVar4 & 7) != 0) {
                puVar19 = puVar20;
                puVar23 = (undefined4 *)(lVar29 + lVar24 * 4 + lVar28 * 4);
                uVar22 = uVar21;
                do {
                  puVar20 = puVar19 + 1;
                  uVar22 = uVar22 - 1;
                  *puVar23 = *puVar19;
                  puVar19 = puVar20;
                  puVar23 = puVar23 + 1;
                } while (uVar22 != 0);
              }
              if (bVar4 < 8) {
                lVar24 = 0;
              }
              else {
                lVar24 = 0;
                puVar19 = (undefined4 *)(lVar29 + lVar28 * 4 + uVar17 * 4 + 0x10);
                do {
                  lVar24 = lVar24 + -8;
                  puVar19[-4] = *puVar20;
                  puVar19[-3] = puVar20[1];
                  puVar19[-2] = puVar20[2];
                  puVar19[-1] = puVar20[3];
                  *puVar19 = puVar20[4];
                  puVar19[1] = puVar20[5];
                  puVar19[2] = puVar20[6];
                  puVar23 = puVar20 + 7;
                  puVar20 = puVar20 + 8;
                  puVar19[3] = *puVar23;
                  puVar19 = puVar19 + 8;
                } while (-lVar24 != (uVar31 & 0xf8));
                lVar24 = -lVar24;
              }
              if ((bVar4 & 7) != 0) {
                puVar19 = (undefined4 *)(lVar29 + lVar24 * 4 + lVar28 * 4 + uVar17 * 4);
                do {
                  uVar21 = uVar21 - 1;
                  *puVar19 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar19 = puVar19 + 1;
                } while (uVar21 != 0);
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != bVar3);
        }
        break;
      case 3:
        bVar3 = *(byte *)(param_1 + 0x30b);
        if (bVar3 != 0) {
          uVar16 = 0;
          plVar27 = (long *)(lVar25 + (long)(int)uVar18 * 0x78);
          plVar30 = plVar27 + 2;
          do {
            lVar29 = *plVar30;
            fVar34 = *(float *)(lVar26 + (long)(int)uVar16 * 0x5c + 0x54);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            lVar28 = *(long *)plVar27[1];
            bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 8) * 4];
            local_84 = fVar34;
            uVar13 = (**(code **)(*plVar27 + 0x18))(plVar27);
            if ((ulong)bVar4 != 0) {
              memcpy((void *)(lVar29 + (ulong)*(ushort *)(lVar28 + 4) +
                             (long)(int)(uVar16 * (uVar13 & 0xff)) * 4),&local_84,(ulong)bVar4 << 2)
              ;
            }
            bVar4 = *(byte *)(param_1 + 0x30b);
            if (bVar4 != 0) {
              uVar13 = 0;
              do {
                lVar29 = *plVar30;
                cVar8 = *(char *)(lVar26 + (long)(int)uVar13 * 0x5c + (long)(int)uVar18 + 1);
                (**(code **)(*plVar27 + 0x20))(plVar27);
                (**(code **)(*plVar27 + 0x20))(plVar27);
                lVar28 = *(long *)plVar27[1];
                bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x14) * 4];
                local_84 = fVar35 * ((float)(int)cVar8 + 0.5);
                uVar14 = (**(code **)(*plVar27 + 0x18))(plVar27);
                if ((ulong)bVar5 != 0) {
                  memcpy((void *)(lVar29 + (ulong)*(ushort *)(lVar28 + 0x10) +
                                 ((long)((ulong)(uVar13 * (uVar14 & 0xff)) << 0x20) >> 0x1e)),
                         &local_84,(ulong)bVar5 << 2);
                }
                uVar13 = uVar13 + 1;
              } while (uVar13 != bVar4);
            }
            lVar29 = *plVar30;
            (**(code **)(*plVar27 + 0x20))(plVar27);
            (**(code **)(*plVar27 + 0x20))(plVar27);
            lVar28 = *(long *)plVar27[1];
            bVar4 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x20) * 4];
            uVar31 = (ulong)bVar4;
            uVar17 = (**(code **)(*plVar27 + 0x18))(plVar27);
            if (bVar4 != 0) {
              uVar17 = uVar17 & 0xff;
              uVar22 = (ulong)*(ushort *)(lVar28 + 0x1c);
              lVar28 = (long)(int)(uVar16 * (int)uVar17 * 2);
              puVar20 = (undefined4 *)(lVar26 + (long)(int)uVar16 * 0x5c + 0x28);
              if (bVar4 < 8) {
                lVar24 = 0;
              }
              else {
                lVar24 = 0;
                puVar19 = (undefined4 *)(lVar29 + uVar22 + lVar28 * 4 + 0x10);
                do {
                  lVar24 = lVar24 + -8;
                  puVar19[-4] = *puVar20;
                  puVar19[-3] = puVar20[1];
                  puVar19[-2] = puVar20[2];
                  puVar19[-1] = puVar20[3];
                  *puVar19 = puVar20[4];
                  puVar19[1] = puVar20[5];
                  puVar19[2] = puVar20[6];
                  puVar23 = puVar20 + 7;
                  puVar20 = puVar20 + 8;
                  puVar19[3] = *puVar23;
                  puVar19 = puVar19 + 8;
                } while (-lVar24 != (uVar31 & 0xf8));
                lVar24 = -lVar24;
              }
              uVar21 = uVar31 & 7;
              lVar29 = lVar29 + uVar22;
              if ((bVar4 & 7) != 0) {
                puVar19 = puVar20;
                puVar23 = (undefined4 *)(lVar29 + lVar24 * 4 + lVar28 * 4);
                uVar22 = uVar21;
                do {
                  puVar20 = puVar19 + 1;
                  uVar22 = uVar22 - 1;
                  *puVar23 = *puVar19;
                  puVar19 = puVar20;
                  puVar23 = puVar23 + 1;
                } while (uVar22 != 0);
              }
              if (bVar4 < 8) {
                lVar24 = 0;
              }
              else {
                lVar24 = 0;
                puVar19 = (undefined4 *)(lVar29 + lVar28 * 4 + uVar17 * 4 + 0x10);
                do {
                  lVar24 = lVar24 + -8;
                  puVar19[-4] = *puVar20;
                  puVar19[-3] = puVar20[1];
                  puVar19[-2] = puVar20[2];
                  puVar19[-1] = puVar20[3];
                  *puVar19 = puVar20[4];
                  puVar19[1] = puVar20[5];
                  puVar19[2] = puVar20[6];
                  puVar23 = puVar20 + 7;
                  puVar20 = puVar20 + 8;
                  puVar19[3] = *puVar23;
                  puVar19 = puVar19 + 8;
                } while (-lVar24 != (uVar31 & 0xf8));
                lVar24 = -lVar24;
              }
              if ((bVar4 & 7) != 0) {
                puVar19 = (undefined4 *)(lVar29 + lVar24 * 4 + lVar28 * 4 + uVar17 * 4);
                do {
                  uVar21 = uVar21 - 1;
                  *puVar19 = *puVar20;
                  puVar20 = puVar20 + 1;
                  puVar19 = puVar19 + 1;
                } while (uVar21 != 0);
              }
            }
            uVar16 = uVar16 + 1;
          } while (uVar16 != bVar3);
        }
      }
      plVar30 = (long *)(lVar25 + (long)(int)uVar18 * 0x78);
      bVar3 = *(byte *)((long)plVar30 + 0x39);
      uVar6 = *(ushort *)((long)plVar30 + 0x3a);
      lVar29 = plVar30[6];
      iVar15 = (**(code **)(*plVar30 + 0x20))(plVar30);
      iVar10 = (**(code **)(*plVar30 + 0x20))(plVar30);
      lVar28 = plVar30[4];
      if (lVar28 != 0) {
        lVar24 = plVar30[6];
        lVar9 = plVar30[3];
        uVar16 = (**(code **)PTR_DAT_04bcf030)(lVar28);
        if ((uVar16 >> 2 & 1) != 0) {
          (*DAT_04c61fd8)(lVar28,(int)lVar9 +
                                 (uint)uVar6 * (uint)bVar3 * (((int)lVar29 + iVar15) - 1U & -iVar10)
                          ,(int)lVar24);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar12 != uVar18);
  }
  return;
}

