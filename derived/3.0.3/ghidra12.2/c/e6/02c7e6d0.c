
void FUN_02c7e6d0(uint *param_1)

{
  bool bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  undefined8 *puVar9;
  short *psVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  undefined *local_80;
  short local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  uint *local_70;
  uint local_68;
  uint local_64;
  
  puVar4 = PTR_DAT_04bb43c0;
  uVar6 = *param_1;
  if (0 < (int)uVar6) {
    iVar11 = -uVar6;
    puVar2 = PTR_DAT_04bc0510 + 0x10;
    uVar17 = (ulong)uVar6;
    do {
      uVar15 = uVar17 - 1;
      if (uVar15 < *param_1) {
        psVar10 = *(short **)(*(long *)(param_1 + 2) + uVar17 * 8 + -8);
      }
      else {
        psVar10 = (short *)0x0;
      }
      lVar13 = *(long *)puVar4;
      uVar6 = FUN_0277d6c4(psVar10);
      lVar12 = *(long *)puVar4;
      iVar16 = (int)uVar17;
      iVar14 = (int)uVar15;
      if (lVar12 == 0) {
LAB_02c7e7c0:
        if ((long)uVar17 <= (long)(int)*param_1) {
          puVar9 = *(undefined8 **)(*(long *)(param_1 + 2) + uVar17 * 8 + -8);
          *puVar9 = *(undefined8 *)(param_1 + 4);
          *(undefined8 **)(param_1 + 4) = puVar9;
        }
LAB_02c7e7e0:
        if ((-1 < iVar14) && (uVar6 = *param_1, iVar14 < (int)uVar6)) {
          if (iVar16 < (int)uVar6) {
            memmove((void *)(*(long *)(param_1 + 2) + (uVar15 & 0xffffffff) * 8),
                    (void *)(*(long *)(param_1 + 2) + (uVar17 & 0xffffffff) * 8),
                    -(ulong)(iVar11 + uVar6 >> 0x1f) & 0xfffffff800000000 |
                    (ulong)(iVar11 + uVar6) << 3);
            uVar6 = *param_1;
          }
          *param_1 = uVar6 - 1;
        }
      }
      else {
        lVar13 = *(long *)(lVar13 + 0x57e58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if (((*(uint *)(lVar13 + 0x1d8) <= uVar6) ||
            (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) || (*psVar10 == -2))
        goto LAB_02c7e7c0;
        local_78 = *psVar10;
        local_76 = (undefined1)psVar10[1];
        local_75 = *(undefined1 *)((long)psVar10 + 3);
        local_74 = *(undefined4 *)(psVar10 + 2);
        local_70 = (uint *)0x0;
        local_80 = puVar2;
        uVar6 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar4 != 0) {
          lVar12 = *(long *)(lVar12 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            lVar12 = *(long *)PTR_DAT_04bc0428;
            uVar6 = FUN_0277d6c4(psVar10);
            uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
            if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
               (puVar8 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8),
               puVar8 != (uint *)0x0)) {
              local_70 = puVar8;
            }
          }
        }
        uVar7 = FUN_01b032d0(&local_80);
        puVar5 = PTR_DAT_04bc0170;
        if ((uVar7 & 1) == 0) {
LAB_02c7ec5c:
          if ((long)uVar17 <= (long)(int)*param_1) {
            puVar9 = *(undefined8 **)(*(long *)(param_1 + 2) + uVar17 * 8 + -8);
            *puVar9 = *(undefined8 *)(param_1 + 4);
            *(undefined8 **)(param_1 + 4) = puVar9;
          }
          goto LAB_02c7e7e0;
        }
        local_64 = 0x13d;
        if (local_70 == (uint *)0x0) {
          local_68 = 0;
        }
        else {
          uVar6 = *local_70;
          local_68 = 0;
          if ((uVar6 != 0) && (local_70 != (uint *)(ulong)uVar6)) {
            puVar8 = (uint *)((long)local_70 - (long)(ulong)uVar6);
            local_68 = 0;
            if (*puVar8 != 0) {
              uVar6 = puVar8[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar12 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar6);
                  }
                  if (*puVar8 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)PTR_DAT_04bc0068) &&
                     (local_68 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar3 * 2),
                     local_68 < 0x13e)) goto LAB_02c7e968;
                }
              }
              local_68 = 0;
            }
          }
LAB_02c7e968:
          if (local_68 == 0x13d) goto LAB_02c7ec5c;
          local_68 = 0;
          uVar6 = *local_70;
          if ((uVar6 != 0) && (local_70 != (uint *)(ulong)uVar6)) {
            puVar8 = (uint *)((long)local_70 - (long)(ulong)uVar6);
            local_68 = 0;
            if (*puVar8 != 0) {
              uVar6 = puVar8[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar12 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar6);
                  }
                  if (*puVar8 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)PTR_DAT_04bc0170) &&
                     (local_68 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0170 + 8) + (long)(int)uVar3 * 2),
                     local_68 < 0xf)) goto LAB_02c7ea24;
                }
              }
              local_68 = 0;
            }
          }
        }
