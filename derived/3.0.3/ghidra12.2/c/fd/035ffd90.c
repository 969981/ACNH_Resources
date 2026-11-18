
void FUN_035ffd90(long param_1)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  byte *pbVar11;
  int *piVar12;
  byte *pbVar13;
  long lVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  long lVar20;
  float fVar21;
  float fVar22;
  byte abStack_20030 [65536];
  int aiStack_10030 [16384];
  
  pbVar13 = abStack_20030;
  pbVar11 = abStack_20030;
  plVar7 = *(long **)(*(long *)(param_1 + 0x78) + -0xe68);
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x58))(plVar7,aiStack_10030,0x80,0x80);
  }
  uVar4 = *(ushort *)(param_1 + 6);
  lVar9 = 0;
  do {
    uVar16 = *(int *)((long)aiStack_10030 + lVar9) * ((uint)(uVar4 >> 8) | (uVar4 & 0xff00ff) << 8);
    uVar18 = uVar16 / 0x300;
    iVar15 = uVar16 / 0x300 - 0x79;
    if (0x7f < uVar18) {
      iVar15 = uVar18 - 0x80;
    }
    iVar15 = iVar15 >> 3;
    if (0x7e < iVar15) {
      iVar15 = 0x7f;
    }
    *(int *)((long)aiStack_10030 + lVar9) = iVar15 + 0x80;
    lVar9 = lVar9 + 4;
  } while (lVar9 != 0x10000);
  if ((*(byte *)(param_1 + 8) >> 3 & 1) != 0) {
    lVar9 = 0;
    do {
      lVar14 = lVar9 + 8;
      *(int *)((long)aiStack_10030 + lVar9) = 0xff - *(int *)((long)aiStack_10030 + lVar9);
      *(int *)((long)aiStack_10030 + lVar9 + 4) = 0xff - *(int *)((long)aiStack_10030 + lVar9 + 4);
      lVar9 = lVar14;
    } while (lVar14 != 0x10000);
  }
  bVar2 = *(byte *)(param_1 + 0x3e);
  bVar3 = *(byte *)(param_1 + 0x3b);
  fVar21 = *(float *)(&DAT_040578e0 + ((ulong)(bVar2 >> 4) & 7) * 4);
  lVar9 = 0;
  do {
    lVar14 = lVar9 + 8;
    *(int *)((long)aiStack_10030 + lVar9) = *(int *)((long)aiStack_10030 + lVar9) + -0x80;
    *(int *)((long)aiStack_10030 + lVar9 + 4) = *(int *)((long)aiStack_10030 + lVar9 + 4) + -0x80;
    lVar9 = lVar14;
  } while (lVar14 != 0x10000);
  bVar2 = bVar3 >> 4 & 0xe | bVar2 >> 7;
  if (bVar2 == 0xe) {
    iVar15 = 0;
    lVar9 = 0;
    piVar12 = aiStack_10030;
    do {
      iVar6 = (int)lVar9;
      lVar19 = lVar9 << 7;
      lVar20 = 0;
      bVar5 = lVar9 != 0x7f;
      lVar9 = lVar9 + 1;
      lVar14 = 0x3f80;
      if (bVar5) {
        lVar14 = lVar9 * 0x80;
      }
      do {
        lVar1 = lVar20 + 1;
        iVar8 = 0x7f;
        if (lVar20 != 0x7f) {
          iVar8 = (int)lVar1;
        }
        fVar22 = (float)piVar12[lVar20] +
                 fVar21 * (float)(piVar12[lVar20] * 4 -
                                 (aiStack_10030[lVar14 + lVar20] +
                                  aiStack_10030
                                  [(ulong)(iVar15 + (uint)(iVar6 != 0) * -0x80) + lVar20] +
                                  aiStack_10030[(uint)(iVar8 + (int)lVar19)] +
                                 aiStack_10030[(int)lVar20 + (iVar15 - (uint)((int)lVar20 != 0))]));
        if (fVar22 <= -128.0) {
          fVar22 = -128.0;
        }
        fVar22 = (float)NEON_fminnm(fVar22,0x42fe0000);
        *(int *)(pbVar11 + lVar20 * 4) = (int)fVar22;
        lVar20 = lVar1;
      } while (lVar1 != 0x80);
      pbVar11 = pbVar11 + 0x200;
      piVar12 = piVar12 + 0x80;
      iVar15 = iVar15 + 0x80;
    } while (lVar9 != 0x80);
  }
  else {
    if (bVar2 != 2) goto LAB_0360006c;
    iVar15 = 0;
    lVar9 = 0;
    piVar12 = aiStack_10030;
    do {
      lVar14 = 0;
      do {
        lVar20 = lVar14 + 1;
        iVar6 = 0x7f;
        if (lVar14 != 0x7f) {
          iVar6 = (int)lVar20;
        }
        fVar22 = (float)piVar12[lVar14] +
                 fVar21 * (float)((piVar12[lVar14] * 2 -
                                  aiStack_10030[(uint)(iVar6 + (int)(lVar9 << 7))]) -
                                 aiStack_10030[(int)lVar14 + (iVar15 - (uint)((int)lVar14 != 0))]);
        if (fVar22 <= -128.0) {
          fVar22 = -128.0;
        }
        fVar22 = (float)NEON_fminnm(fVar22,0x42fe0000);
        *(int *)(pbVar13 + lVar14 * 4) = (int)fVar22;
        lVar14 = lVar20;
      } while (lVar20 != 0x80);
      lVar9 = lVar9 + 1;
      pbVar13 = pbVar13 + 0x200;
      piVar12 = piVar12 + 0x80;
      iVar15 = iVar15 + 0x80;
    } while (lVar9 != 0x80);
  }
  memcpy(aiStack_10030,abStack_20030,0x10000);
