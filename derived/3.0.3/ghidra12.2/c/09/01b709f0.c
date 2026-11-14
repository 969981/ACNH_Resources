
undefined8 FUN_01b709f0(undefined8 *param_1,undefined2 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  char cVar12;
  undefined2 uVar13;
  ulong uVar14;
  uint *puVar15;
  
  puVar7 = PTR_DAT_04bc0648;
  puVar6 = PTR_DAT_04bc0640;
  puVar8 = *(uint **)*param_1;
  if (*puVar8 == 0) {
LAB_01b70aec:
    uVar13 = 0;
  }
  else {
    cVar12 = *PTR_DAT_04bc0640;
    do {
      if (cVar12 == '\0') {
        cVar12 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar7 + 0x1c);
        if (-1 < (int)uVar2) {
          if ((undefined2 *)((ulong)uVar2 + (long)puVar8) == (undefined2 *)0x0) goto LAB_01b70aec;
          uVar13 = *(undefined2 *)((ulong)uVar2 + (long)puVar8);
          goto LAB_01b70af0;
        }
        if (uVar2 != 0xffffffff) goto LAB_01b70aec;
      }
      puVar15 = (uint *)(ulong)*puVar8;
      uVar13 = 0;
      if ((*puVar8 == 0) || (puVar8 == puVar15)) goto LAB_01b70af0;
      lVar11 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar15)) != '\0') {
        lVar11 = 0x1c;
      }
      lVar11 = (long)puVar8 + (lVar11 - (long)puVar15);
      if (lVar11 == 0) goto LAB_01b70aec;
      uVar14 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar15));
      *(undefined4 *)(puVar7 + 0x1c) = 0xfffffffe;
      uVar13 = 0;
      if (uVar14 == 0) goto LAB_01b70af0;
      piVar10 = (int *)(lVar11 + 4);
      while (piVar10[-1] != 0x54706054) {
        piVar10 = piVar10 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) {
          uVar13 = 0;
          goto LAB_01b70af0;
        }
      }
      iVar3 = 0;
      if (*piVar10 != -1) {
        iVar3 = *piVar10;
      }
      *(int *)(puVar7 + 0x1c) = iVar3;
    } while (*puVar8 != 0);
    uVar13 = 0;
  }
LAB_01b70af0:
  *param_2 = uVar13;
  lVar11 = 0;
  *(undefined8 *)(param_2 + 1) = 0;
  piVar10 = (int *)param_1[3];
  uVar13 = *(undefined2 *)param_1[2];
  iVar3 = *piVar10;
  if (iVar3 == 8) {
    iVar3 = 1;
  }
  lVar9 = 1;
  if (iVar3 != 1) {
    iVar3 = piVar10[1];
    if (iVar3 == 8) {
      iVar3 = 1;
    }
    if (iVar3 == 1) {
      lVar11 = 1;
    }
    else {
      iVar3 = piVar10[2];
      if (iVar3 == 8) {
        iVar3 = 1;
      }
      if (iVar3 == 1) {
        lVar11 = 2;
      }
      else {
        iVar3 = piVar10[3];
        if (iVar3 == 8) {
          iVar3 = 1;
        }
        if (iVar3 != 1) {
          return 0;
        }
        lVar11 = 3;
      }
    }
  }
  param_2[lVar11 + 1] = *(undefined2 *)param_1[1];
  piVar10 = (int *)param_1[3];
  iVar3 = *piVar10;
  iVar1 = piVar10[1];
  if (iVar3 == 8) {
    iVar3 = 1;
  }
  if (iVar1 == 8) {
    iVar1 = 1;
  }
  if ((iVar1 != 1) || (iVar3 != 1)) {
    iVar4 = piVar10[2];
    if (iVar4 == 8) {
      iVar4 = 1;
    }
    if ((iVar4 != 1) || (iVar1 != 1 && iVar3 != 1)) {
      iVar5 = piVar10[3];
      if (iVar5 == 8) {
        iVar5 = 1;
      }
      if (iVar5 != 1) {
        return 0;
      }
      if (iVar4 != 1 && (iVar1 != 1 && iVar3 != 1)) {
        return 0;
      }
      lVar9 = 3;
    }
    else {
      lVar9 = 2;
    }
  }
  param_2[lVar9 + 1] = uVar13;
  return 1;
}

