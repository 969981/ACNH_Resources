
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01290b70(uint *param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  int iVar10;
  undefined2 uVar11;
  uint uVar12;
  uint *puVar13;
  int *piVar14;
  char cVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  uint *puVar19;
  ulong uVar20;
  uint uVar21;
  uint *puVar22;
  
  puVar4 = PTR_DAT_04bbbdf0;
  puVar3 = PTR_DAT_04bbbde8;
  uVar7 = *param_1;
  if (uVar7 != 0) {
    cVar15 = *PTR_DAT_04bbbde8;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        uVar7 = *param_1;
      }
      else {
        uVar12 = *(uint *)puVar4;
        if (-1 < (int)uVar12) {
          if ((undefined4 *)((ulong)uVar12 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar12 + (long)param_1);
            goto LAB_01290ca0;
          }
          break;
        }
        if (uVar12 != 0xffffffff) break;
      }
      puVar19 = (uint *)(ulong)uVar7;
      uVar6 = 0;
      if ((puVar19 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar19)) goto LAB_01290ca0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar19)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar19);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar19));
      *(undefined4 *)puVar4 = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x4038a881) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01290c9c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)puVar4 = iVar8;
      uVar7 = *param_1;
      if (uVar7 == 0) break;
    } while( true );
  }
LAB_01290c9c:
  uVar6 = 0;
LAB_01290ca0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01290d60;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01290d60;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbec0 <= uVar12) goto LAB_01290d60;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbec0 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01290d60:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 4);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01290e50;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01290e50;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x255f93c7) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01290e4c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 4) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_01290e4c:
  uVar6 = 0;
LAB_01290e50:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01290f10;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01290f10;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbec8 <= uVar12) goto LAB_01290f10;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbec8 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01290f10:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 8);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01291000;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01291000;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x750921f3) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01290ffc;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 8) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_01290ffc:
  uVar6 = 0;
LAB_01291000:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_012910c0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_012910c0;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbed0 <= uVar12) goto LAB_012910c0;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbed0 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_012910c0:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0xc);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_012911b0;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_012911b0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0xc) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x106e1ab5) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_012911ac;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0xc) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_012911ac:
  uVar6 = 0;
LAB_012911b0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01291270;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01291270;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbed8 <= uVar12) goto LAB_01291270;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbed8 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01291270:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x10);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01291360;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01291360;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x1ed42314) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129135c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x10) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129135c:
  uVar6 = 0;
LAB_01291360:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01291420;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01291420;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbee0 <= uVar12) goto LAB_01291420;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbee0 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01291420:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x14);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01291510;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01291510;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x7bb31852) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129150c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x14) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129150c:
  uVar6 = 0;
LAB_01291510:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_012915d0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_012915d0;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbee8 <= uVar12) goto LAB_012915d0;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbee8 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_012915d0:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x18);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_012916c0;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_012916c0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x18) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x2be5aa68) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_012916bc;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x18) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_012916bc:
  uVar6 = 0;
LAB_012916c0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01291780;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01291780;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbef0 <= uVar12) goto LAB_01291780;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbef0 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01291780:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x1c);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01291870;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01291870;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x4e829122) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129186c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x1c) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129186c:
  uVar6 = 0;
LAB_01291870:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01291930;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01291930;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbef8 <= uVar12) goto LAB_01291930;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbef8 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01291930:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x20);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01291a20;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01291a20;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x5039c84d) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01291a1c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x20) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_01291a1c:
  uVar6 = 0;
LAB_01291a20:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01291ae0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01291ae0;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf00 <= uVar12) goto LAB_01291ae0;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf00 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01291ae0:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x24);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01291bd0;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01291bd0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x24) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x56357cd) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01291bcc;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x24) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_01291bcc:
  uVar6 = 0;
LAB_01291bd0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01291c90;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01291c90;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf08 <= uVar12) goto LAB_01291c90;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf08 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01291c90:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x28);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01291d80;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01291d80;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x28) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x2f6b8a66) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01291d7c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x28) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_01291d7c:
  uVar6 = 0;
LAB_01291d80:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01291e40;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01291e40;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf10 <= uVar12) goto LAB_01291e40;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf10 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01291e40:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x2c);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01291f30;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01291f30;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x21e4055) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01291f2c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x2c) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_01291f2c:
  uVar6 = 0;
LAB_01291f30:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01291ff0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01291ff0;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf18 <= uVar12) goto LAB_01291ff0;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf18 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01291ff0:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x30);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_012920e0;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_012920e0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x30) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x67797b13) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_012920dc;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x30) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_012920dc:
  uVar6 = 0;
LAB_012920e0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_012921a0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_012921a0;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf20 <= uVar12) goto LAB_012921a0;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf20 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_012921a0:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x34);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01292290;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01292290;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x34) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x372fc927) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129228c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x34) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129228c:
  uVar6 = 0;
LAB_01292290:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01292350;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01292350;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf28 <= uVar12) goto LAB_01292350;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf28 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01292350:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x38);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01292440;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01292440;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x38) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x5248f261) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129243c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x38) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129243c:
  uVar6 = 0;
LAB_01292440:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01292500;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01292500;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf30 <= uVar12) goto LAB_01292500;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf30 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01292500:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x3c);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_012925f0;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_012925f0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x3c) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x4cf3ab0e) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_012925ec;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x3c) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_012925ec:
  uVar6 = 0;
LAB_012925f0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_012926b0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_012926b0;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf38 <= uVar12) goto LAB_012926b0;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf38 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_012926b0:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x40);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_012927a0;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_012927a0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x40) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x19a9348c) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129279c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x40) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129279c:
  uVar6 = 0;
LAB_012927a0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01292860;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01292860;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf40 <= uVar12) goto LAB_01292860;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf40 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01292860:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x44);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01292950;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01292950;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x44) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x33a1e925) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129294c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x44) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129294c:
  uVar6 = 0;
LAB_01292950:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 == 0) || (puVar19 == (uint *)0x0)) {
LAB_01292a0c:
    if (puVar13 != (uint *)0x0) goto LAB_01292a10;
  }
  else {
    if ((*puVar19 != 0) && ((uVar7 = puVar19[1], uVar7 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
      if (lVar2 != 0) {
        uVar12 = 0;
        if ((ulong)uVar7 != 0) {
          uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
        }
        if (*puVar19 <= uVar12) {
          uVar12 = 0xffffffff;
        }
        if (uVar12 < *(uint *)PTR_DAT_04bbbf48) {
          *(undefined2 *)(*(long *)(PTR_DAT_04bbbf48 + 8) + (long)(int)uVar12 * 2) = uVar11;
          puVar13 = (uint *)(ulong)*param_1;
          goto LAB_01292a0c;
        }
      }
    }
LAB_01292a10:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x48);
        if (-1 < (int)uVar7) {
          uVar12 = 0;
          if ((uint *)((ulong)uVar7 + (long)param_1) != (uint *)0x0) {
            uVar12 = *(uint *)((ulong)uVar7 + (long)param_1);
          }
          goto LAB_01292aec;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar12 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar12 = 0, param_1 == puVar13)) goto LAB_01292aec;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x48) = 0xfffffffe;
      uVar12 = 0;
      if (uVar16 == 0) goto LAB_01292aec;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x714d3f2e) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar12 = 0;
          goto LAB_01292aec;
        }
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x48) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
    } while (*param_1 != 0);
  }
  uVar12 = 0;
