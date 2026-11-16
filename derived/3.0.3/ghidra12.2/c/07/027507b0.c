
void FUN_027507b0(undefined2 *param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined2 *puVar9;
  uint *puVar10;
  ulong uVar11;
  uint *puVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  char cVar17;
  
  puVar7 = PTR_DAT_04bb6408;
  puVar6 = PTR_DAT_04bb6400;
  puVar5 = PTR_DAT_04bb2208;
  lVar8 = *(long *)PTR_DAT_04bb2208;
  uVar14 = *(uint *)(lVar8 + 0x1900);
  if ((0 < (int)uVar14) ||
     (((*(long *)(lVar8 + 0x17f0) != 0 &&
       (puVar10 = *(uint **)(*(long *)(lVar8 + 0x17f0) + 8), puVar10 != (uint *)0x0)) &&
      (uVar14 = *puVar10, uVar14 != 0)))) {
    uVar15 = 0;
    cVar17 = *PTR_DAT_04bb6400;
    do {
      if ((int)*(uint *)(lVar8 + 0x1900) < 1) {
        if (((((*(long *)(lVar8 + 0x17f0) != 0) &&
              (puVar10 = *(uint **)(*(long *)(lVar8 + 0x17f0) + 8), puVar10 != (uint *)0x0)) &&
             ((*(uint *)(lVar8 + 0x1808) <= uVar15 ||
              (*(char *)(*(long *)(lVar8 + 0x1810) + (long)(int)uVar15) != '\0')))) &&
            ((uVar15 < *puVar10 && (puVar10[1] != 0)))) && ((ushort)puVar10[2] != 0)) {
          iVar16 = 0xc;
          if (*(char *)((long)puVar10 + 10) != '\0') {
            iVar16 = 0x1c;
          }
          puVar10 = (uint *)((ulong)(puVar10[1] * uVar15 + (uint)(ushort)puVar10[2] * 8 + iVar16) +
                            (long)puVar10);
joined_r0x02750840:
          if (puVar10 != (uint *)0x0) {
            uVar1 = *puVar10;
            while (uVar1 != 0) {
              if (cVar17 != '\0') {
                uVar11 = (ulong)*(uint *)(puVar7 + 0x10);
                if ((int)*(uint *)(puVar7 + 0x10) < 0) {
                  if (uVar11 == 0xffffffff) goto LAB_02750874;
                }
                else if (((ushort *)(uVar11 + (long)puVar10) != (ushort *)0x0) &&
                        (0x47 < *(ushort *)(uVar11 + (long)puVar10))) goto LAB_0275080c;
LAB_0275095c:
                if (*puVar10 != 0) goto LAB_02750964;
                break;
              }
              cVar17 = '\x01';
              *(undefined8 *)puVar7 = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
              *puVar6 = 1;
              *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
LAB_02750874:
              lVar3 = (long)puVar10 - (ulong)*puVar10;
              if ((*puVar10 == 0) || (lVar3 == 0)) {
LAB_027509fc:
                uVar11 = 0xffffffff;
                goto LAB_0275095c;
              }
              lVar2 = 0xc;
              if (*(char *)(lVar3 + 10) != '\0') {
                lVar2 = 0x1c;
              }
              if (lVar2 + lVar3 == 0) goto LAB_027509fc;
              uVar11 = (ulong)*(ushort *)(lVar3 + 8);
              *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
              if (uVar11 == 0) {
LAB_02750958:
                uVar11 = 0xfffffffe;
                goto LAB_0275095c;
              }
              piVar13 = (int *)(lVar2 + lVar3 + 4);
              while (piVar13[-1] != 0x54706054) {
                piVar13 = piVar13 + 2;
                uVar11 = uVar11 - 1;
                if (uVar11 == 0) goto LAB_02750958;
              }
              iVar16 = 0;
              if (*piVar13 != -1) {
                iVar16 = *piVar13;
              }
              *(int *)(puVar7 + 0x10) = iVar16;
              uVar1 = *puVar10;
            }
LAB_02750800:
            puVar9 = param_1;
LAB_02750804:
            *puVar9 = 0;
            lVar8 = *(long *)puVar5;
          }
        }
      }
      else if (uVar15 < *(uint *)(lVar8 + 0x1900)) {
        uVar1 = uVar15;
        if (*(uint *)(lVar8 + 0x18f0) <= uVar15) {
          uVar1 = 0;
        }
        puVar10 = *(uint **)(*(long *)(lVar8 + 0x18f8) + (ulong)uVar1 * 8);
        goto joined_r0x02750840;
      }
LAB_0275080c:
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  return;
LAB_02750964:
  if (cVar17 == '\0') {
    cVar17 = '\x01';
    *(undefined8 *)puVar7 = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
    *puVar6 = 1;
    *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
  }
  else {
    if (-1 < (int)uVar11) {
      if (((ushort *)(uVar11 + (long)puVar10) != (ushort *)0x0) &&
         (uVar4 = *(ushort *)(uVar11 + (long)puVar10), uVar4 < 0x48)) {
        puVar9 = param_1 + uVar4;
        goto LAB_02750804;
      }
      goto LAB_02750800;
    }
    if (uVar11 != 0xffffffff) goto LAB_02750800;
  }
  lVar8 = (long)puVar10 - (ulong)*puVar10;
  if ((*puVar10 == 0) || (lVar8 == 0)) goto LAB_02750800;
  lVar3 = 0xc;
  if (*(char *)(lVar8 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar8 == 0) goto LAB_02750800;
  uVar11 = (ulong)*(ushort *)(lVar8 + 8);
  *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_02750800;
  puVar12 = (uint *)(lVar3 + lVar8 + 4);
  while (puVar12[-1] != 0x54706054) {
    puVar12 = puVar12 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_02750800;
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = (ulong)*puVar12;
  }
  *(int *)(puVar7 + 0x10) = (int)uVar11;
  if (*puVar10 == 0) goto LAB_02750800;
  goto LAB_02750964;
}

