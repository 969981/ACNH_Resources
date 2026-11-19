
float FUN_03bea4c0(long *param_1,uint *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  float *pfVar3;
  undefined8 *puVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ushort *puVar14;
  ulong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  plVar1 = (long *)(param_1[1] + 0x18);
  uVar13 = *(uint *)(param_1[1] + 0x10);
  plVar8 = plVar1 + uVar13;
  if (1 < uVar13) {
    plVar8 = plVar1;
  }
  plVar8 = (long *)*plVar8;
  lVar12 = *(long *)(*plVar8 + 0x58);
  uVar13 = *param_2 & 0xffffff;
  puVar14 = (ushort *)(lVar12 + (ulong)uVar13 * 0x14);
  if (*(int *)(puVar14 + 6) < 0) {
    return INFINITY;
  }
  if (*(short *)(lVar12 + (ulong)uVar13 * 0x14 + 6) == 1) {
    uVar6 = *(ushort *)(lVar12 + (ulong)uVar13 * 0x14 + 0x10);
    lVar9 = *param_1;
    if ((short)uVar6 < 0) goto LAB_03bea5c8;
    uVar15 = (ulong)uVar6;
    lVar9 = (**(code **)(**(long **)(*(long *)(lVar9 + 0x30) + 0x18) + 0x20))();
    plVar1 = (long *)(lVar9 + 0x48);
    lVar9 = *(long *)(*(long *)(lVar9 + 0x40) + uVar15 * 8);
  }
  else {
    sVar7 = *(short *)(lVar12 + (ulong)uVar13 * 0x14 + 0x10);
    iVar10 = (int)sVar7;
    if (*(uint *)(plVar8 + 0xd) <= (uint)(int)sVar7) {
      iVar10 = 0;
    }
    lVar9 = *param_1;
    if ((char)*(byte *)(plVar8[0xe] + (long)iVar10) < '\0') goto LAB_03bea5c8;
    uVar15 = (ulong)*(byte *)(plVar8[0xe] + (long)iVar10);
    plVar1 = (long *)(lVar9 + 0x78);
    lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0x30) + 0x48) + uVar15 * 8);
  }
  if (lVar9 != 0) {
    if (*(int *)(lVar9 + 0x60) == 2) {
      fVar17 = *(float *)(*plVar1 + uVar15 * 4);
    }
    else {
      fVar17 = (float)*(int *)(*plVar1 + uVar15 * 4);
    }
    puVar2 = (undefined8 *)(param_1[1] + 0x18);
    uVar5 = *(uint *)(param_1[1] + 0x10);
    puVar4 = puVar2 + uVar5;
    if (1 < uVar5) {
      puVar4 = puVar2;
    }
    if (*(long *)(*(long *)*puVar4 + 0x60) == 0) {
      return INFINITY;
    }
    uVar6 = *(ushort *)(lVar12 + (ulong)uVar13 * 0x14 + 2);
    lVar9 = *(long *)(*(long *)*puVar4 + 0x60) + (ulong)*puVar14 * 8;
    if ((uVar6 != 0) && (*(short *)(lVar12 + (ulong)uVar13 * 0x14 + 4) == 0)) {
      lVar12 = 0;
      lVar11 = -0x100000000;
      do {
        fVar18 = *(float *)(lVar9 + lVar12);
        if (fVar17 == fVar18) {
          fVar16 = *(float *)(lVar9 + lVar12 + 4);
LAB_03bea6b8:
          if (fVar16 != INFINITY) {
            return fVar16;
          }
          break;
        }
        if (fVar17 < fVar18) {
          fVar16 = *(float *)(lVar9 + lVar12 + 4);
          if (lVar12 != 0) {
            pfVar3 = (float *)(lVar9 + (lVar11 >> 0x1d));
            fVar20 = *pfVar3;
            fVar19 = pfVar3[1];
            fVar16 = fVar19 + (fVar17 - fVar20) * ((fVar16 - fVar19) / (fVar18 - fVar20));
          }
          goto LAB_03bea6b8;
        }
        lVar12 = lVar12 + 8;
        lVar11 = lVar11 + 0x100000000;
      } while ((ulong)uVar6 * 8 != lVar12);
    }
    return *(float *)(lVar9 + (ulong)uVar6 * 8 + -4);
  }
  lVar9 = *param_1;
LAB_03bea5c8:
  (**(code **)(**(long **)(*(long *)(lVar9 + 0x30) + 0x18) + 0x20))();
  return INFINITY;
}