LAB_01292aec:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    if ((DAT_05161b98 == '\x01') && (DAT_05161b9c == uVar12)) {
      uVar7 = DAT_05161ba0;
      if (2 < DAT_05161ba0) goto LAB_012930ec;
    }
    else {
      if (((DAT_05161bd0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161bd0), iVar8 != 0)) {
        DAT_05161ba8 = 0x300000000;
        DAT_05161bb0 = &DAT_05161bb8;
        __cxa_guard_release(&DAT_05161bd0);
      }
      if ((DAT_05161bd8 & 1) == 0) {
        DAT_05161bd8 = 1;
        if (((DAT_05161bf8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161bf8), iVar8 != 0)) {
          DAT_05161bdc = 0xffffffff00000000;
          DAT_05161be4 = 0xffffffff00000000;
          DAT_05161bec = 0xffffffff00000000;
          __cxa_guard_release(&DAT_05161bf8);
        }
        uVar6 = crc32b(0xffffffff,0xe6,0x4c11db7);
        uVar6 = crc32b(uVar6,0x9d,0x4c11db7);
        uVar6 = crc32b(uVar6,0xb1,0x4c11db7);
        uVar1 = crc32b(uVar6,0xe9,0x4c11db7);
        uVar1 = crc32b(uVar1,0x80,0x4c11db7);
        uVar1 = crc32b(uVar1,0xb2,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
        uVar1 = crc32b(uVar1,0x85,0x4c11db7);
        uVar1 = crc32b(uVar1,0xa5,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe7,0x4c11db7);
        uVar1 = crc32b(uVar1,0xa6,0x4c11db7);
        uVar1 = crc32b(uVar1,0x81,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe6,0x4c11db7);
        uVar1 = crc32b(uVar1,0xad,0x4c11db7);
        uVar7 = crc32b(uVar1,0xa2,0x4c11db7);
        DAT_05161bdc = (ulong)~uVar7;
        iVar8 = (int)DAT_05161ba8;
        iVar10 = DAT_05161ba8._4_4_;
        if ((int)DAT_05161ba8 < DAT_05161ba8._4_4_) {
          *(ulong **)(DAT_05161bb0 + (long)(int)DAT_05161ba8 * 8) = &DAT_05161bdc;
          iVar8 = (int)DAT_05161ba8 + 1;
          DAT_05161ba8 = CONCAT44(DAT_05161ba8._4_4_,iVar8);
          iVar10 = DAT_05161ba8._4_4_;
        }
        uVar1 = crc32b(0xffffffff,0xe8,0x4c11db7);
        uVar1 = crc32b(uVar1,0xa5,0x4c11db7);
        uVar1 = crc32b(uVar1,0xbf,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe9,0x4c11db7);
        uVar1 = crc32b(uVar1,0x80,0x4c11db7);
        uVar1 = crc32b(uVar1,0xb2,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
        uVar1 = crc32b(uVar1,0x85,0x4c11db7);
        uVar1 = crc32b(uVar1,0xa5,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe7,0x4c11db7);
        uVar1 = crc32b(uVar1,0xa6,0x4c11db7);
        uVar1 = crc32b(uVar1,0x81,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe6,0x4c11db7);
        uVar1 = crc32b(uVar1,0xad,0x4c11db7);
        uVar7 = crc32b(uVar1,0xa2,0x4c11db7);
        DAT_05161be4 = CONCAT44(1,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161bb0 + (long)iVar8 * 8) = &DAT_05161be4;
          iVar8 = (int)DAT_05161ba8 + 1;
          DAT_05161ba8 = CONCAT44(DAT_05161ba8._4_4_,iVar8);
          iVar10 = DAT_05161ba8._4_4_;
        }
        uVar6 = crc32b(uVar6,0xe8,0x4c11db7);
        uVar6 = crc32b(uVar6,0xa5,0x4c11db7);
        uVar6 = crc32b(uVar6,0xbf,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe9,0x4c11db7);
        uVar6 = crc32b(uVar6,0x80,0x4c11db7);
        uVar6 = crc32b(uVar6,0xb2,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe5,0x4c11db7);
        uVar6 = crc32b(uVar6,0x85,0x4c11db7);
        uVar6 = crc32b(uVar6,0xa5,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe5,0x4c11db7);
        uVar6 = crc32b(uVar6,0x8f,0x4c11db7);
        uVar7 = crc32b(uVar6,0xaf,0x4c11db7);
        DAT_05161bec = CONCAT44(2,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161bb0 + (long)iVar8 * 8) = &DAT_05161bec;
          iVar8 = (int)DAT_05161ba8 + 1;
          DAT_05161ba8 = CONCAT44(DAT_05161ba8._4_4_,iVar8);
        }
        puVar5 = DAT_05161bb0;
        if (1 < iVar8) {
          uVar17 = 0;
          uVar7 = iVar8 - 1;
          do {
            if ((int)uVar7 <= (int)uVar17) break;
            puVar19 = *(uint **)(puVar5 + (ulong)uVar17 * 8);
            uVar16 = (ulong)uVar17;
            if ((uVar7 - uVar17 & 1) == 0) {
              uVar18 = uVar16;
              puVar13 = puVar19;
            }
            else {
              uVar18 = uVar16 + 1;
              puVar13 = *(uint **)(puVar5 + uVar18 * 8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar19)) {
                *(uint **)(puVar5 + uVar18 * 8) = puVar19;
                *(uint **)(puVar5 + uVar16 * 8) = puVar13;
                puVar13 = puVar19;
              }
            }
            uVar20 = (ulong)uVar7;
            uVar7 = uVar17;
            if (~uVar16 + uVar20 != 0) {
              puVar9 = (undefined8 *)(puVar5 + uVar18 * 8 + 8);
              do {
                puVar19 = (uint *)*puVar9;
                uVar21 = (uint)uVar18;
                if (((puVar13 == (uint *)0x0) || (puVar19 == (uint *)0x0)) || (*puVar13 <= *puVar19)
                   ) {
                  puVar22 = (uint *)puVar9[1];
                  if (puVar19 != (uint *)0x0) goto LAB_01292f30;
LAB_01292ee0:
                  puVar19 = puVar22;
                }
                else {
                  puVar9[-1] = puVar19;
                  *puVar9 = puVar13;
                  puVar22 = (uint *)puVar9[1];
                  puVar19 = puVar13;
                  uVar7 = uVar21;
                  if (puVar13 == (uint *)0x0) goto LAB_01292ee0;
LAB_01292f30:
                  if ((puVar22 == (uint *)0x0) || (*puVar19 <= *puVar22)) goto LAB_01292ee0;
                  uVar7 = uVar21 + 1;
                  *puVar9 = puVar22;
                  puVar9[1] = puVar19;
                }
                uVar18 = uVar18 + 2;
                puVar9 = puVar9 + 2;
                puVar13 = puVar19;
              } while (uVar20 != uVar18);
            }
            if ((int)uVar7 <= (int)uVar17) break;
            uVar18 = (ulong)uVar7;
            puVar19 = *(uint **)(puVar5 + (ulong)uVar7 * 8);
            uVar17 = uVar7;
            do {
              puVar13 = *(uint **)(puVar5 + uVar18 * 8 + -8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar19 < *puVar13)) {
                uVar17 = (uint)uVar18;
                *(uint **)(puVar5 + uVar18 * 8 + -8) = puVar19;
                *(uint **)(puVar5 + uVar18 * 8) = puVar13;
                puVar13 = puVar19;
              }
              uVar18 = uVar18 - 1;
              puVar19 = puVar13;
            } while ((long)uVar16 < (long)uVar18);
          } while (uVar17 != uVar7);
        }
        DAT_05161ba4 = '\x01';
      }
      else if (DAT_05161ba4 != '\x01') goto LAB_012930ec;
      if ((int)DAT_05161ba8 != 0) {
        if ((int)DAT_05161ba8 < 2) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          iVar8 = (int)DAT_05161ba8 + -1;
          do {
            iVar10 = iVar8 + uVar7;
            if (iVar10 < 0 != SCARRY4(iVar8,uVar7)) {
              iVar10 = iVar10 + 1;
            }
            uVar17 = iVar10 >> 1;
            if (*(uint **)(DAT_05161bb0 + (long)(int)uVar17 * 8) == (uint *)0x0)
            goto joined_r0x012930d8;
            uVar21 = **(uint **)(DAT_05161bb0 + (long)(int)uVar17 * 8);
            if (uVar21 == uVar12) goto joined_r0x012930d8;
            if (uVar21 < uVar12) {
              uVar7 = uVar17 + 1;
            }
            else {
              iVar8 = uVar17 - 1;
            }
          } while ((int)uVar7 < iVar8);
        }
        uVar17 = uVar7;
        if ((*(uint **)(DAT_05161bb0 + (long)(int)uVar7 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_05161bb0 + (long)(int)uVar7 * 8) == uVar12)) {
joined_r0x012930d8:
          if ((uVar17 < 3) &&
             (uVar7 = *(uint *)(*(long *)(DAT_05161bb0 + (ulong)uVar17 * 8) + 4), uVar7 < 3)) {
            DAT_05161b98 = '\x01';
            DAT_05161b9c = uVar12;
            DAT_05161ba0 = uVar7;
            goto LAB_012932d0;
          }
        }
      }
