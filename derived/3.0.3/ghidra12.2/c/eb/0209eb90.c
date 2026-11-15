
undefined4 FUN_0209eb90(uint *param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  char cVar7;
  byte bVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar5 = PTR_DAT_04bc1568;
  puVar4 = PTR_DAT_04bc1560;
  if (*param_1 != 0) {
    cVar7 = *PTR_DAT_04bc1560;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x38);
        if (-1 < (int)uVar3) {
          if ((byte *)((ulong)uVar3 + (long)param_1) != (byte *)0x0) {
            bVar8 = *(byte *)((ulong)uVar3 + (long)param_1);
            goto LAB_0209eca0;
          }
          break;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*param_1;
      bVar8 = 3;
      if ((*param_1 == 0) || (param_1 == puVar10)) goto LAB_0209eca0;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x38) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != 0x38954eb6) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_0209ec9c;
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar5 + 0x38) = iVar1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0209ec9c:
  bVar8 = 3;
LAB_0209eca0:
  puVar5 = PTR_DAT_04bc1568;
  puVar4 = PTR_DAT_04bc1560;
  if (2 < bVar8) {
    bVar8 = 3;
  }
  if (bVar8 != 3) {
    return 0;
  }
  if (*param_1 != 0) {
    cVar7 = *PTR_DAT_04bc1560;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x28);
        if (-1 < (int)uVar3) {
          if ((byte *)((ulong)uVar3 + (long)param_1) != (byte *)0x0) {
            bVar8 = *(byte *)((ulong)uVar3 + (long)param_1);
            goto LAB_0209edcc;
          }
          break;
        }
        if (uVar3 != 0xffffffff) break;
      }
      puVar10 = (uint *)(ulong)*param_1;
      bVar8 = 2;
      if ((*param_1 == 0) || (param_1 == puVar10)) goto LAB_0209edcc;
      lVar2 = 0xc;
      if (*(char *)((long)param_1 + (10 - (long)puVar10)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)param_1 + (lVar2 - (long)puVar10);
      if (lVar2 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar10));
      *(undefined4 *)(puVar5 + 0x28) = 0xfffffffe;
      if (uVar9 == 0) break;
      piVar11 = (int *)(lVar2 + 4);
      while (piVar11[-1] != -0x5bd4ec32) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) goto LAB_0209edc8;
      }
      iVar1 = 0;
      if (*piVar11 != -1) {
        iVar1 = *piVar11;
      }
      *(int *)(puVar5 + 0x28) = iVar1;
      if (*param_1 == 0) break;
    } while( true );
  }
LAB_0209edc8:
  bVar8 = 2;
LAB_0209edcc:
  puVar5 = PTR_DAT_04bc1568;
  puVar4 = PTR_DAT_04bc1560;
  if (1 < bVar8) {
    bVar8 = 2;
  }
  if (bVar8 == 0) {
    return 1;
  }
  if (*param_1 == 0) {
LAB_0209eee8:
    bVar8 = 2;
LAB_0209eeec:
    if (1 < bVar8) {
      bVar8 = 2;
    }
    uVar6 = 2;
    if (bVar8 != 0) {
      uVar6 = 3;
    }
    return uVar6;
  }
  cVar7 = *PTR_DAT_04bc1560;
  do {
    if (cVar7 == '\0') {
      cVar7 = '\x01';
      *(undefined8 *)puVar5 = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
      *puVar4 = 1;
      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
      *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
    }
    else {
      uVar3 = *(uint *)(puVar5 + 0x3c);
      if (-1 < (int)uVar3) {
        if ((byte *)((ulong)uVar3 + (long)param_1) != (byte *)0x0) {
          bVar8 = *(byte *)((ulong)uVar3 + (long)param_1);
          goto LAB_0209eeec;
        }
        goto LAB_0209eee8;
      }
      if (uVar3 != 0xffffffff) goto LAB_0209eee8;
    }
    puVar10 = (uint *)(ulong)*param_1;
    bVar8 = 2;
    if ((*param_1 == 0) || (param_1 == puVar10)) goto LAB_0209eeec;
    lVar2 = 0xc;
    if (*(char *)((long)param_1 + (10 - (long)puVar10)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)param_1 + (lVar2 - (long)puVar10);
    if (lVar2 == 0) goto LAB_0209eee8;
    uVar9 = (ulong)*(ushort *)((long)param_1 + (8 - (long)puVar10));
    *(undefined4 *)(puVar5 + 0x3c) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_0209eee8;
    piVar11 = (int *)(lVar2 + 4);
    while (piVar11[-1] != 0x1f3bcf5e) {
      piVar11 = piVar11 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_0209eee8;
    }
    iVar1 = 0;
    if (*piVar11 != -1) {
      iVar1 = *piVar11;
    }
    *(int *)(puVar5 + 0x3c) = iVar1;
    if (*param_1 == 0) goto LAB_0209eee8;
  } while( true );
}

