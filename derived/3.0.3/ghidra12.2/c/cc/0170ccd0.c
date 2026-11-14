
undefined8 FUN_0170ccd0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined8 *puVar7;
  char cVar8;
  uint *puVar9;
  ulong uVar10;
  int *piVar11;
  undefined4 local_14;
  
  if (*(long *)(param_1 + 0x1138) == 0) {
    puVar7 = &DAT_04c931a0;
  }
  else {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x1138) + 0x88);
  }
  if (*(char *)puVar7[1] != '\0') {
    local_14 = *(undefined4 *)(puVar7 + 0xb);
    puVar6 = (uint *)FUN_0171ec68(&local_14);
    puVar5 = PTR_DAT_04bbde90;
    puVar4 = PTR_DAT_04bbde88;
    if ((puVar6 != (uint *)0x0) && (*puVar6 != 0)) {
      cVar8 = *PTR_DAT_04bbde88;
      while( true ) {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          uVar3 = *puVar6;
        }
        else {
          uVar3 = *(uint *)(puVar5 + 0x20);
          if (-1 < (int)uVar3) {
            if ((char *)((ulong)uVar3 + (long)puVar6) == (char *)0x0) {
              return 0;
            }
            if (*(char *)((ulong)uVar3 + (long)puVar6) == '\0') {
              return 0;
            }
            return 1;
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
          uVar3 = *puVar6;
        }
        if (uVar3 == 0) {
          return 0;
        }
        puVar9 = (uint *)(ulong)uVar3;
        if (puVar6 == puVar9) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar9)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar9);
        if (lVar2 == 0) {
          return 0;
        }
        uVar10 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar9));
        *(undefined4 *)(puVar5 + 0x20) = 0xfffffffe;
        if (uVar10 == 0) {
          return 0;
        }
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != -0x3cee94b) {
          piVar11 = piVar11 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar5 + 0x20) = iVar1;
        if (*puVar6 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

