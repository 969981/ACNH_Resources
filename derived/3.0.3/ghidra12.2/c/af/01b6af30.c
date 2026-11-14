
void FUN_01b6af30(uint *param_1,uint *param_2,uint *param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  ulong uVar8;
  uint *puVar9;
  int *piVar10;
  
  puVar5 = PTR_DAT_04bc0610;
  puVar4 = PTR_DAT_04bc0608;
  if (*param_1 == 0) {
LAB_01b6b024:
    uVar7 = 0;
  }
  else {
    cVar6 = *PTR_DAT_04bc0608;
    do {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(uint *)(puVar5 + 0x10);
        if (-1 < (int)uVar7) {
          if (((byte *)((ulong)uVar7 + (long)param_1) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar7 + (long)param_1), uVar7 = (uint)bVar3, 0x11 < bVar3))
          goto LAB_01b6b024;
          goto LAB_01b6b028;
        }
        if (uVar7 != 0xffffffff) goto LAB_01b6b024;
      }
      puVar9 = (uint *)(ulong)*param_1;
      uVar7 = 0;
      if ((*param_1 == 0) || (param_1 == puVar9)) goto LAB_01b6b028;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) goto LAB_01b6b024;
      uVar8 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
      uVar7 = 0;
      if (uVar8 == 0) goto LAB_01b6b028;
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != -0x1c342f70) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar7 = 0;
          goto LAB_01b6b028;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar5 + 0x10) = iVar1;
    } while (*param_1 != 0);
    uVar7 = 0;
  }
LAB_01b6b028:
  *param_2 = uVar7;
  if (*param_1 == 0) {
LAB_01b6b104:
    uVar7 = 0;
  }
  else {
    cVar6 = *puVar4;
    do {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(uint *)(puVar5 + 0x14);
        if (-1 < (int)uVar7) {
          if (((byte *)((ulong)uVar7 + (long)param_1) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar7 + (long)param_1), uVar7 = (uint)bVar3, 0x11 < bVar3))
          goto LAB_01b6b104;
          goto LAB_01b6b108;
        }
        if (uVar7 != 0xffffffff) goto LAB_01b6b104;
      }
      puVar9 = (uint *)(ulong)*param_1;
      uVar7 = 0;
      if ((*param_1 == 0) || (param_1 == puVar9)) goto LAB_01b6b108;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) goto LAB_01b6b104;
      uVar8 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
      uVar7 = 0;
      if (uVar8 == 0) goto LAB_01b6b108;
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != 0x5b77b7f5) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar7 = 0;
          goto LAB_01b6b108;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar5 + 0x14) = iVar1;
    } while (*param_1 != 0);
    uVar7 = 0;
  }
LAB_01b6b108:
  *param_3 = uVar7;
  if (*param_1 == 0) {
LAB_01b6b1e4:
    uVar7 = 0;
  }
  else {
    cVar6 = *puVar4;
    do {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(uint *)(puVar5 + 0x18);
        if (-1 < (int)uVar7) {
          if (((byte *)((ulong)uVar7 + (long)param_1) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar7 + (long)param_1), uVar7 = (uint)bVar3, 0x11 < bVar3))
          goto LAB_01b6b1e4;
          goto LAB_01b6b1e8;
        }
        if (uVar7 != 0xffffffff) goto LAB_01b6b1e4;
      }
      puVar9 = (uint *)(ulong)*param_1;
      uVar7 = 0;
      if ((*param_1 == 0) || (param_1 == puVar9)) goto LAB_01b6b1e8;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) goto LAB_01b6b1e4;
      uVar8 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
      uVar7 = 0;
      if (uVar8 == 0) goto LAB_01b6b1e8;
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != 0x49c2181b) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar7 = 0;
          goto LAB_01b6b1e8;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar5 + 0x18) = iVar1;
    } while (*param_1 != 0);
    uVar7 = 0;
  }
LAB_01b6b1e8:
  *param_4 = uVar7;
  if (*param_1 == 0) {
LAB_01b6b2c4:
    uVar7 = 0;
  }
  else {
    cVar6 = *puVar4;
    do {
      if (cVar6 == '\0') {
        cVar6 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar7 = *(uint *)(puVar5 + 0x1c);
        if (-1 < (int)uVar7) {
          if (((byte *)((ulong)uVar7 + (long)param_1) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar7 + (long)param_1), uVar7 = (uint)bVar3, 0x11 < bVar3))
          goto LAB_01b6b2c4;
          goto LAB_01b6b2c8;
        }
        if (uVar7 != 0xffffffff) goto LAB_01b6b2c4;
      }
      puVar9 = (uint *)(ulong)*param_1;
      uVar7 = 0;
      if ((*param_1 == 0) || (param_1 == puVar9)) goto LAB_01b6b2c8;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar9)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar9);
      if (lVar2 == 0) goto LAB_01b6b2c4;
      uVar8 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar9));
      *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
      uVar7 = 0;
      if (uVar8 == 0) goto LAB_01b6b2c8;
      piVar10 = (int *)(lVar2 + 4);
      while (piVar10[-1] != -0xe818082) {
        piVar10 = piVar10 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          uVar7 = 0;
          goto LAB_01b6b2c8;
        }
      }
      iVar1 = 0;
      if (*piVar10 != -1) {
        iVar1 = *piVar10;
      }
      *(int *)(puVar5 + 0x1c) = iVar1;
    } while (*param_1 != 0);
    uVar7 = 0;
  }
LAB_01b6b2c8:
  *param_5 = uVar7;
  return;
}

