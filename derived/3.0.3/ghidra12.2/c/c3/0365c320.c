
void FUN_0365c320(undefined8 param_1,int *param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar4 = param_2[6] + param_3;
  param_2[6] = uVar4;
  if (0x3ff < uVar4) {
    uVar5 = param_2[7];
    uVar7 = uVar4 >> 10;
    iVar11 = uVar7 - uVar5;
    if (uVar7 < uVar5 || iVar11 == 0) {
      param_2[7] = uVar5 - uVar7;
      iVar8 = param_2[10] + uVar7 * (byte)(&DAT_040588e0)[(uint)param_2[9]];
    }
    else {
      iVar6 = param_2[8];
      uVar2 = iVar6 + 1;
      if (iVar6 == 0) {
        iVar9 = 0;
      }
      else {
        uVar10 = iVar11 - 1;
        uVar12 = 0;
        if (uVar2 != 0) {
          uVar12 = uVar10 / uVar2;
        }
        iVar11 = uVar12 + 1;
        iVar9 = iVar6 + (uVar12 * uVar2 - uVar10);
      }
      param_2[7] = iVar9;
      if ((*param_2 == 0) || (param_2[3] == 0)) {
        iVar8 = param_2[10] + uVar7 * (byte)(&DAT_040588e0)[(uint)param_2[9]];
      }
      else {
        if (iVar11 == 0) {
          uVar10 = param_2[9];
          iVar8 = param_2[10];
        }
        else {
          uVar10 = param_2[9] + 1U & 0x1f;
          iVar8 = param_2[10] + (uVar5 + 1) * (uint)(byte)(&DAT_040588e0)[(uint)param_2[9]];
          uVar5 = iVar11 - 1;
          if (uVar5 != 0) {
            if (iVar11 != 2) {
              uVar12 = uVar5 & 0xfffffffe;
              do {
                uVar1 = (ulong)uVar10;
                uVar12 = uVar12 - 2;
                uVar3 = uVar10 + 1;
                uVar10 = uVar10 + 2 & 0x1f;
                iVar8 = iVar8 + uVar2 * (byte)(&DAT_040588e0)[uVar1] +
                        uVar2 * (byte)(&DAT_040588e0)[(ulong)uVar3 & 0x1f];
              } while (uVar12 != 0);
            }
            if ((uVar5 & 1) != 0) {
              iVar8 = iVar8 + uVar2 * (byte)(&DAT_040588e0)[uVar10];
              uVar10 = uVar10 + 1 & 0x1f;
            }
          }
          param_2[9] = uVar10;
        }
        iVar8 = iVar8 + (iVar6 - iVar9) * (uint)(byte)(&DAT_040588e0)[uVar10];
      }
    }
    param_2[10] = iVar8;
    param_2[6] = uVar4 & 0x3ff;
    param_2[0xb] = param_2[0xb] + uVar7;
  }
  return;
}

