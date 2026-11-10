
void FUN_00360ec8(long param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (0x1b < (int)param_2) {
    return;
  }
  uVar2 = param_2 + 3;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  uVar2 = (int)uVar2 >> 2;
  if (uVar2 < 2) {
    uVar8 = param_2 & 3;
    if (-1 < (int)-param_2) {
      uVar8 = -(-param_2 & 3);
    }
    uVar3 = (undefined1)param_3;
    switch(uVar8) {
    case 0:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 8) = uVar3;
      return;
    case 1:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 9) = uVar3;
      return;
    case 2:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 10) = uVar3;
      return;
    case 3:
      *(undefined1 *)(param_1 + (ulong)uVar2 * 4 + 0xb) = uVar3;
      return;
    default:
      return;
    }
  }
  if (6 < uVar2) {
    return;
  }
  uVar8 = *(uint *)(param_1 + 0x10);
  if ((uVar8 >> 0x10 & 1) != 0) {
    uVar2 = uVar2 - 2;
    lVar1 = *(long *)(param_1 + 0x18) +
            (((ulong)uVar8 & 3) * 0x10 + ((ulong)uVar8 & 0x30) | (ulong)(uVar8 >> 6) & 8) +
            ((ulong)(uVar8 >> 8) & 0xc) + ((ulong)(uVar8 >> 4) & 0x1c) +
            ((ulong)(uVar8 >> 0xc) & 8) + (ulong)(-(uVar8 >> 0xc & 1) & 0xc) +
            (((ulong)(uVar8 >> 0xd) & 3) + ((ulong)(uVar8 >> 2) & 3)) * 0x14;
    uVar4 = *(uint *)(lVar1 + (ulong)(uVar2 % 5) * 4 + 4);
    uVar8 = param_2 & 3;
    if (-1 < (int)-param_2) {
      uVar8 = -(-param_2 & 3);
    }
    uVar5 = uVar4 >> 8;
    uVar7 = uVar4 >> 0x10;
    uVar6 = uVar4 >> 0x18;
    switch(uVar8) {
    case 0:
      uVar4 = param_3;
      break;
    case 1:
      uVar5 = param_3;
      break;
    case 2:
      uVar7 = param_3;
      break;
    case 3:
      uVar6 = param_3 & 0xff;
    }
    if (uVar2 < 5) {
      *(uint *)(lVar1 + (ulong)uVar2 * 4 + 4) =
           (uVar7 & 0xff) << 0x10 | uVar6 << 0x18 | (uVar5 & 0xff) << 8 | uVar4 & 0xff;
      return;
    }
    return;
  }
  if ((uVar8 >> 0x11 & 1) == 0) {
    return;
  }
  uVar7 = uVar2 - 2;
  lVar1 = *(long *)(param_1 + 0x18) +
          (((ulong)uVar8 & 3) * 0x10 + ((ulong)uVar8 & 0x30) | (ulong)(uVar8 >> 6) & 8) +
          ((ulong)(uVar8 >> 8) & 0xc) + ((ulong)(uVar8 >> 4) & 0x1c) +
          ((ulong)(uVar8 >> 0xc) & 8) + (ulong)(-(uVar8 >> 0xc & 1) & 0xc) +
          ((ulong)(uVar8 >> 0xc) & 0x10) * ((ulong)(uVar8 >> 6) & 7) +
          (((ulong)(uVar8 >> 0xd) & 3) + ((ulong)(uVar8 >> 2) & 3)) * 0x14;
  uVar4 = *(uint *)(lVar1 + (ulong)(uVar7 % 5) * 4 + 0x60);
  uVar6 = uVar4 >> 8;
  uVar5 = uVar4 >> 0x10;
  uVar8 = uVar4 >> 0x18;
  switch(param_2 + uVar2 * -4) {
  case 0:
    goto switchD_00360ffc_caseD_0;
  case 1:
    uVar6 = param_3;
    break;
  case 2:
    uVar5 = param_3;
    break;
  case 3:
    uVar8 = param_3 & 0xff;
  }
  param_3 = uVar4;
switchD_00360ffc_caseD_0:
  if (uVar7 < 5) {
    *(uint *)(lVar1 + (ulong)uVar7 * 4 + 0x60) =
         uVar8 << 0x18 | (uVar5 & 0xff) << 0x10 | (uVar6 & 0xff) << 8 | param_3 & 0xff;
  }
  return;
}

