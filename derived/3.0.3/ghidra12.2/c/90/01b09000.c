
/* WARNING: Removing unreachable block (ram,0x01b09550) */

void FUN_01b09000(uint *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int *piVar9;
  ushort uVar10;
  uint *puVar11;
  bool bVar12;
  int iVar13;
  ulong uVar14;
  uint *puVar15;
  char cVar16;
  long lVar17;
  uint *puVar18;
  undefined **local_58;
  undefined4 local_50;
  uint local_4c;
  uint *local_48;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  uint local_3c;
  uint local_34;
  
  puVar6 = PTR_DAT_04bb43c0;
  local_40 = (undefined2)*param_2;
  uVar5 = *(undefined1 *)((long)param_2 + 2);
  local_58 = &PTR_FUN_04a36b50;
  local_3d = *(undefined1 *)((long)param_2 + 3);
  local_50 = *param_2;
  local_4c = param_2[1];
  lVar17 = *(long *)PTR_DAT_04bb43c0;
  local_48 = (uint *)0x0;
  local_3e = uVar5;
  local_3c = local_4c;
  uVar8 = FUN_0277d6c4(&local_50);
  lVar1 = DAT_0532a768;
  if (*(long *)puVar6 == 0) {
    puVar18 = (uint *)0x0;
    bVar12 = true;
    local_34 = 0xbc;
  }
  else {
    lVar17 = *(long *)(lVar17 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar17 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      uVar8 = FUN_0277d6c4(&local_40);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
      if (*(uint *)(lVar1 + 0x1d8) <= uVar8) goto LAB_01b09178;
      puVar18 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar8 * 8);
      if (puVar18 != (uint *)0x0) {
        uVar8 = *puVar18;
        local_34 = 0;
        local_48 = puVar18;
        if ((uVar8 != 0) && (puVar18 != (uint *)(ulong)uVar8)) {
          puVar11 = (uint *)((long)puVar18 - (long)(ulong)uVar8);
          local_34 = 0;
          if (*puVar11 != 0) {
            uVar8 = puVar11[1];
            if ((uVar8 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
              if (lVar1 != 0) {
                uVar3 = 0;
                if ((ulong)uVar8 != 0) {
                  uVar3 = (uint)((ulong)((long)puVar18 - lVar1) / (ulong)uVar8);
                }
                if (*puVar11 <= uVar3) {
                  uVar3 = 0xffffffff;
                }
                if (uVar3 < *(uint *)PTR_DAT_04bc00c8) {
                  local_34 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2);
                  if (0xbc < local_34) {
                    bVar12 = false;
                    local_34 = 0;
                    goto LAB_01b09194;
                  }
                  goto LAB_01b09720;
                }
              }
            }
            local_34 = 0;
          }
        }
LAB_01b09720:
        bVar12 = false;
        goto LAB_01b09194;
      }
    }
    else {
LAB_01b09178:
      puVar18 = (uint *)0x0;
    }
    local_34 = 0xbc;
    bVar12 = true;
  }
LAB_01b09194:
  lVar1 = DAT_0532a778;
  puVar7 = PTR_DAT_04bbfeb8;
  puVar6 = PTR_DAT_04bbfeb0;
  uVar8 = *(uint *)(DAT_0532a778 + 0x1c0);
  if ((int)uVar8 < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar11 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar11 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= local_34 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)local_34) != '\0')))) &&
       (((local_34 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
      iVar13 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar11 = (uint *)((ulong)(puVar11[1] * local_34 + (uint)(ushort)puVar11[2] * 8 + iVar13) +
                        (long)puVar11);
      goto joined_r0x01b09320;
    }
  }
  else if (local_34 < uVar8) {
    uVar3 = local_34;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= local_34) {
      uVar3 = 0;
    }
    puVar11 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar3 * 8);
