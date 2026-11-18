
bool FUN_03256fd0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  char cVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  uint uVar15;
  uint uVar16;
  undefined *local_70;
  long lStack_68;
  
  puVar6 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb2208;
  lVar10 = *(long *)PTR_DAT_04bb2208;
  uVar15 = *(uint *)(lVar10 + 0x1d40);
  if (((int)uVar15 < 1) &&
     (((*(long *)(lVar10 + 0x1c30) == 0 ||
       (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1c30) + 8), puVar11 == (uint *)0x0)) ||
      (uVar15 = *puVar11, uVar15 == 0)))) {
    bVar7 = false;
  }
  else {
    uVar16 = 0;
    bVar7 = true;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      if ((int)*(uint *)(lVar10 + 0x1d40) < 1) {
        if (((((*(long *)(lVar10 + 0x1c30) != 0) &&
              (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1c30) + 8), puVar11 != (uint *)0x0)) &&
             ((*(uint *)(lVar10 + 0x1c48) <= uVar16 ||
              (*(char *)(*(long *)(lVar10 + 0x1c50) + (long)(int)uVar16) != '\0')))) &&
            ((uVar16 < *puVar11 && (puVar11[1] != 0)))) && ((ushort)puVar11[2] != 0)) {
          iVar8 = 0xc;
          if (*(char *)((long)puVar11 + 10) != '\0') {
            iVar8 = 0x1c;
          }
          puVar11 = (uint *)((ulong)(puVar11[1] * uVar16 + (uint)(ushort)puVar11[2] * 8 + iVar8) +
                            (long)puVar11);
          goto joined_r0x032571f4;
        }
      }
      else if (uVar16 < *(uint *)(lVar10 + 0x1d40)) {
        uVar3 = uVar16;
        if (*(uint *)(lVar10 + 0x1d30) <= uVar16) {
          uVar3 = 0;
        }
        puVar11 = *(uint **)(*(long *)(lVar10 + 0x1d38) + (ulong)uVar3 * 8);
joined_r0x032571f4:
        if (puVar11 != (uint *)0x0) {
          if (*puVar11 != 0) {
            cVar9 = *PTR_DAT_04bb6440;
            do {
              puVar5 = PTR_DAT_04bb6440;
              if (cVar9 == '\0') {
                cVar9 = '\x01';
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
                  lVar10 = (ulong)uVar3 + (long)puVar11;
                  goto LAB_03257040;
                }
                if (uVar3 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)*puVar11;
              lVar10 = 0;
              if ((*puVar11 == 0) || (puVar11 == puVar13)) goto LAB_03257040;
              lVar10 = 0xc;
              if (*(char *)((long)puVar11 + (10 - (long)puVar13)) != '\0') {
                lVar10 = 0x1c;
              }
              lVar2 = (long)puVar11 + (lVar10 - (long)puVar13);
              if (lVar2 == 0) break;
              uVar12 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar13));
              *(undefined4 *)(puVar6 + 0x48) = 0xfffffffe;
              lVar10 = 0;
              if (uVar12 == 0) goto LAB_03257040;
              piVar14 = (int *)(lVar2 + 4);
              while (piVar14[-1] != 0x45f320f2) {
                piVar14 = piVar14 + 2;
                uVar12 = uVar12 - 1;
                if (uVar12 == 0) {
                  lVar10 = 0;
                  goto LAB_03257040;
                }
              }
              iVar8 = 0;
              if (*piVar14 != -1) {
                iVar8 = *piVar14;
              }
              *(int *)(puVar6 + 0x48) = iVar8;
            } while (*puVar11 != 0);
          }
          lVar10 = 0;
LAB_03257040:
          lStack_68 = *(long *)PTR_PTR_04bb6438;
          if (lVar10 != 0) {
            lStack_68 = lVar10;
          }
          local_70 = puVar1;
          iVar8 = FUN_03256990(param_1,&local_70);
          if (0 < iVar8) {
            return bVar7;
          }
          lVar10 = *(long *)puVar4;
        }
      }
      uVar16 = uVar16 + 1;
      bVar7 = uVar16 < uVar15;
    } while (uVar16 != uVar15);
  }
  return bVar7;
}

