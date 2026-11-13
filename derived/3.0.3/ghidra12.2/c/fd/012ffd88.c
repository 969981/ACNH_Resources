
undefined8 FUN_012ffd88(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  char cVar9;
  uint *puVar10;
  int *piVar11;
  long lVar12;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  uint *local_38;
  
  puVar3 = PTR_DAT_04bbbc68;
  uVar6 = *(int *)(param_2 + 8) - *(int *)(param_1 + 0x160);
  uVar2 = *(int *)(param_2 + 0xc) - *(int *)(param_1 + 0x164);
  lVar12 = *(long *)PTR_DAT_04bbbc68;
  lVar1 = param_1 + 0x30;
  if (uVar2 < 3 && uVar6 < 3) {
    lVar1 = param_1 + 0x30 + (ulong)(uVar2 * 3 + uVar6) * 0x20;
  }
  if (lVar12 != 0) {
    if (((((*(long *)(lVar12 + 0xb0) != 0) && (*(long *)(*(long *)(lVar12 + 0xb0) + 8) != 0)) &&
         (*(long *)(lVar12 + 0x488) != 0)) &&
        ((*(long *)(*(long *)(lVar12 + 0x488) + 8) != 0 && (*(long *)(lVar12 + 0x2b0) != 0)))) &&
       (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) != 0)) {
      uVar6 = FUN_0277d6c4(lVar1);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_0124c030(auStack_48,lVar1);
        uVar8 = FUN_0123d890(local_38,4);
        puVar5 = PTR_DAT_04bbbc78;
        puVar4 = PTR_DAT_04bbbc70;
        if ((uVar8 & 1) == 0) {
          iVar7 = FUN_0123db50(auStack_40,local_38);
          if ((iVar7 - 2U & 0xfffffff9) == 0) {
            return 1;
          }
        }
        else if ((local_38 != (uint *)0x0) && (uVar6 = *local_38, uVar6 != 0)) {
          cVar9 = *PTR_DAT_04bbbc70;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
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
              uVar6 = *local_38;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 0x4c);
              if (-1 < (int)uVar2) {
                if (((char *)((ulong)uVar2 + (long)local_38) != (char *)0x0) &&
                   (*(char *)((ulong)uVar2 + (long)local_38) != '\0')) {
                  return 1;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)uVar6;
            if ((puVar10 == (uint *)0x0) || (local_38 == puVar10)) break;
            lVar12 = 0xc;
            if (*(char *)((long)local_38 + (10 - (long)puVar10)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)local_38 + (lVar12 - (long)puVar10);
            if (lVar12 == 0) break;
            uVar8 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar10));
            *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
            if (uVar8 == 0) break;
            piVar11 = (int *)(lVar12 + 4);
            while (piVar11[-1] != -0xa58ccc9) {
              piVar11 = piVar11 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_012fff58;
            }
            iVar7 = 0;
            if (*piVar11 != -1) {
              iVar7 = *piVar11;
            }
            *(int *)(puVar5 + 0x4c) = iVar7;
            uVar6 = *local_38;
            if (uVar6 == 0) break;
          } while( true );
        }
      }
    }
LAB_012fff58:
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      return 0;
    }
    if ((((*(long *)(lVar12 + 0xb0) != 0) && (*(long *)(*(long *)(lVar12 + 0xb0) + 8) != 0)) &&
        (*(long *)(lVar12 + 0x488) != 0)) &&
       (((*(long *)(*(long *)(lVar12 + 0x488) + 8) != 0 && (*(long *)(lVar12 + 0x2b0) != 0)) &&
        (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) != 0)))) {
      uVar6 = FUN_0277d6c4(lVar1 + 8);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_0124c030(auStack_48,lVar1 + 8);
        uVar8 = FUN_0123d890(local_38,4);
        puVar5 = PTR_DAT_04bbbc78;
        puVar4 = PTR_DAT_04bbbc70;
        if ((uVar8 & 1) == 0) {
          iVar7 = FUN_0123db50(auStack_40,local_38);
          if ((iVar7 - 2U & 0xfffffff9) == 0) {
            return 1;
          }
        }
        else if ((local_38 != (uint *)0x0) && (uVar6 = *local_38, uVar6 != 0)) {
          cVar9 = *PTR_DAT_04bbbc70;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
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
              uVar6 = *local_38;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 0x4c);
              if (-1 < (int)uVar2) {
                if (((char *)((ulong)uVar2 + (long)local_38) != (char *)0x0) &&
                   (*(char *)((ulong)uVar2 + (long)local_38) != '\0')) {
                  return 1;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)uVar6;
            if ((puVar10 == (uint *)0x0) || (local_38 == puVar10)) break;
            lVar12 = 0xc;
            if (*(char *)((long)local_38 + (10 - (long)puVar10)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)local_38 + (lVar12 - (long)puVar10);
            if (lVar12 == 0) break;
            uVar8 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar10));
            *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
            if (uVar8 == 0) break;
            piVar11 = (int *)(lVar12 + 4);
            while (piVar11[-1] != -0xa58ccc9) {
              piVar11 = piVar11 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_013000e0;
            }
            iVar7 = 0;
            if (*piVar11 != -1) {
              iVar7 = *piVar11;
            }
            *(int *)(puVar5 + 0x4c) = iVar7;
            uVar6 = *local_38;
            if (uVar6 == 0) break;
          } while( true );
        }
      }
    }
