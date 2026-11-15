
undefined1 FUN_022c94f4(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  char cVar7;
  uint *puVar8;
  int *piVar9;
  long lVar10;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  uint *local_28;
  
  lVar10 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar10 != 0) && (*(long *)(lVar10 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar10 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar10 + 0x488) != 0 && (*(long *)(*(long *)(lVar10 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar10 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar10 + 0x2b0) + 8) != 0)))) {
    uVar4 = FUN_0277d6c4();
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_0124c030(auStack_38,param_1);
      uVar6 = FUN_0123d890(local_28,4);
      puVar3 = PTR_DAT_04bbbc78;
      puVar2 = PTR_DAT_04bbbc70;
      if ((uVar6 & 1) == 0) {
        uVar6 = FUN_0124dcb0(auStack_38);
        if (((uVar6 & 1) == 0) && (iVar5 = FUN_0123db50(auStack_30,local_28), 6 < iVar5 - 0xbU)) {
          return 2;
        }
      }
      else if ((local_28 != (uint *)0x0) && (uVar4 = *local_28, uVar4 != 0)) {
        cVar7 = *PTR_DAT_04bbbc70;
        while( true ) {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined4 *)(puVar3 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 0x58) = 0xffffffffffffffff;
            uVar4 = *local_28;
          }
          else {
            uVar1 = *(uint *)(puVar3 + 0x4c);
            if (-1 < (int)uVar1) {
              if ((byte *)((ulong)uVar1 + (long)local_28) == (byte *)0x0) {
                return true;
              }
              return *(byte *)((ulong)uVar1 + (long)local_28) < 3;
            }
            if (uVar1 != 0xffffffff) {
              return true;
            }
          }
          puVar8 = (uint *)(ulong)uVar4;
          if (puVar8 == (uint *)0x0) {
            return true;
          }
          if (local_28 == puVar8) break;
          lVar10 = 0xc;
          if (*(char *)((long)local_28 + (10 - (long)puVar8)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)local_28 + (lVar10 - (long)puVar8);
          if (lVar10 == 0) {
            return true;
          }
          uVar6 = (ulong)*(ushort *)((long)local_28 + (8 - (long)puVar8));
          *(undefined4 *)(puVar3 + 0x4c) = 0xfffffffe;
          if (uVar6 == 0) {
            return true;
          }
          piVar9 = (int *)(lVar10 + 4);
          while (piVar9[-1] != -0xa58ccc9) {
            piVar9 = piVar9 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) {
              return true;
            }
          }
          iVar5 = 0;
          if (*piVar9 != -1) {
            iVar5 = *piVar9;
          }
          *(int *)(puVar3 + 0x4c) = iVar5;
          uVar4 = *local_28;
          if (uVar4 == 0) {
            return true;
          }
        }
        return true;
      }
      return true;
    }
  }
  return 2;
}

