
/* WARNING: Type propagation algorithm not settling */

ulong FUN_01d3a560(long *param_1,int *param_2,long *param_3)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  
  uVar1 = *(uint *)((long)param_3 + 0xc);
  uVar13 = (ulong)(int)param_3[1];
  if ((int)uVar1 <= (int)param_3[1]) {
    return 0xffffffff;
  }
  lVar7 = *param_3;
  lVar15 = uVar13 << 0x20;
  while (*(byte *)(lVar7 + uVar13) < 0x21 &&
         (1L << ((ulong)*(byte *)(lVar7 + uVar13) & 0x3f) & 0x100002600U) != 0) {
    uVar13 = uVar13 + 1;
    lVar15 = lVar15 + 0x100000000;
    if (uVar1 == (uint)uVar13) {
      return 0xffffffff;
    }
  }
  uVar12 = (uint)uVar13;
  if ((int)uVar12 < 0) {
    return 0xffffffff;
  }
  *param_1 = 0;
  *param_2 = 0;
  if ((int)uVar1 <= (int)uVar12) {
    return 0xffffffff;
  }
  cVar2 = *(char *)(lVar7 + (uVar13 & 0xffffffff));
  uVar10 = uVar12;
  if (cVar2 == '-') {
    uVar10 = uVar12 + 1;
  }
  uVar13 = (ulong)uVar10;
  bVar3 = *(byte *)(*param_3 + uVar13);
  lVar11 = 0;
  uVar9 = (uint)(cVar2 == '-');
  if (bVar3 - 0x30 < 10 && (int)uVar10 < *(int *)((long)param_3 + 0xc)) {
    uVar6 = lVar15 >> 0x20;
    if (cVar2 == '-') {
      uVar6 = uVar6 + 1;
    }
    uVar5 = (ulong)(uVar9 + uVar12);
    do {
      uVar16 = (ulong)bVar3;
      uVar13 = uVar6 + 1;
      uVar5 = (ulong)((int)uVar5 + 1);
      bVar3 = *(byte *)(*param_3 + 1 + uVar6);
      lVar11 = lVar11 * 10 + uVar16 + -0x30;
      uVar6 = uVar13;
    } while (bVar3 - 0x30 < 10 && (long)uVar13 < (long)*(int *)((long)param_3 + 0xc));
  }
  else {
    uVar5 = uVar13;
  }
  uVar12 = (uint)uVar5;
  *param_1 = lVar11;
  if ((int)uVar12 < (int)uVar1) {
    bVar4 = *(char *)(lVar7 + uVar13) == '.';
    uVar10 = uVar12;
    if (bVar4) {
      uVar10 = uVar12 + 1;
    }
    uVar13 = (ulong)uVar10;
    if (-1 < (int)uVar10) {
      if (bVar4) {
        bVar3 = *(byte *)(*param_3 + (ulong)uVar10);
        if (bVar3 - 0x30 < 10 && (int)uVar10 < (int)*(uint *)((long)param_3 + 0xc)) {
          uVar10 = 0;
          iVar14 = 0;
          uVar13 = (long)(int)uVar12 + 1;
          do {
            if (bVar3 == 0x30) {
              uVar10 = uVar10 + 1;
            }
            else {
              if (0 < (int)uVar10) {
                if (7 < uVar10) {
                  uVar12 = uVar10 & 0xfffffff8;
                  do {
                    lVar11 = lVar11 * 100000000;
                    uVar12 = uVar12 - 8;
                  } while (uVar12 != 0);
                }
                for (uVar12 = uVar10 & 7; uVar12 != 0; uVar12 = uVar12 - 1) {
                  lVar11 = lVar11 * 10;
                }
                iVar14 = iVar14 + uVar10;
                uVar10 = 0;
              }
              iVar14 = iVar14 + 1;
              lVar11 = lVar11 * 10 + (ulong)(uint)bVar3 + -0x30;
            }
            uVar13 = uVar13 + 1;
            bVar3 = *(byte *)(*param_3 + uVar13);
          } while (bVar3 - 0x30 < 10 && (long)uVar13 < (long)(ulong)*(uint *)((long)param_3 + 0xc));
        }
        else {
          iVar14 = 0;
        }
        uVar5 = uVar13 & 0xffffffff;
        *param_1 = lVar11;
        *param_2 = iVar14;
      }
      uVar12 = (uint)uVar5;
      if (uVar9 != 0) {
        *param_1 = -*param_1;
      }
      if ((int)uVar1 <= (int)uVar12) {
        return uVar5;
      }
      uVar10 = uVar12;
      if ((*(byte *)(lVar7 + (int)uVar12) | 0x20) == 0x65) {
        uVar10 = uVar12 + 1;
      }
      if ((int)uVar10 < 0) {
        return uVar5;
      }
      if (uVar10 != uVar12) {
        if ((int)uVar1 <= (int)uVar10) {
          return 0xffffffff;
        }
        uVar13 = (ulong)uVar10;
        cVar2 = *(char *)(lVar7 + uVar13);
        uVar12 = uVar10;
        if (cVar2 == '-') {
          uVar12 = uVar10 + 1;
        }
        uVar5 = (ulong)uVar12;
        if (cVar2 != '-') {
          iVar14 = 0;
          uVar5 = uVar13;
          if (cVar2 == '+') {
            uVar5 = uVar13 + 1;
          }
          bVar3 = *(byte *)(*param_3 + uVar5);
          uVar12 = (uint)bVar3;
          if ((bVar3 - 0x30 < 10) && ((int)uVar5 < (int)*(uint *)((long)param_3 + 0xc))) {
            iVar14 = 0;
            uVar6 = (ulong)(cVar2 == '+');
            do {
              iVar14 = uVar12 + iVar14 * 10;
              lVar15 = *param_3 + uVar13 + uVar6;
              uVar6 = uVar6 + 1;
              uVar12 = (uint)*(byte *)(lVar15 + 1);
              iVar14 = iVar14 + -0x30;
            } while (uVar12 - 0x30 < 10 && uVar6 + uVar13 < (ulong)*(uint *)((long)param_3 + 0xc));
            uVar5 = (ulong)(uVar10 + (int)uVar6);
          }
          *param_2 = *param_2 + iVar14;
        }
      }
      if ((int)uVar5 < (int)uVar1) {
        pbVar8 = (byte *)(lVar7 + (int)uVar5);
        do {
          uVar12 = (uint)uVar5;
          if (0x20 < *pbVar8 || (1L << ((ulong)*pbVar8 & 0x3f) & 0x100002600U) == 0) {
            if (-1 < (int)uVar12) {
              uVar1 = uVar12;
            }
            return (ulong)uVar1;
          }
          uVar5 = (ulong)(uVar12 + 1);
          pbVar8 = pbVar8 + 1;
        } while (uVar1 != uVar12 + 1);
      }
      return (ulong)uVar1;
    }
  }
  if (cVar2 == '-') {
    *param_1 = -lVar11;
    return uVar5;
  }
  return uVar5;
}

