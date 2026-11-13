
/* WARNING: Removing unreachable block (ram,0x01325ac0) */
/* WARNING: Removing unreachable block (ram,0x01325d50) */

int FUN_013257f0(undefined8 param_1,uint param_2,uint *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  char *pcVar17;
  undefined8 *puVar18;
  uint *puVar19;
  int *piVar20;
  uint local_40 [4];
  
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[2] = 0;
  local_40[3] = 0;
  lVar15 = *(long *)PTR_DAT_04bb27a8;
  if ((*(long *)(lVar15 + 0xc48) != 0) && (*(long *)(*(long *)(lVar15 + 0xc48) + 8) != 0)) {
    uVar1 = *(short *)(lVar15 + 0xd92) + 1;
    uVar9 = (uint)*(ushort *)(lVar15 + 0xd90);
    if (*(ushort *)(lVar15 + 0xd90) == uVar1) {
      local_40[3] = 0;
      local_40[2] = 0;
      local_40[1] = 0;
      local_40[0] = 0;
    }
    else {
      puVar8 = (uint *)PTR_DAT_04bbbf58;
      pcVar17 = PTR_DAT_04bbbde8;
      puVar18 = (undefined8 *)PTR_DAT_04bbbdf0;
      do {
        uVar2 = uVar9 & 0xffff;
        uVar9 = uVar2 - *(ushort *)(lVar15 + 0xd90);
        if (((*(uint *)(lVar15 + 0xd70) <= uVar9) ||
            (puVar11 = *(uint **)(*(long *)(lVar15 + 0xd78) + (long)(int)uVar9 * 8),
            puVar11 == (uint *)0x0)) && (puVar11 = &DAT_05190f58, (DAT_05190f60 & 1) == 0)) {
          iVar7 = __cxa_guard_acquire();
          if (iVar7 != 0) {
            DAT_05190f58 = 0;
            __cxa_guard_release(&DAT_05190f60);
          }
          puVar11 = &DAT_05190f58;
          puVar8 = (uint *)PTR_DAT_04bbbf58;
          pcVar17 = PTR_DAT_04bbbde8;
          puVar18 = (undefined8 *)PTR_DAT_04bbbdf0;
        }
        uVar9 = *puVar11;
        if (uVar9 == 0 || puVar11 == (uint *)(ulong)uVar9) {
LAB_013258ec:
          uVar9 = 0;
        }
        else {
          puVar19 = (uint *)((long)puVar11 - (long)(ulong)uVar9);
          uVar9 = 0;
          if (*puVar19 != 0) {
            uVar9 = puVar19[1];
            if ((uVar9 != 0) && ((ulong)(ushort)puVar19[2] != 0)) {
              lVar4 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar19 + lVar4 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar4 != 0) {
                uVar10 = 0;
                if ((ulong)uVar9 != 0) {
                  uVar10 = (uint)((ulong)((long)puVar11 - lVar4) / (ulong)uVar9);
                }
                if (*puVar19 <= uVar10) {
                  uVar10 = 0xffffffff;
                }
                if ((uVar10 < *puVar8) &&
                   (uVar9 = (uint)*(ushort *)(*(long *)(puVar8 + 2) + (long)(int)uVar10 * 2),
                   uVar9 < 3)) goto LAB_013258f0;
              }
            }
            goto LAB_013258ec;
          }
        }
LAB_013258f0:
        if (uVar9 == param_2) {
          if (*puVar11 == 0) {
LAB_01325a50:
            uVar14 = 0;
          }
          else {
            cVar12 = *pcVar17;
            do {
              if (cVar12 == '\0') {
                cVar12 = '\x01';
                *puVar18 = 0xffffffffffffffff;
                puVar18[1] = 0xffffffffffffffff;
                *pcVar17 = '\x01';
                puVar18[0xc] = 0xffffffffffffffff;
                *(undefined4 *)(puVar18 + 0xd) = 0xffffffff;
                puVar18[2] = 0xffffffffffffffff;
                puVar18[3] = 0xffffffffffffffff;
                puVar18[4] = 0xffffffffffffffff;
                puVar18[5] = 0xffffffffffffffff;
                puVar18[6] = 0xffffffffffffffff;
                puVar18[7] = 0xffffffffffffffff;
                puVar18[8] = 0xffffffffffffffff;
                puVar18[9] = 0xffffffffffffffff;
                puVar18[10] = 0xffffffffffffffff;
                puVar18[0xb] = 0xffffffffffffffff;
              }
              else {
                uVar9 = *(uint *)((long)puVar18 + 100);
                if (-1 < (int)uVar9) {
                  if ((ushort *)((ulong)uVar9 + (long)puVar11) == (ushort *)0x0) goto LAB_01325a50;
                  uVar6 = *(ushort *)((ulong)uVar9 + (long)puVar11);
                  uVar14 = (ulong)uVar6;
                  if (0x7f < uVar6) goto LAB_01325a6c;
                  goto LAB_01325a54;
                }
                if (uVar9 != 0xffffffff) goto LAB_01325a50;
              }
              puVar19 = (uint *)(ulong)*puVar11;
              uVar14 = 0;
              if ((*puVar11 == 0) || (puVar11 == puVar19)) goto LAB_01325a54;
              lVar4 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar19)) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar11 + (lVar4 - (long)puVar19);
              if (lVar4 == 0) goto LAB_01325a50;
              uVar13 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar19));
              *(undefined4 *)((long)puVar18 + 100) = 0xfffffffe;
              uVar14 = 0;
              if (uVar13 == 0) goto LAB_01325a54;
              piVar20 = (int *)(lVar4 + 4);
              while (piVar20[-1] != 0x54706054) {
                piVar20 = piVar20 + 2;
                uVar13 = uVar13 - 1;
                if (uVar13 == 0) {
                  uVar14 = 0;
                  goto LAB_01325a54;
                }
              }
              iVar7 = 0;
              if (*piVar20 != -1) {
                iVar7 = *piVar20;
              }
              *(int *)((long)puVar18 + 100) = iVar7;
            } while (*puVar11 != 0);
            uVar14 = 0;
          }