LAB_02c7ea24:
        local_64 = 0;
        if (local_68 == 0) {
          if ((long)uVar17 <= (long)(int)*param_1) {
            puVar9 = *(undefined8 **)(*(long *)(param_1 + 2) + uVar17 * 8 + -8);
            *puVar9 = *(undefined8 *)(param_1 + 4);
            *(undefined8 **)(param_1 + 4) = puVar9;
          }
          if ((-1 < iVar14) && (uVar6 = *param_1, iVar14 < (int)uVar6)) {
            if (iVar16 < (int)uVar6) {
              memmove((void *)(*(long *)(param_1 + 2) + (uVar15 & 0xffffffff) * 8),
                      (void *)(*(long *)(param_1 + 2) + (uVar17 & 0xffffffff) * 8),
                      -(ulong)(iVar11 + uVar6 >> 0x1f) & 0xfffffff800000000 |
                      (ulong)(iVar11 + uVar6) << 3);
              uVar6 = *param_1;
            }
            *param_1 = uVar6 - 1;
          }
        }
        local_64 = 0xc;
        if (DAT_0565f0fc == '\0') {
          local_64 = 0;
        }
        if (local_70 == (uint *)0x0) {
LAB_02c7eb34:
          local_68 = 0;
        }
        else {
          uVar6 = *local_70;
          local_68 = 0;
          if ((uVar6 != 0) && (local_70 != (uint *)(ulong)uVar6)) {
            puVar8 = (uint *)((long)local_70 - (long)(ulong)uVar6);
            local_68 = 0;
            if (*puVar8 != 0) {
              uVar6 = puVar8[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar12 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar6);
                  }
                  if (*puVar8 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)puVar5) &&
                     (local_68 = (uint)*(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar3 * 2),
                     local_68 < 0xf)) goto LAB_02c7eb38;
                }
              }
              goto LAB_02c7eb34;
            }
          }
        }
LAB_02c7eb38:
        if (local_68 == local_64) {
          if ((long)uVar17 <= (long)(int)*param_1) {
            puVar9 = *(undefined8 **)(*(long *)(param_1 + 2) + uVar17 * 8 + -8);
            *puVar9 = *(undefined8 *)(param_1 + 4);
            *(undefined8 **)(param_1 + 4) = puVar9;
          }
          if ((-1 < iVar14) && (uVar6 = *param_1, iVar14 < (int)uVar6)) {
            if (iVar16 < (int)uVar6) {
              memmove((void *)(*(long *)(param_1 + 2) + (uVar15 & 0xffffffff) * 8),
                      (void *)(*(long *)(param_1 + 2) + (uVar17 & 0xffffffff) * 8),
                      -(ulong)(iVar11 + uVar6 >> 0x1f) & 0xfffffff800000000 |
                      (ulong)(iVar11 + uVar6) << 3);
              uVar6 = *param_1;
            }
            *param_1 = uVar6 - 1;
          }
        }
        local_64 = 8;
        if (local_70 == (uint *)0x0) {
LAB_02c7ec38:
          local_68 = 0;
        }
        else {
          uVar6 = *local_70;
          local_68 = 0;
          if ((uVar6 != 0) && (local_70 != (uint *)(ulong)uVar6)) {
            puVar8 = (uint *)((long)local_70 - (long)(ulong)uVar6);
            local_68 = 0;
            if (*puVar8 != 0) {
              uVar6 = puVar8[1];
              if ((uVar6 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
                lVar12 = 0xc;
                if (*(char *)((long)puVar8 + 10) != '\0') {
                  lVar12 = 0x1c;
                }
                lVar12 = (long)puVar8 + lVar12 + (ulong)(ushort)puVar8[2] * 8;
                if (lVar12 != 0) {
                  uVar3 = 0;
                  if ((ulong)uVar6 != 0) {
                    uVar3 = (uint)((ulong)((long)local_70 - lVar12) / (ulong)uVar6);
                  }
                  if (*puVar8 <= uVar3) {
                    uVar3 = 0xffffffff;
                  }
                  if ((uVar3 < *(uint *)puVar5) &&
                     (local_68 = (uint)*(ushort *)(*(long *)(puVar5 + 8) + (long)(int)uVar3 * 2),
                     local_68 < 0xf)) goto LAB_02c7ec3c;
                }
              }
              goto LAB_02c7ec38;
            }
          }
        }
LAB_02c7ec3c:
        if ((local_68 == 8) && (uVar7 = FUN_01af81d0(&local_80), (uVar7 & 1) == 0))
        goto LAB_02c7ec5c;
      }
      iVar11 = iVar11 + 1;
      bVar1 = 1 < uVar17;
      uVar17 = uVar15;
    } while (bVar1);
  }
  return;
}