LAB_012930ec:
      uVar7 = 0;
    }
  }
  else {
    if ((DAT_05161b30 == '\x01') && (DAT_05161b34 == uVar12)) {
      uVar7 = DAT_05161b38;
      if (2 < DAT_05161b38) goto LAB_012932c4;
    }
    else {
      if (((DAT_05161b68 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161b68), iVar8 != 0)) {
        DAT_05161b40 = 0x300000000;
        DAT_05161b48 = &DAT_05161b50;
        __cxa_guard_release(&DAT_05161b68);
      }
      if ((DAT_05161b70 & 1) == 0) {
        DAT_05161b70 = 1;
        if (((DAT_05161b90 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161b90), iVar8 != 0)) {
          _DAT_05161b74 = 0xffffffff00000000;
          DAT_05161b7c = 0xffffffff00000000;
          DAT_05161b84 = 0xffffffff00000000;
          __cxa_guard_release(&DAT_05161b90);
        }
        uVar6 = crc32b(0xffffffff,0x45,0x4c11db7);
        uVar7 = crc32b(uVar6,0x43,0x4c11db7);
        _DAT_05161b74 = (ulong)~uVar7;
        iVar8 = (int)DAT_05161b40;
        iVar10 = DAT_05161b40._4_4_;
        if ((int)DAT_05161b40 < DAT_05161b40._4_4_) {
          *(undefined4 **)(DAT_05161b48 + (long)(int)DAT_05161b40 * 8) = &DAT_05161b74;
          iVar8 = (int)DAT_05161b40 + 1;
          DAT_05161b40 = CONCAT44(DAT_05161b40._4_4_,iVar8);
          iVar10 = DAT_05161b40._4_4_;
        }
        uVar6 = crc32b(0xffffffff,0x57,0x4c11db7);
        uVar7 = crc32b(uVar6,0x43,0x4c11db7);
        DAT_05161b7c = CONCAT44(1,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161b48 + (long)iVar8 * 8) = &DAT_05161b7c;
          iVar8 = (int)DAT_05161b40 + 1;
          DAT_05161b40 = CONCAT44(DAT_05161b40._4_4_,iVar8);
          iVar10 = DAT_05161b40._4_4_;
        }
        uVar6 = crc32b(0xffffffff,0x33,0x4c11db7);
        uVar7 = crc32b(uVar6,0x42,0x4c11db7);
        DAT_05161b84 = CONCAT44(2,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161b48 + (long)iVar8 * 8) = &DAT_05161b84;
          iVar8 = (int)DAT_05161b40 + 1;
          DAT_05161b40 = CONCAT44(DAT_05161b40._4_4_,iVar8);
        }
        puVar5 = DAT_05161b48;
        if (1 < iVar8) {
          uVar17 = 0;
          uVar7 = iVar8 - 1;
          do {
            if ((int)uVar7 <= (int)uVar17) break;
            puVar19 = *(uint **)(puVar5 + (ulong)uVar17 * 8);
            uVar16 = (ulong)uVar17;
            if ((uVar7 - uVar17 & 1) == 0) {
              uVar18 = uVar16;
              puVar13 = puVar19;
            }
            else {
              uVar18 = uVar16 + 1;
              puVar13 = *(uint **)(puVar5 + uVar18 * 8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar19)) {
                *(uint **)(puVar5 + uVar18 * 8) = puVar19;
                *(uint **)(puVar5 + uVar16 * 8) = puVar13;
                puVar13 = puVar19;
              }
            }
            uVar20 = (ulong)uVar7;
            uVar7 = uVar17;
            if (~uVar16 + uVar20 != 0) {
              puVar9 = (undefined8 *)(puVar5 + uVar18 * 8 + 8);
              do {
                puVar19 = (uint *)*puVar9;
                uVar21 = (uint)uVar18;
                if (((puVar13 == (uint *)0x0) || (puVar19 == (uint *)0x0)) || (*puVar13 <= *puVar19)
                   ) {
                  puVar22 = (uint *)puVar9[1];
                  if (puVar19 != (uint *)0x0) goto LAB_01293240;
LAB_012931f0:
                  puVar19 = puVar22;
                }
                else {
                  puVar9[-1] = puVar19;
                  *puVar9 = puVar13;
                  puVar22 = (uint *)puVar9[1];
                  puVar19 = puVar13;
                  uVar7 = uVar21;
                  if (puVar13 == (uint *)0x0) goto LAB_012931f0;
LAB_01293240:
                  if ((puVar22 == (uint *)0x0) || (*puVar19 <= *puVar22)) goto LAB_012931f0;
                  uVar7 = uVar21 + 1;
                  *puVar9 = puVar22;
                  puVar9[1] = puVar19;
                }
                uVar18 = uVar18 + 2;
                puVar9 = puVar9 + 2;
                puVar13 = puVar19;
              } while (uVar20 != uVar18);
            }
            if ((int)uVar7 <= (int)uVar17) break;
            uVar18 = (ulong)uVar7;
            puVar19 = *(uint **)(puVar5 + (ulong)uVar7 * 8);
            uVar17 = uVar7;
            do {
              puVar13 = *(uint **)(puVar5 + uVar18 * 8 + -8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar19 < *puVar13)) {
                uVar17 = (uint)uVar18;
                *(uint **)(puVar5 + uVar18 * 8 + -8) = puVar19;
                *(uint **)(puVar5 + uVar18 * 8) = puVar13;
                puVar13 = puVar19;
              }
              uVar18 = uVar18 - 1;
              puVar19 = puVar13;
            } while ((long)uVar16 < (long)uVar18);
          } while (uVar17 != uVar7);
        }
        DAT_05161b3c = '\x01';
      }
      else if (DAT_05161b3c != '\x01') goto LAB_012932c4;
      if ((int)DAT_05161b40 != 0) {
        if ((int)DAT_05161b40 < 2) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          iVar8 = (int)DAT_05161b40 + -1;
          do {
            iVar10 = iVar8 + uVar7;
            if (iVar10 < 0 != SCARRY4(iVar8,uVar7)) {
              iVar10 = iVar10 + 1;
            }
            uVar17 = iVar10 >> 1;
            if (*(uint **)(DAT_05161b48 + (long)(int)uVar17 * 8) == (uint *)0x0) goto LAB_012932ac;
            uVar21 = **(uint **)(DAT_05161b48 + (long)(int)uVar17 * 8);
            if (uVar21 == uVar12) goto LAB_012932ac;
            if (uVar21 < uVar12) {
              uVar7 = uVar17 + 1;
            }
            else {
              iVar8 = uVar17 - 1;
            }
          } while ((int)uVar7 < iVar8);
        }
        uVar17 = uVar7;
        if ((*(uint **)(DAT_05161b48 + (long)(int)uVar7 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_05161b48 + (long)(int)uVar7 * 8) == uVar12)) {
LAB_012932ac:
          if ((uVar17 < 3) &&
             (uVar7 = *(uint *)(*(long *)(DAT_05161b48 + (ulong)uVar17 * 8) + 4), uVar7 < 3)) {
            DAT_05161b30 = '\x01';
            DAT_05161b34 = uVar12;
            DAT_05161b38 = uVar7;
            goto LAB_012932c8;
          }
        }
      }
LAB_012932c4:
      uVar7 = 0;
    }
LAB_012932c8:
  }
LAB_012932d0:
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 == 0) || (puVar19 == (uint *)0x0)) {
LAB_01293350:
    if (puVar13 != (uint *)0x0) goto LAB_01293354;
  }
  else {
    if ((*puVar19 != 0) && ((uVar12 = puVar19[1], uVar12 != 0 && ((ulong)(ushort)puVar19[2] != 0))))
    {
      lVar2 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
      if (lVar2 != 0) {
        uVar17 = 0;
        if ((ulong)uVar12 != 0) {
          uVar17 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar12);
        }
        if (*puVar19 <= uVar17) {
          uVar17 = 0xffffffff;
        }
        if (uVar17 < *(uint *)PTR_DAT_04bbbf50) {
          *(short *)(*(long *)(PTR_DAT_04bbbf50 + 8) + (long)(int)uVar17 * 2) = (short)uVar7;
          puVar13 = (uint *)(ulong)*param_1;
          goto LAB_01293350;
        }
      }
    }
