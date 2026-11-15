
undefined8 * FUN_01e1cb30(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  int *piVar12;
  
  puVar5 = PTR_DAT_04bc1540;
  puVar4 = PTR_DAT_04bc1538;
  puVar7 = *(uint **)(param_1 + 0x58);
  if (puVar7 == (uint *)0x0) {
    return &DAT_0407ebb1;
  }
  if (**(char **)(param_1 + 0x68) == '\0') {
    if (*puVar7 != 0) {
      cVar8 = *PTR_DAT_04bc1538;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x10);
          if (-1 < (int)uVar3) {
            puVar10 = (undefined8 *)((ulong)uVar3 + (long)puVar7);
            goto LAB_01e1cc4c;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar11 = (uint *)(ulong)*puVar7;
        puVar10 = (undefined8 *)0x0;
        if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_01e1cc4c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
        if (lVar2 == 0) break;
        uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
        puVar10 = (undefined8 *)0x0;
        if (uVar9 == 0) goto LAB_01e1cc4c;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != 0x34c8eed5) {
          piVar12 = piVar12 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            puVar10 = (undefined8 *)0x0;
            goto LAB_01e1cc4c;
          }
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar5 + 0x10) = iVar1;
      } while (*puVar7 != 0);
    }
    puVar10 = (undefined8 *)0x0;
LAB_01e1cc4c:
    puVar6 = (undefined8 *)PTR_DAT_04c48688;
    if (puVar10 != (undefined8 *)0x0) {
      puVar6 = puVar10;
    }
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x60) + 0x18))((long *)(param_1 + 0x60));
    puVar6 = *(undefined8 **)(param_1 + 0x68);
  }
  return puVar6;
}

