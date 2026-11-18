
int FUN_03257ad0(undefined8 param_1,uint param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  long lVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined *local_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb2208;
  lVar9 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar9 + 0x1d40);
  if ((0 < (int)uVar15) ||
     (((*(long *)(lVar9 + 0x1c30) != 0 &&
       (puVar10 = *(uint **)(*(long *)(lVar9 + 0x1c30) + 8), puVar10 != (uint *)0x0)) &&
      (uVar15 = *puVar10, uVar15 != 0)))) {
    uVar16 = 0;
    iVar14 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(lVar9 + 0x1d40) < 1) {
        if (((((*(long *)(lVar9 + 0x1c30) != 0) &&
              (puVar10 = *(uint **)(*(long *)(lVar9 + 0x1c30) + 8), puVar10 != (uint *)0x0)) &&
             ((*(uint *)(lVar9 + 0x1c48) <= uVar16 ||
              (*(char *)(*(long *)(lVar9 + 0x1c50) + (long)(int)uVar16) != '\0')))) &&
            ((uVar16 < *puVar10 && (puVar10[1] != 0)))) && ((ushort)puVar10[2] != 0)) {
          iVar11 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            iVar11 = 0x1c;
          }
          puVar10 = (uint *)((ulong)(puVar10[1] * uVar16 + (uint)(ushort)puVar10[2] * 8 + iVar11) +
                            (long)puVar10);
          goto joined_r0x03257cf8;
        }
      }
      else if (uVar16 < *(uint *)(lVar9 + 0x1d40)) {
        uVar3 = uVar16;
        if (*(uint *)(lVar9 + 0x1d30) <= uVar16) {
          uVar3 = 0;
        }
        puVar10 = *(uint **)(*(long *)(lVar9 + 0x1d38) + (ulong)uVar3 * 8);
joined_r0x03257cf8:
        if (puVar10 != (uint *)0x0) {
          if (*puVar10 != 0) {
            cVar8 = *PTR_DAT_04bb6440;
            do {
              puVar5 = PTR_DAT_04bb6440;
              if (cVar8 == '\0') {
                cVar8 = '\x01';
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
                *puVar5 = 1;
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar3 = *(uint *)(puVar6 + 0x48);
                if (-1 < (int)uVar3) {
                  lVar9 = (ulong)uVar3 + (long)puVar10;
                  goto LAB_03257c4c;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar12 = (uint *)(ulong)*puVar10;
              lVar9 = 0;
              if ((*puVar10 == 0) || (puVar10 == puVar12)) goto LAB_03257c4c;
              lVar9 = 0xc;
              if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
                lVar9 = 0x1c;
              }
              lVar2 = (long)puVar10 + (lVar9 - (long)puVar12);
              if (lVar2 == 0) break;
              uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
              *(undefined4 *)(puVar6 + 0x48) = 0xfffffffe;
              lVar9 = 0;
              if (uVar7 == 0) goto LAB_03257c4c;
              piVar13 = (int *)(lVar2 + 4);
              while (piVar13[-1] != 0x45f320f2) {
                piVar13 = piVar13 + 2;
                uVar7 = uVar7 - 1;
                if (uVar7 == 0) {
                  lVar9 = 0;
                  goto LAB_03257c4c;
                }
              }
              iVar11 = 0;
              if (*piVar13 != -1) {
                iVar11 = *piVar13;
              }
              *(int *)(puVar6 + 0x48) = iVar11;
            } while (*puVar10 != 0);
          }
          lVar9 = 0;
LAB_03257c4c:
          lStack_68 = *(long *)PTR_PTR_04bb6438;
          if (lVar9 != 0) {
            lStack_68 = lVar9;
          }
          local_70 = puVar1;
          uVar7 = FUN_032566f0(param_1,&local_70);
          lVar9 = *(long *)puVar4;
          if ((uVar7 & 1) != 0) {
            if (uVar16 == param_2) {
              return iVar14;
            }
            iVar14 = iVar14 + 1;
          }
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 != uVar15);
  }
  return -1;
}

