
/* WARNING: Removing unreachable block (ram,0x02b69868) */
/* WARNING: Removing unreachable block (ram,0x02b69800) */
/* WARNING: Removing unreachable block (ram,0x02b695fc) */
/* WARNING: Removing unreachable block (ram,0x02b69260) */
/* WARNING: Removing unreachable block (ram,0x02b68eb4) */
/* WARNING: Removing unreachable block (ram,0x02b69090) */
/* WARNING: Removing unreachable block (ram,0x02b69430) */
/* WARNING: Removing unreachable block (ram,0x02b697cc) */
/* WARNING: Removing unreachable block (ram,0x02b69834) */
/* WARNING: Removing unreachable block (ram,0x02b6989c) */

undefined8 FUN_02b68e80(undefined4 *param_1,short param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  short sVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  undefined4 uVar13;
  undefined4 local_50 [7];
  uint local_34;
  
  puVar4 = PTR_DAT_04bc4698;
  puVar3 = PTR_DAT_04bc4690;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  if (DAT_05636e30 != 0) {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar7 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e30 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e30) != '\0')))) &&
         (((DAT_05636e30 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * DAT_05636e30 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                         (long)puVar7);
        goto joined_r0x02b69054;
      }
    }
    else if (DAT_05636e30 < *(uint *)(lVar9 + 0x1e0)) {
      uVar1 = DAT_05636e30;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e30) {
        uVar1 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar1 * 8);
joined_r0x02b69054:
      if ((puVar7 != (uint *)0x0) && (uVar1 = *puVar7, uVar1 != 0)) {
        cVar10 = *PTR_DAT_04bc4690;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
            uVar1 = *puVar7;
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x14);
            if (-1 < (int)uVar2) {
              if ((short *)((ulong)uVar2 + (long)puVar7) != (short *)0x0) {
                if (*(short *)((ulong)uVar2 + (long)puVar7) != param_2) goto LAB_02b69080;
                goto LAB_02b69064;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar1;
          if ((puVar11 == (uint *)0x0) || (puVar7 == puVar11)) break;
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + (lVar9 - (long)puVar11);
          if (lVar9 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar6 = (int *)(lVar9 + 4);
          while (piVar6[-1] != 0xd664b5c) {
            piVar6 = piVar6 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_02b6905c;
          }
          iVar8 = 0;
          if (*piVar6 != -1) {
            iVar8 = *piVar6;
          }
          *(int *)(puVar4 + 0x14) = iVar8;
          uVar1 = *puVar7;
          if (uVar1 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b6905c:
  if (param_2 == 0) {
LAB_02b69064:
    uVar13 = 0;
    goto LAB_02b698bc;
  }
LAB_02b69080:
  puVar4 = PTR_DAT_04bc4698;
  puVar3 = PTR_DAT_04bc4690;
  if (DAT_05636e34 != 0) {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar7 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e34 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e34) != '\0')))) &&
         (((DAT_05636e34 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * DAT_05636e34 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                         (long)puVar7);
        goto joined_r0x02b69224;
      }
    }
    else if (DAT_05636e34 < *(uint *)(lVar9 + 0x1e0)) {
      uVar1 = DAT_05636e34;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e34) {
        uVar1 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar1 * 8);