LAB_01325a54:
          local_40[uVar14 >> 5] = 1 << (ulong)((uint)uVar14 & 0x1f) | local_40[uVar14 >> 5];
        }
LAB_01325a6c:
        uVar10 = uVar2;
        if (uVar2 <= *(ushort *)(lVar15 + 0xd92)) {
          uVar10 = (uint)*(ushort *)(lVar15 + 0xd92);
        }
        uVar9 = uVar2;
        do {
          while( true ) {
            if (uVar10 == uVar9) {
              uVar9 = uVar2 + 1;
              goto LAB_013258a4;
            }
            uVar3 = (uVar9 + 1 & 0xffff) - (uint)*(ushort *)(lVar15 + 0xd90);
            if (uVar3 < *(uint *)(lVar15 + 0xd70)) break;
            uVar9 = uVar9 + 1;
          }
          uVar9 = uVar9 + 1;
        } while (*(long *)(*(long *)(lVar15 + 0xd78) + (long)(int)uVar3 * 8) == 0);
LAB_013258a4:
      } while ((uint)uVar1 != (uVar9 & 0xffff));
    }
    local_40[0] = local_40[0] - (local_40[0] >> 1 & 0x55555555);
    local_40[1] = local_40[1] - (local_40[1] >> 1 & 0x55555555);
    uVar9 = (local_40[0] >> 2 & 0x33333333) + (local_40[0] & 0x33333333);
    uVar2 = (local_40[1] >> 2 & 0x33333333) + (local_40[1] & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    local_40[2] = local_40[2] - (local_40[2] >> 1 & 0x55555555);
    uVar9 = uVar9 + (uVar9 >> 8);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar10 = (local_40[2] >> 2 & 0x33333333) + (local_40[2] & 0x33333333);
    local_40[3] = local_40[3] - (local_40[3] >> 1 & 0x55555555);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    uVar3 = uVar9 + (uVar9 >> 0x10) & 0x3f;
    uVar9 = uVar3 + (uVar2 + (uVar2 >> 0x10) & 0x3f);
    uVar2 = (local_40[3] >> 2 & 0x33333333) + (local_40[3] & 0x33333333);
    uVar10 = uVar9 + (uVar10 + (uVar10 >> 0x10) & 0x3f);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar2 = uVar10 + (uVar2 + (uVar2 >> 0x10) & 0x3f);
    if (uVar2 != 0) {
      uVar16 = *param_3 ^ *param_3 << 0xb;
      uVar5 = param_3[3];
      *param_3 = param_3[1];
      param_3[1] = param_3[2];
      uVar16 = uVar16 >> 8 ^ uVar5 >> 0x13 ^ uVar16 ^ uVar5;
      param_3[2] = uVar5;
      param_3[3] = uVar16;
      uVar16 = (uint)((ulong)uVar16 * (ulong)uVar2 >> 0x20);
      if (uVar16 < uVar3) {
        lVar15 = 0;
        uVar10 = 0;
      }
      else if (uVar16 < uVar9) {
        lVar15 = 1;
        uVar10 = uVar3;
      }
      else if (uVar16 < uVar10) {
        lVar15 = 2;
        uVar10 = uVar9;
      }
      else {
        if (uVar2 <= uVar16) {
          return 0;
        }
        lVar15 = 3;
      }
      uVar9 = local_40[lVar15];
      if (uVar9 != 0) {
        iVar7 = (uVar16 - uVar10) + 2;
        do {
          iVar7 = iVar7 + -1;
          if (iVar7 < 2) {
            uVar9 = uVar9 - 1 & (uVar9 ^ 0xffffffff);
            uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
            uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
            uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
            uVar9 = uVar9 + (uVar9 >> 8);
            return (uVar9 + (uVar9 >> 0x10) & 0x3f) + (int)lVar15 * 0x20;
          }
          uVar9 = uVar9 - 1 & uVar9;
        } while (uVar9 != 0);
      }
      iVar7 = (int)lVar15 * 0x20 + -1;
      if (-1 < iVar7) {
        return iVar7;
      }
    }
  }
  return 0;
}