joined_r0x01b09320:
    if ((puVar11 != (uint *)0x0) && (*puVar11 != 0)) {
      cVar16 = *PTR_DAT_04bbfeb0;
      do {
        if (cVar16 == '\0') {
          cVar16 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar7 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0x2c);
          uVar14 = (ulong)uVar3;
          if (-1 < (int)uVar3) {
            if (((char *)(uVar14 + (long)puVar11) == (char *)0x0) ||
               (*(char *)(uVar14 + (long)puVar11) == '\0')) break;
            if (bVar12) {
              local_34 = 0xbc;
            }
            else {
              uVar3 = *puVar18;
              local_34 = 0;
              if ((uVar3 != 0) && (puVar18 != (uint *)(ulong)uVar3)) {
                puVar11 = (uint *)((long)puVar18 - (long)(ulong)uVar3);
                local_34 = 0;
                if (*puVar11 != 0) {
                  uVar3 = puVar11[1];
                  if ((uVar3 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar11 + 10) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar11 + lVar17 + (ulong)(ushort)puVar11[2] * 8;
                    if (lVar17 != 0) {
                      uVar4 = 0;
                      if ((ulong)uVar3 != 0) {
                        uVar4 = (uint)((ulong)((long)puVar18 - lVar17) / (ulong)uVar3);
                      }
                      if (*puVar11 <= uVar4) {
                        uVar4 = 0xffffffff;
                      }
                      if ((uVar4 < *(uint *)PTR_DAT_04bc00c8) &&
                         (local_34 = (uint)*(ushort *)
                                            (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar4 * 2)
                         , local_34 < 0xbd)) goto LAB_01b097d0;
                    }
                  }
                  local_34 = 0;
                }
              }
            }
LAB_01b097d0:
            if ((int)uVar8 < 1) {
              if ((((*(long *)(lVar1 + 0xb0) == 0) ||
                   (puVar11 = *(uint **)(*(long *)(lVar1 + 0xb0) + 8), puVar11 == (uint *)0x0)) ||
                  ((local_34 < *(uint *)(lVar1 + 200) &&
                   (*(char *)(*(long *)(lVar1 + 0xd0) + (long)(int)local_34) == '\0')))) ||
                 (((*puVar11 <= local_34 || (puVar11[1] == 0)) || ((ushort)puVar11[2] == 0))))
              break;
              iVar13 = 0xc;
              if (*(char *)((long)puVar11 + 10) != '\0') {
                iVar13 = 0x1c;
              }
              puVar11 = (uint *)((ulong)(puVar11[1] * local_34 + (uint)(ushort)puVar11[2] * 8 +
                                        iVar13) + (long)puVar11);
            }
            else {
              if (uVar8 <= local_34) break;
              uVar8 = local_34;
              if (*(uint *)(lVar1 + 0x1b0) <= local_34) {
                uVar8 = 0;
              }
              puVar11 = *(uint **)(*(long *)(lVar1 + 0x1b8) + (ulong)uVar8 * 8);
            }
            if ((puVar11 != (uint *)0x0) && (*puVar11 != 0)) goto LAB_01b09814;
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        lVar17 = (long)puVar11 - (ulong)*puVar11;
        if ((*puVar11 == 0) || (lVar17 == 0)) break;
        lVar2 = 0xc;
        if (*(char *)(lVar17 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar17 == 0) break;
        uVar14 = (ulong)*(ushort *)(lVar17 + 8);
        *(undefined4 *)(puVar7 + 0x2c) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar9 = (int *)(lVar2 + lVar17 + 4);
        while (piVar9[-1] != -0x6f43f7ab) {
          piVar9 = piVar9 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_01b09324;
        }
        iVar13 = 0;
        if (*piVar9 != -1) {
          iVar13 = *piVar9;
        }
        *(int *)(puVar7 + 0x2c) = iVar13;
        if (*puVar11 == 0) break;
      } while( true );
    }
  }
LAB_01b09324:
  uVar14 = FUN_01ae7a70(&local_58);
  if ((uVar14 & 1) != 0) {
    FUN_01afca60(&local_58,0);
    if (local_48 == (uint *)0x0) {
      local_34 = 0xbc;
    }
    else {
      uVar8 = *local_48;
      local_34 = 0;
      if ((uVar8 != 0) && (local_48 != (uint *)(ulong)uVar8)) {
        puVar18 = (uint *)((long)local_48 - (long)(ulong)uVar8);
        local_34 = 0;
        if (*puVar18 != 0) {
          uVar8 = puVar18[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar18 + lVar1 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar1 != 0) {
              uVar3 = 0;
              if ((ulong)uVar8 != 0) {
                uVar3 = (uint)((ulong)((long)local_48 - lVar1) / (ulong)uVar8);
              }
              if (*puVar18 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
                 (local_34 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
                 local_34 < 0xbd)) goto LAB_01b093d8;
            }
          }
          local_34 = 0;
        }
      }
    }
LAB_01b093d8:
    puVar18 = local_48;
    if ((local_34 & 0xfffffffd) == 0xa4) {
      FUN_01afca60(&local_58,1);
      puVar18 = local_48;
    }
  }
  if (puVar18 == (uint *)0x0) {
LAB_01b09628:
    uVar10 = 0xbc;
  }
  else {
    uVar8 = *puVar18;
    uVar10 = 0;
    if ((uVar8 != 0) && (puVar18 != (uint *)(ulong)uVar8)) {
      puVar11 = (uint *)((long)puVar18 - (long)(ulong)uVar8);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar8 = puVar11[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar1 != 0) {
            uVar3 = 0;
            if ((ulong)uVar8 != 0) {
              uVar3 = (uint)((ulong)((long)puVar18 - lVar1) / (ulong)uVar8);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar10 < 0xbd)) goto LAB_01b09494;
          }
        }
        uVar10 = 0;
      }
    }
