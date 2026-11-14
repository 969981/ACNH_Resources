
void FUN_01ad90f0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar5 = (uint *)FUN_01ad81b0();
  puVar4 = PTR_DAT_04bbe220;
  puVar2 = PTR_DAT_04bbe218;
  if (puVar5 != (uint *)0x0) {
    if (*puVar5 != 0) {
      cVar7 = *PTR_DAT_04bbe218;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar4 + 0x24);
          if (-1 < (int)uVar3) {
            puVar9 = (undefined *)((ulong)uVar3 + (long)puVar5);
            goto LAB_01ad91ec;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar5;
        puVar9 = (undefined *)0x0;
        if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_01ad91ec;
        lVar6 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar5 + (lVar6 - (long)puVar10);
        if (lVar6 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
        puVar9 = (undefined *)0x0;
        if (uVar8 == 0) goto LAB_01ad91ec;
        piVar11 = (int *)(lVar6 + 4);
        while (piVar11[-1] != 0x6ce1d85c) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            puVar9 = (undefined *)0x0;
            goto LAB_01ad91ec;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x24) = iVar1;
      } while (*puVar5 != 0);
    }
    puVar9 = (undefined *)0x0;
LAB_01ad91ec:
    puVar2 = PTR_DAT_04c48500;
    if (puVar9 != (undefined *)0x0) {
      puVar2 = puVar9;
    }
    if (puVar2 != (undefined *)0x0) {
      *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
      param_1[1] = (long)puVar2;
      return;
    }
  }
  lVar6 = *(long *)(PTR_PTR_04bb2238 + 8);
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar6;
  return;
}

