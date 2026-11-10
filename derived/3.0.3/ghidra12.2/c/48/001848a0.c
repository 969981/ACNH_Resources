
void FUN_001848a0(long param_1,long *param_2)

{
  bool bVar1;
  long lVar2;
  short *psVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  undefined2 *puVar24;
  int iVar25;
  ushort uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  int iVar30;
  long lVar31;
  short *psVar32;
  int *piVar33;
  ushort *puVar34;
  ushort auStack_20 [4];
  short local_18;
  short local_16;
  short local_14;
  short local_12;
  short local_10;
  short local_e;
  short local_c;
  short local_a;
  short local_8;
  short local_6;
  short local_4;
  short local_2;
  
  lVar15 = *param_2;
  uVar27 = *(uint *)(param_2[2] + 0x14);
  lVar20 = *(long *)param_2[2];
  *(undefined8 *)(param_1 + 0x14b4) = 0x23d00000000;
  if ((int)uVar27 < 1) {
    iVar25 = 0;
    uVar17 = 0xffffffff;
  }
  else {
    uVar21 = 0;
    uVar17 = 0xffffffff;
    puVar24 = (undefined2 *)(lVar15 + 2);
    do {
      while (puVar24[-1] != 0) {
        lVar14 = (long)*(int *)(param_1 + 0x14b4) + 1;
        *(int *)(param_1 + 0x14b4) = (int)lVar14;
        *(int *)(param_1 + lVar14 * 4 + 0xbc0) = (int)uVar21;
        uVar17 = uVar21 & 0xffffffff;
        *(undefined1 *)(param_1 + 0x14bc + uVar21) = 0;
        uVar21 = uVar21 + 1;
        puVar24 = puVar24 + 2;
        if (uVar27 == uVar21) goto LAB_00184924;
      }
      *puVar24 = 0;
      uVar21 = uVar21 + 1;
      puVar24 = puVar24 + 2;
    } while (uVar27 != uVar21);
LAB_00184924:
    uVar16 = (uint)uVar17;
    iVar25 = *(int *)(param_1 + 0x14b4);
    if (1 < iVar25) goto LAB_00184930;
  }
  do {
    uVar28 = (uint)uVar17;
    uVar16 = uVar28;
    if ((int)uVar28 < 2) {
      uVar16 = uVar28 + 1;
    }
    uVar17 = (ulong)uVar16;
    *(int *)(param_1 + 0x14b4) = (int)((long)iVar25 + 1);
    uVar19 = 0;
    if ((int)uVar28 < 2) {
      uVar19 = uVar28 + 1;
    }
    *(uint *)(param_1 + ((long)iVar25 + 1) * 4 + 0xbc0) = uVar19;
    *(undefined2 *)(lVar15 + (-(ulong)(uVar19 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar19 << 2)) =
         1;
    *(undefined1 *)(param_1 + (int)uVar19 + 0x14bc) = 0;
    *(long *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + -1;
    if (lVar20 != 0) {
      *(ulong *)(param_1 + 0x1720) =
           *(long *)(param_1 + 0x1720) - (ulong)*(ushort *)(lVar20 + (long)(int)uVar19 * 4 + 2);
    }
    iVar25 = *(int *)(param_1 + 0x14b4);
  } while (iVar25 < 2);
LAB_00184930:
  *(uint *)(param_2 + 1) = uVar16;
  uVar28 = *(uint *)(param_1 + 0x14b4);
  if (1 < (int)uVar28) {
    uVar17 = (ulong)(uVar28 >> 1);
    do {
      iVar25 = *(int *)(param_1 + 0x14b4);
      uVar19 = (uint)uVar17;
      uVar28 = uVar19 * 2;
      iVar30 = *(int *)(param_1 + uVar17 * 4 + 0xbc0);
      if ((int)uVar28 <= iVar25) {
        uVar21 = uVar17 & 0xffffffff;
        do {
          uVar11 = uVar28;
          if ((int)uVar28 < iVar25) {
            uVar13 = (ulong)(int)uVar28;
            lVar20 = (long)*(int *)(param_1 + 0xbc0 + (uVar13 | 1) * 4);
            lVar14 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar28 * 4);
            uVar8 = *(ushort *)(lVar15 + lVar20 * 4);
            uVar26 = *(ushort *)(lVar15 + lVar14 * 4);
            if ((uVar8 < uVar26) ||
               ((uVar8 == uVar26 &&
                (*(byte *)(param_1 + 0x14bc + lVar20) <= *(byte *)(param_1 + 0x14bc + lVar14))))) {
              uVar13 = uVar13 | 1;
              uVar11 = uVar28 | 1;
            }
          }
          else {
            uVar13 = (ulong)(int)uVar28;
          }
          uVar8 = *(ushort *)(lVar15 + (long)iVar30 * 4);
          uVar28 = *(uint *)(param_1 + uVar13 * 4 + 0xbc0);
          uVar26 = *(ushort *)
                    (lVar15 + (-(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar28 << 2));
          uVar19 = (uint)uVar21;
          if ((uVar8 < uVar26) ||
             ((uVar8 == uVar26 &&
              (*(byte *)(param_1 + 0x14bc + (long)iVar30) <=
               *(byte *)(param_1 + (int)uVar28 + 0x14bc))))) break;
          *(uint *)(param_1 + (long)(int)uVar19 * 4 + 0xbc0) = uVar28;
          uVar28 = uVar11 * 2;
          uVar21 = (ulong)uVar11;
          iVar25 = *(int *)(param_1 + 0x14b4);
          uVar19 = uVar11;
        } while ((int)uVar28 <= iVar25);
      }
      uVar21 = uVar17 - 1;
      *(int *)(param_1 + (long)(int)uVar19 * 4 + 0xbc0) = iVar30;
      bVar1 = 0 < (long)uVar17;
      uVar17 = uVar21;
    } while (uVar21 != 0 && bVar1);
    uVar28 = *(uint *)(param_1 + 0x14b4);
  }
  lVar20 = (long)(int)uVar27;
  do {
    iVar12 = uVar28 - 1;
    iVar25 = *(int *)(param_1 + 0xbc4);
    *(int *)(param_1 + 0x14b4) = iVar12;
    iVar30 = *(int *)(param_1 + (long)(int)uVar28 * 4 + 0xbc0);
    *(int *)(param_1 + 0xbc4) = iVar30;
    if ((int)uVar28 < 3) {
      uVar28 = 1;
    }
    else {
      uVar27 = 2;
      uVar28 = 1;
      do {
        uVar19 = uVar27;
        if ((int)uVar27 < iVar12) {
          uVar17 = (ulong)(int)uVar27;
          lVar31 = (long)*(int *)(param_1 + 0xbc0 + (uVar17 | 1) * 4);
          lVar14 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar27 * 4);
          uVar8 = *(ushort *)(lVar15 + lVar31 * 4);
          uVar26 = *(ushort *)(lVar15 + lVar14 * 4);
          if ((uVar8 < uVar26) ||
             ((uVar8 == uVar26 &&
              (*(byte *)(param_1 + 0x14bc + lVar31) <= *(byte *)(param_1 + 0x14bc + lVar14))))) {
            uVar17 = uVar17 | 1;
            uVar19 = uVar27 | 1;
          }
        }
        else {
          uVar17 = (ulong)(int)uVar27;
        }
        uVar8 = *(ushort *)(lVar15 + (long)iVar30 * 4);
        uVar27 = *(uint *)(param_1 + uVar17 * 4 + 0xbc0);
        uVar26 = *(ushort *)
                  (lVar15 + (-(ulong)(uVar27 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar27 << 2));
        if ((uVar8 < uVar26) ||
           ((uVar8 == uVar26 &&
            (*(byte *)(param_1 + 0x14bc + (long)iVar30) <= *(byte *)(param_1 + (int)uVar27 + 0x14bc)
            )))) break;
        *(uint *)(param_1 + (long)(int)uVar28 * 4 + 0xbc0) = uVar27;
        uVar27 = uVar19 * 2;
        iVar12 = *(int *)(param_1 + 0x14b4);
        uVar28 = uVar19;
      } while ((int)uVar27 <= iVar12);
    }
    lVar14 = param_1 + 0xbc0;
    *(int *)(lVar14 + (long)(int)uVar28 * 4) = iVar30;
    iVar30 = *(int *)(param_1 + 0xbc4);
    lVar31 = (long)*(int *)(param_1 + 0x14b8) + -1;
    *(int *)(param_1 + 0x14b8) = (int)lVar31;
    *(int *)(lVar14 + lVar31 * 4) = iVar25;
    psVar3 = (short *)(lVar15 + (long)iVar30 * 4);
    lVar31 = (long)*(int *)(param_1 + 0x14b8) + -1;
    *(int *)(param_1 + 0x14b8) = (int)lVar31;
    *(int *)(lVar14 + lVar31 * 4) = iVar30;
    psVar32 = (short *)(lVar15 + (long)iVar25 * 4);
    puVar34 = (ushort *)(lVar15 + lVar20 * 4);
    *puVar34 = *psVar3 + *psVar32;
    lVar14 = param_1 + 0x14bc;
    bVar6 = *(byte *)(lVar14 + iVar25);
    bVar7 = *(byte *)(lVar14 + iVar30);
    if (bVar6 <= bVar7) {
      bVar6 = bVar7;
    }
    *(byte *)(lVar14 + lVar20) = bVar6 + 1;
    psVar3[1] = (short)lVar20;
    psVar32[1] = (short)lVar20;
    *(int *)(param_1 + 0xbc4) = (int)lVar20;
    iVar25 = *(int *)(param_1 + 0x14b4);
    if (iVar25 < 2) {
      uVar27 = 1;
    }
    else {
      uVar28 = 2;
      uVar27 = 1;
      do {
        uVar19 = uVar28;
        if ((int)uVar28 < iVar25) {
          uVar17 = (ulong)(int)uVar28;
          lVar29 = (long)*(int *)(param_1 + 0xbc0 + (uVar17 | 1) * 4);
          lVar31 = (long)*(int *)(param_1 + 0xbc0 + (long)(int)uVar28 * 4);
          uVar8 = *(ushort *)(lVar15 + lVar29 * 4);
          uVar26 = *(ushort *)(lVar15 + lVar31 * 4);
          if ((uVar8 < uVar26) ||
             ((uVar8 == uVar26 &&
              (*(byte *)(param_1 + 0x14bc + lVar29) <= *(byte *)(param_1 + 0x14bc + lVar31))))) {
            uVar17 = uVar17 | 1;
            uVar19 = uVar28 | 1;
          }
        }
        else {
          uVar17 = (ulong)(int)uVar28;
        }
        uVar8 = *puVar34;
        uVar28 = *(uint *)(param_1 + uVar17 * 4 + 0xbc0);
        uVar26 = *(ushort *)
                  (lVar15 + (-(ulong)(uVar28 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar28 << 2));
        if ((uVar8 < uVar26) ||
           ((uVar8 == uVar26 &&
            (*(byte *)(lVar14 + lVar20) <= *(byte *)(param_1 + (int)uVar28 + 0x14bc))))) break;
        *(uint *)(param_1 + (long)(int)uVar27 * 4 + 0xbc0) = uVar28;
        uVar28 = uVar19 * 2;
        iVar25 = *(int *)(param_1 + 0x14b4);
        uVar27 = uVar19;
      } while ((int)uVar28 <= iVar25);
    }
    *(int *)(param_1 + (long)(int)uVar27 * 4 + 0xbc0) = (int)lVar20;
    lVar20 = lVar20 + 1;
    uVar28 = *(uint *)(param_1 + 0x14b4);
    if ((int)uVar28 < 2) {
      lVar20 = (long)*(int *)(param_1 + 0x14b8) + -1;
      *(int *)(param_1 + 0x14b8) = (int)lVar20;
      *(undefined4 *)(param_1 + 0xbc0 + lVar20 * 4) = *(undefined4 *)(param_1 + 0xbc4);
      plVar22 = (long *)param_2[2];
      lVar18 = *param_2;
      lVar29 = param_2[1];
      lVar14 = *plVar22;
      lVar31 = plVar22[1];
      lVar10 = plVar22[2];
      uVar27 = *(uint *)(plVar22 + 3);
      lVar23 = (long)(int)uVar27;
      *(undefined8 *)(param_1 + 3000) = 0;
      *(undefined8 *)(param_1 + 0xbb0) = 0;
      *(undefined8 *)(param_1 + 0xba8) = 0;
      *(undefined8 *)(param_1 + 0xba0) = 0;
      *(undefined2 *)
       (lVar18 + (long)*(int *)(param_1 + 0xbc0 + (long)*(int *)(param_1 + 0x14b8) * 4) * 4 + 2) = 0
      ;
      lVar20 = (long)*(int *)(param_1 + 0x14b8);
      if (*(int *)(param_1 + 0x14b8) < 0x23c) {
        iVar25 = 0;
        do {
          iVar30 = *(int *)(param_1 + 0xbc4 + lVar20 * 4);
          puVar34 = (ushort *)(lVar18 + (long)iVar30 * 4);
          uVar8 = *(ushort *)(lVar18 + (ulong)puVar34[1] * 4 + 2);
          if ((int)(uint)uVar8 < (int)uVar27) {
            uVar28 = uVar8 + 1;
          }
          else {
            iVar25 = iVar25 + 1;
            uVar28 = uVar27;
          }
          puVar34[1] = (ushort)uVar28;
          if (iVar30 <= (int)lVar29) {
            lVar2 = param_1 + (long)(int)uVar28 * 2;
            *(short *)(lVar2 + 0xba0) = *(short *)(lVar2 + 0xba0) + 1;
            if (iVar30 < (int)lVar10) {
              iVar12 = 0;
              uVar17 = (ulong)*puVar34;
              *(ulong *)(param_1 + 0x1718) = *(long *)(param_1 + 0x1718) + uVar17 * uVar28;
            }
            else {
              iVar12 = *(int *)(lVar31 + (long)(iVar30 - (int)lVar10) * 4);
              uVar17 = (ulong)*puVar34;
              *(ulong *)(param_1 + 0x1718) =
                   *(long *)(param_1 + 0x1718) + uVar17 * (iVar12 + uVar28);
            }
            if (lVar14 != 0) {
              *(ulong *)(param_1 + 0x1720) =
                   *(long *)(param_1 + 0x1720) +
                   uVar17 * (iVar12 + (uint)*(ushort *)(lVar14 + (long)iVar30 * 4 + 2));
            }
          }
          iVar30 = (int)lVar20;
          lVar20 = lVar20 + 1;
        } while (iVar30 != 0x23b);
        if (iVar25 != 0) {
          psVar3 = (short *)(param_1 + lVar23 * 2 + 0xba0);
          do {
            psVar32 = psVar3;
            lVar20 = (lVar23 << 0x20) + 0x100000000;
            do {
              psVar32 = psVar32 + -1;
              lVar20 = lVar20 + -0x100000000;
            } while (*psVar32 == 0);
            iVar30 = iVar25 + -2;
            *psVar32 = *psVar32 + -1;
            lVar20 = param_1 + (lVar20 >> 0x1f);
            *(short *)(lVar20 + 0xba0) = *(short *)(lVar20 + 0xba0) + 2;
            *psVar3 = *psVar3 + -1;
            bVar1 = 1 < iVar25;
            iVar25 = iVar30;
          } while (iVar30 != 0 && bVar1);
          if (uVar27 != 0) {
            iVar25 = 0x23d;
            do {
              uVar8 = *(ushort *)(param_1 + lVar23 * 2 + 0xba0);
              uVar27 = (uint)uVar8;
              if (uVar8 != 0) {
                do {
                  piVar33 = (int *)(param_1 + 0xbbc + (long)iVar25 * 4);
                  do {
                    iVar30 = *piVar33;
                    iVar25 = iVar25 + -1;
                    piVar33 = piVar33 + -1;
                  } while ((int)lVar29 < iVar30);
                  puVar34 = (ushort *)(lVar18 + (long)iVar30 * 4 + 2);
                  uVar8 = *puVar34;
                  if ((uint)lVar23 != (uint)uVar8) {
                    *(ulong *)(param_1 + 0x1718) =
                         *(long *)(param_1 + 0x1718) +
                         (lVar23 - (ulong)uVar8) * (ulong)*(ushort *)(lVar18 + (long)iVar30 * 4);
                    *puVar34 = (ushort)lVar23;
                  }
                  uVar27 = uVar27 - 1;
                } while (uVar27 != 0);
              }
              lVar23 = lVar23 + -1;
            } while ((int)lVar23 != 0);
          }
        }
      }
      auStack_20[1] = *(short *)(param_1 + 0xba0) * 2;
      auStack_20[2] = (auStack_20[1] + *(short *)(param_1 + 0xba2)) * 2;
      auStack_20[3] = (auStack_20[2] + *(short *)(param_1 + 0xba4)) * 2;
      local_18 = (auStack_20[3] + *(short *)(param_1 + 0xba6)) * 2;
      local_16 = (local_18 + *(short *)(param_1 + 0xba8)) * 2;
      local_14 = (local_16 + *(short *)(param_1 + 0xbaa)) * 2;
      local_12 = (local_14 + *(short *)(param_1 + 0xbac)) * 2;
      local_10 = (local_12 + *(short *)(param_1 + 0xbae)) * 2;
      local_e = (local_10 + *(short *)(param_1 + 0xbb0)) * 2;
      local_c = (local_e + *(short *)(param_1 + 0xbb2)) * 2;
      local_a = (local_c + *(short *)(param_1 + 0xbb4)) * 2;
      local_8 = (local_a + *(short *)(param_1 + 0xbb6)) * 2;
      local_6 = (*(short *)(param_1 + 3000) + local_8) * 2;
      local_4 = (*(short *)(param_1 + 0xbba) + local_6) * 2;
      local_2 = (local_4 + *(short *)(param_1 + 0xbbc)) * 2;
      if (-1 < (int)uVar16) {
        uVar17 = 0;
        do {
          uVar8 = *(ushort *)(lVar15 + uVar17 * 4 + 2);
          if (uVar8 != 0) {
            uVar27 = (uint)auStack_20[uVar8];
            uVar26 = auStack_20[uVar8] + 1;
            auStack_20[uVar8] = uVar26;
            if (uVar8 < 4) {
              uVar19 = 0;
            }
            else {
              uVar19 = 0;
              uVar28 = uVar8 & 0xfffc;
              do {
                uVar11 = uVar27 & 1;
                uVar28 = uVar28 - 4;
                uVar4 = uVar27 & 2;
                uVar9 = uVar27 >> 3;
                uVar5 = uVar27 >> 2;
                uVar27 = uVar27 >> 4;
                uVar19 = uVar9 & 1 | (uVar4 | (uVar19 & 0x1fffffff | uVar11) << 2 | uVar5 & 1) << 1;
                uVar26 = (ushort)uVar19;
                uVar19 = uVar19 << 1;
              } while (uVar28 != 0);
            }
            uVar28 = uVar8 & 3;
            if ((uVar8 & 3) != 0) {
              do {
                uVar11 = uVar27 & 1;
                uVar27 = uVar27 >> 1;
                uVar28 = uVar28 - 1;
                uVar19 = uVar19 | uVar11;
                uVar26 = (ushort)uVar19;
                uVar19 = uVar19 << 1;
              } while (uVar28 != 0);
            }
            *(ushort *)(lVar15 + uVar17 * 4) = uVar26;
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != uVar16 + 1);
      }
      return;
    }
  } while( true );
}

