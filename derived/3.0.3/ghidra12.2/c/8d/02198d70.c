
void FUN_02198d70(long param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  ushort uVar7;
  uint *puVar8;
  char cVar9;
  uint uVar10;
  undefined1 *puVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  int *piVar17;
  uint *puVar18;
  
  puVar5 = PTR_DAT_04bb6380;
  puVar4 = PTR_DAT_04bb6378;
  lVar12 = *(long *)PTR_DAT_04bb2208;
  if ((lVar12 == 0) ||
     ((uVar13 = *(uint *)(lVar12 + 0x820), (int)uVar13 < 1 &&
      (((*(long *)(lVar12 + 0x710) == 0 ||
        (puVar8 = *(uint **)(*(long *)(lVar12 + 0x710) + 8), puVar8 == (uint *)0x0)) ||
       (uVar13 = *puVar8, uVar13 == 0)))))) {
    return;
  }
  uVar14 = 0;
LAB_02198e00:
  if (0 < (int)*(uint *)(lVar12 + 0x820)) {
    if (*(uint *)(lVar12 + 0x820) <= uVar14) goto LAB_02198df4;
    uVar1 = uVar14;
    if (*(uint *)(lVar12 + 0x810) <= uVar14) {
      uVar1 = 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar12 + 0x818) + (ulong)uVar1 * 8);
    if (puVar8 == (uint *)0x0) goto LAB_02198df4;
LAB_02198e2c:
    if (param_2 != 0) {
      if (param_2 == 2) {
        if (*puVar8 != 0) {
          cVar9 = *puVar4;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            }
            else {
              uVar1 = *(uint *)(puVar5 + 0x10);
              if (-1 < (int)uVar1) goto LAB_02198ffc;
              if (uVar1 != 0xffffffff) break;
            }
            lVar3 = (long)puVar8 - (ulong)*puVar8;
            if ((*puVar8 == 0) || (lVar3 == 0)) break;
            lVar2 = 0xc;
            if (*(char *)(lVar3 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            if (lVar2 + lVar3 == 0) break;
            uVar16 = (ulong)*(ushort *)(lVar3 + 8);
            *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
            if (uVar16 == 0) break;
            piVar17 = (int *)(lVar2 + lVar3 + 4);
            while (piVar17[-1] != -0x72bfe209) {
              piVar17 = piVar17 + 2;
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) goto LAB_02198df4;
            }
            iVar15 = 0;
            if (*piVar17 != -1) {
              iVar15 = *piVar17;
            }
            *(int *)(puVar5 + 0x10) = iVar15;
            if (*puVar8 == 0) break;
          } while( true );
        }
      }
      else if ((param_2 == 1) && (*puVar8 != 0)) {
        cVar9 = *puVar4;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          }
          else {
            uVar1 = *(uint *)(puVar5 + 0xc);
            if (-1 < (int)uVar1) goto LAB_02198ffc;
            if (uVar1 != 0xffffffff) break;
          }
          lVar3 = (long)puVar8 - (ulong)*puVar8;
          if ((*puVar8 == 0) || (lVar3 == 0)) break;
          lVar2 = 0xc;
          if (*(char *)(lVar3 + 10) != '\0') {
            lVar2 = 0x1c;
          }
          if (lVar2 + lVar3 == 0) break;
          uVar16 = (ulong)*(ushort *)(lVar3 + 8);
          *(undefined4 *)(puVar5 + 0xc) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar17 = (int *)(lVar2 + lVar3 + 4);
          while (piVar17[-1] != 0x5f77b61a) {
            piVar17 = piVar17 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_02198df4;
          }
          iVar15 = 0;
          if (*piVar17 != -1) {
            iVar15 = *piVar17;
          }
          *(int *)(puVar5 + 0xc) = iVar15;
          if (*puVar8 == 0) break;
        } while( true );
      }
      goto LAB_02198df4;
    }
    goto LAB_0219900c;
  }
  if (((((*(long *)(lVar12 + 0x710) != 0) &&
        (puVar8 = *(uint **)(*(long *)(lVar12 + 0x710) + 8), puVar8 != (uint *)0x0)) &&
       ((*(uint *)(lVar12 + 0x728) <= uVar14 ||
        (*(char *)(*(long *)(lVar12 + 0x730) + (long)(int)uVar14) != '\0')))) &&
      ((uVar14 < *puVar8 && (puVar8[1] != 0)))) && ((ushort)puVar8[2] != 0)) {
    iVar15 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar15 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar14 + (uint)(ushort)puVar8[2] * 8 + iVar15) +
                     (long)puVar8);
    if (puVar8 != (uint *)0x0) goto LAB_02198e2c;
  }
  goto LAB_02198df4;
