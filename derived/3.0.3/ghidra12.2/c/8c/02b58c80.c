
ulong FUN_02b58c80(ulong param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  long lVar9;
  uint *puVar10;
  ushort uVar11;
  uint *puVar12;
  int iVar13;
  char cVar14;
  ulong uVar15;
  int *piVar16;
  uint local_28;
  uint local_24;
  
  puVar4 = PTR_DAT_04bc4628;
  puVar3 = PTR_DAT_04bc4620;
  uVar5 = (uint)param_1;
  if (uVar5 == 0) {
code_r0x02b58f3c:
    if ((param_2 & 1) != 0) {
      lVar9 = *(long *)PTR_DAT_04bb5008;
      goto LAB_02b58f4c;
    }
switchD_02b590ec_caseD_0:
    local_24 = 0;
    local_28 = 0;
    FUN_02b673a0(&local_28);
    local_24 = local_28;
    lVar9 = *(long *)PTR_DAT_04bb46b0;
    if (lVar9 == 0) {
      return 0;
    }
    puVar7 = *(undefined8 **)(lVar9 + 0x10);
    if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
      if (lVar6 == 0) {
        return 0;
      }
      lVar6 = lVar6 + 0x70;
    }
    else {
      if (puVar7 == (undefined8 *)0x0) {
        return 0;
      }
      if ((long *)puVar7[0x26] == (long *)0x0) {
        return 0;
      }
      lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      if (lVar6 == 0) {
        return 0;
      }
    }
    if (7 < local_24) {
      return 0;
    }
    lVar9 = lVar6 + 0x119228 + (ulong)local_24 * 0xfa08;
    if (7 < local_24) {
      lVar9 = lVar6 + 0x119228;
    }
    plVar8 = *(long **)(lVar9 + 0x28);
  }
  else {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) == 0) ||
           (puVar10 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar10 == (uint *)0x0)) ||
          ((uVar5 < *(uint *)(lVar9 + 0xe8) &&
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)uVar5) == '\0')))) ||
         (((*puVar10 <= uVar5 || (puVar10[1] == 0)) || ((ushort)puVar10[2] == 0))))
      goto code_r0x02b58f3c;
      iVar13 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * uVar5 + (uint)(ushort)puVar10[2] * 8 + iVar13) +
                        (long)puVar10);
      if (puVar10 == (uint *)0x0) goto LAB_02b58d88;
LAB_02b58ce0:
      uVar5 = *puVar10;
      if (uVar5 == 0 || puVar10 == (uint *)(ulong)uVar5) {
LAB_02b58cf0:
        uVar11 = 0;
      }
      else {
        puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar12 != 0) {
          uVar5 = puVar12[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
            lVar6 = 0xc;
            if (*(char *)((long)puVar12 + 10) != '\0') {
              lVar6 = 0x1c;
            }
            lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
            if (lVar6 != 0) {
              uVar1 = 0;
              if ((ulong)uVar5 != 0) {
                uVar1 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar5);
              }
              if (*puVar12 <= uVar1) {
                uVar1 = 0xffffffff;
              }
              if ((uVar1 < *(uint *)PTR_DAT_04bc46a8) &&
                 (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar1 * 2),
                 uVar11 < 5)) goto LAB_02b58cf4;
            }
          }
          goto LAB_02b58cf0;
        }
      }
LAB_02b58cf4:
      if (uVar11 != 0) {
        return 0;
      }
      if ((puVar10 != (uint *)0x0) &&
         (uVar5 = *puVar10, uVar5 != 0 && puVar10 != (uint *)(ulong)uVar5)) {
        puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
        uVar11 = 0;
        if (*puVar12 == 0) goto LAB_02b58d98;
        uVar5 = puVar12[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar6 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < *(uint *)PTR_DAT_04bc46b0) &&
               (uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc46b0 + 8) + (long)(int)uVar1 * 2),
               uVar11 < 5)) goto LAB_02b58d98;
          }
        }
      }
      uVar11 = 0;
    }
    else {
      if (*(uint *)(lVar9 + 0x1e0) <= uVar5) goto code_r0x02b58f3c;
      if (*(uint *)(lVar9 + 0x1d0) <= uVar5) {
        uVar5 = 0;
      }
      puVar10 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar5 * 8);
      if (puVar10 != (uint *)0x0) goto LAB_02b58ce0;
LAB_02b58d88:
      uVar11 = 0;
    }
