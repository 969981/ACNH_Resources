
void FUN_038e96b0(ulong *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar12 = 0x7b2;
  iVar1 = 0;
  uVar4 = 0;
  do {
    uVar16 = uVar4;
    iVar10 = iVar1;
    bVar5 = (iVar10 + 0x7b2U & 3) == 0;
    bVar6 = (int)(uVar12 / 100) * 100 + -0x7b2 != iVar10;
    bVar7 = (int)(uVar12 / 400) * 400 + -0x7b2 == iVar10;
    iVar1 = iVar10 + 1;
    iVar8 = 0x16d;
    if (bVar5 && bVar6 || bVar7) {
      iVar8 = 0x16e;
    }
    uVar11 = (uint)(*param_1 / 0x15180);
    uVar12 = (ulong)((int)uVar12 + 1);
    uVar4 = iVar8 + uVar16;
  } while (iVar8 + uVar16 <= uVar11);
  uVar4 = uVar11 - uVar16;
  if (uVar4 < 0x1f) {
    uVar14 = 1;
    uVar15 = 0;
  }
  else {
    uVar13 = 0x3b;
    if (bVar5 && bVar6 || bVar7) {
      uVar13 = 0x3c;
    }
    if (uVar4 < uVar13) {
      uVar14 = 2;
      uVar15 = 0x1f;
    }
    else if (uVar4 < uVar13 + 0x1f) {
      uVar14 = 3;
      uVar15 = uVar13;
    }
    else {
      uVar15 = uVar13 + 0x3d;
      if (uVar4 < uVar15) {
        uVar14 = 4;
        uVar15 = uVar13 + 0x1f;
      }
      else if (uVar4 < uVar13 + 0x5c) {
        uVar14 = 5;
      }
      else {
        uVar15 = uVar13 + 0x7a;
        if (uVar4 < uVar15) {
          uVar14 = 6;
          uVar15 = uVar13 + 0x5c;
        }
        else if (uVar4 < uVar13 + 0x99) {
          uVar14 = 7;
        }
        else {
          uVar15 = uVar13 + 0xb8;
          if (uVar4 < uVar15) {
            uVar14 = 8;
            uVar15 = uVar13 + 0x99;
          }
          else if (uVar4 < uVar13 + 0xd6) {
            uVar14 = 9;
          }
          else {
            uVar15 = uVar13 + 0xf5;
            if (uVar4 < uVar15) {
              uVar14 = 10;
              uVar15 = uVar13 + 0xd6;
            }
            else if (uVar4 < uVar13 + 0x113) {
              uVar14 = 0xb;
            }
            else {
              uVar14 = 0xc;
              if (uVar13 + 0x132 <= uVar4) {
                uVar14 = 0xd;
              }
              uVar15 = uVar13 + 0x113;
            }
          }
        }
      }
    }
  }
  if (param_2 != (int *)0x0) {
    uVar3 = (int)*param_1 + uVar11 * -0x15180;
    uVar17 = (uint)(uVar14 < 3);
    iVar8 = iVar1 - uVar17;
    uVar13 = uVar14 + 0xc;
    if (uVar14 >= 3) {
      uVar13 = uVar14;
    }
    iVar2 = iVar8 + 0x7b1;
    iVar8 = iVar8 + 0x7b4;
    if (-1 < iVar2) {
      iVar8 = iVar2;
    }
    iVar9 = (int)((ulong)((long)iVar2 * -0x51eb851f) >> 0x20);
    *param_2 = iVar10 + 0x7b2;
    param_2[1] = uVar14;
    param_2[4] = uVar3 / 0xe10;
    param_2[5] = (uVar3 % 0xe10) / 0x3c;
    param_2[2] = (uVar4 - uVar15) + 1;
    param_2[3] = (int)(uVar11 + iVar1 +
                       ((((((iVar9 >> 5) - (iVar9 >> 0x1f)) + (iVar8 >> 2) + iVar2 / 400 +
                          (uVar13 * 0x1a + 0x10) / 10) - uVar17) - uVar15) - uVar16) + 0x7b2) % 7;
    param_2[6] = uVar3 % 0x3c;
  }
  return;
}

