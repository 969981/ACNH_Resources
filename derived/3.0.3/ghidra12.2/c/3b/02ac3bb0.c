
undefined2 FUN_02ac3bb0(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long lVar9;
  char cVar10;
  ulong uVar11;
  int *piVar12;
  undefined1 auStack_30 [8];
  uint *local_28;
  
  iVar8 = FUN_02a6cb24(param_1 + 0x298);
  puVar7 = PTR_DAT_04bc4648;
  puVar6 = PTR_DAT_04bc4640;
  puVar5 = PTR_DAT_04bb5bd0;
  puVar4 = PTR_DAT_04bb5bc8;
  if (iVar8 == 4) {
    FUN_02b72930(auStack_30,*(undefined4 *)(param_1 + 0x2a0));
    puVar5 = PTR_DAT_04bc4658;
    puVar4 = PTR_DAT_04bc4650;
    if ((local_28 != (uint *)0x0) && (uVar2 = *local_28, uVar2 != 0)) {
      cVar10 = *PTR_DAT_04bc4650;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x30) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          uVar2 = *local_28;
        }
        else {
          uVar1 = *(uint *)(puVar5 + 0x1c);
          uVar11 = (ulong)uVar1;
          if (-1 < (int)uVar1) goto LAB_02ac3f1c;
          if (uVar1 != 0xffffffff) {
            return 0;
          }
        }
        puVar3 = (uint *)(ulong)uVar2;
        if (puVar3 == (uint *)0x0) {
          return 0;
        }
        if (local_28 == puVar3) {
          return 0;
        }
        lVar9 = 0xc;
        if (*(char *)((long)local_28 + (10 - (long)puVar3)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)local_28 + (lVar9 - (long)puVar3);
        if (lVar9 == 0) {
          return 0;
        }
        uVar11 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar3));
        *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
        if (uVar11 == 0) {
          return 0;
        }
        piVar12 = (int *)(lVar9 + 4);
        while (piVar12[-1] != 0x42bdd56f) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            return 0;
          }
        }
        iVar8 = 0;
        if (*piVar12 != -1) {
          iVar8 = *piVar12;
        }
        *(int *)(puVar5 + 0x1c) = iVar8;
        uVar2 = *local_28;
        if (uVar2 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar8 == 1) {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    uVar2 = (uint)*(ushort *)(param_1 + 0x2a8) - (uint)*(ushort *)(lVar9 + 0x5f0);
    if (((uVar2 < *(uint *)(lVar9 + 0x5d0)) &&
        (local_28 = *(uint **)(*(long *)(lVar9 + 0x5d8) + (long)(int)uVar2 * 8),
        local_28 != (uint *)0x0)) && (uVar2 = *local_28, uVar2 != 0)) {
      cVar10 = *PTR_DAT_04bb5bc8;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x48) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
          uVar2 = *local_28;
        }
        else {
          uVar1 = *(uint *)(puVar5 + 0x14);
          uVar11 = (ulong)uVar1;
          if (-1 < (int)uVar1) goto LAB_02ac3f1c;
          if (uVar1 != 0xffffffff) {
            return 0;
          }
        }
        puVar3 = (uint *)(ulong)uVar2;
        if (puVar3 == (uint *)0x0) {
          return 0;
        }
        if (local_28 == puVar3) {
          return 0;
        }
        lVar9 = 0xc;
        if (*(char *)((long)local_28 + (10 - (long)puVar3)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)local_28 + (lVar9 - (long)puVar3);
        if (lVar9 == 0) {
          return 0;
        }
        uVar11 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar3));
        *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
        if (uVar11 == 0) {
          return 0;
        }
        piVar12 = (int *)(lVar9 + 4);
        while (piVar12[-1] != 0x42bdd56f) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            return 0;
          }
        }
        iVar8 = 0;
        if (*piVar12 != -1) {
          iVar8 = *piVar12;
        }
        *(int *)(puVar5 + 0x14) = iVar8;
        uVar2 = *local_28;
        if (uVar2 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  else if (iVar8 == 0) {
    lVar9 = *(long *)PTR_DAT_04bb5008;
    uVar2 = (uint)*(ushort *)(param_1 + 0x2ac) - (uint)*(ushort *)(lVar9 + 0xdf0);
    if (((uVar2 < *(uint *)(lVar9 + 0xdd0)) &&
        (local_28 = *(uint **)(*(long *)(lVar9 + 0xdd8) + (long)(int)uVar2 * 8),
        local_28 != (uint *)0x0)) && (uVar2 = *local_28, uVar2 != 0)) {
      cVar10 = *PTR_DAT_04bc4640;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined4 *)(puVar7 + 0x28) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          uVar2 = *local_28;
        }
        else {
          uVar1 = *(uint *)(puVar7 + 0x10);
          uVar11 = (ulong)uVar1;
          if (-1 < (int)uVar1) {
LAB_02ac3f1c:
            if ((undefined2 *)(uVar11 + (long)local_28) == (undefined2 *)0x0) {
              return 0;
            }
            return *(undefined2 *)(uVar11 + (long)local_28);
          }
          if (uVar1 != 0xffffffff) {
            return 0;
          }
        }
        puVar3 = (uint *)(ulong)uVar2;
        if (puVar3 == (uint *)0x0) {
          return 0;
        }
        if (local_28 == puVar3) {
          return 0;
        }
        lVar9 = 0xc;
        if (*(char *)((long)local_28 + (10 - (long)puVar3)) != '\0') {
          lVar9 = 0x1c;
        }
        lVar9 = (long)local_28 + (lVar9 - (long)puVar3);
        if (lVar9 == 0) {
          return 0;
        }
        uVar11 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar3));
        *(undefined4 *)(puVar7 + 0x10) = 0xfffffffe;
        if (uVar11 == 0) {
          return 0;
        }
        piVar12 = (int *)(lVar9 + 4);
        while (piVar12[-1] != 0x39cb9646) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            return 0;
          }
        }
        iVar8 = 0;
        if (*piVar12 != -1) {
          iVar8 = *piVar12;
        }
        *(int *)(puVar7 + 0x10) = iVar8;
        uVar2 = *local_28;
        if (uVar2 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}

