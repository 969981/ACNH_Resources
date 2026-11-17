
/* WARNING: Removing unreachable block (ram,0x02b63094) */

void FUN_02b62bd0(undefined4 *param_1,short param_2)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  long *plVar13;
  long lVar14;
  char *pcVar15;
  undefined8 *puVar16;
  ulong uVar17;
  short sVar18;
  uint *puVar19;
  int *piVar20;
  undefined *local_40;
  uint *local_38;
  
  puVar6 = PTR_DAT_04bc4778;
  puVar5 = PTR_DAT_04bc4770;
  if (param_2 == 0) {
    *param_1 = 0;
    return;
  }
  lVar14 = *(long *)PTR_DAT_04bb5008;
  uVar8 = (uint)*(ushort *)(lVar14 + 0x5f0);
  uVar1 = *(short *)(lVar14 + 0x5f2) + 1;
  if (*(ushort *)(lVar14 + 0x5f0) != uVar1) {
    puVar2 = PTR_DAT_04bc4760 + 0x10;
    plVar13 = (long *)PTR_DAT_04bb5008;
    pcVar15 = PTR_DAT_04bb5bc8;
    puVar16 = (undefined8 *)PTR_DAT_04bb5bd0;
    do {
      uVar3 = uVar8 & 0xffff;
      uVar8 = uVar3 - *(ushort *)(lVar14 + 0x5f0);
      if (((uVar8 < *(uint *)(lVar14 + 0x5d0)) &&
          (puVar10 = *(uint **)(*(long *)(lVar14 + 0x5d8) + (long)(int)uVar8 * 8),
          puVar10 != (uint *)0x0)) || (puVar10 = (uint *)puVar5, (*puVar6 & 1) != 0)) {
        if (*puVar10 != 0) goto LAB_02b62cc4;
LAB_02b62e30:
        uVar8 = 0;
      }
      else {
        iVar7 = __cxa_guard_acquire();
        if (iVar7 != 0) {
          *(undefined4 *)puVar5 = 0;
          __cxa_guard_release(puVar6);
        }
        plVar13 = (long *)PTR_DAT_04bb5008;
        pcVar15 = PTR_DAT_04bb5bc8;
        puVar16 = (undefined8 *)PTR_DAT_04bb5bd0;
        if (*(int *)puVar5 == 0) goto LAB_02b62e30;
LAB_02b62cc4:
        cVar12 = *pcVar15;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *puVar16 = 0xffffffffffffffff;
            puVar16[1] = 0xffffffffffffffff;
            *pcVar15 = '\x01';
            puVar16[8] = 0xffffffffffffffff;
            *(undefined4 *)(puVar16 + 9) = 0xffffffff;
            puVar16[2] = 0xffffffffffffffff;
            puVar16[3] = 0xffffffffffffffff;
            puVar16[4] = 0xffffffffffffffff;
            puVar16[5] = 0xffffffffffffffff;
            puVar16[6] = 0xffffffffffffffff;
            puVar16[7] = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)((long)puVar16 + 0x24);
            if (-1 < (int)uVar8) {
              if ((ushort *)((ulong)uVar8 + (long)puVar10) == (ushort *)0x0) goto LAB_02b62e30;
              uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar10);
              goto LAB_02b62e34;
            }
            if (uVar8 != 0xffffffff) goto LAB_02b62e30;
          }
          puVar19 = (uint *)(ulong)*puVar10;
          uVar8 = 0;
          if ((*puVar10 == 0) || (puVar10 == puVar19)) goto LAB_02b62e34;
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar19)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + (lVar11 - (long)puVar19);
          if (lVar11 == 0) goto LAB_02b62e30;
          uVar17 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar19));
          *(undefined4 *)((long)puVar16 + 0x24) = 0xfffffffe;
          uVar8 = 0;
          if (uVar17 == 0) goto LAB_02b62e34;
          piVar20 = (int *)(lVar11 + 4);
          while (piVar20[-1] != 0x54706054) {
            piVar20 = piVar20 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) {
              uVar8 = 0;
              goto LAB_02b62e34;
            }
          }
          iVar7 = 0;
          if (*piVar20 != -1) {
            iVar7 = *piVar20;
          }
          *(int *)((long)puVar16 + 0x24) = iVar7;
        } while (*puVar10 != 0);
        uVar8 = 0;
      }
