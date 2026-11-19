
void FUN_03a077e0(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  
  *(long *)(*(long *)(param_1 + 0x55d8) + 0x358) = param_1;
  lVar5 = DAT_05aea958;
  lVar10 = *(long *)(param_1 + 0x55d8);
  *(undefined8 *)(lVar10 + 0x23c) = 0;
  *(undefined8 *)(lVar10 + 0x244) = 0;
  *(undefined8 *)(lVar10 + 0x24c) = 0;
  *(undefined8 *)(lVar10 + 0x254) = 0;
  *(undefined8 *)(lVar10 + 0x25c) = 0;
  *(undefined8 *)(lVar10 + 0x264) = 0;
  *(undefined8 *)(lVar10 + 0x26c) = 0;
  *(undefined8 *)(lVar10 + 0x274) = 0;
  *(undefined8 *)(lVar10 + 0x27c) = 0;
  *(undefined8 *)(lVar10 + 0x284) = 0;
  *(undefined8 *)(lVar10 + 0x28c) = 0;
  *(undefined8 *)(lVar10 + 0x294) = 0;
  *(undefined8 *)(lVar10 + 0x29c) = 0;
  *(undefined8 *)(lVar10 + 0x2a4) = 0;
  *(undefined8 *)(lVar10 + 0x2ac) = 0;
  *(undefined8 *)(lVar10 + 0x2b4) = 0;
  *(undefined8 *)(lVar10 + 700) = 0;
  *(undefined8 *)(lVar10 + 0x2c4) = 0;
  *(undefined8 *)(lVar10 + 0x2cc) = 0;
  *(undefined8 *)(lVar10 + 0x2d4) = 0;
  *(undefined8 *)(lVar10 + 0x2dc) = 0;
  *(undefined8 *)(lVar10 + 0x2e4) = 0;
  *(undefined8 *)(lVar10 + 0x2ec) = 0;
  *(undefined8 *)(lVar10 + 0x2f4) = 0;
  *(undefined8 *)(lVar10 + 0x2fc) = 0;
  *(undefined8 *)(lVar10 + 0x304) = 0;
  *(undefined8 *)(lVar10 + 0x30c) = 0;
  *(undefined8 *)(lVar10 + 0x314) = 0;
  *(undefined8 *)(lVar10 + 0x31c) = 0;
  *(undefined8 *)(lVar10 + 0x324) = 0;
  *(undefined8 *)(lVar10 + 0x32c) = 0;
  *(undefined8 *)(lVar10 + 0x334) = 0;
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 != 0) {
    lVar10 = *(long *)(param_1 + 0x110);
    uVar11 = 0;
    iVar12 = 0;
    do {
      lVar13 = lVar10 + (long)iVar12 * 0x430;
      if (-1 < *(int *)(*(long *)(lVar13 + 0x3e0) + 0x108)) {
        uVar2 = *(uint *)(lVar5 + 0x18e8);
        uVar14 = (ulong)uVar2;
        lVar6 = *(long *)(param_1 + 0x55d8);
        plVar7 = (long *)(lVar5 + 0x18a8);
        if (0 < (int)uVar2) {
          do {
            if (*plVar7 == lVar6) goto LAB_03a078d8;
            uVar14 = uVar14 - 1;
            plVar7 = plVar7 + 1;
          } while (uVar14 != 0);
        }
        *(uint *)(lVar5 + 0x18e8) = uVar2 + 1;
        ((long *)(lVar5 + 0x18a8))[(int)uVar2] = lVar6;
        lVar6 = *(long *)(param_1 + 0x55d8);
LAB_03a078d8:
        uVar2 = 1 << (ulong)(uVar11 & 0x1f);
        plVar7 = (long *)(lVar13 + 0x3e0);
        *(uint *)(lVar6 + 0x338) = *(uint *)(lVar6 + 0x338) | uVar2;
        lVar13 = *plVar7;
        if (0 < *(int *)(lVar13 + 0x108)) {
          lVar6 = 0;
          do {
            lVar8 = *(long *)(param_1 + 0x55d8);
            uVar4 = *(uint *)(lVar13 + lVar6 * 4 + 0x88);
            lVar13 = lVar5 + (long)(int)uVar4 * 0x50;
            uVar3 = *(uint *)(lVar13 + 0x538);
            uVar14 = (ulong)uVar3;
            plVar9 = (long *)(lVar13 + 0x4f8);
            if (0 < (int)uVar3) {
              do {
                if (*plVar9 == lVar8) goto LAB_03a07918;
                uVar14 = uVar14 - 1;
                plVar9 = plVar9 + 1;
              } while (uVar14 != 0);
            }
            *(uint *)(lVar13 + 0x538) = uVar3 + 1;
            ((long *)(lVar13 + 0x4f8))[(int)uVar3] = lVar8;
            lVar8 = *(long *)(param_1 + 0x55d8);
LAB_03a07918:
            lVar6 = lVar6 + 1;
            *(uint *)(lVar8 + 0x23c + (ulong)uVar4 * 4) =
                 *(uint *)(lVar8 + 0x23c + (long)(int)uVar4 * 4) | uVar2;
            lVar13 = *plVar7;
          } while (lVar6 < *(int *)(lVar13 + 0x108));
        }
      }
      iVar12 = iVar12 + 1;
      uVar11 = uVar11 + 1;
    } while (iVar1 != iVar12);
  }
  return;
}

