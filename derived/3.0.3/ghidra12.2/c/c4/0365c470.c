
void FUN_0365c470(undefined8 param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  
  uVar1 = param_2[8] + param_3;
  param_2[8] = uVar1;
  if (uVar1 < 0x400) {
    return;
  }
  iVar6 = *param_2;
  uVar3 = uVar1 >> 10;
  uVar10 = param_2[0xb];
  uVar11 = param_2[9];
  uVar4 = uVar3 - uVar11;
  if (uVar3 < uVar11 || uVar4 == 0) {
    param_2[9] = uVar11 - uVar3;
    uVar11 = 0;
    if ((uVar10 & 1) == 0 && iVar6 != 0) {
      uVar11 = uVar3;
    }
    iVar6 = param_2[0xd] + uVar11;
  }
  else {
    uVar2 = 0;
    if ((uVar10 & 1) == 0 && iVar6 != 0) {
      uVar2 = uVar11;
    }
    uVar12 = uVar10 >> 1 & 1;
    iVar9 = param_2[0xd] + uVar2;
    uVar11 = 6;
    if (param_2[0xc] == 0) {
      uVar11 = 1;
    }
    uVar2 = param_2[10];
    param_2[0xd] = iVar9;
    if (iVar6 == 0) {
      uVar12 = 1;
    }
    uVar7 = ((uVar10 >> (ulong)uVar11 ^ uVar10) & 1) << 0xe | uVar10 >> 1;
    param_2[0xb] = uVar7;
    if (uVar2 == 0) {
      iVar13 = 0;
      param_2[9] = 0;
      uVar8 = uVar4;
    }
    else {
      uVar8 = 0;
      if (uVar2 != 0) {
        uVar8 = uVar4 / uVar2;
      }
      iVar13 = uVar2 + (uVar8 * uVar2 - uVar4);
      param_2[9] = iVar13;
    }
    if (iVar6 == 0) {
      if (uVar8 != 0) {
        if (param_2[0xc] == 0) {
          if ((uVar8 & 1) == 0) {
            uVar10 = uVar8;
          }
          else {
            uVar7 = ((uVar7 ^ uVar10) >> 1 & 1) << 0xe | uVar7 >> 1;
            uVar10 = uVar8 - 1;
          }
          if (uVar8 != 1) {
            do {
              uVar10 = uVar10 - 2;
              uVar11 = ((uVar7 >> 1 ^ uVar7) & 1) << 0xe | uVar7 >> 1;
              uVar7 = ((uVar11 ^ uVar7) >> 1 & 1) << 0xe | uVar11 >> 1;
            } while (uVar10 != 0);
          }
        }
        else {
          if ((uVar8 & 1) == 0) {
            uVar10 = uVar8;
          }
          else {
            uVar7 = ((uVar10 >> 1 ^ uVar10 >> 7) & 1) << 0xe | uVar7 >> 1;
            uVar10 = uVar8 - 1;
          }
          if (uVar8 != 1) {
            do {
              uVar10 = uVar10 - 2;
              uVar7 = ((uVar7 >> 1 ^ uVar7 >> 7) & 1) << 0xe |
                      (((uVar7 ^ uVar7 >> 6) & 1) << 0xe | uVar7 >> 1) >> 1;
            } while (uVar10 != 0);
          }
        }
        param_2[0xb] = uVar7;
      }
      goto LAB_0365c56c;
    }
    if (uVar8 != 0) {
      do {
        bVar5 = uVar12 == 0;
        uVar12 = uVar7 >> 1 & 1;
        uVar10 = 0;
        if (bVar5) {
          uVar10 = uVar2;
        }
        uVar8 = uVar8 - 1;
        iVar9 = iVar9 + uVar10;
        uVar7 = ((uVar7 >> (ulong)uVar11 ^ uVar7) & 1) << 0xe | uVar7 >> 1;
      } while (uVar8 != 0);
      param_2[0xb] = uVar7;
    }
    iVar6 = 0;
    if (uVar12 == 0) {
      iVar6 = uVar2 - iVar13;
    }
    iVar6 = iVar6 + iVar9;
  }
  param_2[0xd] = iVar6;
LAB_0365c56c:
  param_2[8] = uVar1 & 0x3ff;
  param_2[0xe] = param_2[0xe] + uVar3;
  return;
}

