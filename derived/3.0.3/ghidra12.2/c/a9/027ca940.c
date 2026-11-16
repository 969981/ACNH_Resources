
void FUN_027ca940(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int *piVar8;
  long lVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 *puVar15;
  
  *param_1 = 2;
  memset(param_1 + 1,0,0x1c0);
  lVar9 = 0;
  do {
    puVar15 = (undefined8 *)((long)param_1 + lVar9 + 0x14);
    *puVar15 = 0xfffe;
    FUN_0277d4ac(puVar15);
    lVar11 = lVar9 + 0xc;
    *(undefined4 *)((long)param_1 + lVar9 + 0x1c) = 0xffff;
    puVar6 = PTR_DAT_04bb37e0;
    lVar9 = lVar11;
  } while (lVar11 != 0x1b0);
  *(undefined2 *)(param_1 + 0x71) = 0;
  uVar2 = *(undefined4 *)(puVar6 + 4);
  param_1[0x72] = *(undefined4 *)puVar6;
  param_1[0x73] = uVar2;
  *(undefined1 *)(param_1 + 0x74) = 0xff;
  FUN_027c9340(param_1 + 0x75);
  *(undefined2 *)(param_1 + 0x4b7) = *(undefined2 *)puVar6;
  *(undefined *)((long)param_1 + 0x12de) = puVar6[2];
  *(undefined *)((long)param_1 + 0x12df) = puVar6[3];
  uVar2 = *(undefined4 *)(puVar6 + 4);
  *(undefined1 *)(param_1 + 0x4b9) = 0;
  param_1[0x4b8] = uVar2;
  puVar7 = PTR_DAT_04bc4628;
  puVar6 = PTR_DAT_04bc4620;
  lVar9 = *(long *)PTR_DAT_04bb5008;
  lVar11 = 5 - (ulong)*(ushort *)(lVar9 + 0x7f0);
  if (((uint)lVar11 < *(uint *)(lVar9 + 2000)) &&
     (puVar10 = *(uint **)(*(long *)(lVar9 + 0x7d8) + lVar11 * 8), puVar10 != (uint *)0x0)) {
    uVar3 = *puVar10;
    if (uVar3 != 0) {
      cVar12 = *PTR_DAT_04bc4620;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar10;
        }
        else {
          uVar4 = *(uint *)(puVar7 + 0x10);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar10) != (undefined2 *)0x0) {
              uVar14 = *(undefined2 *)((ulong)uVar4 + (long)puVar10);
              goto LAB_027cab0c;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        uVar14 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar14 = 0, puVar10 == puVar5)) goto LAB_027cab0c;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
        uVar14 = 0;
        if (lVar9 == 0) goto LAB_027cab0c;
        uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar8 = (int *)(lVar9 + 4);
        while (piVar8[-1] != -0x278d8283) {
          piVar8 = piVar8 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027cab08;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(puVar7 + 0x10) = iVar1;
        uVar3 = *puVar10;
        if (uVar3 == 0) break;
      } while( true );
    }
LAB_027cab08:
    uVar14 = 0;
LAB_027cab0c:
    *(undefined2 *)(param_1 + 2) = uVar14;
    uVar3 = *puVar10;
    if (uVar3 != 0) {
      cVar12 = *puVar6;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar10;
        }
        else {
          uVar4 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar10) != (undefined2 *)0x0) {
              uVar14 = *(undefined2 *)((ulong)uVar4 + (long)puVar10);
              goto LAB_027cabec;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        uVar14 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar14 = 0, puVar10 == puVar5)) goto LAB_027cabec;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
        uVar14 = 0;
        if (lVar9 == 0) goto LAB_027cabec;
        uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar8 = (int *)(lVar9 + 4);
        while (piVar8[-1] != 0x966fbe3) {
          piVar8 = piVar8 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027cabe8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar3 = *puVar10;
        if (uVar3 == 0) break;
      } while( true );
    }
LAB_027cabe8:
    uVar14 = 0;
