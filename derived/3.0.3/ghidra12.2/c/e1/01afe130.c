
ushort FUN_01afe130(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *__s;
  uint *puVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  uint *puVar10;
  char cVar11;
  
  __s = PTR_DAT_04bbfe90;
  puVar5 = PTR_DAT_04bbfe88;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    return 0;
  }
  if (*puVar10 == 0) {
    return 0;
  }
  cVar11 = *PTR_DAT_04bbfe88;
  do {
    if (cVar11 == '\0') {
      cVar11 = '\x01';
      *puVar5 = 1;
      memset(__s,0xff,0x1ac);
    }
    else {
      uVar8 = *(uint *)(__s + 0x120);
      uVar9 = (ulong)uVar8;
      if (-1 < (int)uVar8) {
        if ((short *)(uVar9 + (long)puVar10) == (short *)0x0) {
          return 0;
        }
        if (*(short *)(uVar9 + (long)puVar10) == -1) {
          return 0;
        }
        puVar10 = *(uint **)(param_1 + 0x10);
        if ((puVar10 == (uint *)0x0) || (*puVar10 == 0)) goto LAB_01afe304;
        break;
      }
      if (uVar8 != 0xffffffff) {
        return 0;
      }
    }
    puVar6 = (uint *)(ulong)*puVar10;
    if (*puVar10 == 0) {
      return 0;
    }
    if (puVar10 == puVar6) {
      return 0;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + (lVar2 - (long)puVar6);
    if (lVar2 == 0) {
      return 0;
    }
    uVar9 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
    *(undefined4 *)(__s + 0x120) = 0xfffffffe;
    if (uVar9 == 0) {
      return 0;
    }
    piVar7 = (int *)(lVar2 + 4);
    while (piVar7[-1] != -0x34a14cc1) {
      piVar7 = piVar7 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) {
        return 0;
      }
    }
    iVar1 = 0;
    if (*piVar7 != -1) {
      iVar1 = *piVar7;
    }
    *(int *)(__s + 0x120) = iVar1;
    if (*puVar10 == 0) {
      return 0;
    }
  } while( true );
LAB_01afe270:
  if (-1 < (int)uVar9) {
    if ((ushort *)((long)puVar10 + uVar9) == (ushort *)0x0) {
LAB_01afe304:
      uVar8 = 0xffff;
    }
    else {
      uVar8 = (uint)*(ushort *)((long)puVar10 + uVar9);
    }
LAB_01afe308:
    uVar8 = uVar8 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
    if (((uVar8 < *(uint *)(DAT_0532a7c8 + 0x1d8)) &&
        (puVar10 = *(uint **)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar8 * 8),
        puVar10 != (uint *)0x0)) &&
       (uVar8 = *puVar10, uVar8 != 0 && puVar10 != (uint *)(ulong)uVar8)) {
      puVar6 = (uint *)((long)puVar10 - (long)(ulong)uVar8);
      if (((*puVar6 != 0) && (uVar8 = puVar6[1], uVar8 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + lVar2 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar8 != 0) {
            uVar3 = (uint)((ulong)((long)puVar10 - lVar2) / (ulong)uVar8);
          }
          if (*puVar6 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < *(uint *)PTR_DAT_04bc02f0) &&
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc02f0 + 8) + (long)(int)uVar3 * 2), uVar4 < 2
             )) {
            return uVar4;
          }
        }
      }
    }
    return 0;
  }
  if ((int)uVar9 != -1) goto LAB_01afe304;
  puVar6 = (uint *)(ulong)*puVar10;
  uVar8 = 0xffff;
  if ((*puVar10 == 0) || (puVar10 == puVar6)) goto LAB_01afe308;
  lVar2 = 0xc;
  if (*(char *)((long)puVar10 + (10 - (long)puVar6)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar10 + (lVar2 - (long)puVar6);
  if (lVar2 == 0) goto LAB_01afe304;
  uVar9 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar6));
  *(undefined4 *)(__s + 0x120) = 0xfffffffe;
  if (uVar9 == 0) goto LAB_01afe304;
  puVar6 = (uint *)(lVar2 + 4);
  while (puVar6[-1] != 0xcb5eb33f) {
    puVar6 = puVar6 + 2;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) goto LAB_01afe304;
  }
  uVar3 = 0;
  if (*puVar6 != 0xffffffff) {
    uVar3 = *puVar6;
  }
  uVar9 = (ulong)uVar3;
  uVar8 = 0xffff;
  *(uint *)(__s + 0x120) = uVar3;
  if (*puVar10 == 0) goto LAB_01afe308;
  goto LAB_01afe270;
}

