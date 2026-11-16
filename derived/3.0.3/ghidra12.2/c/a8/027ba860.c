
int FUN_027ba860(long param_1)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int local_9c;
  int local_98;
  int local_94;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  uint local_64;
  
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "Museum3Built";
  uVar6 = FUN_0273f0a0(&local_80);
  puVar4 = PTR_DAT_04bb43c0;
  param_1 = param_1 + 0x1004;
  if ((uVar6 & 1) == 0) {
    local_94 = 0;
    uVar10 = 0;
    local_64 = DAT_0558f5f0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar14 = *(long *)puVar4;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar7 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar7 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar7 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar7 = *(long *)puVar4;
          if (lVar7 == 0) {
LAB_027bac78:
            uVar5 = 0xbc;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
            goto LAB_027bac78;
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            lVar7 = *(long *)puVar4;
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bac78;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar9 + lVar14 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar14 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bac7c;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bac7c:
          if (uVar5 == local_64) {
            local_94 = local_94 + 1;
          }
          lVar14 = lVar7;
        }
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar14;
    } while (uVar10 != 0x400);
    local_98 = 0;
    uVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_64 = DAT_0558f5f4;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar7 = *(long *)puVar4;
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar14 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar14 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar14 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar14 = *(long *)puVar4;
          if (lVar14 == 0) {
LAB_027bb038:
            uVar5 = 0xbc;
          }
          else {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_027bb038;
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            lVar14 = *(long *)puVar4;
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bb038;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar7 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bb03c;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bb03c:
          if (uVar5 == local_64) {
            local_98 = local_98 + 1;
          }
          lVar7 = lVar14;
        }
      }
      uVar10 = uVar10 + 1;
      lVar14 = lVar7;
    } while (uVar10 != 0x400);
    iVar13 = 0;
    uVar10 = 0;
    local_64 = DAT_0558f5f8;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar14 = *(long *)puVar4;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar7 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar7 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar7 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar7 = *(long *)puVar4;
          if (lVar7 == 0) {
LAB_027bb3f8:
            uVar5 = 0xbc;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
            goto LAB_027bb3f8;
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            lVar7 = *(long *)puVar4;
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bb3f8;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar9 + lVar14 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar14 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bb3fc;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bb3fc:
          if (uVar5 == local_64) {
            iVar13 = iVar13 + 1;
          }
          lVar14 = lVar7;
        }
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar14;
    } while (uVar10 != 0x400);
    iVar11 = 0;
    uVar10 = 0;
    local_64 = DAT_0558f5fc;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar7 = *(long *)puVar4;
      if (lVar7 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar14 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar14 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar14 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar14 = *(long *)puVar4;
          if (lVar14 == 0) {
LAB_027bb618:
            uVar5 = 0xbc;
          }
          else {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_027bb618;
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            lVar14 = *(long *)puVar4;
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bb618;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar7 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bb61c;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bb61c:
          if (uVar5 == local_64) {
            iVar11 = iVar11 + 1;
          }
          lVar7 = lVar14;
        }
      }
      lVar14 = lVar7;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x400);
    local_9c = local_98 + local_94;
    iVar13 = iVar13 + iVar11;
  }
  else {
    local_94 = 0;
    uVar10 = 0;
    local_64 = DAT_0558f600;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar14 = *(long *)puVar4;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar7 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar7 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar7 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar7 = *(long *)puVar4;
          if (lVar7 == 0) {
LAB_027baa88:
            uVar5 = 0xbc;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
            goto LAB_027baa88;
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            lVar7 = *(long *)puVar4;
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027baa88;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar9 + lVar14 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar14 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027baa8c;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027baa8c:
          if (uVar5 == local_64) {
            local_94 = local_94 + 1;
          }
          lVar14 = lVar7;
        }
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar14;
    } while (uVar10 != 0x400);
    iVar11 = 0;
    uVar10 = 0;
    local_64 = DAT_0558f604;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar7 = *(long *)puVar4;
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar14 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar14 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar14 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar14 = *(long *)puVar4;
          if (lVar14 == 0) {
LAB_027bae58:
            uVar5 = 0xbc;
          }
          else {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_027bae58;
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            lVar14 = *(long *)puVar4;
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bae58;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar7 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bae5c;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bae5c:
          if (uVar5 == local_64) {
            iVar11 = iVar11 + 1;
          }
          lVar7 = lVar14;
        }
      }
      uVar10 = uVar10 + 1;
      lVar14 = lVar7;
    } while (uVar10 != 0x400);
    local_98 = 0;
    uVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_64 = DAT_0558f608;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar14 = *(long *)puVar4;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar7 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar7 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar7 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar7 = *(long *)puVar4;
          if (lVar7 == 0) {
LAB_027bb218:
            uVar5 = 0xbc;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
            goto LAB_027bb218;
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            lVar7 = *(long *)puVar4;
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bb218;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar9 + lVar14 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar14 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bb21c;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bb21c:
          if (uVar5 == local_64) {
            local_98 = local_98 + 1;
          }
          lVar14 = lVar7;
        }
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar14;
    } while (uVar10 != 0x400);
    local_9c = 0;
    uVar10 = 0;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    local_64 = DAT_0558f60c;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar7 = *(long *)puVar4;
      if (lVar7 == 0) {
        lVar7 = 0;
      }
      else {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar14 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar14 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar14 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar14 = *(long *)puVar4;
          if (lVar14 == 0) {
LAB_027bb5c8:
            uVar5 = 0xbc;
          }
          else {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_027bb5c8;
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            lVar14 = *(long *)puVar4;
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bb5c8;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar7 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bb5cc;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bb5cc:
          if (uVar5 == local_64) {
            local_9c = local_9c + 1;
          }
          lVar7 = lVar14;
        }
      }
      uVar10 = uVar10 + 1;
      lVar14 = lVar7;
    } while (uVar10 != 0x400);
    iVar13 = 0;
    uVar10 = 0;
    local_64 = DAT_0558f610;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar14 = *(long *)puVar4;
      if (lVar14 == 0) {
        lVar14 = 0;
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar7 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar7 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar7 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar7 = *(long *)puVar4;
          if (lVar7 == 0) {
LAB_027bb978:
            uVar5 = 0xbc;
          }
          else {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) == 0))
            goto LAB_027bb978;
            lVar14 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            lVar7 = *(long *)puVar4;
            if ((*(uint *)(lVar14 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bb978;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar14 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar14 = 0x1c;
                  }
                  lVar14 = (long)puVar9 + lVar14 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar14 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar14) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bb97c;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bb97c:
          if (uVar5 == local_64) {
            iVar13 = iVar13 + 1;
          }
          lVar14 = lVar7;
        }
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar14;
    } while (uVar10 != 0x400);
    iVar12 = 0;
    uVar10 = 0;
    local_64 = DAT_0558f614;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    do {
      puVar2 = (undefined2 *)(param_1 + ((long)((ulong)uVar10 << 0x20) >> 0x1d));
      uVar5 = FUN_0277d6c4(puVar2);
      lVar7 = *(long *)puVar4;
      if (lVar7 != 0) {
        lVar14 = *(long *)(lVar14 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar14 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar14 = param_1 + (long)(int)uVar10 * 8;
          local_70 = 0;
          local_78._0_4_ = CONCAT22(*(undefined2 *)(lVar14 + 2),*puVar2);
          local_78 = (char *)CONCAT44(*(undefined4 *)(lVar14 + 4),(undefined4)local_78);
          local_80 = puVar1;
          uVar5 = FUN_0277d6c4(&local_78);
          lVar14 = *(long *)puVar4;
          if (lVar14 == 0) {
LAB_027bb9dc:
            uVar5 = 0xbc;
          }
          else {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8) == 0)) goto LAB_027bb9dc;
            lVar7 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(puVar2);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            lVar14 = *(long *)puVar4;
            if ((*(uint *)(lVar7 + 0x1d8) <= uVar5) ||
               (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar8 == (uint *)0x0)) goto LAB_027bb9dc;
            uVar3 = *puVar8;
            uVar5 = 0;
            if ((uVar3 != 0) && (puVar8 != (uint *)(ulong)uVar3)) {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar3);
              uVar5 = 0;
              if (*puVar9 != 0) {
                uVar5 = puVar9[1];
                if ((uVar5 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
                  lVar7 = 0xc;
                  if (*(char *)((long)puVar9 + 10) != '\0') {
                    lVar7 = 0x1c;
                  }
                  lVar7 = (long)puVar9 + lVar7 + (ulong)(ushort)puVar9[2] * 8;
                  if (lVar7 != 0) {
                    uVar3 = 0;
                    if ((ulong)uVar5 != 0) {
                      uVar3 = (uint)((ulong)((long)puVar8 - lVar7) / (ulong)uVar5);
                    }
                    if (*puVar9 <= uVar3) {
                      uVar3 = 0xffffffff;
                    }
                    if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                       (uVar5 = (uint)*(ushort *)
                                       (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                       uVar5 < 0xbd)) goto LAB_027bb9e0;
                  }
                }
                uVar5 = 0;
              }
            }
          }
LAB_027bb9e0:
          if (uVar5 == local_64) {
            iVar12 = iVar12 + 1;
          }
          lVar7 = lVar14;
        }
      }
      lVar14 = lVar7;
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x400);
    local_9c = iVar11 + local_94 + local_98 + local_9c;
    iVar13 = iVar13 + iVar12;
  }
  return local_9c + iVar13;
}