LAB_02b62e34:
      lVar11 = *plVar13;
      uVar8 = uVar8 - *(ushort *)(lVar11 + 0x5f0);
      local_40 = puVar2;
      if (((uVar8 < *(uint *)(lVar11 + 0x5d0)) &&
          (local_38 = *(uint **)(*(long *)(lVar11 + 0x5d8) + (long)(int)uVar8 * 8),
          local_38 != (uint *)0x0)) && (uVar8 = *local_38, uVar8 != 0)) {
        cVar12 = *pcVar15;
        while (puVar10 = (uint *)(ulong)uVar8, cVar12 == '\0') {
          cVar12 = '\x01';
          *puVar16 = 0xffffffffffffffff;
          puVar16[1] = 0xffffffffffffffff;
          *pcVar15 = '\x01';
          puVar16[8] = 0xffffffffffffffff;
          *(undefined4 *)(puVar16 + 9) = 0xffffffff;
          puVar16[2] = 0xffffffffffffffff;
          puVar16[3] = 0xffffffffffffffff;
          puVar16[4] = 0xffffffffffffffff;
          puVar16[5] = 0xffffffffffffffff;
          puVar16[6] = 0xffffffffffffffff;
          puVar16[7] = 0xffffffffffffffff;
          puVar10 = (uint *)(ulong)*local_38;
          sVar18 = 0;
          if (puVar10 == (uint *)0x0) goto LAB_02b62f38;
LAB_02b62ebc:
          sVar18 = 0;
          if (local_38 == puVar10) goto LAB_02b62f38;
          lVar11 = 0xc;
          if (*(char *)((long)local_38 + (10 - (long)puVar10)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)local_38 + (lVar11 - (long)puVar10);
          sVar18 = 0;
          if (lVar11 == 0) goto LAB_02b62f38;
          uVar17 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar10));
          *(undefined4 *)(puVar16 + 2) = 0xfffffffe;
          if (uVar17 == 0) goto LAB_02b62f44;
          piVar20 = (int *)(lVar11 + 4);
          while (piVar20[-1] != 0xd664b5c) {
            piVar20 = piVar20 + 2;
            uVar17 = uVar17 - 1;
            if (uVar17 == 0) goto LAB_02b62f44;
          }
          iVar7 = 0;
          if (*piVar20 != -1) {
            iVar7 = *piVar20;
          }
          *(int *)(puVar16 + 2) = iVar7;
          uVar8 = *local_38;
          if (uVar8 == 0) goto LAB_02b62f44;
        }
        uVar8 = *(uint *)(puVar16 + 2);
        if ((int)uVar8 < 0) {
          if (uVar8 == 0xffffffff) {
            sVar18 = 0;
            if (puVar10 != (uint *)0x0) goto LAB_02b62ebc;
LAB_02b62f38:
            if (sVar18 != param_2) goto LAB_02b63040;
            goto LAB_02b62f50;
          }
        }
        else if ((short *)((ulong)uVar8 + (long)local_38) != (short *)0x0) {
          sVar18 = *(short *)((ulong)uVar8 + (long)local_38);
          goto LAB_02b62f38;
        }
LAB_02b62f44:
        if (param_2 == 0) {
LAB_02b62f50:
          if ((local_38 != (uint *)0x0) && (uVar8 = *local_38, uVar8 != 0)) {
            cVar12 = *pcVar15;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *puVar16 = 0xffffffffffffffff;
                puVar16[1] = 0xffffffffffffffff;
                *pcVar15 = '\x01';
                puVar16[8] = 0xffffffffffffffff;
                *(undefined4 *)(puVar16 + 9) = 0xffffffff;
                puVar16[2] = 0xffffffffffffffff;
                puVar16[3] = 0xffffffffffffffff;
                puVar16[4] = 0xffffffffffffffff;
                puVar16[5] = 0xffffffffffffffff;
                puVar16[6] = 0xffffffffffffffff;
                puVar16[7] = 0xffffffffffffffff;
                uVar8 = *local_38;
              }
              else {
                uVar9 = *(uint *)(puVar16 + 2);
                if (-1 < (int)uVar9) {
                  if ((short *)((ulong)uVar9 + (long)local_38) == (short *)0x0) break;
                  sVar18 = *(short *)((ulong)uVar9 + (long)local_38);
                  goto LAB_02b63034;
                }
                if (uVar9 != 0xffffffff) break;
              }
              puVar10 = (uint *)(ulong)uVar8;
              sVar18 = 0;
              if ((puVar10 == (uint *)0x0) || (sVar18 = 0, local_38 == puVar10)) goto LAB_02b63034;
              lVar11 = 0xc;
              if (*(char *)((long)local_38 + (10 - (long)puVar10)) != '\0') {
                lVar11 = 0x1c;
              }
              lVar11 = (long)local_38 + (lVar11 - (long)puVar10);
              sVar18 = 0;
              if (lVar11 == 0) goto LAB_02b63034;
              uVar17 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar10));
              *(undefined4 *)(puVar16 + 2) = 0xfffffffe;
              if (uVar17 == 0) break;
              piVar20 = (int *)(lVar11 + 4);
              while (piVar20[-1] != 0xd664b5c) {
                piVar20 = piVar20 + 2;
                uVar17 = uVar17 - 1;
                if (uVar17 == 0) goto LAB_02b63030;
              }
              sVar18 = 0;
              iVar7 = 0;
              if (*piVar20 != -1) {
                iVar7 = *piVar20;
              }
              *(int *)(puVar16 + 2) = iVar7;
              uVar8 = *local_38;
              if (uVar8 == 0) goto LAB_02b63034;
            } while( true );
          }
LAB_02b63030:
          sVar18 = 0;
LAB_02b63034:
          if (sVar18 == param_2) {
            FUN_02ad1570(&local_40);
            return;
          }
        }
      }
LAB_02b63040:
      uVar9 = uVar3;
      if (uVar3 <= *(ushort *)(lVar14 + 0x5f2)) {
        uVar9 = (uint)*(ushort *)(lVar14 + 0x5f2);
      }
      uVar8 = uVar3;
      do {
        while( true ) {
          if (uVar9 == uVar8) {
            uVar8 = uVar3 + 1;
            goto LAB_02b62c84;
          }
          uVar4 = (uVar8 + 1 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x5f0);
          if (uVar4 < *(uint *)(lVar14 + 0x5d0)) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(*(long *)(lVar14 + 0x5d8) + (long)(int)uVar4 * 8) == 0);
LAB_02b62c84:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
  }
  *param_1 = 0;
  return;
}

