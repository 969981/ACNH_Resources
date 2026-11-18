
ushort FUN_036ae7e0(long param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  ushort uVar9;
  int iVar10;
  uint *puVar11;
  ushort uVar12;
  ushort uVar13;
  uint *puVar14;
  char cVar15;
  ulong uVar16;
  uint uVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  puVar8 = PTR_DAT_04bc3980;
  puVar7 = PTR_DAT_04bc3978;
  uVar5 = (*param_2 & 0xffff) - (uint)*(ushort *)(param_1 + 0x7f8);
  if ((*(uint *)(param_1 + 0x7d8) <= uVar5) ||
     (puVar11 = *(uint **)(*(long *)(param_1 + 0x7e0) + (long)(int)uVar5 * 8),
     puVar11 == (uint *)0x0)) {
    return 0;
  }
  if (*puVar11 != 0) {
    cVar15 = *PTR_DAT_04bc3978;
    do {
      if (cVar15 != '\0') {
        uVar5 = *(uint *)(puVar8 + 0x18);
        if ((int)uVar5 < 0) {
          if (uVar5 == 0xffffffff) goto LAB_036ae880;
        }
        else if ((char *)((ulong)uVar5 + (long)puVar11) != (char *)0x0) {
          iVar19 = (int)*(char *)((ulong)uVar5 + (long)puVar11);
          goto LAB_036ae91c;
        }
        goto LAB_036ae918;
      }
      cVar15 = '\x01';
      *(undefined8 *)puVar8 = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
      *puVar7 = 1;
      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
LAB_036ae880:
      puVar14 = (uint *)(ulong)*puVar11;
      iVar19 = 0;
      if ((*puVar11 == 0) || (puVar11 == puVar14)) {
LAB_036ae91c:
        uVar5 = *puVar11;
        if (uVar5 == 0) goto LAB_036ae9a8;
        uVar17 = *(uint *)(puVar8 + 0x1c);
        goto LAB_036ae93c;
      }
      lVar6 = 0xc;
      if (*(char *)((long)puVar11 + (10 - (long)puVar14)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar11 + (lVar6 - (long)puVar14);
      if (lVar6 == 0) {
LAB_036ae918:
        iVar19 = 0;
        goto LAB_036ae91c;
      }
      uVar16 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar14));
      *(undefined4 *)(puVar8 + 0x18) = 0xfffffffe;
      if (uVar16 == 0) goto LAB_036ae918;
      piVar18 = (int *)(lVar6 + 4);
      while (piVar18[-1] != 0x21c5d786) {
        piVar18 = piVar18 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_036ae918;
      }
      iVar19 = 0;
      if (*piVar18 != -1) {
        iVar19 = *piVar18;
      }
      *(int *)(puVar8 + 0x18) = iVar19;
    } while (*puVar11 != 0);
  }
  iVar20 = 0;
  iVar19 = 0;
  goto LAB_036aea68;
LAB_036ae9e4:
  if (-1 < (int)uVar17) {
    if ((char *)((long)puVar11 + (ulong)uVar17) != (char *)0x0) {
      iVar21 = (int)*(char *)((long)puVar11 + (ulong)uVar17);
      goto LAB_036aea6c;
    }
    goto LAB_036aea68;
  }
  if ((uVar17 != 0xffffffff) || (lVar6 = (long)puVar11 - (ulong)uVar5, lVar6 == 0))
  goto LAB_036aea68;
  lVar3 = 0xc;
  if (*(char *)(lVar6 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar6 == 0) goto LAB_036aea68;
  uVar16 = (ulong)*(ushort *)(lVar6 + 8);
  *(undefined4 *)(puVar8 + 0x20) = 0xfffffffe;
  if (uVar16 == 0) goto LAB_036aea68;
  puVar14 = (uint *)(lVar3 + lVar6 + 4);
  while (puVar14[-1] != 0x8bcc1f0d) {
    puVar14 = puVar14 + 2;
    uVar16 = uVar16 - 1;
    if (uVar16 == 0) goto LAB_036aea68;
  }
  uVar17 = 0;
  if (*puVar14 != 0xffffffff) {
    uVar17 = *puVar14;
  }
  *(uint *)(puVar8 + 0x20) = uVar17;
  uVar5 = *puVar11;
  if (uVar5 == 0) goto LAB_036aea68;
  goto LAB_036ae9e4;
LAB_036ae93c:
  do {
    if (-1 < (int)uVar17) {
      if ((char *)((long)puVar11 + (ulong)uVar17) == (char *)0x0) goto LAB_036ae9c0;
      iVar20 = (int)*(char *)((long)puVar11 + (ulong)uVar17);
LAB_036ae9c4:
      uVar5 = *puVar11;
      if (uVar5 == 0) goto LAB_036aea68;
      uVar17 = *(uint *)(puVar8 + 0x20);
      goto LAB_036ae9e4;
    }
    if ((uVar17 != 0xffffffff) || (lVar6 = (long)puVar11 - (ulong)uVar5, lVar6 == 0)) {
LAB_036ae9c0:
      iVar20 = 0;
      goto LAB_036ae9c4;
    }
    lVar3 = 0xc;
    if (*(char *)(lVar6 + 10) != '\0') {
      lVar3 = 0x1c;
    }
    if (lVar3 + lVar6 == 0) goto LAB_036ae9c0;
    uVar16 = (ulong)*(ushort *)(lVar6 + 8);
    *(undefined4 *)(puVar8 + 0x1c) = 0xfffffffe;
    if (uVar16 == 0) goto LAB_036ae9c0;
    puVar14 = (uint *)(lVar3 + lVar6 + 4);
    while (puVar14[-1] != 0x9979b0e3) {
      puVar14 = puVar14 + 2;
      uVar16 = uVar16 - 1;
      if (uVar16 == 0) goto LAB_036ae9c0;
    }
    uVar17 = 0;
    if (*puVar14 != 0xffffffff) {
      uVar17 = *puVar14;
    }
    *(uint *)(puVar8 + 0x1c) = uVar17;
    uVar5 = *puVar11;
  } while (uVar5 != 0);
LAB_036ae9a8:
  iVar20 = 0;
LAB_036aea68:
  iVar21 = 0;
LAB_036aea6c:
  uVar5 = *puVar11;
  uVar12 = 0;
  if ((uVar5 != 0) && (puVar11 != (uint *)(ulong)uVar5)) {
    puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
    uVar12 = 0;
    if (*puVar14 != 0) {
      uVar5 = puVar14[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar14 + lVar6 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar6 != 0) {
          uVar17 = 0;
          if ((ulong)uVar5 != 0) {
            uVar17 = (uint)((ulong)((long)puVar11 - lVar6) / (ulong)uVar5);
          }
          if (*puVar14 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < DAT_05ab2768) &&
             (uVar12 = *(ushort *)(DAT_05ab2770 + (long)(int)uVar17 * 2), uVar12 < 3))
          goto LAB_036aeaf8;
        }
      }
      uVar12 = 0;
    }
  }
