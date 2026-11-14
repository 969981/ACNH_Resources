
void FUN_01ad86c0(long *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  undefined *puVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar5 = (uint *)FUN_01ad81b0();
  puVar4 = PTR_DAT_04bbe220;
  puVar6 = PTR_DAT_04bbe218;
  if (puVar5 == (uint *)0x0) {
    puVar6 = *(undefined **)(PTR_PTR_04bb2238 + 8);
  }
  else {
    if (*puVar5 != 0) {
      cVar7 = *PTR_DAT_04bbe218;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar4 + 0x30);
          if (-1 < (int)uVar3) {
            puVar9 = (undefined *)((ulong)uVar3 + (long)puVar5);
            goto LAB_01ad87bc;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar5;
        puVar9 = (undefined *)0x0;
        if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_01ad87bc;
        lVar2 = 0xc;
        if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar5 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x30) = 0xfffffffe;
        puVar9 = (undefined *)0x0;
        if (uVar8 == 0) goto LAB_01ad87bc;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x1b93daa9) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            puVar9 = (undefined *)0x0;
            goto LAB_01ad87bc;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 0x30) = iVar1;
      } while (*puVar5 != 0);
    }
    puVar9 = (undefined *)0x0;
LAB_01ad87bc:
    puVar6 = PTR_DAT_04c484f0;
    if (puVar9 != (undefined *)0x0) {
      puVar6 = puVar9;
    }
  }
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = (long)puVar6;
  return;
}

