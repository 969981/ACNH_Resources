
undefined8 FUN_0343d1f0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *__s;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  int *piVar11;
  long lVar12;
  uint *puVar13;
  char cVar14;
  uint *puVar15;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *param_1;
  uStack_6c = param_1[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar6 == 0) {
LAB_0343d2bc:
    puVar15 = (uint *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0343d2bc;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_1);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar7) goto LAB_0343d2bc;
    puVar15 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
  }
  local_88 = *param_2;
  uStack_84 = param_2[1];
  lVar12 = *(long *)puVar6;
  local_80 = 0;
  uVar7 = FUN_0277d6c4(&local_88);
  if (*(long *)puVar6 == 0) {
LAB_0343d350:
    puVar13 = (uint *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((*(uint *)(lVar12 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0343d350;
    lVar12 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_2);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar7) goto LAB_0343d350;
    puVar13 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8);
  }
  __s = PTR_DAT_04bbfe90;
  puVar6 = PTR_DAT_04bbfe88;
  if (puVar15 == (uint *)0x0) {
    uVar7 = 0xbc;
  }
  else {
    uVar9 = (ulong)*puVar15;
    puVar5 = (uint *)((long)puVar15 - uVar9);
    if ((*puVar15 != 0) && (puVar5 != (uint *)0x0)) {
      if (((*puVar5 != 0) && (uVar7 = puVar5[1], uVar7 != 0)) && ((ulong)(ushort)puVar5[2] != 0)) {
        lVar12 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar5 + lVar12 + (ulong)(ushort)puVar5[2] * 8;
        if (lVar12 != 0) {
          uVar10 = 0;
          if ((ulong)uVar7 != 0) {
            uVar10 = (uint)((ulong)((long)puVar15 - lVar12) / (ulong)uVar7);
          }
          if (*puVar5 <= uVar10) {
            uVar10 = 0xffffffff;
          }
          if ((uVar10 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar10 * 2),
             uVar10 = (uint)uVar4, uVar4 < 0xbd)) goto LAB_0343d40c;
        }
      }
      uVar10 = 0;
LAB_0343d40c:
      uVar7 = uVar10;
      cVar14 = *PTR_DAT_04bbfe88;
      do {
        if (cVar14 == '\0') {
          cVar14 = '\x01';
          *puVar6 = 1;
          memset(__s,0xff,0x1ac);
          uVar9 = (ulong)*puVar15;
          if (uVar9 == 0) goto LAB_0343d4e0;
        }
        else {
          uVar10 = *(uint *)(__s + 0x128);
          if (-1 < (int)uVar10) {
            if ((((ushort *)((ulong)uVar10 + (long)puVar15) != (ushort *)0x0) &&
                (uVar10 = *(ushort *)((ulong)uVar10 + (long)puVar15) - 0x2f3, uVar10 < 6)) &&
               ((0x3dU >> (ulong)(uVar10 & 0x1f) & 1) != 0)) {
              uVar7 = *(uint *)(&DAT_0418eb78 + (long)(short)uVar10 * 4);
            }
            goto LAB_0343d4e0;
          }
          if ((uVar10 != 0xffffffff) || (uVar9 == 0)) goto LAB_0343d4e0;
        }
        lVar12 = (long)puVar15 - uVar9;
        if (lVar12 == 0) goto LAB_0343d4e0;
        lVar2 = 0xc;
        if (*(char *)(lVar12 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        if (lVar2 + lVar12 == 0) goto LAB_0343d4e0;
        uVar9 = (ulong)*(ushort *)(lVar12 + 8);
        *(undefined4 *)(__s + 0x128) = 0xfffffffe;
        if (uVar9 == 0) goto LAB_0343d4e0;
        piVar11 = (int *)(lVar2 + lVar12 + 4);
        while (piVar11[-1] != 0x54706054) {
          piVar11 = piVar11 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_0343d4e0;
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(__s + 0x128) = iVar1;
        uVar9 = (ulong)*puVar15;
        if (*puVar15 == 0) goto LAB_0343d4e0;
      } while( true );
    }
    uVar7 = 0;
    uVar10 = 0;
    if (uVar9 != 0) goto LAB_0343d40c;
  }
LAB_0343d4e0:
  if (puVar13 == (uint *)0x0) {
    uVar10 = 0xbc;
LAB_0343d6c8:
    if (uVar10 <= uVar7 && uVar7 != uVar10) {
      uVar8 = 1;
    }
    else {
      if (uVar10 <= uVar7) {
        uVar8 = FUN_01a4e630(param_1,param_2);
        return uVar8;
      }
      uVar8 = 0xffffffff;
    }
    return uVar8;
  }
  uVar9 = (ulong)*puVar13;
  puVar15 = (uint *)((long)puVar13 - uVar9);
  if ((*puVar13 == 0) || (puVar15 == (uint *)0x0)) {
    uVar10 = 0;
    if (uVar9 == 0) goto LAB_0343d6c8;
  }
  else {
    if (((*puVar15 != 0) && (uVar10 = puVar15[1], uVar10 != 0)) && ((ulong)(ushort)puVar15[2] != 0))
    {
      lVar12 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar15 + lVar12 + (ulong)(ushort)puVar15[2] * 8;
      if (lVar12 != 0) {
        uVar3 = 0;
        if ((ulong)uVar10 != 0) {
          uVar3 = (uint)((ulong)((long)puVar13 - lVar12) / (ulong)uVar10);
        }
        if (*puVar15 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((uVar3 < *(uint *)PTR_DAT_04bc00c8) &&
           (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar3 * 2),
           uVar10 = (uint)uVar4, uVar4 < 0xbd)) goto LAB_0343d584;
      }
    }
    uVar10 = 0;
  }
LAB_0343d584:
  cVar14 = *puVar6;
  do {
    if (cVar14 == '\0') {
      cVar14 = '\x01';
      *puVar6 = 1;
      memset(__s,0xff,0x1ac);
      uVar9 = (ulong)*puVar13;
    }
    else {
      uVar3 = *(uint *)(__s + 0x128);
      if (-1 < (int)uVar3) {
        if ((((ushort *)((ulong)uVar3 + (long)puVar13) != (ushort *)0x0) &&
            (uVar3 = *(ushort *)((ulong)uVar3 + (long)puVar13) - 0x2f3, uVar3 < 6)) &&
           ((0x3dU >> (ulong)(uVar3 & 0x1f) & 1) != 0)) {
          uVar10 = *(uint *)(&DAT_0418eb78 + (long)(short)uVar3 * 4);
        }
        goto LAB_0343d6c8;
      }
      if (uVar3 != 0xffffffff) goto LAB_0343d6c8;
    }
    if ((uVar9 == 0) || (lVar12 = (long)puVar13 - uVar9, lVar12 == 0)) goto LAB_0343d6c8;
    lVar2 = 0xc;
    if (*(char *)(lVar12 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar12 == 0) goto LAB_0343d6c8;
    uVar9 = (ulong)*(ushort *)(lVar12 + 8);
    *(undefined4 *)(__s + 0x128) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_0343d6c8;
    piVar11 = (int *)(lVar2 + lVar12 + 4);
    while (piVar11[-1] != 0x54706054) {
      piVar11 = piVar11 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_0343d6c8;
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(__s + 0x128) = iVar1;
    uVar9 = (ulong)*puVar13;
    if (*puVar13 == 0) goto LAB_0343d6c8;
  } while( true );
}

