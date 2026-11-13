
bool FUN_011bc490(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar6 = PTR_DAT_04bbb930;
  puVar5 = PTR_DAT_04bbb928;
  puVar8 = *(uint **)(param_1 + 8);
  if ((puVar8 == (uint *)0x0) || (*puVar8 == 0)) {
    return false;
  }
  cVar9 = *PTR_DAT_04bbb928;
  do {
    if (cVar9 == '\0') {
      cVar9 = '\x01';
      *(undefined8 *)puVar6 = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
      *puVar5 = 1;
      *(undefined8 *)(puVar6 + 0x50) = 0xffffffffffffffff;
      *(undefined4 *)(puVar6 + 0x58) = 0xffffffff;
      *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
    }
    else {
      uVar4 = *(uint *)(puVar6 + 0x2c);
      uVar10 = (ulong)uVar4;
      if (-1 < (int)uVar4) {
        if ((short *)(uVar10 + (long)puVar8) == (short *)0x0) {
          return false;
        }
        if (*(short *)(uVar10 + (long)puVar8) == 0) {
          return false;
        }
        puVar8 = *(uint **)(param_1 + 8);
        if (puVar8 == (uint *)0x0) goto LAB_011bc6d8;
        uVar4 = *puVar8;
        break;
      }
      if (uVar4 != 0xffffffff) {
        return false;
      }
    }
    puVar11 = (uint *)(ulong)*puVar8;
    if (*puVar8 == 0) {
      return false;
    }
    if (puVar8 == puVar11) {
      return false;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar8 + (lVar2 - (long)puVar11);
    if (lVar2 == 0) {
      return false;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
    *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
    if (uVar10 == 0) {
      return false;
    }
    piVar12 = (int *)(lVar2 + 4);
    while (piVar12[-1] != 0x54706054) {
      piVar12 = piVar12 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return false;
      }
    }
    iVar1 = 0;
    if (*piVar12 != -1) {
      iVar1 = *piVar12;
    }
    *(int *)(puVar6 + 0x2c) = iVar1;
    if (*puVar8 == 0) {
      return false;
    }
  } while( true );
joined_r0x011bc5a8:
  uVar7 = 0;
  if (uVar4 == 0) {
LAB_011bc6dc:
    return uVar7 == 0;
  }
  if (-1 < (int)uVar10) {
    if (((short *)((long)puVar8 + uVar10) == (short *)0x0) ||
       (*(short *)((long)puVar8 + uVar10) == 0)) goto LAB_011bc6d8;
    puVar8 = *(uint **)(param_1 + 8);
    uVar7 = 0;
    uVar4 = *puVar8;
    if ((uVar4 != 0) && (puVar8 != (uint *)(ulong)uVar4)) {
      puVar11 = (uint *)((long)puVar8 - (long)(ulong)uVar4);
      if (*puVar11 == 0) goto LAB_011bc6d8;
      uVar4 = puVar11[1];
      uVar7 = 0;
      if (uVar4 != 0) {
        if ((ulong)(ushort)puVar11[2] == 0) goto LAB_011bc6d8;
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + lVar2 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar2 == 0) goto LAB_011bc6d8;
        uVar3 = 0;
        if ((ulong)uVar4 != 0) {
          uVar3 = (uint)((ulong)((long)puVar8 - lVar2) / (ulong)uVar4);
        }
        if (*puVar11 <= uVar3) {
          uVar3 = 0xffffffff;
        }
        if ((*(uint *)PTR_DAT_04bbb950 <= uVar3) ||
           (uVar7 = *(ushort *)(*(long *)((long)PTR_DAT_04bbb950 + 8) + (long)(int)uVar3 * 2),
           3 < uVar7)) {
LAB_011bc6d8:
          uVar7 = 0;
        }
      }
    }
    goto LAB_011bc6dc;
  }
  if ((int)uVar10 != -1) goto LAB_011bc6d8;
  puVar11 = (uint *)(ulong)*puVar8;
  uVar7 = 0;
  if ((*puVar8 == 0) || (puVar8 == puVar11)) goto LAB_011bc6dc;
  lVar2 = 0xc;
  if (*(char *)((long)puVar8 + (10 - (long)puVar11)) != '\0') {
    lVar2 = 0x1c;
  }
  lVar2 = (long)puVar8 + (lVar2 - (long)puVar11);
  if (lVar2 == 0) goto LAB_011bc6d8;
  uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar11));
  *(undefined4 *)(puVar6 + 0x2c) = 0xfffffffe;
  uVar7 = 0;
  if (uVar10 == 0) goto LAB_011bc6dc;
  puVar11 = (uint *)(lVar2 + 4);
  while (puVar11[-1] != 0x54706054) {
    puVar11 = puVar11 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) {
      uVar7 = 0;
      goto LAB_011bc6dc;
    }
  }
  uVar4 = 0;
  if (*puVar11 != 0xffffffff) {
    uVar4 = *puVar11;
  }
  uVar10 = (ulong)uVar4;
  *(uint *)(puVar6 + 0x2c) = uVar4;
  uVar4 = *puVar8;
  goto joined_r0x011bc5a8;
}

