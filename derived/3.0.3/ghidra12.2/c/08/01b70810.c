
undefined8 FUN_01b70810(undefined8 *param_1,undefined2 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  long lVar6;
  char cVar7;
  undefined2 uVar8;
  ulong uVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar4 = PTR_DAT_04bc0648;
  puVar3 = PTR_DAT_04bc0640;
  puVar5 = *(uint **)*param_1;
  if (*puVar5 == 0) {
LAB_01b7090c:
    uVar8 = 0;
  }
  else {
    cVar7 = *PTR_DAT_04bc0640;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar1 = *(uint *)(puVar4 + 0x1c);
        if (-1 < (int)uVar1) {
          if ((undefined2 *)((ulong)uVar1 + (long)puVar5) == (undefined2 *)0x0) goto LAB_01b7090c;
          uVar8 = *(undefined2 *)((ulong)uVar1 + (long)puVar5);
          goto LAB_01b70910;
        }
        if (uVar1 != 0xffffffff) goto LAB_01b7090c;
      }
      puVar10 = (uint *)(ulong)*puVar5;
      uVar8 = 0;
      if ((*puVar5 == 0) || (puVar5 == puVar10)) goto LAB_01b70910;
      lVar6 = 0xc;
      if (*(char *)((long)puVar5 + (10 - (long)puVar10)) != '\0') {
        lVar6 = 0x1c;
      }
      lVar6 = (long)puVar5 + (lVar6 - (long)puVar10);
      if (lVar6 == 0) goto LAB_01b7090c;
      uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar10));
      *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
      uVar8 = 0;
      if (uVar9 == 0) goto LAB_01b70910;
      piVar11 = (int *)(lVar6 + 4);
      while (piVar11[-1] != 0x54706054) {
        piVar11 = piVar11 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          uVar8 = 0;
          goto LAB_01b70910;
        }
      }
      iVar2 = 0;
      if (*piVar11 != -1) {
        iVar2 = *piVar11;
      }
      *(int *)(puVar4 + 0x1c) = iVar2;
    } while (*puVar5 != 0);
    uVar8 = 0;
  }
LAB_01b70910:
  *param_2 = uVar8;
  lVar6 = 0;
  *(undefined8 *)(param_2 + 1) = 0;
  piVar11 = (int *)param_1[2];
  iVar2 = *piVar11;
  if (iVar2 == 8) {
    iVar2 = 1;
  }
  if (iVar2 != 1) {
    iVar2 = piVar11[1];
    if (iVar2 == 8) {
      iVar2 = 1;
    }
    if (iVar2 == 1) {
      lVar6 = 1;
    }
    else {
      iVar2 = piVar11[2];
      if (iVar2 == 8) {
        iVar2 = 1;
      }
      if (iVar2 == 1) {
        lVar6 = 2;
      }
      else {
        iVar2 = piVar11[3];
        if (iVar2 == 8) {
          iVar2 = 1;
        }
        if (iVar2 != 1) {
          return 0;
        }
        lVar6 = 3;
      }
    }
  }
  param_2[lVar6 + 1] = *(undefined2 *)param_1[1];
  return 1;
}

