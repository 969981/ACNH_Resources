
int FUN_03257860(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  char cVar6;
  long lVar7;
  uint *puVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined *local_70;
  long lStack_68;
  
  puVar4 = PTR_DAT_04bb6448;
  lVar7 = *(long *)PTR_DAT_04bb2208;
  uVar13 = *(uint *)(lVar7 + 0x1d40);
  if (((int)uVar13 < 1) &&
     (((*(long *)(lVar7 + 0x1c30) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1c30) + 8), puVar8 == (uint *)0x0)) ||
      (uVar13 = *puVar8, uVar13 == 0)))) {
    iVar12 = 0;
  }
  else {
    iVar12 = 0;
    uVar14 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(lVar7 + 0x1d40) < 1) {
        if (((((*(long *)(lVar7 + 0x1c30) != 0) &&
              (puVar8 = *(uint **)(*(long *)(lVar7 + 0x1c30) + 8), puVar8 != (uint *)0x0)) &&
             ((*(uint *)(lVar7 + 0x1c48) <= uVar14 ||
              (*(char *)(*(long *)(lVar7 + 0x1c50) + (long)(int)uVar14) != '\0')))) &&
            ((uVar14 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
          iVar15 = 0xc;
          if (*(char *)((long)puVar8 + 10) != '\0') {
            iVar15 = 0x1c;
          }
          puVar8 = (uint *)((ulong)(puVar8[1] * uVar14 + (uint)(ushort)puVar8[2] * 8 + iVar15) +
                           (long)puVar8);
          goto joined_r0x03257a80;
        }
      }
      else if (uVar14 < *(uint *)(lVar7 + 0x1d40)) {
        uVar5 = uVar14;
        if (*(uint *)(lVar7 + 0x1d30) <= uVar14) {
          uVar5 = 0;
        }
        puVar8 = *(uint **)(*(long *)(lVar7 + 0x1d38) + (ulong)uVar5 * 8);
joined_r0x03257a80:
        if (puVar8 != (uint *)0x0) {
          if (*puVar8 != 0) {
            cVar6 = *PTR_DAT_04bb6440;
            do {
              puVar3 = PTR_DAT_04bb6440;
              if (cVar6 == '\0') {
                cVar6 = '\x01';
                *(undefined8 *)puVar4 = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
                *puVar3 = 1;
                *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
              }
              else {
                uVar5 = *(uint *)(puVar4 + 0x48);
                if (-1 < (int)uVar5) {
                  lVar7 = (ulong)uVar5 + (long)puVar8;
                  goto LAB_032578d4;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar10 = (uint *)(ulong)*puVar8;
              lVar7 = 0;
              if ((*puVar8 == 0) || (puVar8 == puVar10)) goto LAB_032578d4;
              lVar7 = 0xc;
              if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
                lVar7 = 0x1c;
              }
              lVar2 = (long)puVar8 + (lVar7 - (long)puVar10);
              if (lVar2 == 0) break;
              uVar9 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
              *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
              lVar7 = 0;
              if (uVar9 == 0) goto LAB_032578d4;
              piVar11 = (int *)(lVar2 + 4);
              while (piVar11[-1] != 0x45f320f2) {
                piVar11 = piVar11 + 2;
                uVar9 = uVar9 - 1;
                if (uVar9 == 0) {
                  lVar7 = 0;
                  goto LAB_032578d4;
                }
              }
              iVar15 = 0;
              if (*piVar11 != -1) {
                iVar15 = *piVar11;
              }
              *(int *)(puVar4 + 0x48) = iVar15;
            } while (*puVar8 != 0);
          }
          lVar7 = 0;
LAB_032578d4:
          lStack_68 = *(long *)PTR_PTR_04bb6438;
          if (lVar7 != 0) {
            lStack_68 = lVar7;
          }
          local_70 = puVar1;
          uVar5 = FUN_032566f0(param_1,&local_70);
          iVar12 = iVar12 + (uVar5 & 1);
          lVar7 = *(long *)PTR_DAT_04bb2208;
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != uVar13);
  }
  return iVar12;
}

