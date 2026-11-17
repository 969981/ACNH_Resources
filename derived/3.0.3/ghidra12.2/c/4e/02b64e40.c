
/* WARNING: Removing unreachable block (ram,0x02b65b74) */
/* WARNING: Removing unreachable block (ram,0x02b65834) */
/* WARNING: Removing unreachable block (ram,0x02b654f4) */
/* WARNING: Removing unreachable block (ram,0x02b651b4) */
/* WARNING: Removing unreachable block (ram,0x02b64e78) */
/* WARNING: Removing unreachable block (ram,0x02b65014) */
/* WARNING: Removing unreachable block (ram,0x02b65354) */
/* WARNING: Removing unreachable block (ram,0x02b65694) */
/* WARNING: Removing unreachable block (ram,0x02b659d4) */
/* WARNING: Removing unreachable block (ram,0x02b65d14) */

undefined8 FUN_02b64e40(undefined4 *param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int *piVar7;
  undefined4 uVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  char cVar13;
  ulong uVar14;
  undefined *local_40;
  long local_38;
  
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  puVar3 = PTR_DAT_04bb5008;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (DAT_05636e30 != 0) {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e30 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e30) != '\0')))) &&
         (((DAT_05636e30 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e30 + (uint)(ushort)puVar11[2] * 8 + iVar12
                                  ) + (long)puVar11);
        goto joined_r0x02b65000;
      }
    }
    else if (DAT_05636e30 < *(uint *)(lVar9 + 0x1e0)) {
      uVar10 = DAT_05636e30;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e30) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
joined_r0x02b65000:
      if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
        cVar13 = *PTR_DAT_04bc4690;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
            uVar10 = *puVar11;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
                local_40 = PTR_DAT_04bc4730 + 0x10;
                uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
                if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                   ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                    (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0),
                      uVar10 < *(uint *)(lVar9 + 0x3d0) &&
                      (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                      local_38 != 0)) &&
                     (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                  uVar8 = 0;
                  goto LAB_02b662f0;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar6 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar6 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar7 = (int *)(lVar1 + lVar6 + 4);
          while (piVar7[-1] != 0xd664b5c) {
            piVar7 = piVar7 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02b65004;
          }
          iVar12 = 0;
          if (*piVar7 != -1) {
            iVar12 = *piVar7;
          }
          *(int *)(puVar5 + 0x14) = iVar12;
          uVar10 = *puVar11;
          if (uVar10 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b65004:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e34 != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e34 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e34) != '\0')))) &&
         (((DAT_05636e34 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e34 + (uint)(ushort)puVar11[2] * 8 + iVar12
                                  ) + (long)puVar11);
        goto joined_r0x02b651a0;
      }
    }
    else if (DAT_05636e34 < *(uint *)(lVar9 + 0x1e0)) {
      uVar10 = DAT_05636e34;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e34) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
joined_r0x02b651a0:
      if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
        cVar13 = *PTR_DAT_04bc4690;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
            uVar10 = *puVar11;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
                local_40 = PTR_DAT_04bc4730 + 0x10;
                uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
                if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                   ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                    (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0),
                      uVar10 < *(uint *)(lVar9 + 0x3d0) &&
                      (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                      local_38 != 0)) &&
                     (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                  uVar8 = 1;
                  goto LAB_02b662f0;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar6 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar6 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar7 = (int *)(lVar1 + lVar6 + 4);
          while (piVar7[-1] != 0xd664b5c) {
            piVar7 = piVar7 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02b651a4;
          }
          iVar12 = 0;
          if (*piVar7 != -1) {
            iVar12 = *piVar7;
          }
          *(int *)(puVar5 + 0x14) = iVar12;
          uVar10 = *puVar11;
          if (uVar10 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b651a4:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e38 != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e38 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e38) != '\0')))) &&
         (((DAT_05636e38 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e38 + (uint)(ushort)puVar11[2] * 8 + iVar12
                                  ) + (long)puVar11);
        goto joined_r0x02b65340;
      }
    }
    else if (DAT_05636e38 < *(uint *)(lVar9 + 0x1e0)) {
      uVar10 = DAT_05636e38;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e38) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
