
uint * FUN_027a0fc0(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  short sVar11;
  byte *pbVar12;
  uint *puVar13;
  uint *puVar14;
  ulong uVar15;
  int *piVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  char cVar21;
  
  puVar8 = PTR_DAT_04bb6428;
  puVar7 = PTR_DAT_04bb6420;
  if ((int)param_2 < 0) {
    return (uint *)0x0;
  }
  lVar17 = *(long *)PTR_DAT_04bb2208;
  uVar4 = *(uint *)(lVar17 + 0x1b20);
  uVar18 = uVar4;
  if ((int)uVar4 < 1) {
    iVar9 = 0;
    if (*(long *)(lVar17 + 0x1a10) == 0) goto LAB_027a11bc;
    puVar13 = *(uint **)(*(long *)(lVar17 + 0x1a10) + 8);
    iVar9 = 0;
    if (puVar13 == (uint *)0x0) goto LAB_027a11bc;
    uVar18 = *puVar13;
    if (uVar18 == 0) {
      iVar9 = 0;
      goto LAB_027a11bc;
    }
  }
  cVar21 = *PTR_DAT_04bb6420;
  iVar9 = 0;
  uVar19 = 0;
  do {
    if ((int)uVar4 < 1) {
      if ((((*(long *)(lVar17 + 0x1a10) != 0) &&
           (puVar13 = *(uint **)(*(long *)(lVar17 + 0x1a10) + 8), puVar13 != (uint *)0x0)) &&
          ((*(uint *)(lVar17 + 0x1a28) <= uVar19 ||
           (*(char *)(*(long *)(lVar17 + 0x1a30) + (long)(int)uVar19) != '\0')))) &&
         (((uVar19 < *puVar13 && (puVar13[1] != 0)) && ((ushort)puVar13[2] != 0)))) {
        iVar10 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          iVar10 = 0x1c;
        }
        puVar13 = (uint *)((ulong)(puVar13[1] * uVar19 + (uint)(ushort)puVar13[2] * 8 + iVar10) +
                          (long)puVar13);
        goto joined_r0x027a1170;
      }
    }
    else if (uVar19 < uVar4) {
      uVar1 = uVar19;
      if (*(uint *)(lVar17 + 0x1b10) <= uVar19) {
        uVar1 = 0;
      }
      puVar13 = *(uint **)(*(long *)(lVar17 + 0x1b18) + (ulong)uVar1 * 8);
joined_r0x027a1170:
      if (puVar13 != (uint *)0x0) {
        if (*puVar13 != 0) {
          do {
            if (cVar21 == '\0') {
              cVar21 = '\x01';
              *(undefined8 *)puVar8 = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
              *puVar7 = 1;
              *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar1 = *(uint *)(puVar8 + 0x20);
              if (-1 < (int)uVar1) {
                if (((ushort *)((ulong)uVar1 + (long)puVar13) != (ushort *)0x0) &&
                   (uVar5 = *(ushort *)((ulong)uVar1 + (long)puVar13), uVar5 < 0x200)) {
                  pbVar12 = (byte *)(param_1 + 0x400) + uVar5;
                  goto LAB_027a1024;
                }
                break;
              }
              if (uVar1 != 0xffffffff) break;
            }
            lVar3 = (long)puVar13 - (ulong)*puVar13;
            if ((*puVar13 == 0) || (lVar3 == 0)) break;
            lVar2 = 0xc;
            if (*(char *)(lVar3 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar3 == 0) break;
            uVar20 = (ulong)*(ushort *)(lVar3 + 8);
            *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
            if (uVar20 == 0) break;
            piVar16 = (int *)(lVar2 + lVar3 + 4);
            while (piVar16[-1] != 0x54706054) {
              piVar16 = piVar16 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_027a1020;
            }
            iVar10 = 0;
            if (*piVar16 != -1) {
              iVar10 = *piVar16;
            }
            *(int *)(puVar8 + 0x20) = iVar10;
            if (*puVar13 == 0) break;
          } while( true );
        }
LAB_027a1020:
        pbVar12 = (byte *)(param_1 + 0x400);
LAB_027a1024:
        iVar9 = iVar9 + (uint)*pbVar12;
      }
    }
    uVar19 = uVar19 + 1;
  } while (uVar19 != uVar18);
LAB_027a11bc:
  if (((int)param_2 < iVar9) &&
     ((uVar18 = uVar4, 0 < (int)uVar4 ||
      (((*(long *)(lVar17 + 0x1a10) != 0 &&
        (puVar13 = *(uint **)(*(long *)(lVar17 + 0x1a10) + 8), puVar13 != (uint *)0x0)) &&
       (uVar18 = *puVar13, uVar18 != 0)))))) {
    cVar21 = *puVar7;
    uVar20 = (ulong)param_2;
    uVar19 = 0;
    if (7 < param_2) {
      uVar20 = 0;
    }
    do {
      if ((int)uVar4 < 1) {
        puVar13 = (uint *)0x0;
        if ((*(long *)(lVar17 + 0x1a10) != 0) &&
           (puVar13 = *(uint **)(*(long *)(lVar17 + 0x1a10) + 8), puVar13 != (uint *)0x0)) {
          if (((uVar19 < *(uint *)(lVar17 + 0x1a28)) &&
              (*(char *)(*(long *)(lVar17 + 0x1a30) + (long)(int)uVar19) == '\0')) ||
             (((*puVar13 <= uVar19 || (puVar13[1] == 0)) || ((ushort)puVar13[2] == 0))))
          goto LAB_027a1284;
          iVar9 = 0xc;
          if (*(char *)((long)puVar13 + 10) != '\0') {
            iVar9 = 0x1c;
          }
          puVar13 = (uint *)((ulong)(puVar13[1] * uVar19 + (uint)(ushort)puVar13[2] * 8 + iVar9) +
                            (long)puVar13);
        }
      }
      else if (uVar19 < uVar4) {
        uVar1 = uVar19;
        if (*(uint *)(lVar17 + 0x1b10) <= uVar19) {
          uVar1 = 0;
        }
        puVar13 = *(uint **)(*(long *)(lVar17 + 0x1b18) + (ulong)uVar1 * 8);
      }
      else {
LAB_027a1284:
        puVar13 = (uint *)0x0;
      }
      sVar6 = *(short *)(param_1 + 0xe44 + uVar20 * 2);
      sVar11 = 0;
      if (*puVar13 != 0) {
        do {
          if (cVar21 != '\0') {
            uVar1 = *(uint *)(puVar8 + 0x20);
            if ((int)uVar1 < 0) {
              if (uVar1 == 0xffffffff) {
                uVar1 = *puVar13;
                if (uVar1 != 0) goto LAB_027a12dc;
                sVar11 = 0;
              }
              else {
LAB_027a134c:
                sVar11 = 0;
              }
            }
            else {
              sVar11 = 0;
              if ((short *)((ulong)uVar1 + (long)puVar13) != (short *)0x0) {
                sVar11 = *(short *)((ulong)uVar1 + (long)puVar13);
              }
            }
            goto LAB_027a1350;
          }
          cVar21 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
          uVar1 = *puVar13;
          sVar11 = 0;
          if (uVar1 == 0) goto LAB_027a1350;
LAB_027a12dc:
          puVar14 = (uint *)(ulong)uVar1;
          if (puVar13 == puVar14) goto LAB_027a134c;
          lVar3 = 0xc;
          if (*(char *)((long)puVar13 + (10 - (long)puVar14)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar13 + (lVar3 - (long)puVar14);
          if (lVar3 == 0) goto LAB_027a134c;
          uVar15 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar14));
          *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
          sVar11 = 0;
          if (uVar15 == 0) goto LAB_027a1350;
          piVar16 = (int *)(lVar3 + 4);
          while (piVar16[-1] != 0x54706054) {
            piVar16 = piVar16 + 2;
            uVar15 = uVar15 - 1;
            if (uVar15 == 0) {
              sVar11 = 0;
              goto LAB_027a1350;
            }
          }
          iVar9 = 0;
          if (*piVar16 != -1) {
            iVar9 = *piVar16;
          }
          *(int *)(puVar8 + 0x20) = iVar9;
        } while (*puVar13 != 0);
        sVar11 = 0;
      }
LAB_027a1350:
      if (sVar6 == sVar11) {
        return puVar13;
      }
      uVar19 = uVar19 + 1;
    } while (uVar19 != uVar18);
  }
  return (uint *)0x0;
}