LAB_013000e0:
    lVar12 = *(long *)puVar3;
    if (lVar12 == 0) {
      return 0;
    }
    if ((((*(long *)(lVar12 + 0xb0) != 0) && (*(long *)(*(long *)(lVar12 + 0xb0) + 8) != 0)) &&
        (*(long *)(lVar12 + 0x488) != 0)) &&
       (((*(long *)(*(long *)(lVar12 + 0x488) + 8) != 0 && (*(long *)(lVar12 + 0x2b0) != 0)) &&
        (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) != 0)))) {
      uVar6 = FUN_0277d6c4(lVar1 + 0x10);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_0124c030(auStack_48,lVar1 + 0x10);
        uVar8 = FUN_0123d890(local_38,4);
        puVar5 = PTR_DAT_04bbbc78;
        puVar4 = PTR_DAT_04bbbc70;
        if ((uVar8 & 1) == 0) {
          iVar7 = FUN_0123db50(auStack_40,local_38);
          if ((iVar7 - 2U & 0xfffffff9) == 0) {
            return 1;
          }
        }
        else if ((local_38 != (uint *)0x0) && (uVar6 = *local_38, uVar6 != 0)) {
          cVar9 = *PTR_DAT_04bbbc70;
          do {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar5 = 0xffffffffffffffff;
              *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
              *puVar4 = 1;
              *(undefined4 *)(puVar5 + 0x60) = 0xffffffff;
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
              uVar6 = *local_38;
            }
            else {
              uVar2 = *(uint *)(puVar5 + 0x4c);
              if (-1 < (int)uVar2) {
                if (((char *)((ulong)uVar2 + (long)local_38) != (char *)0x0) &&
                   (*(char *)((ulong)uVar2 + (long)local_38) != '\0')) {
                  return 1;
                }
                break;
              }
              if (uVar2 != 0xffffffff) break;
            }
            puVar10 = (uint *)(ulong)uVar6;
            if ((puVar10 == (uint *)0x0) || (local_38 == puVar10)) break;
            lVar12 = 0xc;
            if (*(char *)((long)local_38 + (10 - (long)puVar10)) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)local_38 + (lVar12 - (long)puVar10);
            if (lVar12 == 0) break;
            uVar8 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar10));
            *(undefined4 *)(puVar5 + 0x4c) = 0xfffffffe;
            if (uVar8 == 0) break;
            piVar11 = (int *)(lVar12 + 4);
            while (piVar11[-1] != -0xa58ccc9) {
              piVar11 = piVar11 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) goto LAB_01300268;
            }
            iVar7 = 0;
            if (*piVar11 != -1) {
              iVar7 = *piVar11;
            }
            *(int *)(puVar5 + 0x4c) = iVar7;
            uVar6 = *local_38;
            if (uVar6 == 0) break;
          } while( true );
        }
      }
    }
LAB_01300268:
    lVar12 = *(long *)puVar3;
    if (((((lVar12 != 0) && (*(long *)(lVar12 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(lVar12 + 0xb0) + 8) != 0)) &&
        ((*(long *)(lVar12 + 0x488) != 0 && (*(long *)(*(long *)(lVar12 + 0x488) + 8) != 0)))) &&
       ((*(long *)(lVar12 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) != 0)))) {
      uVar6 = FUN_0277d6c4(lVar1 + 0x18);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar12 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        FUN_0124c030(auStack_48,lVar1 + 0x18);
        uVar8 = FUN_0123d890(local_38,4);
        puVar4 = PTR_DAT_04bbbc78;
        puVar3 = PTR_DAT_04bbbc70;
        if ((uVar8 & 1) == 0) {
          iVar7 = FUN_0123db50(auStack_40,local_38);
          if ((iVar7 - 2U & 0xfffffff9) == 0) {
            return 1;
          }
        }
        else if ((local_38 != (uint *)0x0) && (uVar6 = *local_38, uVar6 != 0)) {
          cVar9 = *PTR_DAT_04bbbc70;
          while( true ) {
            if (cVar9 == '\0') {
              cVar9 = '\x01';
              *(undefined8 *)puVar4 = 0xffffffffffffffff;
              *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
              *puVar3 = 1;
              *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
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
              uVar6 = *local_38;
            }
            else {
              uVar2 = *(uint *)(puVar4 + 0x4c);
              if (-1 < (int)uVar2) {
                if ((char *)((ulong)uVar2 + (long)local_38) == (char *)0x0) {
                  return 0;
                }
                if (*(char *)((ulong)uVar2 + (long)local_38) == '\0') {
                  return 0;
                }
                return 1;
              }
              if (uVar2 != 0xffffffff) {
                return 0;
              }
            }
            puVar10 = (uint *)(ulong)uVar6;
            if (puVar10 == (uint *)0x0) {
              return 0;
            }
            if (local_38 == puVar10) break;
            lVar1 = 0xc;
            if (*(char *)((long)local_38 + (10 - (long)puVar10)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)local_38 + (lVar1 - (long)puVar10);
            if (lVar1 == 0) {
              return 0;
            }
            uVar8 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar10));
            *(undefined4 *)(puVar4 + 0x4c) = 0xfffffffe;
            if (uVar8 == 0) {
              return 0;
            }
            piVar11 = (int *)(lVar1 + 4);
            while (piVar11[-1] != -0xa58ccc9) {
              piVar11 = piVar11 + 2;
              uVar8 = uVar8 - 1;
              if (uVar8 == 0) {
                return 0;
              }
            }
            iVar7 = 0;
            if (*piVar11 != -1) {
              iVar7 = *piVar11;
            }
            *(int *)(puVar4 + 0x4c) = iVar7;
            uVar6 = *local_38;
            if (uVar6 == 0) {
              return 0;
            }
          }
          return 0;
        }
      }
    }
  }
  return 0;
}