joined_r0x02b65340:
      if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
        cVar13 = *PTR_DAT_04bc4690;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
            uVar10 = *puVar11;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
                local_40 = PTR_DAT_04bc4730 + 0x10;
                uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
                if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                   ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                    (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0),
                      uVar10 < *(uint *)(lVar9 + 0x3d0) &&
                      (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                      local_38 != 0)) &&
                     (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                  uVar8 = 2;
                  goto LAB_02b662f0;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar6 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar6 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar7 = (int *)(lVar1 + lVar6 + 4);
          while (piVar7[-1] != 0xd664b5c) {
            piVar7 = piVar7 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02b65344;
          }
          iVar12 = 0;
          if (*piVar7 != -1) {
            iVar12 = *piVar7;
          }
          *(int *)(puVar5 + 0x14) = iVar12;
          uVar10 = *puVar11;
          if (uVar10 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b65344:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e3c != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e3c ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e3c) != '\0')))) &&
         (((DAT_05636e3c < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e3c + (uint)(ushort)puVar11[2] * 8 + iVar12
                                  ) + (long)puVar11);
        goto joined_r0x02b654e0;
      }
    }
    else if (DAT_05636e3c < *(uint *)(lVar9 + 0x1e0)) {
      uVar10 = DAT_05636e3c;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e3c) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
joined_r0x02b654e0:
      if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
        cVar13 = *PTR_DAT_04bc4690;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
            uVar10 = *puVar11;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
                local_40 = PTR_DAT_04bc4730 + 0x10;
                uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
                if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                   ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                    (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0),
                      uVar10 < *(uint *)(lVar9 + 0x3d0) &&
                      (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                      local_38 != 0)) &&
                     (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                  uVar8 = 3;
                  goto LAB_02b662f0;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar6 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar6 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar7 = (int *)(lVar1 + lVar6 + 4);
          while (piVar7[-1] != 0xd664b5c) {
            piVar7 = piVar7 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02b654e4;
          }
          iVar12 = 0;
          if (*piVar7 != -1) {
            iVar12 = *piVar7;
          }
          *(int *)(puVar5 + 0x14) = iVar12;
          uVar10 = *puVar11;
          if (uVar10 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b654e4:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e40 != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e40 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e40) != '\0')))) &&
         (((DAT_05636e40 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e40 + (uint)(ushort)puVar11[2] * 8 + iVar12
                                  ) + (long)puVar11);
        goto joined_r0x02b65680;
      }
    }
    else if (DAT_05636e40 < *(uint *)(lVar9 + 0x1e0)) {
      uVar10 = DAT_05636e40;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e40) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
joined_r0x02b65680:
      if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
        cVar13 = *PTR_DAT_04bc4690;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
            uVar10 = *puVar11;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
                local_40 = PTR_DAT_04bc4730 + 0x10;
                uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
                if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                   ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                    (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0),
                      uVar10 < *(uint *)(lVar9 + 0x3d0) &&
                      (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                      local_38 != 0)) &&
                     (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                  uVar8 = 4;
                  goto LAB_02b662f0;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar6 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar6 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar7 = (int *)(lVar1 + lVar6 + 4);
          while (piVar7[-1] != 0xd664b5c) {
            piVar7 = piVar7 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02b65684;
          }
          iVar12 = 0;
          if (*piVar7 != -1) {
            iVar12 = *piVar7;
          }
          *(int *)(puVar5 + 0x14) = iVar12;
          uVar10 = *puVar11;
          if (uVar10 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b65684:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e44 != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e44 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e44) != '\0')))) &&
         (((DAT_05636e44 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e44 + (uint)(ushort)puVar11[2] * 8 + iVar12
                                  ) + (long)puVar11);
        goto joined_r0x02b65820;
      }
    }
    else if (DAT_05636e44 < *(uint *)(lVar9 + 0x1e0)) {
      uVar10 = DAT_05636e44;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e44) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
joined_r0x02b65820:
      if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
        cVar13 = *PTR_DAT_04bc4690;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
            uVar10 = *puVar11;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
                local_40 = PTR_DAT_04bc4730 + 0x10;
                uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
                if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                   ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                    (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0),
                      uVar10 < *(uint *)(lVar9 + 0x3d0) &&
                      (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                      local_38 != 0)) &&
                     (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                  uVar8 = 5;
                  goto LAB_02b662f0;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar6 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar6 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar7 = (int *)(lVar1 + lVar6 + 4);
          while (piVar7[-1] != 0xd664b5c) {
            piVar7 = piVar7 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02b65824;
          }
          iVar12 = 0;
          if (*piVar7 != -1) {
            iVar12 = *piVar7;
          }
          *(int *)(puVar5 + 0x14) = iVar12;
          uVar10 = *puVar11;
          if (uVar10 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b65824:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e48 != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e48 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e48) != '\0')))) &&
         (((DAT_05636e48 < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e48 + (uint)(ushort)puVar11[2] * 8 + iVar12
                                  ) + (long)puVar11);
        goto joined_r0x02b659c0;
      }
    }
    else if (DAT_05636e48 < *(uint *)(lVar9 + 0x1e0)) {
      uVar10 = DAT_05636e48;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e48) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