LAB_027cabec:
    *(undefined2 *)((long)param_1 + 10) = uVar14;
    uVar3 = *puVar10;
    if (uVar3 != 0) {
      cVar12 = *puVar6;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar10;
        }
        else {
          uVar4 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar10) != (undefined2 *)0x0) {
              uVar14 = *(undefined2 *)((ulong)uVar4 + (long)puVar10);
              goto LAB_027caccc;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        uVar14 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar14 = 0, puVar10 == puVar5)) goto LAB_027caccc;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
        uVar14 = 0;
        if (lVar9 == 0) goto LAB_027caccc;
        uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar8 = (int *)(lVar9 + 4);
        while (piVar8[-1] != -0x37919f2b) {
          piVar8 = piVar8 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027cacc8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(puVar7 + 8) = iVar1;
        uVar3 = *puVar10;
        if (uVar3 == 0) break;
      } while( true );
    }
LAB_027cacc8:
    uVar14 = 0;
LAB_027caccc:
    *(undefined2 *)(param_1 + 3) = uVar14;
    uVar3 = *puVar10;
    if (uVar3 != 0) {
      cVar12 = *puVar6;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar10;
        }
        else {
          uVar4 = *(uint *)(puVar7 + 0x10);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar10) != (undefined2 *)0x0) {
              uVar14 = *(undefined2 *)((ulong)uVar4 + (long)puVar10);
              goto LAB_027cadac;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        uVar14 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar14 = 0, puVar10 == puVar5)) goto LAB_027cadac;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
        uVar14 = 0;
        if (lVar9 == 0) goto LAB_027cadac;
        uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar8 = (int *)(lVar9 + 4);
        while (piVar8[-1] != -0x278d8283) {
          piVar8 = piVar8 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027cada8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(puVar7 + 0x10) = iVar1;
        uVar3 = *puVar10;
        if (uVar3 == 0) break;
      } while( true );
    }
LAB_027cada8:
    uVar14 = 0;
LAB_027cadac:
    *(undefined2 *)((long)param_1 + 0xe) = uVar14;
    uVar3 = *puVar10;
    if (uVar3 != 0) {
      cVar12 = *puVar6;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar10;
        }
        else {
          uVar4 = *(uint *)(puVar7 + 0xc);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar10) != (undefined2 *)0x0) {
              uVar14 = *(undefined2 *)((ulong)uVar4 + (long)puVar10);
              goto LAB_027cae8c;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        uVar14 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar14 = 0, puVar10 == puVar5)) goto LAB_027cae8c;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
        uVar14 = 0;
        if (lVar9 == 0) goto LAB_027cae8c;
        uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0xc) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar8 = (int *)(lVar9 + 4);
        while (piVar8[-1] != 0x966fbe3) {
          piVar8 = piVar8 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027cae88;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(puVar7 + 0xc) = iVar1;
        uVar3 = *puVar10;
        if (uVar3 == 0) break;
      } while( true );
    }
LAB_027cae88:
    uVar14 = 0;
LAB_027cae8c:
    *(undefined2 *)(param_1 + 4) = uVar14;
    uVar3 = *puVar10;
    if (uVar3 != 0) {
      cVar12 = *puVar6;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar10;
        }
        else {
          uVar4 = *(uint *)(puVar7 + 8);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar10) != (undefined2 *)0x0) {
              uVar14 = *(undefined2 *)((ulong)uVar4 + (long)puVar10);
              goto LAB_027caf6c;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        uVar14 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar14 = 0, puVar10 == puVar5)) goto LAB_027caf6c;
        lVar9 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar5)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)puVar10 + (lVar9 - (long)puVar5);
        uVar14 = 0;
        if (lVar9 == 0) goto LAB_027caf6c;
        uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 8) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar8 = (int *)(lVar9 + 4);
        while (piVar8[-1] != -0x37919f2b) {
          piVar8 = piVar8 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_027caf68;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(puVar7 + 8) = iVar1;
        uVar3 = *puVar10;
        if (uVar3 == 0) break;
      } while( true );
    }
LAB_027caf68:
    uVar14 = 0;
LAB_027caf6c:
    *(undefined2 *)((long)param_1 + 0x12) = uVar14;
  }
  *(undefined1 *)(param_1 + 0x4b9) = 0;
  *(undefined2 *)(param_1 + 0x71) = 0xffff;
  return;
}