LAB_02b58d98:
    local_24 = 0;
    if ((param_2 & 1) != 0) {
      if ((puVar10 != (uint *)0x0) &&
         (uVar5 = *puVar10, uVar5 != 0 && puVar10 != (uint *)(ulong)uVar5)) {
        puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar5);
        if ((*puVar12 != 0) &&
           ((uVar5 = puVar12[1], uVar5 != 0 && ((ulong)(ushort)puVar12[2] != 0)))) {
          lVar6 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar12 + lVar6 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar6 != 0) {
            uVar1 = 0;
            if ((ulong)uVar5 != 0) {
              uVar1 = (uint)((ulong)((long)puVar10 - lVar6) / (ulong)uVar5);
            }
            if (*puVar12 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if (uVar1 < *(uint *)PTR_DAT_04bc46a0) {
              uVar11 = *(ushort *)(*(long *)(PTR_DAT_04bc46a0 + 8) + (long)(int)uVar1 * 2);
              if (uVar11 < 2) {
                if (uVar11 == 1) {
                  lVar6 = 0xc - (ulong)*(ushort *)(lVar9 + 0x7f0);
                  if (*(uint *)(lVar9 + 2000) <= (uint)lVar6) {
                    return 0;
                  }
                  puVar10 = *(uint **)(*(long *)(lVar9 + 0x7d8) + lVar6 * 8);
                  if (puVar10 == (uint *)0x0) {
                    return 0;
                  }
                  uVar5 = *puVar10;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  cVar14 = *PTR_DAT_04bc4620;
                  do {
                    if (cVar14 == '\0') {
                      cVar14 = '\x01';
                      *(undefined8 *)puVar4 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                      *puVar3 = 1;
                      *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
                      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                      uVar5 = *puVar10;
                    }
                    else {
                      uVar1 = *(uint *)(puVar4 + 0x10);
                      uVar15 = (ulong)uVar1;
                      if (-1 < (int)uVar1) goto LAB_02b59460;
                      if (uVar1 != 0xffffffff) {
                        return 0;
                      }
                    }
                    puVar12 = (uint *)(ulong)uVar5;
                    if (puVar12 == (uint *)0x0) {
                      return 0;
                    }
                    if (puVar10 == puVar12) {
                      return 0;
                    }
                    lVar9 = 0xc;
                    if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
                      lVar9 = 0x1c;
                    }
                    lVar9 = (long)puVar10 + (lVar9 - (long)puVar12);
                    if (lVar9 == 0) {
                      return 0;
                    }
                    uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
                    *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
                    if (uVar15 == 0) {
                      return 0;
                    }
                    piVar16 = (int *)(lVar9 + 4);
                    while (piVar16[-1] != -0x278d8283) {
                      piVar16 = piVar16 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) {
                        return 0;
                      }
                    }
                    iVar13 = 0;
                    if (*piVar16 != -1) {
                      iVar13 = *piVar16;
                    }
                    *(int *)(puVar4 + 0x10) = iVar13;
                    uVar5 = *puVar10;
                    if (uVar5 == 0) {
                      return 0;
                    }
                  } while( true );
                }
                if (uVar11 != 0) {
                  lVar6 = 0xb - (ulong)*(ushort *)(lVar9 + 0x7f0);
                  if (*(uint *)(lVar9 + 2000) <= (uint)lVar6) {
                    return 0;
                  }
                  puVar10 = *(uint **)(*(long *)(lVar9 + 0x7d8) + lVar6 * 8);
                  if (puVar10 == (uint *)0x0) {
                    return 0;
                  }
                  uVar5 = *puVar10;
                  if (uVar5 == 0) {
                    return 0;
                  }
                  cVar14 = *PTR_DAT_04bc4620;
                  do {
                    if (cVar14 == '\0') {
                      cVar14 = '\x01';
                      *(undefined8 *)puVar4 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                      *puVar3 = 1;
                      *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
                      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                      uVar5 = *puVar10;
                    }
                    else {
                      uVar1 = *(uint *)(puVar4 + 0x10);
                      uVar15 = (ulong)uVar1;
                      if (-1 < (int)uVar1) goto LAB_02b59460;
                      if (uVar1 != 0xffffffff) {
                        return 0;
                      }
                    }
                    puVar12 = (uint *)(ulong)uVar5;
                    if (puVar12 == (uint *)0x0) {
                      return 0;
                    }
                    if (puVar10 == puVar12) {
                      return 0;
                    }
                    lVar9 = 0xc;
                    if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
                      lVar9 = 0x1c;
                    }
                    lVar9 = (long)puVar10 + (lVar9 - (long)puVar12);
                    if (lVar9 == 0) {
                      return 0;
                    }
                    uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
                    *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
                    if (uVar15 == 0) {
                      return 0;
                    }
                    piVar16 = (int *)(lVar9 + 4);
                    while (piVar16[-1] != -0x278d8283) {
                      piVar16 = piVar16 + 2;
                      uVar15 = uVar15 - 1;
                      if (uVar15 == 0) {
                        return 0;
                      }
                    }
                    iVar13 = 0;
                    if (*piVar16 != -1) {
                      iVar13 = *piVar16;
                    }
                    *(int *)(puVar4 + 0x10) = iVar13;
                    uVar5 = *puVar10;
                    if (uVar5 == 0) {
                      return 0;
                    }
                  } while( true );
                }
              }
            }
          }
        }
      }
