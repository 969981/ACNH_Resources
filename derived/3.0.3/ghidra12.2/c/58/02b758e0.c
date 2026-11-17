
/* WARNING: Removing unreachable block (ram,0x02b75e24) */

void FUN_02b758e0(long param_1,uint param_2,ulong param_3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  short sVar14;
  uint *puVar15;
  char *pcVar16;
  undefined8 *puVar17;
  char cVar18;
  short sVar19;
  uint *puVar20;
  ulong uVar21;
  
  puVar8 = PTR_DAT_04bc4698;
  puVar7 = PTR_DAT_04bc4690;
  lVar13 = *(long *)PTR_DAT_04bb5008;
  if (param_2 != 0) {
    if ((int)*(uint *)(lVar13 + 0x1e0) < 1) {
      if ((((*(long *)(lVar13 + 0xd0) == 0) ||
           (puVar15 = *(uint **)(*(long *)(lVar13 + 0xd0) + 8), puVar15 == (uint *)0x0)) ||
          ((param_2 < *(uint *)(lVar13 + 0xe8) &&
           (*(char *)(*(long *)(lVar13 + 0xf0) + (long)(int)param_2) == '\0')))) ||
         (((*puVar15 <= param_2 || (puVar15[1] == 0)) || ((ushort)puVar15[2] == 0))))
      goto LAB_02b75a8c;
      iVar9 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        iVar9 = 0x1c;
      }
      puVar15 = (uint *)((ulong)(puVar15[1] * param_2 + (uint)(ushort)puVar15[2] * 8 + iVar9) +
                        (long)puVar15);
    }
    else {
      if (*(uint *)(lVar13 + 0x1e0) <= param_2) goto LAB_02b75a8c;
      if (*(uint *)(lVar13 + 0x1d0) <= param_2) {
        param_2 = 0;
      }
      puVar15 = *(uint **)(*(long *)(lVar13 + 0x1d8) + (ulong)param_2 * 8);
    }
    if ((puVar15 != (uint *)0x0) && (uVar11 = *puVar15, uVar11 != 0)) {
      cVar18 = *PTR_DAT_04bc4690;
      do {
        if (cVar18 == '\0') {
          cVar18 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar8 + 0x18) = 0xffffffff;
          uVar11 = *puVar15;
        }
        else {
          uVar3 = *(uint *)(puVar8 + 0x18);
          if (-1 < (int)uVar3) {
            sVar14 = 0;
            if ((short *)((ulong)uVar3 + (long)puVar15) != (short *)0x0) {
              sVar14 = *(short *)((ulong)uVar3 + (long)puVar15);
            }
            goto LAB_02b75a90;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar20 = (uint *)(ulong)uVar11;
        sVar14 = 0;
        if ((puVar20 == (uint *)0x0) || (sVar14 = 0, puVar15 == puVar20)) goto LAB_02b75a90;
        lVar6 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar20)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar15 + (lVar6 - (long)puVar20);
        if (lVar6 == 0) break;
        uVar21 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar20));
        *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
        sVar14 = 0;
        if (uVar21 == 0) goto LAB_02b75a90;
        piVar10 = (int *)(lVar6 + 4);
        while (piVar10[-1] != 0x54706054) {
          piVar10 = piVar10 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) {
            sVar14 = 0;
            goto LAB_02b75a90;
          }
        }
        sVar14 = 0;
        iVar9 = 0;
        if (*piVar10 != -1) {
          iVar9 = *piVar10;
        }
        *(int *)(puVar8 + 0x18) = iVar9;
        uVar11 = *puVar15;
        if (uVar11 == 0) goto LAB_02b75a90;
      } while( true );
    }
  }
LAB_02b75a8c:
  sVar14 = 0;
LAB_02b75a90:
  puVar8 = PTR_DAT_04bc4b48;
  puVar7 = PTR_DAT_04bc4b40;
  uVar1 = *(short *)(lVar13 + 0x1bf2) + 1;
  uVar11 = (uint)*(ushort *)(lVar13 + 0x1bf0);
  if (*(ushort *)(lVar13 + 0x1bf0) == uVar1) {
    return;
  }
  param_1 = param_1 + 0x98;
  pcVar16 = PTR_DAT_04bc4670;
  puVar17 = (undefined8 *)PTR_DAT_04bc4678;
