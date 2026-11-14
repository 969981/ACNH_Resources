
undefined8 * FUN_01b87300(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long lVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar4 = PTR_DAT_04bc06d8;
  puVar3 = PTR_DAT_04bc06d0;
  lVar6 = *(long *)PTR_DAT_04bb4788;
  uVar2 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar6 + 0x3f8);
  if (*(uint *)(lVar6 + 0x3d8) <= uVar2) {
    return &DAT_0407ebb1;
  }
  puVar5 = &DAT_0407ebb1;
  puVar7 = *(uint **)(*(long *)(lVar6 + 0x3e0) + (long)(int)uVar2 * 8);
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 != 0) {
      cVar8 = *PTR_DAT_04bc06d0;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x30) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar2 = *(uint *)(puVar4 + 0x30);
          if (-1 < (int)uVar2) {
            puVar10 = (undefined8 *)((ulong)uVar2 + (long)puVar7);
            goto LAB_01b87418;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)*puVar7;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_01b87418;
        lVar6 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar7 + (lVar6 - (long)puVar11);
        if (lVar6 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar4 + 0x30) = 0xfffffffe;
        puVar10 = (undefined8 *)0x0;
        if (uVar9 == 0) goto LAB_01b87418;
        piVar12 = (int *)(lVar6 + 4);
        while (piVar12[-1] != 0x4b9c4229) {
          piVar12 = piVar12 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01b87418;
          }
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar4 + 0x30) = iVar1;
      } while (*puVar7 != 0);
    }
    puVar10 = (undefined8 *)0x0;
LAB_01b87418:
    puVar5 = &DAT_0407ebb1;
    if (puVar10 != (undefined8 *)0x0) {
      puVar5 = puVar10;
    }
  }
  return puVar5;
}

