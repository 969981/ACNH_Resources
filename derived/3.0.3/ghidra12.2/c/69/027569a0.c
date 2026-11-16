
void FUN_027569a0(undefined1 *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  
  puVar5 = PTR_DAT_04bb6478;
  puVar4 = PTR_DAT_04bb6470;
  lVar16 = *(long *)PTR_DAT_04bb2208;
  uVar17 = *(uint *)(lVar16 + 0x2180);
  if (((int)uVar17 < 1) &&
     (((*(long *)(lVar16 + 0x2070) == 0 ||
       (puVar8 = *(uint **)(*(long *)(lVar16 + 0x2070) + 8), puVar8 == (uint *)0x0)) ||
      (uVar17 = *puVar8, uVar17 == 0)))) {
    return;
  }
  uVar18 = 0;
LAB_02756a1c:
  if (0 < (int)*(uint *)(lVar16 + 0x2180)) {
    if (*(uint *)(lVar16 + 0x2180) <= uVar18) goto LAB_02756a10;
    uVar12 = uVar18;
    if (*(uint *)(lVar16 + 0x2170) <= uVar18) {
      uVar12 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar16 + 0x2178) + (ulong)uVar12 * 8);
    if (puVar8 == (uint *)0x0) goto LAB_02756a10;
LAB_02756a48:
    if (*puVar8 == 0) {
LAB_02756b80:
      uVar12 = 0;
    }
    else {
      cVar9 = *puVar4;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar12 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar12) {
            if (((byte *)((ulong)uVar12 + (long)puVar8) == (byte *)0x0) ||
               (bVar2 = *(byte *)((ulong)uVar12 + (long)puVar8), uVar12 = (uint)bVar2, 4 < bVar2))
            goto LAB_02756b80;
            goto LAB_02756b84;
          }
          if (uVar12 != 0xffffffff) goto LAB_02756b80;
        }
        puVar13 = (uint *)(ulong)*puVar8;
        uVar12 = 0;
        if ((*puVar8 == 0) || (puVar8 == puVar13)) goto LAB_02756b84;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar13);
        if (lVar3 == 0) goto LAB_02756b80;
        uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        uVar12 = 0;
        if (uVar15 == 0) goto LAB_02756b84;
        piVar14 = (int *)(lVar3 + 4);
        while (piVar14[-1] != 0x5140e4b4) {
          piVar14 = piVar14 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            uVar12 = 0;
            goto LAB_02756b84;
          }
        }
        iVar19 = 0;
        if (*piVar14 != -1) {
          iVar19 = *piVar14;
        }
        *(int *)(puVar5 + 8) = iVar19;
      } while (*puVar8 != 0);
      uVar12 = 0;
    }
LAB_02756b84:
    if (1 < uVar12 - 2) {
      if (uVar12 == 1) {
        if (*param_2 != 0) goto LAB_02756bc0;
      }
      else if ((uVar12 == 4) && (0 < *param_2)) goto LAB_02756bc0;
      goto LAB_02756a10;
    }
