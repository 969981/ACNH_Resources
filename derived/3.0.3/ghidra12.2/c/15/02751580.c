
undefined8 FUN_02751580(ushort *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  char cVar10;
  uint uVar11;
  uint *puVar12;
  ulong uVar13;
  int *piVar14;
  
  puVar6 = PTR_DAT_04bb6408;
  puVar5 = PTR_DAT_04bb6400;
  lVar8 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar8 + 0x1900) < 1) {
    if (*(long *)(lVar8 + 0x17f0) == 0) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(lVar8 + 0x17f0) + 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(lVar8 + 0x1808)) &&
       (*(char *)(*(long *)(lVar8 + 0x1810) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar7 <= param_2) {
      return 0;
    }
    if (puVar7[1] == 0) {
      return 0;
    }
    if ((ushort)puVar7[2] == 0) {
      return 0;
    }
    iVar9 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * param_2 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(lVar8 + 0x1900) <= param_2) {
      return 0;
    }
    if (*(uint *)(lVar8 + 0x18f0) <= param_2) {
      param_2 = 0;
    }
    puVar7 = *(uint **)(*(long *)(lVar8 + 0x18f8) + (ulong)param_2 * 8);
  }
  if (puVar7 == (uint *)0x0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    if (*puVar7 == 0) {
      return 0;
    }
    cVar10 = *PTR_DAT_04bb6400;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar6 = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
        *puVar5 = 1;
        *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar6 + 8);
        if (-1 < (int)uVar2) goto LAB_027517bc;
        if (uVar2 != 0xffffffff) {
          return 0;
        }
      }
      lVar8 = (long)puVar7 - (ulong)*puVar7;
      if (*puVar7 == 0) {
        return 0;
      }
      if (lVar8 == 0) {
        return 0;
      }
      lVar1 = 0xc;
      if (*(char *)(lVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar8 == 0) {
        return 0;
      }
      uVar13 = (ulong)*(ushort *)(lVar8 + 8);
      *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
      if (uVar13 == 0) {
        return 0;
      }
      piVar14 = (int *)(lVar1 + lVar8 + 4);
      while (piVar14[-1] != -0x332b3da1) {
        piVar14 = piVar14 + 2;
        uVar13 = uVar13 - 1;
        if (uVar13 == 0) {
          return 0;
        }
      }
      iVar9 = 0;
      if (*piVar14 != -1) {
        iVar9 = *piVar14;
      }
      *(int *)(puVar6 + 8) = iVar9;
      if (*puVar7 == 0) {
        return 0;
      }
    } while( true );
  }
  if (*puVar7 == 0) {
    return 0;
  }
  cVar10 = *PTR_DAT_04bb6400;
  do {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(uint *)(puVar6 + 0xc);
      if (-1 < (int)uVar2) break;
      if (uVar2 != 0xffffffff) {
        return 0;
      }
    }
    lVar8 = (long)puVar7 - (ulong)*puVar7;
    if (*puVar7 == 0) {
      return 0;
    }
    if (lVar8 == 0) {
      return 0;
    }
    lVar1 = 0xc;
    if (*(char *)(lVar8 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar8 == 0) {
      return 0;
    }
    uVar13 = (ulong)*(ushort *)(lVar8 + 8);
    *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
    if (uVar13 == 0) {
      return 0;
    }
    piVar14 = (int *)(lVar1 + lVar8 + 4);
    while (piVar14[-1] != -0x19ce88da) {
      piVar14 = piVar14 + 2;
      uVar13 = uVar13 - 1;
      if (uVar13 == 0) {
        return 0;
      }
    }
    iVar9 = 0;
    if (*piVar14 != -1) {
      iVar9 = *piVar14;
    }
    *(int *)(puVar6 + 0xc) = iVar9;
    if (*puVar7 == 0) {
      return 0;
    }
  } while( true );
LAB_027517bc:
  puVar5 = PTR_DAT_04bb6408;
  if (((ushort *)((ulong)uVar2 + (long)puVar7) != (ushort *)0x0) &&
     (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar7), uVar3 != 0)) {
    uVar2 = *puVar7;
    if (uVar2 != 0) {
      uVar11 = *(uint *)(PTR_DAT_04bb6408 + 0x10);
      while ((int)uVar11 < 0) {
        if ((uVar11 != 0xffffffff) || (lVar8 = (long)puVar7 - (ulong)uVar2, lVar8 == 0))
        goto LAB_02751880;
        lVar1 = 0xc;
        if (*(char *)(lVar8 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        if (lVar1 + lVar8 == 0) goto LAB_02751880;
        uVar13 = (ulong)*(ushort *)(lVar8 + 8);
        *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
        if (uVar13 == 0) goto LAB_02751880;
        puVar12 = (uint *)(lVar1 + lVar8 + 4);
        while (puVar12[-1] != 0x54706054) {
          puVar12 = puVar12 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_02751880;
        }
        uVar11 = 0;
        if (*puVar12 != 0xffffffff) {
          uVar11 = *puVar12;
        }
        *(uint *)(puVar5 + 0x10) = uVar11;
        uVar2 = *puVar7;
        if (uVar2 == 0) goto LAB_02751880;
      }
      if (((ushort *)((long)puVar7 + (ulong)uVar11) != (ushort *)0x0) &&
         (uVar4 = *(ushort *)((long)puVar7 + (ulong)uVar11), uVar4 < 0x48)) {
        param_1 = param_1 + uVar4;
      }
    }
LAB_02751880:
    if (uVar3 <= *param_1) {
      return 1;
    }
  }
  return 0;
}

