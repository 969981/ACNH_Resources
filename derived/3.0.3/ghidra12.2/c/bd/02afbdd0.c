
bool FUN_02afbdd0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  ulong uVar11;
  uint *puVar12;
  long lVar13;
  uint *puVar14;
  long *plVar15;
  
  puVar9 = PTR_DAT_04bc48c8;
  puVar8 = PTR_DAT_04bc48c0;
  puVar7 = PTR_DAT_04bc48b8;
  puVar2 = PTR_DAT_04bc48b0;
  puVar6 = PTR_DAT_04bc4720;
  puVar1 = PTR_DAT_04bc4718;
  uVar4 = *(uint *)(param_1 + 0x280);
  if (uVar4 != 0) {
    lVar13 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar13 + 0x1e0) < 1) {
      if ((((*(long *)(lVar13 + 0xd0) != 0) &&
           (puVar12 = *(uint **)(*(long *)(lVar13 + 0xd0) + 8), puVar12 != (uint *)0x0)) &&
          ((*(uint *)(lVar13 + 0xe8) <= uVar4 ||
           (*(char *)(*(long *)(lVar13 + 0xf0) + (long)(int)uVar4) != '\0')))) &&
         (((uVar4 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
        iVar10 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar12 = (uint *)((ulong)(puVar12[1] * uVar4 + (uint)(ushort)puVar12[2] * 8 + iVar10) +
                          (long)puVar12);
        goto joined_r0x02afbf3c;
      }
    }
    else if (uVar4 < *(uint *)(lVar13 + 0x1e0)) {
      if (*(uint *)(lVar13 + 0x1d0) <= uVar4) {
        uVar4 = 0;
      }
      puVar12 = *(uint **)(*(long *)(lVar13 + 0x1d8) + (ulong)uVar4 * 8);
joined_r0x02afbf3c:
      if ((puVar12 != (uint *)0x0) &&
         (uVar4 = *puVar12, uVar4 != 0 && puVar12 != (uint *)(ulong)uVar4)) {
        puVar14 = (uint *)((long)puVar12 - (long)(ulong)uVar4);
        if ((*puVar14 != 0) &&
           ((uVar4 = puVar14[1], uVar4 != 0 && ((ulong)(ushort)puVar14[2] != 0)))) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar14 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar14 + lVar13 + (ulong)(ushort)puVar14[2] * 8;
          if (lVar13 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar12 - lVar13) / (ulong)uVar4);
            }
            if (*puVar14 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc46b0) &&
               (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc46b0 + 8) + (long)(int)uVar3 * 2),
               uVar5 < 5)) {
              iVar10 = *(int *)(param_1 + 0x174);
              if (uVar5 != 4) {
                if (uVar5 == 1) {
                  if (iVar10 == 3) {
                    if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
                      return false;
                    }
                    lVar13 = (long)*(int *)(param_1 + 0xbc);
                    plVar15 = (long *)(*(long *)(param_1 + 0xb0) - lVar13);
                    puVar1 = PTR_DAT_04bb5d98 + 0x10;
                    while( true ) {
                      if (((*puVar9 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
                        *(undefined **)puVar8 = puVar1;
                        __cxa_guard_release(puVar9);
                      }
                      if ((plVar15 != (long *)0x0) &&
                         (uVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar8), (uVar11 & 1) != 0
                         )) break;
                      plVar15 = (long *)(*(long *)((long)plVar15 + lVar13 + 8) - lVar13);
                      if (plVar15 == (long *)((param_1 + 0xa8) - lVar13)) {
                        return false;
                      }
                    }
LAB_02afc1f4:
                    plVar15 = plVar15 + 0x10a;
                  }
                  else {
                    if (iVar10 != 1) {
                      return false;
                    }
                    if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
                      return false;
                    }
                    lVar13 = (long)*(int *)(param_1 + 0xbc);
                    plVar15 = (long *)(*(long *)(param_1 + 0xb0) - lVar13);
                    puVar2 = PTR_DAT_04bb5d98 + 0x10;
                    while( true ) {
                      if (((*puVar6 & 1) == 0) &&
                         (iVar10 = __cxa_guard_acquire(puVar6), iVar10 != 0)) {
                        *(undefined **)puVar1 = puVar2;
                        __cxa_guard_release(puVar6);
                      }
                      if ((plVar15 != (long *)0x0) &&
                         (uVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar1), (uVar11 & 1) != 0
                         )) break;
                      plVar15 = (long *)(*(long *)((long)plVar15 + lVar13 + 8) - lVar13);
                      if (plVar15 == (long *)((param_1 + 0xa8) - lVar13)) {
                        return false;
                      }
                    }
                    plVar15 = plVar15 + 0x10c;
                  }
LAB_02afc1f8:
                  return (char)plVar15[0xa8] != '\0' && (int)plVar15[4] == 1;
                }
                if (uVar5 != 0) {
                  return false;
                }
              }
              goto LAB_02afbf44;
            }
          }
        }
      }
    }
  }
  iVar10 = *(int *)(param_1 + 0x174);
LAB_02afbf44:
  if (iVar10 - 2U < 2) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar13 = (long)*(int *)(param_1 + 0xbc);
      plVar15 = (long *)(*(long *)(param_1 + 0xb0) - lVar13);
      puVar1 = PTR_DAT_04bb5d98 + 0x10;
      do {
        if (((*puVar9 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar9), iVar10 != 0)) {
          *(undefined **)puVar8 = puVar1;
          __cxa_guard_release(puVar9);
        }
        if ((plVar15 != (long *)0x0) &&
           (uVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar8), (uVar11 & 1) != 0))
        goto LAB_02afc1f4;
        plVar15 = (long *)(*(long *)((long)plVar15 + lVar13 + 8) - lVar13);
      } while (plVar15 != (long *)((param_1 + 0xa8) - lVar13));
    }
  }
  else if (iVar10 == 1) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar13 = (long)*(int *)(param_1 + 0xbc);
      plVar15 = (long *)(*(long *)(param_1 + 0xb0) - lVar13);
      puVar1 = PTR_DAT_04bb5d98 + 0x10;
      do {
        if (((*puVar7 & 1) == 0) && (iVar10 = __cxa_guard_acquire(puVar7), iVar10 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar7);
        }
        if ((plVar15 != (long *)0x0) &&
           (uVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,puVar2), (uVar11 & 1) != 0)) {
          plVar15 = plVar15 + 0x10b;
          goto LAB_02afc1f8;
        }
        plVar15 = (long *)(*(long *)((long)plVar15 + lVar13 + 8) - lVar13);
      } while (plVar15 != (long *)((param_1 + 0xa8) - lVar13));
    }
  }
  return false;
}

