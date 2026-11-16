
void FUN_02742ce0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined2 uVar7;
  uint *puVar8;
  char cVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined *local_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_04bb63a8;
  puVar5 = PTR_DAT_04bb63a0;
  lVar10 = *(long *)PTR_DAT_04bb2208;
  uVar14 = *(uint *)(lVar10 + 0xe60);
  if ((0 < (int)uVar14) ||
     (((*(long *)(lVar10 + 0xd50) != 0 &&
       (puVar8 = *(uint **)(*(long *)(lVar10 + 0xd50) + 8), puVar8 != (uint *)0x0)) &&
      (uVar14 = *puVar8, uVar14 != 0)))) {
    uVar15 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(lVar10 + 0xe60) < 1) {
        if (((((*(long *)(lVar10 + 0xd50) != 0) &&
              (puVar8 = *(uint **)(*(long *)(lVar10 + 0xd50) + 8), puVar8 != (uint *)0x0)) &&
             ((*(uint *)(lVar10 + 0xd68) <= uVar15 ||
              (*(char *)(*(long *)(lVar10 + 0xd70) + (long)(int)uVar15) != '\0')))) &&
            ((uVar15 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
          iVar16 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            iVar16 = 0x1c;
          }
          puVar8 = (uint *)((ulong)(puVar8[1] * uVar15 + (uint)(ushort)puVar8[2] * 8 + iVar16) +
                           (long)puVar8);
          goto joined_r0x02742fa0;
        }
      }
      else if (uVar15 < *(uint *)(lVar10 + 0xe60)) {
        uVar3 = uVar15;
        if (*(uint *)(lVar10 + 0xe50) <= uVar15) {
          uVar3 = 0;
        }
        puVar8 = *(uint **)(*(long *)(lVar10 + 0xe58) + (ulong)uVar3 * 8);
joined_r0x02742fa0:
        if (puVar8 != (uint *)0x0) {
          if (*puVar8 != 0) {
            cVar9 = *puVar5;
            do {
              if (cVar9 == '\0') {
                cVar9 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar5 = 1;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 0x20);
                if (-1 < (int)uVar3) {
                  lVar10 = (ulong)uVar3 + (long)puVar8;
                  goto LAB_02742e6c;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar12 = (uint *)(ulong)*puVar8;
              lVar10 = 0;
              if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_02742e6c;
              lVar10 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar2 = (long)puVar8 + (lVar10 - (long)puVar12);
              if (lVar2 == 0) break;
              uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
              *(undefined4 *)(puVar6 + 0x20) = 0xfffffffe;
              lVar10 = 0;
              if (uVar11 == 0) goto LAB_02742e6c;
              piVar13 = (int *)(lVar2 + 4);
              while (piVar13[-1] != 0x45f320f2) {
                piVar13 = piVar13 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) {
                  lVar10 = 0;
                  goto LAB_02742e6c;
                }
              }
              iVar16 = 0;
              if (*piVar13 != -1) {
                iVar16 = *piVar13;
              }
              *(int *)(puVar6 + 0x20) = iVar16;
            } while (*puVar8 != 0);
          }
          lVar10 = 0;
LAB_02742e6c:
          lStack_68 = *(long *)PTR_PTR_04bb6398;
          if (lVar10 != 0) {
            lStack_68 = lVar10;
          }
          uVar3 = *puVar8;
          if (uVar3 != 0) {
            cVar9 = *puVar5;
            do {
              if (cVar9 == '\0') {
                cVar9 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *puVar5 = 1;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                uVar3 = *puVar8;
              }
              else {
                uVar4 = *(uint *)puVar6;
                if (-1 < (int)uVar4) {
                  if ((undefined2 *)((ulong)uVar4 + (long)puVar8) != (undefined2 *)0x0) {
                    uVar7 = *(undefined2 *)((ulong)uVar4 + (long)puVar8);
                    goto LAB_02742d64;
                  }
                  break;
                }
                if (uVar4 != 0xffffffff) break;
              }
              puVar12 = (uint *)(ulong)uVar3;
              uVar7 = 0;
              if ((puVar12 == (uint *)0x0) || (uVar7 = 0, puVar8 == puVar12)) goto LAB_02742d64;
              lVar10 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar10 = (long)puVar8 + (lVar10 - (long)puVar12);
              if (lVar10 == 0) break;
              uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
              *(undefined4 *)puVar6 = 0xfffffffe;
              if (uVar11 == 0) break;
              piVar13 = (int *)(lVar10 + 4);
              while (piVar13[-1] != 0x797f5754) {
                piVar13 = piVar13 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_02742d60;
              }
              iVar16 = 0;
              if (*piVar13 != -1) {
                iVar16 = *piVar13;
              }
              *(int *)puVar6 = iVar16;
              uVar3 = *puVar8;
              if (uVar3 == 0) break;
            } while( true );
          }
LAB_02742d60:
          uVar7 = 0;
LAB_02742d64:
          local_70 = puVar1;
          FUN_02742300(param_1,&local_70,uVar7);
          lVar10 = *(long *)PTR_DAT_04bb2208;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  return;
}

