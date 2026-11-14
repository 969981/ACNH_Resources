
uint FUN_01ae94f0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  ushort uVar10;
  int iVar11;
  uint *puVar12;
  char cVar13;
  ulong uVar14;
  int *piVar15;
  
  puVar5 = PTR_DAT_04bbfeb8;
  puVar4 = PTR_DAT_04bbfeb0;
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar8 = 0xbc;
  }
  else {
    uVar8 = *puVar9;
    if (uVar8 != 0 && puVar9 != (uint *)(ulong)uVar8) {
      puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar8);
      if (((*puVar12 != 0) && (uVar8 = puVar12[1], uVar8 != 0)) && ((ulong)(ushort)puVar12[2] != 0))
      {
        lVar2 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar12 + lVar2 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar2 != 0) {
          uVar7 = 0;
          if ((ulong)uVar8 != 0) {
            uVar7 = (uint)((ulong)((long)puVar9 - lVar2) / (ulong)uVar8);
          }
          if (*puVar12 <= uVar7) {
            uVar7 = 0xffffffff;
          }
          if ((uVar7 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar7 * 2),
             uVar8 = (uint)uVar10, uVar10 < 0xbd)) goto LAB_01ae9588;
        }
      }
    }
    uVar8 = 0;
  }
LAB_01ae9588:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) != 0) &&
         (puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar9 != (uint *)0x0)) &&
        ((*(uint *)(DAT_0532a778 + 200) <= uVar8 ||
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
       (((uVar8 < *puVar9 && (puVar9[1] != 0)) && ((ushort)puVar9[2] != 0)))) {
      iVar11 = 0xc;
      if (*(char *)((long)puVar9 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar9 = (uint *)((ulong)(puVar9[1] * uVar8 + (uint)(ushort)puVar9[2] * 8 + iVar11) +
                       (long)puVar9);
      goto joined_r0x01ae9724;
    }
  }
  else if (uVar8 < *(uint *)(DAT_0532a778 + 0x1c0)) {
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar8) {
      uVar8 = 0;
    }
    puVar9 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x01ae9724:
    if ((puVar9 != (uint *)0x0) && (*puVar9 != 0)) {
      cVar13 = *PTR_DAT_04bbfeb0;
      do {
        if (cVar13 == '\0') {
          cVar13 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x78) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        }
        else {
          uVar8 = *(uint *)(puVar5 + 0x2c);
          if (-1 < (int)uVar8) {
            if (((char *)((ulong)uVar8 + (long)puVar9) == (char *)0x0) ||
               (*(char *)((ulong)uVar8 + (long)puVar9) == '\0')) break;
            iVar11 = (int)(long)((float)(*(byte *)(param_1 + 10) & 3) * 90.0 * 11930465.0);
            goto LAB_01ae972c;
          }
          if (uVar8 != 0xffffffff) break;
        }
        puVar12 = (uint *)(ulong)*puVar9;
        iVar11 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar12)) goto LAB_01ae972c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar12)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar12);
        if (lVar2 == 0) break;
        uVar14 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar12));
        *(undefined4 *)(puVar5 + 0x2c) = 0xfffffffe;
        iVar11 = 0;
        if (uVar14 == 0) goto LAB_01ae972c;
        piVar15 = (int *)(lVar2 + 4);
        while (piVar15[-1] != -0x6f43f7ab) {
          piVar15 = piVar15 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            iVar11 = 0;
            goto LAB_01ae972c;
          }
        }
        iVar11 = 0;
        iVar1 = 0;
        if (*piVar15 != -1) {
          iVar1 = *piVar15;
        }
        *(int *)(puVar5 + 0x2c) = iVar1;
        if (*puVar9 == 0) goto LAB_01ae972c;
      } while( true );
    }
  }
  iVar11 = 0;
LAB_01ae972c:
  uVar8 = (iVar11 - (int)(long)((float)param_2 * 90.0 * 11930465.0)) + 0x20000000U >> 0x1e;
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 != (uint *)0x0) {
    uVar7 = *puVar9;
    uVar10 = 0;
    if ((uVar7 == 0) || (puVar9 == (uint *)(ulong)uVar7)) goto LAB_01ae97f8;
    puVar12 = (uint *)((long)puVar9 - (long)(ulong)uVar7);
    uVar10 = 0;
    if (*puVar12 == 0) goto LAB_01ae97f8;
    uVar7 = puVar12[1];
    if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar12 + lVar2 + (ulong)(ushort)puVar12[2] * 8;
      if (lVar2 != 0) {
        uVar3 = 0;
        if ((ulong)uVar7 != 0) {
          uVar3 = (uint)((ulong)((long)puVar9 - lVar2) / (ulong)uVar7);
        }
        if (*puVar12 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc0048) &&
           (uVar10 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar3 * 2),
           uVar10 < 0x52)) goto LAB_01ae97f8;
      }
    }
  }
  uVar10 = 0;
LAB_01ae97f8:
  uVar7 = 1;
  switch(uVar10) {
  case 1:
  case 7:
  case 8:
    bVar6 = uVar8 == 0;
    break;
  case 2:
  case 9:
    if (3 < uVar8) {
      return 0;
    }
    uVar7 = 0xbU >> (ulong)uVar8 & 1;
  case 3:
    return uVar7;
  case 4:
    bVar6 = true;
    if (uVar8 != 0) {
      bVar6 = uVar8 == 3;
    }
    break;
  case 5:
  case 6:
    bVar6 = (uVar8 & 0xfffffffd) == 0;
    break;
  default:
    return 0;
  }
  return (uint)bVar6;
}

