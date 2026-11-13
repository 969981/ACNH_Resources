
bool FUN_0124dcb0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  ulong uVar7;
  uint *puVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  
  uVar7 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  puVar5 = PTR_DAT_04bbbc78;
  puVar4 = PTR_DAT_04bbbc70;
  if ((uint)uVar7 < 0x21 && (1L << (uVar7 & 0x3f) & 0x1000006aaU) != 0) {
    puVar8 = *(uint **)(param_1 + 0x10);
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      cVar9 = *PTR_DAT_04bbbc70;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
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
          uVar3 = *(uint *)(puVar5 + 0x4c);
          if (-1 < (int)uVar3) {
            if ((char *)((ulong)uVar3 + (long)puVar8) != (char *)0x0) {
              return *(char *)((ulong)uVar3 + (long)puVar8) == '\0';
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar8;
        if (*puVar8 == 0) {
          return true;
        }
        if (puVar8 == puVar10) {
          return true;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar8 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) {
          return true;
        }
        uVar7 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
        *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
        if (uVar7 == 0) {
          return true;
        }
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0xa58ccc9) {
          piVar11 = piVar11 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_0124de00;
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar5 + 0x4c) = iVar1;
        if (*puVar8 == 0) {
          return true;
        }
      } while( true );
    }
LAB_0124de00:
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  return bVar6;
}

