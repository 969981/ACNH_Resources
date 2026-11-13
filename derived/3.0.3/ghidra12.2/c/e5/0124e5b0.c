
undefined8 FUN_0124e5b0(long param_1,long param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined2 uVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  uint *puVar13;
  ulong uVar14;
  char cVar15;
  
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  lVar11 = *(long *)PTR_DAT_04bb4778;
  if (lVar11 == 0) {
    return 0;
  }
  puVar13 = *(uint **)(param_1 + 0x10);
  if ((puVar13 != (uint *)0x0) && (*puVar13 != 0)) {
    cVar15 = *PTR_DAT_04bbbc70;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
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
      }
      else {
        uVar8 = *(uint *)(puVar5 + 0x4c);
        if (-1 < (int)uVar8) {
          if ((byte *)((ulong)uVar8 + (long)puVar13) == (byte *)0x0) break;
          uVar8 = (uint)*(byte *)((ulong)uVar8 + (long)puVar13);
          goto LAB_0124e6dc;
        }
        if (uVar8 != 0xffffffff) break;
      }
      puVar9 = (uint *)(ulong)*puVar13;
      uVar8 = 0;
      if ((*puVar13 == 0) || (puVar13 == puVar9)) goto LAB_0124e6dc;
      lVar3 = 0xc;
      if (*(char *)((long)puVar13 + (10 - (long)puVar9)) != '\0') {
        lVar3 = 0x1c;
      }
      lVar3 = (long)puVar13 + (lVar3 - (long)puVar9);
      if (lVar3 == 0) break;
      uVar14 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
      uVar8 = 0;
      if (uVar14 == 0) goto LAB_0124e6dc;
      piVar10 = (int *)(lVar3 + 4);
      while (piVar10[-1] != -0xa58ccc9) {
        piVar10 = piVar10 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uVar8 = 0;
          goto LAB_0124e6dc;
        }
      }
      uVar8 = 0;
      iVar2 = 0;
      if (*piVar10 != -1) {
        iVar2 = *piVar10;
      }
      *(int *)(puVar5 + 0x4c) = iVar2;
      if (*puVar13 == 0) goto LAB_0124e6dc;
    } while( true );
  }
  uVar8 = 0;
LAB_0124e6dc:
  bVar6 = 3 < uVar8;
  uVar1 = ((int)*(uint *)(param_2 + 0xc) >> 1) * 0x90 + ((int)*(uint *)(param_2 + 8) >> 1);
  if (0xff < *(uint *)(param_2 + 0xc) || 0x11f < *(uint *)(param_2 + 8)) {
    uVar1 = 0xffffffff;
  }
  uVar14 = (ulong)uVar1;
  if (uVar1 == 0xffffffff) {
    return 0;
  }
  if ((param_3 & 1) != 0) {
    return 0;
  }
  if (3 < uVar8) {
    uVar8 = 3;
  }
  lVar11 = lVar11 + 0x2a58;
  if (8 < uVar1 >> 0xb) {
    uVar14 = 0;
  }
  uVar1 = *(byte *)(lVar11 + uVar14) + 1;
  if (uVar1 < uVar8) {
    *(char *)(lVar11 + uVar14) = (char)uVar1;
    return 0;
  }
  if (bVar6 && (param_4 & 1) == 0) {
    return 0;
  }
  *(undefined1 *)(lVar11 + uVar14) = 0;
  uVar7 = FUN_0123d520(*(undefined8 *)(param_1 + 0x10));
  *(undefined2 *)(param_1 + 8) = uVar7;
  lVar11 = *(long *)PTR_DAT_04bbbc68;
  if (lVar11 != 0) {
    uVar12 = 0;
    if ((*(long *)(lVar11 + 0xb0) == 0) ||
       (uVar12 = 0, *(long *)(*(long *)(lVar11 + 0xb0) + 8) == 0)) goto LAB_0124e7c8;
    uVar8 = FUN_0277d6c4();
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if (uVar8 < *(uint *)(lVar11 + 0x1d8)) {
      uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar8 * 8);
      goto LAB_0124e7c8;
    }
  }
  uVar12 = 0;
LAB_0124e7c8:
  *(undefined8 *)(param_1 + 0x10) = uVar12;
  return 1;
}