LAB_02198ffc:
  if (((char *)((ulong)uVar1 + (long)puVar8) == (char *)0x0) ||
     (*(char *)((ulong)uVar1 + (long)puVar8) == '\0')) goto LAB_02198df4;
LAB_0219900c:
  if (*puVar8 != 0) {
    cVar9 = *puVar4;
    do {
      if (cVar9 != '\0') {
        uVar1 = *(uint *)(puVar5 + 8);
        if ((int)uVar1 < 0) {
          if (uVar1 == 0xffffffff) goto LAB_02199040;
LAB_021990bc:
          uVar10 = 0;
        }
        else {
          uVar10 = 0;
          if ((ushort *)((ulong)uVar1 + (long)puVar8) != (ushort *)0x0) {
            uVar10 = (uint)*(ushort *)((ulong)uVar1 + (long)puVar8);
          }
        }
LAB_021990d0:
        uVar1 = *puVar8;
        if (uVar1 == 0) goto LAB_02199148;
        uVar16 = (ulong)*(uint *)puVar5;
        goto LAB_021990dc;
      }
      cVar9 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
LAB_02199040:
      puVar18 = (uint *)(ulong)*puVar8;
      uVar10 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar18)) goto LAB_021990d0;
      lVar3 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar18)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar8 + (lVar3 - (long)puVar18);
      if (lVar3 == 0) goto LAB_021990bc;
      uVar16 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar18));
      *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
      uVar10 = 0;
      if (uVar16 == 0) goto LAB_021990d0;
      piVar17 = (int *)(lVar3 + 4);
      while (piVar17[-1] != 0x54706054) {
        piVar17 = piVar17 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar10 = 0;
          goto LAB_021990d0;
        }
      }
      iVar15 = 0;
      if (*piVar17 != -1) {
        iVar15 = *piVar17;
      }
      *(int *)(puVar5 + 8) = iVar15;
    } while (*puVar8 != 0);
  }
  uVar6 = 0;
LAB_02198dec:
  puVar11 = (undefined1 *)(param_1 + 0x818);
  goto LAB_02198df0;
LAB_021990dc:
  if (-1 < (int)uVar16) {
    uVar7 = 0;
    if ((ushort *)(uVar16 + (long)puVar8) != (ushort *)0x0) {
      uVar7 = *(ushort *)(uVar16 + (long)puVar8);
    }
    goto LAB_0219914c;
  }
  if ((uVar16 != 0xffffffff) || (lVar3 = (long)puVar8 - (ulong)uVar1, lVar3 == 0))
  goto LAB_02199148;
  lVar2 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar3 == 0) goto LAB_02199148;
  uVar16 = (ulong)*(ushort *)(lVar3 + 8);
  *(undefined4 *)puVar5 = 0xfffffffe;
  if (uVar16 == 0) goto LAB_02199148;
  puVar18 = (uint *)(lVar2 + lVar3 + 4);
  while (puVar18[-1] != 0x797f5754) {
    puVar18 = puVar18 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_02199148;
  }
  uVar16 = 0;
  if (*puVar18 != 0xffffffff) {
    uVar16 = (ulong)*puVar18;
  }
  *(int *)puVar5 = (int)uVar16;
  uVar1 = *puVar8;
  if (uVar1 == 0) goto LAB_02199148;
  goto LAB_021990dc;
LAB_02199148:
  uVar7 = 0;
LAB_0219914c:
  if (0xfe < uVar7) {
    uVar7 = 0xff;
  }
  uVar6 = (undefined1)uVar7;
  if (0x7f < uVar10) goto LAB_02198dec;
  puVar11 = (undefined1 *)(param_1 + 0x818) + uVar10;
LAB_02198df0:
  *puVar11 = uVar6;
LAB_02198df4:
  uVar14 = uVar14 + 1;
  if (uVar14 == uVar13) {
    return;
  }
  goto LAB_02198e00;
}