joined_r0x02b659c0:
      if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
        cVar13 = *PTR_DAT_04bc4690;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
            uVar10 = *puVar11;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
                local_40 = PTR_DAT_04bc4730 + 0x10;
                uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
                if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                   ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                    (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0),
                      uVar10 < *(uint *)(lVar9 + 0x3d0) &&
                      (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                      local_38 != 0)) &&
                     (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                  uVar8 = 6;
                  goto LAB_02b662f0;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar6 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar6 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar7 = (int *)(lVar1 + lVar6 + 4);
          while (piVar7[-1] != 0xd664b5c) {
            piVar7 = piVar7 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02b659c4;
          }
          iVar12 = 0;
          if (*piVar7 != -1) {
            iVar12 = *piVar7;
          }
          *(int *)(puVar5 + 0x14) = iVar12;
          uVar10 = *puVar11;
          if (uVar10 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b659c4:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e4c != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e4c ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e4c) != '\0')))) &&
         (((DAT_05636e4c < *puVar11 && (puVar11[1] != 0)) && ((ushort)puVar11[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e4c + (uint)(ushort)puVar11[2] * 8 + iVar12
                                  ) + (long)puVar11);
        goto joined_r0x02b65b60;
      }
    }
    else if (DAT_05636e4c < *(uint *)(lVar9 + 0x1e0)) {
      uVar10 = DAT_05636e4c;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e4c) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
joined_r0x02b65b60:
      if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
        cVar13 = *PTR_DAT_04bc4690;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
            uVar10 = *puVar11;
          }
          else {
            uVar2 = *(uint *)(puVar5 + 0x14);
            if (-1 < (int)uVar2) {
              if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
                local_40 = PTR_DAT_04bc4730 + 0x10;
                uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
                if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                   ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                    (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0),
                      uVar10 < *(uint *)(lVar9 + 0x3d0) &&
                      (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                      local_38 != 0)) &&
                     (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                  uVar8 = 7;
                  goto LAB_02b662f0;
                }
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
          lVar1 = 0xc;
          if (*(char *)(lVar6 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar6 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar6 + 8);
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar7 = (int *)(lVar1 + lVar6 + 4);
          while (piVar7[-1] != 0xd664b5c) {
            piVar7 = piVar7 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02b65b64;
          }
          iVar12 = 0;
          if (*piVar7 != -1) {
            iVar12 = *piVar7;
          }
          *(int *)(puVar5 + 0x14) = iVar12;
          uVar10 = *puVar11;
          if (uVar10 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b65b64:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e50 != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) == 0) ||
           (puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar11 == (uint *)0x0)) ||
          ((DAT_05636e50 < *(uint *)(lVar9 + 0xe8) &&
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e50) == '\0')))) ||
         (((*puVar11 <= DAT_05636e50 || (puVar11[1] == 0)) || ((ushort)puVar11[2] == 0))))
      goto LAB_02b65d04;
      iVar12 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e50 + (uint)(ushort)puVar11[2] * 8 + iVar12)
                        + (long)puVar11);
    }
    else {
      if (*(uint *)(lVar9 + 0x1e0) <= DAT_05636e50) goto LAB_02b65d04;
      uVar10 = DAT_05636e50;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e50) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
    }
    if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
      cVar13 = *PTR_DAT_04bc4690;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar10 = *puVar11;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar11) != (ushort *)0x0) {
              local_40 = PTR_DAT_04bc4730 + 0x10;
              uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
              if (((uVar10 != 0) && (*(long *)(lVar9 + 0x2a8) != 0)) &&
                 ((*(long *)(*(long *)(lVar9 + 0x2a8) + 8) != 0 &&
                  (((uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0), uVar10 < *(uint *)(lVar9 + 0x3d0)
                    && (local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8),
                       local_38 != 0)) &&
                   (uVar14 = FUN_02acce10(&local_40,param_2), (uVar14 & 1) != 0)))))) {
                uVar8 = 8;
                goto LAB_02b662f0;
              }
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        if (((ulong)uVar10 == 0) || (lVar6 = (long)puVar11 - (ulong)uVar10, lVar6 == 0)) break;
        lVar1 = 0xc;
        if (*(char *)(lVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar6 == 0) break;
        uVar14 = (ulong)*(ushort *)(lVar6 + 8);
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar14 == 0) break;
        piVar7 = (int *)(lVar1 + lVar6 + 4);
        while (piVar7[-1] != 0xd664b5c) {
          piVar7 = piVar7 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) goto LAB_02b65d04;
        }
        iVar12 = 0;
        if (*piVar7 != -1) {
          iVar12 = *piVar7;
        }
        *(int *)(puVar5 + 0x14) = iVar12;
        uVar10 = *puVar11;
        if (uVar10 == 0) break;
      } while( true );
    }
  }