LAB_02b75b2c:
  uVar3 = uVar11 & 0xffff;
  uVar11 = uVar3 - *(ushort *)(lVar13 + 0x1bf0);
  if (((uVar11 < *(uint *)(lVar13 + 0x1bd0)) &&
      (puVar15 = *(uint **)(*(long *)(lVar13 + 0x1bd8) + (long)(int)uVar11 * 8),
      puVar15 != (uint *)0x0)) || (puVar15 = (uint *)puVar7, (*puVar8 & 1) != 0)) {
    uVar11 = 0;
    if (*puVar15 != 0) goto LAB_02b75b64;
  }
  else {
    param_3 = param_3 & 0xffffffff;
    iVar9 = __cxa_guard_acquire(puVar8);
    if (iVar9 != 0) {
      *(undefined4 *)puVar7 = 0;
      __cxa_guard_release(puVar8);
    }
    pcVar16 = PTR_DAT_04bc4670;
    puVar17 = (undefined8 *)PTR_DAT_04bc4678;
    if (*(int *)puVar7 == 0) {
      uVar11 = 0;
    }
    else {
LAB_02b75b64:
      cVar18 = *pcVar16;
      do {
        if (cVar18 != '\0') {
          uVar12 = *(uint *)(puVar17 + 1);
          if ((int)uVar12 < 0) {
            if (uVar12 == 0xffffffff) goto LAB_02b75b90;
LAB_02b75c18:
            uVar11 = 0;
          }
          else {
            uVar11 = 0;
            if (((ushort *)((ulong)uVar12 + (long)puVar15) != (ushort *)0x0) &&
               (uVar4 = *(ushort *)((ulong)uVar12 + (long)puVar15), uVar11 = (uint)uVar4,
               0x1ff < uVar4)) {
              return;
            }
          }
LAB_02b75c34:
          uVar12 = *puVar15;
          sVar19 = 0;
          if (uVar12 == 0) goto LAB_02b75cd0;
          uVar21 = (ulong)*(uint *)((long)puVar17 + 4);
          goto LAB_02b75c40;
        }
        cVar18 = '\x01';
        *puVar17 = 0xffffffffffffffff;
        puVar17[1] = 0xffffffffffffffff;
        *pcVar16 = '\x01';
        *(undefined4 *)(puVar17 + 2) = 0xffffffff;
LAB_02b75b90:
        puVar20 = (uint *)(ulong)*puVar15;
        uVar11 = 0;
        if ((*puVar15 == 0) || (puVar15 == puVar20)) goto LAB_02b75c34;
        lVar6 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar20)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar15 + (lVar6 - (long)puVar20);
        if (lVar6 == 0) goto LAB_02b75c18;
        uVar21 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar20));
        *(undefined4 *)(puVar17 + 1) = 0xfffffffe;
        uVar11 = 0;
        if (uVar21 == 0) goto LAB_02b75c34;
        piVar10 = (int *)(lVar6 + 4);
        while (piVar10[-1] != 0x54706054) {
          piVar10 = piVar10 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) {
            uVar11 = 0;
            goto LAB_02b75c34;
          }
        }
        iVar9 = 0;
        if (*piVar10 != -1) {
          iVar9 = *piVar10;
        }
        *(int *)(puVar17 + 1) = iVar9;
        uVar11 = 0;
      } while (*puVar15 != 0);
    }
  }
