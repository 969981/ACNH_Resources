
undefined1 FUN_0124fd60(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  undefined1 *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  iVar5 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  puVar4 = PTR_DAT_04bbbc78;
  puVar3 = PTR_DAT_04bbbc70;
  puVar6 = *(uint **)(param_1 + 0x10);
  if (iVar5 == 0x1f) {
    if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
      cVar8 = *PTR_DAT_04bbbc70;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
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
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x4c);
          if (-1 < (int)uVar2) {
            puVar7 = (undefined1 *)((ulong)uVar2 + (long)puVar6);
            if (puVar7 == (undefined1 *)0x0) {
              return 0;
            }
LAB_0124ff90:
            return *puVar7;
          }
          if (uVar2 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return 0;
        }
        if (puVar6 == puVar9) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar9);
        if (lVar1 == 0) {
          return 0;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
        if (uVar10 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != -0xa58ccc9) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return 0;
          }
        }
        iVar5 = 0;
        if (*piVar11 != -1) {
          iVar5 = *piVar11;
        }
        *(int *)(puVar4 + 0x4c) = iVar5;
        if (*puVar6 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else {
    iVar5 = FUN_0123db50(param_1 + 8);
    puVar4 = PTR_DAT_04bbbc78;
    puVar3 = PTR_DAT_04bbbc70;
    if (6 < iVar5 - 0x18U) {
      return 1;
    }
    puVar6 = *(uint **)(param_1 + 0x10);
    if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
      cVar8 = *PTR_DAT_04bbbc70;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
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
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x4c);
          if (-1 < (int)uVar2) {
            puVar7 = (undefined1 *)((ulong)uVar2 + (long)puVar6);
            if (puVar7 == (undefined1 *)0x0) {
              return 0;
            }
            goto LAB_0124ff90;
          }
          if (uVar2 != 0xffffffff) {
            return 0;
          }
        }
        puVar9 = (uint *)(ulong)*puVar6;
        if (*puVar6 == 0) {
          return 0;
        }
        if (puVar6 == puVar9) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + (lVar1 - (long)puVar9);
        if (lVar1 == 0) {
          return 0;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
        if (uVar10 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != -0xa58ccc9) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return 0;
          }
        }
        iVar5 = 0;
        if (*piVar11 != -1) {
          iVar5 = *piVar11;
        }
        *(int *)(puVar4 + 0x4c) = iVar5;
        if (*puVar6 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