joined_r0x02b69224:
      if ((puVar7 != (uint *)0x0) && (uVar1 = *puVar7, uVar1 != 0)) {
        cVar10 = *PTR_DAT_04bc4690;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
            uVar1 = *puVar7;
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x14);
            if (-1 < (int)uVar2) {
              if ((short *)((ulong)uVar2 + (long)puVar7) != (short *)0x0) {
                if (*(short *)((ulong)uVar2 + (long)puVar7) != param_2) goto LAB_02b69250;
                goto LAB_02b69234;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar1;
          if ((puVar11 == (uint *)0x0) || (puVar7 == puVar11)) break;
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + (lVar9 - (long)puVar11);
          if (lVar9 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar6 = (int *)(lVar9 + 4);
          while (piVar6[-1] != 0xd664b5c) {
            piVar6 = piVar6 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_02b6922c;
          }
          iVar8 = 0;
          if (*piVar6 != -1) {
            iVar8 = *piVar6;
          }
          *(int *)(puVar4 + 0x14) = iVar8;
          uVar1 = *puVar7;
          if (uVar1 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b6922c:
  if (param_2 == 0) {
LAB_02b69234:
    uVar13 = 1;
    goto LAB_02b698bc;
  }
LAB_02b69250:
  puVar4 = PTR_DAT_04bc4698;
  puVar3 = PTR_DAT_04bc4690;
  if (DAT_05636e38 != 0) {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar7 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e38 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e38) != '\0')))) &&
         (((DAT_05636e38 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * DAT_05636e38 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                         (long)puVar7);
        goto joined_r0x02b693f4;
      }
    }
    else if (DAT_05636e38 < *(uint *)(lVar9 + 0x1e0)) {
      uVar1 = DAT_05636e38;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e38) {
        uVar1 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar1 * 8);
joined_r0x02b693f4:
      if ((puVar7 != (uint *)0x0) && (uVar1 = *puVar7, uVar1 != 0)) {
        cVar10 = *PTR_DAT_04bc4690;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
            uVar1 = *puVar7;
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x14);
            if (-1 < (int)uVar2) {
              if ((short *)((ulong)uVar2 + (long)puVar7) != (short *)0x0) {
                if (*(short *)((ulong)uVar2 + (long)puVar7) != param_2) goto LAB_02b69420;
                goto LAB_02b69404;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar1;
          if ((puVar11 == (uint *)0x0) || (puVar7 == puVar11)) break;
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + (lVar9 - (long)puVar11);
          if (lVar9 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar6 = (int *)(lVar9 + 4);
          while (piVar6[-1] != 0xd664b5c) {
            piVar6 = piVar6 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_02b693fc;
          }
          iVar8 = 0;
          if (*piVar6 != -1) {
            iVar8 = *piVar6;
          }
          *(int *)(puVar4 + 0x14) = iVar8;
          uVar1 = *puVar7;
          if (uVar1 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b693fc:
  if (param_2 == 0) {
LAB_02b69404:
    uVar13 = 2;
    goto LAB_02b698bc;
  }
LAB_02b69420:
  puVar4 = PTR_DAT_04bc4698;
  puVar3 = PTR_DAT_04bc4690;
  if (DAT_05636e3c != 0) {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar7 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e3c ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e3c) != '\0')))) &&
         (((DAT_05636e3c < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * DAT_05636e3c + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                         (long)puVar7);
        goto joined_r0x02b695c0;
      }
    }
    else if (DAT_05636e3c < *(uint *)(lVar9 + 0x1e0)) {
      uVar1 = DAT_05636e3c;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e3c) {
        uVar1 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar1 * 8);
