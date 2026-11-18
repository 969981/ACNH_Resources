
void FUN_0365c7b0(long *param_1,uint *param_2,int *param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  short sVar8;
  long lVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  
  iVar19 = *(int *)((long)param_1 + (ulong)*(uint *)(param_1 + 0x434) * 4 + 0x2190);
  *param_2 = *param_2 + iVar19;
  iVar18 = (int)param_1[0x432];
  iVar23 = -(uint)(iVar18 == -1);
  iVar20 = (int)((ulong)param_1[0x432] >> 0x20);
  iVar24 = -(uint)(iVar20 == -1);
  iVar21 = (int)param_1[0x433];
  iVar26 = -(uint)(iVar21 == -1);
  iVar22 = (int)((ulong)param_1[0x433] >> 0x20);
  iVar28 = -(uint)(iVar22 == -1);
  *(int *)((long)param_1 + 0x218c) = *(int *)((long)param_1 + 0x218c) + iVar19;
  iVar18 = iVar18 - iVar19;
  iVar20 = iVar20 - iVar19;
  iVar21 = iVar21 - iVar19;
  iVar22 = iVar22 - iVar19;
  param_1[0x433] =
       CONCAT17((byte)((uint)iVar22 >> 0x18) | (byte)((uint)iVar28 >> 0x18),
                CONCAT16((byte)((uint)iVar22 >> 0x10) | (byte)((uint)iVar28 >> 0x10),
                         CONCAT15((byte)((uint)iVar22 >> 8) | (byte)((uint)iVar28 >> 8),
                                  CONCAT14((byte)iVar22 | (byte)iVar28,
                                           CONCAT13((byte)((uint)iVar21 >> 0x18) |
                                                    (byte)((uint)iVar26 >> 0x18),
                                                    CONCAT12((byte)((uint)iVar21 >> 0x10) |
                                                             (byte)((uint)iVar26 >> 0x10),
                                                             CONCAT11((byte)((uint)iVar21 >> 8) |
                                                                      (byte)((uint)iVar26 >> 8),
                                                                      (byte)iVar21 | (byte)iVar26)))
                                          ))));
  param_1[0x432] =
       CONCAT17((byte)((uint)iVar20 >> 0x18) | (byte)((uint)iVar24 >> 0x18),
                CONCAT16((byte)((uint)iVar20 >> 0x10) | (byte)((uint)iVar24 >> 0x10),
                         CONCAT15((byte)((uint)iVar20 >> 8) | (byte)((uint)iVar24 >> 8),
                                  CONCAT14((byte)iVar20 | (byte)iVar24,
                                           CONCAT13((byte)((uint)iVar18 >> 0x18) |
                                                    (byte)((uint)iVar23 >> 0x18),
                                                    CONCAT12((byte)((uint)iVar18 >> 0x10) |
                                                             (byte)((uint)iVar23 >> 0x10),
                                                             CONCAT11((byte)((uint)iVar18 >> 8) |
                                                                      (byte)((uint)iVar23 >> 8),
                                                                      (byte)iVar18 | (byte)iVar23)))
                                          ))));
  *param_3 = *param_3 - iVar19;
  if ((int)param_1[0x434] == 2) {
    iVar19 = *(int *)((long)param_1 + 0x218c);
    if (iVar19 != 0) {
      uVar11 = FUN_0365c1e0(param_1,(long)param_1 + 0x204c,iVar19);
      uVar11 = FUN_0365c1e0(uVar11,param_1 + 0x413,iVar19);
      uVar11 = FUN_0365c320(uVar11,(long)param_1 + 0x20e4,iVar19);
      FUN_0365c470(uVar11,(long)param_1 + 0x2114,iVar19);
      *(undefined4 *)((long)param_1 + 0x218c) = 0;
      *(int *)(param_1 + 0x407) = (int)param_1[0x407] + iVar19;
    }
    if (*(int *)((long)param_1 + 0x2044) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0365c984. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&DAT_04197988 + (ulong)*(uint *)(param_1 + 0x408) * 2) * 4 +
                0x365c988))();
      return;
    }
    uVar15 = 1 << (ulong)(*(uint *)(param_1 + 0x408) & 0x1f);
    if ((uVar15 & 5) == 0) {
      if ((uVar15 & 0x12) != 0) {
        FUN_0365be64(param_1);
        if (*(char *)((long)param_1 + 0x20f9) == '\0') {
          if ((int)param_1[0x41e] != 0) {
            iVar19 = (int)param_1[0x41e] + -1;
            goto LAB_0365cfb0;
          }
        }
        else {
          iVar19 = *(int *)((long)param_1 + 0x20f4);
LAB_0365cfb0:
          *(int *)(param_1 + 0x41e) = iVar19;
        }
        if ((char)param_1[0x41f] == '\0') {
          *(undefined1 *)((long)param_1 + 0x20f9) = 0;
        }
        FUN_0365bf84(param_1);
        FUN_0365c0d8(param_1);
      }
    }
    else {
      FUN_0365be64(param_1);
      if (*(char *)((long)param_1 + 0x20f9) == '\0') {
        if ((int)param_1[0x41e] != 0) {
          iVar19 = (int)param_1[0x41e] + -1;
          goto LAB_0365cf90;
        }
      }
      else {
        iVar19 = *(int *)((long)param_1 + 0x20f4);
LAB_0365cf90:
        *(int *)(param_1 + 0x41e) = iVar19;
      }
      if ((char)param_1[0x41f] == '\0') {
        *(undefined1 *)((long)param_1 + 0x20f9) = 0;
      }
    }
    uVar15 = ((int)param_1[0x408] + 1U) % 6;
    uVar13 = *(uint *)(param_1 + 0x432);
    *(undefined4 *)(param_1 + 0x435) = 0xffffffff;
    uVar7 = *(uint *)((long)param_1 + 0x2194);
    *(uint *)(param_1 + 0x408) = uVar15;
    iVar19 = *(int *)(&UNK_04197994 +
                     (ulong)uVar15 * 4 + (ulong)*(uint *)((long)param_1 + 0x2044) * 0x18);
    uVar15 = uVar13;
    if (uVar7 <= uVar13) {
      uVar15 = uVar7;
    }
    *(int *)(param_1 + 0x433) = iVar19 << 10;
    uVar13 = (uint)(uVar7 <= uVar13);
    if ((uint)(iVar19 << 10) <= uVar15) {
      uVar13 = 2;
    }
    goto LAB_0365d0a4;
  }
  if ((int)param_1[0x434] == 1) {
    uVar15 = *param_2;
    if ((char)param_1[0x430] == '\0') {
      uVar13 = *(uint *)((long)param_1 + 0x217c);
      if ((*(uint *)((long)param_1 + 0x2174) & 1) == 0) {
        if (1 < uVar13) {
          iVar19 = -2;
          goto LAB_0365cbd8;
        }
      }
      else if (uVar13 < 0x7e) {
        iVar19 = 2;
LAB_0365cbd8:
        *(uint *)((long)param_1 + 0x217c) = iVar19 + uVar13;
      }
    }
    *(uint *)((long)param_1 + 0x2174) = *(uint *)((long)param_1 + 0x2174) >> 1;
    iVar19 = (int)param_1[0x42f] + -1;
    *(int *)(param_1 + 0x42f) = iVar19;
    if (iVar19 == 0) {
      *(undefined4 *)(param_1 + 0x42f) = 8;
      if (*(char *)((long)param_1 + 0x2164) == '\0') {
        *(undefined1 *)(param_1 + 0x430) = 0;
        *(int *)((long)param_1 + 0x2174) = (int)param_1[0x42c];
        *(undefined1 *)((long)param_1 + 0x2164) = 1;
        if (*(int *)((long)param_1 + 0x215c) != 0) {
          *(int *)(param_1 + 0x431) = (int)param_1[0x431] + 1;
          (*(code *)param_1[2])(uVar15 >> 10,param_1[3]);
          uVar15 = *(uint *)(param_1 + 0x42b);
          iVar19 = 0x8000;
          if (uVar15 + 1 >> 0x10 == 0) {
            iVar19 = uVar15 + 1;
          }
          bVar5 = *(byte *)(*(long *)(*param_1 + ((ulong)(uVar15 >> 4) & 0xffffff0) + 0xc00) +
                           ((ulong)uVar15 & 0xff));
          *(int *)(param_1 + 0x42b) = iVar19;
          *(undefined1 *)((long)param_1 + 0x2164) = 0;
          iVar19 = *(int *)((long)param_1 + 0x215c) + -1;
          *(uint *)(param_1 + 0x42c) = (uint)bVar5;
          *(int *)((long)param_1 + 0x215c) = iVar19;
          if (iVar19 == 0) {
            if (*(char *)((long)param_1 + 0x2186) == '\0') {
              if (*(char *)((long)param_1 + 0x2184) != '\0') {
                *(undefined1 *)((long)param_1 + 0x2185) = 1;
              }
            }
            else {
              *(int *)(param_1 + 0x42b) = (int)param_1[0x42a];
              *(undefined4 *)((long)param_1 + 0x215c) = *(undefined4 *)((long)param_1 + 0x2154);
            }
          }
        }
      }
      else {
        *(undefined1 *)(param_1 + 0x430) = 1;
      }
    }
    if ((*(char *)((long)param_1 + 0x2184) != '\0') && (*(char *)((long)param_1 + 0x2185) != '\0'))
    {
      *(uint *)param_1[1] = *(uint *)param_1[1] | 0x10;
    }
    uVar13 = (int)param_1[0x42e] << 10;
    uVar15 = *(uint *)(param_1 + 0x432);
    bVar10 = uVar13 <= uVar15;
    *(uint *)((long)param_1 + 0x2194) = uVar13;
    bVar1 = bVar10;
  }
  else {
    iVar19 = *(int *)((long)param_1 + 0x218c);
    if (iVar19 != 0) {
      uVar11 = FUN_0365c1e0(param_1,(long)param_1 + 0x204c,iVar19);
      uVar11 = FUN_0365c1e0(uVar11,param_1 + 0x413,iVar19);
      uVar11 = FUN_0365c320(uVar11,(long)param_1 + 0x20e4,iVar19);
      FUN_0365c470(uVar11,(long)param_1 + 0x2114,iVar19);
      *(undefined4 *)((long)param_1 + 0x218c) = 0;
      *(int *)(param_1 + 0x407) = (int)param_1[0x407] + iVar19;
    }
    uVar15 = *(uint *)((long)param_1 + 0x2084);
    if ((uVar15 < 8) ||
       ((*(char *)((long)param_1 + 0x2079) == '\0' &&
        (0x7ff < (uVar15 >> (ulong)(*(uint *)((long)param_1 + 0x2074) & 0x1f)) + uVar15)))) {
      iVar19 = 0;
    }
    else {
      plVar3 = param_1 + 0x40c;
      if (*(char *)((long)param_1 + 0x206a) != '\0') {
        plVar3 = (long *)((long)param_1 + 0x2064);
      }
      iVar19 = (int)*plVar3 * (int)param_1[0x412];
    }
    uVar15 = *(uint *)(param_1 + 0x41a);
    if (uVar15 < 8) {
LAB_0365ca38:
      iVar18 = 0;
    }
    else {
      uVar7 = uVar15 >> (ulong)(*(uint *)(param_1 + 0x418) & 0x1f);
      uVar13 = -uVar7;
      if (*(char *)((long)param_1 + 0x20c5) == '\0') {
        uVar13 = uVar7;
      }
      if (0x7ff < uVar13 + uVar15) goto LAB_0365ca38;
      plVar3 = (long *)((long)param_1 + 0x20ac);
      if (*(char *)((long)param_1 + 0x20b6) != '\0') {
        plVar3 = param_1 + 0x416;
      }
      iVar18 = (int)*plVar3 * *(int *)((long)param_1 + 0x20dc);
    }
    param_1[0x412] = 0;
    *(undefined8 *)((long)param_1 + 0x20dc) = 0;
    lVar16 = param_1[0x429];
    plVar3 = param_1 + 0x425;
    if (*(char *)((long)param_1 + 0x2132) != '\0') {
      plVar3 = (long *)((long)param_1 + 0x212c);
    }
    lVar9 = *plVar3;
    param_1[0x429] = 0;
    uVar15 = (uint)*(ushort *)(&DAT_041985e4 + (ulong)(uint)((int)lVar9 * (int)lVar16) * 2) +
             (uint)*(ushort *)(&DAT_041981e4 + (ulong)*(uint *)((long)param_1 + 0x210c) * 2) +
             *(int *)(&DAT_041989e4 + (ulong)*(uint *)((long)param_1 + 0x217c) * 4);
    uVar17 = (ulong)(uVar15 + 0x28f5c);
    iVar19 = *(int *)(&DAT_041979e4 + (ulong)(uint)(iVar18 + iVar19) * 4);
    iVar18 = 0;
    if (uVar17 != 0) {
      iVar18 = (int)(((ulong)uVar15 * 0x1990ffa & 0xffffffff000000) / uVar17);
    }
    uVar15 = *(uint *)(param_1 + 0x436);
    uVar7 = uVar15 * 0xbc8f;
    *(undefined8 *)((long)param_1 + 0x210c) = 0;
    uVar13 = uVar7 / 0x7fffffff;
    *(uint *)(param_1 + 0x436) = uVar7 + (uVar13 | uVar13 << 0x1f);
    uVar15 = (uint)(((ulong)(uint)(iVar19 + iVar18) * 0xffff000000 >> 0x18) +
                    SUB168((ZEXT416(uVar15) * (undefined1  [16])0x1000000) /
                           (undefined1  [16])0x7fffffff,0) >> 0x18) ^ 0xffff8000;
    sVar8 = (short)uVar15;
    if (*(char *)((long)param_1 + 0x21b4) == '\0') {
      if (*(char *)((long)param_1 + 0x21c4) != '\0') {
        uVar13 = *(uint *)(param_1 + 0x437);
        *(undefined4 *)(param_1 + 0x438) = 0;
        *(uint *)(param_1 + 0x439) = uVar15 << 0x10;
        if (uVar13 != 0) {
          lVar16 = 0;
          do {
            *(short *)(param_1[0x43a] + lVar16 * 2) = sVar8;
            lVar16 = lVar16 + 1;
          } while ((uint)lVar16 >> (ulong)(uVar13 & 0x1f) == 0);
        }
        *(undefined1 *)((long)param_1 + 0x21c4) = 0;
      }
      uVar6 = *(ushort *)(param_1[0x43a] + (ulong)*(uint *)(param_1 + 0x438) * 2);
      *(short *)(param_1[0x43a] + (ulong)*(uint *)(param_1 + 0x438) * 2) = sVar8;
      *(uint *)(param_1 + 0x438) = (int)param_1[0x438] + 1U & *(uint *)((long)param_1 + 0x21bc);
      iVar19 = ((int)param_1[0x439] -
               ((int)((uint)uVar6 << 0x10) >> (*(uint *)(param_1 + 0x437) & 0x1f))) +
               ((int)(uVar15 << 0x10) >> (*(uint *)(param_1 + 0x437) & 0x1f));
      iVar18 = (int)sVar8 - (iVar19 >> 0x10);
      *(int *)(param_1 + 0x439) = iVar19;
      if (0x7ffe < iVar18) {
        iVar18 = 0x7fff;
      }
      if (iVar18 < -0x7fff) {
        iVar18 = -0x8000;
      }
      uVar12 = (undefined2)iVar18;
      cVar4 = (char)param_1[0x43c];
    }
    else {
      iVar18 = (0x8000 - *(int *)((long)param_1 + 0x21dc)) * (int)sVar8 +
               ((int)param_1[0x43b] >> 0xf) * *(int *)((long)param_1 + 0x21dc);
      iVar19 = (int)sVar8 - (iVar18 >> 0xf);
      *(int *)(param_1 + 0x43b) = iVar18;
      if (iVar19 < -0x7fff) {
        iVar19 = -0x8000;
      }
      if (0x7ffe < iVar19) {
        iVar19 = 0x7fff;
      }
      uVar12 = (undefined2)iVar19;
      cVar4 = (char)param_1[0x43c];
    }
    if (cVar4 != '\0') {
      if (*(char *)((long)param_1 + 0x2574) != '\0') {
        *(undefined2 *)(param_1 + 0x43e) = uVar12;
        *(undefined2 *)((long)param_1 + 0x21f2) = uVar12;
        *(undefined2 *)((long)param_1 + 0x21f4) = uVar12;
        *(undefined2 *)((long)param_1 + 0x21f6) = uVar12;
        *(undefined2 *)(param_1 + 0x43f) = uVar12;
        *(undefined2 *)((long)param_1 + 0x21fa) = uVar12;
        *(undefined2 *)((long)param_1 + 0x21fc) = uVar12;
        *(undefined2 *)((long)param_1 + 0x21fe) = uVar12;
        *(undefined2 *)(param_1 + 0x440) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2202) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2204) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2206) = uVar12;
        *(undefined2 *)(param_1 + 0x441) = uVar12;
        *(undefined2 *)((long)param_1 + 0x220a) = uVar12;
        *(undefined2 *)((long)param_1 + 0x220c) = uVar12;
        *(undefined2 *)((long)param_1 + 0x220e) = uVar12;
        *(undefined2 *)(param_1 + 0x442) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2212) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2214) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2216) = uVar12;
        *(undefined2 *)(param_1 + 0x443) = uVar12;
        *(undefined2 *)((long)param_1 + 0x221a) = uVar12;
        *(undefined2 *)((long)param_1 + 0x221c) = uVar12;
        *(undefined2 *)((long)param_1 + 0x221e) = uVar12;
        *(undefined2 *)(param_1 + 0x444) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2222) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2224) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2226) = uVar12;
        *(undefined2 *)(param_1 + 0x445) = uVar12;
        *(undefined2 *)((long)param_1 + 0x222a) = uVar12;
        *(undefined2 *)((long)param_1 + 0x222c) = uVar12;
        *(undefined2 *)((long)param_1 + 0x222e) = uVar12;
        *(undefined2 *)(param_1 + 0x446) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2232) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2234) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2236) = uVar12;
        *(undefined2 *)(param_1 + 0x447) = uVar12;
        *(undefined2 *)((long)param_1 + 0x223a) = uVar12;
        *(undefined2 *)((long)param_1 + 0x223c) = uVar12;
        *(undefined2 *)((long)param_1 + 0x223e) = uVar12;
        *(undefined2 *)(param_1 + 0x448) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2242) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2244) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2246) = uVar12;
        *(undefined2 *)(param_1 + 0x449) = uVar12;
        *(undefined2 *)((long)param_1 + 0x224a) = uVar12;
        *(undefined2 *)((long)param_1 + 0x224c) = uVar12;
        *(undefined2 *)((long)param_1 + 0x224e) = uVar12;
        *(undefined2 *)(param_1 + 0x44a) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2252) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2254) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2256) = uVar12;
        *(undefined2 *)(param_1 + 1099) = uVar12;
        *(undefined2 *)((long)param_1 + 0x225a) = uVar12;
        *(undefined2 *)((long)param_1 + 0x225c) = uVar12;
        *(undefined2 *)((long)param_1 + 0x225e) = uVar12;
        *(undefined2 *)(param_1 + 0x44c) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2262) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2264) = uVar12;
        *(undefined2 *)((long)param_1 + 0x2266) = uVar12;
        *(undefined2 *)(param_1 + 0x44d) = uVar12;
        *(undefined2 *)((long)param_1 + 0x226a) = uVar12;
        *(undefined2 *)((long)param_1 + 0x226c) = uVar12;
        *(undefined2 *)((long)param_1 + 0x226e) = uVar12;
        *(undefined1 *)((long)param_1 + 0x2574) = 0;
      }
      iVar19 = 0;
      iVar18 = 0;
      iVar20 = 0;
      iVar21 = 0;
      lVar16 = 0;
      iVar24 = 0;
      iVar26 = 0;
      iVar22 = 0;
      iVar23 = 0;
      iVar27 = 0;
      iVar29 = 0;
      iVar28 = 0;
      iVar25 = 0;
      iVar32 = 0;
      iVar33 = 0;
      iVar30 = 0;
      iVar31 = 0;
      *(undefined2 *)((long)(param_1 + 0x43e) + (ulong)*(uint *)(param_1 + 0x4ae) * 2) = uVar12;
      uVar15 = (int)param_1[0x4ae] + 1U & 0x3f;
      *(uint *)(param_1 + 0x4ae) = uVar15;
      puVar14 = (undefined8 *)((long)param_1 + (ulong)uVar15 * -4 + 0x24a0);
      do {
        puVar2 = (undefined8 *)((long)param_1 + lVar16 + 0x2200);
        lVar16 = lVar16 + 0x20;
        uVar34 = puVar2[-1];
        uVar11 = puVar2[-2];
        iVar22 = iVar22 + (int)puVar14[-4] * (int)(short)uVar34;
        iVar23 = iVar23 + (int)((ulong)puVar14[-4] >> 0x20) * (int)(short)((ulong)uVar34 >> 0x10);
        iVar24 = iVar24 + (int)puVar14[-3] * (int)(short)((ulong)uVar34 >> 0x20);
        iVar26 = iVar26 + (int)((ulong)puVar14[-3] >> 0x20) * (int)(short)((ulong)uVar34 >> 0x30);
        uVar35 = puVar2[1];
        uVar34 = *puVar2;
        iVar19 = iVar19 + (int)puVar14[-6] * (int)(short)uVar11;
        iVar18 = iVar18 + (int)((ulong)puVar14[-6] >> 0x20) * (int)(short)((ulong)uVar11 >> 0x10);
        iVar20 = iVar20 + (int)puVar14[-5] * (int)(short)((ulong)uVar11 >> 0x20);
        iVar21 = iVar21 + (int)((ulong)puVar14[-5] >> 0x20) * (int)(short)((ulong)uVar11 >> 0x30);
        iVar28 = iVar28 + (int)puVar14[-2] * (int)(short)uVar34;
        iVar25 = iVar25 + (int)((ulong)puVar14[-2] >> 0x20) * (int)(short)((ulong)uVar34 >> 0x10);
        iVar27 = iVar27 + (int)puVar14[-1] * (int)(short)((ulong)uVar34 >> 0x20);
        iVar29 = iVar29 + (int)((ulong)puVar14[-1] >> 0x20) * (int)(short)((ulong)uVar34 >> 0x30);
        iVar30 = iVar30 + (int)*puVar14 * (int)(short)uVar35;
        iVar31 = iVar31 + (int)((ulong)*puVar14 >> 0x20) * (int)(short)((ulong)uVar35 >> 0x10);
        iVar32 = iVar32 + (int)puVar14[1] * (int)(short)((ulong)uVar35 >> 0x20);
        iVar33 = iVar33 + (int)((ulong)puVar14[1] >> 0x20) * (int)(short)((ulong)uVar35 >> 0x30);
        puVar14 = puVar14 + 8;
      } while (lVar16 != 0x80);
      iVar19 = iVar22 + iVar19 + iVar28 + iVar30 + iVar23 + iVar18 + iVar25 + iVar31 +
               iVar24 + iVar20 + iVar27 + iVar32 + iVar26 + iVar21 + iVar29 + iVar33 >> 0xf;
      if (iVar19 < -0x7fff) {
        iVar19 = -0x8000;
      }
      if (0x7ffe < iVar19) {
        iVar19 = 0x7fff;
      }
      uVar12 = (undefined2)iVar19;
    }
    uVar15 = *(uint *)(param_1 + 0x406);
    *(uint *)(param_1 + 0x406) = uVar15 + 1;
    *(undefined2 *)((long)param_1 + (ulong)uVar15 * 2 + 0x30) = uVar12;
    uVar13 = 0x8000;
    *(undefined4 *)(param_1 + 0x432) = 0x8000;
    *(int *)((long)param_1 + 0x2034) = *(int *)((long)param_1 + 0x2034) + -0x8000;
    uVar15 = *(uint *)((long)param_1 + 0x2194);
    bVar10 = 0x7fff < uVar15;
    bVar1 = uVar15 < 0x8001;
  }
  if (bVar10) {
    uVar15 = uVar13;
  }
  uVar13 = (uint)bVar1;
  if (*(uint *)(param_1 + 0x433) <= uVar15) {
    uVar13 = 2;
  }
LAB_0365d0a4:
  *(uint *)(param_1 + 0x434) = uVar13;
  return;
}

