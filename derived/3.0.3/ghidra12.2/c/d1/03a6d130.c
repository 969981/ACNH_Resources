
void FUN_03a6d130(long param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  ulong uVar13;
  int iVar14;
  undefined4 uVar15;
  
  iVar1 = *(int *)(param_1 + 0x1d0);
  *(int *)(param_1 + 0x1e0) = 1 - *(int *)(param_1 + 0x1e0);
  if (iVar1 != 0) {
    lVar10 = *(long *)(param_1 + 0x1d8);
    iVar14 = 0;
    do {
      plVar12 = (long *)(lVar10 + (long)iVar14 * 0x78);
      uVar9 = *(uint *)(param_1 + 0x1e0);
      *(char *)((long)plVar12 + 0x39) = (char)uVar9;
      uVar3 = *(ushort *)((long)plVar12 + 0x3a);
      lVar4 = plVar12[6];
      iVar6 = (**(code **)(*plVar12 + 0x20))(plVar12);
      iVar7 = (**(code **)(*plVar12 + 0x20))(plVar12);
      lVar5 = plVar12[3];
      lVar8 = 0;
      if (plVar12[4] != 0) {
        lVar8 = (*DAT_04c61fd0)();
      }
      plVar12[2] = lVar8 + (ulong)((int)lVar5 +
                                  (uVar9 & 0xff) * (uint)uVar3 *
                                  (((int)lVar4 + iVar6) - 1U & -iVar7));
      iVar14 = iVar14 + 1;
    } while (iVar1 != iVar14);
  }
  *(undefined4 *)(param_1 + 0x220) = 0;
  if (0 < *(int *)(param_1 + 0x210)) {
    uVar13 = 0;
    do {
      FUN_03a6df00(*(undefined8 *)(*(long *)(param_1 + 0x218) + uVar13 * 8));
      if (uVar13 < *(uint *)(param_1 + 0x210)) {
        uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x218) + uVar13 * 8);
      }
      else {
        uVar11 = 0;
      }
      if (*(int *)(param_1 + 0x220) < *(int *)(param_1 + 0x224)) {
        *(undefined8 *)(*(long *)(param_1 + 0x228) + (long)*(int *)(param_1 + 0x220) * 8) = uVar11;
        *(int *)(param_1 + 0x220) = *(int *)(param_1 + 0x220) + 1;
      }
      uVar9 = *(uint *)(param_1 + 0x1e4);
      lVar10 = *(long *)(param_1 + 0x218);
      if ((uVar9 >> 0x1b & 1) != 0) {
        lVar10 = *(long *)(lVar10 + uVar13 * 8);
        *(undefined4 *)(lVar10 + 0x268) = *(undefined4 *)(param_1 + 0x1ec);
        *(undefined4 *)(lVar10 + 0x26c) = *(undefined4 *)(param_1 + 0x1f0);
        *(undefined4 *)(lVar10 + 0x270) = *(undefined4 *)(param_1 + 500);
        *(undefined4 *)(lVar10 + 0x274) = *(undefined4 *)(param_1 + 0x1f8);
        lVar10 = *(long *)(param_1 + 0x218);
        uVar9 = *(uint *)(param_1 + 0x1e4);
      }
      lVar8 = uVar13 * 8;
      uVar2 = *(uint *)(*(long *)(lVar10 + lVar8) + 0x1e8);
      *(uint *)(*(long *)(lVar10 + lVar8) + 0x1e8) =
           uVar2 & 0xfffffff0 | uVar2 & 3 | (uVar9 >> 1 & 3) << 2;
      lVar10 = *(long *)(*(long *)(param_1 + 0x218) + lVar8);
      uVar9 = *(uint *)(lVar10 + 0x1e8);
      *(uint *)(lVar10 + 0x1e8) =
           uVar9 & 0xf8000000 | uVar9 & 0x3ffffff | (*(uint *)(param_1 + 0x1e4) >> 0x1d & 1) << 0x1a
      ;
      lVar10 = *(long *)(*(long *)(param_1 + 0x218) + lVar8);
      uVar9 = *(uint *)(lVar10 + 0x1e8);
      *(uint *)(lVar10 + 0x1e8) =
           uVar9 & 0xf0000000 | uVar9 & 0x7ffffff | (*(uint *)(param_1 + 0x1e4) >> 0x1e & 1) << 0x1b
      ;
      lVar10 = *(long *)(*(long *)(param_1 + 0x218) + lVar8);
      uVar9 = *(uint *)(lVar10 + 0x1e8);
      *(uint *)(lVar10 + 0x1e8) =
           uVar9 & 0xffffffe0 | uVar9 & 0xf | (*(uint *)(param_1 + 0x1e4) >> 3 & 1) << 4;
      uVar9 = *(uint *)(param_1 + 0x1e4);
      if ((uVar9 >> 3 & 1) != 0) {
        uVar15 = *(undefined4 *)(param_1 + 0x204);
        uVar11 = *(undefined8 *)(param_1 + 0x1fc);
        lVar10 = *(long *)(*(long *)(param_1 + 0x218) + uVar13 * 8);
        *(undefined4 *)(lVar10 + 0x278) = 0;
        *(undefined4 *)(lVar10 + 0x284) = uVar15;
        *(undefined8 *)(lVar10 + 0x27c) = uVar11;
        uVar9 = *(uint *)(param_1 + 0x1e4);
      }
      lVar10 = *(long *)(*(long *)(param_1 + 0x218) + uVar13 * 8);
      uVar13 = uVar13 + 1;
      uVar2 = *(uint *)(lVar10 + 0x1e8);
      *(uint *)(lVar10 + 0x1e8) =
           uVar2 & 0xfc000000 | uVar2 & 0x1ffffff | (uVar9 >> 0x1c & 1) << 0x19;
    } while ((long)uVar13 < (long)*(int *)(param_1 + 0x210));
  }
  return;
}