LAB_02756bc0:
    uVar12 = *puVar8;
    if (uVar12 != 0) {
      cVar9 = *puVar4;
      do {
        puVar13 = (uint *)(ulong)uVar12;
        if (cVar9 != '\0') {
          uVar12 = *(uint *)puVar5;
          if (-1 < (int)uVar12) {
            uVar10 = 0;
            if ((ushort *)((ulong)uVar12 + (long)puVar8) != (ushort *)0x0) {
              uVar10 = (uint)*(ushort *)((ulong)uVar12 + (long)puVar8);
            }
            goto LAB_02756c98;
          }
          if (uVar12 == 0xffffffff) {
            uVar10 = 0;
            if (puVar13 != (uint *)0x0) goto LAB_02756c10;
            goto LAB_02756c98;
          }
LAB_02756c7c:
          uVar10 = 0;
          uVar12 = *puVar8;
          uVar6 = 0;
          if (uVar12 == 0) goto LAB_02756d18;
LAB_02756ca0:
          uVar10 = uVar6;
          uVar15 = (ulong)*(uint *)(puVar5 + 0x10);
          goto LAB_02756ca4;
        }
        cVar9 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        puVar13 = (uint *)(ulong)*puVar8;
        uVar10 = 0;
        if (puVar13 == (uint *)0x0) {
LAB_02756c98:
          uVar12 = *puVar8;
          uVar6 = uVar10;
          if (uVar12 != 0) goto LAB_02756ca0;
          goto LAB_02756d18;
        }
LAB_02756c10:
        uVar10 = 0;
        if (puVar8 == puVar13) goto LAB_02756c98;
        lVar3 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar13)) != '\0') {
          lVar3 = 0x1c;
        }
        lVar3 = (long)puVar8 + (lVar3 - (long)puVar13);
        if (lVar3 == 0) goto LAB_02756c7c;
        uVar15 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar13));
        *(undefined4 *)puVar5 = 0xfffffffe;
        uVar10 = 0;
        if (uVar15 == 0) goto LAB_02756c98;
        piVar14 = (int *)(lVar3 + 4);
        while (piVar14[-1] != 0x54706054) {
          piVar14 = piVar14 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) {
            uVar10 = 0;
            goto LAB_02756c98;
          }
        }
        iVar19 = 0;
        if (*piVar14 != -1) {
          iVar19 = *piVar14;
        }
        *(int *)puVar5 = iVar19;
        uVar12 = *puVar8;
      } while (uVar12 != 0);
    }
    uVar7 = 0;
    goto LAB_02756a04;
  }
  if (((((*(long *)(lVar16 + 0x2070) != 0) &&
        (puVar8 = *(uint **)(*(long *)(lVar16 + 0x2070) + 8), puVar8 != (uint *)0x0)) &&
       ((*(uint *)(lVar16 + 0x2088) <= uVar18 ||
        (*(char *)(*(long *)(lVar16 + 0x2090) + (long)(int)uVar18) != '\0')))) &&
      ((uVar18 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
    iVar19 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar19 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar18 + (uint)(ushort)puVar8[2] * 8 + iVar19) +
                     (long)puVar8);
    if (puVar8 != (uint *)0x0) goto LAB_02756a48;
  }
  goto LAB_02756a10;
LAB_02756ca4:
  if (-1 < (int)uVar15) {
    uVar7 = 0;
    if ((undefined1 *)(uVar15 + (long)puVar8) != (undefined1 *)0x0) {
      uVar7 = *(undefined1 *)(uVar15 + (long)puVar8);
    }
    goto LAB_02756d1c;
  }
  if ((uVar15 != 0xffffffff) || (lVar3 = (long)puVar8 - (ulong)uVar12, lVar3 == 0))
  goto LAB_02756d18;
  lVar1 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar3 == 0) goto LAB_02756d18;
  uVar15 = (ulong)*(ushort *)(lVar3 + 8);
  *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
  if (uVar15 == 0) goto LAB_02756d18;
  puVar13 = (uint *)(lVar1 + lVar3 + 4);
  while (puVar13[-1] != 0xd55938bd) {
    puVar13 = puVar13 + 2;
    uVar15 = uVar15 - 1;
    if (uVar15 == 0) goto LAB_02756d18;
  }
  uVar15 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar15 = (ulong)*puVar13;
  }
  *(int *)(puVar5 + 0x10) = (int)uVar15;
  uVar12 = *puVar8;
  if (uVar12 == 0) goto LAB_02756d18;
  goto LAB_02756ca4;
LAB_02756d18:
  uVar7 = 0;
LAB_02756d1c:
  if (uVar10 < 0x10) {
    puVar11 = param_1 + uVar10;
  }
  else {
LAB_02756a04:
    puVar11 = param_1;
  }
  *puVar11 = uVar7;
LAB_02756a10:
  uVar18 = uVar18 + 1;
  if (uVar18 == uVar17) {
    return;
  }
  goto LAB_02756a1c;
}

