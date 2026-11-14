
undefined8 FUN_0172f380(uint *param_1,uint *param_2)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bbe220;
  puVar4 = PTR_DAT_04bbe218;
  uVar11 = *param_2;
  lVar8 = *(long *)PTR_DAT_04bc0468;
  if ((int)*(uint *)(lVar8 + 0x1c0) < 1) {
    if (*(long *)(lVar8 + 0xb0) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar8 + 0xb0) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((uVar11 < *(uint *)(lVar8 + 200)) &&
       (*(char *)(*(long *)(lVar8 + 0xd0) + (long)(int)uVar11) == '\0')) {
      return 0;
    }
    if (*puVar6 <= uVar11) {
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
    puVar6 = (uint *)((ulong)(puVar6[1] * uVar11 + (uint)(ushort)puVar6[2] * 8 + iVar7) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar8 + 0x1c0) <= uVar11) {
      return 0;
    }
    if (*(uint *)(lVar8 + 0x1b0) <= uVar11) {
      uVar11 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar8 + 0x1b8) + (ulong)uVar11 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  uVar11 = *puVar6;
  if (uVar11 == 0) {
LAB_0172f538:
    uVar11 = 0;
LAB_0172f53c:
    *param_1 = uVar11;
    return 1;
  }
  cVar9 = *PTR_DAT_04bbe218;
  do {
    if (cVar9 == '\0') {
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      cVar9 = '\x01';
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      uVar11 = *puVar6;
    }
    else {
      uVar1 = *(uint *)puVar5;
      if (-1 < (int)uVar1) {
        if (((ushort *)((ulong)uVar1 + (long)puVar6) != (ushort *)0x0) &&
           (uVar2 = *(ushort *)((ulong)uVar1 + (long)puVar6), uVar11 = (uint)uVar2, uVar2 < 0x32))
        goto LAB_0172f53c;
        goto LAB_0172f538;
      }
      if (uVar1 != 0xffffffff) goto LAB_0172f538;
    }
    puVar3 = (uint *)(ulong)uVar11;
    uVar11 = 0;
    if ((puVar3 == (uint *)0x0) || (uVar11 = 0, puVar6 == puVar3)) goto LAB_0172f53c;
    lVar8 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar3)) != '\0') {
      lVar8 = 0x1c;
    }
    lVar8 = (long)puVar6 + (lVar8 - (long)puVar3);
    uVar11 = 0;
    if (lVar8 == 0) goto LAB_0172f53c;
    uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar3));
    *(undefined4 *)puVar5 = 0xfffffffe;
    if (uVar10 == 0) goto LAB_0172f538;
    piVar12 = (int *)(lVar8 + 4);
    while (piVar12[-1] != 0x2924e11f) {
      piVar12 = piVar12 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_0172f538;
    }
    iVar7 = 0;
    if (*piVar12 != -1) {
      iVar7 = *piVar12;
    }
    *(int *)puVar5 = iVar7;
    uVar11 = *puVar6;
    if (uVar11 == 0) goto LAB_0172f538;
  } while( true );
}

