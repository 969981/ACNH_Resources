
undefined2 FUN_032358a0(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint *puVar8;
  char cVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  byte local_14 [4];
  
  local_14[0] = *(byte *)(param_1 + 0x1f8);
  uVar2 = *(undefined4 *)(param_1 + 0x220);
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar6 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
  if (lVar6 != 0) {
    if ((*(long **)(lVar6 + 0x18358) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x18358), puVar7 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar7)();
      uVar5 = uVar5 ^ 1;
    }
    puVar8 = (uint *)FUN_027a0fc0(*(long *)(lVar6 + 0x18340) + *(long *)(lVar6 + 0x18338),uVar2);
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar6 + 0x18358) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x18358) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
    puVar4 = PTR_DAT_04bb6428;
    puVar3 = PTR_DAT_04bb6420;
    if ((puVar8 != (uint *)0x0) && (*puVar8 != 0)) {
      cVar9 = *PTR_DAT_04bb6420;
      while( true ) {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar5 = *(uint *)(puVar4 + 0x1c);
          if (-1 < (int)uVar5) {
            if ((undefined2 *)((ulong)uVar5 + (long)puVar8) == (undefined2 *)0x0) {
              return 0;
            }
            return *(undefined2 *)((ulong)uVar5 + (long)puVar8);
          }
          if (uVar5 != 0xffffffff) {
            return 0;
          }
        }
        puVar10 = (uint *)(ulong)*puVar8;
        if (*puVar8 == 0) {
          return 0;
        }
        if (puVar8 == puVar10) break;
        lVar6 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar10)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar8 + (lVar6 - (long)puVar10);
        if (lVar6 == 0) {
          return 0;
        }
        uVar11 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 0x1c) = 0xfffffffe;
        if (uVar11 == 0) {
          return 0;
        }
        piVar12 = (int *)(lVar6 + 4);
        while (piVar12[-1] != 0x127ccfd9) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar4 + 0x1c) = iVar1;
        if (*puVar8 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return 0;
}

