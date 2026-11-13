
void FUN_0133a290(undefined8 *param_1,ushort param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined2 uVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  uint *puVar13;
  
  *(ushort *)(param_1 + 1) = param_2;
  *param_1 = &PTR_LAB_04990258;
  puVar6 = PTR_DAT_04bb2028;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  param_1[3] = (undefined1 *)((long)param_1 + 0x24);
  *(undefined4 *)(param_1 + 4) = 0x20;
  *(undefined1 *)((long)param_1 + 0x5c) = 0;
  *(undefined1 *)((long)param_1 + 0x43) = 0;
  param_1[10] = (undefined1 *)((long)param_1 + 0x5c);
  *(undefined4 *)(param_1 + 0xb) = 0x20;
  *(undefined1 *)((long)param_1 + 0x7b) = 0;
  plVar8 = param_1 + 2;
  *plVar8 = (long)(puVar6 + 0x10);
  param_1[9] = puVar6 + 0x10;
  puVar7 = PTR_DAT_04bc0e90;
  puVar6 = PTR_DAT_04bc0e88;
  if (((uint)param_2 - (uint)DAT_0534f428 < DAT_0534f408) &&
     (puVar13 = *(uint **)(DAT_0534f410 + (long)(int)((uint)param_2 - (uint)DAT_0534f428) * 8),
     puVar13 != (uint *)0x0)) {
    uVar3 = *puVar13;
    if (uVar3 != 0) {
      cVar10 = *PTR_DAT_04bc0e88;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          uVar3 = *puVar13;
        }
        else {
          uVar4 = *(uint *)(puVar7 + 0x18);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar13) != (undefined2 *)0x0) {
              uVar9 = *(undefined2 *)((ulong)uVar4 + (long)puVar13);
              goto LAB_0133a450;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        uVar9 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar9 = 0, puVar13 == puVar5)) goto LAB_0133a450;
        lVar2 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar5)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar13 + (lVar2 - (long)puVar5);
        if (lVar2 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0x18) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != 0x72573f73) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0133a44c;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar7 + 0x18) = iVar1;
        uVar3 = *puVar13;
        if (uVar3 == 0) break;
      } while( true );
    }
LAB_0133a44c:
    uVar9 = 0;
LAB_0133a450:
    FUN_038d1270(plVar8,"Preset%d_Field",uVar9);
    uVar3 = *puVar13;
    if (uVar3 != 0) {
      cVar10 = *puVar6;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          uVar3 = *puVar13;
        }
        else {
          uVar4 = *(uint *)(puVar7 + 0x1c);
          if (-1 < (int)uVar4) {
            if ((undefined2 *)((ulong)uVar4 + (long)puVar13) == (undefined2 *)0x0) break;
            uVar9 = *(undefined2 *)((ulong)uVar4 + (long)puVar13);
            goto LAB_0133a41c;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar3;
        uVar9 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar9 = 0, puVar13 == puVar5)) goto LAB_0133a41c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar5)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar13 + (lVar2 - (long)puVar5);
        if (lVar2 == 0) break;
        uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
        if (uVar11 == 0) break;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != 0x7a09986c) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) goto LAB_0133a418;
        }
        uVar9 = 0;
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar7 + 0x1c) = iVar1;
        uVar3 = *puVar13;
        if (uVar3 == 0) goto LAB_0133a41c;
      } while( true );
    }
  }
  else {
    FUN_038d1270(plVar8,"Preset%d_Field",0);
  }
LAB_0133a418:
  uVar9 = 0;
LAB_0133a41c:
  FUN_038d1270(param_1 + 9,"Preset%d_Item",uVar9);
  return;
}