joined_r0x02b695c0:
      if ((puVar7 != (uint *)0x0) && (uVar1 = *puVar7, uVar1 != 0)) {
        cVar10 = *PTR_DAT_04bc4690;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
            uVar1 = *puVar7;
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x14);
            if (-1 < (int)uVar2) {
              if ((short *)((ulong)uVar2 + (long)puVar7) != (short *)0x0) {
                if (*(short *)((ulong)uVar2 + (long)puVar7) != param_2) goto LAB_02b695ec;
                goto LAB_02b695d0;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar1;
          if ((puVar11 == (uint *)0x0) || (puVar7 == puVar11)) break;
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + (lVar9 - (long)puVar11);
          if (lVar9 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar6 = (int *)(lVar9 + 4);
          while (piVar6[-1] != 0xd664b5c) {
            piVar6 = piVar6 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_02b695c8;
          }
          iVar8 = 0;
          if (*piVar6 != -1) {
            iVar8 = *piVar6;
          }
          *(int *)(puVar4 + 0x14) = iVar8;
          uVar1 = *puVar7;
          if (uVar1 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b695c8:
  if (param_2 == 0) {
LAB_02b695d0:
    uVar13 = 3;
    goto LAB_02b698bc;
  }
LAB_02b695ec:
  puVar4 = PTR_DAT_04bc4698;
  puVar3 = PTR_DAT_04bc4690;
  local_34 = DAT_05636e40;
  if (DAT_05636e40 != 0) {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    if ((int)*(uint *)(lVar9 + 0x1e0) < 1) {
      if ((((*(long *)(lVar9 + 0xd0) != 0) &&
           (puVar7 = *(uint **)(*(long *)(lVar9 + 0xd0) + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(lVar9 + 0xe8) <= DAT_05636e40 ||
           (*(char *)(*(long *)(lVar9 + 0xf0) + (long)(int)DAT_05636e40) != '\0')))) &&
         (((DAT_05636e40 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar8 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar8 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * DAT_05636e40 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                         (long)puVar7);
        goto joined_r0x02b6978c;
      }
    }
    else if (DAT_05636e40 < *(uint *)(lVar9 + 0x1e0)) {
      uVar1 = DAT_05636e40;
      if (*(uint *)(lVar9 + 0x1d0) <= DAT_05636e40) {
        uVar1 = 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar9 + 0x1d8) + (ulong)uVar1 * 8);
joined_r0x02b6978c:
      if ((puVar7 != (uint *)0x0) && (uVar1 = *puVar7, uVar1 != 0)) {
        cVar10 = *PTR_DAT_04bc4690;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x18) = 0xffffffff;
            uVar1 = *puVar7;
          }
          else {
            uVar2 = *(uint *)(puVar4 + 0x14);
            if (-1 < (int)uVar2) {
              if ((short *)((ulong)uVar2 + (long)puVar7) != (short *)0x0) {
                if (*(short *)((ulong)uVar2 + (long)puVar7) != param_2) goto LAB_02b697b8;
                goto LAB_02b6979c;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar1;
          if ((puVar11 == (uint *)0x0) || (puVar7 == puVar11)) break;
          lVar9 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar9 = 0x1c;
          }
          lVar9 = (long)puVar7 + (lVar9 - (long)puVar11);
          if (lVar9 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar6 = (int *)(lVar9 + 4);
          while (piVar6[-1] != 0xd664b5c) {
            piVar6 = piVar6 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_02b69794;
          }
          iVar8 = 0;
          if (*piVar6 != -1) {
            iVar8 = *piVar6;
          }
          *(int *)(puVar4 + 0x14) = iVar8;
          uVar1 = *puVar7;
          if (uVar1 == 0) break;
        } while( true );
      }
    }
  }
LAB_02b69794:
  if (param_2 == 0) {
LAB_02b6979c:
    uVar13 = 4;
  }
  else {
LAB_02b697b8:
    uVar13 = 5;
    local_50[0] = 5;
    FUN_02b2af80(local_50,DAT_05636e44);
    sVar5 = FUN_02b2b0c0(local_50);
    if (sVar5 != param_2) {
      uVar13 = 6;
      local_50[0] = 6;
      FUN_02b2af80(local_50,DAT_05636e48);
      sVar5 = FUN_02b2b0c0(local_50);
      if (sVar5 != param_2) {
        uVar13 = 7;
        local_50[0] = 7;
        FUN_02b2af80(local_50,DAT_05636e4c);
        sVar5 = FUN_02b2b0c0(local_50);
        if (sVar5 != param_2) {
          uVar13 = 8;
          local_50[0] = 8;
          FUN_02b2af80(local_50,DAT_05636e50);
          sVar5 = FUN_02b2b0c0(local_50);
          if (sVar5 != param_2) {
            uVar13 = 9;
            local_50[0] = 9;
            FUN_02b2af80(local_50,DAT_05636e54);
            sVar5 = FUN_02b2b0c0(local_50);
            if (sVar5 != param_2) {
              return 0;
            }
          }
        }
      }
    }
  }
LAB_02b698bc:
  *param_1 = uVar13;
  return 1;
}

