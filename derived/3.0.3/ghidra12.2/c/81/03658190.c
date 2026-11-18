
void FUN_03658190(long param_1,undefined8 param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  byte *pbVar11;
  uint uVar12;
  uint uVar13;
  
  lVar8 = 0;
  pbVar3 = (byte *)(param_3 + 2);
  do {
    uVar9 = lVar8 * 0x20;
    uVar12 = (uint)uVar9 & 0xa0;
    uVar4 = (uint)uVar9 & 0x60;
    if (uVar9 < 0x40) {
      if ((uVar9 & 0xa0) == 0) {
        lVar10 = 0;
        pbVar11 = pbVar3;
        do {
          uVar12 = (uint)*pbVar11;
          if ((uVar9 & 0x60) != 0) {
            uVar6 = uVar12 * 0x66 >> 7;
            uVar12 = uVar6 * 0x53 >> 7;
            if (uVar4 != 0x60) {
              uVar12 = uVar6;
            }
          }
          pbVar1 = pbVar11 + -1;
          pbVar2 = pbVar11 + -2;
          pbVar11 = pbVar11 + 3;
          *(uint *)(param_1 + lVar10) =
               (uint)*pbVar1 << 8 | uVar12 << 0x10 | (uint)*pbVar2 | 0xff000000;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0x100);
      }
      else {
        lVar10 = 0;
        pbVar11 = pbVar3;
        do {
          uVar13 = (uint)pbVar11[-1] * 0x66 >> 7;
          uVar6 = uVar13 * 0x53 >> 7;
          if (uVar12 != 0xa0) {
            uVar6 = uVar13;
          }
          uVar13 = (uint)*pbVar11;
          if ((uVar9 & 0x60) != 0) {
            uVar7 = uVar13 * 0x66 >> 7;
            uVar13 = uVar7 * 0x53 >> 7;
            if (uVar4 != 0x60) {
              uVar13 = uVar7;
            }
          }
          pbVar1 = pbVar11 + -2;
          pbVar11 = pbVar11 + 3;
          *(uint *)(param_1 + lVar10) = (uint)*pbVar1 | uVar6 << 8 | uVar13 << 0x10 | 0xff000000;
          lVar10 = lVar10 + 4;
        } while (lVar10 != 0x100);
      }
    }
    else {
      lVar10 = 0;
      pbVar11 = pbVar3;
      do {
        uVar13 = (uint)pbVar11[-2] * 0x66 >> 7;
        uVar6 = uVar13 * 0x53 >> 7;
        if (uVar9 < 0xc0) {
          uVar6 = uVar13;
        }
        uVar13 = (uint)pbVar11[-1];
        if ((uVar9 & 0xa0) != 0) {
          uVar7 = uVar13 * 0x66 >> 7;
          uVar13 = uVar7 * 0x53 >> 7;
          if (uVar12 != 0xa0) {
            uVar13 = uVar7;
          }
        }
        uVar7 = (uint)*pbVar11;
        if ((uVar9 & 0x60) != 0) {
          uVar5 = uVar7 * 0x66 >> 7;
          uVar7 = uVar5 * 0x53 >> 7;
          if (uVar4 != 0x60) {
            uVar7 = uVar5;
          }
        }
        pbVar11 = pbVar11 + 3;
        *(uint *)(param_1 + lVar10) = uVar13 << 8 | uVar7 << 0x10 | uVar6 | 0xff000000;
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x100);
    }
    lVar8 = lVar8 + 1;
    param_1 = param_1 + 0x100;
  } while (lVar8 != 8);
  return;
}

