
void FUN_02158bf0(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  
  if ((ulong)*(byte *)(param_1 + 0x490) == 0) {
    uVar7 = 0;
  }
  else {
    uVar8 = 0;
    uVar7 = 0;
    lVar13 = param_1 + 0x498;
    lVar11 = param_1 + 0x10;
    do {
      lVar1 = lVar13;
      if (0xf < uVar8) {
        lVar1 = param_1 + 0x498;
      }
      if (*(char *)(lVar1 + 0x18) != '\0') {
        lVar1 = lVar11;
        if (0xf < uVar8) {
          lVar1 = param_1 + 0x10;
        }
        bVar3 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
        bVar4 = *(byte *)(lVar1 + 0x38);
        bVar5 = *(byte *)(lVar1 + 0x39);
        bVar6 = bVar3 < bVar5 || bVar4 <= bVar3;
        if (bVar4 < bVar5) {
          bVar6 = bVar4 <= bVar3 && bVar3 < bVar5;
        }
        if ((uVar8 < 0x10) && (bVar6)) {
          uVar7 = 1 << (ulong)((uint)uVar8 & 0x1f) | uVar7;
        }
      }
      uVar8 = uVar8 + 1;
      lVar11 = lVar11 + 0x48;
      lVar13 = lVar13 + 0x20;
    } while (*(byte *)(param_1 + 0x490) != uVar8);
  }
  uVar9 = uVar7 - (uVar7 >> 1 & 0x55555555);
  uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
  uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
  uVar9 = uVar9 + (uVar9 >> 8);
  uVar9 = uVar9 + (uVar9 >> 0x10) & 0x3f;
  if (uVar9 < 3) {
LAB_02158d24:
    if (uVar9 == 0) goto LAB_02158d9c;
  }
  else if (*(byte *)(param_1 + 0x699) < 0x10) {
    uVar7 = uVar7 & (1 << (ulong)(*(byte *)(param_1 + 0x699) & 0x1f) ^ 0xffffffffU);
    uVar9 = uVar7 - (uVar7 >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    uVar9 = uVar9 + (uVar9 >> 0x10) & 0x3f;
    goto LAB_02158d24;
  }
  lVar11 = *(long *)(param_1 + 8);
  uVar12 = *(uint *)(lVar11 + 0x288);
  *(undefined4 *)(lVar11 + 0x288) = *(undefined4 *)(lVar11 + 0x28c);
  uVar12 = uVar12 ^ uVar12 << 0xb;
  *(undefined4 *)(lVar11 + 0x28c) = *(undefined4 *)(lVar11 + 0x290);
  uVar2 = *(uint *)(lVar11 + 0x294);
  *(uint *)(lVar11 + 0x290) = uVar2;
  uVar12 = uVar12 >> 8 ^ uVar2 >> 0x13 ^ uVar12 ^ uVar2;
  *(uint *)(lVar11 + 0x294) = uVar12;
  if ((uVar7 != 0) && (uVar12 = (uint)((ulong)uVar12 * (ulong)uVar9 >> 0x20), uVar12 < uVar9)) {
    iVar10 = uVar12 + 2;
    do {
      iVar10 = iVar10 + -1;
      if (iVar10 < 2) {
        uVar7 = uVar7 - 1 & (uVar7 ^ 0xffffffff);
        uVar7 = uVar7 - (uVar7 >> 1 & 0x55555555);
        uVar7 = (uVar7 >> 2 & 0x33333333) + (uVar7 & 0x33333333);
        uVar7 = uVar7 + (uVar7 >> 4) & 0xf0f0f0f;
        iVar10 = uVar7 + (uVar7 >> 8);
        *(char *)(param_1 + 0x698) = (char)iVar10 + (char)((uint)iVar10 >> 0x10);
        return;
      }
      uVar7 = uVar7 - 1 & uVar7;
    } while (uVar7 != 0);
  }
LAB_02158d9c:
  *(undefined1 *)(param_1 + 0x698) = 0xff;
  return;
}

