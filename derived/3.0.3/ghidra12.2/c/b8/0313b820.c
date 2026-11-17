
void FUN_0313b820(long param_1,short param_2,int param_3,uint param_4)

{
  long *plVar1;
  uint uVar2;
  short *psVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((param_2 != -1) && (uVar2 = *(uint *)(param_1 + 0xe2b0), 0 < (int)uVar2)) {
    lVar8 = 0;
    lVar9 = -0x300;
    do {
      psVar3 = (short *)(**(code **)(**(long **)(*(long *)(param_1 + 0xe2b8) + lVar8 * 8) + 0xf0))()
      ;
      if (*psVar3 == param_2) {
        if (0x30 < (int)(uint)lVar8) {
          return;
        }
        lVar7 = *(long *)(param_1 + 0x210);
        plVar1 = (long *)(lVar7 - lVar9);
        if (0x30 < (uint)lVar8) {
          plVar1 = (long *)(lVar7 + 0x300);
        }
        lVar8 = *plVar1;
        goto joined_r0x0313b99c;
      }
      lVar9 = lVar9 + -8;
      lVar8 = lVar8 + 1;
    } while ((ulong)uVar2 * 8 + lVar9 != -0x300);
  }
  lVar7 = *(long *)(param_1 + 0x210);
  lVar8 = *(long *)(lVar7 + 0x300);
joined_r0x0313b99c:
  if (lVar8 == 0) {
    return;
  }
  if ((param_4 & 1) == 0) {
    uVar6 = 0;
    while (*(long *)(lVar7 + 0x300 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) != lVar8)
    {
      uVar2 = (int)uVar6 + 1;
      if (uVar2 == 0x31) {
        return;
      }
      if (*(long *)(lVar7 + 0x300 +
                   (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3)) == lVar8)
      break;
      uVar6 = (ulong)((int)uVar6 + 2);
    }
    switch(param_3) {
    case 0:
      bVar4 = *(byte *)(lVar8 + 0x2c0) & 0xf8 | 2;
      break;
    case 1:
      bVar4 = *(byte *)(lVar8 + 0x2c0) & 0xf8;
      break;
    case 2:
    case 3:
      bVar4 = *(byte *)(lVar8 + 0x2c0) & 0xf8 | 1;
      break;
    case 4:
      bVar4 = *(byte *)(lVar8 + 0x2c0) & 0xf8 | 5;
      break;
    default:
      goto switchD_0313b968_default;
    }
    *(byte *)(lVar8 + 0x2c0) = bVar4;
switchD_0313b968_default:
    *(int *)(lVar8 + 0x2b0) = param_3;
    return;
  }
  uVar6 = 0;
  lVar7 = lVar7 + 0x300;
  while (uVar5 = (uint)uVar6, uVar2 = uVar5,
        *(long *)(lVar7 + (-(uVar6 >> 0x1f) & 0xfffffff800000000 | uVar6 << 3)) != lVar8) {
    uVar2 = uVar5 + 1;
    if (uVar2 == 0x31) {
      return;
    }
    if (*(long *)(lVar7 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3)) ==
        lVar8) break;
    uVar6 = (ulong)(uVar5 + 2);
  }
  switch(param_3) {
  case 0:
    bVar4 = *(byte *)(lVar8 + 0x2c0) & 0xf8 | 2;
    break;
  case 1:
    bVar4 = *(byte *)(lVar8 + 0x2c0) & 0xf8;
    break;
  case 2:
  case 3:
    bVar4 = *(byte *)(lVar8 + 0x2c0) & 0xf8 | 1;
    break;
  case 4:
    bVar4 = *(byte *)(lVar8 + 0x2c0) & 0xf8 | 5;
    break;
  default:
    goto switchD_0313b9d4_default;
  }
  *(byte *)(lVar8 + 0x2c0) = bVar4;
switchD_0313b9d4_default:
  *(int *)(lVar8 + 0x2b0) = param_3;
  *(bool *)(*(long *)(lVar7 + (long)(int)uVar2 * 8) + 0x315) = param_3 == 2;
  return;
}