LAB_01293354:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x4c);
        if (-1 < (int)uVar7) {
          uVar12 = 0;
          if ((uint *)((ulong)uVar7 + (long)param_1) != (uint *)0x0) {
            uVar12 = *(uint *)((ulong)uVar7 + (long)param_1);
          }
          goto LAB_0129342c;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar12 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar12 = 0, param_1 == puVar13)) goto LAB_0129342c;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
      uVar12 = 0;
      if (uVar16 == 0) goto LAB_0129342c;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x29346c33) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar12 = 0;
          goto LAB_0129342c;
        }
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x4c) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
    } while (*param_1 != 0);
  }
  uVar12 = 0;
LAB_0129342c:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    if ((DAT_05161c68 == '\x01') && (DAT_05161c6c == uVar12)) {
      uVar7 = DAT_05161c70;
      if (2 < DAT_05161c70) goto LAB_012939e8;
    }
    else {
      if (((DAT_05161ca0 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161ca0), iVar8 != 0)) {
        DAT_05161c78 = 0x300000000;
        DAT_05161c80 = &DAT_05161c88;
        __cxa_guard_release(&DAT_05161ca0);
      }
      if ((DAT_05161ca8 & 1) == 0) {
        DAT_05161ca8 = 1;
        if (((DAT_05161cc8 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161cc8), iVar8 != 0)) {
          DAT_05161cac = 0xffffffff00000000;
          DAT_05161cb4 = 0xffffffff00000000;
          DAT_05161cbc = 0xffffffff00000000;
          __cxa_guard_release(&DAT_05161cc8);
        }
        uVar6 = crc32b(0xffffffff,0xe5,0x4c11db7);
        uVar6 = crc32b(uVar6,0x8d,0x4c11db7);
        uVar6 = crc32b(uVar6,0x97,0x4c11db7);
        uVar1 = crc32b(uVar6,0xe4,0x4c11db7);
        uVar1 = crc32b(uVar1,0xb8,0x4c11db7);
        uVar1 = crc32b(uVar1,0xad,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
        uVar1 = crc32b(uVar1,0xb7,0x4c11db7);
        uVar7 = crc32b(uVar1,0x9e,0x4c11db7);
        DAT_05161cac = (ulong)~uVar7;
        iVar8 = (int)DAT_05161c78;
        iVar10 = DAT_05161c78._4_4_;
        if ((int)DAT_05161c78 < DAT_05161c78._4_4_) {
          *(ulong **)(DAT_05161c80 + (long)(int)DAT_05161c78 * 8) = &DAT_05161cac;
          iVar8 = (int)DAT_05161c78 + 1;
          DAT_05161c78 = CONCAT44(DAT_05161c78._4_4_,iVar8);
          iVar10 = DAT_05161c78._4_4_;
        }
        uVar1 = crc32b(uVar6,0xe6,0x4c11db7);
        uVar1 = crc32b(uVar1,0x9d,0x4c11db7);
        uVar1 = crc32b(uVar1,0xb1,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe4,0x4c11db7);
        uVar1 = crc32b(uVar1,0xb8,0x4c11db7);
        uVar1 = crc32b(uVar1,0xad,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
        uVar1 = crc32b(uVar1,0xb7,0x4c11db7);
        uVar7 = crc32b(uVar1,0x9e,0x4c11db7);
        DAT_05161cb4 = CONCAT44(1,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161c80 + (long)iVar8 * 8) = &DAT_05161cb4;
          iVar8 = (int)DAT_05161c78 + 1;
          DAT_05161c78 = CONCAT44(DAT_05161c78._4_4_,iVar8);
          iVar10 = DAT_05161c78._4_4_;
        }
        uVar6 = crc32b(uVar6,0xe8,0x4c11db7);
        uVar6 = crc32b(uVar6,0xa5,0x4c11db7);
        uVar6 = crc32b(uVar6,0xbf,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe4,0x4c11db7);
        uVar6 = crc32b(uVar6,0xb8,0x4c11db7);
        uVar6 = crc32b(uVar6,0xad,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe5,0x4c11db7);
        uVar6 = crc32b(uVar6,0xb7,0x4c11db7);
        uVar7 = crc32b(uVar6,0x9e,0x4c11db7);
        DAT_05161cbc = CONCAT44(2,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161c80 + (long)iVar8 * 8) = &DAT_05161cbc;
          iVar8 = (int)DAT_05161c78 + 1;
          DAT_05161c78 = CONCAT44(DAT_05161c78._4_4_,iVar8);
        }
        puVar5 = DAT_05161c80;
        if (1 < iVar8) {
          uVar17 = 0;
          uVar7 = iVar8 - 1;
          do {
            if ((int)uVar7 <= (int)uVar17) break;
            puVar19 = *(uint **)(puVar5 + (ulong)uVar17 * 8);
            uVar16 = (ulong)uVar17;
            if ((uVar7 - uVar17 & 1) == 0) {
              uVar18 = uVar16;
              puVar13 = puVar19;
            }
            else {
              uVar18 = uVar16 + 1;
              puVar13 = *(uint **)(puVar5 + uVar18 * 8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar19)) {
                *(uint **)(puVar5 + uVar18 * 8) = puVar19;
                *(uint **)(puVar5 + uVar16 * 8) = puVar13;
                puVar13 = puVar19;
              }
            }
            uVar20 = (ulong)uVar7;
            uVar7 = uVar17;
            if (~uVar16 + uVar20 != 0) {
              puVar9 = (undefined8 *)(puVar5 + uVar18 * 8 + 8);
              do {
                puVar19 = (uint *)*puVar9;
                uVar21 = (uint)uVar18;
                if (((puVar13 == (uint *)0x0) || (puVar19 == (uint *)0x0)) || (*puVar13 <= *puVar19)
                   ) {
                  puVar22 = (uint *)puVar9[1];
                  if (puVar19 != (uint *)0x0) goto LAB_01293820;
LAB_012937d0:
                  puVar19 = puVar22;
                }
                else {
                  puVar9[-1] = puVar19;
                  *puVar9 = puVar13;
                  puVar22 = (uint *)puVar9[1];
                  puVar19 = puVar13;
                  uVar7 = uVar21;
                  if (puVar13 == (uint *)0x0) goto LAB_012937d0;
LAB_01293820:
                  if ((puVar22 == (uint *)0x0) || (*puVar19 <= *puVar22)) goto LAB_012937d0;
                  uVar7 = uVar21 + 1;
                  *puVar9 = puVar22;
                  puVar9[1] = puVar19;
                }
                uVar18 = uVar18 + 2;
                puVar9 = puVar9 + 2;
                puVar13 = puVar19;
              } while (uVar20 != uVar18);
            }
            if ((int)uVar7 <= (int)uVar17) break;
            uVar18 = (ulong)uVar7;
            puVar19 = *(uint **)(puVar5 + (ulong)uVar7 * 8);
            uVar17 = uVar7;
            do {
              puVar13 = *(uint **)(puVar5 + uVar18 * 8 + -8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar19 < *puVar13)) {
                uVar17 = (uint)uVar18;
                *(uint **)(puVar5 + uVar18 * 8 + -8) = puVar19;
                *(uint **)(puVar5 + uVar18 * 8) = puVar13;
                puVar13 = puVar19;
              }
              uVar18 = uVar18 - 1;
              puVar19 = puVar13;
            } while ((long)uVar16 < (long)uVar18);
          } while (uVar17 != uVar7);
        }
        DAT_05161c74 = '\x01';
      }
      else if (DAT_05161c74 != '\x01') goto LAB_012939e8;
      if ((int)DAT_05161c78 != 0) {
        if ((int)DAT_05161c78 < 2) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          iVar8 = (int)DAT_05161c78 + -1;
          do {
            iVar10 = iVar8 + uVar7;
            if (iVar10 < 0 != SCARRY4(iVar8,uVar7)) {
              iVar10 = iVar10 + 1;
            }
            uVar17 = iVar10 >> 1;
            if (*(uint **)(DAT_05161c80 + (long)(int)uVar17 * 8) == (uint *)0x0)
            goto joined_r0x012939d4;
            uVar21 = **(uint **)(DAT_05161c80 + (long)(int)uVar17 * 8);
            if (uVar21 == uVar12) goto joined_r0x012939d4;
            if (uVar21 < uVar12) {
              uVar7 = uVar17 + 1;
            }
            else {
              iVar8 = uVar17 - 1;
            }
          } while ((int)uVar7 < iVar8);
        }
        uVar17 = uVar7;
        if ((*(uint **)(DAT_05161c80 + (long)(int)uVar7 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_05161c80 + (long)(int)uVar7 * 8) == uVar12)) {
joined_r0x012939d4:
          if ((uVar17 < 3) &&
             (uVar7 = *(uint *)(*(long *)(DAT_05161c80 + (ulong)uVar17 * 8) + 4), uVar7 < 3)) {
            DAT_05161c68 = '\x01';
            DAT_05161c6c = uVar12;
            DAT_05161c70 = uVar7;
            goto LAB_01293bd0;
          }
        }
      }