LAB_02b65d04:
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  if (DAT_05636e54 != 0) {
    lVar9 = *(long *)puVar3;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if (*(long *)(lVar9 + 0xd0) == 0) {
        return 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8);
      if (puVar11 == (uint *)0x0) {
        return 0;
      }
      if ((DAT_05636e54 < *(uint *)(lVar9 + 0xe8)) &&
         (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e54) == '\0')) {
        return 0;
      }
      if (*puVar11 <= DAT_05636e54) {
        return 0;
      }
      if (puVar11[1] == 0) {
        return 0;
      }
      if ((ushort)puVar11[2] == 0) {
        return 0;
      }
      iVar12 = 0xc;
      if (*(char *)((long)puVar11 + 10) != '\0') {
        iVar12 = 0x1c;
      }
      puVar11 = (uint *)((ulong)(puVar11[1] * DAT_05636e54 + (uint)(ushort)puVar11[2] * 8 + iVar12)
                        + (long)puVar11);
    }
    else {
      if (*(uint *)(lVar9 + 0x1e0) <= DAT_05636e54) {
        return 0;
      }
      uVar10 = DAT_05636e54;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e54) {
        uVar10 = 0;
      }
      puVar11 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar10 * 8);
    }
    if ((puVar11 != (uint *)0x0) && (uVar10 = *puVar11, uVar10 != 0)) {
      cVar13 = *PTR_DAT_04bc4690;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar10 = *puVar11;
        }
        else {
          uVar2 = *(uint *)(puVar5 + 0x14);
          if (-1 < (int)uVar2) {
            if ((ushort *)((ulong)uVar2 + (long)puVar11) == (ushort *)0x0) {
              return 0;
            }
            local_40 = PTR_DAT_04bc4730 + 0x10;
            uVar10 = (uint)*(ushort *)((ulong)uVar2 + (long)puVar11);
            if (uVar10 == 0) {
              return 0;
            }
            if (*(long *)(lVar9 + 0x2a8) == 0) {
              return 0;
            }
            if (*(long *)(*(long *)(lVar9 + 0x2a8) + 8) == 0) {
              return 0;
            }
            uVar10 = uVar10 - *(ushort *)(lVar9 + 0x3f0);
            if (*(uint *)(lVar9 + 0x3d0) <= uVar10) {
              return 0;
            }
            local_38 = *(long *)(*(long *)(lVar9 + 0x3d8) + (long)(int)uVar10 * 8);
            if (local_38 == 0) {
              return 0;
            }
            uVar14 = FUN_02acce10(&local_40,param_2);
            if ((uVar14 & 1) == 0) {
              return 0;
            }
            uVar8 = 9;
LAB_02b662f0:
            *param_1 = uVar8;
            return 1;
          }
          if (uVar2 != 0xffffffff) {
            return 0;
          }
        }
        if ((ulong)uVar10 == 0) {
          return 0;
        }
        lVar6 = (long)puVar11 - (ulong)uVar10;
        if (lVar6 == 0) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)(lVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar6 == 0) {
          return 0;
        }
        uVar14 = (ulong)*(ushort *)(lVar6 + 8);
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar14 == 0) {
          return 0;
        }
        piVar7 = (int *)(lVar1 + lVar6 + 4);
        while (piVar7[-1] != 0xd664b5c) {
          piVar7 = piVar7 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            return 0;
          }
        }
        iVar12 = 0;
        if (*piVar7 != -1) {
          iVar12 = *piVar7;
        }
        *(int *)(puVar5 + 0x14) = iVar12;
        uVar10 = *puVar11;
        if (uVar10 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

