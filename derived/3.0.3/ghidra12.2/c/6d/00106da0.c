
int FUN_00106da0(long param_1,long param_2,uint param_3)

{
  bool bVar1;
  void *__dest;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  ushort uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  short sVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  long lVar25;
  ushort *puVar26;
  int iVar27;
  ushort uVar28;
  long lVar29;
  long lVar30;
  void *__src;
  long lVar31;
  int local_1364;
  char local_1324 [4];
  undefined8 local_1320;
  undefined1 auStack_1318 [8];
  short local_1310;
  long local_1308;
  int local_12d8;
  int iStack_12d4;
  ushort local_12a8;
  ushort local_12a6;
  undefined8 local_1290 [3];
  undefined2 local_1278;
  undefined2 local_1276;
  undefined1 auStack_978 [24];
  undefined2 local_960;
  undefined2 local_95e;
  long local_950;
  byte *local_948;
  undefined2 local_92c;
  undefined2 local_928;
  
  puVar3 = (ushort *)(param_2 + 0x9260);
  pbVar15 = (byte *)(param_2 + 0x10);
  if (0 < (short)*puVar3) {
    sVar16 = 0;
    pbVar14 = (byte *)(param_2 + 0x14a);
    do {
      *pbVar14 = *pbVar14 & 0x7f;
      sVar16 = sVar16 + 1;
      pbVar14 = pbVar14 + 0x150;
    } while (sVar16 < (short)*puVar3);
  }
  FUN_0010d850(auStack_978);
  local_950 = param_2 + 0x8b70;
  local_928 = 0;
  local_960 = *(undefined2 *)(param_2 + 0x924e);
  sVar16 = 0;
  local_1364 = 0;
  local_95e = 1;
  uVar10 = *puVar3;
  iVar11 = (int)(short)uVar10;
  if (0 < iVar11) goto LAB_0010758c;
LAB_00106e88:
  uVar20 = 0;
  iVar11 = 0;
  do {
    uVar17 = (uint)uVar20;
    pbVar14 = (byte *)(*(long *)(param_2 + 0x9258) + uVar20 * 2);
    if ((*pbVar14 & 0xfc) == 0xd8) {
      iVar12 = 1;
      if (*(short *)(*(long *)(param_2 + 0x9258) + uVar20 * 2 + 2) != 0) {
        iVar12 = 2;
      }
      uVar13 = iVar12 + uVar17;
      if ((uVar13 & 0xffff) <= (uint)*(ushort *)(param_2 + 0x9262)) goto LAB_00106ef0;
    }
    else {
      uVar13 = uVar17 + 1;
      if ((uVar13 & 0xffff) <= (uint)*(ushort *)(param_2 + 0x9262)) {
LAB_00106ef0:
        uVar20 = (ulong)uVar13;
LAB_00106ef8:
        do {
          iVar27 = (int)uVar20;
          local_92c = (undefined2)(iVar27 - uVar17);
          local_948 = pbVar14;
          sVar8 = FUN_00109f40(param_1,auStack_978,1,local_1324);
          iVar12 = iVar11;
          if (sVar8 == 0) {
            if (local_1324[0] == '\x01') break;
          }
          else {
            if (sVar8 < 0) {
              return (int)sVar8;
            }
            uVar13 = (uint)(short)*puVar3;
            if ((short)iVar11 < (short)*puVar3) {
              do {
                while( true ) {
                  sVar8 = (short)iVar11;
                  lVar30 = (long)sVar8;
                  lVar29 = param_2 + lVar30 * 0x150;
                  uVar24 = (uint)*(ushort *)(lVar29 + 0x144);
                  if (uVar24 != uVar17) goto LAB_0010751c;
                  lVar21 = param_2 + lVar30 * 0x150;
                  bVar5 = *(byte *)(lVar21 + 0x14a);
                  if ((bVar5 & 0x7f) == 0) break;
LAB_001074f0:
                  iVar11 = (int)(short)(sVar8 + 1);
                  if ((short)uVar13 <= iVar11) goto LAB_0010751c;
                }
                uVar2 = (uint)*(ushort *)(param_2 + lVar30 * 0x150 + 0x146) + (param_3 & 0xffff);
                if (*(char *)(param_1 + 3) == '\x03') {
                  if (*(byte *)(param_2 + 0x9266) < uVar2) goto LAB_001074d8;
                }
                else if ((int)((*(byte *)(param_2 + 0x9266) + uVar24) -
                              (uint)*(ushort *)(param_2 + 0x9262)) < (int)uVar2) {
LAB_001074d8:
                  *(byte *)(lVar21 + 0x14a) = bVar5 & 0x7e | 1;
                  *(undefined2 *)(param_2 + 0x9264) = 1;
                  goto LAB_001074f0;
                }
                uVar23 = (ulong)*(byte *)(param_2 + lVar30 * 0x150 + 0x148);
                if ((uVar23 != 0) &&
                   (*(short *)(param_2 + lVar30 * 0x150 + uVar23 * 0x10 + 0x11c) < 0))
                goto LAB_001074f0;
                memcpy(local_1290,auStack_978,0x918);
                local_1290[0] = *(undefined8 *)(param_2 + lVar30 * 0x150 + 0x150);
                local_1278 = *(undefined2 *)(param_2 + 0x924e);
                local_1276 = 0;
                sVar9 = FUN_0010a610(param_1,local_1290,auStack_1318,1);
                iVar19 = (int)sVar9;
                if (0 < iVar19) {
                  __src = (void *)(lVar29 + 0x10);
                  do {
                    sVar8 = (short)iVar11;
LAB_00107084:
                    uVar2 = (uint)(local_12a8 >> 7);
                    uVar24 = uVar2 - 1;
                    uVar13 = uVar2 + 6;
                    if (-1 < (int)uVar24) {
                      uVar13 = uVar24;
                    }
                    lVar29 = (long)((ulong)uVar13 << 0x20) >> 0x23;
                    if ((0x80U >> (ulong)(uVar24 & 7) &
                        (uint)*(byte *)(*(long *)((long)__src + 0x140) + lVar29)) == 0)
                    goto LAB_00107300;
                    uVar23 = (ulong)*(byte *)((long)__src + 0x138);
                    lVar30 = uVar23 - 2;
                    if (1 < uVar23) {
                      lVar21 = uVar23 * 0x88 + -0x16;
                      lVar31 = uVar23 * 0x88 + -0xc;
                      if ((*(byte *)((long)__src + uVar23 * 0x88 + -0x21) & 0xf0) != 0x50) {
                        lVar21 = uVar23 * 0x88 + -0x18;
                        lVar31 = uVar23 * 0x88 + -0xe;
                      }
                      if ((((ushort)((*(ushort *)((long)__src + lVar31) & 0x7f) +
                                    (*(ushort *)((long)__src + lVar21) & 0x7f)) != 0) ||
                          ((int)lVar30 < 0)) ||
                         (uVar18 = (uint)*(short *)((long)__src + lVar30 * 0x10 + 0x11c),
                         -1 < (int)uVar18)) goto LAB_0010711c;
                      if ((uVar18 >> 0xe & 1) == 0) {
                        if (*(uint *)((long)__src + lVar30 * 0x10 + 0x118) == uVar2)
                        goto LAB_0010711c;
                      }
                      else if ((*(long *)((long)__src + lVar30 * 0x10 + 0x110) == local_1308) &&
                              (*(int *)((long)__src + lVar30 * 0x10 + 0x118) ==
                               local_12d8 + iStack_12d4)) goto LAB_0010711c;
LAB_00107300:
                      sVar9 = FUN_0010a610(param_1,local_1290,auStack_1318,1);
                      iVar19 = (int)sVar9;
                      if (iVar19 < 1) break;
                      goto LAB_00107084;
                    }
LAB_0010711c:
                    lVar21 = (long)(short)*puVar3;
                    lVar31 = param_2 + lVar21 * 0x150;
                    __dest = (void *)(lVar31 + 0x10);
                    memcpy(__dest,__src,0x150);
                    bVar5 = *(byte *)(lVar31 + 0x148);
                    lVar30 = (ulong)bVar5 - 1;
                    puVar26 = (ushort *)((long)__dest + lVar30 * 0x88 + 0x72);
                    puVar4 = puVar26;
                    if (1 < (byte)((*(byte *)((long)__dest + lVar30 * 0x88 + 0x67) >> 4) - 5)) {
                      puVar4 = (ushort *)((long)__dest + lVar30 * 0x88 + 0x70);
                    }
                    if ((*puVar4 & 0x7f) == 0) {
LAB_001071ac:
                      lVar29 = FUN_00108e80(param_1,param_2,__dest,&local_1320);
                      if (lVar29 == 0) goto LAB_00107300;
                      uVar13 = (uint)*(ushort *)(lVar29 + 0x7a);
                      if ((*(ushort *)(lVar29 + 0x7a) & 0x7f) == 0) {
                        uVar13 = local_12a8 & 0xffffff80;
                        *(short *)(lVar29 + 0x7a) = (short)uVar13;
                      }
                      uVar24 = uVar13 + (iVar27 - uVar17);
                      uVar10 = (ushort)uVar24;
                      *(ushort *)(lVar29 + 0x7a) = (ushort)uVar13 & 0xff80 | uVar10 & 0x7f;
                      *(ushort *)(lVar29 + 0x7c) = local_12a6 & 0xff80 | uVar10 & 0x7f;
                      if (*(short *)(lVar29 + 0x78) < local_1310) {
                        *(short *)(lVar29 + 0x78) = local_1310;
                      }
                      uVar24 = uVar24 & 0x7f;
                      if (*(char *)(param_1 + 3) == '\x03') {
                        lVar30 = 0x72;
                        if ((*(byte *)(lVar29 + 0x67) & 0xf0) != 0x50) {
                          lVar30 = 0x70;
                        }
                        uVar10 = *(ushort *)(lVar29 + 0x72);
                        iVar19 = (*(ushort *)(lVar29 + lVar30) & 0x7f) + uVar24;
LAB_00107288:
                        iVar22 = (uVar10 & 0x7f) + uVar24;
                      }
                      else {
                        iVar19 = (*(ushort *)(lVar29 + 0x72) & 0x7f) + uVar24;
                        if ((*(byte *)(lVar29 + 0x67) & 0xf0) != 0x50) {
                          uVar10 = *(ushort *)(lVar29 + 0x70);
                          goto LAB_00107288;
                        }
                        iVar22 = iVar19;
                      }
                      uVar13 = iVar19 + (param_3 & 0xffff) +
                               (uint)*(ushort *)(param_2 + lVar21 * 0x150 + 0x146);
                      if (*(char *)(param_1 + 3) == '\x03') {
                        if (*(byte *)(param_2 + 0x9266) < uVar13) goto LAB_001072f8;
                      }
                      else if ((int)((((uint)*(byte *)(param_2 + 0x9266) + iVar22) -
                                     (uint)*(ushort *)(param_2 + 0x9262)) +
                                    (uint)*(ushort *)(param_2 + lVar21 * 0x150 + 0x144)) <
                               (int)uVar13) {
LAB_001072f8:
                        *(undefined2 *)(param_2 + 0x9264) = 1;
                        goto LAB_00107300;
                      }
                      sVar9 = FUN_00108620(param_1,param_2,__dest,lVar29,local_1320);
                      if (sVar9 != 0) goto LAB_0010743c;
                      goto LAB_00107300;
                    }
                    if (local_1310 < 0) {
                      bVar1 = true;
                    }
                    else {
                      lVar25 = *(long *)(param_2 + lVar21 * 0x150 + 0x158);
                      if ((lVar25 == 0) ||
                         ((1 << (ulong)((((int)uVar13 >> 3) * 8 - uVar24) + 7 & 0x1f) &
                          (uint)*(byte *)(lVar25 + lVar29)) == 0)) goto LAB_001071ac;
                      bVar1 = false;
                    }
                    if ((*(byte *)(param_2 + lVar21 * 0x150 + lVar30 * 0x88 + 0x8a) & 0x7f) == 0) {
                      if (bVar5 != 0) {
                        lVar29 = param_2 + lVar21 * 0x150 + lVar30 * 0x10;
                        *(ushort *)(lVar29 + 300) =
                             *(ushort *)(lVar29 + 300) & 0xfe00 | *puVar26 >> 7;
                      }
LAB_001073d4:
                      if (!bVar1) goto LAB_0010738c;
LAB_001073e0:
                      if (bVar5 != 0) {
                        lVar29 = param_2 + lVar21 * 0x150 + lVar30 * 0x10;
                        *(long *)(lVar29 + 0x120) = local_1308;
                        *(int *)(lVar29 + 0x128) = local_12d8 + iStack_12d4;
                      }
                      uVar10 = 0xc000;
                      bVar5 = *(byte *)(lVar31 + 0x148);
                    }
                    else {
                      if (bVar5 == 0) goto LAB_001073d4;
                      lVar29 = param_2 + lVar21 * 0x150 + 0x10;
                      lVar25 = lVar29 + lVar30 * 0x10;
                      uVar10 = *(ushort *)(lVar25 + 0x11c) & 0xfe00;
                      *(ushort *)(lVar25 + 0x11c) = uVar10;
                      *(ushort *)(lVar25 + 0x11c) =
                           uVar10 | *(ushort *)(lVar29 + lVar30 * 0x88 + 0x7c) >> 7;
                      if (bVar1) goto LAB_001073e0;
LAB_0010738c:
                      if (bVar5 != 0) {
                        *(uint *)(param_2 + lVar21 * 0x150 + lVar30 * 0x10 + 0x128) = uVar2;
                      }
                      uVar10 = 0x8000;
                      bVar5 = *(byte *)(lVar31 + 0x148);
                    }
                    if ((ulong)bVar5 != 0) {
                      lVar29 = param_2 + lVar21 * 0x150 + (ulong)bVar5 * 0x10;
                      *(ushort *)(lVar29 + 0x11c) = *(ushort *)(lVar29 + 0x11c) & 0x3fff | uVar10;
                    }
LAB_0010743c:
                    lVar29 = param_2 + lVar21 * 0x150;
                    *(byte *)(lVar29 + 0x14a) = *(byte *)(lVar29 + 0x14a) | 0x80;
                    sVar9 = FUN_001087f0(param_2);
                    if (0 < sVar9) {
                      local_1364 = local_1364 + 1;
                      sVar8 = sVar8 + 1;
                      iVar11 = (int)sVar8;
                      uVar13 = (uint)(short)*puVar3;
                      iVar12 = iVar12 + 1;
                      if ((int)uVar13 <= iVar11) goto LAB_00106f68;
                      __src = (void *)(param_2 + (long)iVar11 * 0x150 + 0x10);
                    }
                    sVar8 = (short)iVar11;
                    sVar9 = FUN_0010a610(param_1,local_1290,auStack_1318,1);
                    iVar19 = (int)sVar9;
                  } while (0 < iVar19);
                }
                if (iVar19 < 0) {
                  return iVar19;
                }
                uVar13 = (uint)*puVar3;
LAB_00106f68:
                iVar11 = (int)(short)(sVar8 + 1);
              } while (iVar11 < (short)uVar13);
            }
          }
LAB_0010751c:
          iVar11 = iVar12;
          if ((*(byte *)(*(long *)(param_2 + 0x9258) + (uVar20 & 0xffff) * 2) & 0xfc) != 0xd8) {
            uVar20 = (ulong)(iVar27 + 1U);
            if ((uint)*(ushort *)(param_2 + 0x9262) < (iVar27 + 1U & 0xffff)) break;
            goto LAB_00106ef8;
          }
          iVar12 = 1;
          if (*(short *)(*(long *)(param_2 + 0x9258) + (uVar20 & 0xffff) * 2 + 2) != 0) {
            iVar12 = 2;
          }
          uVar20 = (ulong)(uint)(iVar12 + iVar27);
        } while ((iVar12 + iVar27 & 0xffffU) <= (uint)*(ushort *)(param_2 + 0x9262));
      }
    }
    sVar16 = sVar16 + 1;
    uVar10 = *puVar3;
    iVar11 = (int)(short)uVar10;
    if (iVar11 < 1) goto LAB_00106e88;
LAB_0010758c:
    uVar23 = (ulong)(iVar11 - 1U);
    if (-1 < sVar16) {
      uVar20 = (ulong)*(ushort *)(param_2 + (long)(short)(iVar11 - 1U) * 0x150 + 0x144);
      sVar8 = sVar16;
      do {
        sVar9 = (short)uVar23;
        if (sVar9 < 0) {
LAB_00107608:
          if (sVar8 != 0) goto LAB_00107610;
          iVar11 = 0;
          uVar28 = (ushort)uVar20;
          goto joined_r0x00106e80;
        }
        puVar26 = (ushort *)(param_2 + 0x144 + (long)sVar9 * 0x150);
        uVar23 = (long)sVar9;
        while ((uint)*puVar26 == (uint)uVar20) {
          puVar26 = puVar26 + -0xa8;
          bVar1 = (long)uVar23 < 1;
          uVar23 = uVar23 - 1;
          if (bVar1) goto LAB_00107608;
        }
        uVar20 = (ulong)(uint)*puVar26;
        bVar1 = 0 < sVar8;
        sVar8 = sVar8 + -1;
      } while (bVar1);
    }
    iVar11 = (int)uVar23 + 1;
    uVar28 = *(ushort *)(param_2 + (long)(short)iVar11 * 0x150 + 0x144);
    uVar20 = (ulong)uVar28;
joined_r0x00106e80:
    if ((short)uVar28 < 0) {
LAB_00107610:
      uVar20 = (ulong)*(byte *)(param_2 + 0x148);
      lVar29 = param_2 + uVar20 * 0x88;
      puVar26 = (ushort *)(lVar29 + -6);
      if (1 < (byte)((*(byte *)(lVar29 + -0x11) >> 4) - 5)) {
        puVar26 = (ushort *)(lVar29 + -8);
      }
      if ((short)uVar10 < 1) {
        uVar28 = 0;
        *puVar3 = 0;
        goto LAB_001077a0;
      }
      uVar6 = *puVar26;
      uVar7 = *(ushort *)(lVar29 + 2);
      sVar16 = 0;
      uVar28 = 0;
      pbVar14 = (byte *)(param_2 + 0x148);
      break;
    }
  } while( true );
LAB_00107684:
  uVar23 = (ulong)*pbVar14;
  lVar29 = uVar23 * 0x88 + -0x14e;
  if (1 < (byte)((pbVar14[uVar23 * 0x88 + -0x159] >> 4) - 5)) {
    lVar29 = uVar23 * 0x88 + -0x150;
  }
  if (((uint)uVar20 < (uint)*pbVar14) ||
     (uVar17 = (*(ushort *)(pbVar14 + uVar23 * 0x88 + -0x146) & 0x7f) +
               (*(ushort *)(pbVar14 + lVar29) & 0x7f),
     (((uVar7 & 0x7f) + (uVar6 & 0x7f)) / 3 <= uVar17 || uVar17 == 0) ||
     (*(ushort *)(pbVar14 + uVar23 * 0x88 + -0x146) & 0x7f) == 0 &&
     pbVar14[uVar23 * 0x88 + -0x14c] != 0)) {
    if (pbVar14 + -0x138 != pbVar15) {
      memcpy(pbVar15,pbVar14 + -0x138,0x150);
      uVar10 = *puVar3;
    }
    pbVar15 = pbVar15 + 0x150;
    uVar28 = uVar28 + 1;
    if ((short)uVar10 <= (short)(sVar16 + 1)) goto LAB_00107758;
  }
  else {
    local_1364 = local_1364 + ((int)(char)pbVar14[2] >> 7);
    if ((short)uVar10 <= (short)(sVar16 + 1)) {
LAB_00107758:
      *puVar3 = uVar28;
      if (0 < (short)uVar28) {
        sVar16 = 0;
        pbVar15 = (byte *)(param_2 + 0x14a);
        do {
          *pbVar15 = *pbVar15 & 0x7f;
          uVar28 = *puVar3;
          sVar16 = sVar16 + 1;
          pbVar15 = pbVar15 + 0x150;
        } while (sVar16 < (short)uVar28);
      }
LAB_001077a0:
      if (*(short *)(param_2 + (long)(short)uVar28 * 0x150 + -0xc) == 0) {
        *puVar3 = uVar28 - 1;
      }
      return local_1364;
    }
  }
  sVar16 = sVar16 + 1;
  uVar20 = (ulong)*(byte *)(param_2 + 0x148);
  pbVar14 = pbVar14 + 0x150;
  goto LAB_00107684;
}

