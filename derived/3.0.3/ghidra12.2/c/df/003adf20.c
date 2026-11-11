
bool FUN_003adf20(long *param_1,long *param_2,long param_3,ulong param_4)

{
  bool bVar1;
  ushort *puVar2;
  ushort *puVar3;
  ushort *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  byte bVar10;
  ushort uVar11;
  bool bVar12;
  size_t __n;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ushort *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  
  bVar1 = param_2[5] != 0 && (ulong)param_2[4] <= param_4;
  if (bVar1) {
    lVar13 = *param_2;
    uVar9 = *(undefined1 *)((long)param_2 + 0xc);
    *(undefined4 *)(param_1 + 1) = 0;
    *param_1 = lVar13;
    *(undefined1 *)((long)param_1 + 0xc) = uVar9;
    *(char *)((long)param_1 + 0xd) = (char)param_2[2];
    if ((char)param_2[2] == '\0') {
      uVar9 = 1;
    }
    bVar12 = param_3 != 0;
    *(undefined1 *)((long)param_1 + 0xe) = uVar9;
    *(char *)((long)param_1 + 0xf) = (char)param_2[1];
    lVar13 = 0;
    if (param_2[10] != 0 && bVar12) {
      lVar13 = param_3 + param_2[0xd];
    }
    param_1[4] = lVar13;
    lVar13 = 0;
    if (param_2[0xe] != 0 && bVar12) {
      lVar13 = param_3 + param_2[0x11];
    }
    param_1[5] = lVar13;
    lVar13 = 0;
    if (param_2[0x12] != 0 && bVar12) {
      lVar13 = param_3 + param_2[0x15];
    }
    param_1[6] = lVar13;
    lVar13 = 0;
    if (param_2[0x16] != 0 && bVar12) {
      lVar13 = param_3 + param_2[0x19];
    }
    param_1[7] = lVar13;
    lVar13 = 0;
    if (param_2[6] != 0 && bVar12) {
      lVar13 = param_3 + param_2[9];
    }
    param_1[8] = lVar13;
    FUN_003ae270(param_1,param_3,param_2);
    lVar16 = *param_1;
    lVar13 = 0;
    if (param_2[0x22] != 0 && bVar12) {
      lVar13 = param_3 + param_2[0x25];
    }
    param_1[10] = lVar13;
    lVar13 = param_2[3];
    param_1[0xc] = 0;
    param_1[0xd] = param_3;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0xb] = lVar13 + 7U & 0xfffffffffffffff8;
    if ((param_1[7] != 0) && (*(char *)(lVar16 + 0x5b) != '\0')) {
      uVar14 = 1;
      uVar15 = 0;
      do {
        if (uVar15 < 3) {
          lVar13 = 0;
          uVar19 = 0;
        }
        else {
          uVar19 = 0;
          lVar13 = 0;
          puVar18 = (ushort *)(*(long *)(lVar16 + 0x18) + 0xa4);
          do {
            puVar3 = puVar18 + -0x38;
            uVar19 = uVar19 + 4;
            puVar4 = puVar18 + -0x1c;
            uVar11 = *puVar18;
            puVar2 = puVar18 + 0x1c;
            puVar18 = puVar18 + 0x70;
            lVar13 = lVar13 + (ulong)*puVar3 + (ulong)*puVar4 + (ulong)uVar11 + (ulong)*puVar2;
          } while ((uVar14 & 0xfffffffffffffffc) != uVar19);
        }
        uVar5 = uVar15 + 1;
        if ((uVar5 & 3) != 0) {
          uVar20 = uVar14 & 3;
          puVar18 = (ushort *)(*(long *)(lVar16 + 0x18) + uVar19 * 0x38 + 0x34);
          do {
            uVar20 = uVar20 - 1;
            lVar13 = lVar13 + (ulong)*puVar18;
            puVar18 = puVar18 + 0x1c;
          } while (uVar20 != 0);
        }
        uVar14 = uVar14 + 1;
        puVar17 = (undefined8 *)(*(long *)(lVar16 + 0x38) + (uVar15 + lVar13) * 0x18);
        puVar6 = (undefined8 *)(param_1[7] + (uVar15 << 1 | 1) * 0x20);
        uVar21 = *puVar17;
        puVar6[1] = (ulong)*(uint *)(puVar17 + 1);
        *puVar6 = uVar21;
        *(undefined4 *)(puVar6 + 2) = *(undefined4 *)(*(long *)(*param_1 + 0x40) + uVar15 * 4);
        puVar17 = (undefined8 *)(param_1[7] + uVar15 * 0x40);
        uVar21 = *puVar6;
        uVar7 = puVar6[1];
        uVar8 = puVar6[3];
        puVar17[2] = puVar6[2];
        puVar17[3] = uVar8;
        *puVar17 = uVar21;
        puVar17[1] = uVar7;
        lVar16 = *param_1;
        uVar15 = uVar5;
      } while (uVar5 < *(byte *)(lVar16 + 0x5b));
    }
    bVar10 = *(byte *)(lVar16 + 0x5c);
    if (bVar10 == 0) {
      __n = 0;
    }
    else {
      uVar14 = (ulong)bVar10 & 3;
      if (bVar10 < 4) {
        uVar15 = 0;
      }
      else {
        uVar15 = 0;
        do {
          lVar13 = uVar15 * 4;
          uVar15 = uVar15 + 4;
          *(undefined4 *)(param_1[5] + lVar13) = 0;
          *(undefined4 *)(param_1[5] + lVar13 + 4) = 0;
          *(undefined4 *)(param_1[5] + lVar13 + 8) = 0;
          *(undefined4 *)(param_1[5] + lVar13 + 0xc) = 0;
        } while (((ulong)bVar10 & 0xfc) != uVar15);
      }
      if ((bVar10 & 3) != 0) {
        lVar13 = uVar15 << 2;
        do {
          uVar14 = uVar14 - 1;
          *(undefined4 *)(param_1[5] + lVar13) = 0;
          lVar13 = lVar13 + 4;
        } while (uVar14 != 0);
      }
      __n = (ulong)(bVar10 + 0x1f >> 3) & 0x3c;
    }
    memset((void *)param_1[6],0,__n);
    *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) & 0xfffffffd;
  }
  return bVar1;
}

