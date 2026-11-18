
long FUN_036042e0(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  int iVar1;
  byte *pbVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  bool bVar7;
  long lVar8;
  byte bVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  
  lVar4 = *(long *)(param_1 + 0x140);
  lVar5 = *(long *)(param_1 + 0x148);
  lVar17 = 0;
  lVar10 = lVar5 + 0x3fb0;
  do {
    if (*(int *)(lVar4 + *(long *)(lVar4 + 0x4070) * 4 + 0x4030) == 0) {
      if (*(int *)(lVar5 + *(long *)(lVar5 + 0x4070) * 4 + 0x4030) == 0) {
LAB_03604598:
        if (param_4 == 0) {
          lVar10 = *(long *)(param_1 + 0x140);
          uVar13 = *(uint *)(param_1 + 0x9c1);
          *(char *)(lVar10 + 0x2648) = (char)uVar13;
          if ((uint)*(byte *)(lVar10 + 0x2649) != (uVar13 >> 8 & 0xff)) {
            *(char *)(lVar10 + 0x2649) = (char)(uVar13 >> 8);
            FUN_036081dc(lVar10 + 0x2640);
          }
          *(char *)(lVar10 + 0x264a) = (char)(uVar13 >> 0x18);
          *(char *)(lVar10 + 0x264b) = (char)(uVar13 >> 0x10);
          lVar10 = *(long *)(param_1 + 0x148);
          uVar13 = *(uint *)(param_1 + 0x9c5);
          *(char *)(lVar10 + 0x2648) = (char)uVar13;
          if ((uint)*(byte *)(lVar10 + 0x2649) != (uVar13 >> 8 & 0xff)) {
            *(char *)(lVar10 + 0x2649) = (char)(uVar13 >> 8);
            FUN_036081dc(lVar10 + 0x2640);
          }
          *(char *)(lVar10 + 0x264a) = (char)(uVar13 >> 0x18);
          *(char *)(lVar10 + 0x264b) = (char)(uVar13 >> 0x10);
          lVar10 = *(long *)(param_1 + 0x140);
          *(undefined4 *)(lVar10 + 0x4080) = 0;
          *(undefined4 *)(lVar10 + 0x4084) = 0;
          lVar10 = *(long *)(param_1 + 0x148);
          *(undefined4 *)(lVar10 + 0x4080) = 0;
          *(undefined4 *)(lVar10 + 0x4084) = 0;
        }
        else {
          uVar13 = *(uint *)(param_1 + *(long *)(param_4 + 0x4118) * 4 + 0x9c1);
          *(char *)(param_4 + 0x2648) = (char)uVar13;
          if ((uint)*(byte *)(param_4 + 0x2649) != (uVar13 >> 8 & 0xff)) {
            *(char *)(param_4 + 0x2649) = (char)(uVar13 >> 8);
            FUN_036081dc(param_4 + 0x2640);
          }
          *(char *)(param_4 + 0x264a) = (char)(uVar13 >> 0x18);
          *(char *)(param_4 + 0x264b) = (char)(uVar13 >> 0x10);
        }
        return lVar17;
      }
      uVar11 = *(ulong *)(lVar10 + *(long *)(lVar5 + 0x4070) * 8);
      uVar13 = (uint)(uVar11 >> 0x20) & 0xff;
LAB_036043d4:
      bVar7 = false;
      uVar15 = 1;
    }
    else {
      uVar12 = *(ulong *)(lVar4 + 0x3fb0 + *(long *)(lVar4 + 0x4070) * 8);
      uVar13 = (uint)(uVar12 >> 0x20) & 0xff;
      if (*(int *)(lVar5 + *(long *)(lVar5 + 0x4070) * 4 + 0x4030) != 0) {
        uVar11 = *(ulong *)(lVar10 + *(long *)(lVar5 + 0x4070) * 8);
        uVar14 = (uint)(uVar11 >> 0x20) & 0xff;
        bVar7 = uVar13 <= uVar14;
        if ((uint)uVar12 != (uint)uVar11) {
          bVar7 = (uint)uVar12 <= (uint)uVar11;
        }
        if (!bVar7) {
          uVar13 = uVar14;
          goto LAB_036043d4;
        }
      }
      uVar15 = 0;
      bVar7 = true;
      uVar11 = uVar12;
    }
    if (param_3 < (uVar11 & 0xffffffff)) goto LAB_03604598;
    lVar3 = lVar4 + 0x3fb0;
    if (!bVar7) {
      lVar3 = lVar10;
    }
    lVar16 = *(long *)(lVar3 + 0xc0);
    *(undefined4 *)(lVar3 + lVar16 * 4 + 0x80) = 0;
    *(ulong *)(lVar3 + 0xc0) = (ulong)((int)lVar16 + 1) & 0xf;
    if (uVar13 == 0) {
      lVar3 = param_1 + (uVar15 ^ 1) * 4;
      bVar6 = *(byte *)(lVar3 + 0x9c2);
      pbVar2 = (byte *)(lVar3 + 0x9c1);
      if ((char)bVar6 < '\0') {
        if ((bVar6 & 1) == 0) {
          bVar9 = *pbVar2 >> 7;
        }
        else {
          bVar9 = 0;
        }
      }
      else {
        bVar9 = *(byte *)(lVar3 + 0x9c3);
      }
      lVar16 = param_1 + uVar15 * 4;
      lVar8 = *(long *)(param_1 + uVar15 * 8 + 0x140);
      *(byte *)(lVar16 + 0x9c3) = *(byte *)(lVar16 + 0x9c1) >> 7;
      *(byte *)(lVar16 + 0x9c1) = bVar9 | *(byte *)(lVar16 + 0x9c1) << 1;
      iVar1 = *(byte *)(lVar16 + 0x9c4) + 1;
      *(char *)(lVar16 + 0x9c4) = (char)iVar1;
      if (iVar1 == 8) {
        *(undefined1 *)(lVar16 + 0x9c4) = 0;
        *(byte *)(lVar16 + 0x9c2) = *(byte *)(lVar16 + 0x9c2) & 0x7f;
        *(byte *)(lVar8 + 0x281) = *(byte *)(lVar8 + 0x281) | 8;
        bVar6 = *(byte *)(lVar3 + 0x9c2);
      }
      if ((bVar6 & 0x81) == 0x80) {
        bVar9 = *(byte *)(lVar16 + 0x9c3);
        lVar16 = *(long *)(param_1 + (uVar15 ^ 1) * 8 + 0x140);
        *(byte *)(lVar3 + 0x9c3) = *pbVar2 >> 7;
        *pbVar2 = bVar9 | *pbVar2 << 1;
        iVar1 = *(byte *)(lVar3 + 0x9c4) + 1;
        *(char *)(lVar3 + 0x9c4) = (char)iVar1;
        if (iVar1 == 8) {
          *(undefined1 *)(lVar3 + 0x9c4) = 0;
          *(byte *)(lVar3 + 0x9c2) = bVar6 & 0x7f;
          *(byte *)(lVar16 + 0x281) = *(byte *)(lVar16 + 0x281) | 8;
        }
      }
LAB_03604334:
      lVar17 = lVar17 + 1;
    }
    else {
      bVar6 = (byte)(uVar11 >> 0x28);
      if (uVar13 == 3) {
        lVar3 = param_1 + uVar15 * 4;
        *(byte *)(lVar3 + 0x9c2) = bVar6 & 0x83;
        if (((uint)(uVar11 >> 0x2f) & 1) == 0) goto LAB_03604334;
        *(undefined1 *)(lVar3 + 0x9c4) = 0;
        lVar17 = lVar17 + 1;
      }
      else {
        lVar17 = lVar17 + 1;
        *(byte *)(param_1 + uVar15 * 4 + 0x9c1) = bVar6;
      }
    }
  } while( true );
}

