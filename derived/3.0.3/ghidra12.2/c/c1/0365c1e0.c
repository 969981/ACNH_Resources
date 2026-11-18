
void FUN_0365c1e0(undefined8 param_1,int *param_2,int param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar3 = param_2[0xc] + param_3;
  param_2[0xc] = uVar3;
  if (uVar3 < 0x800) {
    return;
  }
  uVar7 = uVar3 >> 0xb;
  uVar6 = param_2[0xd];
  uVar10 = (uint)(*param_2 != 0);
  if (uVar7 <= uVar6) {
    param_2[0xd] = uVar6 - uVar7;
    if ((&UNK_04058960)[(ulong)(uint)param_2[0xf] + (ulong)(uint)param_2[0x10] * 8] != '\x01') {
      uVar10 = 0;
    }
    param_2[0x11] = param_2[0x11] + uVar10 * uVar7;
    goto LAB_0365c300;
  }
  uVar5 = param_2[0x10];
  iVar9 = param_2[0xe];
  uVar2 = param_2[0xf] + 1;
  if ((&UNK_04058960)[(ulong)(uint)param_2[0xf] + (ulong)uVar5 * 8] != '\x01') {
    uVar10 = 0;
  }
  uVar4 = uVar7 + ~uVar6;
  iVar11 = uVar10 + uVar10 * uVar6 + param_2[0x11];
  uVar10 = uVar2 & 7;
  param_2[0x11] = iVar11;
  param_2[0xf] = uVar10;
  if (iVar9 == 0) {
    iVar9 = 0;
LAB_0365c2f4:
    param_2[0xf] = uVar4 + uVar2 & 7;
  }
  else {
    uVar6 = iVar9 + 1;
    uVar12 = 0;
    if (uVar6 != 0) {
      uVar12 = uVar4 / uVar6;
    }
    iVar8 = uVar4 - uVar12 * uVar6;
    if (*param_2 == 0) {
      iVar9 = iVar9 - iVar8;
      uVar4 = uVar12;
      goto LAB_0365c2f4;
    }
    if (uVar6 <= uVar4) {
      if (uVar12 < 2) {
        uVar12 = 1;
      }
      do {
        uVar1 = (ulong)uVar10;
        uVar10 = uVar10 + 1 & 7;
        uVar2 = uVar6;
        if ((&UNK_04058960)[uVar1 + (ulong)uVar5 * 8] != '\x01') {
          uVar2 = 0;
        }
        uVar12 = uVar12 - 1;
        iVar11 = uVar2 + iVar11;
      } while (uVar12 != 0);
      param_2[0xf] = uVar10;
    }
    iVar9 = iVar9 - iVar8;
    if ((&UNK_04058960)[(ulong)uVar10 + (ulong)uVar5 * 8] != '\x01') {
      iVar8 = 0;
    }
    param_2[0x11] = iVar8 + iVar11;
  }
  param_2[0xd] = iVar9;
LAB_0365c300:
  param_2[0xc] = uVar3 & 0x7ff;
  param_2[0x12] = param_2[0x12] + uVar7;
  return;
}

