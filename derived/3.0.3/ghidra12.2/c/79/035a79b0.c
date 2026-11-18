
void FUN_035a79b0(ushort *param_1,ushort *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  byte bVar11;
  
  if ((param_3 & 0xfffffffe) != 2) {
    if (1 < param_3) {
      return;
    }
    uVar6 = *param_2;
    uVar3 = *param_1;
    if (uVar3 <= uVar6) {
      iVar2 = *(int *)(param_1 + 6);
      if ((uint)uVar6 <= (((uint)uVar3 + iVar2) - 1 & 0xffff)) {
        uVar4 = param_1[1];
        uVar1 = param_2[1] + 1 & 0xffff;
        if (uVar4 <= uVar1) {
          if ((((uVar1 <= (((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
               (iVar7 = (uint)uVar6 - (uint)uVar3, -1 < iVar7)) && (iVar7 < iVar2)) &&
             (((iVar8 = uVar1 - uVar4, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))) &&
              ((lVar9 = *(long *)(param_1 + 0x10), lVar9 != 0 &&
               (iVar7 = iVar7 + iVar8 * iVar2, *(char *)(lVar9 + (long)iVar7 * 0x28 + 6) != '\x03'))
              )))) {
            if (param_3 == 0) {
              lVar10 = lVar9 + (long)iVar7 * 0x28;
              *(byte *)(lVar10 + 4) = *(byte *)(lVar10 + 4) & 0x6e;
            }
            else if (param_3 == 1) {
              lVar9 = lVar9 + (long)iVar7 * 0x28;
              *(byte *)(lVar9 + 4) = *(byte *)(lVar9 + 4) & 0x9d;
              goto LAB_035a7c54;
            }
            FUN_035a7d18(param_1,lVar9 + (long)iVar7 * 0x28);
          }
        }
      }
    }
LAB_035a7c54:
    uVar6 = *param_2;
    uVar3 = *param_1;
    if (uVar6 < uVar3) {
      return;
    }
    iVar2 = *(int *)(param_1 + 6);
    if ((((uint)uVar3 + iVar2) - 1 & 0xffff) < (uint)uVar6) {
      return;
    }
    uVar4 = param_1[1];
    uVar1 = param_2[1] - 1 & 0xffff;
    if (uVar1 < uVar4) {
      return;
    }
    if ((((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff) < uVar1) {
      return;
    }
    iVar7 = (uint)uVar6 - (uint)uVar3;
    if (iVar7 < 0) {
      return;
    }
    if (iVar2 <= iVar7) {
      return;
    }
    iVar8 = uVar1 - uVar4;
    if (iVar8 < 0) {
      return;
    }
    if (*(int *)(param_1 + 8) <= iVar8) {
      return;
    }
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 == 0) {
      return;
    }
    if (param_3 != 0) {
      return;
    }
    iVar7 = iVar7 + iVar8 * iVar2;
    if (*(char *)(lVar9 + (long)iVar7 * 0x28 + 6) == '\x03') {
      return;
    }
    lVar9 = lVar9 + (long)iVar7 * 0x28;
    bVar11 = 0x5f;
    goto LAB_035a7cf8;
  }
  uVar6 = *param_2 + 1;
  uVar3 = *param_1;
  if (uVar3 <= uVar6) {
    iVar2 = *(int *)(param_1 + 6);
    if ((uint)uVar6 <= (((uint)uVar3 + iVar2) - 1 & 0xffff)) {
      uVar4 = param_2[1];
      uVar5 = param_1[1];
      if (uVar5 <= uVar4) {
        if (((((uint)uVar4 <= (((uint)uVar5 + *(int *)(param_1 + 8)) - 1 & 0xffff)) &&
             (iVar7 = (uint)uVar6 - (uint)uVar3, -1 < iVar7)) &&
            ((iVar7 < iVar2 &&
             (((iVar8 = (uint)uVar4 - (uint)uVar5, -1 < iVar8 && (iVar8 < *(int *)(param_1 + 8))) &&
              (lVar9 = *(long *)(param_1 + 0x10), lVar9 != 0)))))) &&
           (iVar7 = iVar7 + iVar8 * iVar2, *(char *)(lVar9 + (long)iVar7 * 0x28 + 6) != '\x03')) {
          if (param_3 == 2) {
            bVar11 = 0xab;
LAB_035a7b50:
            lVar10 = lVar9 + (long)iVar7 * 0x28;
            *(byte *)(lVar10 + 4) = *(byte *)(lVar10 + 4) & bVar11;
          }
          else if (param_3 == 3) {
            bVar11 = 0x57;
            goto LAB_035a7b50;
          }
          if (param_3 == 2) {
            FUN_035a7d18(param_1,lVar9 + (long)iVar7 * 0x28);
          }
        }
      }
    }
  }
  uVar6 = *param_1;
  uVar1 = *param_2 - 1 & 0xffff;
  if (uVar1 < uVar6) {
    return;
  }
  iVar2 = *(int *)(param_1 + 6);
  if ((((uint)uVar6 + iVar2) - 1 & 0xffff) < (*param_2 - 1 & 0xffff)) {
    return;
  }
  uVar3 = param_2[1];
  uVar4 = param_1[1];
  if (uVar3 < uVar4) {
    return;
  }
  if ((((uint)uVar4 + *(int *)(param_1 + 8)) - 1 & 0xffff) < (uint)uVar3) {
    return;
  }
  iVar7 = uVar1 - uVar6;
  if (iVar7 < 0) {
    return;
  }
  if (iVar2 <= iVar7) {
    return;
  }
  iVar8 = (uint)uVar3 - (uint)uVar4;
  if (iVar8 < 0) {
    return;
  }
  if (*(int *)(param_1 + 8) <= iVar8) {
    return;
  }
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    return;
  }
  if (param_3 != 2) {
    return;
  }
  iVar7 = iVar7 + iVar8 * iVar2;
  if (*(char *)(lVar9 + (long)iVar7 * 0x28 + 6) == '\x03') {
    return;
  }
  lVar9 = lVar9 + (long)iVar7 * 0x28;
  bVar11 = 0x9f;
LAB_035a7cf8:
  *(byte *)(lVar9 + 4) = *(byte *)(lVar9 + 4) & bVar11;
  return;
}

