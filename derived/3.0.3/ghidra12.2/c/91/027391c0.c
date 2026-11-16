
void FUN_027391c0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined2 uVar8;
  uint *puVar9;
  long lVar10;
  char cVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined *local_70;
  long lStack_68;
  
  puVar7 = PTR_DAT_04bb63c0;
  puVar6 = PTR_DAT_04bb63b8;
  lVar10 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar10 + 0x1080);
  if ((0 < (int)uVar15) ||
     (((*(long *)(lVar10 + 0xf70) != 0 &&
       (puVar9 = *(uint **)(*(long *)(lVar10 + 0xf70) + 8), puVar9 != (uint *)0x0)) &&
      (uVar15 = *puVar9, uVar15 != 0)))) {
    uVar16 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(lVar10 + 0x1080) < 1) {
        if (((((*(long *)(lVar10 + 0xf70) != 0) &&
              (puVar9 = *(uint **)(*(long *)(lVar10 + 0xf70) + 8), puVar9 != (uint *)0x0)) &&
             ((*(uint *)(lVar10 + 0xf88) <= uVar16 ||
              (*(char *)(*(long *)(lVar10 + 0xf90) + (long)(int)uVar16) != '\0')))) &&
            ((uVar16 < *puVar9 && (puVar9[1] != 0)))) && ((ushort)puVar9[2] != 0)) {
          iVar17 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            iVar17 = 0x1c;
          }
          puVar9 = (uint *)((ulong)(puVar9[1] * uVar16 + (uint)(ushort)puVar9[2] * 8 + iVar17) +
                           (long)puVar9);
          goto joined_r0x027393b0;
        }
      }
      else if (uVar16 < *(uint *)(lVar10 + 0x1080)) {
        uVar3 = uVar16;
        if (*(uint *)(lVar10 + 0x1070) <= uVar16) {
          uVar3 = 0;
        }
        puVar9 = *(uint **)(*(long *)(lVar10 + 0x1078) + (ulong)uVar3 * 8);
joined_r0x027393b0:
        if (puVar9 != (uint *)0x0) {
          if (*puVar9 != 0) {
            cVar11 = *puVar6;
            do {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar7 + 8);
                if (-1 < (int)uVar3) {
                  if (((ushort *)((ulong)uVar3 + (long)puVar9) != (ushort *)0x0) &&
                     (0x7f < *(ushort *)((ulong)uVar3 + (long)puVar9))) goto LAB_0273926c;
                  break;
                }
                if (uVar3 != 0xffffffff) break;
              }
              lVar2 = (long)puVar9 - (ulong)*puVar9;
              if ((*puVar9 == 0) || (lVar2 == 0)) break;
              lVar4 = 0xc;
              if (*(char *)(lVar2 + 10) != '\0') {
                lVar4 = 0x1c;
              }
              if (lVar4 + lVar2 == 0) break;
              uVar12 = (ulong)*(ushort *)(lVar2 + 8);
              *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar14 = (int *)(lVar4 + lVar2 + 4);
              while (piVar14[-1] != 0x54706054) {
                piVar14 = piVar14 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_027393d0;
              }
              iVar17 = 0;
              if (*piVar14 != -1) {
                iVar17 = *piVar14;
              }
              *(int *)(puVar7 + 8) = iVar17;
              if (*puVar9 == 0) break;
            } while( true );
          }
LAB_027393d0:
          if (*puVar9 != 0) {
            cVar11 = *puVar6;
            do {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar7 + 0x10);
                if (-1 < (int)uVar3) {
                  lVar10 = (ulong)uVar3 + (long)puVar9;
                  goto LAB_0273947c;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)*puVar9;
              lVar10 = 0;
              if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_0273947c;
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar2 = (long)puVar9 + (lVar10 - (long)puVar13);
              if (lVar2 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
              *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
              lVar10 = 0;
              if (uVar12 == 0) goto LAB_0273947c;
              piVar14 = (int *)(lVar2 + 4);
              while (piVar14[-1] != 0x45f320f2) {
                piVar14 = piVar14 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  lVar10 = 0;
                  goto LAB_0273947c;
                }
              }
              iVar17 = 0;
              if (*piVar14 != -1) {
                iVar17 = *piVar14;
              }
              *(int *)(puVar7 + 0x10) = iVar17;
            } while (*puVar9 != 0);
          }
          lVar10 = 0;
LAB_0273947c:
          lStack_68 = *(long *)PTR_PTR_04bb63b0;
          if (lVar10 != 0) {
            lStack_68 = lVar10;
          }
          uVar3 = *puVar9;
          if (uVar3 != 0) {
            cVar11 = *puVar6;
            do {
              if (cVar11 == '\0') {
                cVar11 = '\x01';
                *(undefined8 *)puVar7 = 0xffffffffffffffff;
                *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
                *puVar6 = 1;
                *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
                uVar3 = *puVar9;
              }
              else {
                uVar5 = *(uint *)puVar7;
                if (-1 < (int)uVar5) {
                  if ((undefined2 *)((ulong)uVar5 + (long)puVar9) != (undefined2 *)0x0) {
                    uVar8 = *(undefined2 *)((ulong)uVar5 + (long)puVar9);
                    goto LAB_02739250;
                  }
                  break;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)uVar3;
              uVar8 = 0;
              if ((puVar13 == (uint *)0x0) || (uVar8 = 0, puVar9 == puVar13)) goto LAB_02739250;
              lVar10 = 0xc;
              if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar9 + (lVar10 - (long)puVar13);
              if (lVar10 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
              *(undefined4 *)puVar7 = 0xfffffffe;
              if (uVar12 == 0) break;
              piVar14 = (int *)(lVar10 + 4);
              while (piVar14[-1] != 0x797f5754) {
                piVar14 = piVar14 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) goto LAB_0273924c;
              }
              iVar17 = 0;
              if (*piVar14 != -1) {
                iVar17 = *piVar14;
              }
              *(int *)puVar7 = iVar17;
              uVar3 = *puVar9;
              if (uVar3 == 0) break;
            } while( true );
          }
LAB_0273924c:
          uVar8 = 0;
LAB_02739250:
          local_70 = puVar1;
          FUN_027395a0(param_1,&local_70,uVar8);
          lVar10 = *(long *)PTR_DAT_04bb2208;
        }
      }
LAB_0273926c:
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar15);
  }
  return;
}

