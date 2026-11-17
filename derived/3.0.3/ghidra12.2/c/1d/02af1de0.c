
/* WARNING: Removing unreachable block (ram,0x02af20a0) */

void FUN_02af1de0(long param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  ulong uVar12;
  char cVar13;
  int *piVar14;
  uint *puVar15;
  long lVar16;
  uint *puVar17;
  char *pcVar18;
  undefined8 *puVar19;
  
  puVar5 = PTR_DAT_04bc4858;
  lVar16 = *(long *)PTR_DAT_04bb5008;
  uVar8 = (uint)*(ushort *)(lVar16 + 0xbf0);
  uVar1 = *(short *)(lVar16 + 0xbf2) + 1;
  if (*(ushort *)(lVar16 + 0xbf0) != uVar1) {
    pbVar7 = PTR_DAT_04bc4860;
    puVar17 = (uint *)PTR_DAT_04bc46d8;
    pcVar18 = PTR_DAT_04bc4630;
    puVar19 = (undefined8 *)PTR_DAT_04bc4638;
    do {
      uVar2 = uVar8 & 0xffff;
      uVar8 = uVar2 - *(ushort *)(lVar16 + 0xbf0);
      if (((uVar8 < *(uint *)(lVar16 + 0xbd0)) &&
          (puVar11 = *(uint **)(*(long *)(lVar16 + 0xbd8) + (long)(int)uVar8 * 8),
          puVar11 != (uint *)0x0)) || (puVar11 = (uint *)puVar5, (*pbVar7 & 1) != 0)) {
        uVar8 = 0;
        if (*puVar11 != 0) goto LAB_02af1ec4;
      }
      else {
        iVar6 = __cxa_guard_acquire();
        if (iVar6 == 0) {
          pbVar7 = PTR_DAT_04bc4860;
        }
        else {
          *(undefined4 *)puVar5 = 0;
          pbVar7 = PTR_DAT_04bc4860;
          __cxa_guard_release(PTR_DAT_04bc4860);
        }
        puVar17 = (uint *)PTR_DAT_04bc46d8;
        pcVar18 = PTR_DAT_04bc4630;
        puVar19 = (undefined8 *)PTR_DAT_04bc4638;
        if (*(int *)puVar5 == 0) {
          uVar8 = 0;
        }
        else {
LAB_02af1ec4:
          cVar13 = *pcVar18;
          do {
            if (cVar13 != '\0') {
              uVar10 = *(uint *)(puVar19 + 2);
              if ((int)uVar10 < 0) {
                if (uVar10 == 0xffffffff) goto LAB_02af1ef0;
LAB_02af1f6c:
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                if (((ushort *)((ulong)uVar10 + (long)puVar11) != (ushort *)0x0) &&
                   (uVar4 = *(ushort *)((ulong)uVar10 + (long)puVar11), uVar8 = (uint)uVar4,
                   0x1ff < uVar4)) {
                  return;
                }
              }
              goto LAB_02af1f90;
            }
            cVar13 = '\x01';
            *puVar19 = 0xffffffffffffffff;
            puVar19[1] = 0xffffffffffffffff;
            *pcVar18 = '\x01';
            puVar19[2] = 0xffffffffffffffff;
            puVar19[3] = 0xffffffffffffffff;
LAB_02af1ef0:
            puVar15 = (uint *)(ulong)*puVar11;
            uVar8 = 0;
            if ((*puVar11 == 0) || (puVar11 == puVar15)) goto LAB_02af1f90;
            lVar3 = 0xc;
            if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar11 + (lVar3 - (long)puVar15);
            if (lVar3 == 0) goto LAB_02af1f6c;
            uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
            *(undefined4 *)(puVar19 + 2) = 0xfffffffe;
            uVar8 = 0;
            if (uVar12 == 0) goto LAB_02af1f90;
            piVar14 = (int *)(lVar3 + 4);
            while (piVar14[-1] != 0x54706054) {
              piVar14 = piVar14 + 2;
              uVar12 = uVar12 - 1;
              if (uVar12 == 0) {
                uVar8 = 0;
                goto LAB_02af1f90;
              }
            }
            iVar6 = 0;
            if (*piVar14 != -1) {
              iVar6 = *piVar14;
            }
            *(int *)(puVar19 + 2) = iVar6;
          } while (*puVar11 != 0);
          uVar8 = 0;
        }
      }
LAB_02af1f90:
      uVar10 = *puVar11;
      uVar9 = 0;
      if ((uVar10 != 0) && (puVar11 != (uint *)(ulong)uVar10)) {
        puVar15 = (uint *)((long)puVar11 - (long)(ulong)uVar10);
        uVar9 = 0;
        if (*puVar15 != 0) {
          uVar10 = puVar15[1];
          if ((uVar10 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
            lVar3 = 0xc;
            if (*(char *)((long)puVar15 + 10) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar15 + lVar3 + (ulong)(ushort)puVar15[2] * 8;
            if (lVar3 != 0) {
              uVar9 = 0;
              if ((ulong)uVar10 != 0) {
                uVar9 = (uint)((ulong)((long)puVar11 - lVar3) / (ulong)uVar10);
              }
              if (*puVar15 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < *puVar17) &&
                 (uVar9 = (uint)*(ushort *)(*(long *)(puVar17 + 2) + (long)(int)uVar9 * 2),
                 uVar9 < 9)) goto LAB_02af2014;
            }
          }
          uVar9 = 0;
        }
      }
LAB_02af2014:
      if ((uVar8 < 0x200) && (uVar9 != param_2)) {
        lVar3 = (ulong)(uVar8 >> 5) * 4;
        *(uint *)(param_1 + 0xa0 + lVar3) =
             *(uint *)(param_1 + 0xa0 + lVar3) & (1 << (ulong)(uVar8 & 0x1f) ^ 0xffffffffU);
      }
      uVar10 = uVar2;
      if (uVar2 <= *(ushort *)(lVar16 + 0xbf2)) {
        uVar10 = (uint)*(ushort *)(lVar16 + 0xbf2);
      }
      uVar8 = uVar2;
      do {
        while( true ) {
          if (uVar10 == uVar8) {
            uVar8 = uVar2 + 1;
            goto LAB_02af1e84;
          }
          uVar9 = (uVar8 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0xbf0);
          if (uVar9 < *(uint *)(lVar16 + 0xbd0)) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(*(long *)(lVar16 + 0xbd8) + (long)(int)uVar9 * 8) == 0);
LAB_02af1e84:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
  }
  return;
}