LAB_02b58f4c:
      lVar6 = 0xb - (ulong)*(ushort *)(lVar9 + 0x7f0);
      if ((((uint)lVar6 < *(uint *)(lVar9 + 2000)) &&
          (puVar10 = *(uint **)(*(long *)(lVar9 + 0x7d8) + lVar6 * 8), puVar10 != (uint *)0x0)) &&
         (uVar5 = *puVar10, uVar5 != 0)) {
        cVar14 = *PTR_DAT_04bc4620;
        do {
          if (cVar14 == '\0') {
            cVar14 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            uVar5 = *puVar10;
          }
          else {
            uVar1 = *(uint *)(puVar4 + 0x10);
            uVar15 = (ulong)uVar1;
            if (-1 < (int)uVar1) {
LAB_02b59460:
              if ((ushort *)(uVar15 + (long)puVar10) == (ushort *)0x0) {
                return 0;
              }
              return (ulong)*(ushort *)(uVar15 + (long)puVar10);
            }
            if (uVar1 != 0xffffffff) {
              return 0;
            }
          }
          puVar12 = (uint *)(ulong)uVar5;
          if (puVar12 == (uint *)0x0) {
            return 0;
          }
          if (puVar10 == puVar12) {
            return 0;
          }
          lVar9 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar10 + (lVar9 - (long)puVar12);
          if (lVar9 == 0) {
            return 0;
          }
          uVar15 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
          *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
          if (uVar15 == 0) {
            return 0;
          }
          piVar16 = (int *)(lVar9 + 4);
          while (piVar16[-1] != -0x278d8283) {
            piVar16 = piVar16 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              return 0;
            }
          }
          iVar13 = 0;
          if (*piVar16 != -1) {
            iVar13 = *piVar16;
          }
          *(int *)(puVar4 + 0x10) = iVar13;
          uVar5 = *puVar10;
          if (uVar5 == 0) {
            return 0;
          }
        } while( true );
      }
switchD_02b590ec_caseD_2:
      return 0;
    }
    switch(uVar11) {
    case 0:
      goto switchD_02b590ec_caseD_0;
    case 1:
      local_28 = 0;
      FUN_02b67620(&local_28);
      local_24 = local_28;
      lVar9 = *(long *)PTR_DAT_04bb46b0;
      if (lVar9 == 0) {
        return 0;
      }
      puVar7 = *(undefined8 **)(lVar9 + 0x10);
      if ((*(byte *)(lVar9 + 0x453) & 1) == 0) {
        lVar6 = (**(code **)(*(long *)*puVar7 + 0x38))();
        if (lVar6 == 0) {
          return 0;
        }
        lVar6 = lVar6 + 0x70;
      }
      else {
        if (puVar7 == (undefined8 *)0x0) {
          return 0;
        }
        if ((long *)puVar7[0x26] == (long *)0x0) {
          return 0;
        }
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
        if (lVar6 == 0) {
          return 0;
        }
      }
      if (9 < local_24) {
        return 0;
      }
      lVar9 = lVar6 + 0x1962d8 + (ulong)local_24 * 0x10d8;
      if (9 < local_24) {
        lVar9 = lVar6 + 0x1962d8;
      }
      if ((*(long **)(lVar9 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x28), puVar7 == (undefined8 *)0x0)) {
        return (ulong)*(ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 8);
      }
      uVar15 = (**(code **)*puVar7)();
      uVar11 = *(ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 8);
      goto joined_r0x02b59348;
    default:
      goto switchD_02b590ec_caseD_2;
    case 3:
      uVar15 = FUN_02b935d0();
      return uVar15;
    case 4:
      lVar9 = FUN_02642ea0(param_1,param_1 & 0xffffffff);
      if (lVar9 == 0) {
        return 0;
      }
      plVar8 = *(long **)(lVar9 + 0x28);
    }
  }
  if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
    return (ulong)*(ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 4);
  }
  uVar15 = (*(code *)**(undefined8 **)*plVar8)();
  uVar11 = *(ushort *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 4);
joined_r0x02b59348:
  uVar2 = (ulong)uVar11;
  if ((uVar15 & 1) == 0) {
    return uVar2;
  }
  if (*(long *)(lVar9 + 0x28) == 0) {
    return uVar2;
  }
  puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8);
  if (puVar7 == (undefined8 *)0x0) {
    return uVar2;
  }
  (**(code **)*puVar7)();
  return uVar2;
}

