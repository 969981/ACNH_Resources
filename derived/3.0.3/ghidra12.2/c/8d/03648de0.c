
void FUN_03648de0(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  char cVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  int *piVar20;
  char cVar22;
  char cVar23;
  char cVar24;
  char cVar25;
  char cVar26;
  char cVar27;
  undefined8 uVar21;
  char cVar28;
  long local_80 [8];
  
  uVar19 = (ulong)param_3;
  if ((param_3 == 0) && (piVar20 = *(int **)(param_1 + 0x98), *piVar20 == 2)) {
    FUN_03645030(piVar20,*(long *)(piVar20 + 8) +
                         (ulong)*(uint *)(*(long *)(piVar20 + 8) + 0x1e018) * 0x3138 + 0x1e01c);
    *(int *)(*(long *)(piVar20 + 8) + 0x1e018) = *(int *)(*(long *)(piVar20 + 8) + 0x1e018) + 1;
  }
  bVar2 = *(byte *)(param_1 + 0x3a);
  if ((bVar2 >> 3 & 1) == 0) {
    *(undefined8 *)(param_1 + uVar19 + 0xa0) = 0;
    uVar7 = *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x90) + 0x20) + 0x1f00);
    *(ulong *)(*(long *)(param_1 + 0x1a0) + (ulong)(uint)(param_2 << 8) + uVar19) =
         CONCAT17(uVar7,CONCAT16(uVar7,CONCAT15(uVar7,CONCAT14(uVar7,CONCAT13(uVar7,CONCAT12(uVar7,
                                                  CONCAT11(uVar7,uVar7)))))));
  }
  else {
    plVar10 = (long *)(*(long *)(param_1 + 0x1a0) + (ulong)(param_3 + param_2 * 0x100));
    if (param_3 == 0 && (bVar2 & 2) == 0) {
      *(undefined8 *)(param_1 + 0xa0) = 0;
      *plVar10 = (ulong)*(byte *)(*(long *)(*(long *)(param_1 + 0x90) + 0x20) + 0x1f00) *
                 0x101010101010101;
    }
    else {
      bVar3 = *(byte *)(param_1 + 0xf319);
      bVar4 = *(byte *)(param_1 + 0x59);
      uVar12 = (ulong)bVar4;
      lVar14 = *(long *)(*(long *)(param_1 + 0x90) + 0x20);
      if (bVar3 == *(byte *)(param_1 + 0xf31d)) {
        uVar21 = *(undefined8 *)(param_1 + uVar12 + 0xf300);
        cVar13 = bVar3 * '\x04';
        cVar22 = (char)((ulong)uVar21 >> 8);
        cVar23 = (char)((ulong)uVar21 >> 0x10);
        cVar24 = (char)((ulong)uVar21 >> 0x18);
        cVar25 = (char)((ulong)uVar21 >> 0x20);
        cVar26 = (char)((ulong)uVar21 >> 0x28);
        cVar27 = (char)((ulong)uVar21 >> 0x30);
        cVar28 = (char)((ulong)uVar21 >> 0x38);
        lVar14 = a64_TBL(ZEXT816(0),*(undefined1 (*) [16])(lVar14 + 0x1f00),
                         *(undefined1 (*) [16])(lVar14 + 0x1f10),
                         CONCAT17(cVar28 + cVar13 & ~-(cVar28 == '\0'),
                                  CONCAT16(cVar27 + cVar13 & ~-(cVar27 == '\0'),
                                           CONCAT15(cVar26 + cVar13 & ~-(cVar26 == '\0'),
                                                    CONCAT14(cVar25 + cVar13 & ~-(cVar25 == '\0'),
                                                             CONCAT13(cVar24 + cVar13 &
                                                                      ~-(cVar24 == '\0'),
                                                                      CONCAT12(cVar23 + cVar13 &
                                                                               ~-(cVar23 == '\0'),
                                                                               CONCAT11(cVar22 + 
                                                  cVar13 & ~-(cVar22 == '\0'),
                                                  (char)uVar21 + cVar13 & ~-((char)uVar21 == '\0')))
                                                  ))))));
        *plVar10 = lVar14;
        *(undefined8 *)(param_1 + uVar19 + 0xa0) = uVar21;
      }
      else {
        uVar9 = (uint)bVar4;
        if (bVar4 < 8) {
          uVar9 = 7;
        }
        lVar18 = (uVar9 - uVar12) + 1;
        pbVar16 = (byte *)(uVar12 + param_1 + 0xf300);
        uVar12 = uVar19;
        do {
          bVar4 = *pbVar16;
          *(byte *)(param_1 + uVar12 + 0xa0) = bVar4;
          lVar15 = 0;
          if (bVar4 != 0) {
            lVar15 = (ulong)bVar3 * 4 + (ulong)bVar4;
          }
          lVar18 = lVar18 + -1;
          plVar11 = (long *)((long)plVar10 + 1);
          *(undefined1 *)plVar10 = *(undefined1 *)(lVar14 + 0x1f00 + lVar15);
          uVar9 = (int)uVar12 + 1;
          uVar12 = (ulong)uVar9;
          plVar10 = plVar11;
          pbVar16 = pbVar16 + 1;
        } while (lVar18 != 0);
        if (uVar9 < param_3 + 8) {
          bVar3 = *(byte *)(param_1 + 0xf31d);
          lVar18 = 0;
          do {
            bVar4 = *(byte *)(param_1 + 0xf308 + lVar18);
            *(byte *)(param_1 + uVar12 + 0xa0 + lVar18) = bVar4;
            lVar15 = 0;
            if (bVar4 != 0) {
              lVar15 = (ulong)bVar3 * 4 + (ulong)bVar4;
            }
            *(undefined1 *)((long)plVar11 + lVar18) = *(undefined1 *)(lVar14 + 0x1f00 + lVar15);
            lVar18 = lVar18 + 1;
          } while (uVar12 + lVar18 < (ulong)(param_3 + 8));
        }
      }
    }
  }
  if ((bVar2 >> 4 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0xf2c4) == 0) {
    return;
  }
  bVar2 = *(byte *)(param_1 + (ulong)(param_3 >> 3) + 0xf2c8);
  uVar9 = (uint)bVar2;
  if (bVar2 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x39) >> 5 & 1) == 0) {
    if ((param_3 == 0) && ((*(byte *)(param_1 + 0x3a) >> 2 & 1) == 0)) {
      return;
    }
    uVar12 = 0;
    lVar14 = 0;
    do {
      uVar6 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      lVar15 = LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f) << 4) << 0x18);
      lVar18 = lVar14 + lVar15;
      uVar5 = uVar9 >> (ulong)((int)lVar15 + 1U & 0x1f);
      lVar14 = lVar18 + 1;
      uVar9 = uVar5 & 0xff;
      local_80[uVar12] = param_1 + 0xf29c + lVar18 * 5;
      uVar6 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar6;
    } while (uVar5 != 0);
    puVar8 = (undefined1 *)(*(long *)(param_1 + 0x1a0) + (ulong)(param_3 + param_2 * 0x100));
    if (uVar6 != 1) {
      lVar14 = 0;
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      do {
        plVar10 = local_80;
        uVar17 = uVar12;
        do {
          lVar18 = *plVar10;
          uVar9 = (int)uVar19 - (uint)*(byte *)(lVar18 + 1);
          if (uVar9 < 8) {
            bVar2 = *(byte *)(lVar18 + 2);
            if ((bVar2 & 0x40) != 0) {
              uVar9 = 7 - uVar9;
            }
            uVar1 = (ulong)(*(byte *)(lVar18 + 3) >> (7 - (ulong)uVar9 & 0x3f)) & 1 |
                    ((ulong)(*(byte *)(lVar18 + 4) >> (7 - (ulong)uVar9 & 0x3f)) & 1) << 1;
            if ((int)uVar1 != 0) {
              if ((*(char *)(param_1 + uVar19 + 0xa0) == '\0') || ((bVar2 >> 5 & 1) == 0)) {
                *puVar8 = *(undefined1 *)
                           (*(long *)(*(long *)(param_1 + 0x90) + 0x20) +
                            (uVar1 | ((ulong)bVar2 & 3) << 2) + 0x1f10);
              }
              break;
            }
          }
          uVar17 = uVar17 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar17 != 0);
        lVar14 = lVar14 + 1;
        uVar19 = (ulong)((int)uVar19 + 1);
        puVar8 = puVar8 + 1;
        if (lVar14 == 8) {
          return;
        }
      } while( true );
    }
  }
  else {
    if ((param_3 == 0) && ((*(byte *)(param_1 + 0x3a) >> 2 & 1) == 0)) {
      return;
    }
    uVar12 = 0;
    lVar14 = 0;
    do {
      uVar6 = (uVar9 & 0xaaaaaaaa) >> 1 | (uVar9 & 0x55555555) << 1;
      uVar6 = (uVar6 & 0xcccccccc) >> 2 | (uVar6 & 0x33333333) << 2;
      lVar15 = LZCOUNT((uVar6 >> 4 | (uVar6 & 0xf0f0f0f) << 4) << 0x18);
      lVar18 = lVar14 + lVar15;
      uVar5 = uVar9 >> (ulong)((int)lVar15 + 1U & 0x1f);
      lVar14 = lVar18 + 1;
      uVar9 = uVar5 & 0xff;
      local_80[uVar12] = param_1 + 0xf29c + lVar18 * 5;
      uVar6 = (int)uVar12 + 1;
      uVar12 = (ulong)uVar6;
    } while (uVar5 != 0);
    puVar8 = (undefined1 *)(*(long *)(param_1 + 0x1a0) + (ulong)(param_3 + param_2 * 0x100));
    if (uVar6 != 1) {
      lVar14 = 0;
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      do {
        plVar10 = local_80;
        uVar17 = uVar12;
        do {
          lVar18 = *plVar10;
          uVar9 = (int)uVar19 - (uint)*(byte *)(lVar18 + 1);
          if (uVar9 < 8) {
            bVar2 = *(byte *)(lVar18 + 2);
            if ((bVar2 & 0x40) != 0) {
              uVar9 = 7 - uVar9;
            }
            uVar1 = (ulong)(*(byte *)(lVar18 + 3) >> (7 - (ulong)uVar9 & 0x3f)) & 1 |
                    ((ulong)(*(byte *)(lVar18 + 4) >> (7 - (ulong)uVar9 & 0x3f)) & 1) << 1;
            if ((int)uVar1 != 0) {
              if ((*(char *)(param_1 + uVar19 + 0xa0) == '\0') || ((bVar2 >> 5 & 1) == 0)) {
                *puVar8 = *(undefined1 *)
                           (*(long *)(*(long *)(param_1 + 0x90) + 0x20) +
                            (uVar1 | ((ulong)bVar2 & 3) << 2) + 0x1f10);
              }
              break;
            }
          }
          uVar17 = uVar17 - 1;
          plVar10 = plVar10 + 1;
        } while (uVar17 != 0);
        lVar14 = lVar14 + 1;
        uVar19 = (ulong)((int)uVar19 + 1);
        puVar8 = puVar8 + 1;
        if (lVar14 == 8) {
          return;
        }
      } while( true );
    }
  }
  FUN_0364bd90(param_1,puVar8,param_3,local_80[0]);
  return;
}

