
undefined2 FUN_02750bd0(undefined2 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  int *piVar11;
  
  puVar5 = PTR_DAT_04bb6408;
  puVar4 = PTR_DAT_04bb6400;
  lVar7 = *(long *)PTR_DAT_04bb2208;
  if ((int)*(uint *)(lVar7 + 0x1900) < 1) {
    if (*(long *)(lVar7 + 0x17f0) == 0) {
      return 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x17f0) + 8);
    if (puVar6 == (uint *)0x0) {
      return 0;
    }
    if ((param_2 < *(uint *)(lVar7 + 0x1808)) &&
       (*(char *)(*(long *)(lVar7 + 0x1810) + (long)(int)param_2) == '\0')) {
      return 0;
    }
    if (*puVar6 <= param_2) {
      return 0;
    }
    if (puVar6[1] == 0) {
      return 0;
    }
    if ((ushort)puVar6[2] == 0) {
      return 0;
    }
    iVar8 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar6 = (uint *)((ulong)(puVar6[1] * param_2 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                     (long)puVar6);
  }
  else {
    if (*(uint *)(lVar7 + 0x1900) <= param_2) {
      return 0;
    }
    if (*(uint *)(lVar7 + 0x18f0) <= param_2) {
      param_2 = 0;
    }
    puVar6 = *(uint **)(*(long *)(lVar7 + 0x18f8) + (ulong)param_2 * 8);
  }
  if (puVar6 == (uint *)0x0) {
    return 0;
  }
  if (*puVar6 == 0) {
LAB_02750d68:
    return *param_1;
  }
  cVar9 = *PTR_DAT_04bb6400;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(uint *)(puVar5 + 0x10);
      if (-1 < (int)uVar2) {
        if (((ushort *)((ulong)uVar2 + (long)puVar6) != (ushort *)0x0) &&
           (uVar3 = *(ushort *)((ulong)uVar2 + (long)puVar6), uVar3 < 0x48)) {
          param_1 = param_1 + uVar3;
        }
        goto LAB_02750d68;
      }
      if (uVar2 != 0xffffffff) goto LAB_02750d68;
    }
    lVar7 = (long)puVar6 - (ulong)*puVar6;
    if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_02750d68;
    lVar1 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar7 == 0) goto LAB_02750d68;
    uVar10 = (ulong)*(ushort *)(lVar7 + 8);
    *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_02750d68;
    piVar11 = (int *)(lVar1 + lVar7 + 4);
    while (piVar11[-1] != 0x54706054) {
      piVar11 = piVar11 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_02750d68;
    }
    iVar8 = 0;
    if (*piVar11 != -1) {
      iVar8 = *piVar11;
    }
    *(int *)(puVar5 + 0x10) = iVar8;
    if (*puVar6 == 0) goto LAB_02750d68;
  } while( true );
}