LAB_012939e8:
      uVar7 = 0;
    }
  }
  else {
    if ((DAT_05161c00 == '\x01') && (DAT_05161c04 == uVar12)) {
      uVar7 = DAT_05161c08;
      if (2 < DAT_05161c08) goto LAB_01293bc4;
    }
    else {
      if (((DAT_05161c38 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161c38), iVar8 != 0)) {
        DAT_05161c10 = 0x300000000;
        DAT_05161c18 = &DAT_05161c20;
        __cxa_guard_release(&DAT_05161c38);
      }
      if ((DAT_05161c40 & 1) == 0) {
        DAT_05161c40 = 1;
        if (((DAT_05161c60 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161c60), iVar8 != 0)) {
          _DAT_05161c44 = 0xffffffff00000000;
          DAT_05161c4c = 0xffffffff00000000;
          DAT_05161c54 = 0xffffffff00000000;
          __cxa_guard_release(&DAT_05161c60);
        }
        uVar6 = crc32b(0xffffffff,0x33,0x4c11db7);
        uVar6 = crc32b(uVar6,0x42,0x4c11db7);
        uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
        uVar6 = crc32b(uVar6,0x53,0x4c11db7);
        uVar7 = crc32b(uVar6,0x32,0x4c11db7);
        _DAT_05161c44 = (ulong)~uVar7;
        iVar8 = (int)DAT_05161c10;
        iVar10 = DAT_05161c10._4_4_;
        if ((int)DAT_05161c10 < DAT_05161c10._4_4_) {
          *(undefined4 **)(DAT_05161c18 + (long)(int)DAT_05161c10 * 8) = &DAT_05161c44;
          iVar8 = (int)DAT_05161c10 + 1;
          DAT_05161c10 = CONCAT44(DAT_05161c10._4_4_,iVar8);
          iVar10 = DAT_05161c10._4_4_;
        }
        uVar7 = crc32b(uVar6,0x45,0x4c11db7);
        DAT_05161c4c = CONCAT44(1,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161c18 + (long)iVar8 * 8) = &DAT_05161c4c;
          iVar8 = (int)DAT_05161c10 + 1;
          DAT_05161c10 = CONCAT44(DAT_05161c10._4_4_,iVar8);
          iVar10 = DAT_05161c10._4_4_;
        }
        uVar7 = crc32b(uVar6,0x57,0x4c11db7);
        DAT_05161c54 = CONCAT44(2,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161c18 + (long)iVar8 * 8) = &DAT_05161c54;
          iVar8 = (int)DAT_05161c10 + 1;
          DAT_05161c10 = CONCAT44(DAT_05161c10._4_4_,iVar8);
        }
        puVar5 = DAT_05161c18;
        if (1 < iVar8) {
          uVar17 = 0;
          uVar7 = iVar8 - 1;
          do {
            if ((int)uVar7 <= (int)uVar17) break;
            puVar19 = *(uint **)(puVar5 + (ulong)uVar17 * 8);
            uVar16 = (ulong)uVar17;
            if ((uVar7 - uVar17 & 1) == 0) {
              uVar18 = uVar16;
              puVar13 = puVar19;
            }
            else {
              uVar18 = uVar16 + 1;
              puVar13 = *(uint **)(puVar5 + uVar18 * 8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar19)) {
                *(uint **)(puVar5 + uVar18 * 8) = puVar19;
                *(uint **)(puVar5 + uVar16 * 8) = puVar13;
                puVar13 = puVar19;
              }
            }
            uVar20 = (ulong)uVar7;
            uVar7 = uVar17;
            if (~uVar16 + uVar20 != 0) {
              puVar9 = (undefined8 *)(puVar5 + uVar18 * 8 + 8);
              do {
                puVar19 = (uint *)*puVar9;
                uVar21 = (uint)uVar18;
                if (((puVar13 == (uint *)0x0) || (puVar19 == (uint *)0x0)) || (*puVar13 <= *puVar19)
                   ) {
                  puVar22 = (uint *)puVar9[1];
                  if (puVar19 != (uint *)0x0) goto LAB_01293b40;
LAB_01293af0:
                  puVar19 = puVar22;
                }
                else {
                  puVar9[-1] = puVar19;
                  *puVar9 = puVar13;
                  puVar22 = (uint *)puVar9[1];
                  puVar19 = puVar13;
                  uVar7 = uVar21;
                  if (puVar13 == (uint *)0x0) goto LAB_01293af0;
LAB_01293b40:
                  if ((puVar22 == (uint *)0x0) || (*puVar19 <= *puVar22)) goto LAB_01293af0;
                  uVar7 = uVar21 + 1;
                  *puVar9 = puVar22;
                  puVar9[1] = puVar19;
                }
                uVar18 = uVar18 + 2;
                puVar9 = puVar9 + 2;
                puVar13 = puVar19;
              } while (uVar20 != uVar18);
            }
            if ((int)uVar7 <= (int)uVar17) break;
            uVar18 = (ulong)uVar7;
            puVar19 = *(uint **)(puVar5 + (ulong)uVar7 * 8);
            uVar17 = uVar7;
            do {
              puVar13 = *(uint **)(puVar5 + uVar18 * 8 + -8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar19 < *puVar13)) {
                uVar17 = (uint)uVar18;
                *(uint **)(puVar5 + uVar18 * 8 + -8) = puVar19;
                *(uint **)(puVar5 + uVar18 * 8) = puVar13;
                puVar13 = puVar19;
              }
              uVar18 = uVar18 - 1;
              puVar19 = puVar13;
            } while ((long)uVar16 < (long)uVar18);
          } while (uVar17 != uVar7);
        }
        DAT_05161c0c = '\x01';
      }
      else if (DAT_05161c0c != '\x01') goto LAB_01293bc4;
      if ((int)DAT_05161c10 != 0) {
        if ((int)DAT_05161c10 < 2) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          iVar8 = (int)DAT_05161c10 + -1;
          do {
            iVar10 = iVar8 + uVar7;
            if (iVar10 < 0 != SCARRY4(iVar8,uVar7)) {
              iVar10 = iVar10 + 1;
            }
            uVar17 = iVar10 >> 1;
            if (*(uint **)(DAT_05161c18 + (long)(int)uVar17 * 8) == (uint *)0x0) goto LAB_01293bac;
            uVar21 = **(uint **)(DAT_05161c18 + (long)(int)uVar17 * 8);
            if (uVar21 == uVar12) goto LAB_01293bac;
            if (uVar21 < uVar12) {
              uVar7 = uVar17 + 1;
            }
            else {
              iVar8 = uVar17 - 1;
            }
          } while ((int)uVar7 < iVar8);
        }
        uVar17 = uVar7;
        if ((*(uint **)(DAT_05161c18 + (long)(int)uVar7 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_05161c18 + (long)(int)uVar7 * 8) == uVar12)) {
LAB_01293bac:
          if ((uVar17 < 3) &&
             (uVar7 = *(uint *)(*(long *)(DAT_05161c18 + (ulong)uVar17 * 8) + 4), uVar7 < 3)) {
            DAT_05161c00 = '\x01';
            DAT_05161c04 = uVar12;
            DAT_05161c08 = uVar7;
            goto LAB_01293bc8;
          }
        }
      }