LAB_02b75c10:
  sVar19 = 0;
  goto LAB_02b75cd0;
  while( true ) {
    if (uVar21 != 0xffffffff) goto LAB_02b75c10;
    lVar6 = (long)puVar15 - (ulong)uVar12;
    sVar19 = 0;
    if (lVar6 == 0) goto LAB_02b75cd0;
    lVar2 = 0xc;
    if (*(char *)(lVar6 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar6 == 0) goto LAB_02b75c10;
    uVar21 = (ulong)*(ushort *)(lVar6 + 8);
    *(undefined4 *)((long)puVar17 + 4) = 0xfffffffe;
    sVar19 = 0;
    if (uVar21 == 0) goto LAB_02b75cd0;
    puVar20 = (uint *)(lVar2 + lVar6 + 4);
    while (puVar20[-1] != 0xc1577d) {
      puVar20 = puVar20 + 2;
      uVar21 = uVar21 - 1;
      if (uVar21 == 0) {
        sVar19 = 0;
        goto LAB_02b75cd0;
      }
    }
    uVar21 = 0;
    if (*puVar20 != 0xffffffff) {
      uVar21 = (ulong)*puVar20;
    }
    *(int *)((long)puVar17 + 4) = (int)uVar21;
    uVar12 = *puVar15;
    if (uVar12 == 0) break;
LAB_02b75c40:
    if (-1 < (int)uVar21) {
      sVar19 = 0;
      if ((short *)(uVar21 + (long)puVar15) != (short *)0x0) {
        sVar19 = *(short *)(uVar21 + (long)puVar15);
      }
      goto LAB_02b75cd0;
    }
  }
  sVar19 = 0;
LAB_02b75cd0:
  if ((uVar11 < 0x200) && (sVar19 != sVar14)) {
    lVar6 = (ulong)(uVar11 >> 5) * 4;
    *(uint *)(param_1 + lVar6) =
         *(uint *)(param_1 + lVar6) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
  }
  if (((param_3 & 1) != 0) && (*puVar15 != 0)) {
    cVar18 = *pcVar16;
    do {
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        *puVar17 = 0xffffffffffffffff;
        puVar17[1] = 0xffffffffffffffff;
        *pcVar16 = '\x01';
        *(undefined4 *)(puVar17 + 2) = 0xffffffff;
      }
      else {
        uVar12 = *(uint *)((long)puVar17 + 0xc);
        if (-1 < (int)uVar12) {
          if ((((char *)((ulong)uVar12 + (long)puVar15) != (char *)0x0) && (uVar11 < 0x200)) &&
             (*(char *)((ulong)uVar12 + (long)puVar15) != '\0')) {
            lVar6 = (ulong)(uVar11 >> 5) * 4;
            *(uint *)(param_1 + lVar6) =
                 *(uint *)(param_1 + lVar6) & (1 << (ulong)(uVar11 & 0x1f) ^ 0xffffffffU);
          }
          break;
        }
        if (uVar12 != 0xffffffff) break;
      }
      lVar6 = (long)puVar15 - (ulong)*puVar15;
      if ((*puVar15 == 0) || (lVar6 == 0)) break;
      lVar2 = 0xc;
      if (*(char *)(lVar6 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar6 == 0) break;
      uVar21 = (ulong)*(ushort *)(lVar6 + 8);
      *(undefined4 *)((long)puVar17 + 0xc) = 0xfffffffe;
      if (uVar21 == 0) break;
      piVar10 = (int *)(lVar2 + lVar6 + 4);
      while (piVar10[-1] != 0x3440cdd7) {
        piVar10 = piVar10 + 2;
        uVar21 = uVar21 - 1;
        if (uVar21 == 0) goto LAB_02b75dd0;
      }
      iVar9 = 0;
      if (*piVar10 != -1) {
        iVar9 = *piVar10;
      }
      *(int *)((long)puVar17 + 0xc) = iVar9;
      if (*puVar15 == 0) break;
    } while( true );
  }
LAB_02b75dd0:
  uVar12 = uVar3;
  if (uVar3 <= *(ushort *)(lVar13 + 0x1bf2)) {
    uVar12 = (uint)*(ushort *)(lVar13 + 0x1bf2);
  }
  uVar11 = uVar3;
  do {
    while( true ) {
      if (uVar12 == uVar11) {
        uVar11 = uVar3 + 1;
        goto LAB_02b75b24;
      }
      uVar5 = (uVar11 + 1 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1bf0);
      if (uVar5 < *(uint *)(lVar13 + 0x1bd0)) break;
      uVar11 = uVar11 + 1;
    }
    uVar11 = uVar11 + 1;
  } while (*(long *)(*(long *)(lVar13 + 0x1bd8) + (long)(int)uVar5 * 8) == 0);
LAB_02b75b24:
  if ((uint)uVar1 == (uVar11 & 0xffff)) {
    return;
  }
  goto LAB_02b75b2c;
}

