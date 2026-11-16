
void FUN_02741ea0(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint *puVar8;
  long lVar9;
  char cVar10;
  byte bVar11;
  ulong uVar12;
  int *piVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined *local_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_04bb63a8;
  puVar5 = PTR_DAT_04bb63a0;
  lVar9 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar9 + 0xe60);
  if ((0 < (int)uVar15) ||
     (((*(long *)(lVar9 + 0xd50) != 0 &&
       (puVar8 = *(uint **)(*(long *)(lVar9 + 0xd50) + 8), puVar8 != (uint *)0x0)) &&
      (uVar15 = *puVar8, uVar15 != 0)))) {
    uVar16 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(lVar9 + 0xe60) < 1) {
        if (((((*(long *)(lVar9 + 0xd50) != 0) &&
              (puVar8 = *(uint **)(*(long *)(lVar9 + 0xd50) + 8), puVar8 != (uint *)0x0)) &&
             ((*(uint *)(lVar9 + 0xd68) <= uVar16 ||
              (*(char *)(*(long *)(lVar9 + 0xd70) + (long)(int)uVar16) != '\0')))) &&
            ((uVar16 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
          iVar17 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            iVar17 = 0x1c;
          }
          puVar8 = (uint *)((ulong)(puVar8[1] * uVar16 + (uint)(ushort)puVar8[2] * 8 + iVar17) +
                           (long)puVar8);
          goto joined_r0x027420a0;
        }
      }
      else if (uVar16 < *(uint *)(lVar9 + 0xe60)) {
        uVar2 = uVar16;
        if (*(uint *)(lVar9 + 0xe50) <= uVar16) {
          uVar2 = 0;
        }
        puVar8 = *(uint **)(*(long *)(lVar9 + 0xe58) + (ulong)uVar2 * 8);
joined_r0x027420a0:
        if (puVar8 != (uint *)0x0) {
          if (*puVar8 == 0) {
LAB_027420c0:
            bVar11 = 0;
          }
          else {
            cVar10 = *puVar5;
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar5 = 1;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              }
              else {
                uVar2 = *(uint *)(puVar6 + 0xc);
                if (-1 < (int)uVar2) {
                  if (((byte *)((ulong)uVar2 + (long)puVar8) == (byte *)0x0) ||
                     (bVar11 = *(byte *)((ulong)uVar2 + (long)puVar8), 4 < bVar11))
                  goto LAB_027420c0;
                  goto LAB_027420c4;
                }
                if (uVar2 != 0xffffffff) goto LAB_027420c0;
              }
              puVar14 = (uint *)(ulong)*puVar8;
              bVar11 = 0;
              if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_027420c4;
              lVar3 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
                lVar3 = 0x1c;
              }
              lVar3 = (long)puVar8 + (lVar3 - (long)puVar14);
              if (lVar3 == 0) goto LAB_027420c0;
              uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
              *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
              bVar11 = 0;
              if (uVar12 == 0) goto LAB_027420c4;
              piVar13 = (int *)(lVar3 + 4);
              while (piVar13[-1] != 0x5140e4b4) {
                piVar13 = piVar13 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  bVar11 = 0;
                  goto LAB_027420c4;
                }
              }
              iVar17 = 0;
              if (*piVar13 != -1) {
                iVar17 = *piVar13;
              }
              *(int *)(puVar6 + 0xc) = iVar17;
            } while (*puVar8 != 0);
            bVar11 = 0;
          }
LAB_027420c4:
          switch(bVar11) {
          case 1:
            if (*param_2 != 0) goto switchD_027420ec_caseD_3;
            break;
          case 2:
            if ((*param_2 != 0) || (*(char *)((long)param_2 + 0x2a) != '\0'))
            goto switchD_027420ec_caseD_3;
            break;
          case 3:
switchD_027420ec_caseD_3:
            if (*puVar8 != 0) {
              cVar10 = *puVar5;
              do {
                if (cVar10 == '\0') {
                  cVar10 = '\x01';
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *puVar5 = 1;
                  *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                }
                else {
                  uVar2 = *(uint *)(puVar6 + 0x20);
                  if (-1 < (int)uVar2) {
                    lVar9 = (ulong)uVar2 + (long)puVar8;
                    goto LAB_027421dc;
                  }
                  if (uVar2 != 0xffffffff) break;
                }
                puVar14 = (uint *)(ulong)*puVar8;
                lVar9 = 0;
                if ((*puVar8 == 0) || (puVar8 == puVar14)) goto LAB_027421dc;
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar3 = (long)puVar8 + (lVar9 - (long)puVar14);
                if (lVar3 == 0) break;
                uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
                *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
                lVar9 = 0;
                if (uVar12 == 0) goto LAB_027421dc;
                piVar13 = (int *)(lVar3 + 4);
                while (piVar13[-1] != 0x45f320f2) {
                  piVar13 = piVar13 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) {
                    lVar9 = 0;
                    goto LAB_027421dc;
                  }
                }
                iVar17 = 0;
                if (*piVar13 != -1) {
                  iVar17 = *piVar13;
                }
                *(int *)(puVar6 + 0x20) = iVar17;
              } while (*puVar8 != 0);
            }
            lVar9 = 0;
LAB_027421dc:
            lStack_68 = *(long *)PTR_PTR_04bb6398;
            if (lVar9 != 0) {
              lStack_68 = lVar9;
            }
            uVar2 = *puVar8;
            if (uVar2 != 0) {
              cVar10 = *puVar5;
              do {
                if (cVar10 == '\0') {
                  cVar10 = '\x01';
                  *(undefined8 *)puVar6 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                  *puVar5 = 1;
                  *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                  uVar2 = *puVar8;
                }
                else {
                  uVar4 = *(uint *)puVar6;
                  if (-1 < (int)uVar4) {
                    if ((undefined2 *)((ulong)uVar4 + (long)puVar8) != (undefined2 *)0x0) {
                      uVar7 = *(undefined2 *)((ulong)uVar4 + (long)puVar8);
                      goto LAB_02741f30;
                    }
                    break;
                  }
                  if (uVar4 != 0xffffffff) break;
                }
                puVar14 = (uint *)(ulong)uVar2;
                uVar7 = 0;
                if ((puVar14 == (uint *)0x0) || (uVar7 = 0, puVar8 == puVar14)) goto LAB_02741f30;
                lVar9 = 0xc;
                if (*(char *)((long)puVar8 + (10 - (long)puVar14)) != '\0') {
                  lVar9 = 0x1c;
                }
                lVar9 = (long)puVar8 + (lVar9 - (long)puVar14);
                if (lVar9 == 0) break;
                uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar14));
                *(undefined4 *)puVar6 = 0xfffffffe;
                if (uVar12 == 0) break;
                piVar13 = (int *)(lVar9 + 4);
                while (piVar13[-1] != 0x797f5754) {
                  piVar13 = piVar13 + 2;
                  uVar12 = uVar12 - 1;
                  if (uVar12 == 0) goto LAB_02741f2c;
                }
                iVar17 = 0;
                if (*piVar13 != -1) {
                  iVar17 = *piVar13;
                }
                *(int *)puVar6 = iVar17;
                uVar2 = *puVar8;
                if (uVar2 == 0) break;
              } while( true );
            }
LAB_02741f2c:
            uVar7 = 0;
LAB_02741f30:
            local_70 = puVar1;
            FUN_02742300(param_1,&local_70,uVar7);
            lVar9 = *(long *)PTR_DAT_04bb2208;
            break;
          case 4:
            if (0 < *param_2) goto switchD_027420ec_caseD_3;
          }
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar15);
  }
  return;
}

