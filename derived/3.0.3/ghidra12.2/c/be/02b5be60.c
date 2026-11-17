
/* WARNING: Removing unreachable block (ram,0x02b5c264) */

undefined2 FUN_02b5be60(uint param_1)

{
  ushort uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  int *piVar10;
  ushort uVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  undefined8 *puVar16;
  uint uVar17;
  uint uVar18;
  ushort uVar19;
  char *pcVar20;
  uint uVar21;
  char cVar22;
  
  puVar6 = PTR_DAT_04bc4580;
  puVar5 = PTR_DAT_04bc4578;
  lVar14 = *(long *)PTR_DAT_04bb5008;
  uVar11 = *(ushort *)(lVar14 + 0xff0);
  uVar17 = (uint)uVar11;
  uVar21 = (param_1 & 0xffff) - (uint)uVar11;
  if (((uVar21 < *(uint *)(lVar14 + 0xfd0)) &&
      (puVar15 = *(uint **)(*(long *)(lVar14 + 0xfd8) + (long)(int)uVar21 * 8),
      puVar15 != (uint *)0x0)) && (uVar21 = *puVar15, uVar21 != 0)) {
    cVar22 = *PTR_DAT_04bc4578;
LAB_02b5bed4:
    puVar8 = (uint *)(ulong)uVar21;
    if (cVar22 == '\0') {
      cVar22 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      puVar8 = (uint *)(ulong)*puVar15;
joined_r0x02b5bf00:
      if ((puVar8 == (uint *)0x0) || (puVar15 == puVar8)) goto LAB_02b5bf88;
      lVar2 = 0xc;
      if (*(char *)((long)puVar15 + (10 - (long)puVar8)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar15 + (lVar2 - (long)puVar8);
      if (lVar2 == 0) goto LAB_02b5bf88;
      uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar8));
      *(undefined4 *)(puVar6 + 4) = 0xfffffffe;
      if (uVar12 == 0) goto LAB_02b5bf88;
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != -0x11631973) {
        piVar10 = piVar10 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_02b5bf88;
      }
      iVar7 = 0;
      if (*piVar10 != -1) {
        iVar7 = *piVar10;
      }
      *(int *)(puVar6 + 4) = iVar7;
      uVar21 = *puVar15;
      if (uVar21 == 0) goto LAB_02b5bf88;
      goto LAB_02b5bed4;
    }
    uVar21 = *(uint *)(puVar6 + 4);
    if ((int)uVar21 < 0) {
      if (uVar21 != 0xffffffff) goto LAB_02b5bf88;
      goto joined_r0x02b5bf00;
    }
    if ((short *)((ulong)uVar21 + (long)puVar15) != (short *)0x0) {
      if (*(short *)((ulong)uVar21 + (long)puVar15) == 7) {
        return 7;
      }
      goto LAB_02b5bf8c;
    }
LAB_02b5bf88:
    puVar8 = (uint *)(ulong)*puVar15;
LAB_02b5bf8c:
    uVar19 = 0;
    if ((puVar8 == (uint *)0x0) || (puVar15 == puVar8)) goto LAB_02b5c014;
    puVar8 = (uint *)((long)puVar15 - (long)puVar8);
    uVar19 = 0;
    if (*puVar8 == 0) goto LAB_02b5c014;
    uVar21 = puVar8[1];
    if ((uVar21 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + lVar2 + (ulong)(ushort)puVar8[2] * 8;
      if (lVar2 != 0) {
        uVar18 = 0;
        if ((ulong)uVar21 != 0) {
          uVar18 = (uint)((ulong)((long)puVar15 - lVar2) / (ulong)uVar21);
        }
        if (*puVar8 <= uVar18) {
          uVar18 = 0xffffffff;
        }
        if ((uVar18 < *(uint *)PTR_DAT_04bc4590) &&
           (uVar19 = *(ushort *)(*(long *)(PTR_DAT_04bc4590 + 8) + (long)(int)uVar18 * 2),
           uVar19 < 6)) goto LAB_02b5c014;
      }
    }
  }
  uVar19 = 0;
LAB_02b5c014:
  puVar5 = PTR_DAT_04bc4598;
  uVar1 = *(short *)(lVar14 + 0xff2) + 1;
  if ((uint)uVar11 != (uint)uVar1) {
    pbVar9 = PTR_DAT_04bc45a0;
    puVar15 = (uint *)PTR_DAT_04bc4590;
    puVar16 = (undefined8 *)PTR_DAT_04bc4580;
    pcVar20 = PTR_DAT_04bc4578;
    do {
      uVar21 = uVar17 & 0xffff;
      uVar17 = uVar21 - *(ushort *)(lVar14 + 0xff0);
      if (((*(uint *)(lVar14 + 0xfd0) <= uVar17) ||
          (puVar8 = *(uint **)(*(long *)(lVar14 + 0xfd8) + (long)(int)uVar17 * 8),
          puVar8 == (uint *)0x0)) && (puVar8 = (uint *)puVar5, (*pbVar9 & 1) == 0)) {
        iVar7 = __cxa_guard_acquire();
        if (iVar7 == 0) {
          pbVar9 = PTR_DAT_04bc45a0;
        }
        else {
          *(undefined4 *)puVar5 = 0;
          pbVar9 = PTR_DAT_04bc45a0;
          __cxa_guard_release(PTR_DAT_04bc45a0);
        }
        puVar15 = (uint *)PTR_DAT_04bc4590;
        puVar16 = (undefined8 *)PTR_DAT_04bc4580;
        pcVar20 = PTR_DAT_04bc4578;
      }
      uVar17 = *puVar8;
      if (uVar17 == 0 || puVar8 == (uint *)(ulong)uVar17) {
LAB_02b5c0d0:
        uVar11 = 0;
      }
      else {
        puVar13 = (uint *)((long)puVar8 - (long)(ulong)uVar17);
        uVar11 = 0;
        if (*puVar13 != 0) {
          uVar17 = puVar13[1];
          if ((uVar17 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar2 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar13 + lVar2 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar2 != 0) {
              uVar18 = 0;
              if ((ulong)uVar17 != 0) {
                uVar18 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar17);
              }
              if (*puVar13 <= uVar18) {
                uVar18 = 0xffffffff;
              }
              if ((uVar18 < *puVar15) &&
                 (uVar11 = *(ushort *)(*(long *)(puVar15 + 2) + (long)(int)uVar18 * 2), uVar11 < 6))
              goto LAB_02b5c0d4;
            }
          }
          goto LAB_02b5c0d0;
        }
      }
LAB_02b5c0d4:
      if ((uVar11 == uVar19) && (*puVar8 != 0)) {
        cVar22 = *pcVar20;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *puVar16 = 0xffffffffffffffff;
            puVar16[1] = 0xffffffffffffffff;
            *pcVar20 = '\x01';
          }
          else {
            uVar17 = *(uint *)((long)puVar16 + 4);
            if (-1 < (int)uVar17) {
              if (((short *)((ulong)uVar17 + (long)puVar8) != (short *)0x0) &&
                 (*(short *)((ulong)uVar17 + (long)puVar8) == 7)) {
                uVar17 = *puVar8;
                if (uVar17 == 0) {
                  return 0;
                }
                uVar21 = *(uint *)(puVar16 + 1);
                while( true ) {
                  if (-1 < (int)uVar21) {
                    if ((undefined2 *)((long)puVar8 + (ulong)uVar21) == (undefined2 *)0x0) {
                      return 0;
                    }
                    return *(undefined2 *)((long)puVar8 + (ulong)uVar21);
                  }
                  if (uVar21 != 0xffffffff) {
                    return 0;
                  }
                  lVar14 = (long)puVar8 - (ulong)uVar17;
                  if (lVar14 == 0) {
                    return 0;
                  }
                  lVar2 = 0xc;
                  if (*(char *)(lVar14 + 10) != '\0') {
                    lVar2 = 0x1c;
                  }
                  if (lVar2 + lVar14 == 0) break;
                  uVar12 = (ulong)*(ushort *)(lVar14 + 8);
                  *(undefined4 *)(puVar16 + 1) = 0xfffffffe;
                  if (uVar12 == 0) {
                    return 0;
                  }
                  puVar15 = (uint *)(lVar2 + lVar14 + 4);
                  while (puVar15[-1] != 0x54706054) {
                    puVar15 = puVar15 + 2;
                    uVar12 = uVar12 - 1;
                    if (uVar12 == 0) {
                      return 0;
                    }
                  }
                  uVar21 = 0;
                  if (*puVar15 != 0xffffffff) {
                    uVar21 = *puVar15;
                  }
                  *(uint *)(puVar16 + 1) = uVar21;
                  uVar17 = *puVar8;
                  if (uVar17 == 0) {
                    return 0;
                  }
                }
                return 0;
              }
              break;
            }
            if (uVar17 != 0xffffffff) break;
          }
          lVar2 = (long)puVar8 - (ulong)*puVar8;
          if ((*puVar8 == 0) || (lVar2 == 0)) break;
          lVar3 = 0xc;
          if (*(char *)(lVar2 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar2 == 0) break;
          uVar12 = (ulong)*(ushort *)(lVar2 + 8);
          *(undefined4 *)((long)puVar16 + 4) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar10 = (int *)(lVar3 + lVar2 + 4);
          while (piVar10[-1] != -0x11631973) {
            piVar10 = piVar10 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_02b5c210;
          }
          iVar7 = 0;
          if (*piVar10 != -1) {
            iVar7 = *piVar10;
          }
          *(int *)((long)puVar16 + 4) = iVar7;
          if (*puVar8 == 0) break;
        } while( true );
      }
LAB_02b5c210:
      uVar18 = uVar21;
      if (uVar21 <= *(ushort *)(lVar14 + 0xff2)) {
        uVar18 = (uint)*(ushort *)(lVar14 + 0xff2);
      }
      uVar17 = uVar21;
      do {
        while( true ) {
          if (uVar18 == uVar17) {
            uVar17 = uVar21 + 1;
            goto LAB_02b5c088;
          }
          uVar4 = (uVar17 + 1 & 0xffff) - (uint)*(ushort *)(lVar14 + 0xff0);
          if (uVar4 < *(uint *)(lVar14 + 0xfd0)) break;
          uVar17 = uVar17 + 1;
        }
        uVar17 = uVar17 + 1;
      } while (*(long *)(*(long *)(lVar14 + 0xfd8) + (long)(int)uVar4 * 8) == 0);
LAB_02b5c088:
    } while ((uint)uVar1 != (uVar17 & 0xffff));
  }
  return 0;
}