LAB_036aeaf8:
  uVar9 = 0;
  uVar5 = *puVar11;
  if ((uVar5 != 0) && (puVar11 != (uint *)(ulong)uVar5)) {
    puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
    if ((*puVar14 == 0) || ((uVar5 = puVar14[1], uVar5 == 0 || ((ulong)(ushort)puVar14[2] == 0)))) {
LAB_036aeb84:
      uVar9 = 0;
    }
    else {
      lVar6 = 0xc;
      if (*(char *)((long)puVar14 + 10) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar14 + lVar6 + (ulong)(ushort)puVar14[2] * 8;
      uVar9 = 0;
      if (lVar6 != 0) {
        uVar17 = 0;
        if ((ulong)uVar5 != 0) {
          uVar17 = (uint)((ulong)((long)puVar11 - lVar6) / (ulong)uVar5);
        }
        if (*puVar14 <= uVar17) {
          uVar17 = 0xffffffff;
        }
        if ((DAT_05ab2778 <= uVar17) ||
           (uVar9 = *(ushort *)(DAT_05ab2780 + (long)(int)uVar17 * 2), 2 < uVar9))
        goto LAB_036aeb84;
      }
    }
  }
  uVar13 = 0;
  uVar5 = *puVar11;
  if ((uVar5 != 0) && (puVar11 != (uint *)(ulong)uVar5)) {
    puVar14 = (uint *)((long)puVar11 - (long)(ulong)uVar5);
    uVar13 = 0;
    if (*puVar14 != 0) {
      uVar5 = puVar14[1];
      if ((uVar5 != 0) && ((ulong)(ushort)puVar14[2] != 0)) {
        lVar6 = 0xc;
        if (*(char *)((long)puVar14 + 10) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar14 + lVar6 + (ulong)(ushort)puVar14[2] * 8;
        if (lVar6 != 0) {
          uVar17 = 0;
          if ((ulong)uVar5 != 0) {
            uVar17 = (uint)((ulong)((long)puVar11 - lVar6) / (ulong)uVar5);
          }
          if (*puVar14 <= uVar17) {
            uVar17 = 0xffffffff;
          }
          if ((uVar17 < DAT_05ab2788) &&
             (uVar13 = *(ushort *)(DAT_05ab2790 + (long)(int)uVar17 * 2), uVar13 < 3))
          goto LAB_036aec18;
        }
      }
      uVar13 = 0;
    }
  }
LAB_036aec18:
  iVar10 = 0;
  if (uVar12 != 0) {
    iVar10 = iVar19;
  }
  iVar1 = 0;
  if (uVar9 != 0) {
    iVar1 = iVar20;
  }
  iVar2 = 0;
  if (uVar13 != 0) {
    iVar2 = iVar21;
  }
  uVar5 = iVar1 + iVar10 + iVar2;
  if (uVar5 == 0) {
    uVar9 = 0;
  }
  else {
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar17 = *puVar11 ^ *puVar11 << 0xb;
    uVar4 = puVar11[3];
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar17 = uVar17 >> 8 ^ uVar4 >> 0x13 ^ uVar17 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar17;
    iVar10 = (int)((ulong)uVar17 * (ulong)uVar5 >> 0x20);
    if (uVar12 == 0) {
      iVar19 = 0;
    }
    else if (iVar10 < iVar19) {
      return uVar12;
    }
    if (((uVar9 == 0) || (iVar19 = iVar19 + iVar20, iVar19 <= iVar10)) &&
       (uVar9 = uVar13, iVar19 + iVar21 <= iVar10 || uVar13 == 0)) {
      uVar9 = 0;
    }
  }
  return uVar9;
}