LAB_01293bc4:
      uVar7 = 0;
    }
LAB_01293bc8:
  }
LAB_01293bd0:
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar12 = puVar19[1], uVar12 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01293c54;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01293c54;
    uVar17 = 0;
    if ((ulong)uVar12 != 0) {
      uVar17 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar12);
    }
    if (*puVar19 <= uVar17) {
      uVar17 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf58 <= uVar17) goto LAB_01293c54;
    *(short *)(*(long *)(PTR_DAT_04bbbf58 + 8) + (long)(int)uVar17 * 2) = (short)uVar7;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01293c54:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x50);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01293d40;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01293d40;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x50) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x10e744f0) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01293d3c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x50) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_01293d3c:
  uVar6 = 0;
LAB_01293d40:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01293e00;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01293e00;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf60 <= uVar12) goto LAB_01293e00;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf60 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01293e00:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x54);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01293ef0;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01293ef0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x54) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != -0x75807faa) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01293eec;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x54) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_01293eec:
  uVar6 = 0;
LAB_01293ef0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01293fb0;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01293fb0;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf68 <= uVar12) goto LAB_01293fb0;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf68 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01293fb0:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x58);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_012940a0;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_012940a0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x58) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x25d6cd9c) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129409c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x58) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129409c:
  uVar6 = 0;
LAB_012940a0:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 != 0) && (puVar19 != (uint *)0x0)) {
    if ((*puVar19 == 0) || ((uVar7 = puVar19[1], uVar7 == 0 || ((ulong)(ushort)puVar19[2] == 0))))
    goto LAB_01294160;
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 == 0) goto LAB_01294160;
    uVar12 = 0;
    if ((ulong)uVar7 != 0) {
      uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
    }
    if (*puVar19 <= uVar12) {
      uVar12 = 0xffffffff;
    }
    if (*(uint *)PTR_DAT_04bbbf70 <= uVar12) goto LAB_01294160;
    *(undefined2 *)(*(long *)(PTR_DAT_04bbbf70 + 8) + (long)(int)uVar12 * 2) = uVar11;
    puVar13 = (uint *)(ulong)*param_1;
  }
  if (puVar13 != (uint *)0x0) {
LAB_01294160:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x5c);
        if (-1 < (int)uVar7) {
          if ((undefined4 *)((ulong)uVar7 + (long)param_1) != (undefined4 *)0x0) {
            uVar6 = *(undefined4 *)((ulong)uVar7 + (long)param_1);
            goto LAB_01294250;
          }
          break;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar6 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar6 = 0, param_1 == puVar13)) goto LAB_01294250;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x5c) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x40b1f6da) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_0129424c;
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x5c) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0129424c:
  uVar6 = 0;
LAB_01294250:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    uVar7 = FUN_0128c2f0(uVar6);
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  else {
    uVar7 = FUN_0128bdf0();
    if (0x1f < uVar7) {
      uVar7 = 0;
    }
    uVar11 = (undefined2)uVar7;
  }
  puVar13 = (uint *)(ulong)*param_1;
  puVar19 = (uint *)((long)param_1 - (long)puVar13);
  if ((*param_1 == 0) || (puVar19 == (uint *)0x0)) {
LAB_0129430c:
    if (puVar13 != (uint *)0x0) goto LAB_01294310;
  }
  else {
    if ((*puVar19 != 0) && ((uVar7 = puVar19[1], uVar7 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
      lVar2 = 0xc;
      if (*(char *)((long)puVar19 + 10) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
      if (lVar2 != 0) {
        uVar12 = 0;
        if ((ulong)uVar7 != 0) {
          uVar12 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar7);
        }
        if (*puVar19 <= uVar12) {
          uVar12 = 0xffffffff;
        }
        if (uVar12 < *(uint *)PTR_DAT_04bbbf78) {
          *(undefined2 *)(*(long *)(PTR_DAT_04bbbf78 + 8) + (long)(int)uVar12 * 2) = uVar11;
          puVar13 = (uint *)(ulong)*param_1;
          goto LAB_0129430c;
        }
      }
    }
LAB_01294310:
    cVar15 = *puVar3;
    do {
      if (cVar15 == '\0') {
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        cVar15 = '\x01';
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x68) = 0xffffffff;
        *puVar3 = 1;
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
        puVar13 = (uint *)(ulong)*param_1;
      }
      else {
        uVar7 = *(uint *)(puVar4 + 0x60);
        if (-1 < (int)uVar7) {
          uVar12 = 0;
          if ((uint *)((ulong)uVar7 + (long)param_1) != (uint *)0x0) {
            uVar12 = *(uint *)((ulong)uVar7 + (long)param_1);
          }
          goto LAB_012943ec;
        }
        if (uVar7 != 0xffffffff) break;
      }
      uVar12 = 0;
      if ((puVar13 == (uint *)0x0) || (uVar12 = 0, param_1 == puVar13)) goto LAB_012943ec;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar13)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar13);
      if (lVar2 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar13));
      *(undefined4 *)(puVar4 + 0x60) = 0xfffffffe;
      uVar12 = 0;
      if (uVar16 == 0) goto LAB_012943ec;
      piVar14 = (int *)(lVar2 + 4);
      while (piVar14[-1] != 0x6971370a) {
        piVar14 = piVar14 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar12 = 0;
          goto LAB_012943ec;
        }
      }
      iVar8 = 0;
      if (*piVar14 != -1) {
        iVar8 = *piVar14;
      }
      *(int *)(puVar4 + 0x60) = iVar8;
      puVar13 = (uint *)(ulong)*param_1;
    } while (*param_1 != 0);
  }
  uVar12 = 0;
