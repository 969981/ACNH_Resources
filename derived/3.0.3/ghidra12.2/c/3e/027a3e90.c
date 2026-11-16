
int FUN_027a3e90(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  long lVar7;
  char cVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  double dVar13;
  undefined4 local_14;
  
  lVar7 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(*param_1 + 0x18))();
  local_14 = FUN_006bd550(param_1[1],0);
  puVar6 = (uint *)FUN_01b1ee90(lVar7 + 0x1b80,&local_14);
  puVar5 = PTR_DAT_04bb6448;
  puVar4 = PTR_DAT_04bb6440;
  if (puVar6 == (uint *)0x0) {
    return 999999999;
  }
  if (*puVar6 == 0) {
    return 999999999;
  }
  cVar8 = *PTR_DAT_04bb6440;
  do {
    if (cVar8 == '\0') {
      cVar8 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      uVar3 = *puVar6;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 0x44);
      if (-1 < (int)uVar3) {
        if ((char *)((ulong)uVar3 + (long)puVar6) == (char *)0x0) {
          return 999999999;
        }
        if (*(char *)((ulong)uVar3 + (long)puVar6) == '\0') {
          return 999999999;
        }
        uVar3 = *puVar6;
        dVar13 = 0.0;
        if (uVar3 == 0) goto LAB_027a4090;
        uVar9 = *(uint *)(puVar5 + 0x4c);
        break;
      }
      if (uVar3 != 0xffffffff) {
        return 999999999;
      }
      uVar3 = *puVar6;
    }
    if (uVar3 == 0) {
      return 999999999;
    }
    puVar10 = (uint *)(ulong)uVar3;
    if (puVar6 == puVar10) {
      return 999999999;
    }
    lVar7 = 0xc;
    if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar6 + (lVar7 - (long)puVar10);
    if (lVar7 == 0) {
      return 999999999;
    }
    uVar11 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
    *(undefined4 *)(puVar5 + 0x44) = 0xfffffffe;
    if (uVar11 == 0) {
      return 999999999;
    }
    piVar12 = (int *)(lVar7 + 4);
    while (piVar12[-1] != -0x76abbd24) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) {
        return 999999999;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar5 + 0x44) = iVar1;
    if (*puVar6 == 0) {
      return 999999999;
    }
  } while( true );
LAB_027a4010:
  if (-1 < (int)uVar9) {
    if ((byte *)((long)puVar6 + (ulong)uVar9) != (byte *)0x0) {
      dVar13 = (double)NEON_ucvtf((ulong)*(byte *)((long)puVar6 + (ulong)uVar9));
    }
LAB_027a4090:
    dVar13 = exp2(dVar13);
    return (int)(dVar13 + -1.0);
  }
  if ((uVar9 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar3, lVar7 == 0)) goto LAB_027a4090;
  lVar2 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar2 = 0x1c;
  }
  if (lVar2 + lVar7 == 0) goto LAB_027a4090;
  uVar11 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
  if (uVar11 == 0) goto LAB_027a4090;
  puVar10 = (uint *)(lVar2 + lVar7 + 4);
  while (puVar10[-1] != 0x1be772f0) {
    puVar10 = puVar10 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_027a4090;
  }
  uVar9 = 0;
  if (*puVar10 != 0xffffffff) {
    uVar9 = *puVar10;
  }
  *(uint *)(puVar5 + 0x4c) = uVar9;
  uVar3 = *puVar6;
  if (uVar3 == 0) goto LAB_027a4090;
  goto LAB_027a4010;
}

