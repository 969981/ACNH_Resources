
undefined1 FUN_01c5c590(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  char cVar9;
  int *piVar10;
  uint *puVar11;
  undefined *local_30;
  uint *local_28;
  
  local_30 = PTR_DAT_04bc0e38 + 0x10;
  uVar4 = (uint)*(ushort *)(param_1 + 10) - (uint)DAT_0534e320;
  if (uVar4 < DAT_0534e300) {
    puVar11 = *(uint **)(DAT_0534e308 + (long)(int)uVar4 * 8);
    local_28 = puVar11;
    uVar8 = FUN_01c55ab0(&local_30);
    puVar7 = PTR_DAT_04bc0e48;
    puVar6 = PTR_DAT_04bc0e40;
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    if (puVar11 == (uint *)0x0) {
      return 0;
    }
    uVar4 = *puVar11;
    if (uVar4 != 0) {
      cVar9 = *PTR_DAT_04bc0e40;
      while( true ) {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          uVar4 = *puVar11;
        }
        else {
          uVar3 = *(uint *)(puVar7 + 0x14);
          if (-1 < (int)uVar3) {
            if ((undefined1 *)((ulong)uVar3 + (long)puVar11) == (undefined1 *)0x0) {
              return 0;
            }
            return *(undefined1 *)((ulong)uVar3 + (long)puVar11);
          }
          if (uVar3 != 0xffffffff) {
            return 0;
          }
        }
        puVar5 = (uint *)(ulong)uVar4;
        if (puVar5 == (uint *)0x0) {
          return 0;
        }
        if (puVar11 == puVar5) break;
        lVar2 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar5)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar11 + (lVar2 - (long)puVar5);
        if (lVar2 == 0) {
          return 0;
        }
        uVar8 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar5));
        *(undefined4 *)(puVar7 + 0x14) = 0xfffffffe;
        if (uVar8 == 0) {
          return 0;
        }
        piVar10 = (int *)(lVar2 + 4);
        while (piVar10[-1] != -0x2708948a) {
          piVar10 = piVar10 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            return 0;
          }
        }
        iVar1 = 0;
        if (*piVar10 != -1) {
          iVar1 = *piVar10;
        }
        *(int *)(puVar7 + 0x14) = iVar1;
        uVar4 = *puVar11;
        if (uVar4 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  else {
    local_28 = (uint *)0x0;
    FUN_01c55ab0(&local_30);
  }
  return 0;
}