LAB_012943ec:
  if (((*param_1 == 0) || (lVar2 = (long)param_1 - (ulong)*param_1, lVar2 == 0)) ||
     (*(char *)(lVar2 + 0xb) == '\0')) {
    if ((DAT_05161d28 == '\x01') && (DAT_05161d2c == uVar12)) {
      uVar7 = DAT_05161d30;
      if (DAT_05161d30 < 2) goto LAB_01294ba0;
    }
    else {
      if (((DAT_05161d58 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161d58), iVar8 != 0)) {
        DAT_05161d38 = 0x200000000;
        DAT_05161d40 = &DAT_05161d48;
        __cxa_guard_release(&DAT_05161d58);
      }
      if ((DAT_05161d60 & 1) == 0) {
        DAT_05161d60 = 1;
        if (((DAT_05161d78 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161d78), iVar8 != 0)) {
          DAT_05161d64 = 0xffffffff00000000;
          DAT_05161d6c = 0xffffffff00000000;
          __cxa_guard_release(&DAT_05161d78);
        }
        uVar6 = crc32b(0xffffffff,0xe6,0x4c11db7);
        uVar6 = crc32b(uVar6,0x98,0x4c11db7);
        uVar6 = crc32b(uVar6,0xbc,0x4c11db7);
        uVar6 = crc32b(uVar6,0xef,0x4c11db7);
        uVar6 = crc32b(uVar6,0xbc,0x4c11db7);
        uVar6 = crc32b(uVar6,0x9a,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe5,0x4c11db7);
        uVar6 = crc32b(uVar6,0x8c,0x4c11db7);
        uVar6 = crc32b(uVar6,0x97,0x4c11db7);
        uVar1 = crc32b(uVar6,0xe6,0x4c11db7);
        uVar1 = crc32b(uVar1,0x9d,0x4c11db7);
        uVar1 = crc32b(uVar1,0xb1,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe3,0x4c11db7);
        uVar1 = crc32b(uVar1,0x80,0x4c11db7);
        uVar1 = crc32b(uVar1,0x81,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
        uVar1 = crc32b(uVar1,0xa4,0x4c11db7);
        uVar1 = crc32b(uVar1,0x9c,0x4c11db7);
        uVar1 = crc32b(uVar1,0xef,0x4c11db7);
        uVar1 = crc32b(uVar1,0xbc,0x4c11db7);
        uVar1 = crc32b(uVar1,0x9a,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe5,0x4c11db7);
        uVar1 = crc32b(uVar1,0x8c,0x4c11db7);
        uVar1 = crc32b(uVar1,0x97,0x4c11db7);
        uVar1 = crc32b(uVar1,0xe8,0x4c11db7);
        uVar1 = crc32b(uVar1,0xa5,0x4c11db7);
        uVar7 = crc32b(uVar1,0xbf,0x4c11db7);
        DAT_05161d64 = (ulong)~uVar7;
        iVar8 = (int)DAT_05161d38;
        iVar10 = DAT_05161d38._4_4_;
        if ((int)DAT_05161d38 < DAT_05161d38._4_4_) {
          *(ulong **)(DAT_05161d40 + (long)(int)DAT_05161d38 * 8) = &DAT_05161d64;
          iVar8 = (int)DAT_05161d38 + 1;
          DAT_05161d38 = CONCAT44(DAT_05161d38._4_4_,iVar8);
          iVar10 = DAT_05161d38._4_4_;
        }
        uVar6 = crc32b(uVar6,0xe8,0x4c11db7);
        uVar6 = crc32b(uVar6,0xa5,0x4c11db7);
        uVar6 = crc32b(uVar6,0xbf,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe3,0x4c11db7);
        uVar6 = crc32b(uVar6,0x80,0x4c11db7);
        uVar6 = crc32b(uVar6,0x81,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe5,0x4c11db7);
        uVar6 = crc32b(uVar6,0xa4,0x4c11db7);
        uVar6 = crc32b(uVar6,0x9c,0x4c11db7);
        uVar6 = crc32b(uVar6,0xef,0x4c11db7);
        uVar6 = crc32b(uVar6,0xbc,0x4c11db7);
        uVar6 = crc32b(uVar6,0x9a,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe5,0x4c11db7);
        uVar6 = crc32b(uVar6,0x8c,0x4c11db7);
        uVar6 = crc32b(uVar6,0x97,0x4c11db7);
        uVar6 = crc32b(uVar6,0xe6,0x4c11db7);
        uVar6 = crc32b(uVar6,0x9d,0x4c11db7);
        uVar7 = crc32b(uVar6,0xb1,0x4c11db7);
        DAT_05161d6c = CONCAT44(1,~uVar7);
        if (iVar8 < iVar10) {
          *(undefined8 **)(DAT_05161d40 + (long)iVar8 * 8) = &DAT_05161d6c;
          iVar8 = (int)DAT_05161d38 + 1;
          DAT_05161d38 = CONCAT44(DAT_05161d38._4_4_,iVar8);
        }
        puVar3 = DAT_05161d40;
        if (1 < iVar8) {
          uVar17 = 0;
          uVar7 = iVar8 - 1;
          do {
            if ((int)uVar7 <= (int)uVar17) break;
            puVar19 = *(uint **)(puVar3 + (ulong)uVar17 * 8);
            uVar16 = (ulong)uVar17;
            if ((uVar7 - uVar17 & 1) == 0) {
              uVar18 = uVar16;
              puVar13 = puVar19;
            }
            else {
              uVar18 = uVar16 + 1;
              puVar13 = *(uint **)(puVar3 + uVar18 * 8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar19)) {
                *(uint **)(puVar3 + uVar18 * 8) = puVar19;
                *(uint **)(puVar3 + uVar16 * 8) = puVar13;
                puVar13 = puVar19;
              }
            }
            uVar20 = (ulong)uVar7;
            uVar7 = uVar17;
            if (~uVar16 + uVar20 != 0) {
              puVar9 = (undefined8 *)(puVar3 + uVar18 * 8 + 8);
              do {
                puVar19 = (uint *)*puVar9;
                uVar21 = (uint)uVar18;
                if (((puVar13 == (uint *)0x0) || (puVar19 == (uint *)0x0)) || (*puVar13 <= *puVar19)
                   ) {
                  puVar22 = (uint *)puVar9[1];
                  if (puVar19 != (uint *)0x0) goto LAB_01294810;
LAB_012947c0:
                  puVar19 = puVar22;
                }
                else {
                  puVar9[-1] = puVar19;
                  *puVar9 = puVar13;
                  puVar22 = (uint *)puVar9[1];
                  puVar19 = puVar13;
                  uVar7 = uVar21;
                  if (puVar13 == (uint *)0x0) goto LAB_012947c0;
LAB_01294810:
                  if (puVar22 == (uint *)0x0) goto LAB_012947c0;
                  if (*puVar19 <= *puVar22) goto LAB_012947c0;
                  uVar7 = uVar21 + 1;
                  *puVar9 = puVar22;
                  puVar9[1] = puVar19;
                }
                uVar18 = uVar18 + 2;
                puVar9 = puVar9 + 2;
                puVar13 = puVar19;
              } while (uVar20 != uVar18);
            }
            if ((int)uVar7 <= (int)uVar17) break;
            uVar18 = (ulong)uVar7;
            puVar19 = *(uint **)(puVar3 + (ulong)uVar7 * 8);
            uVar17 = uVar7;
            do {
              puVar13 = *(uint **)(puVar3 + uVar18 * 8 + -8);
              if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar19 < *puVar13)) {
                uVar17 = (uint)uVar18;
                *(uint **)(puVar3 + uVar18 * 8 + -8) = puVar19;
                *(uint **)(puVar3 + uVar18 * 8) = puVar13;
                puVar13 = puVar19;
              }
              uVar18 = uVar18 - 1;
              puVar19 = puVar13;
            } while ((long)uVar16 < (long)uVar18);
          } while (uVar17 != uVar7);
        }
        DAT_05161d34 = '\x01';
      }
      else if (DAT_05161d34 != '\x01') goto LAB_012949b8;
      if ((int)DAT_05161d38 != 0) {
        if ((int)DAT_05161d38 < 2) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          iVar8 = (int)DAT_05161d38 + -1;
          do {
            iVar10 = iVar8 + uVar7;
            if (iVar10 < 0 != SCARRY4(iVar8,uVar7)) {
              iVar10 = iVar10 + 1;
            }
            uVar17 = iVar10 >> 1;
            if (*(uint **)(DAT_05161d40 + (long)(int)uVar17 * 8) == (uint *)0x0)
            goto joined_r0x012949a4;
            uVar21 = **(uint **)(DAT_05161d40 + (long)(int)uVar17 * 8);
            if (uVar21 == uVar12) goto joined_r0x012949a4;
            if (uVar21 < uVar12) {
              uVar7 = uVar17 + 1;
            }
            else {
              iVar8 = uVar17 - 1;
            }
          } while ((int)uVar7 < iVar8);
        }
        uVar17 = uVar7;
        if ((*(uint **)(DAT_05161d40 + (long)(int)uVar7 * 8) == (uint *)0x0) ||
           (**(uint **)(DAT_05161d40 + (long)(int)uVar7 * 8) == uVar12)) {
joined_r0x012949a4:
          if ((uVar17 < 2) &&
             (uVar7 = *(uint *)(*(long *)(DAT_05161d40 + (ulong)uVar17 * 8) + 4), uVar7 < 2)) {
            DAT_05161d28 = '\x01';
            DAT_05161d2c = uVar12;
            DAT_05161d30 = uVar7;
            goto LAB_01294ba0;
          }
        }
      }
    }
