
void FUN_02750d70(long param_1,uint param_2,uint param_3)

{
  undefined2 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  char cVar15;
  int *piVar16;
  
  puVar4 = PTR_DAT_04bb6408;
  puVar3 = PTR_DAT_04bb6400;
  lVar9 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar9 + 0x1900) < 1) {
    if (*(long *)(lVar9 + 0x17f0) == 0) {
      return;
    }
    puVar7 = *(uint **)(*(long *)(lVar9 + 0x17f0) + 8);
    if (puVar7 == (uint *)0x0) {
      return;
    }
    if ((param_2 < *(uint *)(lVar9 + 0x1808)) &&
       (*(char *)(*(long *)(lVar9 + 0x1810) + (long)(int)param_2) == '\0')) {
      return;
    }
    if (*puVar7 <= param_2) {
      return;
    }
    if (puVar7[1] == 0) {
      return;
    }
    if ((ushort)puVar7[2] == 0) {
      return;
    }
    iVar11 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * param_2 + (uint)(ushort)puVar7[2] * 8 + iVar11) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(lVar9 + 0x1900) <= param_2) {
      return;
    }
    if (*(uint *)(lVar9 + 0x18f0) <= param_2) {
      param_2 = 0;
    }
    puVar7 = *(uint **)(*(long *)(lVar9 + 0x18f8) + (ulong)param_2 * 8);
  }
  if (puVar7 == (uint *)0x0) {
    return;
  }
  if (*puVar7 == 0) {
LAB_02750fa4:
    uVar14 = 0;
LAB_02750fa8:
    uVar6 = 0;
  }
  else {
    uVar8 = 0xffffffff;
    cVar15 = *PTR_DAT_04bb6400;
    do {
      if (cVar15 != '\0') {
        uVar12 = *(uint *)(puVar4 + 0x10);
        if (uVar12 == 0xffffffff) goto LAB_02750e00;
        uVar8 = *puVar7;
        if (uVar8 == 0) goto LAB_02750fa4;
LAB_02750ef8:
        uVar5 = *(uint *)puVar4;
        goto LAB_02750f10;
      }
      cVar15 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
LAB_02750e00:
      lVar9 = (long)puVar7 - (ulong)*puVar7;
      uVar12 = uVar8;
      if ((*puVar7 == 0) || (lVar9 == 0)) {
LAB_02750ef0:
        uVar8 = *puVar7;
        if (uVar8 != 0) goto LAB_02750ef8;
        goto LAB_02750fa4;
      }
      lVar2 = 0xc;
      if (*(char *)(lVar9 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      if (lVar2 + lVar9 == 0) goto LAB_02750ef0;
      uVar10 = (ulong)*(ushort *)(lVar9 + 8);
      *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
      if (uVar10 == 0) {
LAB_02750eec:
        uVar12 = 0xfffffffe;
        goto LAB_02750ef0;
      }
      piVar16 = (int *)(lVar2 + lVar9 + 4);
      while (piVar16[-1] != 0x54706054) {
        piVar16 = piVar16 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_02750eec;
      }
      iVar11 = 0;
      if (*piVar16 != -1) {
        iVar11 = *piVar16;
      }
      *(int *)(puVar4 + 0x10) = iVar11;
    } while (*puVar7 != 0);
    uVar14 = 0;
    uVar6 = 0;
  }
LAB_02750fac:
  uVar8 = param_3;
  if ((int)uVar14 <= (int)param_3) {
    uVar8 = uVar14;
  }
  if (0xfffe < uVar8) {
    uVar8 = 0xffff;
  }
  uVar10 = (ulong)uVar6;
  uVar1 = 0;
  if (-1 < (int)param_3) {
    uVar1 = (short)uVar8;
  }
  if (0x47 < uVar6) {
    uVar10 = 0;
  }
  *(undefined2 *)(param_1 + uVar10 * 2) = uVar1;
  return;
LAB_02750f10:
  do {
    if (-1 < (int)uVar5) {
      uVar14 = 0;
      if ((ushort *)((long)puVar7 + (ulong)uVar5) != (ushort *)0x0) {
        uVar14 = (uint)*(ushort *)((long)puVar7 + (ulong)uVar5);
      }
LAB_02750fe8:
      uVar8 = *puVar7;
      goto joined_r0x02750fec;
    }
    if (uVar5 != 0xffffffff) {
LAB_02750f90:
      uVar14 = 0;
      goto LAB_02750fe8;
    }
    lVar9 = (long)puVar7 - (ulong)uVar8;
    uVar14 = 0;
    if (lVar9 == 0) goto LAB_02750fe8;
    lVar2 = 0xc;
    if (*(char *)(lVar9 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar9 == 0) goto LAB_02750f90;
    uVar10 = (ulong)*(ushort *)(lVar9 + 8);
    *(undefined4 *)puVar4 = 0xfffffffe;
    uVar14 = 0;
    if (uVar10 == 0) goto LAB_02750fe8;
    puVar13 = (uint *)(lVar2 + lVar9 + 4);
    while (puVar13[-1] != 0x110b14c) {
      puVar13 = puVar13 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        uVar14 = 0;
        goto LAB_02750fe8;
      }
    }
    uVar14 = 0;
    uVar6 = 0;
    uVar5 = 0;
    if (*puVar13 != 0xffffffff) {
      uVar5 = *puVar13;
    }
    *(uint *)puVar4 = uVar5;
    uVar8 = *puVar7;
  } while (uVar8 != 0);
  goto LAB_02750fac;
joined_r0x02750fec:
  if (uVar8 == 0) goto LAB_02750fa8;
  if (uVar12 != 0xffffffff) {
LAB_0275107c:
    uVar8 = *puVar7;
joined_r0x02751114:
    if (uVar8 != 0) goto LAB_02751090;
    goto LAB_02750fa8;
  }
  lVar9 = (long)puVar7 - (ulong)*puVar7;
  if (*puVar7 == 0) {
LAB_0275110c:
    uVar12 = 0xffffffff;
    uVar8 = *puVar7;
    goto joined_r0x02751114;
  }
  uVar12 = 0xffffffff;
  if (lVar9 == 0) goto LAB_0275107c;
  lVar2 = 0xc;
  if (*(char *)(lVar9 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar9 == 0) goto LAB_0275110c;
  uVar10 = (ulong)*(ushort *)(lVar9 + 8);
  uVar12 = 0xfffffffe;
  *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_0275107c;
  puVar13 = (uint *)(lVar2 + lVar9 + 4);
  while (puVar13[-1] != 0x54706054) {
    puVar13 = puVar13 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) {
      uVar12 = 0xfffffffe;
      goto LAB_0275107c;
    }
  }
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = *puVar13;
  }
  *(uint *)(puVar4 + 0x10) = uVar12;
  uVar8 = *puVar7;
  goto joined_r0x02750fec;
LAB_02751090:
  if (-1 < (int)uVar12) {
    if ((ushort *)((long)puVar7 + (ulong)uVar12) != (ushort *)0x0) {
      uVar6 = (uint)*(ushort *)((long)puVar7 + (ulong)uVar12);
      goto LAB_02750fac;
    }
    goto LAB_02750fa8;
  }
  if (((uVar12 != 0xffffffff) || (puVar13 = (uint *)(ulong)*puVar7, *puVar7 == 0)) ||
     (puVar7 == puVar13)) goto LAB_02750fa8;
  lVar9 = 0xc;
  if (*(char *)((long)puVar7 + (10 - (long)puVar13)) != '\0') {
    lVar9 = 0x1c;
  }
  lVar9 = (long)puVar7 + (lVar9 - (long)puVar13);
  if (lVar9 == 0) goto LAB_02750fa8;
  uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar13));
  *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_02750fa8;
  puVar13 = (uint *)(lVar9 + 4);
  while (puVar13[-1] != 0x54706054) {
    puVar13 = puVar13 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_02750fa8;
  }
  uVar12 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar12 = *puVar13;
  }
  *(uint *)(puVar4 + 0x10) = uVar12;
  if (*puVar7 == 0) goto LAB_02750fa8;
  goto LAB_02751090;
}

