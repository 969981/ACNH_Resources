
undefined8 FUN_0207b3a0(long param_1,ushort *param_2,ushort *param_3,float *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  bool bVar12;
  int iVar13;
  ushort *puVar14;
  int iVar15;
  uint uVar16;
  ushort *puVar17;
  int iVar18;
  ushort *puVar19;
  long lVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  puVar17 = *(ushort **)(param_1 + 0x10);
  *(undefined2 *)(param_1 + 0x1cc) = 0;
  puVar14 = (ushort *)0x0;
  if (*(long *)(puVar17 + 0x1c) == 0) {
LAB_0207b3fc:
    uVar16 = 0;
    bVar12 = true;
    lVar20 = *(long *)(param_1 + 0x178);
    iVar18 = 0;
    if (lVar20 != 0) {
LAB_0207b40c:
      iVar18 = *(int *)(lVar20 + 0x10);
    }
  }
  else {
    *(undefined8 *)(puVar17 + 0x1c) = *(undefined8 *)(*(long *)(puVar17 + 0x1c) + 0x18);
    puVar17 = *(ushort **)(param_1 + 0x10);
    puVar14 = *(ushort **)(puVar17 + 0x1c);
    if (puVar14 == (ushort *)0x0) goto LAB_0207b3fc;
    uVar16 = 0;
    puVar19 = puVar14;
    do {
      puVar19 = *(ushort **)(puVar19 + 0xc);
      uVar16 = uVar16 + 1;
    } while (puVar19 != (ushort *)0x0);
    bVar12 = false;
    lVar20 = *(long *)(param_1 + 0x178);
    if (lVar20 != 0) goto LAB_0207b40c;
    iVar18 = 0;
  }
  iVar13 = (uint)*param_2 - (uint)*param_3;
  iVar15 = -iVar13;
  if (-1 < iVar13) {
    iVar15 = iVar13;
  }
  iVar7 = (uint)param_2[1] - (uint)param_3[1];
  cVar22 = *(char *)(param_1 + 0x1d1);
  iVar13 = -iVar7;
  if (-1 < iVar7) {
    iVar13 = iVar7;
  }
  if (cVar22 == '\0') {
    if ((int)uVar16 < 2) goto LAB_0207b7e0;
LAB_0207b4a0:
    iVar8 = iVar15 - iVar13;
    iVar7 = iVar15;
    if (iVar13 <= iVar15) {
      iVar7 = iVar13;
    }
    iVar2 = -iVar8;
    if (-1 < iVar8) {
      iVar2 = iVar8;
    }
    if (uVar16 != iVar2 + iVar7) goto LAB_0207b7e0;
    uVar21 = uVar16;
    if (5 < (int)uVar16) {
      uVar21 = 6;
    }
    if (bVar12) {
LAB_0207b7dc:
      uVar16 = uVar21;
      goto LAB_0207b7e0;
    }
    puVar19 = puVar14;
    uVar23 = uVar21;
    do {
      uVar23 = uVar23 - 1;
      puVar19 = *(ushort **)(puVar19 + 0xc);
      if (uVar23 < 2) break;
    } while (puVar19 != (ushort *)0x0);
    if (puVar19 == (ushort *)0x0) goto LAB_0207b7dc;
    fVar24 = (float)NEON_ucvtf((uint)*puVar19);
    fVar9 = (float)NEON_ucvtf((uint)puVar19[1]);
    if (iVar15 == iVar13) {
LAB_0207b50c:
      *(float *)(param_1 + 400) = fVar24 * 5.0;
      *(undefined1 *)(param_1 + 0x1cd) = 1;
      *(float *)(param_1 + 0x198) = fVar9 * 5.0;
      *(undefined4 *)(param_1 + 0x1b4) = 0;
      *(uint *)(param_1 + 0x1b8) = uVar21 * 0x3c;
      if ((0 < (int)uVar16) && (*(long *)(puVar17 + 0x1c) != 0)) {
        uVar16 = uVar21;
        if ((int)uVar21 < 2) {
          uVar16 = 1;
        }
        lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
        if (lVar20 != 0) {
          *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = *(undefined8 *)(lVar20 + 0x18);
        }
        if (1 < (int)uVar21) {
          lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
          if (lVar20 != 0) {
            *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = *(undefined8 *)(lVar20 + 0x18);
          }
          if (uVar16 != 2) {
            lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
            if (lVar20 != 0) {
              *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = *(undefined8 *)(lVar20 + 0x18);
            }
            if (uVar16 != 3) {
              lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
              if (lVar20 != 0) {
                *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = *(undefined8 *)(lVar20 + 0x18);
              }
              if (uVar16 != 4) {
                lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
                if (lVar20 != 0) {
                  *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = *(undefined8 *)(lVar20 + 0x18)
                  ;
                }
                if (uVar16 != 5) {
                  lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
                  if (lVar20 != 0) {
                    *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) =
                         *(undefined8 *)(lVar20 + 0x18);
                  }
                }
              }
            }
          }
        }
        cVar22 = *(char *)(param_1 + 0x1d1);
      }
      if (cVar22 == '\0') {
        return 1;
      }
      lVar20 = *(long *)(*(long *)(param_1 + 0x10) + 0x38);
      if (lVar20 == 0) {
        bVar12 = false;
      }
      else {
        iVar15 = 1;
        do {
          lVar20 = *(long *)(lVar20 + 0x18);
          iVar15 = iVar15 + -1;
        } while (lVar20 != 0);
        bVar12 = iVar15 != 0;
      }
      if ((int)uVar21 < iVar18) {
        return 1;
      }
      if (bVar12) {
        return 1;
      }
      *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1a4);
      *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x19c);
      *(undefined1 *)(param_1 + 0x1d2) = 1;
      return 1;
    }
    if (puVar14 != (ushort *)0x0) {
      if (iVar15 <= iVar13) {
        iVar15 = iVar13;
      }
      iVar13 = iVar15 + 1;
      fVar10 = (float)NEON_ucvtf((uint)*puVar14);
      fVar10 = fVar10 * 5.0;
      fVar11 = (float)NEON_ucvtf((uint)puVar14[1]);
      fVar11 = fVar11 * 5.0;
      iVar7 = *(int *)(puVar17 + 6);
      iVar8 = *(int *)(puVar17 + 8);
      fVar25 = fVar24 * 5.0 - fVar10;
      fVar26 = fVar9 * 5.0 - fVar11;
      do {
        fVar10 = fVar25 / (float)iVar15 + fVar10;
        fVar11 = fVar26 / (float)iVar15 + fVar11;
        iVar5 = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
        iVar2 = iVar5 + ~(uint)*puVar17;
        if ((iVar2 < 0) || (iVar7 <= iVar2)) goto LAB_0207b7dc;
        iVar6 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
        iVar3 = iVar6 + ~(uint)puVar17[1];
        if ((iVar3 < 0) || (iVar8 <= iVar3)) goto LAB_0207b7dc;
        iVar4 = *(int *)(*(long *)(puVar17 + 0x20) + 0x1c);
        iVar3 = iVar4 * iVar3;
        lVar20 = *(long *)(*(long *)(puVar17 + 0x20) + 0x10);
        if ((((((*(uint *)(lVar20 + (long)(iVar3 + iVar2 >> 5) * 4) >> (ulong)(iVar3 + iVar2 & 0x1f)
                & 1) == 0) || (iVar5 = iVar5 - (uint)*puVar17, iVar5 < 0)) || (iVar7 <= iVar5)) ||
            ((((((*(uint *)(lVar20 + (long)(iVar3 + iVar5 >> 5) * 4) >>
                  (ulong)(iVar3 + iVar5 & 0x1f) & 1) == 0 || (iVar1 = iVar5 + 1, iVar7 <= iVar1)) ||
               ((*(uint *)(lVar20 + (long)(iVar3 + iVar1 >> 5) * 4) >> (ulong)(iVar3 + iVar1 & 0x1f)
                & 1) == 0)) || ((iVar6 = iVar6 - (uint)puVar17[1], iVar6 < 0 || (iVar8 <= iVar6))))
             || ((iVar3 = iVar4 * iVar6,
                 (*(uint *)(lVar20 + (long)(iVar3 + iVar2 >> 5) * 4) >>
                  (ulong)(iVar3 + iVar2 & 0x1f) & 1) == 0 ||
                 (((*(uint *)(lVar20 + (long)(iVar3 + iVar5 >> 5) * 4) >>
                    (ulong)(iVar3 + iVar5 & 0x1f) & 1) == 0 ||
                  ((*(uint *)(lVar20 + (long)(iVar3 + iVar1 >> 5) * 4) >>
                    (ulong)(iVar3 + iVar1 & 0x1f) & 1) == 0)))))))) ||
           ((iVar8 <= iVar6 + 1 ||
            (((iVar4 = iVar4 * (iVar6 + 1),
              (*(uint *)(lVar20 + (long)(iVar4 + iVar2 >> 5) * 4) >> (ulong)(iVar4 + iVar2 & 0x1f) &
              1) == 0 ||
              ((*(uint *)(lVar20 + (long)(iVar4 + iVar5 >> 5) * 4) >> (ulong)(iVar4 + iVar5 & 0x1f)
               & 1) == 0)) ||
             ((*(uint *)(lVar20 + (long)(iVar4 + iVar1 >> 5) * 4) >> (ulong)(iVar4 + iVar1 & 0x1f) &
              1) == 0)))))) goto LAB_0207b7dc;
        iVar13 = iVar13 + -1;
      } while (1 < iVar13);
      goto LAB_0207b50c;
    }
  }
  else {
    if (1 < (int)uVar16) {
      if (((uVar16 == 2) && (iVar18 < 3)) && (*(float *)(param_1 + 0x18) < 4.5)) {
LAB_0207b474:
        *(undefined1 *)(param_1 + 0x1d2) = 1;
        *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x19c);
        *(undefined4 *)(param_1 + 0x198) = *(undefined4 *)(param_1 + 0x1a4);
        *(undefined8 *)(param_1 + 0x1b4) = 0x3c00000000;
        return 1;
      }
      goto LAB_0207b4a0;
    }
    if (iVar18 <= (int)uVar16) goto LAB_0207b474;