LAB_012949b8:
    uVar7 = 0;
    goto LAB_01294ba0;
  }
  if ((DAT_05161cd0 == '\x01') && (DAT_05161cd4 == uVar12)) {
    uVar7 = DAT_05161cd8;
    if (1 < DAT_05161cd8) goto LAB_01294b94;
  }
  else {
    if (((DAT_05161d00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161d00), iVar8 != 0)) {
      DAT_05161ce0 = 0x200000000;
      DAT_05161ce8 = &DAT_05161cf0;
      __cxa_guard_release(&DAT_05161d00);
    }
    if ((DAT_05161d08 & 1) == 0) {
      DAT_05161d08 = 1;
      if (((DAT_05161d20 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_05161d20), iVar8 != 0)) {
        _DAT_05161d0c = 0xffffffff00000000;
        DAT_05161d14 = 0xffffffff00000000;
        __cxa_guard_release(&DAT_05161d20);
      }
      uVar6 = crc32b(0xffffffff,0x44,0x4c11db7);
      uVar6 = crc32b(uVar6,0x4e,0x4c11db7);
      uVar1 = crc32b(uVar6,0x45,0x4c11db7);
      uVar1 = crc32b(uVar1,0x5f,0x4c11db7);
      uVar1 = crc32b(uVar1,0x4e,0x4c11db7);
      uVar1 = crc32b(uVar1,0x4e,0x4c11db7);
      uVar7 = crc32b(uVar1,0x57,0x4c11db7);
      _DAT_05161d0c = (ulong)~uVar7;
      iVar8 = (int)DAT_05161ce0;
      iVar10 = DAT_05161ce0._4_4_;
      if ((int)DAT_05161ce0 < DAT_05161ce0._4_4_) {
        *(undefined4 **)(DAT_05161ce8 + (long)(int)DAT_05161ce0 * 8) = &DAT_05161d0c;
        iVar8 = (int)DAT_05161ce0 + 1;
        DAT_05161ce0 = CONCAT44(DAT_05161ce0._4_4_,iVar8);
        iVar10 = DAT_05161ce0._4_4_;
      }
      uVar6 = crc32b(uVar6,0x57,0x4c11db7);
      uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
      uVar6 = crc32b(uVar6,0x4e,0x4c11db7);
      uVar6 = crc32b(uVar6,0x4e,0x4c11db7);
      uVar7 = crc32b(uVar6,0x45,0x4c11db7);
      DAT_05161d14 = CONCAT44(1,~uVar7);
      if (iVar8 < iVar10) {
        *(undefined8 **)(DAT_05161ce8 + (long)iVar8 * 8) = &DAT_05161d14;
        iVar8 = (int)DAT_05161ce0 + 1;
        DAT_05161ce0 = CONCAT44(DAT_05161ce0._4_4_,iVar8);
      }
      puVar3 = DAT_05161ce8;
      if (1 < iVar8) {
        uVar17 = 0;
        uVar7 = iVar8 - 1;
        do {
          if ((int)uVar7 <= (int)uVar17) break;
          puVar19 = *(uint **)(puVar3 + (ulong)uVar17 * 8);
          uVar16 = (ulong)uVar17;
          if ((uVar7 - uVar17 & 1) == 0) {
            uVar18 = uVar16;
            puVar13 = puVar19;
          }
          else {
            uVar18 = uVar16 + 1;
            puVar13 = *(uint **)(puVar3 + uVar18 * 8);
            if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar13 < *puVar19)) {
              *(uint **)(puVar3 + uVar18 * 8) = puVar19;
              *(uint **)(puVar3 + uVar16 * 8) = puVar13;
              puVar13 = puVar19;
            }
          }
          uVar20 = (ulong)uVar7;
          uVar7 = uVar17;
          if (~uVar16 + uVar20 != 0) {
            puVar9 = (undefined8 *)(puVar3 + uVar18 * 8 + 8);
            do {
              puVar19 = (uint *)*puVar9;
              uVar21 = (uint)uVar18;
              if (((puVar13 == (uint *)0x0) || (puVar19 == (uint *)0x0)) || (*puVar13 <= *puVar19))
              {
                puVar22 = (uint *)puVar9[1];
                if (puVar19 != (uint *)0x0) goto LAB_01294b10;
LAB_01294ac0:
                puVar19 = puVar22;
              }
              else {
                puVar9[-1] = puVar19;
                *puVar9 = puVar13;
                puVar22 = (uint *)puVar9[1];
                puVar19 = puVar13;
                uVar7 = uVar21;
                if (puVar13 == (uint *)0x0) goto LAB_01294ac0;
LAB_01294b10:
                if (puVar22 == (uint *)0x0) goto LAB_01294ac0;
                if (*puVar19 <= *puVar22) goto LAB_01294ac0;
                uVar7 = uVar21 + 1;
                *puVar9 = puVar22;
                puVar9[1] = puVar19;
              }
              uVar18 = uVar18 + 2;
              puVar9 = puVar9 + 2;
              puVar13 = puVar19;
            } while (uVar20 != uVar18);
          }
          if ((int)uVar7 <= (int)uVar17) break;
          uVar18 = (ulong)uVar7;
          puVar19 = *(uint **)(puVar3 + (ulong)uVar7 * 8);
          uVar17 = uVar7;
          do {
            puVar13 = *(uint **)(puVar3 + uVar18 * 8 + -8);
            if (((puVar19 != (uint *)0x0) && (puVar13 != (uint *)0x0)) && (*puVar19 < *puVar13)) {
              uVar17 = (uint)uVar18;
              *(uint **)(puVar3 + uVar18 * 8 + -8) = puVar19;
              *(uint **)(puVar3 + uVar18 * 8) = puVar13;
              puVar13 = puVar19;
            }
            uVar18 = uVar18 - 1;
            puVar19 = puVar13;
          } while ((long)uVar16 < (long)uVar18);
        } while (uVar17 != uVar7);
      }
      DAT_05161cdc = '\x01';
    }
    else if (DAT_05161cdc != '\x01') goto LAB_01294b94;
    if ((int)DAT_05161ce0 != 0) {
      if ((int)DAT_05161ce0 < 2) {
        uVar7 = 0;
      }
      else {
        uVar7 = 0;
        iVar8 = (int)DAT_05161ce0 + -1;
        do {
          iVar10 = iVar8 + uVar7;
          if (iVar10 < 0 != SCARRY4(iVar8,uVar7)) {
            iVar10 = iVar10 + 1;
          }
          uVar17 = iVar10 >> 1;
          if (*(uint **)(DAT_05161ce8 + (long)(int)uVar17 * 8) == (uint *)0x0) goto LAB_01294b7c;
          uVar21 = **(uint **)(DAT_05161ce8 + (long)(int)uVar17 * 8);
          if (uVar21 == uVar12) goto LAB_01294b7c;
          if (uVar21 < uVar12) {
            uVar7 = uVar17 + 1;
          }
          else {
            iVar8 = uVar17 - 1;
          }
        } while ((int)uVar7 < iVar8);
      }
      uVar17 = uVar7;
      if ((*(uint **)(DAT_05161ce8 + (long)(int)uVar7 * 8) == (uint *)0x0) ||
         (**(uint **)(DAT_05161ce8 + (long)(int)uVar7 * 8) == uVar12)) {
LAB_01294b7c:
        if ((uVar17 < 2) &&
           (uVar7 = *(uint *)(*(long *)(DAT_05161ce8 + (ulong)uVar17 * 8) + 4), uVar7 < 2)) {
          DAT_05161cd0 = '\x01';
          DAT_05161cd4 = uVar12;
          DAT_05161cd8 = uVar7;
          goto LAB_01294b98;
        }
      }
    }
LAB_01294b94:
    uVar7 = 0;
  }
LAB_01294b98:
LAB_01294ba0:
  puVar19 = (uint *)((long)param_1 - (ulong)*param_1);
  if ((((*param_1 != 0) && (puVar19 != (uint *)0x0)) && (*puVar19 != 0)) &&
     ((uVar12 = puVar19[1], uVar12 != 0 && ((ulong)(ushort)puVar19[2] != 0)))) {
    lVar2 = 0xc;
    if (*(char *)((long)puVar19 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar19 + lVar2 + (ulong)(ushort)puVar19[2] * 8;
    if (lVar2 != 0) {
      uVar17 = 0;
      if ((ulong)uVar12 != 0) {
        uVar17 = (uint)((ulong)((long)param_1 - lVar2) / (ulong)uVar12);
      }
      if (*puVar19 <= uVar17) {
        uVar17 = 0xffffffff;
      }
      if (uVar17 < *(uint *)PTR_DAT_04bbbf80) {
        *(short *)(*(long *)(PTR_DAT_04bbbf80 + 8) + (long)(int)uVar17 * 2) = (short)uVar7;
      }
    }
  }
  return;
}