LAB_01b09494:
    if (uVar10 == 0x58) {
      uVar10 = 0;
      uVar8 = *puVar18;
      if ((uVar8 != 0) && (puVar18 != (uint *)(ulong)uVar8)) {
        puVar11 = (uint *)((long)puVar18 - (long)(ulong)uVar8);
        if ((*puVar11 == 0) ||
           ((uVar8 = puVar11[1], uVar8 == 0 || ((ulong)(ushort)puVar11[2] == 0)))) {
LAB_01b09534:
          uVar10 = 0;
        }
        else {
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
          uVar10 = 0;
          if (lVar1 != 0) {
            uVar3 = 0;
            if ((ulong)uVar8 != 0) {
              uVar3 = (uint)((ulong)((long)puVar18 - lVar1) / (ulong)uVar8);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((*(uint *)PTR_DAT_04bc00c8 <= uVar3) ||
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               0xbc < uVar10)) goto LAB_01b09534;
          }
        }
      }
      if (uVar10 == 0x58) {
        local_4c = local_4c & 0xfffeffff;
      }
      if (puVar18 == (uint *)0x0) goto LAB_01b09628;
    }
    uVar8 = *puVar18;
    uVar10 = 0;
    if ((uVar8 != 0) && (puVar18 != (uint *)(ulong)uVar8)) {
      puVar11 = (uint *)((long)puVar18 - (long)(ulong)uVar8);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar8 = puVar11[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar1 != 0) {
            uVar3 = 0;
            if ((ulong)uVar8 != 0) {
              uVar3 = (uint)((ulong)((long)puVar18 - lVar1) / (ulong)uVar8);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar10 < 0xbd)) goto LAB_01b0962c;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_01b0962c:
  if (uVar10 != 0x68) goto LAB_01b09700;
  if (puVar18 == (uint *)0x0) {
    uVar10 = 0xbc;
  }
  else {
    uVar8 = *puVar18;
    uVar10 = 0;
    if ((uVar8 != 0) && (puVar18 != (uint *)(ulong)uVar8)) {
      puVar11 = (uint *)((long)puVar18 - (long)(ulong)uVar8);
      uVar10 = 0;
      if (*puVar11 != 0) {
        uVar8 = puVar11[1];
        if ((uVar8 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar11 + lVar1 + (ulong)(ushort)puVar11[2] * 8;
          if (lVar1 != 0) {
            uVar3 = 0;
            if ((ulong)uVar8 != 0) {
              uVar3 = (uint)((ulong)((long)puVar18 - lVar1) / (ulong)uVar8);
            }
            if (*puVar11 <= uVar3) {
              uVar3 = 0xffffffff;
            }
            if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
               uVar10 < 0xbd)) goto LAB_01b096e0;
          }
        }
        uVar10 = 0;
      }
    }
  }
LAB_01b096e0:
  if (uVar10 == 0x68) {
    local_4c = local_4c | 0x10000;
  }
LAB_01b09700:
  *param_1 = local_50;
  param_1[1] = local_4c;
  return;
LAB_01b09814:
  if (-1 < (int)uVar14) {
    if (((char *)((long)puVar11 + uVar14) != (char *)0x0) &&
       (*(char *)((long)puVar11 + uVar14) != '\0')) {
      local_50 = CONCAT13(local_50._3_1_,CONCAT12(uVar5,(undefined2)local_50)) & 0xffdfffff;
    }
    goto LAB_01b09324;
  }
  if ((int)uVar14 != -1) goto LAB_01b09324;
  lVar1 = (long)puVar11 - (ulong)*puVar11;
  if ((*puVar11 == 0) || (lVar1 == 0)) goto LAB_01b09324;
  lVar17 = 0xc;
  if (*(char *)(lVar1 + 10) != '\0') {
    lVar17 = 0x1c;
  }
  if (lVar17 + lVar1 == 0) goto LAB_01b09324;
  uVar14 = (ulong)*(ushort *)(lVar1 + 8);
  *(undefined4 *)(puVar7 + 0x2c) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_01b09324;
  puVar15 = (uint *)(lVar17 + lVar1 + 4);
  while (puVar15[-1] != 0x90bc0855) {
    puVar15 = puVar15 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_01b09324;
  }
  uVar8 = 0;
  if (*puVar15 != 0xffffffff) {
    uVar8 = *puVar15;
  }
  uVar14 = (ulong)uVar8;
  *(uint *)(puVar7 + 0x2c) = uVar8;
  if (*puVar11 == 0) goto LAB_01b09324;
  goto LAB_01b09814;
}