LAB_0207b7e0:
    if (puVar14 != (ushort *)0x0) {
      iVar18 = 0x3c;
      *(undefined8 *)(puVar17 + 0x1c) = *(undefined8 *)(puVar14 + 0xc);
      *(undefined4 *)(param_1 + 0x1b8) = 0x3c;
      while( true ) {
        uVar16 = uVar16 - 1;
        fVar9 = (float)NEON_ucvtf((uint)*puVar14);
        fVar24 = (float)NEON_ucvtf((uint)puVar14[1]);
        *(float *)(param_1 + 400) = fVar9 * 5.0;
        *(float *)(param_1 + 0x198) = fVar24 * 5.0;
        fVar9 = *param_4 - fVar9 * 5.0;
        fVar24 = param_4[2] - fVar24 * 5.0;
        if ((4.5 < SQRT(fVar24 * fVar24 + fVar9 * fVar9)) || (uVar16 == 0)) {
          fVar9 = param_4[1];
          *(undefined4 *)(param_1 + 0x1b4) = 0;
          *(undefined1 *)(param_1 + 0x1cc) = 1;
          *(float *)(param_1 + 0x194) = fVar9;
          return 1;
        }
        puVar14 = *(ushort **)(*(long *)(param_1 + 0x10) + 0x38);
        if (puVar14 == (ushort *)0x0) break;
        *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x38) = *(undefined8 *)(puVar14 + 0xc);
        iVar18 = *(int *)(param_1 + 0x1b8) + 0x3c;
        *(int *)(param_1 + 0x1b8) = iVar18;
      }
      iVar18 = iVar18 + 0x3c;
      goto LAB_0207b89c;
    }
  }
  iVar18 = 0x3c;
LAB_0207b89c:
  *(int *)(param_1 + 0x1b8) = iVar18;
  return 0;
}

