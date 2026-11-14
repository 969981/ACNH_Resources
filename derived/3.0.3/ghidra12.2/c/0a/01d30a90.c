
undefined8 FUN_01d30a90(undefined8 *param_1,undefined4 *param_2,uint *param_3,ushort param_4)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  undefined8 uVar14;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar4 = PTR_DAT_04bc0678;
  puVar3 = PTR_DAT_04bc0670;
  if (499 < param_4) {
    return 0;
  }
  lVar8 = *(long *)*param_1;
  uVar2 = *(ushort *)(lVar8 + (ulong)param_4 * 2 + 0x620);
  if ((int)*(uint *)(lVar8 + 0x1c0) < 1) {
    if (*(long *)(lVar8 + 0xb0) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar8 + 0xb0) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    uVar5 = (uint)uVar2;
    if ((uVar5 < *(uint *)(lVar8 + 200)) &&
       (*(char *)(*(long *)(lVar8 + 0xd0) + (ulong)uVar5) == '\0')) {
      return 0;
    }
    if (*puVar6 <= uVar5) {
      return 0;
    }
    if (puVar6[1] == 0) {
      return 0;
    }
    if ((ushort)puVar6[2] == 0) {
      return 0;
    }
    iVar7 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar5 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar8 + 0x1c0) <= (uint)uVar2) {
      return 0;
    }
    uVar5 = (uint)uVar2;
    if (*(uint *)(lVar8 + 0x1b0) <= uVar5) {
      uVar5 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar8 + 0x1b8) + (ulong)uVar5 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if (*puVar6 != 0) {
    cVar9 = *PTR_DAT_04bc0670;
    do {
      if (cVar9 != '\0') {
        uVar5 = *(uint *)(puVar4 + 0x44);
        if ((int)uVar5 < 0) {
          if (uVar5 == 0xffffffff) goto LAB_01d30b60;
        }
        else if (((char *)((ulong)uVar5 + (long)puVar6) != (char *)0x0) &&
                (*(char *)((ulong)uVar5 + (long)puVar6) != '\0')) {
          uVar5 = *puVar6;
          uVar14 = *(undefined8 *)param_1[1];
          if (uVar5 == 0) goto LAB_01d30d08;
          uVar11 = *(uint *)(puVar4 + 0x48);
          goto LAB_01d30c9c;
        }
LAB_01d30e3c:
        uVar5 = *puVar6;
        uVar14 = *(undefined8 *)param_1[2];
        if (uVar5 == 0) goto LAB_01d30ed4;
        uVar11 = *(uint *)(puVar4 + 0x48);
        goto LAB_01d30e64;
      }
      cVar9 = '\x01';
      *(undefined8 *)puVar4 = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
      *puVar3 = 1;
      *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
LAB_01d30b60:
      lVar8 = (long)puVar6 - (ulong)*puVar6;
      if ((*puVar6 == 0) || (lVar8 == 0)) goto LAB_01d30e3c;
      lVar1 = 0xc;
      if (*(char *)(lVar8 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar8 == 0) goto LAB_01d30e3c;
      uVar10 = (ulong)*(ushort *)(lVar8 + 8);
      *(undefined4 *)(puVar4 + 0x44) = 0xfffffffe;
      if (uVar10 == 0) goto LAB_01d30e3c;
      piVar13 = (int *)(lVar1 + lVar8 + 4);
      while (piVar13[-1] != -0x36872a92) {
        piVar13 = piVar13 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_01d30e3c;
      }
      iVar7 = 0;
      if (*piVar13 != -1) {
        iVar7 = *piVar13;
      }
      *(int *)(puVar4 + 0x44) = iVar7;
    } while (*puVar6 != 0);
  }
  lVar8 = 0;
  uVar14 = *(undefined8 *)param_1[2];
LAB_01d30ed8:
  lVar1 = *(long *)PTR_PTR_04bc0668;
  if (lVar8 != 0) {
    lVar1 = lVar8;
  }
  local_34 = FUN_006bd550(lVar1,0);
  puVar6 = (uint *)FUN_0079e4d0(uVar14,&local_34);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  *param_2 = 2;
  puVar4 = PTR_DAT_04bb40a8;
  puVar3 = PTR_DAT_04bb40a0;
  if (*puVar6 != 0) {
    cVar9 = *PTR_DAT_04bb40a0;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar4 + 0x40);
        if (-1 < (int)uVar5) goto LAB_01d31000;
        if (uVar5 != 0xffffffff) goto LAB_01d31010;
      }
      puVar12 = (uint *)(ulong)*puVar6;
      uVar5 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar12)) goto LAB_01d31014;
      lVar8 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
      if (lVar8 == 0) goto LAB_01d31010;
      uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
      uVar5 = 0;
      if (uVar10 == 0) goto LAB_01d31014;
      piVar13 = (int *)(lVar8 + 4);
      while (piVar13[-1] != 0x54706054) {
        piVar13 = piVar13 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) {
          uVar5 = 0;
          goto LAB_01d31014;
        }
      }
      iVar7 = 0;
      if (*piVar13 != -1) {
        iVar7 = *piVar13;
      }
      *(int *)(puVar4 + 0x40) = iVar7;
    } while (*puVar6 != 0);
    uVar5 = 0;
    goto LAB_01d31014;
  }
  goto LAB_01d31010;