LAB_0360006c:
  lVar9 = 0;
  do {
    lVar14 = lVar9 + 8;
    *(int *)((long)aiStack_10030 + lVar9) = *(int *)((long)aiStack_10030 + lVar9) + 0x80;
    *(int *)((long)aiStack_10030 + lVar9 + 4) = *(int *)((long)aiStack_10030 + lVar9 + 4) + 0x80;
    lVar9 = lVar14;
  } while (lVar14 != 0x10000);
  lVar9 = 0;
  piVar12 = aiStack_10030;
  do {
    lVar14 = 0;
    do {
      iVar15 = ((uint)lVar14 & 3 | ((uint)lVar9 & 3) << 2) * 3;
      uVar16 = piVar12[lVar14];
      if (uVar16 < *(byte *)(param_1 + 0x3a + (ulong)(iVar15 + 6))) {
        uVar16 = 3;
      }
      else if (uVar16 < *(byte *)(param_1 + (ulong)(iVar15 + 7) + 0x3a)) {
        uVar16 = 2;
      }
      else {
        uVar16 = (uint)(uVar16 < *(byte *)(param_1 + 0x3a + (ulong)(iVar15 + 8)));
      }
      piVar12[lVar14] = uVar16;
      lVar14 = lVar14 + 1;
    } while (lVar14 != 0x80);
    lVar9 = lVar9 + 1;
    piVar12 = piVar12 + 0x80;
  } while (lVar9 != 0x80);
  memset(abStack_20030,0,0x1000);
  uVar10 = 0;
  piVar12 = aiStack_10030;
  do {
    uVar17 = 0;
    do {
      uVar16 = piVar12[uVar17];
      pbVar13 = abStack_20030 +
                (uVar17 >> 3 & 0x1fffffff) * 0x10 +
                (uVar10 >> 3 & 0x1fffffff) * 0x100 + (uVar10 & 7) * 2;
      if ((uVar16 & 1) != 0) {
        *pbVar13 = *pbVar13 | (byte)(1 << (ulong)(((uint)uVar17 ^ 0xffffffff) & 7));
      }
      if ((uVar16 >> 1 & 1) != 0) {
        pbVar13[1] = pbVar13[1] | (byte)(1 << (ulong)(((uint)uVar17 ^ 0xffffffff) & 7));
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != 0x80);
    uVar10 = uVar10 + 1;
    piVar12 = piVar12 + 0x80;
  } while (uVar10 != 0x80);
  memcpy((void *)(*(long *)(*(long *)(param_1 + 0x78) + 0x18) + 0x100),abStack_20030,0x1000);
  return;
}

