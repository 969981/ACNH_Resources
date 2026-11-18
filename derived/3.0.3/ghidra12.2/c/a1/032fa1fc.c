
bool FUN_032fa1fc(long param_1)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  ulong uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_1 + 0x10);
  bVar5 = false;
  uVar6 = (ulong)(iVar1 - 3U);
  if (4 < iVar1 - 3U) {
    uVar6 = 0;
  }
  uVar2 = *(ushort *)(param_1 + uVar6 * 2);
  uVar3 = uVar2 - 99;
  if (uVar3 < 0x15) {
    if ((1 << (ulong)(uVar3 & 0x1f) & 0x110003U) == 0) {
      if (uVar3 != 0x11) goto LAB_032fa250;
      uVar6 = (ulong)(iVar1 - 2U);
      if (4 < iVar1 - 2U) {
        uVar6 = 0;
      }
      bVar5 = *(short *)(param_1 + uVar6 * 2) == 0x73;
    }
    uVar6 = (ulong)(iVar1 - 2U);
    if (4 < iVar1 - 2U) {
      uVar6 = 0;
    }
    if (*(short *)(param_1 + uVar6 * 2) == 0x68) {
      bVar5 = true;
    }
  }
LAB_032fa250:
  bVar7 = false;
  bVar4 = true;
  switch((uint)uVar2) {
  case 0x62:
  case 99:
    break;
  case 100:
  case 0x73:
  case 0x74:
    bVar4 = false;
  case 0x67:
    bVar7 = bVar4;
    uVar6 = (ulong)(iVar1 - 2U);
    if (4 < iVar1 - 2U) {
      uVar6 = 0;
    }
    if (*(short *)(param_1 + uVar6 * 2) == 0x77) {
      bVar5 = true;
    }
  default:
    if ((((uVar2 | 2) != 0x66) && (!bVar7)) &&
       (uVar3 = uVar2 - 0x68, 0x12 < uVar3 || (1 << (ulong)(uVar3 & 0x1f) & 0x45f6dU) == 0)) {
      return bVar5;
    }
    break;
  case 0x6b:
    uVar6 = (ulong)(iVar1 - 2U);
    if (4 < iVar1 - 2U) {
      uVar6 = 0;
    }
    if (*(short *)(param_1 + uVar6 * 2) == 0x77) {
      uVar6 = (ulong)(iVar1 - 1U);
      if (4 < iVar1 - 1U) {
        uVar6 = 0;
      }
      if (*(short *)(param_1 + uVar6 * 2) == 0x61) {
        bVar5 = true;
      }
    }
  }
  uVar6 = (ulong)(iVar1 - 2U);
  if (4 < iVar1 - 2U) {
    uVar6 = 0;
  }
  if (*(short *)(param_1 + uVar6 * 2) == 0x79) {
    bVar5 = true;
  }
  return bVar5;
}

