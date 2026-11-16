
void FUN_027cc920(long param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  undefined2 uVar12;
  int *piVar13;
  
  puVar6 = PTR_DAT_04bc4628;
  puVar5 = PTR_DAT_04bc4620;
  lVar7 = *(long *)PTR_DAT_04bb5008;
  lVar9 = 6 - (ulong)*(ushort *)(lVar7 + 0x7f0);
  if (((uint)lVar9 < *(uint *)(lVar7 + 2000)) &&
     (puVar8 = *(uint **)(*(long *)(lVar7 + 0x7d8) + lVar9 * 8), puVar8 != (uint *)0x0)) {
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      cVar10 = *PTR_DAT_04bc4620;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar8;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0x10);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar8) != (undefined2 *)0x0) {
              uVar12 = *(undefined2 *)((ulong)uVar3 + (long)puVar8);
              goto LAB_027cca40;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)uVar2;
        uVar12 = 0;
        if ((puVar4 == (uint *)0x0) || (uVar12 = 0, puVar8 == puVar4)) goto LAB_027cca40;
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar4);
        uVar12 = 0;
        if (lVar7 == 0) goto LAB_027cca40;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
        *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar13 = (int *)(lVar7 + 4);
        while (piVar13[-1] != -0x278d8283) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_027cca3c;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar6 + 0x10) = iVar1;
        uVar2 = *puVar8;
        if (uVar2 == 0) break;
      } while( true );
    }
LAB_027cca3c:
    uVar12 = 0;
LAB_027cca40:
    *(undefined2 *)(param_1 + 8) = uVar12;
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      cVar10 = *puVar5;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar8;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 0xc);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar8) != (undefined2 *)0x0) {
              uVar12 = *(undefined2 *)((ulong)uVar3 + (long)puVar8);
              goto LAB_027ccb20;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)uVar2;
        uVar12 = 0;
        if ((puVar4 == (uint *)0x0) || (uVar12 = 0, puVar8 == puVar4)) goto LAB_027ccb20;
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar4);
        uVar12 = 0;
        if (lVar7 == 0) goto LAB_027ccb20;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
        *(undefined4 *)(puVar6 + 0xc) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar13 = (int *)(lVar7 + 4);
        while (piVar13[-1] != 0x966fbe3) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_027ccb1c;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar6 + 0xc) = iVar1;
        uVar2 = *puVar8;
        if (uVar2 == 0) break;
      } while( true );
    }
LAB_027ccb1c:
    uVar12 = 0;
LAB_027ccb20:
    *(undefined2 *)(param_1 + 10) = uVar12;
    uVar2 = *puVar8;
    if (uVar2 != 0) {
      cVar10 = *puVar5;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar6 = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined4 *)(puVar6 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
          uVar2 = *puVar8;
        }
        else {
          uVar3 = *(uint *)(puVar6 + 8);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar8) != (undefined2 *)0x0) {
              uVar12 = *(undefined2 *)((ulong)uVar3 + (long)puVar8);
              goto LAB_027ccc00;
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar4 = (uint *)(ulong)uVar2;
        uVar12 = 0;
        if ((puVar4 == (uint *)0x0) || (uVar12 = 0, puVar8 == puVar4)) goto LAB_027ccc00;
        lVar7 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar4)) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar8 + (lVar7 - (long)puVar4);
        uVar12 = 0;
        if (lVar7 == 0) goto LAB_027ccc00;
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar4));
        *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar13 = (int *)(lVar7 + 4);
        while (piVar13[-1] != -0x37919f2b) {
          piVar13 = piVar13 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_027ccbfc;
        }
        iVar1 = 0;
        if (*piVar13 != -1) {
          iVar1 = *piVar13;
        }
        *(int *)(puVar6 + 8) = iVar1;
        uVar2 = *puVar8;
        if (uVar2 == 0) break;
      } while( true );
    }
LAB_027ccbfc:
    uVar12 = 0;
LAB_027ccc00:
    *(undefined2 *)(param_1 + 0xc) = uVar12;
  }
  return;
}

