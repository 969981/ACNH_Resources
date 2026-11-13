
bool FUN_0124e7e0(long param_1)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  
  iVar6 = FUN_0123db50(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  puVar4 = PTR_DAT_04bbbc78;
  puVar3 = PTR_DAT_04bbbc70;
  if (iVar6 - 0xbU < 7) {
    puVar7 = *(uint **)(param_1 + 0x10);
    if ((puVar7 != (uint *)0x0) && (*puVar7 != 0)) {
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
            if ((char *)((ulong)uVar2 + (long)puVar7) != (char *)0x0) {
              return *(char *)((ulong)uVar2 + (long)puVar7) == '\0';
            }
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar9 = (uint *)(ulong)*puVar7;
        if (*puVar7 == 0) {
          return true;
        }
        if (puVar7 == puVar9) {
          return true;
        }
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar9)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + (lVar1 - (long)puVar9);
        if (lVar1 == 0) {
          return true;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar9));
        *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
        if (uVar10 == 0) {
          return true;
        }
        piVar11 = (int *)(lVar1 + 4);
        while (piVar11[-1] != -0xa58ccc9) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_0124e91c;
        }
        iVar6 = 0;
        if (*piVar11 != -1) {
          iVar6 = *piVar11;
        }
        *(int *)(puVar4 + 0x4c) = iVar6;
        if (*puVar7 == 0) {
          return true;
        }
      } while( true );
    }
LAB_0124e91c:
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  return bVar5;
}

