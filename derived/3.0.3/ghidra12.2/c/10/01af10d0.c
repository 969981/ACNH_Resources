
int FUN_01af10d0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  int iVar4;
  ulong uVar5;
  ushort uVar6;
  uint uVar7;
  int *piVar8;
  uint *puVar9;
  uint *puVar10;
  char cVar11;
  
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    iVar4 = 0;
LAB_01af1290:
    uVar6 = 0xbc;
  }
  else {
    iVar4 = 0;
    if (*puVar10 == 0) goto LAB_01af1288;
    cVar11 = *PTR_DAT_04bbfe88;
    do {
      if (cVar11 != '\0') {
        uVar7 = *(uint *)(__s + 0xec);
        if ((int)uVar7 < 0) {
          if (uVar7 == 0xffffffff) goto LAB_01af1168;
LAB_01af11e4:
          iVar4 = 0;
        }
        else {
          iVar4 = 0;
          if ((int *)((ulong)uVar7 + (long)puVar10) != (int *)0x0) {
            iVar4 = *(int *)((ulong)uVar7 + (long)puVar10);
          }
        }
        goto LAB_01af11f8;
      }
      cVar11 = '\x01';
      *puVar3 = 1;
      memset(__s,0xff,0x1ac);
LAB_01af1168:
      puVar9 = (uint *)(ulong)*puVar10;
      iVar4 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar9)) goto LAB_01af11f8;
      lVar1 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar9)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar10 + (lVar1 - (long)puVar9);
      if (lVar1 == 0) goto LAB_01af11e4;
      uVar5 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar9));
      *(undefined4 *)(__s + 0xec) = 0xfffffffe;
      iVar4 = 0;
      if (uVar5 == 0) goto LAB_01af11f8;
      piVar8 = (int *)(lVar1 + 4);
      while (piVar8[-1] != 0x718b024d) {
        piVar8 = piVar8 + 2;
        uVar5 = uVar5 - 1;
        if (uVar5 == 0) {
          iVar4 = 0;
          goto LAB_01af11f8;
        }
      }
      iVar4 = 0;
      if (*piVar8 != -1) {
        iVar4 = *piVar8;
      }
      *(int *)(__s + 0xec) = iVar4;
    } while (*puVar10 != 0);
    iVar4 = 0;
LAB_01af11f8:
    puVar10 = *(uint **)(param_1 + 0x10);
    if (puVar10 == (uint *)0x0) goto LAB_01af1290;
    uVar7 = *puVar10;
    uVar6 = 0;
    if ((uVar7 != 0) && (puVar10 != (uint *)(ulong)uVar7)) {
      puVar9 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
      uVar6 = 0;
      if (*puVar9 != 0) {
        uVar7 = puVar9[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar6 < 0xbd)) goto LAB_01af1294;
          }
        }
LAB_01af1288:
        uVar6 = 0;
      }
    }
  }
LAB_01af1294:
  if ((uVar6 & 0xfffd) == 0xa4) {
    return 0x1374;
  }
  if (puVar10 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar2 = *puVar10;
    uVar7 = 0;
    if ((uVar2 != 0) && (puVar10 != (uint *)(ulong)uVar2)) {
      puVar9 = (uint *)((long)puVar10 - (long)(ulong)uVar2);
      uVar7 = 0;
      if (*puVar9 != 0) {
        uVar7 = puVar9[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar9[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar9 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar7 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar7);
            }
            if (*puVar9 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar7 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar7 < 0xbd)) goto LAB_01af1340;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_01af1340:
  if ((uVar7 - 0xa5 & 0xfffffffd) == 0) {
    return 0x1374;
  }
  if (iVar4 == 0) {
    return 0;
  }
  return ((int)((double)iVar4 * 1.5) / 10) * 10;
}

