
bool FUN_02afcac0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  char cVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  uint *puVar13;
  long lVar14;
  uint *puVar15;
  long *plVar16;
  
  puVar10 = PTR_DAT_04bc48c8;
  puVar9 = PTR_DAT_04bc48c0;
  puVar8 = PTR_DAT_04bc48b8;
  puVar2 = PTR_DAT_04bc48b0;
  puVar7 = PTR_DAT_04bc4720;
  puVar1 = PTR_DAT_04bc4718;
  uVar4 = *(uint *)(param_1 + 0x280);
  if (uVar4 != 0) {
    lVar14 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar14 + 0x1e0) < 1) {
      if ((((*(long *)(lVar14 + 0xd0) != 0) &&
           (puVar13 = *(uint **)(*(long *)(lVar14 + 0xd0) + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(lVar14 + 0xe8) <= uVar4 ||
           (*(char *)(*(long *)(lVar14 + 0xf0) + (long)(int)uVar4) != '\0')))) &&
         (((uVar4 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar11 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar11 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * uVar4 + (uint)(ushort)puVar13[2] * 8 + iVar11) +
                          (long)puVar13);
        goto joined_r0x02afcc2c;
      }
    }
    else if (uVar4 < *(uint *)(lVar14 + 0x1e0)) {
      if (*(uint *)(lVar14 + 0x1d0) <= uVar4) {
        uVar4 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar14 + 0x1d8) + (ulong)uVar4 * 8);
joined_r0x02afcc2c:
      if ((puVar13 != (uint *)0x0) &&
         (uVar4 = *puVar13, uVar4 != 0 && puVar13 != (uint *)(ulong)uVar4)) {
        puVar15 = (uint *)((long)puVar13 - (long)(ulong)uVar4);
        if ((*puVar15 != 0) &&
           ((uVar4 = puVar15[1], uVar4 != 0 && ((ulong)(ushort)puVar15[2] != 0)))) {
          lVar14 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar14 = 0x1c;
          }
          lVar14 = (long)puVar15 + lVar14 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar14 != 0) {
            uVar3 = 0;
            if ((ulong)uVar4 != 0) {
              uVar3 = (uint)((ulong)((long)puVar13 - lVar14) / (ulong)uVar4);
            }
            if (*puVar15 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc46b0) &&
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc46b0 + 8) + (long)(int)uVar3 * 2),
               uVar6 < 5)) {
              iVar11 = *(int *)(param_1 + 0x174);
              if (uVar6 != 4) {
                if (uVar6 == 1) {
                  if (iVar11 != 3) {
                    if (iVar11 != 1) {
                      return false;
                    }
                    if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
                      return false;
                    }
                    lVar14 = (long)*(int *)(param_1 + 0xbc);
                    plVar16 = (long *)(*(long *)(param_1 + 0xb0) - lVar14);
                    puVar2 = PTR_DAT_04bb5d98 + 0x10;
                    while( true ) {
                      if (((*puVar7 & 1) == 0) &&
                         (iVar11 = __cxa_guard_acquire(puVar7), iVar11 != 0)) {
                        *(undefined **)puVar1 = puVar2;
                        __cxa_guard_release(puVar7);
                      }
                      if ((plVar16 != (long *)0x0) &&
                         (uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,puVar1), (uVar12 & 1) != 0
                         )) break;
                      plVar16 = (long *)(*(long *)((long)plVar16 + lVar14 + 8) - lVar14);
                      if (plVar16 == (long *)((param_1 + 0xa8) - lVar14)) {
                        return false;
                      }
                    }
                    return (char)plVar16[0x25d] == '\0' || (int)plVar16[0x1b9] != 3;
                  }
                  if (*(long *)(param_1 + 0xb0) == param_1 + 0xa8) {
                    return false;
                  }
                  lVar14 = (long)*(int *)(param_1 + 0xbc);
                  plVar16 = (long *)(*(long *)(param_1 + 0xb0) - lVar14);
                  puVar1 = PTR_DAT_04bb5d98 + 0x10;
                  while( true ) {
                    if (((*puVar10 & 1) == 0) &&
                       (iVar11 = __cxa_guard_acquire(puVar10), iVar11 != 0)) {
                      *(undefined **)puVar9 = puVar1;
                      __cxa_guard_release(puVar10);
                    }
                    if ((plVar16 != (long *)0x0) &&
                       (uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,puVar9), (uVar12 & 1) != 0))
                    break;
                    plVar16 = (long *)(*(long *)((long)plVar16 + lVar14 + 8) - lVar14);
                    if (plVar16 == (long *)((param_1 + 0xa8) - lVar14)) {
                      return false;
                    }
                  }
LAB_02afcef0:
                  cVar5 = (char)plVar16[0x25b];
                  iVar11 = (int)plVar16[0x1b7];
LAB_02afcf00:
                  return cVar5 != '\0' && iVar11 == 3;
                }
                if (uVar6 != 0) {
                  return false;
                }
              }
              goto LAB_02afcc34;
            }
          }
        }
      }
    }
  }
  iVar11 = *(int *)(param_1 + 0x174);
LAB_02afcc34:
  if (iVar11 - 2U < 2) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar14 = (long)*(int *)(param_1 + 0xbc);
      plVar16 = (long *)(*(long *)(param_1 + 0xb0) - lVar14);
      puVar1 = PTR_DAT_04bb5d98 + 0x10;
      do {
        if (((*puVar10 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar10), iVar11 != 0)) {
          *(undefined **)puVar9 = puVar1;
          __cxa_guard_release(puVar10);
        }
        if ((plVar16 != (long *)0x0) &&
           (uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,puVar9), (uVar12 & 1) != 0))
        goto LAB_02afcef0;
        plVar16 = (long *)(*(long *)((long)plVar16 + lVar14 + 8) - lVar14);
      } while (plVar16 != (long *)((param_1 + 0xa8) - lVar14));
    }
  }
  else if (iVar11 == 1) {
    if (*(long *)(param_1 + 0xb0) != param_1 + 0xa8) {
      lVar14 = (long)*(int *)(param_1 + 0xbc);
      plVar16 = (long *)(*(long *)(param_1 + 0xb0) - lVar14);
      puVar1 = PTR_DAT_04bb5d98 + 0x10;
      do {
        if (((*puVar8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(puVar8), iVar11 != 0)) {
          *(undefined **)puVar2 = puVar1;
          __cxa_guard_release(puVar8);
        }
        if ((plVar16 != (long *)0x0) &&
           (uVar12 = (**(code **)(*plVar16 + 0x10))(plVar16,puVar2), (uVar12 & 1) != 0)) {
          cVar5 = (char)plVar16[0x25c];
          iVar11 = (int)plVar16[0x1b8];
          goto LAB_02afcf00;
        }
        plVar16 = (long *)(*(long *)((long)plVar16 + lVar14 + 8) - lVar14);
      } while (plVar16 != (long *)((param_1 + 0xa8) - lVar14));
    }
  }
  return false;
}