LAB_01d30c9c:
  if (-1 < (int)uVar11) {
    lVar8 = (long)puVar6 + (ulong)uVar11;
    goto LAB_01d30d0c;
  }
  if ((uVar11 != 0xffffffff) || (lVar8 = (long)puVar6 - (ulong)uVar5, lVar8 == 0))
  goto LAB_01d30d08;
  lVar1 = 0xc;
  if (*(char *)(lVar8 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar8 == 0) goto LAB_01d30d08;
  uVar10 = (ulong)*(ushort *)(lVar8 + 8);
  *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_01d30d08;
  puVar12 = (uint *)(lVar1 + lVar8 + 4);
  while (puVar12[-1] != 0x34c8eed5) {
    puVar12 = puVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_01d30d08;
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = *puVar12;
  }
  *(uint *)(puVar4 + 0x48) = uVar11;
  uVar5 = *puVar6;
  if (uVar5 == 0) goto LAB_01d30d08;
  goto LAB_01d30c9c;
LAB_01d30e64:
  if (-1 < (int)uVar11) {
    lVar8 = (long)puVar6 + (ulong)uVar11;
    goto LAB_01d30ed8;
  }
  if ((uVar11 != 0xffffffff) || (lVar8 = (long)puVar6 - (ulong)uVar5, lVar8 == 0))
  goto LAB_01d30ed4;
  lVar1 = 0xc;
  if (*(char *)(lVar8 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar8 == 0) goto LAB_01d30ed4;
  uVar10 = (ulong)*(ushort *)(lVar8 + 8);
  *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_01d30ed4;
  puVar12 = (uint *)(lVar1 + lVar8 + 4);
  while (puVar12[-1] != 0x34c8eed5) {
    puVar12 = puVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_01d30ed4;
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = *puVar12;
  }
  *(uint *)(puVar4 + 0x48) = uVar11;
  uVar5 = *puVar6;
  if (uVar5 == 0) goto LAB_01d30ed4;
  goto LAB_01d30e64;
LAB_01d30ed4:
  lVar8 = 0;
  goto LAB_01d30ed8;
LAB_01d31000:
  if ((ushort *)((ulong)uVar5 + (long)puVar6) != (ushort *)0x0) {
    uVar5 = (uint)*(ushort *)((ulong)uVar5 + (long)puVar6);
    goto LAB_01d31014;
  }
  goto LAB_01d31010;
LAB_01d30d08:
  lVar8 = 0;
LAB_01d30d0c:
  lVar1 = *(long *)PTR_PTR_04bc0668;
  if (lVar8 != 0) {
    lVar1 = lVar8;
  }
  local_38 = FUN_006bd550(lVar1,0);
  puVar6 = (uint *)FUN_0079e770(uVar14,&local_38);
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  *param_2 = 1;
  puVar4 = PTR_DAT_04bb40b8;
  puVar3 = PTR_DAT_04bb40b0;
  if (*puVar6 != 0) {
    cVar9 = *PTR_DAT_04bb40b0;
    while( true ) {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0xa0) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar5 = *(uint *)(puVar4 + 0x58);
        if (-1 < (int)uVar5) goto LAB_01d31000;
        if (uVar5 != 0xffffffff) goto LAB_01d31010;
      }
      puVar12 = (uint *)(ulong)*puVar6;
      uVar5 = 0;
      if ((*puVar6 == 0) || (puVar6 == puVar12)) break;
      lVar8 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar12)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar6 + (lVar8 - (long)puVar12);
      if (lVar8 == 0) goto LAB_01d31010;
      uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 0x58) = 0xfffffffe;
      if (uVar10 == 0) goto LAB_01d31010;
      piVar13 = (int *)(lVar8 + 4);
      while (piVar13[-1] != 0x54706054) {
        uVar5 = 0;
        piVar13 = piVar13 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_01d31014;
      }
      uVar5 = 0;
      iVar7 = 0;
      if (*piVar13 != -1) {
        iVar7 = *piVar13;
      }
      *(int *)(puVar4 + 0x58) = iVar7;
      if (*puVar6 == 0) break;
    }
    goto LAB_01d31014;
  }
LAB_01d31010:
  uVar5 = 0;
LAB_01d31014:
  *param_3 = uVar5;
  return 1;
}

